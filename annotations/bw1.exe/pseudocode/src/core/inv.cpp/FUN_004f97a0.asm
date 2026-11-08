; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f97a0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004eab00 at 004ead4d
;
; Referenced Globals:
;   undefined4 DAT_005e66a0
;   undefined4 DAT_005e66a4
;   undefined4 DAT_005e66a8
;   undefined4 DAT_005e66ac
;   TerminatedCString s_s_005e66b0
;   TerminatedCString s_core_inv_cpp_005e66bd
;   TerminatedCString s_CInventory_load_Can_t_fi_005e66cd
;   undefined4 DAT_0061f1a8
;   undefined4 DAT_0061f1ac
;   undefined4 DAT_0061f210
;   undefined4 DAT_0061f214
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2c900
;   ... and 2 more
;
; Called Functions:
;   FUN_0040aed0
;   FUN_0040c2b0
;   FUN_0040c600
;   FUN_004f6fa0
;   FUN_004f7050
;   FUN_004fa4e0
;   FUN_005030e0
;   FUN_0051ab60
;   FUN_005c04b0
;   FUN_005c1180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f97a0
        ;   Label: FUN_004f97a0
    PUSH ESI                            ; 004f97a1
    PUSH EDI                            ; 004f97a2
    PUSH EBP                            ; 004f97a3
    SUB ESP,0x1cc                       ; 004f97a4
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004f97aa
    PUSH EDX                            ; 004f97b1
    CALL FUN_004f6fa0                   ; 004f97b2
        ;   XREF to: 004f6fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6fa0()
    ADD ESP,0x4                         ; 004f97b7
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004f97ba
    PUSH ECX                            ; 004f97c1
    CALL FUN_004f7050                   ; 004f97c2
        ;   XREF to: 004f7050 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7050()
    ADD ESP,0x4                         ; 004f97c7
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004f97ca
    PUSH EBX                            ; 004f97d1
    PUSH 0xff                           ; 004f97d2
    LEA EAX,[ESP + 0x8]                 ; 004f97d7
    PUSH EAX                            ; 004f97db
    CALL FUN_005c1180                   ; 004f97dc
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f97e1
    PUSH EBX                            ; 004f97e4
    PUSH 0xff                           ; 004f97e5
    LEA EAX,[ESP + 0x8]                 ; 004f97ea
    PUSH EAX                            ; 004f97ee
    CALL FUN_005c1180                   ; 004f97ef
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f97f4
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f97f7
    ADD EAX,0x334                       ; 004f97fe
    PUSH EAX                            ; 004f9803
    PUSH 0x5e66a0                       ; 004f9804 | DAT_005e66a0
    PUSH EBX                            ; 004f9809
    CALL FUN_005c04b0                   ; 004f980a
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 004f980f
    PUSH EBX                            ; 004f9812
    PUSH 0xff                           ; 004f9813
    LEA EAX,[ESP + 0x8]                 ; 004f9818
    PUSH EAX                            ; 004f981c
    CALL FUN_005c1180                   ; 004f981d
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f9822
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f9825
    ADD EAX,0x10                        ; 004f982c
    PUSH EAX                            ; 004f982f
    PUSH 0x5e66a4                       ; 004f9830 | DAT_005e66a4
    PUSH EBX                            ; 004f9835
    CALL FUN_005c04b0                   ; 004f9836
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 004f983b
    PUSH EBX                            ; 004f983e
    PUSH 0xff                           ; 004f983f
    LEA EAX,[ESP + 0x8]                 ; 004f9844
    PUSH EAX                            ; 004f9848
    CALL FUN_005c1180                   ; 004f9849
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f984e
    LEA EAX,[ESP + 0x1c8]               ; 004f9851
    PUSH EAX                            ; 004f9858
    PUSH 0x5e66a8                       ; 004f9859 | DAT_005e66a8
    PUSH EBX                            ; 004f985e
    CALL FUN_005c04b0                   ; 004f985f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 004f9864
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f9867
    CMP dword ptr [EAX + 0x334],0x1     ; 004f986e
    JGE 0x004f9a0b                      ; 004f9875
        ;   XREF to: 004f9a0b (CONDITIONAL_JUMP)  ; LAB_004f9a0b
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004f987b
        ;   Label: LAB_004f987b
    PUSH EAX                            ; 004f9882
    PUSH 0xff                           ; 004f9883
    LEA EAX,[ESP + 0x8]                 ; 004f9888
    PUSH EAX                            ; 004f988c
    CALL FUN_005c1180                   ; 004f988d
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f9892
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f9895
    MOV EDX,dword ptr [EAX + 0x10]      ; 004f989c
    XOR EBP,EBP                         ; 004f989f
    TEST EDX,EDX                        ; 004f98a1
    JLE 0x004f9934                      ; 004f98a3
        ;   XREF to: 004f9934 (CONDITIONAL_JUMP)  ; LAB_004f9934
    MOV EBX,EAX                         ; 004f98a9
    MOV ECX,0x19                        ; 004f98ab
        ;   Label: LAB_004f98ab
    LEA EDI,[ESP + 0x100]               ; 004f98b0
    LEA EAX,[ESP + 0x164]               ; 004f98b7
    MOV ESI,0x61f1a8                    ; 004f98be | DAT_0061f1a8
    PUSH EAX                            ; 004f98c3
    LEA EAX,[ESP + 0x104]               ; 004f98c4
    MOVSD.REP ES:EDI,ESI                ; 004f98cb | DAT_0061f1a8 | DAT_0061f1ac
    PUSH EAX                            ; 004f98cd
    MOV ECX,0x19                        ; 004f98ce
    LEA EDI,[ESP + 0x16c]               ; 004f98d3
    PUSH 0x5e66b0                       ; 004f98da | = " %s \"%[^\"]\"\n"
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 004f98df
    MOV ESI,0x61f210                    ; 004f98e6 | DAT_0061f210
    PUSH EAX                            ; 004f98eb
    MOVSD.REP ES:EDI,ESI                ; 004f98ec | DAT_0061f210 | DAT_0061f214
    CALL FUN_005c04b0                   ; 004f98ee
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    MOV ESI,dword ptr [0x0061f650]      ; 004f98f3 | DAT_0061f650
    MOV EDX,dword ptr [ESI + 0x1010]    ; 004f98f9 | DAT_01d2d910
    ADD ESP,0x10                        ; 004f98ff
    TEST EDX,EDX                        ; 004f9902
    JZ 0x004f9a40                       ; 004f9904
        ;   XREF to: 004f9a40 (CONDITIONAL_JUMP)  ; LAB_004f9a40
    LEA EAX,[ESP + 0x164]               ; 004f990a
    PUSH EAX                            ; 004f9911
    PUSH ESI                            ; 004f9912 | DAT_01d2c900
    CALL FUN_0051ab60                   ; 004f9913
        ;   XREF to: 0051ab60 (UNCONDITIONAL_CALL)  ; undefined FUN_0051ab60()
    ADD ESP,0x8                         ; 004f9918
    MOV dword ptr [EBX + 0x14],EAX      ; 004f991b
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f991e
        ;   Label: LAB_004f991e
    INC EBP                             ; 004f9925
    MOV ECX,dword ptr [EAX + 0x10]      ; 004f9926
    ADD EBX,0x4                         ; 004f9929
    CMP EBP,ECX                         ; 004f992c
    JL 0x004f98ab                       ; 004f992e
        ;   XREF to: 004f98ab (CONDITIONAL_JUMP)  ; LAB_004f98ab
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 004f9934
        ;   Label: LAB_004f9934
    PUSH EBX                            ; 004f993b
    PUSH 0xff                           ; 004f993c
    LEA EAX,[ESP + 0x8]                 ; 004f9941
    PUSH EAX                            ; 004f9945
    CALL FUN_005c1180                   ; 004f9946
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f994b
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f994e
    MOV EDI,dword ptr [EAX + 0x10]      ; 004f9955
    XOR ESI,ESI                         ; 004f9958
    TEST EDI,EDI                        ; 004f995a
    JLE 0x004f9990                      ; 004f995c
        ;   XREF to: 004f9990 (CONDITIONAL_JUMP)  ; LAB_004f9990
    MOV EBX,EAX                         ; 004f995e
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004f9960
        ;   Label: LAB_004f9960
    PUSH ECX                            ; 004f9967
    MOV EDI,dword ptr [EBX + 0x14]      ; 004f9968
    PUSH EDI                            ; 004f996b
    CALL FUN_0040aed0                   ; 004f996c
        ;   XREF to: 0040aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040aed0()
    ADD ESP,0x8                         ; 004f9971
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f9974
    INC ESI                             ; 004f997b
    MOV EBP,dword ptr [EAX + 0x10]      ; 004f997c
    ADD EBX,0x4                         ; 004f997f
    CMP ESI,EBP                         ; 004f9982
    JL 0x004f9960                       ; 004f9984
        ;   XREF to: 004f9960 (CONDITIONAL_JUMP)  ; LAB_004f9960
    LEA EAX,[EAX]                       ; 004f9986
    LEA EDX,[EDX]                       ; 004f998c
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004f9990
        ;   Label: LAB_004f9990
    CMP dword ptr [EAX + 0x334],0x2     ; 004f9997
    JL 0x004f99ba                       ; 004f999e
        ;   XREF to: 004f99ba (CONDITIONAL_JUMP)  ; LAB_004f99ba
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004f99a0
    PUSH ECX                            ; 004f99a7
    PUSH 0xff                           ; 004f99a8
    LEA EAX,[ESP + 0x8]                 ; 004f99ad
    PUSH EAX                            ; 004f99b1
    CALL FUN_005c1180                   ; 004f99b2
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f99b7
    MOV EAX,[0x0061f650]                ; 004f99ba | DAT_0061f650
        ;   Label: LAB_004f99ba
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004f99bf
    MOV EAX,dword ptr [EAX + 0x1010]    ; 004f99c6 | DAT_01d2d910
    MOV dword ptr [EDX + 0x338],0x0     ; 004f99cc
    MOV dword ptr [EDX + 0x458],EAX     ; 004f99d6
    MOV EBX,dword ptr [ESP + 0x1c8]     ; 004f99dc
    TEST EBX,EBX                        ; 004f99e3
    JGE 0x004f9a7d                      ; 004f99e5
        ;   XREF to: 004f9a7d (CONDITIONAL_JUMP)  ; LAB_004f9a7d
    PUSH 0x3e7                          ; 004f99eb
        ;   Label: LAB_004f99eb
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004f99f0
    PUSH ESI                            ; 004f99f7
    CALL FUN_004fa4e0                   ; 004f99f8
        ;   XREF to: 004fa4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa4e0()
    ADD ESP,0x8                         ; 004f99fd
    ADD ESP,0x1cc                       ; 004f9a00
    POP EBP                             ; 004f9a06
    POP EDI                             ; 004f9a07
    POP ESI                             ; 004f9a08
    POP EBX                             ; 004f9a09
    RET                                 ; 004f9a0a
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004f9a0b
        ;   Label: LAB_004f9a0b
    PUSH ESI                            ; 004f9a12
    PUSH 0xff                           ; 004f9a13
    LEA EAX,[ESP + 0x8]                 ; 004f9a18
    PUSH EAX                            ; 004f9a1c
    CALL FUN_005c1180                   ; 004f9a1d
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f9a22
    MOV EDI,dword ptr [ESP + 0x1e0]     ; 004f9a25
    PUSH EDI                            ; 004f9a2c
    PUSH 0x5e66ac                       ; 004f9a2d | DAT_005e66ac
    PUSH ESI                            ; 004f9a32
    CALL FUN_005c04b0                   ; 004f9a33
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 004f9a38
    JMP 0x004f987b                      ; 004f9a3b
        ;   XREF to: 004f987b (UNCONDITIONAL_JUMP)  ; LAB_004f987b
    LEA EAX,[ESP + 0x100]               ; 004f9a40
        ;   Label: LAB_004f9a40
    PUSH EAX                            ; 004f9a47
    LEA ESI,[ESP + 0x168]               ; 004f9a48
    CALL FUN_0040c2b0                   ; 004f9a4f
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c2b0()
    ADD ESP,0x4                         ; 004f9a54
    MOV EDI,EAX                         ; 004f9a57
    MOV EDX,EAX                         ; 004f9a59
    PUSH EDI                            ; 004f9a5b
    MOV AL,byte ptr [ESI]               ; 004f9a5c
        ;   Label: LAB_004f9a5c
    MOV byte ptr [EDI],AL               ; 004f9a5e
    CMP AL,0x0                          ; 004f9a60
    JZ 0x004f9a74                       ; 004f9a62
        ;   XREF to: 004f9a74 (CONDITIONAL_JUMP)  ; LAB_004f9a74
    MOV AL,byte ptr [ESI + 0x1]         ; 004f9a64
    ADD ESI,0x2                         ; 004f9a67
    MOV byte ptr [EDI + 0x1],AL         ; 004f9a6a
    ADD EDI,0x2                         ; 004f9a6d
    CMP AL,0x0                          ; 004f9a70
    JNZ 0x004f9a5c                      ; 004f9a72
        ;   XREF to: 004f9a5c (CONDITIONAL_JUMP)  ; LAB_004f9a5c
    POP EDI                             ; 004f9a74
        ;   Label: LAB_004f9a74
    MOV dword ptr [EBX + 0x14],EDX      ; 004f9a75
    JMP 0x004f991e                      ; 004f9a78
        ;   XREF to: 004f991e (UNCONDITIONAL_JUMP)  ; LAB_004f991e
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f9a7d
        ;   Label: LAB_004f9a7d
    MOV ESI,dword ptr [0x02c99770]      ; 004f9a84 | DAT_02c99770
    ADD EAX,EDX                         ; 004f9a8a
    PUSH ESI                            ; 004f9a8c
    MOV EBP,dword ptr [EAX + 0x14]      ; 004f9a8d
    PUSH EBP                            ; 004f9a90
    MOV EDI,EDX                         ; 004f9a91
    CALL FUN_0040c600                   ; 004f9a93
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV EDX,EDI                         ; 004f9a98
    MOV dword ptr [EDX + 0x338],EAX     ; 004f9a9a
    MOV EDX,dword ptr [EDI + 0x338]     ; 004f9aa0
    ADD ESP,0x8                         ; 004f9aa6
    TEST EDX,EDX                        ; 004f9aa9
    JNZ 0x004f99eb                      ; 004f9aab
        ;   XREF to: 004f99eb (CONDITIONAL_JUMP)  ; LAB_004f99eb
    MOV ECX,0x5e66bd                    ; 004f9ab1 | = "..\\core\\inv.cpp"
    MOV EBX,0x69d                       ; 004f9ab6
    PUSH 0x5e66cd                       ; 004f9abb | = "CInventory::load - Can't find your we..."
    MOV dword ptr [0x01d1d400],ECX      ; 004f9ac0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004f9ac6 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f9acc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f9ad1
    JMP 0x004f99eb                      ; 004f9ad4
        ;   XREF to: 004f99eb (UNCONDITIONAL_JUMP)  ; LAB_004f99eb

