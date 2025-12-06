; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 at 0054bdc7
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 at 0054be8a
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054bf59
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 at 0054c488
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 at 0054c3ea
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0 at 0054c4d6
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f39e
;   WatcomTypeInfo g_CPackedBitmapTypeInfo
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bd60
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
    PUSH ESI                            ; 0054bd61
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054bd62
    MOV EDX,0x63f39e                    ; 0054bd66 | = "..\\cockpit\\pkbmpset.cpp" | s_cockpit_pkbmpset_cpp_0063f39e = ..\cockpit\pkbmpset.cpp
    PUSH 0x662260                       ; 0054bd6b | WatcomTypeInfo g_CPackedBitmapTypeInfo
    MOV ESI,dword ptr [EBX + 0x4]       ; 0054bd70
    MOV ECX,0x4d                        ; 0054bd73
    PUSH ESI                            ; 0054bd78
    MOV dword ptr [0x0067d20c],EDX      ; 0054bd79 | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0054bd7f | int g_CurrentDebugLine
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0054bd85 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054bd8a
    PUSH EAX                            ; 0054bd8d
    CALL crt_memory.c_free_FUN_005fe659 ; 0054bd8e | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX],0x0             ; 0054bd93
    ADD ESP,0x4                         ; 0054bd99
    MOV dword ptr [EBX + 0x4],0x0       ; 0054bd9c
    POP ESI                             ; 0054bda3
    POP EBX                             ; 0054bda4
    RET                                 ; 0054bda5

