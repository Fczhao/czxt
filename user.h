/*
 * @Author: Fczhao
 * @Date: 2023-05-22 15:21:31
 */
#ifndef USER_H
#define USER_H
#include <string>
class user {
  private:
    std::string password;
    int qx;
  public:
    std::string username;
    user();
    user(std::string _name, std::string _passwd);
    bool change_passwd(std::string passwd);
    bool ispasswd(std::string passwd);
    bool isuser(std::string userid);
    bool login(std::string userid, std::string passwd);
};
#endif