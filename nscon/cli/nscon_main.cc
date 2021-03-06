// Copyright 2014 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nscon/cli/nscon_main.h"

#include "nscon/cli/nscon_runner.h"
#include "util/task/statusor.h"

namespace containers {
namespace nscon {
namespace cli {

// Main function of nscon.
int Main(int argc, char *argv[]) {
  NsconRunner nscon_runner;
  return nscon_runner.Run(argc, argv);
}

}  // namespace cli
}  // namespace nscon
}  // namespace containers
