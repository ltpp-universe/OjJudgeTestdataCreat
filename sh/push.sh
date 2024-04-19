#!/bin/bash
git add .;
git commit -m "feat:update";
git push github main;
echo -e "\e[32mgithub push finish\e[0m";
git push ltpp main;
echo -e "\e[32mltpp push finish\e[0m";
echo "按回车键继续...";
read -n 1;