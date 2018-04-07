include "version.h"
#include <string>
#include "lib.h"

std::string fullVersion() {
  auto version = (PROJECT_VERSION_MAJOR) + "." + (PROJECT_VERSION_MINOR) + "." + (PROJECT_VERSION_PATCH);
  return version;
}

int version() {
  return PROJECT_VERSION_PATCH;
}
