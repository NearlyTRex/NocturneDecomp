; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0052efc2 at 0052efdc
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dd8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532b70 | DAT_01c02594
        ;   Label: FUN_00532b70
    JNZ 0x00532b7c                      ; 00532b77
        ;   XREF to: 00532b7c (CONDITIONAL_JUMP)  ; LAB_00532b7c
    XOR EAX,EAX                         ; 00532b79
    RET                                 ; 00532b7b
    PUSH EDI                            ; 00532b7c
        ;   Label: LAB_00532b7c
    PUSH ESI                            ; 00532b7d
    PUSH EBX                            ; 00532b7e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00532b7f
    PUSH ECX                            ; 00532b83
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00532b84
    PUSH EBX                            ; 00532b88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00532b89
    PUSH ESI                            ; 00532b8d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00532b8e
    PUSH EDI                            ; 00532b92
    CALL dword ptr [0x02dc9dd8]         ; 00532b93 | DAT_02dc9dd8
    ADD ESP,0x10                        ; 00532b99
    POP EBX                             ; 00532b9c
    POP ESI                             ; 00532b9d
    POP EDI                             ; 00532b9e
    RET                                 ; 00532b9f

