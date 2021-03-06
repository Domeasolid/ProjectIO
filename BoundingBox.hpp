/*
 * Copyright 2013 Cepheid
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
*/
#ifndef BoundingBoxHPP
#define BoundingBoxHPP

namespace io {
  struct BoundingBox {
    BoundingBox(const float x, const float y, const float w, const float h) {
      this->x = x;
      this->y = y;
      this->w = w;
      this->h = h;
    }

    float x;
    float y;
    float w;
    float h;
  };
}

#endif
