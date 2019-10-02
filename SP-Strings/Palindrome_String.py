
def Palindrome(s):
    st=[]
    flag=0
    for i in range(len(s)):
        st.append(str(s[i]))
    for i in range(len(s)):
        if str(st.pop())==s[i]:
            flag+=1
            
    
    if flag==len(s):
        return "Yes"
    else:
        return "No"
        
t=int(input())
while t:
    n=input()
    n=int(n)
    s=input()
    print(Palindrome(s))
    t-=1
