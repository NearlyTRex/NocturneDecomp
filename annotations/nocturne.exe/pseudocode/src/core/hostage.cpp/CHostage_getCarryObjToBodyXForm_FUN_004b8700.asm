; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_hostage_cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700(CHostage *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined        Stack[-0x294]:1  local_294
; undefined        Stack[-0x264]:1  local_264
; undefined        Stack[-0x234]:1  local_234
; undefined        Stack[-0x204]:1  local_204
; undefined        Stack[-0x1d4]:1  local_1d4
; undefined        Stack[-0x1a4]:1  local_1a4
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0x144]:1  local_144
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xe4]:1  local_e4
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_CShotgun_00585de4
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8700
        ;   Label: core_hostage.cpp_CHostage_getCarryObjToBodyXForm_FUN_004b8700
    PUSH EDI                            ; 004b8701
    PUSH EBP                            ; 004b8702
    SUB ESP,0x288                       ; 004b8703
    MOV EDI,dword ptr [ESP + 0x29c]     ; 004b8709
    MOV EBX,ESI                         ; 004b8710
    MOV ESI,dword ptr [ESP + 0x298]     ; 004b8712
    MOV EAX,EDI                         ; 004b8719
    SHL EAX,0x4                         ; 004b871b
    ADD EAX,EDI                         ; 004b871e
    SHL EAX,0x2                         ; 004b8720
    LEA EBP,[ESI + EAX*0x1]             ; 004b8723
    MOV EDX,dword ptr [ESI + 0x1f920]   ; 004b8726
    MOV EAX,dword ptr [EBP + 0x24ac]    ; 004b872c
    CMP EDX,0x1                         ; 004b8732
    JZ 0x004b8862                       ; 004b8735
        ;   XREF to: 004b8862 (CONDITIONAL_JUMP)  ; LAB_004b8862
    MOV ECX,dword ptr [ESI + 0x1f920]   ; 004b873b
        ;   Label: LAB_004b873b
    CMP ECX,0x3                         ; 004b8741
    JNZ 0x004b8926                      ; 004b8744
        ;   XREF to: 004b8926 (CONDITIONAL_JUMP)  ; LAB_004b8926
    MOV EDX,0x3e882d5a                  ; 004b874a
    MOV ECX,0xbe4d1e54                  ; 004b874f
    MOV EBP,0x3d04bb36                  ; 004b8754
    LEA EAX,[ESP + 0x258]               ; 004b8759
    MOV dword ptr [ESP + 0x258],EDX     ; 004b8760
    MOV dword ptr [ESP + 0x25c],ECX     ; 004b8767
    LEA EDX,[ESP + 0x1ec]               ; 004b876e
    MOV dword ptr [ESP + 0x260],EBP     ; 004b8775
    CMP EDX,EAX                         ; 004b877c
    JZ 0x004b879a                       ; 004b877e
        ;   XREF to: 004b879a (CONDITIONAL_JUMP)  ; LAB_004b879a
    MOV EAX,0x3e882d5a                  ; 004b8780
    MOV dword ptr [ESP + 0x1f0],ECX     ; 004b8785
    MOV dword ptr [ESP + 0x1f4],EBP     ; 004b878c
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004b8793
    MOV EAX,0x3e0c27a6                  ; 004b879a
        ;   Label: LAB_004b879a
    MOV EBP,0xbef6147b                  ; 004b879f
    LEA EDX,[ESP + 0x1f8]               ; 004b87a4
    MOV dword ptr [ESP + 0x278],EAX     ; 004b87ab
    MOV dword ptr [ESP + 0x274],EAX     ; 004b87b2
    LEA EAX,[ESP + 0x270]               ; 004b87b9
    MOV dword ptr [ESP + 0x270],EBP     ; 004b87c0
    CMP EDX,EAX                         ; 004b87c7
    JZ 0x004b87e5                       ; 004b87c9
        ;   XREF to: 004b87e5 (CONDITIONAL_JUMP)  ; LAB_004b87e5
    MOV dword ptr [ESP + 0x1f8],EBP     ; 004b87cb
    MOV EBP,0x3e0c27a6                  ; 004b87d2
    MOV dword ptr [ESP + 0x1fc],EBP     ; 004b87d7
    MOV dword ptr [ESP + 0x200],EBP     ; 004b87de
    LEA EAX,[ESP + 0x1f8]               ; 004b87e5
        ;   Label: LAB_004b87e5
    PUSH EAX                            ; 004b87ec
    LEA EAX,[ESP + 0x1f0]               ; 004b87ed
    PUSH EAX                            ; 004b87f4
    LEA EAX,[ESP + 0x1b8]               ; 004b87f5
    PUSH EAX                            ; 004b87fc
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004b87fd
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,EDI                         ; 004b8802
    SHL EAX,0x4                         ; 004b8804
    ADD EAX,EDI                         ; 004b8807
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24a4] ; 004b8809
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b8810
    SUB EAX,EDX                         ; 004b8817
    ADD ESI,0xfd0                       ; 004b8819
    SHL EAX,0x4                         ; 004b881f
    ADD ESP,0xc                         ; 004b8822
    ADD ESI,EAX                         ; 004b8825
    PUSH ESI                            ; 004b8827
    LEA EAX,[ESP + 0x1b4]               ; 004b8828
    PUSH EAX                            ; 004b882f
    LEA ESI,[ESP + 0x38]                ; 004b8830
    LEA EDI,[ESP + 0x8]                 ; 004b8834
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004b8838
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004b883d
    LEA ESI,[ESP + 0x38]                ; 004b8842
    ADD ESP,0x8                         ; 004b8846
        ;   Label: LAB_004b8846
    MOVSD.REP ES:EDI,ESI                ; 004b8849
    MOV ECX,0xc                         ; 004b884b
    MOV ESI,ESP                         ; 004b8850
    MOV EDI,EBX                         ; 004b8852
    MOVSD.REP ES:EDI,ESI                ; 004b8854
    MOV EAX,EBX                         ; 004b8856
    ADD ESP,0x288                       ; 004b8858
    POP EBP                             ; 004b885e
    POP EDI                             ; 004b885f
    POP EBX                             ; 004b8860
    RET                                 ; 004b8861
    PUSH 0x585de4                       ; 004b8862 | = "CShotgun"
        ;   Label: LAB_004b8862
    PUSH EAX                            ; 004b8867
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004b8868
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004b886d
    TEST EAX,EAX                        ; 004b8870
    JZ 0x004b873b                       ; 004b8872
        ;   XREF to: 004b873b (CONDITIONAL_JUMP)  ; LAB_004b873b
    MOV EDX,0x3e89ba5e                  ; 004b8878
    MOV ECX,0xbc449ba6                  ; 004b887d
    MOV EDI,0x3dbc6a7f                  ; 004b8882
    MOV EAX,0xbe92f1aa                  ; 004b8887
    MOV dword ptr [ESP + 0x210],EDX     ; 004b888c
    MOV dword ptr [ESP + 0x214],ECX     ; 004b8893
    MOV dword ptr [ESP + 0x240],EAX     ; 004b889a
    LEA EAX,[ESP + 0x240]               ; 004b88a1
    MOV dword ptr [ESP + 0x218],EDI     ; 004b88a8
    PUSH EAX                            ; 004b88af
    LEA EAX,[ESP + 0x214]               ; 004b88b0
    MOV EDX,0x3f9ac083                  ; 004b88b7
    PUSH EAX                            ; 004b88bc
    LEA EAX,[ESP + 0x98]                ; 004b88bd
    MOV ECX,0x3ecf5c29                  ; 004b88c4
    PUSH EAX                            ; 004b88c9
    MOV dword ptr [ESP + 0x254],EDX     ; 004b88ca
    MOV dword ptr [ESP + 0x250],ECX     ; 004b88d1
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004b88d8
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,dword ptr [EBP + 0x24a4]    ; 004b88dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b88e3
    SUB EAX,EDX                         ; 004b88ea
    MOV EDX,EAX                         ; 004b88ec
    SHL EDX,0x4                         ; 004b88ee
    LEA EAX,[ESI + 0xfd0]               ; 004b88f1
    ADD ESP,0xc                         ; 004b88f7
    ADD EAX,EDX                         ; 004b88fa
    PUSH EAX                            ; 004b88fc
    LEA EAX,[ESP + 0x94]                ; 004b88fd
    PUSH EAX                            ; 004b8904
    LEA ESI,[ESP + 0xc8]                ; 004b8905
    LEA EDI,[ESP + 0x8]                 ; 004b890c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004b8910
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004b8915
    LEA ESI,[ESP + 0xc8]                ; 004b891a
    JMP 0x004b8846                      ; 004b8921
        ;   XREF to: 004b8846 (UNCONDITIONAL_JUMP)  ; LAB_004b8846
    CMP ECX,0x5                         ; 004b8926
        ;   Label: LAB_004b8926
    JNZ 0x004b8a36                      ; 004b8929
        ;   XREF to: 004b8a36 (CONDITIONAL_JUMP)  ; LAB_004b8a36
    MOV EDX,0x3e882d5a                  ; 004b892f
    MOV ECX,0xbe4d1e54                  ; 004b8934
    MOV EBP,0x3d04bb36                  ; 004b8939
    LEA EAX,[ESP + 0x21c]               ; 004b893e
    MOV dword ptr [ESP + 0x21c],EDX     ; 004b8945
    MOV dword ptr [ESP + 0x220],ECX     ; 004b894c
    LEA EDX,[ESP + 0x264]               ; 004b8953
    MOV dword ptr [ESP + 0x224],EBP     ; 004b895a
    CMP EDX,EAX                         ; 004b8961
    JZ 0x004b897f                       ; 004b8963
        ;   XREF to: 004b897f (CONDITIONAL_JUMP)  ; LAB_004b897f
    MOV EAX,0x3e882d5a                  ; 004b8965
    MOV dword ptr [ESP + 0x268],ECX     ; 004b896a
    MOV dword ptr [ESP + 0x26c],EBP     ; 004b8971
    MOV dword ptr [ESP + 0x264],EAX     ; 004b8978
    MOV EAX,0x3e0c27a6                  ; 004b897f
        ;   Label: LAB_004b897f
    MOV EBP,0xbef6147b                  ; 004b8984
    LEA EDX,[ESP + 0x24c]               ; 004b8989
    MOV dword ptr [ESP + 0x23c],EAX     ; 004b8990
    MOV dword ptr [ESP + 0x238],EAX     ; 004b8997
    LEA EAX,[ESP + 0x234]               ; 004b899e
    MOV dword ptr [ESP + 0x234],EBP     ; 004b89a5
    CMP EDX,EAX                         ; 004b89ac
    JZ 0x004b89ca                       ; 004b89ae
        ;   XREF to: 004b89ca (CONDITIONAL_JUMP)  ; LAB_004b89ca
    MOV dword ptr [ESP + 0x24c],EBP     ; 004b89b0
    MOV EBP,0x3e0c27a6                  ; 004b89b7
    MOV dword ptr [ESP + 0x250],EBP     ; 004b89bc
    MOV dword ptr [ESP + 0x254],EBP     ; 004b89c3
    LEA EAX,[ESP + 0x24c]               ; 004b89ca
        ;   Label: LAB_004b89ca
    PUSH EAX                            ; 004b89d1
    LEA EAX,[ESP + 0x268]               ; 004b89d2
    PUSH EAX                            ; 004b89d9
    LEA EAX,[ESP + 0x188]               ; 004b89da
    PUSH EAX                            ; 004b89e1
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004b89e2
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,EDI                         ; 004b89e7
    SHL EAX,0x4                         ; 004b89e9
    ADD EAX,EDI                         ; 004b89ec
    MOV EDI,dword ptr [ESI + EAX*0x4 + 0x24a4] ; 004b89ee
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b89f5
    SUB EAX,EDI                         ; 004b89fc
    ADD ESI,0xfd0                       ; 004b89fe
    SHL EAX,0x4                         ; 004b8a04
    ADD ESP,0xc                         ; 004b8a07
    ADD ESI,EAX                         ; 004b8a0a
    PUSH ESI                            ; 004b8a0c
    LEA EAX,[ESP + 0x184]               ; 004b8a0d
    PUSH EAX                            ; 004b8a14
    LEA ESI,[ESP + 0x128]               ; 004b8a15
    LEA EDI,[ESP + 0x8]                 ; 004b8a1c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004b8a20
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004b8a25
    LEA ESI,[ESP + 0x128]               ; 004b8a2a
    JMP 0x004b8846                      ; 004b8a31
        ;   XREF to: 004b8846 (UNCONDITIONAL_JUMP)  ; LAB_004b8846
    JNZ 0x004b8b46                      ; 004b8a36
        ;   XREF to: 004b8b46 (CONDITIONAL_JUMP)  ; LAB_004b8b46
        ;   Label: LAB_004b8a36
    MOV EDX,0x3e882d5a                  ; 004b8a3c
    MOV ECX,0xbe4d1e54                  ; 004b8a41
    MOV EBP,0x3d04bb36                  ; 004b8a46
    LEA EAX,[ESP + 0x1e0]               ; 004b8a4b
    MOV dword ptr [ESP + 0x1e0],EDX     ; 004b8a52
    MOV dword ptr [ESP + 0x1e4],ECX     ; 004b8a59
    LEA EDX,[ESP + 0x228]               ; 004b8a60
    MOV dword ptr [ESP + 0x1e8],EBP     ; 004b8a67
    CMP EDX,EAX                         ; 004b8a6e
    JNZ 0x004b8b27                      ; 004b8a70
        ;   XREF to: 004b8b27 (CONDITIONAL_JUMP)  ; LAB_004b8b27
    MOV EAX,0x3e0c27a6                  ; 004b8a76
        ;   Label: LAB_004b8a76
    MOV EBP,0xbef6147b                  ; 004b8a7b
    LEA EDX,[ESP + 0x27c]               ; 004b8a80
    MOV dword ptr [ESP + 0x20c],EAX     ; 004b8a87
    MOV dword ptr [ESP + 0x208],EAX     ; 004b8a8e
    LEA EAX,[ESP + 0x204]               ; 004b8a95
    MOV dword ptr [ESP + 0x204],EBP     ; 004b8a9c
    CMP EDX,EAX                         ; 004b8aa3
    JZ 0x004b8ac1                       ; 004b8aa5
        ;   XREF to: 004b8ac1 (CONDITIONAL_JUMP)  ; LAB_004b8ac1
    MOV dword ptr [ESP + 0x27c],EBP     ; 004b8aa7
    MOV EBP,0x3e0c27a6                  ; 004b8aae
    MOV dword ptr [ESP + 0x280],EBP     ; 004b8ab3
    MOV dword ptr [ESP + 0x284],EBP     ; 004b8aba
    LEA EAX,[ESP + 0x27c]               ; 004b8ac1
        ;   Label: LAB_004b8ac1
    PUSH EAX                            ; 004b8ac8
    LEA EAX,[ESP + 0x22c]               ; 004b8ac9
    PUSH EAX                            ; 004b8ad0
    LEA EAX,[ESP + 0xf8]                ; 004b8ad1
    PUSH EAX                            ; 004b8ad8
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004b8ad9
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,EDI                         ; 004b8ade
    SHL EAX,0x4                         ; 004b8ae0
    ADD EAX,EDI                         ; 004b8ae3
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24a4] ; 004b8ae5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b8aec
    SUB EAX,EDX                         ; 004b8af3
    ADD ESI,0xfd0                       ; 004b8af5
    SHL EAX,0x4                         ; 004b8afb
    ADD ESP,0xc                         ; 004b8afe
    ADD ESI,EAX                         ; 004b8b01
    PUSH ESI                            ; 004b8b03
    LEA EAX,[ESP + 0xf4]                ; 004b8b04
    PUSH EAX                            ; 004b8b0b
    LEA ESI,[ESP + 0x68]                ; 004b8b0c
    LEA EDI,[ESP + 0x8]                 ; 004b8b10
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004b8b14
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004b8b19
    LEA ESI,[ESP + 0x68]                ; 004b8b1e
    JMP 0x004b8846                      ; 004b8b22
        ;   XREF to: 004b8846 (UNCONDITIONAL_JUMP)  ; LAB_004b8846
    MOV EAX,0x3e882d5a                  ; 004b8b27
        ;   Label: LAB_004b8b27
    MOV dword ptr [ESP + 0x22c],ECX     ; 004b8b2c
    MOV dword ptr [ESP + 0x230],EBP     ; 004b8b33
    MOV dword ptr [ESP + 0x228],EAX     ; 004b8b3a
    JMP 0x004b8a76                      ; 004b8b41
        ;   XREF to: 004b8a76 (UNCONDITIONAL_JUMP)  ; LAB_004b8a76
    PUSH EDI                            ; 004b8b46
        ;   Label: LAB_004b8b46
    PUSH ESI                            ; 004b8b47
    LEA ESI,[ESP + 0x158]               ; 004b8b48
    LEA EDI,[ESP + 0x8]                 ; 004b8b4f
    CALL core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490 ; 004b8b53
        ;   XREF to: 00429490 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429490(CCharacter * this_ptr, int hand_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 004b8b58
    LEA ESI,[ESP + 0x158]               ; 004b8b5d
    JMP 0x004b8846                      ; 004b8b64
        ;   XREF to: 004b8846 (UNCONDITIONAL_JUMP)  ; LAB_004b8846

