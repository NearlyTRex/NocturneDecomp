; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CCheesyCipher_process_FUN_00434dd0(CCheesyCipher *this_ptr,int *param_2,int *param_3)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   param_2
; int *            Stack[0xc]:4   param_3
;
; Called Functions:
;   support_codec.cpp_FUN_00434d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434dd0
        ;   Label: support_codec.cpp_CCheesyCipher_process_FUN_00434dd0
    PUSH ESI                            ; 00434dd1
    PUSH EDI                            ; 00434dd2
    PUSH EBP                            ; 00434dd3
    MOV EDI,dword ptr [ESP + 0x18]      ; 00434dd4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00434dd8
    PUSH EDI                            ; 00434ddc
        ;   Label: LAB_00434ddc
    MOV EAX,dword ptr [EDI]             ; 00434ddd
    CALL dword ptr [EAX + 0x4]          ; 00434ddf
    ADD ESP,0x4                         ; 00434de2
    MOV EBX,EAX                         ; 00434de5
    CMP EAX,-0x1                        ; 00434de7
    JZ 0x00434df7                       ; 00434dea
        ;   XREF to: 00434df7 (CONDITIONAL_JUMP)  ; LAB_00434df7
    TEST EAX,EAX                        ; 00434dec
    JGE 0x00434e01                      ; 00434dee
        ;   XREF to: 00434e01 (CONDITIONAL_JUMP)  ; LAB_00434e01
    XOR EAX,EAX                         ; 00434df0
        ;   Label: LAB_00434df0
    POP EBP                             ; 00434df2
    POP EDI                             ; 00434df3
    POP ESI                             ; 00434df4
    POP EBX                             ; 00434df5
    RET                                 ; 00434df6
    MOV EAX,0x1                         ; 00434df7
        ;   Label: LAB_00434df7
    POP EBP                             ; 00434dfc
    POP EDI                             ; 00434dfd
    POP ESI                             ; 00434dfe
    POP EBX                             ; 00434dff
    RET                                 ; 00434e00
    XOR EAX,EAX                         ; 00434e01
        ;   Label: LAB_00434e01
    MOV AL,BL                           ; 00434e03
    PUSH EAX                            ; 00434e05
    MOV EDX,dword ptr [ESP + 0x18]      ; 00434e06
    PUSH EDX                            ; 00434e0a
    XOR EBX,EBX                         ; 00434e0b
    CALL support_codec.cpp_FUN_00434d60 ; 00434e0d
        ;   XREF to: 00434d60 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434d60()
    MOV BL,AL                           ; 00434e12
    XOR EAX,EAX                         ; 00434e14
    ADD ESP,0x8                         ; 00434e16
    MOV AL,BL                           ; 00434e19
    PUSH EAX                            ; 00434e1b
    MOV ESI,dword ptr [EBP]             ; 00434e1c
    PUSH EBP                            ; 00434e1f
    CALL dword ptr [ESI + 0x4]          ; 00434e20
    MOV ESI,EAX                         ; 00434e23
    ADD ESP,0x8                         ; 00434e25
    TEST EAX,EAX                        ; 00434e28
    JGE 0x00434ddc                      ; 00434e2a
        ;   XREF to: 00434ddc (CONDITIONAL_JUMP)  ; LAB_00434ddc
    PUSH EBX                            ; 00434e2c
    MOV EAX,dword ptr [EDI]             ; 00434e2d
    PUSH EDI                            ; 00434e2f
    CALL dword ptr [EAX + 0x8]          ; 00434e30
    ADD ESP,0x8                         ; 00434e33
    TEST EAX,EAX                        ; 00434e36
    JZ 0x00434df0                       ; 00434e38
        ;   XREF to: 00434df0 (CONDITIONAL_JUMP)  ; LAB_00434df0
    CMP ESI,-0x1                        ; 00434e3a
    JNZ 0x00434df0                      ; 00434e3d
        ;   XREF to: 00434df0 (CONDITIONAL_JUMP)  ; LAB_00434df0
    MOV EAX,0x2                         ; 00434e3f
    POP EBP                             ; 00434e44
    POP EDI                             ; 00434e45
    POP ESI                             ; 00434e46
    POP EBX                             ; 00434e47
    RET                                 ; 00434e48

