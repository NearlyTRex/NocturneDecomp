; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_004f5c40(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_FUN_004f54c0 at 004f56c4
;   cockpit_pkbmpset.cpp_FUN_004f59d0 at 004f5a04
;
; Called Functions:
;   crt_string.c__strncpy_FUN_00565f70
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 004f5c40
        ;   Label: cockpit_pkbmpset.cpp_FUN_004f5c40
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f5c42
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f5c46
    PUSH EDX                            ; 004f5c4a
    ADD EAX,0x8                         ; 004f5c4b
    PUSH EAX                            ; 004f5c4e
    CALL crt_string.c__strncpy_FUN_00565f70 ; 004f5c4f
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strncpy_FUN_00565f70()
    ADD ESP,0xc                         ; 004f5c54
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f5c57
    MOV byte ptr [EAX + 0x1b],0x0       ; 004f5c5b
    RET                                 ; 004f5c5f

