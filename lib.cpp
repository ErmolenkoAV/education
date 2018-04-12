#include "version.h"
#include <stdlib.h>
#include <string>
#include "lib.h"

std::string fullVersion() {
  std::string prVrMj(PROJECT_VERSION_MAJOR);
  std::string prVrMn(PROJECT_VERSION_MINOR);
  std::string prVrPt(PROJECT_VERSION_PATCH);
  auto version = prVrMj + "." + prVrMn + "." + prVrPt;
  return version;
}

int version() {
  return atoi(PROJECT_VERSION_PATCH);
}
