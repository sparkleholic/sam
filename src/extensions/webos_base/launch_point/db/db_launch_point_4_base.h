// Copyright (c) 2017-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef DB_LAUNCH_POINT_4_BASE_H
#define DB_LAUNCH_POINT_4_BASE_H

#include "core/base/db_base.h"

#include <string>

class DBLaunchPoint4Base: public DBBase {
public:
  DBLaunchPoint4Base();
  virtual ~DBLaunchPoint4Base();

  virtual void Init() override;

  virtual bool InsertData(const pbnjson::JValue& json) override;
  virtual bool UpdateData(const pbnjson::JValue& json) override;
  virtual bool DeleteData(const pbnjson::JValue& json) override;

};

#endif
