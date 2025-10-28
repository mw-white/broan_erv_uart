#pragma once

#include "esphome/components/number/number.h"
#include "../broan.h"

class BroanComponent;

namespace esphome {
namespace broan {

class CurrentHumidityNumber : public number::Number, public Parented<BroanComponent> {
 public:
  CurrentHumidityNumber() = default;
  
 protected:
  void control(float value) override;
};

}  // namespace broan
}  // namespace esphome