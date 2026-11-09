; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005c2c40(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2c70 at 005c2c96
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2c40
        ;   Label: crt_unknown.c_FUN_005c2c40
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c2c41
    MOV EDX,dword ptr [EBX + 0x8]       ; 005c2c45
    XOR EAX,EAX                         ; 005c2c48
    MOV AL,byte ptr [EDX]               ; 005c2c4a
    TEST EAX,EAX                        ; 005c2c4c
    JZ 0x005c2c56                       ; 005c2c4e
        ;   XREF to: 005c2c56 (CONDITIONAL_JUMP)  ; LAB_005c2c56
    INC EDX                             ; 005c2c50
    MOV dword ptr [EBX + 0x8],EDX       ; 005c2c51
    POP EBX                             ; 005c2c54
    RET                                 ; 005c2c55
    MOV DL,byte ptr [EBX + 0x10]        ; 005c2c56
        ;   Label: LAB_005c2c56
    OR DL,0x2                           ; 005c2c59
    MOV EAX,0xffffffff                  ; 005c2c5c
    MOV byte ptr [EBX + 0x10],DL        ; 005c2c61
    POP EBX                             ; 005c2c64
    RET                                 ; 005c2c65

