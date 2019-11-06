/*
 * Copyright 2019 范軒瑋, HsuanTingLu
 *
 * Created by 范軒瑋 on 2019-09-25.
 *
 * logging module
 *
 */

#include "Logger.h"

namespace logging {

LEVEL Logger::level = LEVEL::DEBUG;

Logger::Logger(const std::string& name) : name(name) {}

void Logger::setLevel(logging::LEVEL level) { Logger::level = level; }

}  // namespace logging
