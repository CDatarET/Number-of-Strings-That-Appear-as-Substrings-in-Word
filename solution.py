class Solution:
    def numOfStrings(self, patterns: list[str], word: str) -> int:
        n = 0
        for p in patterns:
            if p in word:
                n += 1
        
        return n
