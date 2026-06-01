// Copyright 2024 Patchwing Authors. All rights reserved.
// Stub implementation: Patchwing does not use Shorebird's updater library.

#include "flutter/shell/common/shorebird/shorebird.h"

#include "flutter/fml/logging.h"

namespace flutter {

void ConfigureShorebird(std::string code_cache_path,
                        std::string app_storage_path,
                        Settings& settings,
                        const std::string& shorebird_yaml,
                        const std::string& version,
                        const std::string& version_code) {
  // Patchwing: shorebird updater is disabled.
  // This function is intentionally a no-op.
  FML_LOG(INFO) << "Patchwing: Shorebird updater disabled (stub).";
}

}  // namespace flutter
