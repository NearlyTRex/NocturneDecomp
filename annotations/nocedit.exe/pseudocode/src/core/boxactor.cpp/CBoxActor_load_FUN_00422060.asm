; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_CBoxActor_load_FUN_00422060()
;
; Local Variables:
; undefined1       Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_boxactor.cpp_load_FUN_00422c80 at 00422c8a
;   core_stone.cpp_FUN_005bad40 at 005bad45
;
; Referenced Globals:
;   TerminatedCString s_modelName_0061665b
;   TerminatedCString s_weightInPounds_00616665
;   TerminatedCString s_fps_00616674
;   TerminatedCString s_rpm_00616678
;   TerminatedCString s_loopWavName_0061667c
;   TerminatedCString s_collisionWavName_00616688
;   TerminatedCString s_canBeCarried_00616699
;   TerminatedCString s_pickupType_006166a6
;   TerminatedCString s_carriedByActor_006166b1
;   TerminatedCString s_canBePushed_006166c0
;   TerminatedCString s_pushedByActor_006166cc
;   TerminatedCString s_groundType_006166da
;   TerminatedCString s_simBox_006166e5
;   TerminatedCString s_plotInShadowFlag_006166ec
;   TerminatedCString s_collisionFlag_006166fd
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeSimBox_FUN_0040bd70
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422060
        ;   Label: core_boxactor.cpp_CBoxActor_load_FUN_00422060
    PUSH ESI                            ; 00422061
    SUB ESP,0x104                       ; 00422062
    MOV EBX,dword ptr [ESP + 0x110]     ; 00422068
    PUSH EBX                            ; 0042206f
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00422070 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00422075
    PUSH 0x61665b                       ; 00422078 | = "modelName" | s_modelName_0061665b = modelName
    LEA EAX,[EBX + 0x158]               ; 0042207d
    PUSH EAX                            ; 00422083
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 00422084 | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422089
    PUSH 0x616665                       ; 0042208c | = "weightInPounds" | s_weightInPounds_00616665 = weightInPounds
    LEA EAX,[EBX + 0x390]               ; 00422091
    PUSH EAX                            ; 00422097
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00422098 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0042209d
    PUSH 0x616674                       ; 004220a0 | = "fps" | s_fps_00616674 = fps
    LEA EAX,[EBX + 0x30c]               ; 004220a5
    PUSH EAX                            ; 004220ab
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004220ac | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004220b1
    PUSH 0x616678                       ; 004220b4 | = "rpm" | s_rpm_00616678 = rpm
    LEA EAX,[EBX + 0x300]               ; 004220b9
    PUSH EAX                            ; 004220bf
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 004220c0 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004220c5
    PUSH 0x61667c                       ; 004220c8 | = "loopWavName" | s_loopWavName_0061667c = loopWavName
    LEA EAX,[EBX + 0x2d4]               ; 004220cd
    PUSH EAX                            ; 004220d3
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004220d4 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004220d9
    PUSH 0x616688                       ; 004220dc | = "collisionWavName" | s_collisionWavName_00616688 = collisionWavName
    LEA EAX,[EBX + 0x2e8]               ; 004220e1
    PUSH EAX                            ; 004220e7
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004220e8 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0066e604]      ; 004220ed | int g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 004220f3
    CMP EDX,0x7                         ; 004220f6
    JL 0x004222ac                       ; 004220f9 | LAB_004222ac
        ;   XREF to: 004222ac (CONDITIONAL_JUMP)
    PUSH 0x6166a6                       ; 004220ff | = "pickupType" | s_pickupType_006166a6 = pickupType
    LEA EAX,[EBX + 0x314]               ; 00422104
    PUSH EAX                            ; 0042210a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0042210b | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422110
    PUSH 0x6166b1                       ; 00422113 | = "carriedByActor" | s_carriedByActor_006166b1 = carriedByActor
        ;   Label: LAB_00422113
    LEA EAX,[EBX + 0x318]               ; 00422118
    PUSH EAX                            ; 0042211e
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 0042211f | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x0066e604]      ; 00422124 | int g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 0042212a
    CMP ESI,0x2                         ; 0042212d
    JL 0x0042215a                       ; 00422130 | LAB_0042215a
        ;   XREF to: 0042215a (CONDITIONAL_JUMP)
    PUSH 0x6166c0                       ; 00422132 | = "canBePushed" | s_canBePushed_006166c0 = canBePushed
    LEA EAX,[EBX + 0x31c]               ; 00422137
    PUSH EAX                            ; 0042213d
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0042213e | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422143
    PUSH 0x6166cc                       ; 00422146 | = "pushedByActor" | s_pushedByActor_006166cc = pushedByActor
    LEA EAX,[EBX + 0x320]               ; 0042214b
    PUSH EAX                            ; 00422151
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 00422152 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422157
    CMP dword ptr [0x0066e604],0x3      ; 0042215a | int g_CBoxActorClassVersion
        ;   Label: LAB_0042215a
    JL 0x00422177                       ; 00422161 | LAB_00422177
        ;   XREF to: 00422177 (CONDITIONAL_JUMP)
    PUSH 0x6166da                       ; 00422163 | = "groundType" | s_groundType_006166da = groundType
    LEA EAX,[EBX + 0x5f0]               ; 00422168
    PUSH EAX                            ; 0042216e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0042216f | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422174
    CMP dword ptr [0x0066e604],0x4      ; 00422177 | int g_CBoxActorClassVersion
        ;   Label: LAB_00422177
    JL 0x004222e6                       ; 0042217e | LAB_004222e6
        ;   XREF to: 004222e6 (CONDITIONAL_JUMP)
    PUSH 0x6166e5                       ; 00422184 | = "simBox" | s_simBox_006166e5 = simBox
    LEA EAX,[EBX + 0x394]               ; 00422189
    PUSH EAX                            ; 0042218f
    CALL core_actor.cpp_serializeSimBox_FUN_0040bd70 ; 00422190 | void core_actor.cpp_serializeSimBox_FUN_0040bd70(CSimBox * simbox_ptr, char * property_name)
        ;   XREF to: 0040bd70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422195
    CMP dword ptr [0x0066e604],0x5      ; 00422198 | int g_CBoxActorClassVersion
        ;   Label: LAB_00422198
    JL 0x004222f5                       ; 0042219f | LAB_004222f5
        ;   XREF to: 004222f5 (CONDITIONAL_JUMP)
    PUSH 0x6166ec                       ; 004221a5 | = "plotInShadowFlag" | s_plotInShadowFlag_006166ec = plotInShadowFlag
    LEA EAX,[EBX + 0x5f4]               ; 004221aa
    PUSH EAX                            ; 004221b0
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004221b1 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004221b6
    CMP dword ptr [0x0066e604],0x6      ; 004221b9 | int g_CBoxActorClassVersion
        ;   Label: LAB_004221b9
    JL 0x00422304                       ; 004221c0 | LAB_00422304
        ;   XREF to: 00422304 (CONDITIONAL_JUMP)
    PUSH 0x6166fd                       ; 004221c6 | = "collisionFlag" | s_collisionFlag_006166fd = collisionFlag
    LEA EAX,[EBX + 0x5f8]               ; 004221cb
    PUSH EAX                            ; 004221d1
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004221d2 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004221d7
    CMP dword ptr [0x0066e604],0x8      ; 004221da | int g_CBoxActorClassVersion
        ;   Label: LAB_004221da
    JL 0x0042220b                       ; 004221e1 | LAB_0042220b
        ;   XREF to: 0042220b (CONDITIONAL_JUMP)
    PUSH 0x61670b                       ; 004221e3 | = "isTransparent" | s_isTransparent_0061670b = isTransparent
    LEA EAX,[EBX + 0xfc]                ; 004221e8
    PUSH EAX                            ; 004221ee
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004221ef | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004221f4
    PUSH 0x616719                       ; 004221f7 | = "dontUseNormals" | s_dontUseNormals_00616719 = dontUseNormals
    LEA EAX,[EBX + 0x5fc]               ; 004221fc
    PUSH EAX                            ; 00422202
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00422203 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422208
    CMP dword ptr [0x0066e604],0x9      ; 0042220b | int g_CBoxActorClassVersion
        ;   Label: LAB_0042220b
    JNZ 0x00422226                      ; 00422212 | LAB_00422226
        ;   XREF to: 00422226 (CONDITIONAL_JUMP)
    PUSH 0x616728                       ; 00422214 | = "descriptiveName" | s_descriptiveName_00616728 = descriptiveName
    LEA EAX,[ESP + 0x4]                 ; 00422219
    PUSH EAX                            ; 0042221d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0042221e | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422223
    CMP dword ptr [0x0066e604],0xb      ; 00422226 | int g_CBoxActorClassVersion
        ;   Label: LAB_00422226
    JL 0x00422243                       ; 0042222d | LAB_00422243
        ;   XREF to: 00422243 (CONDITIONAL_JUMP)
    PUSH 0x616738                       ; 0042222f | = "constrainExtentsActor" | s_constrainExtentsActor_00616738 = constrainExtentsActor
    LEA EAX,[EBX + 0x324]               ; 00422234
    PUSH EAX                            ; 0042223a
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 0042223b | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422240
    CMP dword ptr [0x0066e604],0xc      ; 00422243 | int g_CBoxActorClassVersion
        ;   Label: LAB_00422243
    JL 0x00422260                       ; 0042224a | LAB_00422260
        ;   XREF to: 00422260 (CONDITIONAL_JUMP)
    PUSH 0x61674e                       ; 0042224c | = "useEvent" | s_useEvent_0061674e = useEvent
    LEA EAX,[EBX + 0x600]               ; 00422251
    PUSH EAX                            ; 00422257
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00422258 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0042225d
    CMP dword ptr [0x0066e604],0xd      ; 00422260 | int g_CBoxActorClassVersion
        ;   Label: LAB_00422260
    JL 0x0042227d                       ; 00422267 | LAB_0042227d
        ;   XREF to: 0042227d (CONDITIONAL_JUMP)
    PUSH 0x616757                       ; 00422269 | = "allowedMeleeAttackTypes" | s_allowedMeleeAttackTypes_00616757 = allowedMeleeAttackTypes
    LEA EAX,[EBX + 0x664]               ; 0042226e
    PUSH EAX                            ; 00422274
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00422275 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0042227a
    CMP dword ptr [0x0066e604],0xe      ; 0042227d | int g_CBoxActorClassVersion
        ;   Label: LAB_0042227d
    JL 0x0042229a                       ; 00422284 | LAB_0042229a
        ;   XREF to: 0042229a (CONDITIONAL_JUMP)
    PUSH 0x61676f                       ; 00422286 | = "pushSound" | s_pushSound_0061676f = pushSound
    LEA EAX,[EBX + 0x32c]               ; 0042228b
    PUSH EAX                            ; 00422291
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00422292 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422297
    CMP dword ptr [0x0066e604],0xf      ; 0042229a | int g_CBoxActorClassVersion
        ;   Label: LAB_0042229a
    JGE 0x00422313                      ; 004222a1 | LAB_00422313
        ;   XREF to: 00422313 (CONDITIONAL_JUMP)
    ADD ESP,0x104                       ; 004222a3
    POP ESI                             ; 004222a9
    POP EBX                             ; 004222aa
    RET                                 ; 004222ab
    PUSH 0x616699                       ; 004222ac | = "canBeCarried" | s_canBeCarried_00616699 = canBeCarried
        ;   Label: LAB_004222ac
    LEA EAX,[ESP + 0x104]               ; 004222b1
    PUSH EAX                            ; 004222b8
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004222b9 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004222be
    MOV ECX,dword ptr [ESP + 0x100]     ; 004222c1
    TEST ECX,ECX                        ; 004222c8
    JZ 0x004222db                       ; 004222ca | LAB_004222db
        ;   XREF to: 004222db (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x314],0x3     ; 004222cc
    JMP 0x00422113                      ; 004222d6 | LAB_00422113
        ;   XREF to: 00422113 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x314],ECX     ; 004222db
        ;   Label: LAB_004222db
    JMP 0x00422113                      ; 004222e1 | LAB_00422113
        ;   XREF to: 00422113 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 004222e6
        ;   Label: LAB_004222e6
    JMP 0x00422198                      ; 004222f0 | LAB_00422198
        ;   XREF to: 00422198 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x5f4],0x1     ; 004222f5
        ;   Label: LAB_004222f5
    JMP 0x004221b9                      ; 004222ff | LAB_004221b9
        ;   XREF to: 004221b9 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x5f8],0x1     ; 00422304
        ;   Label: LAB_00422304
    JMP 0x004221da                      ; 0042230e | LAB_004221da
        ;   XREF to: 004221da (UNCONDITIONAL_JUMP)
    PUSH 0x616779                       ; 00422313 | = "blockVirtualDirectorFlag" | s_blockVirtualDirectorFlag_00616779 = blockVirtualDirectorFlag
        ;   Label: LAB_00422313
    ADD EBX,0x668                       ; 00422318
    PUSH EBX                            ; 0042231e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0042231f | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422324
    ADD ESP,0x104                       ; 00422327
    POP ESI                             ; 0042232d
    POP EBX                             ; 0042232e
    RET                                 ; 0042232f

