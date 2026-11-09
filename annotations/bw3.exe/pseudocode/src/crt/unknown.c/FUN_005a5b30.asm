; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005a5b30(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a5b60 at 005a5b86
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5b30
        ;   Label: crt_unknown.c_FUN_005a5b30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5b31
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a5b35
    XOR EAX,EAX                         ; 005a5b38
    MOV AL,byte ptr [EDX]               ; 005a5b3a
    TEST EAX,EAX                        ; 005a5b3c
    JZ 0x005a5b46                       ; 005a5b3e
        ;   XREF to: 005a5b46 (CONDITIONAL_JUMP)  ; LAB_005a5b46
    INC EDX                             ; 005a5b40
    MOV dword ptr [EBX + 0x8],EDX       ; 005a5b41
    POP EBX                             ; 005a5b44
    RET                                 ; 005a5b45
    MOV DL,byte ptr [EBX + 0x10]        ; 005a5b46
        ;   Label: LAB_005a5b46
    OR DL,0x2                           ; 005a5b49
    MOV EAX,0xffffffff                  ; 005a5b4c
    MOV byte ptr [EBX + 0x10],DL        ; 005a5b51
    POP EBX                             ; 005a5b54
    RET                                 ; 005a5b55

