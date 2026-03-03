; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_00422060(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_boxactor.cpp_CLightActor_archive_FUN_00422c80 at 00422c8a
;   core_stone.cpp_CTempleStone_archive_FUN_005bad40 at 005bad45
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
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveBox_FUN_0040bd70
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_archiveVector_FUN_0040b340
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422060
        ;   Label: core_boxactor.cpp_CBoxActor_archive_FUN_00422060
    PUSH ESI                            ; 00422061
    SUB ESP,0x104                       ; 00422062
    MOV EBX,dword ptr [ESP + 0x110]     ; 00422068
    PUSH EBX                            ; 0042206f
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 00422070
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00422075
    PUSH 0x61665b                       ; 00422078 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0042207d
    PUSH EAX                            ; 00422083
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 00422084
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422089
    PUSH 0x616665                       ; 0042208c | = "weightInPounds"
    LEA EAX,[EBX + 0x390]               ; 00422091
    PUSH EAX                            ; 00422097
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 00422098
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042209d
    PUSH 0x616674                       ; 004220a0 | = "fps"
    LEA EAX,[EBX + 0x30c]               ; 004220a5
    PUSH EAX                            ; 004220ab
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004220ac
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004220b1
    PUSH 0x616678                       ; 004220b4 | = "rpm"
    LEA EAX,[EBX + 0x300]               ; 004220b9
    PUSH EAX                            ; 004220bf
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 004220c0
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004220c5
    PUSH 0x61667c                       ; 004220c8 | = "loopWavName"
    LEA EAX,[EBX + 0x2d4]               ; 004220cd
    PUSH EAX                            ; 004220d3
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004220d4
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004220d9
    PUSH 0x616688                       ; 004220dc | = "collisionWavName"
    LEA EAX,[EBX + 0x2e8]               ; 004220e1
    PUSH EAX                            ; 004220e7
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 004220e8
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x0066e604]      ; 004220ed | g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 004220f3
    CMP EDX,0x7                         ; 004220f6
    JL 0x004222ac                       ; 004220f9
        ;   XREF to: 004222ac (CONDITIONAL_JUMP)  ; LAB_004222ac
    PUSH 0x6166a6                       ; 004220ff | = "pickupType"
    LEA EAX,[EBX + 0x314]               ; 00422104
    PUSH EAX                            ; 0042210a
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0042210b
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422110
    PUSH 0x6166b1                       ; 00422113 | = "carriedByActor"
        ;   Label: LAB_00422113
    LEA EAX,[EBX + 0x318]               ; 00422118
    PUSH EAX                            ; 0042211e
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0042211f
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    MOV ESI,dword ptr [0x0066e604]      ; 00422124 | g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 0042212a
    CMP ESI,0x2                         ; 0042212d
    JL 0x0042215a                       ; 00422130
        ;   XREF to: 0042215a (CONDITIONAL_JUMP)  ; LAB_0042215a
    PUSH 0x6166c0                       ; 00422132 | = "canBePushed"
    LEA EAX,[EBX + 0x31c]               ; 00422137
    PUSH EAX                            ; 0042213d
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0042213e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422143
    PUSH 0x6166cc                       ; 00422146 | = "pushedByActor"
    LEA EAX,[EBX + 0x320]               ; 0042214b
    PUSH EAX                            ; 00422151
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 00422152
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422157
    CMP dword ptr [0x0066e604],0x3      ; 0042215a | g_CBoxActorClassVersion
        ;   Label: LAB_0042215a
    JL 0x00422177                       ; 00422161
        ;   XREF to: 00422177 (CONDITIONAL_JUMP)  ; LAB_00422177
    PUSH 0x6166da                       ; 00422163 | = "groundType"
    LEA EAX,[EBX + 0x5f0]               ; 00422168
    PUSH EAX                            ; 0042216e
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0042216f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422174
    CMP dword ptr [0x0066e604],0x4      ; 00422177 | g_CBoxActorClassVersion
        ;   Label: LAB_00422177
    JL 0x004222e6                       ; 0042217e
        ;   XREF to: 004222e6 (CONDITIONAL_JUMP)  ; LAB_004222e6
    PUSH 0x6166e5                       ; 00422184 | = "simBox"
    LEA EAX,[EBX + 0x394]               ; 00422189
    PUSH EAX                            ; 0042218f
    CALL core_actor.cpp_archiveBox_FUN_0040bd70 ; 00422190
        ;   XREF to: 0040bd70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveBox_FUN_0040bd70(CBox * box_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422195
    CMP dword ptr [0x0066e604],0x5      ; 00422198 | g_CBoxActorClassVersion
        ;   Label: LAB_00422198
    JL 0x004222f5                       ; 0042219f
        ;   XREF to: 004222f5 (CONDITIONAL_JUMP)  ; LAB_004222f5
    PUSH 0x6166ec                       ; 004221a5 | = "plotInShadowFlag"
    LEA EAX,[EBX + 0x5f4]               ; 004221aa
    PUSH EAX                            ; 004221b0
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004221b1
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004221b6
    CMP dword ptr [0x0066e604],0x6      ; 004221b9 | g_CBoxActorClassVersion
        ;   Label: LAB_004221b9
    JL 0x00422304                       ; 004221c0
        ;   XREF to: 00422304 (CONDITIONAL_JUMP)  ; LAB_00422304
    PUSH 0x6166fd                       ; 004221c6 | = "collisionFlag"
    LEA EAX,[EBX + 0x5f8]               ; 004221cb
    PUSH EAX                            ; 004221d1
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004221d2
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004221d7
    CMP dword ptr [0x0066e604],0x8      ; 004221da | g_CBoxActorClassVersion
        ;   Label: LAB_004221da
    JL 0x0042220b                       ; 004221e1
        ;   XREF to: 0042220b (CONDITIONAL_JUMP)  ; LAB_0042220b
    PUSH 0x61670b                       ; 004221e3 | = "isTransparent"
    LEA EAX,[EBX + 0xfc]                ; 004221e8
    PUSH EAX                            ; 004221ee
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004221ef
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004221f4
    PUSH 0x616719                       ; 004221f7 | = "dontUseNormals"
    LEA EAX,[EBX + 0x5fc]               ; 004221fc
    PUSH EAX                            ; 00422202
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00422203
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422208
    CMP dword ptr [0x0066e604],0x9      ; 0042220b | g_CBoxActorClassVersion
        ;   Label: LAB_0042220b
    JNZ 0x00422226                      ; 00422212
        ;   XREF to: 00422226 (CONDITIONAL_JUMP)  ; LAB_00422226
    PUSH 0x616728                       ; 00422214 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 00422219
    PUSH EAX                            ; 0042221d
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0042221e
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00422223
    CMP dword ptr [0x0066e604],0xb      ; 00422226 | g_CBoxActorClassVersion
        ;   Label: LAB_00422226
    JL 0x00422243                       ; 0042222d
        ;   XREF to: 00422243 (CONDITIONAL_JUMP)  ; LAB_00422243
    PUSH 0x616738                       ; 0042222f | = "constrainExtentsActor"
    LEA EAX,[EBX + 0x324]               ; 00422234
    PUSH EAX                            ; 0042223a
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0042223b
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422240
    CMP dword ptr [0x0066e604],0xc      ; 00422243 | g_CBoxActorClassVersion
        ;   Label: LAB_00422243
    JL 0x00422260                       ; 0042224a
        ;   XREF to: 00422260 (CONDITIONAL_JUMP)  ; LAB_00422260
    PUSH 0x61674e                       ; 0042224c | = "useEvent"
    LEA EAX,[EBX + 0x600]               ; 00422251
    PUSH EAX                            ; 00422257
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00422258
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0042225d
    CMP dword ptr [0x0066e604],0xd      ; 00422260 | g_CBoxActorClassVersion
        ;   Label: LAB_00422260
    JL 0x0042227d                       ; 00422267
        ;   XREF to: 0042227d (CONDITIONAL_JUMP)  ; LAB_0042227d
    PUSH 0x616757                       ; 00422269 | = "allowedMeleeAttackTypes"
    LEA EAX,[EBX + 0x664]               ; 0042226e
    PUSH EAX                            ; 00422274
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00422275
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042227a
    CMP dword ptr [0x0066e604],0xe      ; 0042227d | g_CBoxActorClassVersion
        ;   Label: LAB_0042227d
    JL 0x0042229a                       ; 00422284
        ;   XREF to: 0042229a (CONDITIONAL_JUMP)  ; LAB_0042229a
    PUSH 0x61676f                       ; 00422286 | = "pushSound"
    LEA EAX,[EBX + 0x32c]               ; 0042228b
    PUSH EAX                            ; 00422291
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00422292
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00422297
    CMP dword ptr [0x0066e604],0xf      ; 0042229a | g_CBoxActorClassVersion
        ;   Label: LAB_0042229a
    JGE 0x00422313                      ; 004222a1
        ;   XREF to: 00422313 (CONDITIONAL_JUMP)  ; LAB_00422313
    ADD ESP,0x104                       ; 004222a3
    POP ESI                             ; 004222a9
    POP EBX                             ; 004222aa
    RET                                 ; 004222ab
    PUSH 0x616699                       ; 004222ac | = "canBeCarried"
        ;   Label: LAB_004222ac
    LEA EAX,[ESP + 0x104]               ; 004222b1
    PUSH EAX                            ; 004222b8
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004222b9
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004222be
    MOV ECX,dword ptr [ESP + 0x100]     ; 004222c1
    TEST ECX,ECX                        ; 004222c8
    JZ 0x004222db                       ; 004222ca
        ;   XREF to: 004222db (CONDITIONAL_JUMP)  ; LAB_004222db
    MOV dword ptr [EBX + 0x314],0x3     ; 004222cc
    JMP 0x00422113                      ; 004222d6
        ;   XREF to: 00422113 (UNCONDITIONAL_JUMP)  ; LAB_00422113
    MOV dword ptr [EBX + 0x314],ECX     ; 004222db
        ;   Label: LAB_004222db
    JMP 0x00422113                      ; 004222e1
        ;   XREF to: 00422113 (UNCONDITIONAL_JUMP)  ; LAB_00422113
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 004222e6
        ;   Label: LAB_004222e6
    JMP 0x00422198                      ; 004222f0
        ;   XREF to: 00422198 (UNCONDITIONAL_JUMP)  ; LAB_00422198
    MOV dword ptr [EBX + 0x5f4],0x1     ; 004222f5
        ;   Label: LAB_004222f5
    JMP 0x004221b9                      ; 004222ff
        ;   XREF to: 004221b9 (UNCONDITIONAL_JUMP)  ; LAB_004221b9
    MOV dword ptr [EBX + 0x5f8],0x1     ; 00422304
        ;   Label: LAB_00422304
    JMP 0x004221da                      ; 0042230e
        ;   XREF to: 004221da (UNCONDITIONAL_JUMP)  ; LAB_004221da
    PUSH 0x616779                       ; 00422313 | = "blockVirtualDirectorFlag"
        ;   Label: LAB_00422313
    ADD EBX,0x668                       ; 00422318
    PUSH EBX                            ; 0042231e
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0042231f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422324
    ADD ESP,0x104                       ; 00422327
    POP ESI                             ; 0042232d
    POP EBX                             ; 0042232e
    RET                                 ; 0042232f

