; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 at 0050bb6d
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 at 0050c3be
;   core_set.cpp_FUN_0050e370 at 0050e3be
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005905ea
;   TerminatedCString s_CDemonSet_lightVertexCol_005905fa
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01c039c4
;   undefined4 DAT_01c039cc
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01fb96f0
;   undefined4 DAT_01ffb05c
;   undefined4 DAT_01fff224
;   ... and 3 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b7f0
        ;   Label: core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
    PUSH ESI                            ; 0050b7f1
    PUSH EDI                            ; 0050b7f2
    PUSH EBP                            ; 0050b7f3
    SUB ESP,0x24                        ; 0050b7f4
    MOV EBX,dword ptr [ESP + 0x38]      ; 0050b7f7
    MOV EDI,dword ptr [ESP + 0x40]      ; 0050b7fb
    MOV EDX,dword ptr [EBX + 0x15aa88]  ; 0050b7ff
    TEST EDX,EDX                        ; 0050b805
    JZ 0x0050b8dc                       ; 0050b807
        ;   XREF to: 0050b8dc (CONDITIONAL_JUMP)  ; LAB_0050b8dc
    TEST EDI,EDI                        ; 0050b80d
    JNZ 0x0050b834                      ; 0050b80f
        ;   XREF to: 0050b834 (CONDITIONAL_JUMP)  ; LAB_0050b834
    MOV ESI,0x5905ea                    ; 0050b811 | = "..\\core\\set.cpp"
    MOV EBP,0xaf6                       ; 0050b816
    PUSH 0x5905fa                       ; 0050b81b | = "CDemonSet::lightVertexColor - Quick l..."
    MOV dword ptr [0x01cc4800],ESI      ; 0050b820 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0050b826 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0050b82c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0050b831
    MOV EAX,dword ptr [EBX + 0x15aa8c]  ; 0050b834
        ;   Label: LAB_0050b834
    MOV EDX,dword ptr [EDI]             ; 0050b83a
    IMUL EDX                            ; 0050b83c
    SHRD EAX,EDX,0x10                   ; 0050b83e
    MOV ECX,EAX                         ; 0050b842
    MOV EDX,dword ptr [EDI + 0x4]       ; 0050b844
    MOV EAX,dword ptr [EBX + 0x15aa90]  ; 0050b847
    IMUL EDX                            ; 0050b84d
    SHRD EAX,EDX,0x10                   ; 0050b84f
    MOV EDX,dword ptr [EDI + 0x8]       ; 0050b853
    ADD ECX,EAX                         ; 0050b856
    MOV EAX,dword ptr [EBX + 0x15aa94]  ; 0050b858
    IMUL EDX                            ; 0050b85e
    SHRD EAX,EDX,0x10                   ; 0050b860
    ADD ECX,EAX                         ; 0050b864
    NEG ECX                             ; 0050b866
    TEST ECX,ECX                        ; 0050b868
    JL 0x0050b8d8                       ; 0050b86a
        ;   XREF to: 0050b8d8 (CONDITIONAL_JUMP)  ; LAB_0050b8d8
    ADD ECX,dword ptr [EBX + 0x15aa98]  ; 0050b86c
        ;   Label: LAB_0050b86c
    CMP ECX,0xffff                      ; 0050b872
    JLE 0x0050b87f                      ; 0050b878
        ;   XREF to: 0050b87f (CONDITIONAL_JUMP)  ; LAB_0050b87f
    MOV ECX,0xffff                      ; 0050b87a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0050b87f
        ;   Label: LAB_0050b87f
    LEA ESI,[EAX*0x4 + 0x0]             ; 0050b883
    SUB ESI,EAX                         ; 0050b88a
    MOV EDX,ECX                         ; 0050b88c
    SHL ESI,0x4                         ; 0050b88e
    MOV EAX,dword ptr [EBX + 0x15aaa0]  ; 0050b891
    ADD ESI,0x5c5014                    ; 0050b897 | DAT_005c5014
    IMUL EDX                            ; 0050b89d
    SHRD EAX,EDX,0x10                   ; 0050b89f
    MOV dword ptr [ESI + 0x20],EAX      ; 0050b8a3 | DAT_005c5034
    MOV EDX,ECX                         ; 0050b8a6
    MOV EAX,dword ptr [EBX + 0x15aaa4]  ; 0050b8a8
    IMUL EDX                            ; 0050b8ae
    SHRD EAX,EDX,0x10                   ; 0050b8b0
    MOV dword ptr [ESI + 0x24],EAX      ; 0050b8b4 | DAT_005c5038
    MOV EDX,ECX                         ; 0050b8b7
    MOV EAX,dword ptr [EBX + 0x15aaa8]  ; 0050b8b9
    IMUL EDX                            ; 0050b8bf
    SHRD EAX,EDX,0x10                   ; 0050b8c1
    MOV dword ptr [ESI + 0x28],EAX      ; 0050b8c5 | DAT_005c503c
    MOV EAX,[0x01c038f4]                ; 0050b8c8 | DAT_01c038f4
    MOV dword ptr [ESI + 0x2c],EAX      ; 0050b8cd | DAT_005c5040
    ADD ESP,0x24                        ; 0050b8d0
    POP EBP                             ; 0050b8d3
    POP EDI                             ; 0050b8d4
    POP ESI                             ; 0050b8d5
    POP EBX                             ; 0050b8d6
    RET                                 ; 0050b8d7
    XOR ECX,ECX                         ; 0050b8d8
        ;   Label: LAB_0050b8d8
    JMP 0x0050b86c                      ; 0050b8da
        ;   XREF to: 0050b86c (UNCONDITIONAL_JUMP)  ; LAB_0050b86c
    CMP dword ptr [ESP + 0x48],0x0      ; 0050b8dc
        ;   Label: LAB_0050b8dc
    JZ 0x0050ba7e                       ; 0050b8e1
        ;   XREF to: 0050ba7e (CONDITIONAL_JUMP)  ; LAB_0050ba7e
    MOV ECX,0xffff                      ; 0050b8e7
    MOV dword ptr [ESP + 0x20],EDX      ; 0050b8ec
    CMP dword ptr [0x01fff224],0x0      ; 0050b8f0 | DAT_01fff224
        ;   Label: LAB_0050b8f0
    JLE 0x0050bb1c                      ; 0050b8f7
        ;   XREF to: 0050bb1c (CONDITIONAL_JUMP)  ; LAB_0050bb1c
    MOV EDX,dword ptr [0x01fff5a4]      ; 0050b8fd | DAT_01fff5a4
    MOV EAX,ECX                         ; 0050b903
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050b905
    IMUL EDX                            ; 0050b909
    SHRD EAX,EDX,0x10                   ; 0050b90b
    MOV EDX,dword ptr [EBX + 0x15aaa0]  ; 0050b90f
    ADD EAX,EBP                         ; 0050b915
    IMUL EDX                            ; 0050b917
    SHRD EAX,EDX,0x10                   ; 0050b919
    MOV EDX,dword ptr [0x01fff5a8]      ; 0050b91d | DAT_01fff5a8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050b923
    MOV EAX,ECX                         ; 0050b927
    IMUL EDX                            ; 0050b929
    SHRD EAX,EDX,0x10                   ; 0050b92b
    MOV EDX,dword ptr [EBX + 0x15aaa4]  ; 0050b92f
    ADD EAX,EBP                         ; 0050b935
    IMUL EDX                            ; 0050b937
    SHRD EAX,EDX,0x10                   ; 0050b939
    MOV EDX,dword ptr [0x01fff5ac]      ; 0050b93d | DAT_01fff5ac
    MOV EDI,EAX                         ; 0050b943
    MOV EAX,ECX                         ; 0050b945
    IMUL EDX                            ; 0050b947
    SHRD EAX,EDX,0x10                   ; 0050b949
    MOV EDX,dword ptr [EBX + 0x15aaa8]  ; 0050b94d
    ADD EAX,EBP                         ; 0050b953
    IMUL EDX                            ; 0050b955
        ;   Label: LAB_0050b955
    SHRD EAX,EDX,0x10                   ; 0050b957
    MOV EBP,EAX                         ; 0050b95b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0050b95d
    LEA ECX,[EAX*0x4 + 0x0]             ; 0050b961
    SUB ECX,EAX                         ; 0050b968
    MOV EAX,0x5c5014                    ; 0050b96a | DAT_005c5014
    SHL ECX,0x4                         ; 0050b96f
    ADD EAX,ECX                         ; 0050b972
    MOV ESI,dword ptr [EBX + 0x15f2f8]  ; 0050b974
    MOV dword ptr [ESP + 0x18],EAX      ; 0050b97a
    TEST ESI,ESI                        ; 0050b97e
    JZ 0x0050ba24                       ; 0050b980
        ;   XREF to: 0050ba24 (CONDITIONAL_JUMP)  ; LAB_0050ba24
    MOV EAX,dword ptr [ESP + 0x48]      ; 0050b986
    TEST EAX,EAX                        ; 0050b98a
    JNZ 0x0050ba24                      ; 0050b98c
        ;   XREF to: 0050ba24 (CONDITIONAL_JUMP)  ; LAB_0050ba24
    PUSH EAX                            ; 0050b992
    MOV EDX,dword ptr [ESP + 0x40]      ; 0050b993
    PUSH EDX                            ; 0050b997
    PUSH EBX                            ; 0050b998
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 ; 0050b999
        ;   XREF to: 0050b5c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0()
    ADD ESP,0xc                         ; 0050b99e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050b9a1
    ADD ESI,EAX                         ; 0050b9a5
    TEST ESI,ESI                        ; 0050b9a7
    JLE 0x0050ba24                      ; 0050b9a9
        ;   XREF to: 0050ba24 (CONDITIONAL_JUMP)  ; LAB_0050ba24
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050b9ab
    MOV EBX,ESI                         ; 0050b9af
    CDQ                                 ; 0050b9b1
    MOV ECX,EDX                         ; 0050b9b2
    XOR EAX,EDX                         ; 0050b9b4
    XOR EDX,EDX                         ; 0050b9b6
    DIV EBX                             ; 0050b9b8
    CMP EAX,0x7fff                      ; 0050b9ba
    JC 0x0050b9c6                       ; 0050b9bf
        ;   XREF to: 0050b9c6 (CONDITIONAL_JUMP)  ; LAB_0050b9c6
    MOV EAX,0x7fff                      ; 0050b9c1
    PUSH EAX                            ; 0050b9c6
        ;   Label: LAB_0050b9c6
    XOR EAX,EAX                         ; 0050b9c7
    DIV EBX                             ; 0050b9c9
    POP EDX                             ; 0050b9cb
    SHRD EAX,EDX,0x10                   ; 0050b9cc
    XOR EAX,ECX                         ; 0050b9d0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050b9d2
    MOV EBX,ESI                         ; 0050b9d6
    MOV EAX,EDI                         ; 0050b9d8
    CDQ                                 ; 0050b9da
    MOV ECX,EDX                         ; 0050b9db
    XOR EAX,EDX                         ; 0050b9dd
    XOR EDX,EDX                         ; 0050b9df
    DIV EBX                             ; 0050b9e1
    CMP EAX,0x7fff                      ; 0050b9e3
    JC 0x0050b9ef                       ; 0050b9e8
        ;   XREF to: 0050b9ef (CONDITIONAL_JUMP)  ; LAB_0050b9ef
    MOV EAX,0x7fff                      ; 0050b9ea
    PUSH EAX                            ; 0050b9ef
        ;   Label: LAB_0050b9ef
    XOR EAX,EAX                         ; 0050b9f0
    DIV EBX                             ; 0050b9f2
    POP EDX                             ; 0050b9f4
    SHRD EAX,EDX,0x10                   ; 0050b9f5
    XOR EAX,ECX                         ; 0050b9f9
    MOV EDI,EAX                         ; 0050b9fb
    MOV EBX,ESI                         ; 0050b9fd
    MOV EAX,EBP                         ; 0050b9ff
    CDQ                                 ; 0050ba01
    MOV ECX,EDX                         ; 0050ba02
    XOR EAX,EDX                         ; 0050ba04
    XOR EDX,EDX                         ; 0050ba06
    DIV EBX                             ; 0050ba08
    CMP EAX,0x7fff                      ; 0050ba0a
    JC 0x0050ba16                       ; 0050ba0f
        ;   XREF to: 0050ba16 (CONDITIONAL_JUMP)  ; LAB_0050ba16
    MOV EAX,0x7fff                      ; 0050ba11
    PUSH EAX                            ; 0050ba16
        ;   Label: LAB_0050ba16
    XOR EAX,EAX                         ; 0050ba17
    DIV EBX                             ; 0050ba19
    POP EDX                             ; 0050ba1b
    SHRD EAX,EDX,0x10                   ; 0050ba1c
    XOR EAX,ECX                         ; 0050ba20
    MOV EBP,EAX                         ; 0050ba22
    CMP dword ptr [ESP + 0x1c],0xffff   ; 0050ba24
        ;   Label: LAB_0050ba24
    JLE 0x0050ba36                      ; 0050ba2c
        ;   XREF to: 0050ba36 (CONDITIONAL_JUMP)  ; LAB_0050ba36
    MOV dword ptr [ESP + 0x1c],0xffff   ; 0050ba2e
    CMP EDI,0xffff                      ; 0050ba36
        ;   Label: LAB_0050ba36
    JLE 0x0050ba43                      ; 0050ba3c
        ;   XREF to: 0050ba43 (CONDITIONAL_JUMP)  ; LAB_0050ba43
    MOV EDI,0xffff                      ; 0050ba3e
    CMP EBP,0xffff                      ; 0050ba43
        ;   Label: LAB_0050ba43
    JLE 0x0050ba50                      ; 0050ba49
        ;   XREF to: 0050ba50 (CONDITIONAL_JUMP)  ; LAB_0050ba50
    MOV EBP,0xffff                      ; 0050ba4b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050ba50
        ;   Label: LAB_0050ba50
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050ba54
    MOV EAX,dword ptr [EAX*0x4 + 0x1fbb060] ; 0050ba58 | DAT_01ffb05c
    MOV dword ptr [EDX + 0x20],EAX      ; 0050ba5f | DAT_005c5034
    MOV EAX,dword ptr [EDI*0x4 + 0x1fbb060] ; 0050ba62 | DAT_01ffb05c
    MOV dword ptr [EDX + 0x24],EAX      ; 0050ba69 | DAT_005c5038
    MOV EAX,dword ptr [EBP*0x4 + 0x1fbb060] ; 0050ba6c | DAT_01ffb05c
    MOV dword ptr [EDX + 0x28],EAX      ; 0050ba73 | DAT_005c503c
    ADD ESP,0x24                        ; 0050ba76
    POP EBP                             ; 0050ba79
    POP EDI                             ; 0050ba7a
    POP ESI                             ; 0050ba7b
    POP EBX                             ; 0050ba7c
    RET                                 ; 0050ba7d
    PUSH EDI                            ; 0050ba7e
        ;   Label: LAB_0050ba7e
    MOV ESI,dword ptr [ESP + 0x40]      ; 0050ba7f
    PUSH ESI                            ; 0050ba83
    PUSH EBX                            ; 0050ba84
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 ; 0050ba85
        ;   XREF to: 0050b5c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0()
    MOV EBP,dword ptr [0x01fb96f0]      ; 0050ba8a | DAT_01fb96f0
    ADD ESP,0xc                         ; 0050ba90
    MOV ECX,EAX                         ; 0050ba93
    MOV dword ptr [ESP + 0x20],EBP      ; 0050ba95
    TEST EBP,EBP                        ; 0050ba99
    JLE 0x0050b8f0                      ; 0050ba9b
        ;   XREF to: 0050b8f0 (CONDITIONAL_JUMP)  ; LAB_0050b8f0
    TEST EDI,EDI                        ; 0050baa1
    JZ 0x0050b8f0                       ; 0050baa3
        ;   XREF to: 0050b8f0 (CONDITIONAL_JUMP)  ; LAB_0050b8f0
    MOV ESI,EBP                         ; 0050baa9
    CMP EBP,0x1000                      ; 0050baab
    JLE 0x0050bab8                      ; 0050bab1
        ;   XREF to: 0050bab8 (CONDITIONAL_JUMP)  ; LAB_0050bab8
    MOV ESI,0x1000                      ; 0050bab3
    CMP dword ptr [0x01c039c4],0x0      ; 0050bab8 | DAT_01c039c4
        ;   Label: LAB_0050bab8
    JL 0x0050baf2                       ; 0050babf
        ;   XREF to: 0050baf2 (CONDITIONAL_JUMP)  ; LAB_0050baf2
    MOV EAX,ESI                         ; 0050bac1
    MOV EDX,dword ptr [EDI]             ; 0050bac3
    IMUL EDX                            ; 0050bac5
    SHRD EAX,EDX,0x10                   ; 0050bac7
    ADD ECX,EAX                         ; 0050bacb
    CMP dword ptr [0x01c039cc],0x0      ; 0050bacd | DAT_01c039cc
        ;   Label: LAB_0050bacd
    JL 0x0050bb00                       ; 0050bad4
        ;   XREF to: 0050bb00 (CONDITIONAL_JUMP)  ; LAB_0050bb00
    MOV EAX,ESI                         ; 0050bad6
    MOV EDX,dword ptr [EDI + 0x8]       ; 0050bad8
    IMUL EDX                            ; 0050badb
    SHRD EAX,EDX,0x10                   ; 0050badd
    ADD ECX,EAX                         ; 0050bae1
    TEST ECX,ECX                        ; 0050bae3
    JGE 0x0050b8f0                      ; 0050bae5
        ;   XREF to: 0050b8f0 (CONDITIONAL_JUMP)  ; LAB_0050b8f0
    XOR ECX,ECX                         ; 0050baeb
    JMP 0x0050b8f0                      ; 0050baed
        ;   XREF to: 0050b8f0 (UNCONDITIONAL_JUMP)  ; LAB_0050b8f0
    MOV EAX,ESI                         ; 0050baf2
        ;   Label: LAB_0050baf2
    MOV EDX,dword ptr [EDI]             ; 0050baf4
    IMUL EDX                            ; 0050baf6
    SHRD EAX,EDX,0x10                   ; 0050baf8
    SUB ECX,EAX                         ; 0050bafc
    JMP 0x0050bacd                      ; 0050bafe
        ;   XREF to: 0050bacd (UNCONDITIONAL_JUMP)  ; LAB_0050bacd
    MOV EAX,ESI                         ; 0050bb00
        ;   Label: LAB_0050bb00
    MOV EDX,dword ptr [EDI + 0x8]       ; 0050bb02
    IMUL EDX                            ; 0050bb05
    SHRD EAX,EDX,0x10                   ; 0050bb07
    SUB ECX,EAX                         ; 0050bb0b
    TEST ECX,ECX                        ; 0050bb0d
    JGE 0x0050b8f0                      ; 0050bb0f
        ;   XREF to: 0050b8f0 (CONDITIONAL_JUMP)  ; LAB_0050b8f0
    XOR ECX,ECX                         ; 0050bb15
    JMP 0x0050b8f0                      ; 0050bb17
        ;   XREF to: 0050b8f0 (UNCONDITIONAL_JUMP)  ; LAB_0050b8f0
    ADD ECX,dword ptr [ESP + 0x20]      ; 0050bb1c
        ;   Label: LAB_0050bb1c
    MOV EDX,dword ptr [EBX + 0x15aaa0]  ; 0050bb20
    MOV EAX,ECX                         ; 0050bb26
    IMUL EDX                            ; 0050bb28
    SHRD EAX,EDX,0x10                   ; 0050bb2a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050bb2e
    MOV EDX,dword ptr [EBX + 0x15aaa4]  ; 0050bb32
    MOV EAX,ECX                         ; 0050bb38
    IMUL EDX                            ; 0050bb3a
    SHRD EAX,EDX,0x10                   ; 0050bb3c
    MOV EDI,EAX                         ; 0050bb40
    MOV EDX,dword ptr [EBX + 0x15aaa8]  ; 0050bb42
    MOV EAX,ECX                         ; 0050bb48
    JMP 0x0050b955                      ; 0050bb4a
        ;   XREF to: 0050b955 (UNCONDITIONAL_JUMP)  ; LAB_0050b955

