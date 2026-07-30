; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_zombie_cpp_CZombie_renderTransparent_FUN_00561940(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
;   core_dlight.cpp_renderConeLightGeometry_FUN_00451b70
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561940
        ;   Label: core_zombie.cpp_CZombie_renderTransparent_FUN_00561940
    PUSH ESI                            ; 00561941
    PUSH EDI                            ; 00561942
    PUSH EBP                            ; 00561943
    MOV EBP,ESP                         ; 00561944
    SUB ESP,0xe4                        ; 00561946
    SUB EBP,0x7e                        ; 0056194c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0056194f
    CMP dword ptr [EBX + 0x2618],0x0    ; 00561955
    JZ 0x00561a71                       ; 0056195c
        ;   XREF to: 00561a71 (CONDITIONAL_JUMP)  ; LAB_00561a71
    CMP dword ptr [EBX + 0xbda8],0x0    ; 00561962
    JZ 0x00561a71                       ; 00561969
        ;   XREF to: 00561a71 (CONDITIONAL_JUMP)  ; LAB_00561a71
    MOV ESI,dword ptr [EBX + 0xbdb4]    ; 0056196f
    PUSH ESI                            ; 00561975
    LEA EAX,[EBX + 0x150]               ; 00561976
    PUSH EAX                            ; 0056197c
    LEA ESI,[EBP + -0x36]               ; 0056197d
    LEA EDI,[EBP + -0x66]               ; 00561980
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 ; 00561983
        ;   XREF to: 0051d0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0()
    ADD ESP,0x8                         ; 00561988
    LEA EAX,[EBP + -0x66]               ; 0056198b
    MOV ECX,0xc                         ; 0056198e
    PUSH EAX                            ; 00561993
    MOV EAX,0x3f000000                  ; 00561994
    LEA ESI,[EBP + -0x36]               ; 00561999
    MOV dword ptr [EBP + 0x22],EAX      ; 0056199c
    MOV dword ptr [EBP + 0x26],EAX      ; 0056199f
    LEA EAX,[EBP + 0x1e]                ; 005619a2
    MOVSD.REP ES:EDI,ESI                ; 005619a5
    PUSH EAX                            ; 005619a7
    LEA EAX,[EBP + -0x6]                ; 005619a8
    XOR EDI,EDI                         ; 005619ab
    PUSH EAX                            ; 005619ad
    MOV dword ptr [EBP + 0x1e],EDI      ; 005619ae
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005619b1
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005619b6
    PUSH EAX                            ; 005619b9
    LEA EAX,[EBP + 0x6]                 ; 005619ba
    PUSH EAX                            ; 005619bd
    PUSH EBX                            ; 005619be
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005619bf
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005619c4
    LEA EAX,[EBP + -0x66]               ; 005619c7
    PUSH EAX                            ; 005619ca
    LEA EAX,[EBP + 0x36]                ; 005619cb
    PUSH EAX                            ; 005619ce
    LEA EAX,[EBP + 0x4e]                ; 005619cf
    MOV dword ptr [EBP + 0x36],EDI      ; 005619d2
    PUSH EAX                            ; 005619d5
    MOV dword ptr [EBP + 0x3a],EDI      ; 005619d6
    MOV dword ptr [EBP + 0x3e],EDI      ; 005619d9
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005619dc
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005619e1
    PUSH EAX                            ; 005619e4
    LEA EAX,[EBP + 0x5a]                ; 005619e5
    PUSH EAX                            ; 005619e8
    PUSH EBX                            ; 005619e9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 005619ea
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005619ef
    LEA EAX,[EBP + -0x66]               ; 005619f2
    PUSH EAX                            ; 005619f5
    LEA EAX,[EBP + 0x66]                ; 005619f6
    MOV ECX,0x3f800000                  ; 005619f9
    PUSH EAX                            ; 005619fe
    LEA EAX,[EBP + 0x42]                ; 005619ff
    MOV dword ptr [EBP + 0x66],EDI      ; 00561a02
    PUSH EAX                            ; 00561a05
    MOV dword ptr [EBP + 0x6a],EDI      ; 00561a06
    MOV dword ptr [EBP + 0x6e],ECX      ; 00561a09
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00561a0c
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00561a11
    PUSH EAX                            ; 00561a14
    LEA EAX,[EBP + 0x72]                ; 00561a15
    PUSH EAX                            ; 00561a18
    PUSH EBX                            ; 00561a19
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00561a1a
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EBP + 0x72]          ; 00561a1f
    FLD float ptr [EBP + 0x76]          ; 00561a22
    FLD float ptr [EBP + 0x7a]          ; 00561a25
    LEA EAX,[EBP + 0x2a]                ; 00561a28
    ADD ESP,0xc                         ; 00561a2b
    FXCH ST2                            ; 00561a2e
    FSUB float ptr [EBP + 0x5a]         ; 00561a30
    FXCH                                ; 00561a33
    FSUB float ptr [EBP + 0x5e]         ; 00561a35
    FXCH ST2                            ; 00561a38
    FSUB float ptr [EBP + 0x62]         ; 00561a3a
    PUSH EAX                            ; 00561a3d
    FXCH                                ; 00561a3e
    FSTP float ptr [EBP + 0x2a]         ; 00561a40
    LEA EAX,[EBP + 0x12]                ; 00561a43
    FXCH                                ; 00561a46
    FSTP float ptr [EBP + 0x2e]         ; 00561a48
    PUSH EAX                            ; 00561a4b
    FSTP float ptr [EBP + 0x32]         ; 00561a4c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00561a4f
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00561a54
    PUSH 0x40c00000                     ; 00561a57
    LEA EAX,[EBP + 0x12]                ; 00561a5c
    PUSH 0x42600000                     ; 00561a5f
    PUSH EAX                            ; 00561a64
    LEA EAX,[EBP + 0x6]                 ; 00561a65
    PUSH EAX                            ; 00561a68
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_00451b70 ; 00561a69
        ;   XREF to: 00451b70 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_00451b70(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 00561a6e
    CMP dword ptr [EBX + 0x2618],0x0    ; 00561a71
        ;   Label: LAB_00561a71
    JNZ 0x00561a88                      ; 00561a78
        ;   XREF to: 00561a88 (CONDITIONAL_JUMP)  ; LAB_00561a88
    MOV EAX,dword ptr [EBX + 0x2618]    ; 00561a7a
    LEA ESP,[EBP + 0x7e]                ; 00561a80
    POP EBP                             ; 00561a83
    POP EDI                             ; 00561a84
    POP ESI                             ; 00561a85
    POP EBX                             ; 00561a86
    RET                                 ; 00561a87
    PUSH EBX                            ; 00561a88
        ;   Label: LAB_00561a88
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260 ; 00561a89
        ;   XREF to: 00427260 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00561a8e
    MOV EAX,dword ptr [EBX + 0x2618]    ; 00561a91
    LEA ESP,[EBP + 0x7e]                ; 00561a97
    POP EBP                             ; 00561a9a
    POP EDI                             ; 00561a9b
    POP ESI                             ; 00561a9c
    POP EBX                             ; 00561a9d
    RET                                 ; 00561a9e

