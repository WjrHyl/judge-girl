# 題目描述
二元搜尋樹（Binary Search Tree），也稱二叉搜索樹、有序二元樹（ordered binary tree），排序二元樹 <br>
（sorted binary tree），是指一棵空樹或者具有下列性質的二元樹： <br>
- 若任意節點的左子樹不空，則左子樹上所有結點的值均小於它的根結點的值；
- 任意節點的右子樹不空，則右子樹上所有結點的值均大於它的根結點的值；
- 任意節點的左、右子樹也分別為二元搜尋樹。
- 沒有鍵值相等的節點（no duplicate nodes）。
通常一開始學到二元搜尋樹，會先教插入算法，現在的這個問題很簡單，只是稍微要求效率。 <br>
# 輸入格式
輸入有多組測資，每一組，第一行有一個數字 N (0<N<131072)，接下來會建入 N 個數字 M (signed 32- <br>
bit) ，沒有數字會重複。
# 輸出格式
對於每一組測資，輸出一行的前序走訪。
# 後記
- 參考![Learn C The Hard Way](https://learncodethehardway.org/c/) <br>
上述寫法用在 Singleton 比較好，用來寫 node 過於肥大。 free()  的時候請特別小心，這會與當初  malloc  <br>
一整塊空間一起回收，別總是利用限有的空間配置！