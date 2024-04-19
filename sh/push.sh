#!/bin/bash
git add .;
echo -n "请输入更新消息并按回车键: "
read update_message
if [ -z "$update_message" ]; then
    echo "更新消息不能为空，请重新运行脚本并输入有效的更新消息。"
    echo "按回车键退出...";
    read -n 1;
    exit 1
fi
git commit -m "feat:$update_message";
git push github main;
echo -e "\e[32mgithub push finish\e[0m";
git push ltpp main;
echo -e "\e[32mltpp push finish\e[0m";
echo "按回车键继续...";
read -n 1;