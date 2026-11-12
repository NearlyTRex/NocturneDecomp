; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_005175b0(undefined4 *param_1)
;
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710 at 00517733
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005175b0
        ;   Label: cockpit_pkbitmap.cpp_FUN_005175b0
    MOV dword ptr [EAX],0x0             ; 005175b4
    ADD EAX,0x8                         ; 005175ba
    PUSH 0x14                           ; 005175bd
    MOV dword ptr [EAX + -0x4],0x0      ; 005175bf
    PUSH 0x0                            ; 005175c6
    MOV dword ptr [EAX + 0x14],0x0      ; 005175c8
    PUSH EAX                            ; 005175cf
    MOV dword ptr [EAX + 0x18],0x0      ; 005175d0
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005175d7
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005175dc
    RET                                 ; 005175df

