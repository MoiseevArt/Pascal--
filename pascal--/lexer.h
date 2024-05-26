#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

// ��������� ��� �������� �������
struct Token {
    string type;
    string value;
};

// ����������� ����������
class Lexer {
public:
    Lexer(const string& source_code);
    Token next_token();
    const vector<Token>& get_tokens() const;

private:
    vector<Token> tokens;
    size_t current;
    string source_code;

    void tokenize();
};
