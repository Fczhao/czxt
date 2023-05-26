#include "user.h"
user::user(){}
user::user(std::string _name, std::string _passwd) {
  username = _name;
  password = _passwd;
}
bool user::change_passwd(std::string passwd) {
  if(passwd.length() > 12) return false;
  password = passwd;
  return true;
}
bool user::ispasswd(std::string passwd) {
  return passwd == password;
}
bool user::isuser(std::string userid) {
  return username == userid;
}
bool user::login(std::string userid, std::string passwd) {
  return isuser(userid) && ispasswd(passwd); 
}