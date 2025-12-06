; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_CBoneGuy_load_FUN_0041d270()
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_speed_0061623d
;   TerminatedCString s_modelName_00616243
;   TerminatedCString s_guardDistance_0061624d
;   TerminatedCString s_motion_state_0061625b
;   TerminatedCString s_deathEvent_00616268
;   TerminatedCString s_recombineTime_00616273
;   TerminatedCString s_blownUp_00616281
;   TerminatedCString s_param_00616289
;   TerminatedCString s_boxCount_0061628f
;   TerminatedCString s_partStatus_00616298
;   TerminatedCString s_boxListPos_006162a3
;   TerminatedCString s_boxListOrient_006162ae
;   TerminatedCString s_boxListDestOrient_006162bc
;   TerminatedCString s_boxListStartOrient_006162ce
;   TerminatedCString s_sourcePos_006162e1
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_actor.cpp_serializePartStatus_FUN_0040bae0
;   core_actor.cpp_serializeQuaternion_FUN_0040b520
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d270
        ;   Label: core_boneguy.cpp_CBoneGuy_load_FUN_0041d270
    PUSH ESI                            ; 0041d271
    PUSH EDI                            ; 0041d272
    PUSH EBP                            ; 0041d273
    SUB ESP,0xc                         ; 0041d274
    MOV EDX,dword ptr [ESP + 0x20]      ; 0041d277
    PUSH EDX                            ; 0041d27b
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 0041d27c | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041d281
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d284
    PUSH 0x61623d                       ; 0041d288 | = "speed" | s_speed_0061623d = speed
    ADD EAX,0xbe24                      ; 0041d28d
    PUSH EAX                            ; 0041d292
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041d293 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d298
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d29b
    PUSH 0x616243                       ; 0041d29f | = "modelName" | s_modelName_00616243 = modelName
    ADD EAX,0x158                       ; 0041d2a4
    PUSH EAX                            ; 0041d2a9
    CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 ; 0041d2aa | void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0066e594]      ; 0041d2af | undefined4 g_CBoneGuyClassVersion
    ADD ESP,0x8                         ; 0041d2b5
    CMP ECX,0x4                         ; 0041d2b8
    JL 0x0041d478                       ; 0041d2bb | LAB_0041d478
        ;   XREF to: 0041d478 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x20]      ; 0041d2c1
        ;   Label: LAB_0041d2c1
    PUSH 0x61625b                       ; 0041d2c5 | = "motion state" | s_motion_state_0061625b = motion state
    ADD EBX,0x158                       ; 0041d2ca
    PUSH EBX                            ; 0041d2d0
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 0041d2d1 | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x0066e594]      ; 0041d2d6 | undefined4 g_CBoneGuyClassVersion
    ADD ESP,0x8                         ; 0041d2dc
    CMP ESI,0x2                         ; 0041d2df
    JL 0x0041d460                       ; 0041d2e2 | LAB_0041d460
        ;   XREF to: 0041d460 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d2e8
    PUSH 0x616268                       ; 0041d2ec | = "deathEvent" | s_deathEvent_00616268 = deathEvent
    ADD EAX,0xbed0                      ; 0041d2f1
    PUSH EAX                            ; 0041d2f6
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0041d2f7 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d2fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d2ff
    PUSH 0x616273                       ; 0041d303 | = "recombineTime" | s_recombineTime_00616273 = recombineTime
    ADD EAX,0xbf34                      ; 0041d308
    PUSH EAX                            ; 0041d30d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041d30e | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d313
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d316
    PUSH 0x616281                       ; 0041d31a | = "blownUp" | s_blownUp_00616281 = blownUp
    ADD EAX,0xc4dc                      ; 0041d31f
    PUSH EAX                            ; 0041d324
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0041d325 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d32a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d32d
    PUSH 0x616289                       ; 0041d331 | = "param" | s_param_00616289 = param
    ADD EAX,0xc4e0                      ; 0041d336
    PUSH EAX                            ; 0041d33b
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041d33c | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d341
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d344
    PUSH 0x61628f                       ; 0041d348 | = "boxCount" | s_boxCount_0061628f = boxCount
    ADD EAX,0xbf38                      ; 0041d34d
    PUSH EAX                            ; 0041d352
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0041d353 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d358
    PUSH 0x616298                       ; 0041d35b | = "partStatus" | s_partStatus_00616298 = partStatus
    PUSH EBX                            ; 0041d360
    CALL core_actor.cpp_serializePartStatus_FUN_0040bae0 ; 0041d361 | void core_actor.cpp_serializePartStatus_FUN_0040bae0(void * part, char * property_name)
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d366
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d369
    MOV EDI,dword ptr [EAX + 0xbf38]    ; 0041d36d
    XOR EBX,EBX                         ; 0041d373
    TEST EDI,EDI                        ; 0041d375
    JLE 0x0041d460                      ; 0041d377 | LAB_0041d460
        ;   XREF to: 0041d460 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041d37d
    ADD EAX,0xbf3c                      ; 0041d381
    MOV EDI,dword ptr [ESP + 0x20]      ; 0041d386
    MOV dword ptr [ESP],EAX             ; 0041d38a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d38d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0041d391
    ADD EAX,0xbf80                      ; 0041d395
    ADD ESI,0xbf74                      ; 0041d39a
    MOV dword ptr [ESP + 0x8],EAX       ; 0041d3a0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d3a4
    ADD EDI,0xbf54                      ; 0041d3a8
    ADD EAX,0xbf64                      ; 0041d3ae
    ADD EBP,0xbf48                      ; 0041d3b3
    MOV dword ptr [ESP + 0x4],EAX       ; 0041d3b9
    IMUL EAX,EBX,0x48                   ; 0041d3bd
        ;   Label: LAB_0041d3bd
    MOV EDX,dword ptr [ESP]             ; 0041d3c0
    PUSH 0x6162a3                       ; 0041d3c3 | = "boxListPos" | s_boxListPos_006162a3 = boxListPos
    ADD EAX,EDX                         ; 0041d3c8
    PUSH EAX                            ; 0041d3ca
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0041d3cb | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d3d0
    PUSH 0x6162ae                       ; 0041d3d3 | = "boxListOrient" | s_boxListOrient_006162ae = boxListOrient
    PUSH EBP                            ; 0041d3d8
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0041d3d9 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d3de
    PUSH 0x6162bc                       ; 0041d3e1 | = "boxListDestOrient" | s_boxListDestOrient_006162bc = boxListDestOrient
    PUSH EDI                            ; 0041d3e6
    CALL core_actor.cpp_serializeQuaternion_FUN_0040b520 ; 0041d3e7 | void core_actor.cpp_serializeQuaternion_FUN_0040b520(CQuaternion4f * quat_ptr, char * property_type)
        ;   XREF to: 0040b520 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d3ec
    PUSH 0x6162ce                       ; 0041d3ef | = "boxListStartOrient" | s_boxListStartOrient_006162ce = boxListStartOrient
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041d3f4
    PUSH ECX                            ; 0041d3f8
    CALL core_actor.cpp_serializeQuaternion_FUN_0040b520 ; 0041d3f9 | void core_actor.cpp_serializeQuaternion_FUN_0040b520(CQuaternion4f * quat_ptr, char * property_type)
        ;   XREF to: 0040b520 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d3fe
    PUSH 0x6162e1                       ; 0041d401 | = "sourcePos" | s_sourcePos_006162e1 = sourcePos
    PUSH ESI                            ; 0041d406
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0041d407 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d40c
    PUSH 0x6162eb                       ; 0041d40f | = "boxListPart" | s_boxListPart_006162eb = boxListPart
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041d414
    INC EBX                             ; 0041d418
    PUSH EAX                            ; 0041d419
    ADD EBP,0x48                        ; 0041d41a
    ADD EDI,0x48                        ; 0041d41d
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 0041d420 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d425
    ADD ESI,0x48                        ; 0041d428
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041d42b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041d42f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d433
    ADD EDX,0x48                        ; 0041d437
    ADD ECX,0x48                        ; 0041d43a
    MOV dword ptr [ESP + 0x8],EDX       ; 0041d43d
    MOV EDX,dword ptr [EAX + 0xbf38]    ; 0041d441
    MOV dword ptr [ESP + 0x4],ECX       ; 0041d447
    CMP EBX,EDX                         ; 0041d44b
    JL 0x0041d3bd                       ; 0041d44d | LAB_0041d3bd
        ;   XREF to: 0041d3bd (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0041d453
    LEA EDX,[EDX]                       ; 0041d459
    NOP                                 ; 0041d45f
    MOV ECX,dword ptr [0x0066e594]      ; 0041d460 | undefined4 g_CBoneGuyClassVersion
        ;   Label: LAB_0041d460
    CMP ECX,0x3                         ; 0041d466
    JL 0x0041d470                       ; 0041d469 | LAB_0041d470
        ;   XREF to: 0041d470 (CONDITIONAL_JUMP)
    CMP ECX,0x5                         ; 0041d46b
    JL 0x0041d494                       ; 0041d46e | LAB_0041d494
        ;   XREF to: 0041d494 (CONDITIONAL_JUMP)
    ADD ESP,0xc                         ; 0041d470
        ;   Label: LAB_0041d470
    POP EBP                             ; 0041d473
    POP EDI                             ; 0041d474
    POP ESI                             ; 0041d475
    POP EBX                             ; 0041d476
    RET                                 ; 0041d477
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d478
        ;   Label: LAB_0041d478
    PUSH 0x61624d                       ; 0041d47c | = "guardDistance" | s_guardDistance_0061624d = guardDistance
    ADD EAX,0xbe34                      ; 0041d481
    PUSH EAX                            ; 0041d486
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041d487 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d48c
    JMP 0x0041d2c1                      ; 0041d48f | LAB_0041d2c1
        ;   XREF to: 0041d2c1 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d494
        ;   Label: LAB_0041d494
    PUSH 0x6162f7                       ; 0041d498 | = "victimHeight" | s_victimHeight_006162f7 = victimHeight
    ADD EAX,0xbeb0                      ; 0041d49d
    PUSH EAX                            ; 0041d4a2
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041d4a3 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041d4a8
    ADD ESP,0xc                         ; 0041d4ab
    POP EBP                             ; 0041d4ae
    POP EDI                             ; 0041d4af
    POP ESI                             ; 0041d4b0
    POP EBX                             ; 0041d4b1
    RET                                 ; 0041d4b2

