; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00565c10(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_004f1830 at 004f1fb7
;   FUN_00515e80 at 0051606e
;   FUN_00516de0 at 005170b8
;   FUN_00566080 at 0056611d
;   FUN_005a1ea0 at 005a2190
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6020
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00565c10 | DAT_01c6cee8
        ;   Label: FUN_00565c10
    JNZ 0x00565c1c                      ; 00565c17
        ;   XREF to: 00565c1c (CONDITIONAL_JUMP)  ; LAB_00565c1c
    XOR EAX,EAX                         ; 00565c19
    RET                                 ; 00565c1b
    PUSH ESI                            ; 00565c1c
        ;   Label: LAB_00565c1c
    PUSH EBX                            ; 00565c1d
    MOV ECX,dword ptr [ESP + 0x14]      ; 00565c1e
    PUSH ECX                            ; 00565c22
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565c23
    PUSH EBX                            ; 00565c27
    MOV ESI,dword ptr [ESP + 0x14]      ; 00565c28
    PUSH ESI                            ; 00565c2c
    CALL dword ptr [0x02cf6020]         ; 00565c2d | DAT_02cf6020
    ADD ESP,0xc                         ; 00565c33
    POP EBX                             ; 00565c36
    POP ESI                             ; 00565c37
    RET                                 ; 00565c38

