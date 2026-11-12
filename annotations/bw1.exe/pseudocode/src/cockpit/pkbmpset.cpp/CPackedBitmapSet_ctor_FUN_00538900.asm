; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_00538900(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60 at 00538a83
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00538900
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900
    MOV dword ptr [EAX],0x0             ; 00538904
    ADD EAX,0x8                         ; 0053890a
    PUSH 0x14                           ; 0053890d
    MOV dword ptr [EAX + -0x4],0x0      ; 0053890f
    PUSH 0x0                            ; 00538916
    MOV dword ptr [EAX + 0x14],0x0      ; 00538918
    PUSH EAX                            ; 0053891f
    MOV dword ptr [EAX + 0x18],0x0      ; 00538920
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00538927
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0053892c
    RET                                 ; 0053892f

