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
#ifndef StateMachineHPP
#define StateMachineHPP

//  An interface used to help the states switch from themselves.
namespace io {
  enum class GameState {
    TOWN,
    MAZE,
    BATTLE,
  };

  class StateMachine {
  public:
    virtual ~StateMachine() { }
    virtual void setState(const GameState state) = 0;
  private:
  };
}

#endif
