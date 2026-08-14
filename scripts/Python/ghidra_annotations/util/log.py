import sys
import logging

logger_instance = None


def setup_logging(name="ghidra_script", filename=None, level=logging.DEBUG, timestamp_filename=True):
    """
    Set up simple logging to stdout.

    When running via JoyBox's decompiler_tool, all stdout/stderr (including Java
    System.out) is automatically captured to ~/Logs/output.log by command.py.
    No need for complex file/tee handling here.

    Args:
        name: Logger name
        filename: Ignored (kept for compatibility - JoyBox handles file logging)
        level: Logging level
        timestamp_filename: Ignored (kept for compatibility)
    """
    global logger_instance
    if logger_instance:
        return logger_instance

    # Create instance
    logger = logging.getLogger(name)
    logger.setLevel(level)

    # Format with timestamps
    formatter = logging.Formatter('%(asctime)s [%(levelname)s] %(message)s', datefmt='%Y-%m-%d %H:%M:%S')

    # Console handler only
    stream_handler = logging.StreamHandler(sys.stdout)
    stream_handler.setFormatter(formatter)
    logger.addHandler(stream_handler)
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

def log_warning(message):
    """Report without aborting.

    log_error() exits the process, so it cannot be used to print a list of
    findings: only the first line is ever emitted, and any `--allow-*` flag
    meant to downgrade that finding to a report is never even consulted,
    because the exit happens before the check. Use this for the detail lines
    and let the caller decide whether to raise.
    """
    get_logger().warning(message)

def log_error(message):
    get_logger().error(message)
    sys.exit(1)
