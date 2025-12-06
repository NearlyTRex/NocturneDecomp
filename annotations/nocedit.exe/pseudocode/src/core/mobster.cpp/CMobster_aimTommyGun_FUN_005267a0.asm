; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0()
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_mobster.cpp_FUN_00525840 at 00525d5e
;
; Referenced Globals:
;   TerminatedCString s_core_mobster_cpp_006398ae
;   TerminatedCString s_CMobster_aimTommyGun_I_m_006398c2
;   float FLOAT_006398f2 = 3
;   float FLOAT_006398f6 = 4
;   double DOUBLE_006398fe = 2
;   undefined4 g_CHeroClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02f37ed0
;   undefined4 DAT_02f37ef0
;   CVector3f g_ZeroVector
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_enemy.cpp_FUN_004a9a50
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005267a0
        ;   Label: core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
    PUSH ESI                            ; 005267a1
    PUSH EDI                            ; 005267a2
    PUSH EBP                            ; 005267a3
    MOV EBP,ESP                         ; 005267a4
    SUB ESP,0x74                        ; 005267a6
    AND ESP,0xfffffff8                  ; 005267a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005267ac
    MOV EDX,dword ptr [EBX + 0x24f8]    ; 005267af
    TEST EDX,EDX                        ; 005267b5
    JZ 0x005267d0                       ; 005267b7 | LAB_005267d0
        ;   XREF to: 005267d0 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005267b9
    TEST ECX,ECX                        ; 005267bf
    JNZ 0x005267d8                      ; 005267c1 | LAB_005267d8
        ;   XREF to: 005267d8 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbf8c],ECX    ; 005267c3
    MOV ESP,EBP                         ; 005267c9
        ;   Label: LAB_005267c9
    POP EBP                             ; 005267cb
    POP EDI                             ; 005267cc
    POP ESI                             ; 005267cd
    POP EBX                             ; 005267ce
    RET                                 ; 005267cf
    MOV dword ptr [EBX + 0xbf8c],EDX    ; 005267d0
        ;   Label: LAB_005267d0
    JMP 0x005267c9                      ; 005267d6 | LAB_005267c9
        ;   XREF to: 005267c9 (UNCONDITIONAL_JUMP)
    PUSH ECX                            ; 005267d8
        ;   Label: LAB_005267d8
    PUSH EBX                            ; 005267d9
    CALL core_enemy.cpp_FUN_004a9a50    ; 005267da | undefined core_enemy.cpp_FUN_004a9a50()
        ;   XREF to: 004a9a50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005267df
    TEST EAX,EAX                        ; 005267e2
    JZ 0x00526a8c                       ; 005267e4 | LAB_00526a8c
        ;   XREF to: 00526a8c (CONDITIONAL_JUMP)
    MOV EAX,[0x03f95d78]                ; 005267ea | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_005267ea
    PUSH EAX                            ; 005267ef
    MOV EDX,dword ptr [EBX + 0x24f8]    ; 005267f0
    PUSH EDX                            ; 005267f6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005267f7 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005267fc
    TEST EAX,EAX                        ; 005267ff
    JNZ 0x00526826                      ; 00526801 | LAB_00526826
        ;   XREF to: 00526826 (CONDITIONAL_JUMP)
    MOV ECX,0x6398ae                    ; 00526803 | = "..\\core\\mobster.cpp" | s_core_mobster_cpp_006398ae = ..\core\mobster.cpp
    MOV ESI,0x323                       ; 00526808
    PUSH 0x6398c2                       ; 0052680d | = "CMobster::aimTommyGun - I'm not carry..." | s_CMobster_aimTommyGun_I_m_006398c2 = CMobster::aimTommyGun - I'm not carrying one!
    MOV dword ptr [0x02f0ca48],ECX      ; 00526812 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00526818 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052681e | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00526823
    MOV EDI,0x3f490fdb                  ; 00526826
        ;   Label: LAB_00526826
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 0052682b
    MOV dword ptr [ESP],EDI             ; 00526831
    TEST EAX,EAX                        ; 00526834
    JZ 0x0052683f                       ; 00526836 | LAB_0052683f
        ;   XREF to: 0052683f (CONDITIONAL_JUMP)
    MOV dword ptr [ESP],0x3fc90fdb      ; 00526838
    MOV EDX,dword ptr [0x02f37ed0]      ; 0052683f | undefined4 DAT_02f37ed0
        ;   Label: LAB_0052683f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526845
    SUB EAX,EDX                         ; 0052684c
    MOV EDX,EAX                         ; 0052684e
    SHL EDX,0x4                         ; 00526850
    LEA EAX,[EBX + 0xfd8]               ; 00526853
    ADD EAX,EDX                         ; 00526859
    PUSH EAX                            ; 0052685b
    PUSH 0x3f87558                      ; 0052685c | CVector3f g_ZeroVector
    LEA EAX,[ESP + 0x40]                ; 00526861
    PUSH EAX                            ; 00526865
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00526866 | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052686b
    PUSH EAX                            ; 0052686e
    LEA EAX,[ESP + 0x48]                ; 0052686f
    PUSH EAX                            ; 00526873
    PUSH EBX                            ; 00526874
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00526875 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 0052687a
    FLD float ptr [EDX + 0x20]          ; 00526880
    FSUB float ptr [EAX]                ; 00526883
    ADD ESP,0xc                         ; 00526885
    FSTP float ptr [ESP + 0x50]         ; 00526888
    FLD float ptr [EDX + 0x24]          ; 0052688c
    FSUB float ptr [EAX + 0x4]          ; 0052688f
    MOV ECX,dword ptr [0x02db880c]      ; 00526892 | g_CHeroClassInfo.name_hash
    FSTP float ptr [ESP + 0x54]         ; 00526898
    FLD float ptr [EDX + 0x28]          ; 0052689c
    FSUB float ptr [EAX + 0x8]          ; 0052689f
    PUSH ECX                            ; 005268a2
    FSTP float ptr [ESP + 0x5c]         ; 005268a3
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005268a7
    PUSH ESI                            ; 005268ad
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005268ae | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005268b3
    TEST EAX,EAX                        ; 005268b6
    JZ 0x00526aa6                       ; 005268b8 | LAB_00526aa6
        ;   XREF to: 00526aa6 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x54]          ; 005268be
    FADD float ptr [0x006398f6]         ; 005268c2 | float FLOAT_006398f6
    FSTP float ptr [ESP + 0x54]         ; 005268c8
        ;   Label: LAB_005268c8
    LEA EAX,[ESP + 0x50]                ; 005268cc
    PUSH EAX                            ; 005268d0
    LEA EAX,[ESP + 0x60]                ; 005268d1
    PUSH EAX                            ; 005268d5
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005268d6 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005268db
    FLD float ptr [ESP + 0x60]          ; 005268de
    FSUB float ptr [EBX + 0x34]         ; 005268e2
    SUB ESP,0x4                         ; 005268e5
    FSTP float ptr [ESP]                ; 005268e8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005268eb | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x74],EAX      ; 005268f0
    FLD float ptr [ESP + 0x74]          ; 005268f4
    ADD ESP,0x4                         ; 005268f8
    FST float ptr [ESP + 0x60]          ; 005268fb
    FABS                                ; 005268ff
    FLD float ptr [ESP + 0x54]          ; 00526901
    FMUL ST0                            ; 00526905
    FLD float ptr [ESP + 0x50]          ; 00526907
    FMUL ST0                            ; 0052690b
    FADDP                               ; 0052690d
    FLD float ptr [ESP + 0x58]          ; 0052690f
    FMUL ST0                            ; 00526913
    FADDP                               ; 00526915
    FSQRT                               ; 00526917
    FLD float ptr [ESP]                 ; 00526919
    FXCH                                ; 0052691c
    FSTP float ptr [ESP + 0x4]          ; 0052691e
    FCOMPP                              ; 00526922
    FNSTSW AX                           ; 00526924
    SAHF                                ; 00526926
    JBE 0x00526ab5                      ; 00526927 | LAB_00526ab5
        ;   XREF to: 00526ab5 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 0052692d
    FCOMP double ptr [0x006398fe]       ; 00526931 | double DOUBLE_006398fe
    FNSTSW AX                           ; 00526937
    SAHF                                ; 00526939
    JBE 0x00526ab5                      ; 0052693a | LAB_00526ab5
        ;   XREF to: 00526ab5 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbf8c]        ; 00526940
    FADD float ptr [EBP + 0x18]         ; 00526946
    FST float ptr [EBX + 0xbf8c]        ; 00526949
    FLD1                                ; 0052694f
    FCOMPP                              ; 00526951
    FNSTSW AX                           ; 00526953
    SAHF                                ; 00526955
    JNC 0x00526962                      ; 00526956 | LAB_00526962
        ;   XREF to: 00526962 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbf8c],0x3f800000 ; 00526958
    FLD float ptr [ESP + 0x5c]          ; 00526962
        ;   Label: LAB_00526962
    FLD float ptr [ESP]                 ; 00526966
    FCHS                                ; 00526969
    FSTP float ptr [ESP + 0x6c]         ; 0052696b
    FCOMP float ptr [ESP + 0x6c]        ; 0052696f
    FNSTSW AX                           ; 00526973
    SAHF                                ; 00526975
    JNC 0x00526980                      ; 00526976 | LAB_00526980
        ;   XREF to: 00526980 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00526978
    MOV dword ptr [ESP + 0x5c],EAX      ; 0052697c
    FLD float ptr [ESP + 0x5c]          ; 00526980
        ;   Label: LAB_00526980
    FCOMP float ptr [ESP]               ; 00526984
    FNSTSW AX                           ; 00526987
    SAHF                                ; 00526989
    JBE 0x00526993                      ; 0052698a | LAB_00526993
        ;   XREF to: 00526993 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 0052698c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0052698f
    FLD float ptr [ESP + 0x60]          ; 00526993
        ;   Label: LAB_00526993
    FLD float ptr [ESP]                 ; 00526997
    FCHS                                ; 0052699a
    FSTP float ptr [ESP + 0x68]         ; 0052699c
    FCOMP float ptr [ESP + 0x68]        ; 005269a0
    FNSTSW AX                           ; 005269a4
    SAHF                                ; 005269a6
    JNC 0x005269b1                      ; 005269a7 | LAB_005269b1
        ;   XREF to: 005269b1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x68]      ; 005269a9
    MOV dword ptr [ESP + 0x60],EAX      ; 005269ad
    FLD float ptr [ESP + 0x60]          ; 005269b1
        ;   Label: LAB_005269b1
    FCOMP float ptr [ESP]               ; 005269b5
    FNSTSW AX                           ; 005269b8
    SAHF                                ; 005269ba
    JBE 0x005269c4                      ; 005269bb | LAB_005269c4
        ;   XREF to: 005269c4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 005269bd
    MOV dword ptr [ESP + 0x60],EAX      ; 005269c0
    MOV EDI,dword ptr [EBX + 0x24b4]    ; 005269c4
        ;   Label: LAB_005269c4
    LEA EAX,[EBX + 0x158]               ; 005269ca
    TEST EDI,EDI                        ; 005269d0
    JZ 0x00526ae0                       ; 005269d2 | LAB_00526ae0
        ;   XREF to: 00526ae0 (CONDITIONAL_JUMP)
    PUSH 0x59ddb0                       ; 005269d8
    MOV ECX,dword ptr [0x02f37ef0]      ; 005269dd | undefined4 DAT_02f37ef0
    PUSH ECX                            ; 005269e3
    PUSH dword ptr [EBX + 0xbf8c]       ; 005269e4
    PUSH 0x40c00000                     ; 005269ea
    PUSH 0x6                            ; 005269ef
    PUSH EAX                            ; 005269f1
        ;   Label: LAB_005269f1
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 005269f2 | void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005269f7
    PUSH dword ptr [ESP + 0x5c]         ; 005269fa
    LEA ESI,[ESP + 0x2c]                ; 005269fe
    LEA EDI,[ESP + 0xc]                 ; 00526a02
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 00526a06 | void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x2c]                ; 00526a0b
    ADD ESP,0x4                         ; 00526a0f
    MOVSD ES:EDI,ESI                    ; 00526a12
    MOVSD ES:EDI,ESI                    ; 00526a13
    MOVSD ES:EDI,ESI                    ; 00526a14
    MOVSD ES:EDI,ESI                    ; 00526a15
    PUSH 0x59ddb0                       ; 00526a16
    MOV ESI,dword ptr [0x02f37ef0]      ; 00526a1b | undefined4 DAT_02f37ef0
    PUSH ESI                            ; 00526a21
    LEA EAX,[ESP + 0x10]                ; 00526a22
    PUSH dword ptr [EBX + 0xbf8c]       ; 00526a26
    PUSH EAX                            ; 00526a2c
    LEA EAX,[EBX + 0x158]               ; 00526a2d
    PUSH EAX                            ; 00526a33
    MOV dword ptr [ESP + 0x84],EAX      ; 00526a34
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 00526a3b | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00526a40
    LEA ESI,[ESP + 0x18]                ; 00526a43
    PUSH dword ptr [ESP + 0x60]         ; 00526a47
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 00526a4b | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00526a50
    LEA EDI,[ESP + 0x8]                 ; 00526a53
    PUSH 0x59ddb0                       ; 00526a57
    MOV EAX,[0x02f37ef0]                ; 00526a5c | undefined4 DAT_02f37ef0
    LEA ESI,[ESP + 0x1c]                ; 00526a61
    PUSH EAX                            ; 00526a65
    MOVSD ES:EDI,ESI                    ; 00526a66
    MOVSD ES:EDI,ESI                    ; 00526a67
    MOVSD ES:EDI,ESI                    ; 00526a68
    MOVSD ES:EDI,ESI                    ; 00526a69
    LEA EAX,[ESP + 0x10]                ; 00526a6a
    PUSH dword ptr [EBX + 0xbf8c]       ; 00526a6e
    PUSH EAX                            ; 00526a74
    MOV EDX,dword ptr [ESP + 0x80]      ; 00526a75
    PUSH EDX                            ; 00526a7c
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 00526a7d | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00526a82
    MOV ESP,EBP                         ; 00526a85
    POP EBP                             ; 00526a87
    POP EDI                             ; 00526a88
    POP ESI                             ; 00526a89
    POP EBX                             ; 00526a8a
    RET                                 ; 00526a8b
    CMP dword ptr [EBX + 0xbee8],0x0    ; 00526a8c
        ;   Label: LAB_00526a8c
    JNZ 0x005267ea                      ; 00526a93 | LAB_005267ea
        ;   XREF to: 005267ea (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbf8c],EAX    ; 00526a99
    MOV ESP,EBP                         ; 00526a9f
    POP EBP                             ; 00526aa1
    POP EDI                             ; 00526aa2
    POP ESI                             ; 00526aa3
    POP EBX                             ; 00526aa4
    RET                                 ; 00526aa5
    FLD float ptr [ESP + 0x54]          ; 00526aa6
        ;   Label: LAB_00526aa6
    FADD float ptr [0x006398f2]         ; 00526aaa | float FLOAT_006398f2
    JMP 0x005268c8                      ; 00526ab0 | LAB_005268c8
        ;   XREF to: 005268c8 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbf8c]        ; 00526ab5
        ;   Label: LAB_00526ab5
    FSUB float ptr [EBP + 0x18]         ; 00526abb
    FST float ptr [EBX + 0xbf8c]        ; 00526abe
    FLDZ                                ; 00526ac4
    FCOMPP                              ; 00526ac6
    FNSTSW AX                           ; 00526ac8
    SAHF                                ; 00526aca
    JBE 0x00526962                      ; 00526acb | LAB_00526962
        ;   XREF to: 00526962 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbf8c],0x0    ; 00526ad1
    JMP 0x00526962                      ; 00526adb | LAB_00526962
        ;   XREF to: 00526962 (UNCONDITIONAL_JUMP)
    PUSH 0x59ddb0                       ; 00526ae0
        ;   Label: LAB_00526ae0
    MOV EDX,dword ptr [0x02f37ef0]      ; 00526ae5 | undefined4 DAT_02f37ef0
    PUSH EDX                            ; 00526aeb
    PUSH dword ptr [EBX + 0xbf8c]       ; 00526aec
    PUSH 0x40c00000                     ; 00526af2
    PUSH 0x2                            ; 00526af7
    JMP 0x005269f1                      ; 00526af9 | LAB_005269f1
        ;   XREF to: 005269f1 (UNCONDITIONAL_JUMP)

