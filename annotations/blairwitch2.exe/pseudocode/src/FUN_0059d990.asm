; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059d990(int param_1,undefined4 param_2)
;
;
; XREF[18]:
;   FUN_0059e3b0 at 0059e597
;   FUN_0059fc10 at 0059ffa7
;   FUN_005a0840 at 005a0949
;   FUN_005a1b40 at 005a1c3f
;   FUN_005a26d0 at 005a27b1
;   FUN_005a2fb0 at 005a30b8
;   FUN_005a3d30 at 005a3e37
;   FUN_005a47b0 at 005a4854
;   FUN_005a4a80 at 005a4b93
;   FUN_005a5b40 at 005a5bec
;   ... and 8 more
;
; Called Functions:
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d990
        ;   Label: FUN_0059d990
    PUSH ESI                            ; 0059d991
    PUSH EDI                            ; 0059d992
    PUSH EBP                            ; 0059d993
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059d994
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059d998
    MOV EDX,dword ptr [EDI + 0x834]     ; 0059d99c
    TEST EDX,EDX                        ; 0059d9a2
    JZ 0x0059d9d0                       ; 0059d9a4
        ;   XREF to: 0059d9d0 (CONDITIONAL_JUMP)  ; LAB_0059d9d0
    XOR ESI,ESI                         ; 0059d9a6
    TEST EDX,EDX                        ; 0059d9a8
    JLE 0x0059d9d0                      ; 0059d9aa
        ;   XREF to: 0059d9d0 (CONDITIONAL_JUMP)  ; LAB_0059d9d0
    MOV EBX,EDI                         ; 0059d9ac
    PUSH EBX                            ; 0059d9ae
        ;   Label: LAB_0059d9ae
    PUSH EBP                            ; 0059d9af
    CALL FUN_005b8c30                   ; 0059d9b0
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    MOV EDX,EAX                         ; 0059d9b5
    ADD ESP,0x8                         ; 0059d9b7
    LEA EAX,[ESI + 0x1]                 ; 0059d9ba
    TEST EDX,EDX                        ; 0059d9bd
    JZ 0x0059d9d7                       ; 0059d9bf
        ;   XREF to: 0059d9d7 (CONDITIONAL_JUMP)  ; LAB_0059d9d7
    ADD EBX,0x19                        ; 0059d9c1
    MOV EDX,dword ptr [EDI + 0x834]     ; 0059d9c4
    MOV ESI,EAX                         ; 0059d9ca
    CMP EAX,EDX                         ; 0059d9cc
    JL 0x0059d9ae                       ; 0059d9ce
        ;   XREF to: 0059d9ae (CONDITIONAL_JUMP)  ; LAB_0059d9ae
    XOR EAX,EAX                         ; 0059d9d0
        ;   Label: LAB_0059d9d0
    POP EBP                             ; 0059d9d2
    POP EDI                             ; 0059d9d3
    POP ESI                             ; 0059d9d4
    POP EBX                             ; 0059d9d5
    RET                                 ; 0059d9d6
    MOV dword ptr [EDI + 0x83c],EAX     ; 0059d9d7
        ;   Label: LAB_0059d9d7
    MOV EAX,0x1                         ; 0059d9dd
    POP EBP                             ; 0059d9e2
    POP EDI                             ; 0059d9e3
    POP ESI                             ; 0059d9e4
    POP EBX                             ; 0059d9e5
    RET                                 ; 0059d9e6

