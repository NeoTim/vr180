/*
 * Copyright 2018 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VR180_CPP_VIDEO_FORMAT_ATOM_READER_H_
#define VR180_CPP_VIDEO_FORMAT_ATOM_READER_H_

#include <memory>

#include "cpp/video/atom.h"

namespace vr180 {

// Reads the atom from a BinaryReader stream.
// It is not thread-safe to concurrently call with the same BinaryReader.
std::unique_ptr<Atom> ReadAtom(BinaryReader* input);

}  // namespace vr180

#endif  // VR180_CPP_VIDEO_FORMAT_ATOM_READER_H_
