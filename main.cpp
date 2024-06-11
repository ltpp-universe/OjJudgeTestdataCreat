// 编译器最低需要支持C++17标准
// g++ .\main.cpp -std=c++20
#include <bits/stdc++.h>
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#define PF first
#define PS second
#define UM unordered_map
#define US unordered_set
#define MS multiset
#define F(i, start, end, offset) for (int i = start; i < end; i += offset)
#define F_(i, start, end, offset) for (int i = start; i >= end; i -= offset)
#define fastcpp ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define random(a, b) (rand() % (b - a) + a)
using namespace std;
using LL = long long int;
using PII = pair<int, int>;
using STR = string;

/**
 * @brief 用户代码
 */
class UserCode
{
public:
    /**
     * @brief 运行用户代码
     * @param file_in 输入样例文件流
     * @param file_out 输出样例文件流
     * @param fs_idx 当前进行的样例下标
     * @param total_test_num 总的文件样例组数
     */
    static void run(ofstream &file_in, ofstream &file_out, int fs_idx, int total_test_num)
    {
        /**
         * 这里写具体逻辑代码
         * 输出到输入用例使用file_in <<
         * 输出到输入用例使用file_out <<
         * 使用方法和cout完全一致，不同的是输出的位置为文件
         * 使用例如
         * 输出到输入用例文件一个字符串abc，代码：file_in << "abc";
         * 输出到输出用例文件一个字符串defg，代码：file_in << "defg";
         */
    }
};

/**
 * @brief 判题机样例生成
 */
class JudgeTestdata
{
private:
    int test_num;
    /**
     * @brief 新建文件夹
     * @param path 文件夹路径
     * @return true 文件夹创建成功
     * @return false 文件夹创建失败
     */
    bool createDirectory(const string &path)
    {
        try
        {
            if (!filesystem::exists(path))
            {
                filesystem::create_directory(path);
            }
            return true;
        }
        catch (const std::exception &e)
        {
            cout << "Error creating directory: " << e.what() << endl;
            return false;
        }
    }

public:
    /**
     * @brief 构造函数
     */
    JudgeTestdata()
    {
        srand((unsigned)time(nullptr));
        this->test_num = 10;
    }

    /**
     * @brief 构造函数
     * @param test_num 样例组数目
     */
    JudgeTestdata(int test_num)
    {
        srand((unsigned)time(nullptr));
        this->test_num = test_num;
    }

    /**
     * @brief 重定向输入输出流并且运行用户代码
     */
    void stdioToFileRunCreatJudge()
    {
        string save_dir = "./testdata/";
        this->createDirectory(save_dir);
        F(fs_i, 0, this->test_num, 1)
        {
            ofstream file_in(save_dir + to_string(fs_i) + ".in");
            if (!file_in.is_open())
            {
                cout << "Testin file" << save_dir << fs_i << ".in open error!" << endl;
                return;
            }
            std::ofstream file_out(save_dir + to_string(fs_i) + ".out");
            if (!file_out.is_open())
            {
                cout << "Testout file " << save_dir << fs_i << ".out open error!" << endl;
                return;
            }
            UserCode::run(file_in, file_out, fs_i, this->test_num);
            file_in.close();
            file_out.close();
            cout << (fs_i + 1) << " testdata done!" << endl;
        }
    }
};

int main()
{
    fastcpp;
    JudgeTestdata *judge_testdata = new JudgeTestdata();
    judge_testdata->stdioToFileRunCreatJudge();
    return 0;
}