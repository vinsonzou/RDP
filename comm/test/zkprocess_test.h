//
//Copyright 2018 vip.com.
//
//Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with
//the License. You may obtain a copy of the License at
//
//http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
//an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
//specific language governing permissions and limitations under the License.
//

#ifndef RDP_TEST_ZKPROCESS_H
#define RDP_TEST_ZKPROCESS_H

#include <gtest/gtest.h>
#include "../comm_incl.h"
#include "../zk_process.h"
#include "../util.h"
#include "rdp_environment.h"

using std::string;
using std::vector;

namespace rdp_comm {

class ZKProcessTest : public testing::Test {
 public:
  ZKProcessTest() {};
  virtual ~ZKProcessTest() {};

 protected:
  static void SetUpTestCase() {};
  static void TearDownTestCase() {};

  virtual void SetUp() {};
  virtual void TearDown() {};
};

}  // namespace rdp_comm
#endif  // RDP_TEST_ZKPROCESS_H
