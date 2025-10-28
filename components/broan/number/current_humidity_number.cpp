#include "current_humidity_number.h"

namespace esphome {
namespace broan {

void CurrentHumidityNumber::control(float value)
{
	this->parent_->setCurrentHumidity( value );
}

}  // namespace broan
}  // namespace esphome