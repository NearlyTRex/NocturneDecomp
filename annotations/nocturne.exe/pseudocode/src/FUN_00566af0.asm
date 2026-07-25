; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00566af0(int param_1)
;
;
; XREF[1]:
;   FUN_00566b20 at 00566b46
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566af0
        ;   Label: FUN_00566af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00566af1
    MOV EDX,dword ptr [EBX + 0x8]       ; 00566af5
    XOR EAX,EAX                         ; 00566af8
    MOV AL,byte ptr [EDX]               ; 00566afa
    TEST EAX,EAX                        ; 00566afc
    JZ 0x00566b06                       ; 00566afe
        ;   XREF to: 00566b06 (CONDITIONAL_JUMP)  ; LAB_00566b06
    INC EDX                             ; 00566b00
    MOV dword ptr [EBX + 0x8],EDX       ; 00566b01
    POP EBX                             ; 00566b04
    RET                                 ; 00566b05
    MOV DL,byte ptr [EBX + 0x10]        ; 00566b06
        ;   Label: LAB_00566b06
    OR DL,0x2                           ; 00566b09
    MOV EAX,0xffffffff                  ; 00566b0c
    MOV byte ptr [EBX + 0x10],DL        ; 00566b11
    POP EBX                             ; 00566b14
    RET                                 ; 00566b15

