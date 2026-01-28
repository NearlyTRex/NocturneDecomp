; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hostage_cpp_CHostage_FUN_004f6550(CHostage *this_ptr)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x294]:1  local_294
; undefined1       Stack[-0x264]:1  local_264
; undefined1       Stack[-0x234]:1  local_234
; undefined1       Stack[-0x204]:1  local_204
; undefined1       Stack[-0x1d4]:1  local_1d4
; undefined1       Stack[-0x1a4]:1  local_1a4
; undefined1       Stack[-0x174]:1  local_174
; undefined1       Stack[-0x144]:1  local_144
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0xe4]:1  local_e4
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
;   TerminatedCString s_CShotgun_0062f224
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_CCharacter_FUN_0042d300
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6550
        ;   Label: core_hostage.cpp_CHostage_FUN_004f6550
    PUSH EDI                            ; 004f6551
    PUSH EBP                            ; 004f6552
    SUB ESP,0x288                       ; 004f6553
    MOV EDI,dword ptr [ESP + 0x29c]     ; 004f6559
    MOV EBX,ESI                         ; 004f6560
    MOV ESI,dword ptr [ESP + 0x298]     ; 004f6562
    MOV EAX,EDI                         ; 004f6569
    SHL EAX,0x4                         ; 004f656b
    ADD EAX,EDI                         ; 004f656e
    SHL EAX,0x2                         ; 004f6570
    LEA EBP,[ESI + EAX*0x1]             ; 004f6573
    MOV EDX,dword ptr [ESI + 0x1fab8]   ; 004f6576
    MOV EAX,dword ptr [EBP + 0x24b4]    ; 004f657c
    CMP EDX,0x1                         ; 004f6582
    JZ 0x004f66b2                       ; 004f6585
        ;   XREF to: 004f66b2 (CONDITIONAL_JUMP)  ; LAB_004f66b2
    MOV ECX,dword ptr [ESI + 0x1fab8]   ; 004f658b
        ;   Label: LAB_004f658b
    CMP ECX,0x3                         ; 004f6591
    JNZ 0x004f6776                      ; 004f6594
        ;   XREF to: 004f6776 (CONDITIONAL_JUMP)  ; LAB_004f6776
    MOV EDX,0x3e882d5a                  ; 004f659a
    MOV ECX,0xbe4d1e54                  ; 004f659f
    MOV EBP,0x3d04bb36                  ; 004f65a4
    LEA EAX,[ESP + 0x258]               ; 004f65a9
    MOV dword ptr [ESP + 0x258],EDX     ; 004f65b0
    MOV dword ptr [ESP + 0x25c],ECX     ; 004f65b7
    LEA EDX,[ESP + 0x1ec]               ; 004f65be
    MOV dword ptr [ESP + 0x260],EBP     ; 004f65c5
    CMP EDX,EAX                         ; 004f65cc
    JZ 0x004f65ea                       ; 004f65ce
        ;   XREF to: 004f65ea (CONDITIONAL_JUMP)  ; LAB_004f65ea
    MOV EAX,0x3e882d5a                  ; 004f65d0
    MOV dword ptr [ESP + 0x1f0],ECX     ; 004f65d5
    MOV dword ptr [ESP + 0x1f4],EBP     ; 004f65dc
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004f65e3
    MOV EAX,0x3e0c27a6                  ; 004f65ea
        ;   Label: LAB_004f65ea
    MOV EBP,0xbef6147b                  ; 004f65ef
    LEA EDX,[ESP + 0x1f8]               ; 004f65f4
    MOV dword ptr [ESP + 0x278],EAX     ; 004f65fb
    MOV dword ptr [ESP + 0x274],EAX     ; 004f6602
    LEA EAX,[ESP + 0x270]               ; 004f6609
    MOV dword ptr [ESP + 0x270],EBP     ; 004f6610
    CMP EDX,EAX                         ; 004f6617
    JZ 0x004f6635                       ; 004f6619
        ;   XREF to: 004f6635 (CONDITIONAL_JUMP)  ; LAB_004f6635
    MOV dword ptr [ESP + 0x1f8],EBP     ; 004f661b
    MOV EBP,0x3e0c27a6                  ; 004f6622
    MOV dword ptr [ESP + 0x1fc],EBP     ; 004f6627
    MOV dword ptr [ESP + 0x200],EBP     ; 004f662e
    LEA EAX,[ESP + 0x1f8]               ; 004f6635
        ;   Label: LAB_004f6635
    PUSH EAX                            ; 004f663c
    LEA EAX,[ESP + 0x1f0]               ; 004f663d
    PUSH EAX                            ; 004f6644
    LEA EAX,[ESP + 0x1b8]               ; 004f6645
    PUSH EAX                            ; 004f664c
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004f664d
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,EDI                         ; 004f6652
    SHL EAX,0x4                         ; 004f6654
    ADD EAX,EDI                         ; 004f6657
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24ac] ; 004f6659
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f6660
    SUB EAX,EDX                         ; 004f6667
    ADD ESI,0xfd8                       ; 004f6669
    SHL EAX,0x4                         ; 004f666f
    ADD ESP,0xc                         ; 004f6672
    ADD ESI,EAX                         ; 004f6675
    PUSH ESI                            ; 004f6677
    LEA EAX,[ESP + 0x1b4]               ; 004f6678
    PUSH EAX                            ; 004f667f
    LEA ESI,[ESP + 0x38]                ; 004f6680
    LEA EDI,[ESP + 0x8]                 ; 004f6684
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004f6688
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004f668d
    LEA ESI,[ESP + 0x38]                ; 004f6692
    ADD ESP,0x8                         ; 004f6696
        ;   Label: LAB_004f6696
    MOVSD.REP ES:EDI,ESI                ; 004f6699
    MOV ECX,0xc                         ; 004f669b
    MOV ESI,ESP                         ; 004f66a0
    MOV EDI,EBX                         ; 004f66a2
    MOVSD.REP ES:EDI,ESI                ; 004f66a4
    MOV EAX,EBX                         ; 004f66a6
    ADD ESP,0x288                       ; 004f66a8
    POP EBP                             ; 004f66ae
    POP EDI                             ; 004f66af
    POP EBX                             ; 004f66b0
    RET                                 ; 004f66b1
    PUSH 0x62f224                       ; 004f66b2 | = "CShotgun"
        ;   Label: LAB_004f66b2
    PUSH EAX                            ; 004f66b7
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004f66b8
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f66bd
    TEST EAX,EAX                        ; 004f66c0
    JZ 0x004f658b                       ; 004f66c2
        ;   XREF to: 004f658b (CONDITIONAL_JUMP)  ; LAB_004f658b
    MOV EDX,0x3e89ba5e                  ; 004f66c8
    MOV ECX,0xbc449ba6                  ; 004f66cd
    MOV EDI,0x3dbc6a7f                  ; 004f66d2
    MOV EAX,0xbe92f1aa                  ; 004f66d7
    MOV dword ptr [ESP + 0x210],EDX     ; 004f66dc
    MOV dword ptr [ESP + 0x214],ECX     ; 004f66e3
    MOV dword ptr [ESP + 0x240],EAX     ; 004f66ea
    LEA EAX,[ESP + 0x240]               ; 004f66f1
    MOV dword ptr [ESP + 0x218],EDI     ; 004f66f8
    PUSH EAX                            ; 004f66ff
    LEA EAX,[ESP + 0x214]               ; 004f6700
    MOV EDX,0x3f9ac083                  ; 004f6707
    PUSH EAX                            ; 004f670c
    LEA EAX,[ESP + 0x98]                ; 004f670d
    MOV ECX,0x3ecf5c29                  ; 004f6714
    PUSH EAX                            ; 004f6719
    MOV dword ptr [ESP + 0x254],EDX     ; 004f671a
    MOV dword ptr [ESP + 0x250],ECX     ; 004f6721
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004f6728
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,dword ptr [EBP + 0x24ac]    ; 004f672d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f6733
    SUB EAX,EDX                         ; 004f673a
    MOV EDX,EAX                         ; 004f673c
    SHL EDX,0x4                         ; 004f673e
    LEA EAX,[ESI + 0xfd8]               ; 004f6741
    ADD ESP,0xc                         ; 004f6747
    ADD EAX,EDX                         ; 004f674a
    PUSH EAX                            ; 004f674c
    LEA EAX,[ESP + 0x94]                ; 004f674d
    PUSH EAX                            ; 004f6754
    LEA ESI,[ESP + 0xc8]                ; 004f6755
    LEA EDI,[ESP + 0x8]                 ; 004f675c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004f6760
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004f6765
    LEA ESI,[ESP + 0xc8]                ; 004f676a
    JMP 0x004f6696                      ; 004f6771
        ;   XREF to: 004f6696 (UNCONDITIONAL_JUMP)  ; LAB_004f6696
    CMP ECX,0x5                         ; 004f6776
        ;   Label: LAB_004f6776
    JNZ 0x004f6886                      ; 004f6779
        ;   XREF to: 004f6886 (CONDITIONAL_JUMP)  ; LAB_004f6886
    MOV EDX,0x3e882d5a                  ; 004f677f
    MOV ECX,0xbe4d1e54                  ; 004f6784
    MOV EBP,0x3d04bb36                  ; 004f6789
    LEA EAX,[ESP + 0x21c]               ; 004f678e
    MOV dword ptr [ESP + 0x21c],EDX     ; 004f6795
    MOV dword ptr [ESP + 0x220],ECX     ; 004f679c
    LEA EDX,[ESP + 0x264]               ; 004f67a3
    MOV dword ptr [ESP + 0x224],EBP     ; 004f67aa
    CMP EDX,EAX                         ; 004f67b1
    JZ 0x004f67cf                       ; 004f67b3
        ;   XREF to: 004f67cf (CONDITIONAL_JUMP)  ; LAB_004f67cf
    MOV EAX,0x3e882d5a                  ; 004f67b5
    MOV dword ptr [ESP + 0x268],ECX     ; 004f67ba
    MOV dword ptr [ESP + 0x26c],EBP     ; 004f67c1
    MOV dword ptr [ESP + 0x264],EAX     ; 004f67c8
    MOV EAX,0x3e0c27a6                  ; 004f67cf
        ;   Label: LAB_004f67cf
    MOV EBP,0xbef6147b                  ; 004f67d4
    LEA EDX,[ESP + 0x24c]               ; 004f67d9
    MOV dword ptr [ESP + 0x23c],EAX     ; 004f67e0
    MOV dword ptr [ESP + 0x238],EAX     ; 004f67e7
    LEA EAX,[ESP + 0x234]               ; 004f67ee
    MOV dword ptr [ESP + 0x234],EBP     ; 004f67f5
    CMP EDX,EAX                         ; 004f67fc
    JZ 0x004f681a                       ; 004f67fe
        ;   XREF to: 004f681a (CONDITIONAL_JUMP)  ; LAB_004f681a
    MOV dword ptr [ESP + 0x24c],EBP     ; 004f6800
    MOV EBP,0x3e0c27a6                  ; 004f6807
    MOV dword ptr [ESP + 0x250],EBP     ; 004f680c
    MOV dword ptr [ESP + 0x254],EBP     ; 004f6813
    LEA EAX,[ESP + 0x24c]               ; 004f681a
        ;   Label: LAB_004f681a
    PUSH EAX                            ; 004f6821
    LEA EAX,[ESP + 0x268]               ; 004f6822
    PUSH EAX                            ; 004f6829
    LEA EAX,[ESP + 0x188]               ; 004f682a
    PUSH EAX                            ; 004f6831
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004f6832
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,EDI                         ; 004f6837
    SHL EAX,0x4                         ; 004f6839
    ADD EAX,EDI                         ; 004f683c
    MOV EDI,dword ptr [ESI + EAX*0x4 + 0x24ac] ; 004f683e
    LEA EAX,[EDI*0x4 + 0x0]             ; 004f6845
    SUB EAX,EDI                         ; 004f684c
    ADD ESI,0xfd8                       ; 004f684e
    SHL EAX,0x4                         ; 004f6854
    ADD ESP,0xc                         ; 004f6857
    ADD ESI,EAX                         ; 004f685a
    PUSH ESI                            ; 004f685c
    LEA EAX,[ESP + 0x184]               ; 004f685d
    PUSH EAX                            ; 004f6864
    LEA ESI,[ESP + 0x128]               ; 004f6865
    LEA EDI,[ESP + 0x8]                 ; 004f686c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004f6870
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004f6875
    LEA ESI,[ESP + 0x128]               ; 004f687a
    JMP 0x004f6696                      ; 004f6881
        ;   XREF to: 004f6696 (UNCONDITIONAL_JUMP)  ; LAB_004f6696
    JNZ 0x004f6996                      ; 004f6886
        ;   XREF to: 004f6996 (CONDITIONAL_JUMP)  ; LAB_004f6996
        ;   Label: LAB_004f6886
    MOV EDX,0x3e882d5a                  ; 004f688c
    MOV ECX,0xbe4d1e54                  ; 004f6891
    MOV EBP,0x3d04bb36                  ; 004f6896
    LEA EAX,[ESP + 0x1e0]               ; 004f689b
    MOV dword ptr [ESP + 0x1e0],EDX     ; 004f68a2
    MOV dword ptr [ESP + 0x1e4],ECX     ; 004f68a9
    LEA EDX,[ESP + 0x228]               ; 004f68b0
    MOV dword ptr [ESP + 0x1e8],EBP     ; 004f68b7
    CMP EDX,EAX                         ; 004f68be
    JNZ 0x004f6977                      ; 004f68c0
        ;   XREF to: 004f6977 (CONDITIONAL_JUMP)  ; LAB_004f6977
    MOV EAX,0x3e0c27a6                  ; 004f68c6
        ;   Label: LAB_004f68c6
    MOV EBP,0xbef6147b                  ; 004f68cb
    LEA EDX,[ESP + 0x27c]               ; 004f68d0
    MOV dword ptr [ESP + 0x20c],EAX     ; 004f68d7
    MOV dword ptr [ESP + 0x208],EAX     ; 004f68de
    LEA EAX,[ESP + 0x204]               ; 004f68e5
    MOV dword ptr [ESP + 0x204],EBP     ; 004f68ec
    CMP EDX,EAX                         ; 004f68f3
    JZ 0x004f6911                       ; 004f68f5
        ;   XREF to: 004f6911 (CONDITIONAL_JUMP)  ; LAB_004f6911
    MOV dword ptr [ESP + 0x27c],EBP     ; 004f68f7
    MOV EBP,0x3e0c27a6                  ; 004f68fe
    MOV dword ptr [ESP + 0x280],EBP     ; 004f6903
    MOV dword ptr [ESP + 0x284],EBP     ; 004f690a
    LEA EAX,[ESP + 0x27c]               ; 004f6911
        ;   Label: LAB_004f6911
    PUSH EAX                            ; 004f6918
    LEA EAX,[ESP + 0x22c]               ; 004f6919
    PUSH EAX                            ; 004f6920
    LEA EAX,[ESP + 0xf8]                ; 004f6921
    PUSH EAX                            ; 004f6928
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004f6929
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,EDI                         ; 004f692e
    SHL EAX,0x4                         ; 004f6930
    ADD EAX,EDI                         ; 004f6933
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24ac] ; 004f6935
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f693c
    SUB EAX,EDX                         ; 004f6943
    ADD ESI,0xfd8                       ; 004f6945
    SHL EAX,0x4                         ; 004f694b
    ADD ESP,0xc                         ; 004f694e
    ADD ESI,EAX                         ; 004f6951
    PUSH ESI                            ; 004f6953
    LEA EAX,[ESP + 0xf4]                ; 004f6954
    PUSH EAX                            ; 004f695b
    LEA ESI,[ESP + 0x68]                ; 004f695c
    LEA EDI,[ESP + 0x8]                 ; 004f6960
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004f6964
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004f6969
    LEA ESI,[ESP + 0x68]                ; 004f696e
    JMP 0x004f6696                      ; 004f6972
        ;   XREF to: 004f6696 (UNCONDITIONAL_JUMP)  ; LAB_004f6696
    MOV EAX,0x3e882d5a                  ; 004f6977
        ;   Label: LAB_004f6977
    MOV dword ptr [ESP + 0x22c],ECX     ; 004f697c
    MOV dword ptr [ESP + 0x230],EBP     ; 004f6983
    MOV dword ptr [ESP + 0x228],EAX     ; 004f698a
    JMP 0x004f68c6                      ; 004f6991
        ;   XREF to: 004f68c6 (UNCONDITIONAL_JUMP)  ; LAB_004f68c6
    PUSH EDI                            ; 004f6996
        ;   Label: LAB_004f6996
    PUSH ESI                            ; 004f6997
    LEA ESI,[ESP + 0x158]               ; 004f6998
    LEA EDI,[ESP + 0x8]                 ; 004f699f
    CALL core_charactr.cpp_CCharacter_FUN_0042d300 ; 004f69a3
        ;   XREF to: 0042d300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d300(CCharacter * this_ptr)
    MOV ECX,0xc                         ; 004f69a8
    LEA ESI,[ESP + 0x158]               ; 004f69ad
    JMP 0x004f6696                      ; 004f69b4
        ;   XREF to: 004f6696 (UNCONDITIONAL_JUMP)  ; LAB_004f6696

