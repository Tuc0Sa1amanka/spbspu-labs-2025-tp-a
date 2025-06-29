#ifndef DATA_STRUCT_HPP
#define DATA_STRUCT_HPP
#include <string>

namespace sveshnikov
{
  struct DataStruct
  {
    long long key1;
    unsigned long long key2;
    std::string key3;

    bool operator<(const DataStruct &src) const;
  };

  std::istream &operator>>(std::istream &in, DataStruct &dest);
  std::ostream &operator<<(std::ostream &out, const DataStruct &src);
}

#endif
