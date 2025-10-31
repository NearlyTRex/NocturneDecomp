#pragma once

// Function prototypes for crt/sync.cpp
// Generated from Ghidra function signatures

// Original: crt_sync.c_CriticalSectionStub_FUN_00602434
// Address: 00602434
void CriticalSectionStub(void);

// Original: crt_sync.c_CriticalSectionStub_FUN_00602458
// Address: 00602458
undefined CriticalSectionStub();

// Original: crt_sync.c_criticalSectionStub_FUN_00609f20
// Address: 00609f20
undefined criticalSectionStub();

// Original: crt_sync.c_allocate_critical_section_FUN_00609f24
// Address: 00609f24
LPCRITICAL_SECTION allocate::critical_section(void);

// Original: crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
// Address: 0060a04c
void reset::reentrant_critical_section_state(ReentrantCriticalSection * rcs);

// Original: crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
// Address: 0060a060
void enter::reentrant_critical_section(ReentrantCriticalSection * rcs);

// Original: crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
// Address: 0060a0c4
void leave::reentrant_critical_section(ReentrantCriticalSection * rcs);

// Original: crt_sync.c_enter_global_critical_section_FUN_0060a0ec
// Address: 0060a0ec
void enter::global_critical_section(void);

// Original: crt_sync.c_leave_global_critical_section_FUN_0060a0fc
// Address: 0060a0fc
void leave::global_critical_section(void);

// Original: crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c
// Address: 0060a17c
void enter::global_memory_critical_section(void);

// Original: crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c
// Address: 0060a18c
void leave::global_memory_critical_section(void);

// Original: crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c
// Address: 0060a19c
void enter::global_thread_critical_section(void);

// Original: crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac
// Address: 0060a1ac
void leave::global_thread_critical_section(void);

// Original: crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc
// Address: 0060a1bc
void enter::global_io_critical_section(void);

// Original: crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc
// Address: 0060a1cc
undefined leave::global_io_critical_section();

// Original: crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec
// Address: 0060a1ec
void leave::global_runtime_critical_section(void);
