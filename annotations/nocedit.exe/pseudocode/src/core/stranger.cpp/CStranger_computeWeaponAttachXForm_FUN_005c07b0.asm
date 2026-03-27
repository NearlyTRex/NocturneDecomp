; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack3_esi core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carried_actor
; int              Stack[0xc]:4   hand_index
; Local Variables:
; CMatrix3x4f      Stack[-0xd5c]:48  local_d5c
; CMatrix3x4f      Stack[-0xd2c]:48  local_d2c
; CMatrix3x4f      Stack[-0xcfc]:48  local_cfc
; CMatrix3x4f      Stack[-0xccc]:48  local_ccc
; CMatrix3x4f      Stack[-0xc9c]:48  local_c9c
; CMatrix3x4f      Stack[-0xc6c]:48  local_c6c
; CMatrix3x4f      Stack[-0xc3c]:48  local_c3c
; CMatrix3x4f      Stack[-0xc0c]:48  local_c0c
; CMatrix3x4f      Stack[-0xbdc]:48  local_bdc
; CMatrix3x4f      Stack[-0xbac]:48  local_bac
; CMatrix3x4f      Stack[-0xb7c]:48  local_b7c
; CMatrix3x4f      Stack[-0xb4c]:48  local_b4c
; CMatrix3x4f      Stack[-0xb1c]:48  local_b1c
; CMatrix3x4f      Stack[-0xaec]:48  local_aec
; CMatrix3x4f      Stack[-0xabc]:48  local_abc
; CMatrix3x4f      Stack[-0xa8c]:48  local_a8c
; CMatrix3x4f      Stack[-0xa5c]:48  local_a5c
; float[12]        Stack[-0xa2c]:48  local_a2c
; CMatrix3x4f      Stack[-0x9fc]:48  local_9fc
; CMatrix3x3f      Stack[-0x9cc]:36  local_9cc
; CMatrix3x4f      Stack[-0x99c]:48  local_99c
; CMatrix3x4f      Stack[-0x96c]:48  local_96c
; CMatrix3x4f      Stack[-0x93c]:48  local_93c
; CMatrix3x4f      Stack[-0x90c]:48  local_90c
; CMatrix3x4f      Stack[-0x8dc]:48  local_8dc
; CMatrix3x4f      Stack[-0x8ac]:48  local_8ac
; CMatrix3x4f      Stack[-0x87c]:48  local_87c
; CMatrix3x4f      Stack[-0x84c]:48  local_84c
; CMatrix3x4f      Stack[-0x81c]:48  local_81c
; CMatrix3x4f      Stack[-0x7ec]:48  local_7ec
; CMatrix3x4f      Stack[-0x7bc]:48  local_7bc
; CMatrix3x4f      Stack[-0x78c]:48  local_78c
; CMatrix3x4f      Stack[-0x75c]:48  local_75c
; CMatrix3x4f      Stack[-0x72c]:48  local_72c
; CMatrix3x4f      Stack[-0x6fc]:48  local_6fc
; CMatrix3x4f      Stack[-0x6cc]:48  local_6cc
; CMatrix3x4f      Stack[-0x69c]:48  local_69c
; CMatrix3x4f      Stack[-0x66c]:48  local_66c
; CMatrix3x4f      Stack[-0x63c]:48  local_63c
; CMatrix3x4f      Stack[-0x60c]:48  local_60c
; CMatrix3x4f      Stack[-0x5dc]:48  local_5dc
; CMatrix3x4f      Stack[-0x5ac]:48  local_5ac
; CMatrix3x4f      Stack[-0x57c]:48  local_57c
; CMatrix3x4f      Stack[-0x54c]:48  local_54c
; CMatrix3x4f      Stack[-0x51c]:48  local_51c
; CMatrix3x4f      Stack[-0x4ec]:48  local_4ec
; CMatrix3x4f      Stack[-0x4bc]:48  local_4bc
; CMatrix3x4f      Stack[-0x48c]:48  local_48c
; CMatrix3x4f      Stack[-0x45c]:48  local_45c
; CMatrix3x4f      Stack[-0x42c]:48  local_42c
; CMatrix3x4f      Stack[-0x3fc]:48  local_3fc
; CMatrix3x4f      Stack[-0x3cc]:48  local_3cc
; CMatrix3x4f      Stack[-0x39c]:48  local_39c
; CMatrix3x4f      Stack[-0x36c]:48  local_36c
; CMatrix3x4f      Stack[-0x33c]:48  local_33c
; CMatrix3x4f      Stack[-0x30c]:48  local_30c
; CMatrix3x4f      Stack[-0x2dc]:48  local_2dc
; CMatrix3x4f      Stack[-0x2ac]:48  local_2ac
; CMatrix3x4f      Stack[-0x27c]:48  local_27c
; CMatrix3x4f      Stack[-0x24c]:48  local_24c
; CBoundingBox3D   Stack[-0x21c]:24  local_21c
; CBoundingBox3D   Stack[-0x204]:24  local_204
; CVector3f        Stack[-0x1ec]:12  local_1ec
; CVector3f        Stack[-0x1e0]:12  local_1e0
; CVector3f        Stack[-0x1d4]:12  local_1d4
; CVector3f        Stack[-0x1c8]:12  local_1c8
; CVector3f        Stack[-0x1bc]:12  local_1bc
; CVector3f        Stack[-0x1b0]:12  local_1b0
; CVector3f        Stack[-0x1a4]:12  local_1a4
; float            Stack[-0x198]:4  local_198
; float            Stack[-0x194]:4  local_194
; float            Stack[-0x190]:4  local_190
; CVector3f        Stack[-0x18c]:12  local_18c
; CWeapon *        Stack[-0x180]:4  local_180
; CWeapon *        Stack[-0x17c]:4  pCStack_17c
; CWeapon *        Stack[-0x178]:4  pCStack_178
; CVector3f        Stack[-0x174]:12  local_174
; CVector3f        Stack[-0x168]:12  local_168
; CVector3f        Stack[-0x15c]:12  local_15c
; CWeapon *        Stack[-0x150]:4  local_150
; CWeapon *        Stack[-0x14c]:4  local_14c
; CWeapon *        Stack[-0x148]:4  local_148
; CVector3f        Stack[-0x144]:12  local_144
; float            Stack[-0x138]:4  local_138
; float            Stack[-0x134]:4  local_134
; float            Stack[-0x130]:4  local_130
; CVector3f        Stack[-0x12c]:12  local_12c
; CVector3f        Stack[-0x120]:12  local_120
; CVector3f        Stack[-0x114]:12  local_114
; float            Stack[-0x108]:4  local_108
; float            Stack[-0x104]:4  local_104
; float            Stack[-0x100]:4  local_100
; float            Stack[-0xfc]:4  local_fc
; float            Stack[-0xf8]:4  local_f8
; float            Stack[-0xf4]:4  local_f4
; CVector3f        Stack[-0xf0]:12  local_f0
; CVector3f        Stack[-0xe4]:12  local_e4
; CVector3f        Stack[-0xd8]:12  local_d8
; CVector3f        Stack[-0xcc]:12  local_cc
; CVector3f        Stack[-0xc0]:12  local_c0
; CVector3f        Stack[-0xb4]:12  local_b4
; CVector3f        Stack[-0xa8]:12  local_a8
; CVector3f        Stack[-0x9c]:12  local_9c
; CVector3f        Stack[-0x90]:12  local_90
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; CVector3f        Stack[-0x24]:12  local_24
; CMatrix3x4f *    Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170 at 005c5196
;   core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005c06b0 at 005c0706
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_0065394c
;   TerminatedCString s_Don_t_know_how_to_carry__00653961
;   float FLOAT_00653984 = 0.5
;   double DOUBLE_0065398c = 0.700000000000000
;   double DOUBLE_00653994 = 0.300000000000000
;   float FLOAT_0065399c = 0.3330000
;   undefined4 g_CLightActorClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CVector3f CVector3f_03f6bab0
;   CVector3f CVector3f_03f6babc
;   undefined4 g_StrangerIndices[13]
;   undefined4 g_StrangerIndices[14]
;   UVector3 g_ZeroVector
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_buildRotationX_FUN_005f6c40
;   core_xform.cpp_buildRotationY_FUN_005f6cc0
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c07b0
        ;   Label: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
    PUSH EDI                            ; 005c07b1
    PUSH EBP                            ; 005c07b2
    MOV EBP,ESP                         ; 005c07b3
    SUB ESP,0xd50                       ; 005c07b5
    SUB EBP,0x7a                        ; 005c07bb
    MOV EBX,dword ptr [EBP + 0x8a]      ; 005c07be
    MOV dword ptr [EBP + 0x6e],ESI      ; 005c07c4
    MOV EDX,dword ptr [EBP + 0x92]      ; 005c07c7
    MOV EAX,EDX                         ; 005c07cd
    SHL EAX,0x4                         ; 005c07cf
    ADD EAX,EDX                         ; 005c07d2
    MOV EDX,dword ptr [0x03f95d78]      ; 005c07d4 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 005c07da
    MOV ECX,dword ptr [EBP + 0x8e]      ; 005c07db
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24ac] ; 005c07e1
    PUSH ECX                            ; 005c07e8
    LEA EDI,[EBX + 0xfd8]               ; 005c07e9
    MOV dword ptr [EBP + 0x72],EAX      ; 005c07ef
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c07f2
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005c07f7
    TEST EAX,EAX                        ; 005c07fa
    JZ 0x005c0f96                       ; 005c07fc
        ;   XREF to: 005c0f96 (CONDITIONAL_JUMP)  ; LAB_005c0f96
    MOV EDX,dword ptr [EBP + 0x72]      ; 005c0802
    LEA ESI,[EDX*0x4 + 0x0]             ; 005c0805
    SUB ESI,EDX                         ; 005c080c
    SHL ESI,0x4                         ; 005c080e
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 005c0811
    ADD ESI,EDI                         ; 005c0817
    CMP EDX,0x1                         ; 005c0819
    JZ 0x005c0962                       ; 005c081c
        ;   XREF to: 005c0962 (CONDITIONAL_JUMP)  ; LAB_005c0962
    CMP EDX,0x2                         ; 005c0822
    JZ 0x005c0a7b                       ; 005c0825
        ;   XREF to: 005c0a7b (CONDITIONAL_JUMP)  ; LAB_005c0a7b
    CMP EDX,0x4                         ; 005c082b
    JZ 0x005c0ba0                       ; 005c082e
        ;   XREF to: 005c0ba0 (CONDITIONAL_JUMP)  ; LAB_005c0ba0
    CMP EDX,0x3                         ; 005c0834
    JZ 0x005c0cad                       ; 005c0837
        ;   XREF to: 005c0cad (CONDITIONAL_JUMP)  ; LAB_005c0cad
    CMP EDX,0x5                         ; 005c083d
    JZ 0x005c0d1d                       ; 005c0840
        ;   XREF to: 005c0d1d (CONDITIONAL_JUMP)  ; LAB_005c0d1d
    CMP EDX,0x7                         ; 005c0846
    JZ 0x005c0d9d                       ; 005c0849
        ;   XREF to: 005c0d9d (CONDITIONAL_JUMP)  ; LAB_005c0d9d
    CMP dword ptr [EBP + 0x92],0x0      ; 005c084f
    JNZ 0x005c0eaa                      ; 005c0856
        ;   XREF to: 005c0eaa (CONDITIONAL_JUMP)  ; LAB_005c0eaa
    PUSH 0x3f87558                      ; 005c085c | g_ZeroVector
    PUSH 0x3f6babc                      ; 005c0861 | CVector3f_03f6babc
    LEA EAX,[EBP + 0xfffff92a]          ; 005c0866
    PUSH EAX                            ; 005c086c
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c086d
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0872
    PUSH ESI                            ; 005c0875
    LEA EAX,[EBP + 0xfffff92a]          ; 005c0876
    PUSH EAX                            ; 005c087c
    LEA ESI,[EBP + 0xfffffa1a]          ; 005c087d
    PUSH 0x3fc90fdb                     ; 005c0883
    LEA EDI,[EBP + 0xfffff41a]          ; 005c0888
    CALL core_xform.cpp_buildRotationX_FUN_005f6c40 ; 005c088e
        ;   XREF to: 005f6c40 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationX_FUN_005f6c40(float angle_radians, CMatrix3x4f * matrix_out)
    JMP 0x03fc0000                      ; 005c0893
        ;   XREF to: 03fc0000 (UNCONDITIONAL_JUMP)  ; LAB_03fc0000
    PUSH 0xbfc90fdb                     ; 005c08aa
        ;   Label: LAB_005c08aa
    LEA ESI,[EBP + 0xfffff4da]          ; 005c08af
    LEA EDI,[EBP + 0xfffff3ea]          ; 005c08b5
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 005c08bb
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    JMP 0x03fc0068                      ; 005c08c0
        ;   XREF to: 03fc0068 (UNCONDITIONAL_JUMP)  ; LAB_03fc0068
    PUSH EAX                            ; 005c08d6
        ;   Label: LAB_005c08d6
    LEA ESI,[EBP + 0xfffff50a]          ; 005c08d7
    LEA EDI,[EBP + 0xfffff98a]          ; 005c08dd
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c08e3
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc00cf                      ; 005c08e8
        ;   XREF to: 03fc00cf (UNCONDITIONAL_JUMP)  ; LAB_03fc00cf
    PUSH EAX                            ; 005c08fe
        ;   Label: LAB_005c08fe
    LEA ESI,[EBP + 0xfffff53a]          ; 005c08ff
    LEA EDI,[EBP + 0xfffff9ea]          ; 005c0905
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c090b
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc0136                      ; 005c0910
        ;   XREF to: 03fc0136 (UNCONDITIONAL_JUMP)  ; LAB_03fc0136
    PUSH EAX                            ; 005c0926
        ;   Label: LAB_005c0926
    LEA ESI,[EBP + 0xfffffada]          ; 005c0927
    LEA EDI,[EBP + 0xfffff65a]          ; 005c092d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0933
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0938
    LEA ESI,[EBP + 0xfffffada]          ; 005c093d
    ADD ESP,0x8                         ; 005c0943
        ;   Label: LAB_005c0943
    JMP 0x03fc5a97                      ; 005c0946
        ;   XREF to: 03fc5a97 (UNCONDITIONAL_JUMP)  ; LAB_03fc5a97
        ;   Label: LAB_005c0946
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c0958
        ;   Label: LAB_005c0958
    LEA ESP,[EBP + 0x7a]                ; 005c095b
    POP EBP                             ; 005c095e
    POP EDI                             ; 005c095f
    POP EBX                             ; 005c0960
    RET                                 ; 005c0961
    MOV EDI,0x3e44330d                  ; 005c0962
        ;   Label: LAB_005c0962
    MOV EAX,0x3f7838d2                  ; 005c0967
    MOV EDX,0x40131412                  ; 005c096c
    MOV ECX,0x3f0a1c04                  ; 005c0971
    MOV dword ptr [EBP + -0x1a],EAX     ; 005c0976
    LEA EAX,[EBP + -0x22]               ; 005c0979
    MOV dword ptr [EBP + -0x22],EDI     ; 005c097c
    PUSH EAX                            ; 005c097f
    MOV EAX,0xbed321a3                  ; 005c0980
    MOV dword ptr [EBP + -0x1e],EDX     ; 005c0985
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 005c0988
    LEA EAX,[EBP + 0xfffffe9a]          ; 005c098e
    MOV dword ptr [EBP + 0xfffffe9a],ECX ; 005c0994
    PUSH EAX                            ; 005c099a
    LEA EAX,[EBP + 0xfffff80a]          ; 005c099b
    MOV EDI,0xbe7183f9                  ; 005c09a1
    PUSH EAX                            ; 005c09a6
    MOV dword ptr [EBP + 0xfffffe9e],EDI ; 005c09a7
    MOV EDI,0x3f6f2b67                  ; 005c09ad
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c09b2
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,0xbed430d3                  ; 005c09b7
    MOV ECX,0x3feb40a3                  ; 005c09bc
    LEA EAX,[EBP + 0x56]                ; 005c09c1
    ADD ESP,0xc                         ; 005c09c4
    MOV dword ptr [EBP + 0x5a],EDI      ; 005c09c7
    MOV dword ptr [EBP + 0x56],EDX      ; 005c09ca
    PUSH EAX                            ; 005c09cd
    MOV EAX,0x3ece4b88                  ; 005c09ce
    MOV dword ptr [EBP + 0x5e],ECX      ; 005c09d3
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 005c09d6
    LEA EAX,[EBP + 0xfffffed6]          ; 005c09dc
    MOV EDX,0x3dc29521                  ; 005c09e2
    PUSH EAX                            ; 005c09e7
    LEA EAX,[EBP + 0xfffff9ba]          ; 005c09e8
    MOV ECX,0x3e85d4e9                  ; 005c09ee
    PUSH EAX                            ; 005c09f3
    MOV dword ptr [EBP + 0xfffffeda],EDX ; 005c09f4
    MOV dword ptr [EBP + 0xfffffede],ECX ; 005c09fa
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0a00
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0a05
    PUSH ESI                            ; 005c0a08
    PUSH 0x3                            ; 005c0a09
    PUSH EBX                            ; 005c0a0b
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c0a0c
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 005c0a11
    ADD ESP,0x8                         ; 005c0a14
    FLD float ptr [EBP + 0x76]          ; 005c0a17
    SUB ESP,0x4                         ; 005c0a1a
    FLD1                                ; 005c0a1d
    FSUBRP                              ; 005c0a1f
    LEA EAX,[EBP + 0xfffff9ba]          ; 005c0a21
    FSTP float ptr [ESP]                ; 005c0a27
    PUSH EAX                            ; 005c0a2a
    LEA EAX,[EBP + 0xfffff80a]          ; 005c0a2b
    PUSH EAX                            ; 005c0a31
    LEA ESI,[EBP + 0xfffffb6a]          ; 005c0a32
    LEA EDI,[EBP + 0xfffff5fa]          ; 005c0a38
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005c0a3e
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc01fe                      ; 005c0a43
        ;   XREF to: 03fc01fe (UNCONDITIONAL_JUMP)  ; LAB_03fc01fe
    PUSH EAX                            ; 005c0a59
        ;   Label: LAB_005c0a59
    LEA ESI,[EBP + 0xfffffc8a]          ; 005c0a5a
    LEA EDI,[EBP + 0xfffff65a]          ; 005c0a60
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0a66
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0a6b
    LEA ESI,[EBP + 0xfffffc8a]          ; 005c0a70
    JMP 0x005c0943                      ; 005c0a76
        ;   XREF to: 005c0943 (UNCONDITIONAL_JUMP)  ; LAB_005c0943
    MOV EDI,0x3e3b65aa                  ; 005c0a7b
        ;   Label: LAB_005c0a7b
    MOV EAX,0x3fd4f5c3                  ; 005c0a80
    MOV EDX,0x400ffdb5                  ; 005c0a85
    MOV ECX,0x3ed3380d                  ; 005c0a8a
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 005c0a8f
    LEA EAX,[EBP + 0xfffffeca]          ; 005c0a95
    MOV dword ptr [EBP + 0xfffffeca],EDI ; 005c0a9b
    PUSH EAX                            ; 005c0aa1
    MOV EAX,0xbe6ec850                  ; 005c0aa2
    MOV dword ptr [EBP + 0xfffffece],EDX ; 005c0aa7
    MOV dword ptr [EBP + 0xffffff02],EAX ; 005c0aad
    LEA EAX,[EBP + 0xfffffefa]          ; 005c0ab3
    MOV dword ptr [EBP + 0xfffffefa],ECX ; 005c0ab9
    PUSH EAX                            ; 005c0abf
    LEA EAX,[EBP + 0xfffffcba]          ; 005c0ac0
    MOV EDI,0xbdc42bdf                  ; 005c0ac6
    PUSH EAX                            ; 005c0acb
    MOV dword ptr [EBP + 0xfffffefe],EDI ; 005c0acc
    MOV EDI,0x3fac74a7                  ; 005c0ad2
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0ad7
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,0xbe93c947                  ; 005c0adc
    MOV ECX,0x3fdd1cc1                  ; 005c0ae1
    LEA EAX,[EBP + 0xfffffea6]          ; 005c0ae6
    ADD ESP,0xc                         ; 005c0aec
    MOV dword ptr [EBP + 0xfffffeaa],EDI ; 005c0aef
    MOV dword ptr [EBP + 0xfffffea6],EDX ; 005c0af5
    PUSH EAX                            ; 005c0afb
    MOV EAX,0x3ef7baed                  ; 005c0afc
    MOV dword ptr [EBP + 0xfffffeae],ECX ; 005c0b01
    MOV dword ptr [EBP + 0x3e],EAX      ; 005c0b07
    LEA EAX,[EBP + 0x3e]                ; 005c0b0a
    MOV EDX,0x3d957802                  ; 005c0b0d
    PUSH EAX                            ; 005c0b12
    LEA EAX,[EBP + 0xfffff3ba]          ; 005c0b13
    MOV ECX,0x3d95d158                  ; 005c0b19
    PUSH EAX                            ; 005c0b1e
    MOV dword ptr [EBP + 0x42],EDX      ; 005c0b1f
    MOV dword ptr [EBP + 0x46],ECX      ; 005c0b22
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0b25
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0b2a
    PUSH ESI                            ; 005c0b2d
    PUSH 0x3                            ; 005c0b2e
    PUSH EBX                            ; 005c0b30
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c0b31
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 005c0b36
    ADD ESP,0x8                         ; 005c0b39
    FLD float ptr [EBP + 0x76]          ; 005c0b3c
    SUB ESP,0x4                         ; 005c0b3f
    FLD1                                ; 005c0b42
    FSUBRP                              ; 005c0b44
    LEA EAX,[EBP + 0xfffff3ba]          ; 005c0b46
    FSTP float ptr [ESP]                ; 005c0b4c
    PUSH EAX                            ; 005c0b4f
    LEA EAX,[EBP + 0xfffffcba]          ; 005c0b50
    PUSH EAX                            ; 005c0b56
    LEA ESI,[EBP + 0xfffff8ca]          ; 005c0b57
    LEA EDI,[EBP + 0xfffff56a]          ; 005c0b5d
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005c0b63
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc0265                      ; 005c0b68
        ;   XREF to: 03fc0265 (UNCONDITIONAL_JUMP)  ; LAB_03fc0265
    PUSH EAX                            ; 005c0b7e
        ;   Label: LAB_005c0b7e
    LEA ESI,[EBP + 0xfffff68a]          ; 005c0b7f
    LEA EDI,[EBP + 0xfffff65a]          ; 005c0b85
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0b8b
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0b90
    LEA ESI,[EBP + 0xfffff68a]          ; 005c0b95
    JMP 0x005c0943                      ; 005c0b9b
        ;   XREF to: 005c0943 (UNCONDITIONAL_JUMP)  ; LAB_005c0943
    MOV EDI,0x3e44c7f3                  ; 005c0ba0
        ;   Label: LAB_005c0ba0
    MOV EAX,0x3fd16bba                  ; 005c0ba5
    MOV EDX,0x4013aee6                  ; 005c0baa
    MOV ECX,0x3eab23dd                  ; 005c0baf
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 005c0bb4
    LEA EAX,[EBP + 0xfffffebe]          ; 005c0bba
    MOV dword ptr [EBP + 0xfffffebe],EDI ; 005c0bc0
    PUSH EAX                            ; 005c0bc6
    MOV EAX,0xbed19f3c                  ; 005c0bc7
    MOV dword ptr [EBP + 0xfffffec2],EDX ; 005c0bcc
    MOV dword ptr [EBP + -0xe],EAX      ; 005c0bd2
    LEA EAX,[EBP + -0x16]               ; 005c0bd5
    MOV dword ptr [EBP + -0x16],ECX     ; 005c0bd8
    PUSH EAX                            ; 005c0bdb
    LEA EAX,[EBP + 0xfffffe0a]          ; 005c0bdc
    MOV EDI,0xbe3daa50                  ; 005c0be2
    PUSH EAX                            ; 005c0be7
    MOV dword ptr [EBP + -0x12],EDI     ; 005c0be8
    MOV EDI,0x3f93df3b                  ; 005c0beb
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0bf0
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,0xbeedcbbc                  ; 005c0bf5
    MOV ECX,0x3fe3381d                  ; 005c0bfa
    LEA EAX,[EBP + 0x32]                ; 005c0bff
    ADD ESP,0xc                         ; 005c0c02
    MOV dword ptr [EBP + 0x36],EDI      ; 005c0c05
    MOV dword ptr [EBP + 0x32],EDX      ; 005c0c08
    PUSH EAX                            ; 005c0c0b
    MOV EAX,0x3ec327aa                  ; 005c0c0c
    MOV dword ptr [EBP + 0x3a],ECX      ; 005c0c11
    MOV dword ptr [EBP + -0x46],EAX     ; 005c0c14
    LEA EAX,[EBP + -0x46]               ; 005c0c17
    MOV EDX,0x3d8dbbaa                  ; 005c0c1a
    PUSH EAX                            ; 005c0c1f
    LEA EAX,[EBP + 0xfffff86a]          ; 005c0c20
    MOV ECX,0xbe66cd6c                  ; 005c0c26
    PUSH EAX                            ; 005c0c2b
    MOV dword ptr [EBP + -0x42],EDX     ; 005c0c2c
    MOV dword ptr [EBP + -0x3e],ECX     ; 005c0c2f
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0c32
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0c37
    PUSH ESI                            ; 005c0c3a
    PUSH 0x3                            ; 005c0c3b
    PUSH EBX                            ; 005c0c3d
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c0c3e
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 005c0c43
    ADD ESP,0x8                         ; 005c0c46
    FLD float ptr [EBP + 0x76]          ; 005c0c49
    SUB ESP,0x4                         ; 005c0c4c
    FLD1                                ; 005c0c4f
    FSUBRP                              ; 005c0c51
    LEA EAX,[EBP + 0xfffff86a]          ; 005c0c53
    FSTP float ptr [ESP]                ; 005c0c59
    PUSH EAX                            ; 005c0c5c
    LEA EAX,[EBP + 0xfffffe0a]          ; 005c0c5d
    PUSH EAX                            ; 005c0c63
    LEA ESI,[EBP + 0xfffffaaa]          ; 005c0c64
    LEA EDI,[EBP + 0xfffffa4a]          ; 005c0c6a
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005c0c70
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc02cc                      ; 005c0c75
        ;   XREF to: 03fc02cc (UNCONDITIONAL_JUMP)  ; LAB_03fc02cc
    PUSH EAX                            ; 005c0c8b
        ;   Label: LAB_005c0c8b
    LEA ESI,[EBP + 0xfffffb0a]          ; 005c0c8c
    LEA EDI,[EBP + 0xfffff65a]          ; 005c0c92
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0c98
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0c9d
    LEA ESI,[EBP + 0xfffffb0a]          ; 005c0ca2
    JMP 0x005c0943                      ; 005c0ca8
        ;   XREF to: 005c0943 (UNCONDITIONAL_JUMP)  ; LAB_005c0943
    MOV ECX,0x3e740e9d                  ; 005c0cad
        ;   Label: LAB_005c0cad
    MOV EBX,0xbd868280                  ; 005c0cb2
    MOV EDI,0x3d093cf5                  ; 005c0cb7
    MOV EAX,0xbf3e6506                  ; 005c0cbc
    MOV EDX,0xbf4eefe5                  ; 005c0cc1
    MOV dword ptr [EBP + -0x3a],ECX     ; 005c0cc6
    MOV dword ptr [EBP + 0x62],EAX      ; 005c0cc9
    LEA EAX,[EBP + 0x62]                ; 005c0ccc
    MOV dword ptr [EBP + -0x36],EBX     ; 005c0ccf
    PUSH EAX                            ; 005c0cd2
    LEA EAX,[EBP + -0x3a]               ; 005c0cd3
    MOV dword ptr [EBP + -0x32],EDI     ; 005c0cd6
    PUSH EAX                            ; 005c0cd9
    LEA EAX,[EBP + 0xfffff89a]          ; 005c0cda
    MOV ECX,0x3f31884c                  ; 005c0ce0
    PUSH EAX                            ; 005c0ce5
    MOV dword ptr [EBP + 0x6a],EDX      ; 005c0ce6
    MOV dword ptr [EBP + 0x66],ECX      ; 005c0ce9
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0cec
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0cf1
    PUSH ESI                            ; 005c0cf4
    LEA EAX,[EBP + 0xfffff89a]          ; 005c0cf5
    PUSH EAX                            ; 005c0cfb
    LEA ESI,[EBP + 0xfffff7aa]          ; 005c0cfc
    LEA EDI,[EBP + 0xfffff65a]          ; 005c0d02
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0d08
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0d0d
    LEA ESI,[EBP + 0xfffff7aa]          ; 005c0d12
    JMP 0x005c0943                      ; 005c0d18
        ;   XREF to: 005c0943 (UNCONDITIONAL_JUMP)  ; LAB_005c0943
    MOV EDX,0x3f1eb852                  ; 005c0d1d
        ;   Label: LAB_005c0d1d
    MOV EBX,0x3e5e353f                  ; 005c0d22
    MOV EAX,0xbfc8f5c3                  ; 005c0d27
    XOR ECX,ECX                         ; 005c0d2c
    MOV dword ptr [EBP + 0xffffff12],EDX ; 005c0d2e
    MOV dword ptr [EBP + 0xffffff26],EAX ; 005c0d34
    LEA EAX,[EBP + 0xffffff1e]          ; 005c0d3a
    MOV dword ptr [EBP + 0xffffff16],ECX ; 005c0d40
    PUSH EAX                            ; 005c0d46
    LEA EAX,[EBP + 0xffffff12]          ; 005c0d47
    MOV dword ptr [EBP + 0xffffff1a],EBX ; 005c0d4d
    PUSH EAX                            ; 005c0d53
    LEA EAX,[EBP + 0xfffffd4a]          ; 005c0d54
    MOV EDX,0x3fc8f5c3                  ; 005c0d5a
    PUSH EAX                            ; 005c0d5f
    MOV dword ptr [EBP + 0xffffff1e],ECX ; 005c0d60
    MOV dword ptr [EBP + 0xffffff22],EDX ; 005c0d66
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0d6c
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0d71
    PUSH ESI                            ; 005c0d74
    LEA EAX,[EBP + 0xfffffd4a]          ; 005c0d75
    PUSH EAX                            ; 005c0d7b
    LEA ESI,[EBP + 0xfffff44a]          ; 005c0d7c
    LEA EDI,[EBP + 0xfffff65a]          ; 005c0d82
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0d88
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0d8d
    LEA ESI,[EBP + 0xfffff44a]          ; 005c0d92
    JMP 0x005c0943                      ; 005c0d98
        ;   XREF to: 005c0943 (UNCONDITIONAL_JUMP)  ; LAB_005c0943
    MOV EDX,0xbdb87c8b                  ; 005c0d9d
        ;   Label: LAB_005c0d9d
    MOV ECX,0x3f262846                  ; 005c0da2
    MOV EDI,0xbe78bef9                  ; 005c0da7
    LEA EAX,[EBP + 0x26]                ; 005c0dac
    MOV dword ptr [EBP + 0x26],EDX      ; 005c0daf
    MOV dword ptr [EBP + 0x2e],ECX      ; 005c0db2
    MOV dword ptr [EBP + 0x2a],EDI      ; 005c0db5
    PUSH EAX                            ; 005c0db8
    MOV EAX,0x3ed45e4e                  ; 005c0db9
    MOV EDX,0xbe258d9b                  ; 005c0dbe
    MOV dword ptr [EBP + 0xfffffee2],EAX ; 005c0dc3
    LEA EAX,[EBP + 0xfffffee2]          ; 005c0dc9
    MOV ECX,0xbefad3c8                  ; 005c0dcf
    PUSH EAX                            ; 005c0dd4
    LEA EAX,[EBP + 0xfffff47a]          ; 005c0dd5
    MOV EDI,0x3e99e450                  ; 005c0ddb
    PUSH EAX                            ; 005c0de0
    MOV dword ptr [EBP + 0xfffffee6],EDX ; 005c0de1
    MOV dword ptr [EBP + 0xfffffeea],ECX ; 005c0de7
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0ded
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,0x3f252f1b                  ; 005c0df2
    MOV EDX,0xbe083dff                  ; 005c0df7
    ADD ESP,0xc                         ; 005c0dfc
    MOV dword ptr [EBP + 0x22],EAX      ; 005c0dff
    LEA EAX,[EBP + 0x1a]                ; 005c0e02
    MOV ECX,0x3e9b7f17                  ; 005c0e05
    PUSH EAX                            ; 005c0e0a
    MOV EAX,0xbe8c011d                  ; 005c0e0b
    MOV dword ptr [EBP + 0x1a],EDI      ; 005c0e10
    MOV dword ptr [EBP + -0x62],EAX     ; 005c0e13
    LEA EAX,[EBP + -0x6a]               ; 005c0e16
    MOV EDI,0x3d8513c3                  ; 005c0e19
    PUSH EAX                            ; 005c0e1e
    LEA EAX,[EBP + 0xfffff4aa]          ; 005c0e1f
    MOV dword ptr [EBP + 0x1e],EDX      ; 005c0e25
    PUSH EAX                            ; 005c0e28
    MOV dword ptr [EBP + -0x6a],ECX     ; 005c0e29
    MOV dword ptr [EBP + -0x66],EDI     ; 005c0e2c
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0e2f
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0e34
    PUSH ESI                            ; 005c0e37
    PUSH 0x0                            ; 005c0e38
    PUSH EBX                            ; 005c0e3a
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c0e3b
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 005c0e40
    ADD ESP,0x8                         ; 005c0e43
    FLD float ptr [EBP + 0x76]          ; 005c0e46
    SUB ESP,0x4                         ; 005c0e49
    FLD1                                ; 005c0e4c
    FSUBRP                              ; 005c0e4e
    LEA EAX,[EBP + 0xfffff4aa]          ; 005c0e50
    FSTP float ptr [ESP]                ; 005c0e56
    PUSH EAX                            ; 005c0e59
    LEA EAX,[EBP + 0xfffff47a]          ; 005c0e5a
    PUSH EAX                            ; 005c0e60
    LEA ESI,[EBP + 0xfffffb3a]          ; 005c0e61
    LEA EDI,[EBP + 0xfffff7da]          ; 005c0e67
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005c0e6d
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc0333                      ; 005c0e72
        ;   XREF to: 03fc0333 (UNCONDITIONAL_JUMP)  ; LAB_03fc0333
    PUSH EAX                            ; 005c0e88
        ;   Label: LAB_005c0e88
    LEA ESI,[EBP + 0xfffff8fa]          ; 005c0e89
    LEA EDI,[EBP + 0xfffff65a]          ; 005c0e8f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0e95
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0e9a
    LEA ESI,[EBP + 0xfffff8fa]          ; 005c0e9f
    JMP 0x005c0943                      ; 005c0ea5
        ;   XREF to: 005c0943 (UNCONDITIONAL_JUMP)  ; LAB_005c0943
    PUSH 0x3f87558                      ; 005c0eaa | g_ZeroVector
        ;   Label: LAB_005c0eaa
    PUSH 0x3f6bab0                      ; 005c0eaf | CVector3f_03f6bab0
    LEA EAX,[EBP + 0xfffff59a]          ; 005c0eb4
    PUSH EAX                            ; 005c0eba
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c0ebb
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0ec0
    PUSH ESI                            ; 005c0ec3
    LEA EAX,[EBP + 0xfffff59a]          ; 005c0ec4
    PUSH EAX                            ; 005c0eca
    LEA ESI,[EBP + 0xfffff95a]          ; 005c0ecb
    PUSH 0x3fc90fdb                     ; 005c0ed1
    LEA EDI,[EBP + 0xfffffd1a]          ; 005c0ed6
    CALL core_xform.cpp_buildRotationX_FUN_005f6c40 ; 005c0edc
        ;   XREF to: 005f6c40 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationX_FUN_005f6c40(float angle_radians, CMatrix3x4f * matrix_out)
    JMP 0x03fc039a                      ; 005c0ee1
        ;   XREF to: 03fc039a (UNCONDITIONAL_JUMP)  ; LAB_03fc039a
    PUSH 0x3fc90fdb                     ; 005c0ef8
        ;   Label: LAB_005c0ef8
    LEA ESI,[EBP + 0xfffffa7a]          ; 005c0efd
    LEA EDI,[EBP + 0xfffff5ca]          ; 005c0f03
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 005c0f09
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    JMP 0x03fc0402                      ; 005c0f0e
        ;   XREF to: 03fc0402 (UNCONDITIONAL_JUMP)  ; LAB_03fc0402
    PUSH EAX                            ; 005c0f24
        ;   Label: LAB_005c0f24
    LEA ESI,[EBP + 0xfffffc5a]          ; 005c0f25
    LEA EDI,[EBP + 0xfffffb9a]          ; 005c0f2b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0f31
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc0469                      ; 005c0f36
        ;   XREF to: 03fc0469 (UNCONDITIONAL_JUMP)  ; LAB_03fc0469
    PUSH EAX                            ; 005c0f4c
        ;   Label: LAB_005c0f4c
    LEA ESI,[EBP + 0xfffffcea]          ; 005c0f4d
    LEA EDI,[EBP + 0xfffffbca]          ; 005c0f53
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0f59
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc04d0                      ; 005c0f5e
        ;   XREF to: 03fc04d0 (UNCONDITIONAL_JUMP)  ; LAB_03fc04d0
    PUSH EAX                            ; 005c0f74
        ;   Label: LAB_005c0f74
    LEA ESI,[EBP + 0xfffffe3a]          ; 005c0f75
    LEA EDI,[EBP + 0xfffff65a]          ; 005c0f7b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c0f81
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0f86
    LEA ESI,[EBP + 0xfffffe3a]          ; 005c0f8b
    JMP 0x005c0943                      ; 005c0f91
        ;   XREF to: 005c0943 (UNCONDITIONAL_JUMP)  ; LAB_005c0943
    MOV dword ptr [EBP + 0x6],EAX       ; 005c0f96
        ;   Label: LAB_005c0f96
    MOV dword ptr [EBP + 0x2],EAX       ; 005c0f99
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 005c0f9c
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 005c0fa2
    MOV dword ptr [EBP + 0xffffff06],EAX ; 005c0fa8
    MOV dword ptr [EBP + 0xa],EAX       ; 005c0fae
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005c0fb1
    JZ 0x005c1339                       ; 005c0fb8
        ;   XREF to: 005c1339 (CONDITIONAL_JUMP)  ; LAB_005c1339
    MOV ECX,dword ptr [0x00822c84]      ; 005c0fbe | g_CLightActorClassInfo.name_hash
    PUSH ECX                            ; 005c0fc4
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005c0fc5
    PUSH ESI                            ; 005c0fcb
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c0fcc
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005c0fd1
    MOV ESI,EAX                         ; 005c0fd4
    TEST EAX,EAX                        ; 005c0fd6
    JZ 0x005c10ab                       ; 005c0fd8
        ;   XREF to: 005c10ab (CONDITIONAL_JUMP)  ; LAB_005c10ab
    LEA EAX,[EBP + 0xfffffe6a]          ; 005c0fde
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005c0fe4
    PUSH EAX                            ; 005c0fea
    MOV EDI,dword ptr [EBP + 0x8e]      ; 005c0feb
    MOV EDX,dword ptr [EDX + 0x154]     ; 005c0ff1
    PUSH EDI                            ; 005c0ff7
    CALL dword ptr [EDX + 0x14]         ; 005c0ff8
    FLD float ptr [EBP + 0xfffffe6a]    ; 005c0ffb
    FADD float ptr [EBP + 0xfffffe76]   ; 005c1001
    FST float ptr [EBP + 0xffffff4e]    ; 005c1007
    FLD float ptr [0x00653984]          ; 005c100d | FLOAT_00653984
    FXCH                                ; 005c1013
    FMUL ST1                            ; 005c1015
    FLD float ptr [EBP + 0xfffffe72]    ; 005c1017
    FLD float ptr [EBP + 0xfffffe6e]    ; 005c101d
    FADD float ptr [EBP + 0xfffffe7a]   ; 005c1023
    FXCH                                ; 005c1029
    FADD float ptr [EBP + 0xfffffe7e]   ; 005c102b
    FXCH                                ; 005c1031
    FST float ptr [EBP + 0xffffff52]    ; 005c1033
    FMUL ST3                            ; 005c1039
    FXCH                                ; 005c103b
    FST float ptr [EBP + 0xffffff56]    ; 005c103d
    FMULP ST3                           ; 005c1043
    LEA EAX,[EBP + 0xffffff36]          ; 005c1045
    LEA EDX,[EBP + 0xffffff06]          ; 005c104b
    ADD ESP,0x8                         ; 005c1051
    FXCH                                ; 005c1054
    FSTP float ptr [EBP + 0xffffff36]   ; 005c1056
    FSTP float ptr [EBP + 0xffffff3a]   ; 005c105c
    FSTP float ptr [EBP + 0xffffff3e]   ; 005c1062
    CMP EDX,EAX                         ; 005c1068
    JZ 0x005c1090                       ; 005c106a
        ;   XREF to: 005c1090 (CONDITIONAL_JUMP)  ; LAB_005c1090
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 005c106c
    MOV dword ptr [EBP + 0xffffff06],EAX ; 005c1072
    MOV EAX,dword ptr [EBP + 0xffffff3a] ; 005c1078
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 005c107e
    MOV EAX,dword ptr [EBP + 0xffffff3e] ; 005c1084
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 005c108a
    MOV EAX,dword ptr [ESI + 0x66c]     ; 005c1090
        ;   Label: LAB_005c1090
    CMP EAX,0x2                         ; 005c1096
    JNZ 0x005c14cc                      ; 005c1099
        ;   XREF to: 005c14cc (CONDITIONAL_JUMP)  ; LAB_005c14cc
    MOV EAX,dword ptr [EBP + 0xfffffe7a] ; 005c109f
        ;   Label: LAB_005c109f
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 005c10a5
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005c10ab
        ;   Label: LAB_005c10ab
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005c10b1
    PUSH ESI                            ; 005c10b7
    MOV EAX,dword ptr [EAX + 0x154]     ; 005c10b8
    CALL dword ptr [EAX + 0x6c]         ; 005c10be
    ADD ESP,0x4                         ; 005c10c1
    TEST EAX,EAX                        ; 005c10c4
    JZ 0x005c1241                       ; 005c10c6
        ;   XREF to: 005c1241 (CONDITIONAL_JUMP)  ; LAB_005c1241
    MOV EDI,0xbdb87c8b                  ; 005c10cc
    MOV EAX,0x3f262846                  ; 005c10d1
    MOV EDX,0xbe78bef9                  ; 005c10d6
    MOV ECX,0x3ed45e4e                  ; 005c10db
    MOV ESI,0xbe258d9b                  ; 005c10e0
    MOV dword ptr [EBP + 0xffffff5a],EDI ; 005c10e5
    MOV dword ptr [EBP + 0xffffff62],EAX ; 005c10eb
    MOV dword ptr [EBP + 0xffffff5e],EDX ; 005c10f1
    MOV dword ptr [EBP + 0xfffffeb2],ECX ; 005c10f7
    LEA EAX,[EBP + 0xffffff5a]          ; 005c10fd
    MOV dword ptr [EBP + 0xfffffeb6],ESI ; 005c1103
    PUSH EAX                            ; 005c1109
    LEA EAX,[EBP + 0xfffffeb2]          ; 005c110a
    MOV EDI,0xbefad3c8                  ; 005c1110
    PUSH EAX                            ; 005c1115
    LEA EAX,[EBP + 0xfffff35a]          ; 005c1116
    MOV ESI,0x3ec5521a                  ; 005c111c
    PUSH EAX                            ; 005c1121
    MOV dword ptr [EBP + 0xfffffeba],EDI ; 005c1122
    MOV EDI,0xbc47e649                  ; 005c1128
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c112d
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,0x3e99e450                  ; 005c1132
    ADD ESP,0xc                         ; 005c1137
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 005c113a
    LEA EAX,[EBP + 0xffffff2a]          ; 005c1140
    MOV EDX,0x3f252f1b                  ; 005c1146
    PUSH EAX                            ; 005c114b
    MOV EAX,0xbefd0529                  ; 005c114c
    MOV ECX,0xbe083dff                  ; 005c1151
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 005c1156
    LEA EAX,[EBP + 0xffffff66]          ; 005c115c
    MOV dword ptr [EBP + 0xffffff66],ESI ; 005c1162
    PUSH EAX                            ; 005c1168
    LEA EAX,[EBP + 0xfffff38a]          ; 005c1169
    MOV dword ptr [EBP + 0xffffff6a],EDI ; 005c116f
    PUSH EAX                            ; 005c1175
    MOV dword ptr [EBP + 0xffffff32],EDX ; 005c1176
    MOV dword ptr [EBP + 0xffffff2e],ECX ; 005c117c
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c1182
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,dword ptr [EBP + 0x72]      ; 005c1187
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c118a
    SUB EAX,EDX                         ; 005c1191
    SHL EAX,0x4                         ; 005c1193
    LEA EDX,[EBX + 0xfd8]               ; 005c1196
    ADD ESP,0xc                         ; 005c119c
    ADD EAX,EDX                         ; 005c119f
    PUSH EAX                            ; 005c11a1
    PUSH 0x0                            ; 005c11a2
    PUSH EBX                            ; 005c11a4
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c11a5
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 005c11aa
    ADD ESP,0x8                         ; 005c11ad
    FLD float ptr [EBP + 0x76]          ; 005c11b0
    SUB ESP,0x4                         ; 005c11b3
    FLD1                                ; 005c11b6
    FSUBRP                              ; 005c11b8
    LEA EAX,[EBP + 0xfffff38a]          ; 005c11ba
    FSTP float ptr [ESP]                ; 005c11c0
    PUSH EAX                            ; 005c11c3
    LEA EAX,[EBP + 0xfffff35a]          ; 005c11c4
    PUSH EAX                            ; 005c11ca
    LEA ESI,[EBP + 0xfffff83a]          ; 005c11cb
    LEA EDI,[EBP + 0xfffff6ea]          ; 005c11d1
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005c11d7
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    JMP 0x03fc0537                      ; 005c11dc
        ;   XREF to: 03fc0537 (UNCONDITIONAL_JUMP)  ; LAB_03fc0537
    PUSH EAX                            ; 005c11f2
        ;   Label: LAB_005c11f2
    LEA ESI,[EBP + 0xfffff32a]          ; 005c11f3
    LEA EDI,[EBP + 0xfffff6ba]          ; 005c11f9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c11ff
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005c1204
    LEA EAX,[EBP + 0xe]                 ; 005c1207
    JMP 0x03fc059e                      ; 005c120a
        ;   XREF to: 03fc059e (UNCONDITIONAL_JUMP)  ; LAB_03fc059e
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005c121f
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
        ;   Label: LAB_005c121f
    MOV ESI,EAX                         ; 005c1224
    LEA EAX,[EBP + 0x2]                 ; 005c1226
    ADD ESP,0x8                         ; 005c1229
    CMP EAX,ESI                         ; 005c122c
    JZ 0x005c1241                       ; 005c122e
        ;   XREF to: 005c1241 (CONDITIONAL_JUMP)  ; LAB_005c1241
    MOV EAX,dword ptr [ESI]             ; 005c1230
    MOV dword ptr [EBP + 0x2],EAX       ; 005c1232
    MOV EAX,dword ptr [ESI + 0x4]       ; 005c1235
    MOV dword ptr [EBP + 0x6],EAX       ; 005c1238
    MOV EAX,dword ptr [ESI + 0x8]       ; 005c123b
    MOV dword ptr [EBP + 0xa],EAX       ; 005c123e
    MOV EDX,dword ptr [EBP + 0x92]      ; 005c1241
        ;   Label: LAB_005c1241
    TEST EDX,EDX                        ; 005c1247
    JNZ 0x005c160a                      ; 005c1249
        ;   XREF to: 005c160a (CONDITIONAL_JUMP)  ; LAB_005c160a
    MOV ECX,0xbecccccd                  ; 005c124f
    LEA EAX,[EBP + -0x2e]               ; 005c1254
    MOV dword ptr [EBP + -0x2a],EDX     ; 005c1257
    MOV dword ptr [EBP + -0x26],EDX     ; 005c125a
    LEA EDX,[EBP + -0x5e]               ; 005c125d
    MOV dword ptr [EBP + -0x2e],ECX     ; 005c1260
    CMP EDX,EAX                         ; 005c1263
    JZ 0x005c1272                       ; 005c1265
        ;   XREF to: 005c1272 (CONDITIONAL_JUMP)  ; LAB_005c1272
    XOR EDX,EDX                         ; 005c1267
    MOV dword ptr [EBP + -0x5e],ECX     ; 005c1269
    MOV dword ptr [EBP + -0x5a],EDX     ; 005c126c
    MOV dword ptr [EBP + -0x56],EDX     ; 005c126f
    MOV ESI,dword ptr [EBP + 0x72]      ; 005c1272
        ;   Label: LAB_005c1272
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c1275
    SUB EAX,ESI                         ; 005c127c
    ADD EBX,0xfd8                       ; 005c127e
    SHL EAX,0x4                         ; 005c1284
    ADD EAX,EBX                         ; 005c1287
    PUSH EAX                            ; 005c1289
    LEA EAX,[EBP + -0x5e]               ; 005c128a
    PUSH EAX                            ; 005c128d
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20 ; 005c128e
        ;   XREF to: 005f4e20 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f * input_output_vector, CMatrix3x4f * matrix)
    ADD ESP,0x8                         ; 005c1293
    LEA EAX,[EBP + 0x2]                 ; 005c1296
    PUSH EAX                            ; 005c1299
    LEA EAX,[EBP + -0x5e]               ; 005c129a
    PUSH EAX                            ; 005c129d
    LEA EAX,[EBP + 0xfffff62a]          ; 005c129e
    PUSH EAX                            ; 005c12a4
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c12a5
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c12aa
    LEA EAX,[EBP + 0xfffff62a]          ; 005c12ad
    PUSH EAX                            ; 005c12b3
    LEA EAX,[EBP + 0xffffff06]          ; 005c12b4
    PUSH EAX                            ; 005c12ba
    LEA EAX,[EBP + 0xffffff72]          ; 005c12bb
    PUSH EAX                            ; 005c12c1
    LEA EDI,[EBP + 0xfffff65a]          ; 005c12c2
    LEA ESI,[EBP + 0xfffff62a]          ; 005c12c8
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005c12ce
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EBP + -0x5e]         ; 005c12d3
    FLD float ptr [EBP + -0x5a]         ; 005c12d6
    FLD float ptr [EBP + -0x56]         ; 005c12d9
    FLD float ptr [EBP + 0xfffff636]    ; 005c12dc
    FLD float ptr [EBP + 0xfffff646]    ; 005c12e2
    FLD float ptr [EBP + 0xfffff656]    ; 005c12e8
    MOV ECX,0xc                         ; 005c12ee
    FXCH ST5                            ; 005c12f3
    FSUB float ptr [EAX]                ; 005c12f5
    ADD ESP,0xc                         ; 005c12f7
    FSTP float ptr [EBP + -0x76]        ; 005c12fa
    FXCH ST3                            ; 005c12fd
    FSUB float ptr [EAX + 0x4]          ; 005c12ff
    FXCH                                ; 005c1302
    FADD float ptr [EBP + -0x76]        ; 005c1304
    FXCH                                ; 005c1307
    FSTP float ptr [EBP + -0x72]        ; 005c1309
    FXCH                                ; 005c130c
    FSUB float ptr [EAX + 0x8]          ; 005c130e
    FXCH ST2                            ; 005c1311
    FADD float ptr [EBP + -0x72]        ; 005c1313
    FXCH ST2                            ; 005c1316
    FSTP float ptr [EBP + -0x6e]        ; 005c1318
    FSTP float ptr [EBP + 0xfffff636]   ; 005c131b
    FXCH                                ; 005c1321
    FADD float ptr [EBP + -0x6e]        ; 005c1323
    FXCH                                ; 005c1326
    FSTP float ptr [EBP + 0xfffff646]   ; 005c1328
    FSTP float ptr [EBP + 0xfffff656]   ; 005c132e
    JMP 0x005c0946                      ; 005c1334
        ;   XREF to: 005c0946 (UNCONDITIONAL_JUMP)  ; LAB_005c0946
    MOV EDX,dword ptr [0x03f6bb04]      ; 005c1339 | g_StrangerIndices[14]
        ;   Label: LAB_005c1339
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c133f
    SUB EAX,EDX                         ; 005c1346
    SHL EAX,0x4                         ; 005c1348
    ADD EAX,EDI                         ; 005c134b
    PUSH EAX                            ; 005c134d
    PUSH 0x3f87558                      ; 005c134e | g_ZeroVector
    LEA EAX,[EBP + -0x52]               ; 005c1353
    PUSH EAX                            ; 005c1356
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005c1357
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    MOV EDX,dword ptr [0x03f6bb00]      ; 005c135c | g_StrangerIndices[13]
    MOV ESI,EAX                         ; 005c1362
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c1364
    SUB EAX,EDX                         ; 005c136b
    SHL EAX,0x4                         ; 005c136d
    ADD ESP,0xc                         ; 005c1370
    ADD EAX,EDI                         ; 005c1373
    PUSH EAX                            ; 005c1375
    PUSH 0x3f87558                      ; 005c1376 | g_ZeroVector
    LEA EAX,[EBP + -0xa]                ; 005c137b
    PUSH EAX                            ; 005c137e
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005c137f
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 005c1384
    FADD float ptr [ESI]                ; 005c1386
    FST float ptr [EBP + 0xfffffeee]    ; 005c1388
    FLD float ptr [EAX + 0x4]           ; 005c138e
    FADD float ptr [ESI + 0x4]          ; 005c1391
    FXCH                                ; 005c1394
    FLD float ptr [0x00653984]          ; 005c1396 | FLOAT_00653984
    FXCH                                ; 005c139c
    FMUL ST1                            ; 005c139e
    FXCH ST2                            ; 005c13a0
    FST float ptr [EBP + 0xfffffef2]    ; 005c13a2
    FLD float ptr [EAX + 0x8]           ; 005c13a8
    FADD float ptr [ESI + 0x8]          ; 005c13ab
    FXCH                                ; 005c13ae
    FMUL ST2                            ; 005c13b0
    FXCH                                ; 005c13b2
    FST float ptr [EBP + 0xfffffef6]    ; 005c13b4
    FMULP ST2                           ; 005c13ba
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005c13bc
    ADD ESP,0xc                         ; 005c13c2
    LEA EAX,[EBP + 0xfffffe82]          ; 005c13c5
    FXCH ST2                            ; 005c13cb
    FSTP float ptr [EBP + 0xffffff7e]   ; 005c13cd
    PUSH EAX                            ; 005c13d3
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005c13d4
    FXCH                                ; 005c13da
    FSTP float ptr [EBP + -0x7e]        ; 005c13dc
    PUSH ESI                            ; 005c13df
    FSTP float ptr [EBP + -0x7a]        ; 005c13e0
    MOV EDX,dword ptr [EDX + 0x154]     ; 005c13e3
    CALL dword ptr [EDX + 0x14]         ; 005c13e9
    FLD float ptr [EBP + 0xfffffe92]    ; 005c13ec
    FLD float ptr [EBP + -0x7a]         ; 005c13f2
    ADD ESP,0x8                         ; 005c13f5
    FXCH                                ; 005c13f8
    FSUB float ptr [EBP + 0xfffffe86]   ; 005c13fa
    PUSH ESI                            ; 005c1400
    FXCH                                ; 005c1401
    FADD float ptr [0x0065399c]         ; 005c1403 | FLOAT_0065399c
    FXCH                                ; 005c1409
    FSUBR float ptr [EBP + -0x7e]       ; 005c140b
    FXCH                                ; 005c140e
    FSTP float ptr [EBP + -0x7a]        ; 005c1410
    FSTP float ptr [EBP + -0x7e]        ; 005c1413
    CALL core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010 ; 005c1416
        ;   XREF to: 005bb010 (UNCONDITIONAL_CALL)  ; float core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010(CDemonActor * object)
    MOV dword ptr [EBP + 0x76],EAX      ; 005c141b
    ADD ESP,0x4                         ; 005c141e
    FLD float ptr [EBP + 0x76]          ; 005c1421
    LEA EAX,[EBP + 0xfffffdda]          ; 005c1424
    FADD float ptr [EBP + -0x7e]        ; 005c142a
    PUSH EAX                            ; 005c142d
    FSTP float ptr [EBP + -0x7e]        ; 005c142e
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100 ; 005c1431
        ;   XREF to: 005f5100 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 005c1436
    MOV dword ptr [EBP + 0xfffffde6],EAX ; 005c143c
    MOV EAX,dword ptr [EBP + -0x7e]     ; 005c1442
    MOV dword ptr [EBP + 0xfffffdf6],EAX ; 005c1445
    MOV EAX,dword ptr [EBP + -0x7a]     ; 005c144b
    MOV dword ptr [EBP + 0xfffffe06],EAX ; 005c144e
    MOV EAX,dword ptr [EBX + 0x1fc88]   ; 005c1454
    ADD ESP,0x4                         ; 005c145a
    TEST EAX,EAX                        ; 005c145d
    JZ 0x005c14b6                       ; 005c145f
        ;   XREF to: 005c14b6 (CONDITIONAL_JUMP)  ; LAB_005c14b6
    LEA EAX,[EBP + 0xfffffdda]          ; 005c1461
    PUSH EAX                            ; 005c1467
    LEA ESI,[EBP + 0xfffff74a]          ; 005c1468
    PUSH 0x40490fdb                     ; 005c146e
    LEA EDI,[EBP + 0xfffff71a]          ; 005c1473
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 005c1479
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    JMP 0x03fc0604                      ; 005c147e
        ;   XREF to: 03fc0604 (UNCONDITIONAL_JUMP)  ; LAB_03fc0604
    PUSH EAX                            ; 005c1494
        ;   Label: LAB_005c1494
    LEA ESI,[EBP + 0xfffff77a]          ; 005c1495
    LEA EDI,[EBP + 0xfffffdda]          ; 005c149b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c14a1
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc066b                      ; 005c14a6
        ;   XREF to: 03fc066b (UNCONDITIONAL_JUMP)  ; LAB_03fc066b
    MOV ECX,0xc                         ; 005c14b6
        ;   Label: LAB_005c14b6
    LEA EDI,[EBP + 0xfffff65a]          ; 005c14bb
    LEA ESI,[EBP + 0xfffffdda]          ; 005c14c1
    JMP 0x005c0946                      ; 005c14c7
        ;   XREF to: 005c0946 (UNCONDITIONAL_JUMP)  ; LAB_005c0946
    CMP EAX,0x1                         ; 005c14cc
        ;   Label: LAB_005c14cc
    JNZ 0x005c15d9                      ; 005c14cf
        ;   XREF to: 005c15d9 (CONDITIONAL_JUMP)  ; LAB_005c15d9
    MOV EDX,dword ptr [EBP + 0x92]      ; 005c14d5
    TEST EDX,EDX                        ; 005c14db
    JNZ 0x005c159b                      ; 005c14dd
        ;   XREF to: 005c159b (CONDITIONAL_JUMP)  ; LAB_005c159b
    PUSH 0xbfc90fdb                     ; 005c14e3
    LEA ESI,[EBP + 0xfffffd7a]          ; 005c14e8
    LEA EDI,[EBP + 0xfffffc2a]          ; 005c14ee
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 005c14f4
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c14f9
    LEA ESI,[EBP + 0xfffffd7a]          ; 005c14fe
    JMP 0x03fc590a                      ; 005c1504
        ;   XREF to: 03fc590a (UNCONDITIONAL_JUMP)  ; LAB_03fc590a
        ;   Label: LAB_005c1504
    MOV ESI,dword ptr [EBP + 0x72]      ; 005c1509
        ;   Label: LAB_005c1509
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c150c
    SUB EAX,ESI                         ; 005c1513
    LEA EDX,[EBX + 0xfd8]               ; 005c1515
    SHL EAX,0x4                         ; 005c151b
    ADD EAX,EDX                         ; 005c151e
    PUSH EAX                            ; 005c1520
    LEA EAX,[EBP + 0xfffffc2a]          ; 005c1521
    PUSH EAX                            ; 005c1527
    LEA ESI,[EBP + 0xfffffbfa]          ; 005c1528
    LEA EDI,[EBP + 0xfffffc2a]          ; 005c152e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c1534
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005c1539
    LEA EAX,[EBP + 0x4a]                ; 005c153c
    JMP 0x03fc06cc                      ; 005c153f
        ;   XREF to: 03fc06cc (UNCONDITIONAL_JUMP)  ; LAB_03fc06cc
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005c1554
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
        ;   Label: LAB_005c1554
    MOV ESI,EAX                         ; 005c1559
    LEA EAX,[EBP + 0x2]                 ; 005c155b
    ADD ESP,0x8                         ; 005c155e
    CMP EAX,ESI                         ; 005c1561
    JZ 0x005c1576                       ; 005c1563
        ;   XREF to: 005c1576 (CONDITIONAL_JUMP)  ; LAB_005c1576
    MOV EAX,dword ptr [ESI]             ; 005c1565
    MOV dword ptr [EBP + 0x2],EAX       ; 005c1567
    MOV EAX,dword ptr [ESI + 0x4]       ; 005c156a
    MOV dword ptr [EBP + 0x6],EAX       ; 005c156d
    MOV EAX,dword ptr [ESI + 0x8]       ; 005c1570
    MOV dword ptr [EBP + 0xa],EAX       ; 005c1573
    FLD float ptr [EBP + 0xfffffe72]    ; 005c1576
        ;   Label: LAB_005c1576
    FMUL double ptr [0x0065398c]        ; 005c157c | DOUBLE_0065398c
    FLD float ptr [EBP + 0xfffffe7e]    ; 005c1582
    FMUL double ptr [0x00653994]        ; 005c1588 | DOUBLE_00653994
    FADDP                               ; 005c158e
    FSTP float ptr [EBP + 0xffffff0e]   ; 005c1590
    JMP 0x005c10ab                      ; 005c1596
        ;   XREF to: 005c10ab (UNCONDITIONAL_JUMP)  ; LAB_005c10ab
    CMP EDX,EAX                         ; 005c159b
        ;   Label: LAB_005c159b
    JNZ 0x005c15c5                      ; 005c159d
        ;   XREF to: 005c15c5 (CONDITIONAL_JUMP)  ; LAB_005c15c5
    PUSH 0x3fc90fdb                     ; 005c159f
    LEA ESI,[EBP + 0xfffffdaa]          ; 005c15a4
    LEA EDI,[EBP + 0xfffffc2a]          ; 005c15aa
    CALL core_xform.cpp_buildRotationY_FUN_005f6cc0 ; 005c15b0
        ;   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildRotationY_FUN_005f6cc0(float angle_radians, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c15b5
    LEA ESI,[EBP + 0xfffffdaa]          ; 005c15ba
    JMP 0x005c1504                      ; 005c15c0
        ;   XREF to: 005c1504 (UNCONDITIONAL_JUMP)  ; LAB_005c1504
    LEA EAX,[EBP + 0xfffffc2a]          ; 005c15c5
        ;   Label: LAB_005c15c5
    PUSH EAX                            ; 005c15cb
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100 ; 005c15cc
        ;   XREF to: 005f5100 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 005c15d1
    JMP 0x005c1509                      ; 005c15d4
        ;   XREF to: 005c1509 (UNCONDITIONAL_JUMP)  ; LAB_005c1509
    CMP EAX,0x3                         ; 005c15d9
        ;   Label: LAB_005c15d9
    JZ 0x005c109f                       ; 005c15dc
        ;   XREF to: 005c109f (CONDITIONAL_JUMP)  ; LAB_005c109f
    PUSH ESI                            ; 005c15e2
    MOV EDI,0x65394c                    ; 005c15e3 | = "..\\core\\stranger.cpp"
    MOV EAX,0xc4d                       ; 005c15e8
    PUSH 0x653961                       ; 005c15ed | = "Don't know how to carry light %s"
    MOV dword ptr [0x02f0ca48],EDI      ; 005c15f2 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005c15f8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005c15fd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005c1602
    JMP 0x005c10ab                      ; 005c1605
        ;   XREF to: 005c10ab (UNCONDITIONAL_JUMP)  ; LAB_005c10ab
    CMP EDX,0x1                         ; 005c160a
        ;   Label: LAB_005c160a
    JNZ 0x005c164c                      ; 005c160d
        ;   XREF to: 005c164c (CONDITIONAL_JUMP)  ; LAB_005c164c
    MOV EDX,0x3ecccccd                  ; 005c160f
    LEA EAX,[EBP + 0xffffff42]          ; 005c1614
    XOR ECX,ECX                         ; 005c161a
    MOV dword ptr [EBP + 0xffffff42],EDX ; 005c161c
    MOV dword ptr [EBP + 0xffffff46],ECX ; 005c1622
    LEA EDX,[EBP + -0x5e]               ; 005c1628
    MOV dword ptr [EBP + 0xffffff4a],ECX ; 005c162b
    CMP EDX,EAX                         ; 005c1631
    JZ 0x005c1272                       ; 005c1633
        ;   XREF to: 005c1272 (CONDITIONAL_JUMP)  ; LAB_005c1272
    MOV EDI,0x3ecccccd                  ; 005c1639
    MOV dword ptr [EBP + -0x5a],ECX     ; 005c163e
    MOV dword ptr [EBP + -0x56],ECX     ; 005c1641
    MOV dword ptr [EBP + -0x5e],EDI     ; 005c1644
    JMP 0x005c1272                      ; 005c1647
        ;   XREF to: 005c1272 (UNCONDITIONAL_JUMP)  ; LAB_005c1272
    XOR ESI,ESI                         ; 005c164c
        ;   Label: LAB_005c164c
    MOV dword ptr [EBP + -0x5a],ESI     ; 005c164e
    MOV dword ptr [EBP + -0x5e],ESI     ; 005c1651
    MOV dword ptr [EBP + -0x56],ESI     ; 005c1654
    JMP 0x005c1272                      ; 005c1657
        ;   XREF to: 005c1272 (UNCONDITIONAL_JUMP)  ; LAB_005c1272
    MOV ECX,0xc                         ; 03fc0000
        ;   Label: LAB_03fc0000
    ADD ESP,0x4                         ; 03fc0005
    LEA EAX,[EBP + 0xfffff41a]          ; 03fc0008
    LEA ESI,[EBP + 0xfffffa1a]          ; 03fc000e
    PUSH EAX                            ; 03fc0014
    MOV ECX,dword ptr [ESI]             ; 03fc0015
    MOV dword ptr [EDI],ECX             ; 03fc0017
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0019
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc001c
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc001f
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0022
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0025
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0028
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc002b
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc002e
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0031
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0034
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0037
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc003a
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc003d
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0040
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0043
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0046
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0049
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc004c
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc004f
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0052
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0055
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0058
    ADD ESI,0x30                        ; 03fc005b
    ADD EDI,0x30                        ; 03fc005e
    XOR ECX,ECX                         ; 03fc0061
    JMP 0x005c08aa                      ; 03fc0063
        ;   XREF to: 005c08aa (UNCONDITIONAL_JUMP)  ; LAB_005c08aa
    MOV ECX,0xc                         ; 03fc0068
        ;   Label: LAB_03fc0068
    LEA ESI,[EBP + 0xfffff4da]          ; 03fc006d
    LEA EAX,[EBP + 0xfffff3ea]          ; 03fc0073
    ADD ESP,0x4                         ; 03fc0079
    MOV ECX,dword ptr [ESI]             ; 03fc007c
    MOV dword ptr [EDI],ECX             ; 03fc007e
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0080
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0083
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0086
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0089
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc008c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc008f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0092
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0095
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0098
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc009b
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc009e
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc00a1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc00a4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc00a7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc00aa
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc00ad
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc00b0
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc00b3
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc00b6
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc00b9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc00bc
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc00bf
    ADD ESI,0x30                        ; 03fc00c2
    ADD EDI,0x30                        ; 03fc00c5
    XOR ECX,ECX                         ; 03fc00c8
    JMP 0x005c08d6                      ; 03fc00ca
        ;   XREF to: 005c08d6 (UNCONDITIONAL_JUMP)  ; LAB_005c08d6
    MOV ECX,0xc                         ; 03fc00cf
        ;   Label: LAB_03fc00cf
    LEA ESI,[EBP + 0xfffff50a]          ; 03fc00d4
    LEA EAX,[EBP + 0xfffff98a]          ; 03fc00da
    ADD ESP,0x8                         ; 03fc00e0
    MOV ECX,dword ptr [ESI]             ; 03fc00e3
    MOV dword ptr [EDI],ECX             ; 03fc00e5
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc00e7
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc00ea
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc00ed
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc00f0
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc00f3
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc00f6
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc00f9
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc00fc
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc00ff
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0102
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0105
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0108
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc010b
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc010e
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0111
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0114
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0117
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc011a
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc011d
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0120
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0123
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0126
    ADD ESI,0x30                        ; 03fc0129
    ADD EDI,0x30                        ; 03fc012c
    XOR ECX,ECX                         ; 03fc012f
    JMP 0x005c08fe                      ; 03fc0131
        ;   XREF to: 005c08fe (UNCONDITIONAL_JUMP)  ; LAB_005c08fe
    MOV ECX,0xc                         ; 03fc0136
        ;   Label: LAB_03fc0136
    LEA ESI,[EBP + 0xfffff53a]          ; 03fc013b
    LEA EAX,[EBP + 0xfffff9ea]          ; 03fc0141
    ADD ESP,0x8                         ; 03fc0147
    MOV ECX,dword ptr [ESI]             ; 03fc014a
    MOV dword ptr [EDI],ECX             ; 03fc014c
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc014e
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0151
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0154
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0157
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc015a
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc015d
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0160
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0163
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0166
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0169
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc016c
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc016f
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0172
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0175
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0178
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc017b
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc017e
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0181
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0184
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0187
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc018a
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc018d
    ADD ESI,0x30                        ; 03fc0190
    ADD EDI,0x30                        ; 03fc0193
    XOR ECX,ECX                         ; 03fc0196
    JMP 0x005c0926                      ; 03fc0198
        ;   XREF to: 005c0926 (UNCONDITIONAL_JUMP)  ; LAB_005c0926
    MOV ECX,0xc                         ; 03fc019d
        ;   Label: LAB_03fc019d
    MOV EDI,dword ptr [EBP + 0x6e]      ; 03fc01a2
    LEA ESI,[EBP + 0xfffff65a]          ; 03fc01a5
    MOV ECX,dword ptr [ESI]             ; 03fc01ab
    MOV dword ptr [EDI],ECX             ; 03fc01ad
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc01af
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc01b2
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc01b5
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc01b8
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc01bb
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc01be
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc01c1
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc01c4
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc01c7
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc01ca
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc01cd
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc01d0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc01d3
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc01d6
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc01d9
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc01dc
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc01df
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc01e2
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc01e5
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc01e8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc01eb
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc01ee
    ADD ESI,0x30                        ; 03fc01f1
    ADD EDI,0x30                        ; 03fc01f4
    XOR ECX,ECX                         ; 03fc01f7
    JMP 0x005c0958                      ; 03fc01f9
        ;   XREF to: 005c0958 (UNCONDITIONAL_JUMP)  ; LAB_005c0958
    MOV ECX,0xc                         ; 03fc01fe
        ;   Label: LAB_03fc01fe
    LEA ESI,[EBP + 0xfffffb6a]          ; 03fc0203
    LEA EAX,[EBP + 0xfffff5fa]          ; 03fc0209
    ADD ESP,0xc                         ; 03fc020f
    MOV ECX,dword ptr [ESI]             ; 03fc0212
    MOV dword ptr [EDI],ECX             ; 03fc0214
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0216
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0219
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc021c
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc021f
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0222
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0225
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0228
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc022b
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc022e
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0231
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0234
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0237
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc023a
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc023d
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0240
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0243
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0246
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0249
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc024c
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc024f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0252
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0255
    ADD ESI,0x30                        ; 03fc0258
    ADD EDI,0x30                        ; 03fc025b
    XOR ECX,ECX                         ; 03fc025e
    JMP 0x005c0a59                      ; 03fc0260
        ;   XREF to: 005c0a59 (UNCONDITIONAL_JUMP)  ; LAB_005c0a59
    MOV ECX,0xc                         ; 03fc0265
        ;   Label: LAB_03fc0265
    LEA ESI,[EBP + 0xfffff8ca]          ; 03fc026a
    LEA EAX,[EBP + 0xfffff56a]          ; 03fc0270
    ADD ESP,0xc                         ; 03fc0276
    MOV ECX,dword ptr [ESI]             ; 03fc0279
    MOV dword ptr [EDI],ECX             ; 03fc027b
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc027d
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0280
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0283
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0286
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0289
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc028c
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc028f
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0292
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0295
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0298
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc029b
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc029e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc02a1
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc02a4
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc02a7
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc02aa
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc02ad
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc02b0
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc02b3
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc02b6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc02b9
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc02bc
    ADD ESI,0x30                        ; 03fc02bf
    ADD EDI,0x30                        ; 03fc02c2
    XOR ECX,ECX                         ; 03fc02c5
    JMP 0x005c0b7e                      ; 03fc02c7
        ;   XREF to: 005c0b7e (UNCONDITIONAL_JUMP)  ; LAB_005c0b7e
    MOV ECX,0xc                         ; 03fc02cc
        ;   Label: LAB_03fc02cc
    LEA ESI,[EBP + 0xfffffaaa]          ; 03fc02d1
    LEA EAX,[EBP + 0xfffffa4a]          ; 03fc02d7
    ADD ESP,0xc                         ; 03fc02dd
    MOV ECX,dword ptr [ESI]             ; 03fc02e0
    MOV dword ptr [EDI],ECX             ; 03fc02e2
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc02e4
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc02e7
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc02ea
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc02ed
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc02f0
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc02f3
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc02f6
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc02f9
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc02fc
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc02ff
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0302
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0305
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0308
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc030b
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc030e
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0311
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0314
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0317
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc031a
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc031d
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0320
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0323
    ADD ESI,0x30                        ; 03fc0326
    ADD EDI,0x30                        ; 03fc0329
    XOR ECX,ECX                         ; 03fc032c
    JMP 0x005c0c8b                      ; 03fc032e
        ;   XREF to: 005c0c8b (UNCONDITIONAL_JUMP)  ; LAB_005c0c8b
    MOV ECX,0xc                         ; 03fc0333
        ;   Label: LAB_03fc0333
    LEA ESI,[EBP + 0xfffffb3a]          ; 03fc0338
    LEA EAX,[EBP + 0xfffff7da]          ; 03fc033e
    ADD ESP,0xc                         ; 03fc0344
    MOV ECX,dword ptr [ESI]             ; 03fc0347
    MOV dword ptr [EDI],ECX             ; 03fc0349
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc034b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc034e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0351
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0354
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0357
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc035a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc035d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0360
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0363
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0366
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0369
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc036c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc036f
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0372
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0375
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0378
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc037b
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc037e
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0381
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0384
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0387
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc038a
    ADD ESI,0x30                        ; 03fc038d
    ADD EDI,0x30                        ; 03fc0390
    XOR ECX,ECX                         ; 03fc0393
    JMP 0x005c0e88                      ; 03fc0395
        ;   XREF to: 005c0e88 (UNCONDITIONAL_JUMP)  ; LAB_005c0e88
    MOV ECX,0xc                         ; 03fc039a
        ;   Label: LAB_03fc039a
    ADD ESP,0x4                         ; 03fc039f
    LEA EAX,[EBP + 0xfffffd1a]          ; 03fc03a2
    LEA ESI,[EBP + 0xfffff95a]          ; 03fc03a8
    PUSH EAX                            ; 03fc03ae
    MOV ECX,dword ptr [ESI]             ; 03fc03af
    MOV dword ptr [EDI],ECX             ; 03fc03b1
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc03b3
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc03b6
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc03b9
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc03bc
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc03bf
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc03c2
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc03c5
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc03c8
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc03cb
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc03ce
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc03d1
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc03d4
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc03d7
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc03da
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc03dd
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc03e0
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc03e3
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc03e6
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc03e9
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc03ec
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc03ef
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc03f2
    ADD ESI,0x30                        ; 03fc03f5
    ADD EDI,0x30                        ; 03fc03f8
    XOR ECX,ECX                         ; 03fc03fb
    JMP 0x005c0ef8                      ; 03fc03fd
        ;   XREF to: 005c0ef8 (UNCONDITIONAL_JUMP)  ; LAB_005c0ef8
    MOV ECX,0xc                         ; 03fc0402
        ;   Label: LAB_03fc0402
    LEA ESI,[EBP + 0xfffffa7a]          ; 03fc0407
    LEA EAX,[EBP + 0xfffff5ca]          ; 03fc040d
    ADD ESP,0x4                         ; 03fc0413
    MOV ECX,dword ptr [ESI]             ; 03fc0416
    MOV dword ptr [EDI],ECX             ; 03fc0418
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc041a
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc041d
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0420
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0423
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0426
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0429
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc042c
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc042f
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0432
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0435
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0438
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc043b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc043e
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0441
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0444
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0447
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc044a
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc044d
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0450
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0453
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0456
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0459
    ADD ESI,0x30                        ; 03fc045c
    ADD EDI,0x30                        ; 03fc045f
    XOR ECX,ECX                         ; 03fc0462
    JMP 0x005c0f24                      ; 03fc0464
        ;   XREF to: 005c0f24 (UNCONDITIONAL_JUMP)  ; LAB_005c0f24
    MOV ECX,0xc                         ; 03fc0469
        ;   Label: LAB_03fc0469
    LEA ESI,[EBP + 0xfffffc5a]          ; 03fc046e
    LEA EAX,[EBP + 0xfffffb9a]          ; 03fc0474
    ADD ESP,0x8                         ; 03fc047a
    MOV ECX,dword ptr [ESI]             ; 03fc047d
    MOV dword ptr [EDI],ECX             ; 03fc047f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0481
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0484
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0487
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc048a
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc048d
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0490
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0493
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0496
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0499
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc049c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc049f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc04a2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc04a5
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc04a8
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc04ab
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc04ae
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc04b1
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc04b4
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc04b7
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc04ba
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc04bd
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc04c0
    ADD ESI,0x30                        ; 03fc04c3
    ADD EDI,0x30                        ; 03fc04c6
    XOR ECX,ECX                         ; 03fc04c9
    JMP 0x005c0f4c                      ; 03fc04cb
        ;   XREF to: 005c0f4c (UNCONDITIONAL_JUMP)  ; LAB_005c0f4c
    MOV ECX,0xc                         ; 03fc04d0
        ;   Label: LAB_03fc04d0
    LEA ESI,[EBP + 0xfffffcea]          ; 03fc04d5
    LEA EAX,[EBP + 0xfffffbca]          ; 03fc04db
    ADD ESP,0x8                         ; 03fc04e1
    MOV ECX,dword ptr [ESI]             ; 03fc04e4
    MOV dword ptr [EDI],ECX             ; 03fc04e6
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc04e8
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc04eb
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc04ee
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc04f1
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc04f4
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc04f7
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc04fa
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc04fd
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0500
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0503
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0506
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0509
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc050c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc050f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0512
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0515
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0518
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc051b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc051e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0521
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0524
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0527
    ADD ESI,0x30                        ; 03fc052a
    ADD EDI,0x30                        ; 03fc052d
    XOR ECX,ECX                         ; 03fc0530
    JMP 0x005c0f74                      ; 03fc0532
        ;   XREF to: 005c0f74 (UNCONDITIONAL_JUMP)  ; LAB_005c0f74
    MOV ECX,0xc                         ; 03fc0537
        ;   Label: LAB_03fc0537
    LEA ESI,[EBP + 0xfffff83a]          ; 03fc053c
    LEA EAX,[EBP + 0xfffff6ea]          ; 03fc0542
    ADD ESP,0xc                         ; 03fc0548
    MOV ECX,dword ptr [ESI]             ; 03fc054b
    MOV dword ptr [EDI],ECX             ; 03fc054d
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc054f
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0552
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0555
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0558
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc055b
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc055e
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0561
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0564
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0567
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc056a
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc056d
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0570
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0573
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0576
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0579
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc057c
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc057f
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0582
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0585
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0588
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc058b
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc058e
    ADD ESI,0x30                        ; 03fc0591
    ADD EDI,0x30                        ; 03fc0594
    XOR ECX,ECX                         ; 03fc0597
    JMP 0x005c11f2                      ; 03fc0599
        ;   XREF to: 005c11f2 (UNCONDITIONAL_JUMP)  ; LAB_005c11f2
    MOV ECX,0xc                         ; 03fc059e
        ;   Label: LAB_03fc059e
    PUSH EAX                            ; 03fc05a3
    LEA EAX,[EBP + 0xfffff6ba]          ; 03fc05a4
    LEA ESI,[EBP + 0xfffff32a]          ; 03fc05aa
    PUSH EAX                            ; 03fc05b0
    MOV ECX,dword ptr [ESI]             ; 03fc05b1
    MOV dword ptr [EDI],ECX             ; 03fc05b3
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc05b5
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc05b8
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc05bb
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc05be
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc05c1
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc05c4
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc05c7
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc05ca
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc05cd
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc05d0
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc05d3
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc05d6
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc05d9
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc05dc
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc05df
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc05e2
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc05e5
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc05e8
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc05eb
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc05ee
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc05f1
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc05f4
    ADD ESI,0x30                        ; 03fc05f7
    ADD EDI,0x30                        ; 03fc05fa
    XOR ECX,ECX                         ; 03fc05fd
    JMP 0x005c121f                      ; 03fc05ff
        ;   XREF to: 005c121f (UNCONDITIONAL_JUMP)  ; LAB_005c121f
    MOV ECX,0xc                         ; 03fc0604
        ;   Label: LAB_03fc0604
    LEA ESI,[EBP + 0xfffff74a]          ; 03fc0609
    LEA EAX,[EBP + 0xfffff71a]          ; 03fc060f
    ADD ESP,0x4                         ; 03fc0615
    MOV ECX,dword ptr [ESI]             ; 03fc0618
    MOV dword ptr [EDI],ECX             ; 03fc061a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc061c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc061f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0622
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0625
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0628
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc062b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc062e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0631
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0634
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0637
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc063a
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc063d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0640
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0643
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0646
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0649
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc064c
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc064f
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0652
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0655
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0658
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc065b
    ADD ESI,0x30                        ; 03fc065e
    ADD EDI,0x30                        ; 03fc0661
    XOR ECX,ECX                         ; 03fc0664
    JMP 0x005c1494                      ; 03fc0666
        ;   XREF to: 005c1494 (UNCONDITIONAL_JUMP)  ; LAB_005c1494
    MOV ECX,0xc                         ; 03fc066b
        ;   Label: LAB_03fc066b
    LEA ESI,[EBP + 0xfffff77a]          ; 03fc0670
    ADD ESP,0x8                         ; 03fc0676
    MOV ECX,dword ptr [ESI]             ; 03fc0679
    MOV dword ptr [EDI],ECX             ; 03fc067b
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc067d
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0680
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0683
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0686
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0689
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc068c
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc068f
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0692
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0695
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0698
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc069b
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc069e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc06a1
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc06a4
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc06a7
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc06aa
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc06ad
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc06b0
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc06b3
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc06b6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc06b9
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc06bc
    ADD ESI,0x30                        ; 03fc06bf
    ADD EDI,0x30                        ; 03fc06c2
    XOR ECX,ECX                         ; 03fc06c5
    JMP 0x005c14b6                      ; 03fc06c7
        ;   XREF to: 005c14b6 (UNCONDITIONAL_JUMP)  ; LAB_005c14b6
    MOV ECX,0xc                         ; 03fc06cc
        ;   Label: LAB_03fc06cc
    PUSH EAX                            ; 03fc06d1
    LEA EAX,[EBP + 0xfffffc2a]          ; 03fc06d2
    LEA ESI,[EBP + 0xfffffbfa]          ; 03fc06d8
    PUSH EAX                            ; 03fc06de
    MOV ECX,dword ptr [ESI]             ; 03fc06df
    MOV dword ptr [EDI],ECX             ; 03fc06e1
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc06e3
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc06e6
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc06e9
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc06ec
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc06ef
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc06f2
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc06f5
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc06f8
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc06fb
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc06fe
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0701
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0704
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0707
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc070a
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc070d
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0710
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0713
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0716
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0719
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc071c
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc071f
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0722
    ADD ESI,0x30                        ; 03fc0725
    ADD EDI,0x30                        ; 03fc0728
    XOR ECX,ECX                         ; 03fc072b
    JMP 0x005c1554                      ; 03fc072d
        ;   XREF to: 005c1554 (UNCONDITIONAL_JUMP)  ; LAB_005c1554
    ADD ESP,0x4                         ; 03fc590a
        ;   Label: LAB_03fc590a
    MOV ECX,dword ptr [ESI]             ; 03fc590d
    MOV dword ptr [EDI],ECX             ; 03fc590f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5911
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5914
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc5917
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc591a
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc591d
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5920
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5923
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc5926
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc5929
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc592c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc592f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5932
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5935
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc5938
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc593b
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc593e
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5941
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5944
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc5947
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc594a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc594d
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc5950
    ADD ESI,0x30                        ; 03fc5953
    ADD EDI,0x30                        ; 03fc5956
    XOR ECX,ECX                         ; 03fc5959
    JMP 0x005c1509                      ; 03fc595b
        ;   XREF to: 005c1509 (UNCONDITIONAL_JUMP)  ; LAB_005c1509
    MOV ECX,dword ptr [ESI]             ; 03fc5a97
        ;   Label: LAB_03fc5a97
    MOV dword ptr [EDI],ECX             ; 03fc5a99
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5a9b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5a9e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc5aa1
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc5aa4
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc5aa7
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5aaa
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5aad
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc5ab0
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc5ab3
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc5ab6
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5ab9
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5abc
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5abf
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc5ac2
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc5ac5
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc5ac8
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5acb
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5ace
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc5ad1
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc5ad4
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc5ad7
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc5ada
    ADD ESI,0x30                        ; 03fc5add
    ADD EDI,0x30                        ; 03fc5ae0
    XOR ECX,ECX                         ; 03fc5ae3
    JMP 0x03fc019d                      ; 03fc5ae5
        ;   XREF to: 03fc019d (UNCONDITIONAL_JUMP)  ; LAB_03fc019d

