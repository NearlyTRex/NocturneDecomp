; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_005105e0(undefined4 *param_1)
;
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740 at 00510763
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005105e0
        ;   Label: cockpit_pkbitmap.cpp_FUN_005105e0
    MOV dword ptr [EAX],0x0             ; 005105e4
    ADD EAX,0x8                         ; 005105ea
    PUSH 0x14                           ; 005105ed
    MOV dword ptr [EAX + -0x4],0x0      ; 005105ef
    PUSH 0x0                            ; 005105f6
    MOV dword ptr [EAX + 0x14],0x0      ; 005105f8
    PUSH EAX                            ; 005105ff
    MOV dword ptr [EAX + 0x18],0x0      ; 00510600
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00510607
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0051060c
    RET                                 ; 0051060f

