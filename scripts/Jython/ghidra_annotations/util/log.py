import os
import sys
import logging

logger_instance = None

def setup_logging(name = "ghidra_script", filename = "ghidra_script.log", level = logging.DEBUG):

    # Get existing instance
    global logger_instance
    if logger_instance:
        return logger_instance

    # Create instance
    logger = logging.getLogger(name)
    logger.setLevel(level)

    # Console handler
    formatter = logging.Formatter('[%(levelname)s] %(message)s')
    stream_handler = logging.StreamHandler(sys.stdout)
    stream_handler.setFormatter(formatter)
    logger.addHandler(stream_handler)

    # File handler
    file_handler = logging.FileHandler(filename, mode='w')
    file_handler.setFormatter(formatter)
    logger.addHandler(file_handler)

    # Add instance
    logger.propagate = False
    logger_instance = logger
    return logger

def get_logger():
    global logger_instance
    if not logger_instance:
        raise RuntimeError("Logger not initialized. Call setup_logging() first.")
    return logger_instance

def log_info(message):
    get_logger().info(message)

def log_error(message):
    get_logger().error(message)
    sys.exit(1)
