; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00565c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   FUN_00439da0 at 00439f10
;   FUN_0043bac0 at 0043bc04
;   FUN_00466d50 at 00466dd1
;   FUN_004673d0 at 0046744d
;   FUN_005163b0 at 00516486
;   FUN_00517480 at 00517540
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6024
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00565c40 | DAT_01c6cee8
        ;   Label: FUN_00565c40
    JNZ 0x00565c4c                      ; 00565c47
        ;   XREF to: 00565c4c (CONDITIONAL_JUMP)  ; LAB_00565c4c
    XOR EAX,EAX                         ; 00565c49
    RET                                 ; 00565c4b
    PUSH ESI                            ; 00565c4c
        ;   Label: LAB_00565c4c
    PUSH EBX                            ; 00565c4d
    MOV ECX,dword ptr [ESP + 0x14]      ; 00565c4e
    PUSH ECX                            ; 00565c52
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565c53
    PUSH EBX                            ; 00565c57
    MOV ESI,dword ptr [ESP + 0x14]      ; 00565c58
    PUSH ESI                            ; 00565c5c
    CALL dword ptr [0x02cf6024]         ; 00565c5d | DAT_02cf6024
    ADD ESP,0xc                         ; 00565c63
    POP EBX                             ; 00565c66
    POP ESI                             ; 00565c67
    RET                                 ; 00565c68

