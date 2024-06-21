<h2><a href="https://www.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-weighted-undirected-graph">Shortest Path in Weighted undirected graph</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a weighted undirected graph having <strong>n</strong> vertices numbered from 1 to n and <strong>m</strong> edges describing there are edges between a to b with some weight, find the <strong>shortest path </strong>between the vertex 1 and the vertex n,&nbsp;</span><span style="font-size: 18px;"> if there exists a path then <strong>return </strong>a list whose <strong>first element</strong> is the <strong>weight </strong>of the path. If no path exists then return a list containing a single element <strong>-1</strong>.</span></p>
<pre><span style="font-size: 18px;"><strong>Example:</strong>
<strong>Input:</strong>
n = 5, m= 6
edges = [[1,2,2], [2,5,5], [2,3,4], [1,4,1],[4,3,3],[3,5,1]]
<strong>Output:</strong>
5 1 4 3 5
<strong>Explaination:</strong>
Shortest path from 1 to n is by the path 1 4 3 5 whose weight is 5. </span>
</pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(m* log(n))<br><strong>Expected Space Complexity:</strong> O(n)</span></p>
<p><span style="font-size: 18px;">Constraint:<br>2 &lt;= n&nbsp;&lt;= 10<sup>5</sup><br>0 &lt;= m &lt;= 10<sup>5</sup><br>0&lt;= a, b &lt;= n<br>1 &lt;= w &lt;= 10<sup>5</sup></span></p></div>