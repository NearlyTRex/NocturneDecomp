; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050b790(int param_1)
;
;
; XREF[1]:
;   FUN_0050b4d0 at 0050b532
;
; Referenced Globals:
;   undefined4 DAT_006138e0
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;
; Called Functions:
;   FUN_0047be40
;   FUN_0047be90
;   FUN_0050c130
;   FUN_00579060
;   FUN_005790a0
;   FUN_00579360
;   FUN_00579430
;   FUN_00579490
;   FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b790
        ;   Label: FUN_0050b790
    PUSH ESI                            ; 0050b791
    PUSH EBP                            ; 0050b792
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050b793
    PUSH 0x5e054d                       ; 0050b797
    MOV EDX,dword ptr [0x006138e0]      ; 0050b79c | DAT_006138e0
    PUSH EDX                            ; 0050b7a2
    CALL FUN_0047be90                   ; 0050b7a3
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be90()
    ADD ESP,0x8                         ; 0050b7a8
    LEA EBX,[ESI + 0x180]               ; 0050b7ab
    PUSH EBX                            ; 0050b7b1
    CALL FUN_00579360                   ; 0050b7b2
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; undefined FUN_00579360()
    ADD ESP,0x4                         ; 0050b7b7
    PUSH EBX                            ; 0050b7ba
    CALL FUN_00579060                   ; 0050b7bb
        ;   XREF to: 00579060 (UNCONDITIONAL_CALL)  ; undefined FUN_00579060()
    ADD ESP,0x4                         ; 0050b7c0
    TEST EAX,EAX                        ; 0050b7c3
    JZ 0x0050b85a                       ; 0050b7c5
        ;   XREF to: 0050b85a (CONDITIONAL_JUMP)  ; LAB_0050b85a
    PUSH 0x0                            ; 0050b7cb
    PUSH EBX                            ; 0050b7cd
    CALL FUN_00579490                   ; 0050b7ce
        ;   XREF to: 00579490 (UNCONDITIONAL_CALL)  ; undefined FUN_00579490()
    ADD ESP,0x8                         ; 0050b7d3
    TEST EAX,EAX                        ; 0050b7d6
    JZ 0x0050b874                       ; 0050b7d8
        ;   XREF to: 0050b874 (CONDITIONAL_JUMP)  ; LAB_0050b874
    PUSH 0x1ddf                         ; 0050b7de
    PUSH EBX                            ; 0050b7e3
    CALL FUN_005790a0                   ; 0050b7e4
        ;   XREF to: 005790a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005790a0()
    ADD ESP,0x8                         ; 0050b7e9
    TEST EAX,EAX                        ; 0050b7ec
    JZ 0x0050b88e                       ; 0050b7ee
        ;   XREF to: 0050b88e (CONDITIONAL_JUMP)  ; LAB_0050b88e
    MOV EDX,dword ptr [ESI + 0x124]     ; 0050b7f4
    LEA EAX,[ESI + 0x20]                ; 0050b7fa
    SHL EDX,0x7                         ; 0050b7fd
    ADD EAX,EDX                         ; 0050b800
    ADD EAX,0x1c                        ; 0050b802
    PUSH EAX                            ; 0050b805
    PUSH EBX                            ; 0050b806
    CALL FUN_00579430                   ; 0050b807
        ;   XREF to: 00579430 (UNCONDITIONAL_CALL)  ; undefined FUN_00579430()
    ADD ESP,0x8                         ; 0050b80c
    TEST EAX,EAX                        ; 0050b80f
    JZ 0x0050b8a8                       ; 0050b811
        ;   XREF to: 0050b8a8 (CONDITIONAL_JUMP)  ; LAB_0050b8a8
    PUSH ESI                            ; 0050b817
    MOV EBP,0x1                         ; 0050b818
    CALL FUN_0050c130                   ; 0050b81d
        ;   XREF to: 0050c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0050c130()
    ADD ESP,0x4                         ; 0050b822
    MOV dword ptr [0x01d34e38],EBP      ; 0050b825 | DAT_01d34e38
    CALL FUN_0058e9e0                   ; 0050b82b
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050b830
    MOV EBX,0x12                        ; 0050b832
    SAR EDX,0x1f                        ; 0050b837
    IDIV EBX                            ; 0050b83a
    PUSH 0x5e05e5                       ; 0050b83c
    MOV [0x01d34e34],EAX                ; 0050b841 | DAT_01d34e34
    MOV EAX,[0x006138e0]                ; 0050b846 | DAT_006138e0
    PUSH EAX                            ; 0050b84b
    CALL FUN_0047be90                   ; 0050b84c
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be90()
    ADD ESP,0x8                         ; 0050b851
    MOV EAX,EBP                         ; 0050b854
    POP EBP                             ; 0050b856
    POP ESI                             ; 0050b857
    POP EBX                             ; 0050b858
    RET                                 ; 0050b859
    PUSH 0x5e0565                       ; 0050b85a
        ;   Label: LAB_0050b85a
    MOV ECX,dword ptr [0x006138e0]      ; 0050b85f | DAT_006138e0
    PUSH ECX                            ; 0050b865
    CALL FUN_0047be40                   ; 0050b866
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x8                         ; 0050b86b
    XOR EAX,EAX                         ; 0050b86e
    POP EBP                             ; 0050b870
    POP ESI                             ; 0050b871
    POP EBX                             ; 0050b872
    RET                                 ; 0050b873
    PUSH 0x5e0582                       ; 0050b874
        ;   Label: LAB_0050b874
    MOV EBX,dword ptr [0x006138e0]      ; 0050b879 | DAT_006138e0
    PUSH EBX                            ; 0050b87f
    CALL FUN_0047be40                   ; 0050b880
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x8                         ; 0050b885
    XOR EAX,EAX                         ; 0050b888
    POP EBP                             ; 0050b88a
    POP ESI                             ; 0050b88b
    POP EBX                             ; 0050b88c
    RET                                 ; 0050b88d
    PUSH 0x5e05aa                       ; 0050b88e
        ;   Label: LAB_0050b88e
    MOV ESI,dword ptr [0x006138e0]      ; 0050b893 | DAT_006138e0
    PUSH ESI                            ; 0050b899
    CALL FUN_0047be40                   ; 0050b89a
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x8                         ; 0050b89f
    XOR EAX,EAX                         ; 0050b8a2
    POP EBP                             ; 0050b8a4
    POP ESI                             ; 0050b8a5
    POP EBX                             ; 0050b8a6
    RET                                 ; 0050b8a7
    PUSH EDI                            ; 0050b8a8
        ;   Label: LAB_0050b8a8
    PUSH 0x5e05c0                       ; 0050b8a9
    MOV EDI,dword ptr [0x006138e0]      ; 0050b8ae | DAT_006138e0
    PUSH EDI                            ; 0050b8b4
    CALL FUN_0047be40                   ; 0050b8b5
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x8                         ; 0050b8ba
    XOR EAX,EAX                         ; 0050b8bd
    POP EDI                             ; 0050b8bf
    POP EBP                             ; 0050b8c0
    POP ESI                             ; 0050b8c1
    POP EBX                             ; 0050b8c2
    RET                                 ; 0050b8c3

