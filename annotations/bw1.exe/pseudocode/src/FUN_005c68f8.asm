; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c68f8(uint param_1)
;
;
; XREF[1]:
;   FUN_005c69a8 at 005c69b2
;
; Referenced Globals:
;   void* PTR_VirtualAlloc_005d0674 = 001d129e
;   undefined4 DAT_00626598
;   undefined4 DAT_00626a6c
;
; Called Functions:
;   FUN_005c0a00
;   FUN_005c6880
;   FUN_005c69bc
;   VirtualAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c68f8
        ;   Label: FUN_005c68f8
    PUSH ESI                            ; 005c68f9
    PUSH EDI                            ; 005c68fa
    CMP dword ptr [0x00626a6c],0x0      ; 005c68fb | DAT_00626a6c
    JNZ 0x005c690a                      ; 005c6902
        ;   XREF to: 005c690a (CONDITIONAL_JUMP)  ; LAB_005c690a
    XOR EAX,EAX                         ; 005c6904
    POP EDI                             ; 005c6906
    POP ESI                             ; 005c6907
    POP EBX                             ; 005c6908
    RET                                 ; 005c6909
    CMP dword ptr [0x00626598],-0x2     ; 005c690a | DAT_00626598
        ;   Label: LAB_005c690a
    JNZ 0x005c6919                      ; 005c6911
        ;   XREF to: 005c6919 (CONDITIONAL_JUMP)  ; LAB_005c6919
    XOR EAX,EAX                         ; 005c6913
    POP EDI                             ; 005c6915
    POP ESI                             ; 005c6916
    POP EBX                             ; 005c6917
    RET                                 ; 005c6918
    LEA EAX,[ESP + 0x10]                ; 005c6919
        ;   Label: LAB_005c6919
    PUSH EAX                            ; 005c691d
    CALL FUN_005c69bc                   ; 005c691e
        ;   XREF to: 005c69bc (UNCONDITIONAL_CALL)  ; undefined FUN_005c69bc()
    ADD ESP,0x4                         ; 005c6923
    TEST EAX,EAX                        ; 005c6926
    JZ 0x005c69a3                       ; 005c6928
        ;   XREF to: 005c69a3 (CONDITIONAL_JUMP)  ; LAB_005c69a3
    PUSH 0x40                           ; 005c692e
    PUSH 0x1000                         ; 005c6930
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c6935
    PUSH ECX                            ; 005c6939
    PUSH 0x0                            ; 005c693a
    CALL dword ptr CS:[0x5d0674]        ; 005c693c | PTR_VirtualAlloc_005d0674
    MOV EBX,EAX                         ; 005c6943
    TEST EAX,EAX                        ; 005c6945
    JZ 0x005c69a3                       ; 005c6947
        ;   XREF to: 005c69a3 (CONDITIONAL_JUMP)  ; LAB_005c69a3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c6949
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c694d
    SUB EAX,0x4                         ; 005c6951
    CMP EAX,ESI                         ; 005c6954
    JBE 0x005c695e                      ; 005c6956
        ;   XREF to: 005c695e (CONDITIONAL_JUMP)  ; LAB_005c695e
    XOR EAX,EAX                         ; 005c6958
    POP EDI                             ; 005c695a
    POP ESI                             ; 005c695b
    POP EBX                             ; 005c695c
    RET                                 ; 005c695d
    MOV dword ptr [ESP + 0x10],EAX      ; 005c695e
        ;   Label: LAB_005c695e
    CMP EAX,0x38                        ; 005c6962
    JNC 0x005c696d                      ; 005c6965
        ;   XREF to: 005c696d (CONDITIONAL_JUMP)  ; LAB_005c696d
    XOR EAX,EAX                         ; 005c6967
    POP EDI                             ; 005c6969
    POP ESI                             ; 005c696a
    POP EBX                             ; 005c696b
    RET                                 ; 005c696c
    PUSH EBX                            ; 005c696d
        ;   Label: LAB_005c696d
    MOV dword ptr [EBX],EAX             ; 005c696e
    CALL FUN_005c6880                   ; 005c6970
        ;   XREF to: 005c6880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6880()
    MOV EDX,EAX                         ; 005c6975
    ADD ESP,0x4                         ; 005c6977
    MOV EAX,dword ptr [EAX]             ; 005c697a
    MOV dword ptr [ESP + 0x10],EAX      ; 005c697c
    OR AL,0x1                           ; 005c6980
    MOV dword ptr [EDX],EAX             ; 005c6982
    ADD EDX,0x4                         ; 005c6984
    MOV EDI,dword ptr [EBX + 0x18]      ; 005c6987
    MOV dword ptr [EBX + 0x14],0x0      ; 005c698a
    INC EDI                             ; 005c6991
    PUSH EDX                            ; 005c6992
    MOV dword ptr [EBX + 0x18],EDI      ; 005c6993
    CALL FUN_005c0a00                   ; 005c6996
        ;   XREF to: 005c0a00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0a00()
    MOV EAX,0x1                         ; 005c699b
    ADD ESP,0x4                         ; 005c69a0
    POP EDI                             ; 005c69a3
        ;   Label: LAB_005c69a3
    POP ESI                             ; 005c69a4
    POP EBX                             ; 005c69a5
    RET                                 ; 005c69a6

