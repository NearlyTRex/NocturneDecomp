#pragma once

// Function prototypes for crt/sync.cpp
// Generated from Ghidra function signatures

// Original: crt_sync.c_CriticalSectionStub_FUN_00602434
// Address: 00602434
void __cdecl CriticalSectionStub(void);

// Original: crt_sync.c_CriticalSectionStub_FUN_00602458
// Address: 00602458
void CriticalSectionStub(void);

// Original: crt_sync.c_criticalSectionStub_FUN_00609f20
// Address: 00609f20
void criticalSectionStub(void);

// Original: crt_sync.c_allocate_critical_section_FUN_00609f24
// Address: 00609f24
LPCRITICAL_SECTION __cdecl allocate::critical_section(void);

// Original: crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
// Address: 0060a04c
void __cdecl reset::reentrant_critical_section_state(ReentrantCriticalSection *rcs);

// Original: crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
// Address: 0060a060
void __cdecl enter::reentrant_critical_section(ReentrantCriticalSection *rcs);

// Original: crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
// Address: 0060a0c4
void __cdecl leave::reentrant_critical_section(ReentrantCriticalSection *rcs);

// Original: crt_sync.c_enter_global_critical_section_FUN_0060a0ec
// Address: 0060a0ec
void __cdecl enter::global_critical_section(void);

// Original: crt_sync.c_leave_global_critical_section_FUN_0060a0fc
// Address: 0060a0fc
void __cdecl leave::global_critical_section(void);

// Original: crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c
// Address: 0060a17c
void __cdecl enter::global_memory_critical_section(void);

// Original: crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c
// Address: 0060a18c
void __cdecl leave::global_memory_critical_section(void);

// Original: crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c
// Address: 0060a19c
void __cdecl enter::global_thread_critical_section(void);

// Original: crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac
// Address: 0060a1ac
void __cdecl leave::global_thread_critical_section(void);

// Original: crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc
// Address: 0060a1bc
void __cdecl enter::global_io_critical_section(void);

// Original: crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc
// Address: 0060a1cc
void __cdecl leave::global_io_critical_section(void);

// Original: crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec
// Address: 0060a1ec
void __cdecl leave::global_runtime_critical_section(void);
