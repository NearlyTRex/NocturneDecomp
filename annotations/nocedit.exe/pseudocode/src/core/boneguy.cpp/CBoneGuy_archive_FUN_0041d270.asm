; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d270(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
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
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0
;   core_actor.cpp_archivePartStatus_FUN_0040bae0
;   core_actor.cpp_archiveQuaternion_FUN_0040b520
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_archiveVector_FUN_0040b340
;   core_enemy.cpp_CEnemy_archive_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d270
        ;   Label: core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270
    PUSH ESI                            ; 0041d271
    PUSH EDI                            ; 0041d272
    PUSH EBP                            ; 0041d273
    SUB ESP,0xc                         ; 0041d274
    MOV EDX,dword ptr [ESP + 0x20]      ; 0041d277
    PUSH EDX                            ; 0041d27b
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a9660 ; 0041d27c
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a9660(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041d281
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d284
    PUSH 0x61623d                       ; 0041d288 | = "speed"
    ADD EAX,0xbe24                      ; 0041d28d
    PUSH EAX                            ; 0041d292
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0041d293
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d298
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d29b
    PUSH 0x616243                       ; 0041d29f | = "modelName"
    ADD EAX,0x158                       ; 0041d2a4
    PUSH EAX                            ; 0041d2a9
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970 ; 0041d2aa
        ;   XREF to: 0040b970 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x0066e594]      ; 0041d2af | g_CBoneGuyClassVersion
    ADD ESP,0x8                         ; 0041d2b5
    CMP ECX,0x4                         ; 0041d2b8
    JL 0x0041d478                       ; 0041d2bb
        ;   XREF to: 0041d478 (CONDITIONAL_JUMP)  ; LAB_0041d478
    MOV EBX,dword ptr [ESP + 0x20]      ; 0041d2c1
        ;   Label: LAB_0041d2c1
    PUSH 0x61625b                       ; 0041d2c5 | = "motion state"
    ADD EBX,0x158                       ; 0041d2ca
    PUSH EBX                            ; 0041d2d0
    CALL core_actor.cpp_archiveMotionState_FUN_0040b9f0 ; 0041d2d1
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
    MOV ESI,dword ptr [0x0066e594]      ; 0041d2d6 | g_CBoneGuyClassVersion
    ADD ESP,0x8                         ; 0041d2dc
    CMP ESI,0x2                         ; 0041d2df
    JL 0x0041d460                       ; 0041d2e2
        ;   XREF to: 0041d460 (CONDITIONAL_JUMP)  ; LAB_0041d460
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d2e8
    PUSH 0x616268                       ; 0041d2ec | = "deathEvent"
    ADD EAX,0xbed0                      ; 0041d2f1
    PUSH EAX                            ; 0041d2f6
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0041d2f7
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041d2fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d2ff
    PUSH 0x616273                       ; 0041d303 | = "recombineTime"
    ADD EAX,0xbf34                      ; 0041d308
    PUSH EAX                            ; 0041d30d
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0041d30e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d313
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d316
    PUSH 0x616281                       ; 0041d31a | = "blownUp"
    ADD EAX,0xc4dc                      ; 0041d31f
    PUSH EAX                            ; 0041d324
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0041d325
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d32a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d32d
    PUSH 0x616289                       ; 0041d331 | = "param"
    ADD EAX,0xc4e0                      ; 0041d336
    PUSH EAX                            ; 0041d33b
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0041d33c
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d341
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d344
    PUSH 0x61628f                       ; 0041d348 | = "boxCount"
    ADD EAX,0xbf38                      ; 0041d34d
    PUSH EAX                            ; 0041d352
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0041d353
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d358
    PUSH 0x616298                       ; 0041d35b | = "partStatus"
    PUSH EBX                            ; 0041d360
    CALL core_actor.cpp_archivePartStatus_FUN_0040bae0 ; 0041d361
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d366
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d369
    MOV EDI,dword ptr [EAX + 0xbf38]    ; 0041d36d
    XOR EBX,EBX                         ; 0041d373
    TEST EDI,EDI                        ; 0041d375
    JLE 0x0041d460                      ; 0041d377
        ;   XREF to: 0041d460 (CONDITIONAL_JUMP)  ; LAB_0041d460
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
    PUSH 0x6162a3                       ; 0041d3c3 | = "boxListPos"
    ADD EAX,EDX                         ; 0041d3c8
    PUSH EAX                            ; 0041d3ca
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 0041d3cb
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d3d0
    PUSH 0x6162ae                       ; 0041d3d3 | = "boxListOrient"
    PUSH EBP                            ; 0041d3d8
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 0041d3d9
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d3de
    PUSH 0x6162bc                       ; 0041d3e1 | = "boxListDestOrient"
    PUSH EDI                            ; 0041d3e6
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b520 ; 0041d3e7
        ;   XREF to: 0040b520 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040b520(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 0041d3ec
    PUSH 0x6162ce                       ; 0041d3ef | = "boxListStartOrient"
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041d3f4
    PUSH ECX                            ; 0041d3f8
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b520 ; 0041d3f9
        ;   XREF to: 0040b520 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040b520(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 0041d3fe
    PUSH 0x6162e1                       ; 0041d401 | = "sourcePos"
    PUSH ESI                            ; 0041d406
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 0041d407
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d40c
    PUSH 0x6162eb                       ; 0041d40f | = "boxListPart"
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041d414
    INC EBX                             ; 0041d418
    PUSH EAX                            ; 0041d419
    ADD EBP,0x48                        ; 0041d41a
    ADD EDI,0x48                        ; 0041d41d
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 0041d420
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
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
    JL 0x0041d3bd                       ; 0041d44d
        ;   XREF to: 0041d3bd (CONDITIONAL_JUMP)  ; LAB_0041d3bd
    LEA EAX,[EAX]                       ; 0041d453
    LEA EDX,[EDX]                       ; 0041d459
    NOP                                 ; 0041d45f
    MOV ECX,dword ptr [0x0066e594]      ; 0041d460 | g_CBoneGuyClassVersion
        ;   Label: LAB_0041d460
    CMP ECX,0x3                         ; 0041d466
    JL 0x0041d470                       ; 0041d469
        ;   XREF to: 0041d470 (CONDITIONAL_JUMP)  ; LAB_0041d470
    CMP ECX,0x5                         ; 0041d46b
    JL 0x0041d494                       ; 0041d46e
        ;   XREF to: 0041d494 (CONDITIONAL_JUMP)  ; LAB_0041d494
    ADD ESP,0xc                         ; 0041d470
        ;   Label: LAB_0041d470
    POP EBP                             ; 0041d473
    POP EDI                             ; 0041d474
    POP ESI                             ; 0041d475
    POP EBX                             ; 0041d476
    RET                                 ; 0041d477
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d478
        ;   Label: LAB_0041d478
    PUSH 0x61624d                       ; 0041d47c | = "guardDistance"
    ADD EAX,0xbe34                      ; 0041d481
    PUSH EAX                            ; 0041d486
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0041d487
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d48c
    JMP 0x0041d2c1                      ; 0041d48f
        ;   XREF to: 0041d2c1 (UNCONDITIONAL_JUMP)  ; LAB_0041d2c1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d494
        ;   Label: LAB_0041d494
    PUSH 0x6162f7                       ; 0041d498 | = "victimHeight"
    ADD EAX,0xbeb0                      ; 0041d49d
    PUSH EAX                            ; 0041d4a2
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0041d4a3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041d4a8
    ADD ESP,0xc                         ; 0041d4ab
    POP EBP                             ; 0041d4ae
    POP EDI                             ; 0041d4af
    POP ESI                             ; 0041d4b0
    POP EBX                             ; 0041d4b1
    RET                                 ; 0041d4b2

