; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e6680(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   FUN_004d6990 at 004d707a
;   FUN_0051a4f0 at 0051ab46
;
; Referenced Globals:
;   undefined4 DAT_005e416d
;   undefined4 DAT_005e4171
;   undefined4 DAT_01cd56b0
;   undefined4 DAT_01cf69f8
;
; Called Functions:
;   FUN_004e4fa0
;   FUN_004e5600
;   FUN_005c04b0
;   FUN_005c1180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6680
        ;   Label: FUN_004e6680
    PUSH ESI                            ; 004e6681
    PUSH EDI                            ; 004e6682
    PUSH EBP                            ; 004e6683
    SUB ESP,0x100                       ; 004e6684
    MOV EDI,dword ptr [ESP + 0x118]     ; 004e668a
    PUSH EDI                            ; 004e6691
    PUSH 0xff                           ; 004e6692
    LEA EBX,[ESP + 0x8]                 ; 004e6697
    PUSH EBX                            ; 004e669b
    CALL FUN_005c1180                   ; 004e669c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004e66a1
    PUSH 0x1cf69f8                      ; 004e66a4 | DAT_01cf69f8
    PUSH 0x5e416d                       ; 004e66a9 | DAT_005e416d
    PUSH EDI                            ; 004e66ae
    XOR ESI,ESI                         ; 004e66af
    CALL FUN_005c04b0                   ; 004e66b1
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    MOV EDX,dword ptr [0x01cf69f8]      ; 004e66b6 | DAT_01cf69f8
    ADD ESP,0xc                         ; 004e66bc
    TEST EDX,EDX                        ; 004e66bf
    JLE 0x004e66e0                      ; 004e66c1
        ;   XREF to: 004e66e0 (CONDITIONAL_JUMP)  ; LAB_004e66e0
    MOV EBX,0x1cf69fc                   ; 004e66c3
    PUSH EDI                            ; 004e66c8
        ;   Label: LAB_004e66c8
    PUSH EBX                            ; 004e66c9
    INC ESI                             ; 004e66ca
    CALL FUN_004e5600                   ; 004e66cb
        ;   XREF to: 004e5600 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5600()
    MOV ECX,dword ptr [0x01cf69f8]      ; 004e66d0 | DAT_01cf69f8
    ADD ESP,0x8                         ; 004e66d6
    ADD EBX,0x28                        ; 004e66d9
    CMP ESI,ECX                         ; 004e66dc
    JL 0x004e66c8                       ; 004e66de
        ;   XREF to: 004e66c8 (CONDITIONAL_JUMP)  ; LAB_004e66c8
    PUSH 0x1cd56b0                      ; 004e66e0 | DAT_01cd56b0
        ;   Label: LAB_004e66e0
    PUSH 0x5e4171                       ; 004e66e5 | DAT_005e4171
    PUSH EDI                            ; 004e66ea
    XOR ESI,ESI                         ; 004e66eb
    CALL FUN_005c04b0                   ; 004e66ed
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    MOV EBX,dword ptr [0x01cd56b0]      ; 004e66f2 | DAT_01cd56b0
    ADD ESP,0xc                         ; 004e66f8
    TEST EBX,EBX                        ; 004e66fb
    JLE 0x004e6720                      ; 004e66fd
        ;   XREF to: 004e6720 (CONDITIONAL_JUMP)  ; LAB_004e6720
    MOV EBX,0x1cd56b4                   ; 004e66ff
    PUSH EDI                            ; 004e6704
        ;   Label: LAB_004e6704
    PUSH EBX                            ; 004e6705
    INC ESI                             ; 004e6706
    CALL FUN_004e4fa0                   ; 004e6707
        ;   XREF to: 004e4fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4fa0()
    MOV EBP,dword ptr [0x01cd56b0]      ; 004e670c | DAT_01cd56b0
    ADD ESP,0x8                         ; 004e6712
    ADD EBX,0x44                        ; 004e6715
    CMP ESI,EBP                         ; 004e6718
    JL 0x004e6704                       ; 004e671a
        ;   XREF to: 004e6704 (CONDITIONAL_JUMP)  ; LAB_004e6704
    LEA EAX,[EAX]                       ; 004e671c
    ADD ESP,0x100                       ; 004e6720
        ;   Label: LAB_004e6720
    POP EBP                             ; 004e6726
    POP EDI                             ; 004e6727
    POP ESI                             ; 004e6728
    POP EBX                             ; 004e6729
    RET                                 ; 004e672a

