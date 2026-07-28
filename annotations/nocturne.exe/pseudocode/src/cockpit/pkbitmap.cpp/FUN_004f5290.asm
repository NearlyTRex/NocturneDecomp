; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_004f5290(undefined4 *param_1)
;
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0 at 004f5413
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920 at 004f5943
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f5290
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f5290
    MOV dword ptr [EAX],0x0             ; 004f5294
    ADD EAX,0x8                         ; 004f529a
    PUSH 0x14                           ; 004f529d
    MOV dword ptr [EAX + -0x4],0x0      ; 004f529f
    PUSH 0x0                            ; 004f52a6
    MOV dword ptr [EAX + 0x14],0x0      ; 004f52a8
    PUSH EAX                            ; 004f52af
    MOV dword ptr [EAX + 0x18],0x0      ; 004f52b0
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004f52b7
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004f52bc
    RET                                 ; 004f52bf

