#pragma once

// Structure: SEncryptedMessage
// Ghidra size: 0x18 (24 bytes)
typedef struct SEncryptedMessage {
    ushort key; // 0x0
    uchar encrypted_data[21]; // 0x2
    char message[1]; // 0x17
} SEncryptedMessage;

