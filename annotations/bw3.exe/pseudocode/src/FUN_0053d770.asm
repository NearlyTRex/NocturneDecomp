; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053d770(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0053bc80 at 0053bec1
;   FUN_0053d270 at 0053d492
;   FUN_0053de10 at 0053dfff
;
; Referenced Globals:
;   undefined4 DAT_007e2cec
;
; Called Functions:
;   FUN_0040c810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d770
        ;   Label: FUN_0053d770
    PUSH ESI                            ; 0053d771
    PUSH EDI                            ; 0053d772
    PUSH EBP                            ; 0053d773
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053d774
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053d778
    CMP dword ptr [EBX + 0x15f6b0],0x0  ; 0053d77c
    JNZ 0x0053d7b0                      ; 0053d783
        ;   XREF to: 0053d7b0 (CONDITIONAL_JUMP)  ; LAB_0053d7b0
    MOV EDI,dword ptr [EBX + 0x15f6ac]  ; 0053d785
        ;   Label: LAB_0053d785
    XOR EAX,EAX                         ; 0053d78b
    TEST EDI,EDI                        ; 0053d78d
    JLE 0x0053d7a9                      ; 0053d78f
        ;   XREF to: 0053d7a9 (CONDITIONAL_JUMP)  ; LAB_0053d7a9
    MOV EDX,EBX                         ; 0053d791
    CMP ESI,dword ptr [EDX + 0x15f6b4]  ; 0053d793
        ;   Label: LAB_0053d793
    JZ 0x0053d7c4                       ; 0053d799
        ;   XREF to: 0053d7c4 (CONDITIONAL_JUMP)  ; LAB_0053d7c4
    INC EAX                             ; 0053d79b
    MOV EBP,dword ptr [EBX + 0x15f6ac]  ; 0053d79c
    ADD EDX,0x4                         ; 0053d7a2
    CMP EAX,EBP                         ; 0053d7a5
    JL 0x0053d793                       ; 0053d7a7
        ;   XREF to: 0053d793 (CONDITIONAL_JUMP)  ; LAB_0053d793
    XOR EAX,EAX                         ; 0053d7a9
        ;   Label: LAB_0053d7a9
    POP EBP                             ; 0053d7ab
    POP EDI                             ; 0053d7ac
    POP ESI                             ; 0053d7ad
    POP EBX                             ; 0053d7ae
    RET                                 ; 0053d7af
    MOV ECX,dword ptr [0x007e2cec]      ; 0053d7b0 | DAT_007e2cec
        ;   Label: LAB_0053d7b0
    PUSH ECX                            ; 0053d7b6
    PUSH ESI                            ; 0053d7b7
    CALL FUN_0040c810                   ; 0053d7b8
        ;   XREF to: 0040c810 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c810()
    ADD ESP,0x8                         ; 0053d7bd
    TEST EAX,EAX                        ; 0053d7c0
    JZ 0x0053d785                       ; 0053d7c2
        ;   XREF to: 0053d785 (CONDITIONAL_JUMP)  ; LAB_0053d785
    MOV EAX,0x1                         ; 0053d7c4
        ;   Label: LAB_0053d7c4
    POP EBP                             ; 0053d7c9
    POP EDI                             ; 0053d7ca
    POP ESI                             ; 0053d7cb
    POP EBX                             ; 0053d7cc
    RET                                 ; 0053d7cd

