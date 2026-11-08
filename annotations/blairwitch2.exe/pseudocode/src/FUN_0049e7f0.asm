; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_0049e850 at 0049e919
;
; Referenced Globals:
;   undefined4 DAT_01ca15a4
;
; Called Functions:
;   FUN_0049b2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e7f0
        ;   Label: FUN_0049e7f0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049e7f1
    PUSH EDX                            ; 0049e7f5
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049e7f6
    MOV EDX,dword ptr [0x01ca15a4]      ; 0049e7fa | DAT_01ca15a4
    PUSH dword ptr [ESP + 0x1c]         ; 0049e800
    LEA EAX,[EDX*0x8 + 0x0]             ; 0049e804
    PUSH dword ptr [ESP + 0x1c]         ; 0049e80b
    ADD EAX,EDX                         ; 0049e80f
    PUSH dword ptr [ESP + 0x1c]         ; 0049e811
    SHL EAX,0x2                         ; 0049e815
    PUSH ECX                            ; 0049e818
    ADD EAX,0x1ca15a8                   ; 0049e819
    PUSH EAX                            ; 0049e81e
    CALL FUN_0049b2e0                   ; 0049e81f
        ;   XREF to: 0049b2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049b2e0()
    MOV EBX,dword ptr [0x01ca15a4]      ; 0049e824 | DAT_01ca15a4
    INC EBX                             ; 0049e82a
    ADD ESP,0x18                        ; 0049e82b
    MOV dword ptr [0x01ca15a4],EBX      ; 0049e82e | DAT_01ca15a4
    CMP EBX,0x64                        ; 0049e834
    JGE 0x0049e83b                      ; 0049e837
        ;   XREF to: 0049e83b (CONDITIONAL_JUMP)  ; LAB_0049e83b
    POP EBX                             ; 0049e839
    RET                                 ; 0049e83a
    PUSH EDI                            ; 0049e83b
        ;   Label: LAB_0049e83b
    XOR EDI,EDI                         ; 0049e83c
    MOV dword ptr [0x01ca15a4],EDI      ; 0049e83e | DAT_01ca15a4
    POP EDI                             ; 0049e844
    POP EBX                             ; 0049e845
    RET                                 ; 0049e846

