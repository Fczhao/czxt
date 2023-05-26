/*
 * @Author: Fczhao
 * @Date: 2023-05-22 15:08:50
 */
#ifndef FILE_H
#define FILE_H
#include <string>
#include "folder.h"
class MyFile {
  public:
    std::string file_name;
    folder* father;
};
#endif