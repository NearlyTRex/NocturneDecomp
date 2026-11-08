; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a9eb0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004a6ba0 at 004a6bee
;   FUN_004a9870 at 004a9890
;
; Called Functions:
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9eb0
        ;   Label: FUN_004a9eb0
    PUSH ESI                            ; 004a9eb1
    PUSH EDI                            ; 004a9eb2
    PUSH EBP                            ; 004a9eb3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a9eb4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a9eb8
    MOV EDX,dword ptr [EDI + 0x258c]    ; 004a9ebc
    XOR EBX,EBX                         ; 004a9ec2
    TEST EDX,EDX                        ; 004a9ec4
    JLE 0x004a9eea                      ; 004a9ec6
        ;   XREF to: 004a9eea (CONDITIONAL_JUMP)  ; LAB_004a9eea
    LEA ESI,[EDI + 0x2590]              ; 004a9ec8
    PUSH EBP                            ; 004a9ece
        ;   Label: LAB_004a9ece
    PUSH ESI                            ; 004a9ecf
    CALL FUN_005c04e0                   ; 004a9ed0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004a9ed5
    TEST EAX,EAX                        ; 004a9ed8
    JZ 0x004a9ef4                       ; 004a9eda
        ;   XREF to: 004a9ef4 (CONDITIONAL_JUMP)  ; LAB_004a9ef4
    INC EBX                             ; 004a9edc
    MOV ECX,dword ptr [EDI + 0x258c]    ; 004a9edd
    ADD ESI,0x20                        ; 004a9ee3
    CMP EBX,ECX                         ; 004a9ee6
    JL 0x004a9ece                       ; 004a9ee8
        ;   XREF to: 004a9ece (CONDITIONAL_JUMP)  ; LAB_004a9ece
    MOV EAX,0xffffffff                  ; 004a9eea
        ;   Label: LAB_004a9eea
    POP EBP                             ; 004a9eef
    POP EDI                             ; 004a9ef0
    POP ESI                             ; 004a9ef1
    POP EBX                             ; 004a9ef2
    RET                                 ; 004a9ef3
    MOV EAX,EBX                         ; 004a9ef4
        ;   Label: LAB_004a9ef4
    POP EBP                             ; 004a9ef6
    POP EDI                             ; 004a9ef7
    POP ESI                             ; 004a9ef8
    POP EBX                             ; 004a9ef9
    RET                                 ; 004a9efa

