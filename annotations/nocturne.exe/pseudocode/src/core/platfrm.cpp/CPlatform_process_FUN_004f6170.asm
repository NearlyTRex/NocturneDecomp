; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_process_FUN_004f6170(CPlatform *this_ptr,float delta_time)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x334]:4  local_334
; undefined        Stack[-0x324]:1  local_324
; undefined1       Stack[-0x323]:1  local_323
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
;
; XREF[1]:
;   core_minecar.cpp_CMineCar_process_FUN_004d6040 at 004d604a
;
; Referenced Globals:
;   undefined1* switchdataD_004f6150 = 004f61c1
;   double DOUBLE_0058d76d = -20
;   double DOUBLE_0058d775 = 10
;   double DOUBLE_0058d77d = 0.0500000000000000
;   undefined4 DAT_005b7650
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;   undefined4 g_CDemonSet_01e57284.actors[1]
;   undefined4 g_CDemonSet_01e57284.character_count
;   undefined4 g_CDemonSet_01e57284.characters[0]
;   undefined4 g_CDemonSet_01e57284.selected_camera_index
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0
;   core_platfrm.cpp_CPlatform_FUN_004f7360
;   core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0
;   core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_004f7700
;   core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
;   core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
;   core_sound.cpp_CSound_killSound_FUN_0052ebb0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6170
        ;   Label: core_platfrm.cpp_CPlatform_process_FUN_004f6170
    PUSH ESI                            ; 004f6171
    PUSH EDI                            ; 004f6172
    PUSH EBP                            ; 004f6173
    MOV EBP,ESP                         ; 004f6174
    SUB ESP,0x31c                       ; 004f6176
    AND ESP,0xfffffff8                  ; 004f617c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f617f
    CMP dword ptr [EAX + 0x4b8],0x2     ; 004f6182
    JGE 0x004f6bc1                      ; 004f6189
        ;   XREF to: 004f6bc1 (CONDITIONAL_JUMP)  ; LAB_004f6bc1
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 004f618f
    XOR EBX,EBX                         ; 004f6195
    MOV dword ptr [ESP + 0x2fc],EAX     ; 004f6197
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f619e
    MOV dword ptr [ESP + 0x300],EBX     ; 004f61a1
    MOV EAX,dword ptr [EAX + 0x2cc]     ; 004f61a8
    MOV dword ptr [ESP + 0x304],EBX     ; 004f61ae
    CMP EAX,0x4                         ; 004f61b5
    JA 0x004f620f                       ; 004f61b8
        ;   XREF to: 004f620f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f6150]  ; 004f61ba | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f61c1
        ;   Label: caseD_0
    ADD EAX,0x3b0                       ; 004f61c4
    PUSH EAX                            ; 004f61c9
    MOV EAX,[0x005b7650]                ; 004f61ca | DAT_005b7650
    PUSH EAX                            ; 004f61cf
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f61d0
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f61d5
    TEST EAX,EAX                        ; 004f61d8
    JZ 0x004f6202                       ; 004f61da
        ;   XREF to: 004f6202 (CONDITIONAL_JUMP)  ; LAB_004f6202
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f61dc
    FLD float ptr [EAX + 0x2e0]         ; 004f61df
    FLD1                                ; 004f61e5
    FDIVRP                              ; 004f61e7
    SUB ESP,0x4                         ; 004f61e9
    FSTP float ptr [ESP]                ; 004f61ec
    PUSH 0x3f800000                     ; 004f61ef
    PUSH EAX                            ; 004f61f4
    MOV EBX,0x1                         ; 004f61f5
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0 ; 004f61fa
        ;   XREF to: 004f6bd0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 004f61ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6202
        ;   Label: LAB_004f6202
    MOV dword ptr [EAX + 0x2d4],0x0     ; 004f6205
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f620f
        ;   Label: default
    CMP dword ptr [EAX + 0x4c0],0x0     ; 004f6212
    JZ 0x004f6309                       ; 004f6219
        ;   XREF to: 004f6309 (CONDITIONAL_JUMP)  ; LAB_004f6309
    TEST EBX,EBX                        ; 004f621f
    JZ 0x004f62f0                       ; 004f6221
        ;   XREF to: 004f62f0 (CONDITIONAL_JUMP)  ; LAB_004f62f0
    LEA EDI,[ESP + 0xc]                 ; 004f6227
    LEA ESI,[EAX + 0x4c4]               ; 004f622b
    LEA EBX,[ESP + 0xc]                 ; 004f6231
    PUSH EDI                            ; 004f6235
    MOV AL,byte ptr [ESI]               ; 004f6236
        ;   Label: LAB_004f6236
    MOV byte ptr [EDI],AL               ; 004f6238
    CMP AL,0x0                          ; 004f623a
    JZ 0x004f624e                       ; 004f623c
        ;   XREF to: 004f624e (CONDITIONAL_JUMP)  ; LAB_004f624e
    MOV AL,byte ptr [ESI + 0x1]         ; 004f623e
    ADD ESI,0x2                         ; 004f6241
    MOV byte ptr [EDI + 0x1],AL         ; 004f6244
    ADD EDI,0x2                         ; 004f6247
    CMP AL,0x0                          ; 004f624a
    JNZ 0x004f6236                      ; 004f624c
        ;   XREF to: 004f6236 (CONDITIONAL_JUMP)  ; LAB_004f6236
    POP EDI                             ; 004f624e
        ;   Label: LAB_004f624e
    MOV CL,byte ptr [ESP + 0xc]         ; 004f624f
    LEA ESI,[ESP + 0xc]                 ; 004f6253
    TEST CL,CL                          ; 004f6257
    JZ 0x004f62b0                       ; 004f6259
        ;   XREF to: 004f62b0 (CONDITIONAL_JUMP)  ; LAB_004f62b0
    CMP byte ptr [EBX],0x3b             ; 004f625b
        ;   Label: LAB_004f625b
    JNZ 0x004f66cb                      ; 004f625e
        ;   XREF to: 004f66cb (CONDITIONAL_JUMP)  ; LAB_004f66cb
    PUSH ESI                            ; 004f6264
    MOV EDI,dword ptr [0x005be368]      ; 004f6265 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 004f626b | g_CDemonSet_01e57284
    MOV byte ptr [EBX],0x0              ; 004f626c
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0 ; 004f626f
        ;   XREF to: 005090a0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 004f6274
    CMP EAX,-0x1                        ; 004f6277
    JZ 0x004f66ba                       ; 004f627a
        ;   XREF to: 004f66ba (CONDITIONAL_JUMP)  ; LAB_004f66ba
    MOV EDX,dword ptr [0x005be368]      ; 004f6280 | g_CDemonSet_PTR_005be368
    MOV EDI,dword ptr [EDX + 0x15aabc]  ; 004f6286 | g_CDemonSet_01e57284.selected_camera_index
    CMP EAX,EDI                         ; 004f628c
    JZ 0x004f66ba                       ; 004f628e
        ;   XREF to: 004f66ba (CONDITIONAL_JUMP)  ; LAB_004f66ba
    PUSH 0x4479c000                     ; 004f6294
    PUSH EAX                            ; 004f6299
    PUSH EDX                            ; 004f629a | g_CDemonSet_01e57284
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0 ; 004f629b
        ;   XREF to: 005135d0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 004f62a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f62a3
    MOV dword ptr [EAX + 0x71c],0x0     ; 004f62a6
    PUSH ESI                            ; 004f62b0
        ;   Label: LAB_004f62b0
    MOV EAX,[0x005be368]                ; 004f62b1 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 004f62b6 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0 ; 004f62b7
        ;   XREF to: 005090a0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0(CDemonSet * this_ptr, char * name)
    ADD ESP,0x8                         ; 004f62bc
    CMP EAX,-0x1                        ; 004f62bf
    JZ 0x004f62f0                       ; 004f62c2
        ;   XREF to: 004f62f0 (CONDITIONAL_JUMP)  ; LAB_004f62f0
    MOV EDX,dword ptr [0x005be368]      ; 004f62c4 | g_CDemonSet_PTR_005be368
    MOV EBX,dword ptr [EDX + 0x15aabc]  ; 004f62ca | g_CDemonSet_01e57284.selected_camera_index
    CMP EAX,EBX                         ; 004f62d0
    JZ 0x004f62f0                       ; 004f62d2
        ;   XREF to: 004f62f0 (CONDITIONAL_JUMP)  ; LAB_004f62f0
    PUSH 0x4479c000                     ; 004f62d4
    PUSH EAX                            ; 004f62d9
    PUSH EDX                            ; 004f62da | g_CDemonSet_01e57284
    CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0 ; 004f62db
        ;   XREF to: 005135d0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0(CDemonSet * this_ptr, int camera_index, float hold_time)
    ADD ESP,0xc                         ; 004f62e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f62e3
    MOV dword ptr [EAX + 0x71c],0x0     ; 004f62e6
    CMP dword ptr [ESP + 0x300],0x0     ; 004f62f0
        ;   Label: LAB_004f62f0
    JZ 0x004f6309                       ; 004f62f8
        ;   XREF to: 004f6309 (CONDITIONAL_JUMP)  ; LAB_004f6309
    MOV ECX,dword ptr [0x005be368]      ; 004f62fa | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004f6300 | g_CDemonSet_01e57284
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0 ; 004f6301
        ;   XREF to: 005135f0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004f6306
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6309
        ;   Label: LAB_004f6309
    FLD float ptr [EAX + 0x2d4]         ; 004f630c
    FCOMP float ptr [ESP + 0x2fc]       ; 004f6312
    FNSTSW AX                           ; 004f6319
    SAHF                                ; 004f631b
    JZ 0x004f6bc1                       ; 004f631c
        ;   XREF to: 004f6bc1 (CONDITIONAL_JUMP)  ; LAB_004f6bc1
    CMP dword ptr [ESP + 0x304],0x0     ; 004f6322
    JZ 0x004f6701                       ; 004f632a
        ;   XREF to: 004f6701 (CONDITIONAL_JUMP)  ; LAB_004f6701
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6330
    CMP byte ptr [EAX + 0x4a0],0x0      ; 004f6333
    JZ 0x004f6701                       ; 004f633a
        ;   XREF to: 004f6701 (CONDITIONAL_JUMP)  ; LAB_004f6701
    MOV EDX,dword ptr [EAX + 0x4b4]     ; 004f6340
    PUSH EDX                            ; 004f6346
    MOV ECX,dword ptr [0x005bed68]      ; 004f6347 | g_CSound_PTR_005bed68
    PUSH ECX                            ; 004f634d
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 004f634e
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6353
    TEST EAX,EAX                        ; 004f6356
    JZ 0x004f66da                       ; 004f6358
        ;   XREF to: 004f66da (CONDITIONAL_JUMP)  ; LAB_004f66da
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f635e
        ;   Label: LAB_004f635e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6361
    ADD EBX,0x30                        ; 004f6364
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f6367
    PUSH EBX                            ; 004f636a
    ADD ESI,0x20                        ; 004f636b
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f636e
    PUSH ESI                            ; 004f6371
    MOV dword ptr [ESP + 0x310],EAX     ; 004f6372
    LEA EAX,[ESP + 0x114]               ; 004f6379
    PUSH EAX                            ; 004f6380
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 004f6381
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004f6386
    MOV EDI,dword ptr [EBP + 0x14]      ; 004f6389
    PUSH EDI                            ; 004f638c
    CALL core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0 ; 004f638d
        ;   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 004f6392
    PUSH EBX                            ; 004f6395
    PUSH ESI                            ; 004f6396
    LEA EAX,[ESP + 0x234]               ; 004f6397
    PUSH EAX                            ; 004f639e
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004f639f
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004f63a4
    LEA EDX,[ESP + 0x284]               ; 004f63a7
    PUSH EDX                            ; 004f63ae
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004f63af
    PUSH EDI                            ; 004f63b5
    XOR ESI,ESI                         ; 004f63b6
    CALL dword ptr [EAX + 0x14]         ; 004f63b8
    ADD ESP,0x8                         ; 004f63bb
    XOR EDI,EDI                         ; 004f63be
    MOV EAX,[0x005be368]                ; 004f63c0 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004f63c0
    CMP EDI,dword ptr [EAX + 0x14ecb0]  ; 004f63c5 | g_CDemonSet_01e57284.character_count
    JL 0x004f671f                       ; 004f63cb
        ;   XREF to: 004f671f (CONDITIONAL_JUMP)  ; LAB_004f671f
    XOR EBX,EBX                         ; 004f63d1
    MOV dword ptr [ESP + 0x310],EBX     ; 004f63d3
    MOV dword ptr [ESP + 0x30c],EBX     ; 004f63da
    MOV EAX,[0x005be368]                ; 004f63e1 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004f63e1
    MOV EDX,dword ptr [ESP + 0x310]     ; 004f63e6
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 004f63ed | g_CDemonSet_01e57284.actor_count
    JGE 0x004f6bb5                      ; 004f63f3
        ;   XREF to: 004f6bb5 (CONDITIONAL_JUMP)  ; LAB_004f6bb5
    ADD EAX,dword ptr [ESP + 0x30c]     ; 004f63f9
    MOV EBX,dword ptr [EAX + 0x14cd70]  ; 004f6400 | g_CDemonSet_01e57284.actors[0] | g_CDemonSet_01e57284.actors[1]
    MOV EDI,dword ptr [EBP + 0x14]      ; 004f6406
    CMP EDI,dword ptr [EBX + 0xdc]      ; 004f6409
    JZ 0x004f6a3c                       ; 004f640f
        ;   XREF to: 004f6a3c (CONDITIONAL_JUMP)  ; LAB_004f6a3c
    MOV ECX,dword ptr [ESP + 0x310]     ; 004f6415
        ;   Label: LAB_004f6415
    MOV EDX,dword ptr [ESP + 0x30c]     ; 004f641c
    INC ECX                             ; 004f6423
    ADD EDX,0x4                         ; 004f6424
    MOV dword ptr [ESP + 0x310],ECX     ; 004f6427
    MOV dword ptr [ESP + 0x30c],EDX     ; 004f642e
    JMP 0x004f63e1                      ; 004f6435
        ;   XREF to: 004f63e1 (UNCONDITIONAL_JUMP)  ; LAB_004f63e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6437
        ;   Label: caseD_1
    ADD EAX,0x34c                       ; 004f643a
    PUSH EAX                            ; 004f643f
    MOV ESI,dword ptr [0x005b7650]      ; 004f6440 | DAT_005b7650
    PUSH ESI                            ; 004f6446
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f6447
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f644c
    TEST EAX,EAX                        ; 004f644f
    JZ 0x004f6476                       ; 004f6451
        ;   XREF to: 004f6476 (CONDITIONAL_JUMP)  ; LAB_004f6476
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6453
    FLD float ptr [EAX + 0x2e4]         ; 004f6456
    FLD1                                ; 004f645c
    FDIVRP                              ; 004f645e
    SUB ESP,0x4                         ; 004f6460
    FSTP float ptr [ESP]                ; 004f6463
    PUSH 0x0                            ; 004f6466
    PUSH EAX                            ; 004f6468
    MOV EBX,0x1                         ; 004f6469
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0 ; 004f646e
        ;   XREF to: 004f6bd0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 004f6473
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6476
        ;   Label: LAB_004f6476
    MOV dword ptr [EAX + 0x2d4],0x3f800000 ; 004f6479
    JMP 0x004f620f                      ; 004f6483
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6488
        ;   Label: caseD_2
    ADD EAX,0x3b0                       ; 004f648b
    PUSH EAX                            ; 004f6490
    MOV EDI,dword ptr [0x005b7650]      ; 004f6491 | DAT_005b7650
    PUSH EDI                            ; 004f6497
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f6498
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f649d
    TEST EAX,EAX                        ; 004f64a0
    JZ 0x004f64ca                       ; 004f64a2
        ;   XREF to: 004f64ca (CONDITIONAL_JUMP)  ; LAB_004f64ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f64a4
    FLD float ptr [EAX + 0x2e0]         ; 004f64a7
    FLD1                                ; 004f64ad
    FDIVRP                              ; 004f64af
    SUB ESP,0x4                         ; 004f64b1
    FSTP float ptr [ESP]                ; 004f64b4
    PUSH 0x3f800000                     ; 004f64b7
    PUSH EAX                            ; 004f64bc
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0 ; 004f64bd
        ;   XREF to: 004f6bd0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 004f64c2
    JMP 0x004f620f                      ; 004f64c5
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f64ca
        ;   Label: LAB_004f64ca
    ADD EAX,0x34c                       ; 004f64cd
    PUSH EAX                            ; 004f64d2
    MOV EAX,[0x005b7650]                ; 004f64d3 | DAT_005b7650
    PUSH EAX                            ; 004f64d8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f64d9
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f64de
    TEST EAX,EAX                        ; 004f64e1
    JZ 0x004f620f                       ; 004f64e3
        ;   XREF to: 004f620f (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f64e9
    FLD float ptr [EAX + 0x2e4]         ; 004f64ec
    FLD1                                ; 004f64f2
    FDIVRP                              ; 004f64f4
    SUB ESP,0x4                         ; 004f64f6
    FSTP float ptr [ESP]                ; 004f64f9
    PUSH 0x0                            ; 004f64fc
    PUSH EAX                            ; 004f64fe
    CALL core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0 ; 004f64ff
        ;   XREF to: 004f6bd0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform * this_ptr, float goal_param, float movement_rate)
    ADD ESP,0xc                         ; 004f6504
    JMP 0x004f620f                      ; 004f6507
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f650c
        ;   Label: caseD_3
    ADD EAX,0x414                       ; 004f650f
    PUSH EAX                            ; 004f6514
    MOV EDI,dword ptr [0x005b7650]      ; 004f6515 | DAT_005b7650
    PUSH EDI                            ; 004f651b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f651c
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f6521
    TEST EAX,EAX                        ; 004f6524
    JZ 0x004f655e                       ; 004f6526
        ;   XREF to: 004f655e (CONDITIONAL_JUMP)  ; LAB_004f655e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6528
    MOV DH,byte ptr [EAX + 0x48c]       ; 004f652b
    MOV dword ptr [EAX + 0x2cc],0x2     ; 004f6531
    TEST DH,DH                          ; 004f653b
    JZ 0x004f620f                       ; 004f653d
        ;   XREF to: 004f620f (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x48c                       ; 004f6543
    PUSH EAX                            ; 004f6548
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f6549
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 004f654c
    PUSH ESI                            ; 004f6552
    CALL dword ptr [EDX + 0x24]         ; 004f6553
    ADD ESP,0x8                         ; 004f6556
    JMP 0x004f620f                      ; 004f6559
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f655e
        ;   Label: LAB_004f655e
    FLD float ptr [EBP + 0x18]          ; 004f6561
    FMUL float ptr [EAX + 0x2dc]        ; 004f6564
    FADD float ptr [EAX + 0x2d4]        ; 004f656a
    FST float ptr [EAX + 0x2d4]         ; 004f6570
    FCOMP float ptr [EAX + 0x2d8]       ; 004f6576
    FNSTSW AX                           ; 004f657c
    SAHF                                ; 004f657e
    JBE 0x004f65e2                      ; 004f657f
        ;   XREF to: 004f65e2 (CONDITIONAL_JUMP)  ; LAB_004f65e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6581
    MOV EDX,dword ptr [EAX + 0x2d8]     ; 004f6584
    MOV dword ptr [EAX + 0x2d4],EDX     ; 004f658a
    FLD float ptr [EAX + 0x2d4]         ; 004f6590
    FLD1                                ; 004f6596
    FCOMPP                              ; 004f6598
    FNSTSW AX                           ; 004f659a
    SAHF                                ; 004f659c
    JA 0x004f65d0                       ; 004f659d
        ;   XREF to: 004f65d0 (CONDITIONAL_JUMP)  ; LAB_004f65d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f659f
    MOV EDX,dword ptr [EAX + 0x4b8]     ; 004f65a2
    MOV dword ptr [EAX + 0x2cc],0x1     ; 004f65a8
    TEST EDX,EDX                        ; 004f65b2
    JZ 0x004f65c0                       ; 004f65b4
        ;   XREF to: 004f65c0 (CONDITIONAL_JUMP)  ; LAB_004f65c0
    MOV dword ptr [EAX + 0x4b8],0x2     ; 004f65b6
    MOV dword ptr [ESP + 0x300],0x1     ; 004f65c0
        ;   Label: LAB_004f65c0
    JMP 0x004f620f                      ; 004f65cb
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f65d0
        ;   Label: LAB_004f65d0
    MOV dword ptr [EAX + 0x2cc],0x2     ; 004f65d3
    JMP 0x004f620f                      ; 004f65dd
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESP + 0x304],0x1     ; 004f65e2
        ;   Label: LAB_004f65e2
    JMP 0x004f620f                      ; 004f65ed
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f65f2
        ;   Label: caseD_4
    ADD EAX,0x414                       ; 004f65f5
    PUSH EAX                            ; 004f65fa
    MOV EDI,dword ptr [0x005b7650]      ; 004f65fb | DAT_005b7650
    PUSH EDI                            ; 004f6601
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f6602
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f6607
    TEST EAX,EAX                        ; 004f660a
    JZ 0x004f6644                       ; 004f660c
        ;   XREF to: 004f6644 (CONDITIONAL_JUMP)  ; LAB_004f6644
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f660e
    MOV DL,byte ptr [EAX + 0x48c]       ; 004f6611
    MOV dword ptr [EAX + 0x2cc],0x2     ; 004f6617
    TEST DL,DL                          ; 004f6621
    JZ 0x004f620f                       ; 004f6623
        ;   XREF to: 004f620f (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x48c                       ; 004f6629
    PUSH EAX                            ; 004f662e
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f662f
    MOV EDX,dword ptr [EAX + 0xfffffcc0] ; 004f6632
    PUSH ESI                            ; 004f6638
    CALL dword ptr [EDX + 0x24]         ; 004f6639
    ADD ESP,0x8                         ; 004f663c
    JMP 0x004f620f                      ; 004f663f
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6644
        ;   Label: LAB_004f6644
    FLD float ptr [EBP + 0x18]          ; 004f6647
    FMUL float ptr [EAX + 0x2dc]        ; 004f664a
    FSUBR float ptr [EAX + 0x2d4]       ; 004f6650
    FST float ptr [EAX + 0x2d4]         ; 004f6656
    FCOMP float ptr [EAX + 0x2d8]       ; 004f665c
    FNSTSW AX                           ; 004f6662
    SAHF                                ; 004f6664
    JNC 0x004f65e2                      ; 004f6665
        ;   XREF to: 004f65e2 (CONDITIONAL_JUMP)  ; LAB_004f65e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f666b
    MOV EDX,dword ptr [EAX + 0x2d8]     ; 004f666e
    MOV dword ptr [EAX + 0x2d4],EDX     ; 004f6674
    FLD float ptr [EAX + 0x2d4]         ; 004f667a
    FLDZ                                ; 004f6680
    FCOMPP                              ; 004f6682
    FNSTSW AX                           ; 004f6684
    SAHF                                ; 004f6686
    JC 0x004f65d0                       ; 004f6687
        ;   XREF to: 004f65d0 (CONDITIONAL_JUMP)  ; LAB_004f65d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f668d
    MOV EDX,dword ptr [EAX + 0x4b8]     ; 004f6690
    MOV dword ptr [EAX + 0x2cc],EBX     ; 004f6696
    TEST EDX,EDX                        ; 004f669c
    JZ 0x004f66aa                       ; 004f669e
        ;   XREF to: 004f66aa (CONDITIONAL_JUMP)  ; LAB_004f66aa
    MOV dword ptr [EAX + 0x4b8],0x2     ; 004f66a0
    MOV dword ptr [ESP + 0x300],0x1     ; 004f66aa
        ;   Label: LAB_004f66aa
    JMP 0x004f620f                      ; 004f66b5
        ;   XREF to: 004f620f (UNCONDITIONAL_JUMP)  ; default
    INC EBX                             ; 004f66ba
        ;   Label: LAB_004f66ba
    MOV ESI,EBX                         ; 004f66bb
    CMP byte ptr [EBX],0x0              ; 004f66bd
    JNZ 0x004f625b                      ; 004f66c0
        ;   XREF to: 004f625b (CONDITIONAL_JUMP)  ; LAB_004f625b
    JMP 0x004f62b0                      ; 004f66c6
        ;   XREF to: 004f62b0 (UNCONDITIONAL_JUMP)  ; LAB_004f62b0
    INC EBX                             ; 004f66cb
        ;   Label: LAB_004f66cb
    CMP byte ptr [EBX],0x0              ; 004f66cc
    JNZ 0x004f625b                      ; 004f66cf
        ;   XREF to: 004f625b (CONDITIONAL_JUMP)  ; LAB_004f625b
    JMP 0x004f62b0                      ; 004f66d5
        ;   XREF to: 004f62b0 (UNCONDITIONAL_JUMP)  ; LAB_004f62b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f66da
        ;   Label: LAB_004f66da
    ADD EAX,0x4a0                       ; 004f66dd
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f66e2
    PUSH EAX                            ; 004f66e5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f66e6
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004f66e9
    PUSH EBX                            ; 004f66ef
    CALL dword ptr [EDX + 0x28]         ; 004f66f0
    ADD ESP,0x8                         ; 004f66f3
    MOV dword ptr [EBX + 0x4b4],EAX     ; 004f66f6
    JMP 0x004f635e                      ; 004f66fc
        ;   XREF to: 004f635e (UNCONDITIONAL_JUMP)  ; LAB_004f635e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6701
        ;   Label: LAB_004f6701
    MOV ESI,dword ptr [EAX + 0x4b4]     ; 004f6704
    PUSH ESI                            ; 004f670a
    MOV EDI,dword ptr [0x005bed68]      ; 004f670b | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004f6711
    CALL core_sound.cpp_CSound_killSound_FUN_0052ebb0 ; 004f6712
        ;   XREF to: 0052ebb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0052ebb0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6717
    JMP 0x004f635e                      ; 004f671a
        ;   XREF to: 004f635e (UNCONDITIONAL_JUMP)  ; LAB_004f635e
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14ecb4] ; 004f671f | g_CDemonSet_01e57284.characters[0]
        ;   Label: LAB_004f671f
    PUSH EBX                            ; 004f6726
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004f6727
    CALL dword ptr [EAX + 0x104]        ; 004f672d
    ADD ESP,0x4                         ; 004f6733
    TEST EAX,EAX                        ; 004f6736
    JG 0x004f6a33                       ; 004f6738
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    PUSH EBX                            ; 004f673e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004f673f
    CALL dword ptr [EAX + 0x68]         ; 004f6745
    ADD ESP,0x4                         ; 004f6748
    TEST EAX,EAX                        ; 004f674b
    JNZ 0x004f6a33                      ; 004f674d
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f6753
    CMP dword ptr [EAX + 0x508],0x0     ; 004f6756
    JZ 0x004f69fa                       ; 004f675d
        ;   XREF to: 004f69fa (CONDITIONAL_JUMP)  ; LAB_004f69fa
    LEA EAX,[EBX + 0x20]                ; 004f6763
    PUSH EAX                            ; 004f6766
    LEA EAX,[ESP + 0x2e8]               ; 004f6767
    PUSH EAX                            ; 004f676e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f676f
    PUSH EAX                            ; 004f6772
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004f6773
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004f6778
    FLD float ptr [ESP + 0x2e8]         ; 004f677b
    FCOMP float ptr [ESP + 0x294]       ; 004f6782
    FNSTSW AX                           ; 004f6789
    SAHF                                ; 004f678b
    JA 0x004f6a33                       ; 004f678c
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    FLD float ptr [ESP + 0x288]         ; 004f6792
    FADD double ptr [0x0058d76d]        ; 004f6799 | DOUBLE_0058d76d
    FLD float ptr [ESP + 0x2e8]         ; 004f679f
    FCOMPP                              ; 004f67a6
    FNSTSW AX                           ; 004f67a8
    SAHF                                ; 004f67aa
    JC 0x004f6a33                       ; 004f67ab
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    LEA EAX,[ESP + 0x2e4]               ; 004f67b1
    PUSH EAX                            ; 004f67b8
    LEA EAX,[ESP + 0x2c4]               ; 004f67b9
    PUSH EAX                            ; 004f67c0
    LEA EAX,[ESP + 0x28c]               ; 004f67c1
    PUSH EAX                            ; 004f67c8
    CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160 ; 004f67c9
        ;   XREF to: 0041e160 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_0041e160(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
    ADD ESP,0xc                         ; 004f67ce
    FLD float ptr [ESP + 0x2e4]         ; 004f67d1
    FSUB float ptr [ESP + 0x2c0]        ; 004f67d8
    FST float ptr [ESP + 0x2f0]         ; 004f67df
    FABS                                ; 004f67e6
    FLD float ptr [ESP + 0x2ec]         ; 004f67e8
    FLD float ptr [ESP + 0x2e8]         ; 004f67ef
    FSUB float ptr [ESP + 0x2c4]        ; 004f67f6
    FXCH                                ; 004f67fd
    FSUB float ptr [ESP + 0x2c8]        ; 004f67ff
    FXCH                                ; 004f6806
    FSTP float ptr [ESP + 0x2f4]        ; 004f6808
    FSTP float ptr [ESP + 0x2f8]        ; 004f680f
    FCOMP double ptr [0x0058d775]       ; 004f6816 | DOUBLE_0058d775
    FNSTSW AX                           ; 004f681c
    SAHF                                ; 004f681e
    JA 0x004f6a33                       ; 004f681f
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    FLD float ptr [ESP + 0x2f8]         ; 004f6825
    FABS                                ; 004f682c
    FCOMP double ptr [0x0058d775]       ; 004f682e | DOUBLE_0058d775
    FNSTSW AX                           ; 004f6834
    SAHF                                ; 004f6836
    JA 0x004f6a33                       ; 004f6837
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    LEA EAX,[ESP + 0x25c]               ; 004f683d
    XOR EDX,EDX                         ; 004f6844
    PUSH EAX                            ; 004f6846
    MOV dword ptr [ESP + 0x2f8],EDX     ; 004f6847
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 004f684e
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 004f6853
    LEA EAX,[ESP + 0x25c]               ; 004f6856
    XOR ECX,ECX                         ; 004f685d
    PUSH EAX                            ; 004f685f
    MOV dword ptr [ESP + 0x260],ECX     ; 004f6860
    PUSH EBX                            ; 004f6867
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004f6868
    CALL dword ptr [EDX + 0x34]         ; 004f686e
    ADD ESP,0x8                         ; 004f6871
    CMP EAX,0x2                         ; 004f6874
    JNZ 0x004f6a33                      ; 004f6877
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    FLD float ptr [ESP + 0x2e8]         ; 004f687d
    FADD float ptr [ESP + 0x270]        ; 004f6884
    FCOMP float ptr [ESP + 0x294]       ; 004f688b
    FNSTSW AX                           ; 004f6892
    SAHF                                ; 004f6894
    JA 0x004f6a33                       ; 004f6895
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    FLD float ptr [ESP + 0x2e8]         ; 004f689b
    FADD float ptr [ESP + 0x274]        ; 004f68a2
    FCOMP float ptr [ESP + 0x288]       ; 004f68a9
    FNSTSW AX                           ; 004f68b0
    SAHF                                ; 004f68b2
    JC 0x004f6a33                       ; 004f68b3
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    FLD float ptr [ESP + 0x2f8]         ; 004f68b9
    FMUL ST0                            ; 004f68c0
    FLD float ptr [ESP + 0x2f0]         ; 004f68c2
    FMUL ST0                            ; 004f68c9
    FLD float ptr [ESP + 0x278]         ; 004f68cb
    FXCH                                ; 004f68d2
    FADDP ST2,ST0                       ; 004f68d4
    FMUL float ptr [ESP + 0x278]        ; 004f68d6
    FXCH                                ; 004f68dd
    FSTP float ptr [ESP + 0x8]          ; 004f68df
    FCOMP float ptr [ESP + 0x8]         ; 004f68e3
    FNSTSW AX                           ; 004f68e7
    SAHF                                ; 004f68e9
    JC 0x004f6a33                       ; 004f68ea
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    FLD float ptr [ESP + 0x8]           ; 004f68f0
    FSQRT                               ; 004f68f4
    FLDZ                                ; 004f68f6
    FXCH                                ; 004f68f8
    FST float ptr [ESP + 0x8]           ; 004f68fa
    FSTP double ptr [ESP]               ; 004f68fe
    FCOMP double ptr [ESP]              ; 004f6901
    FNSTSW AX                           ; 004f6904
    SAHF                                ; 004f6906
    JNC 0x004f6a33                      ; 004f6907
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    FLD float ptr [ESP + 0x278]         ; 004f690d
    FADD double ptr [0x0058d77d]        ; 004f6914 | DOUBLE_0058d77d
    FDIV double ptr [ESP]               ; 004f691a
    FLD float ptr [ESP + 0x2f0]         ; 004f691d
    FXCH                                ; 004f6924
    FSTP float ptr [ESP + 0x314]        ; 004f6926
    FMUL float ptr [ESP + 0x314]        ; 004f692d
    FLD float ptr [ESP + 0x2f4]         ; 004f6934
    FMUL float ptr [ESP + 0x314]        ; 004f693b
    FLD float ptr [ESP + 0x2f8]         ; 004f6942
    FMUL float ptr [ESP + 0x314]        ; 004f6949
    LEA EAX,[ESP + 0x2d8]               ; 004f6950
    FLD float ptr [ESP + 0x2c0]         ; 004f6957
    PUSH EAX                            ; 004f695e
    LEA EAX,[ESP + 0x2d0]               ; 004f695f
    FLD float ptr [ESP + 0x2c8]         ; 004f6966
    PUSH EAX                            ; 004f696d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f696e
    FLD float ptr [ESP + 0x2d0]         ; 004f6971
    PUSH EAX                            ; 004f6978
    FXCH ST5                            ; 004f6979
    FSTP float ptr [ESP + 0x2fc]        ; 004f697b
    FXCH ST3                            ; 004f6982
    FSTP float ptr [ESP + 0x300]        ; 004f6984
    FXCH                                ; 004f698b
    FSTP float ptr [ESP + 0x304]        ; 004f698d
    FADD float ptr [ESP + 0x2fc]        ; 004f6994
    FXCH                                ; 004f699b
    FADD float ptr [ESP + 0x300]        ; 004f699d
    FXCH ST2                            ; 004f69a4
    FADD float ptr [ESP + 0x304]        ; 004f69a6
    FXCH                                ; 004f69ad
    FSTP float ptr [ESP + 0x2e4]        ; 004f69af
    FXCH                                ; 004f69b6
    FSTP float ptr [ESP + 0x2e8]        ; 004f69b8
    FSTP float ptr [ESP + 0x2ec]        ; 004f69bf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004f69c6
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f69cb
    MOV EAX,dword ptr [EBX + 0x24]      ; 004f69ce
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004f69d1
    LEA EAX,[EBX + 0x30]                ; 004f69d8
    PUSH EAX                            ; 004f69db
    LEA EAX,[ESP + 0x2d0]               ; 004f69dc
    PUSH EAX                            ; 004f69e3
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004f69e4
    PUSH EBX                            ; 004f69ea
    CALL dword ptr [EDX + 0x60]         ; 004f69eb
    ADD ESP,0xc                         ; 004f69ee
    INC EDI                             ; 004f69f1
    ADD ESI,0x4                         ; 004f69f2
    JMP 0x004f63c0                      ; 004f69f5
        ;   XREF to: 004f63c0 (UNCONDITIONAL_JUMP)  ; LAB_004f63c0
    FLD float ptr [EAX + 0x24]          ; 004f69fa
        ;   Label: LAB_004f69fa
    FCOMP float ptr [ESP + 0x308]       ; 004f69fd
    FNSTSW AX                           ; 004f6a04
    SAHF                                ; 004f6a06
    JNC 0x004f6a33                      ; 004f6a07
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    PUSH EBX                            ; 004f6a09
    MOV ECX,dword ptr [EBP + 0x14]      ; 004f6a0a
    PUSH ECX                            ; 004f6a0d
    CALL core_platfrm.cpp_CPlatform_FUN_004f7360 ; 004f6a0e
        ;   XREF to: 004f7360 (UNCONDITIONAL_CALL)  ; int core_platfrm.cpp_CPlatform_FUN_004f7360(CPlatform * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f6a13
    TEST EAX,EAX                        ; 004f6a16
    JZ 0x004f6a33                       ; 004f6a18
        ;   XREF to: 004f6a33 (CONDITIONAL_JUMP)  ; LAB_004f6a33
    PUSH 0xbf800000                     ; 004f6a1a
    PUSH 0x0                            ; 004f6a1f
    PUSH 0x8                            ; 004f6a21
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004f6a23
    PUSH EBX                            ; 004f6a29
    CALL dword ptr [EAX + 0xd4]         ; 004f6a2a
    ADD ESP,0x10                        ; 004f6a30
    INC EDI                             ; 004f6a33
        ;   Label: LAB_004f6a33
    ADD ESI,0x4                         ; 004f6a34
    JMP 0x004f63c0                      ; 004f6a37
        ;   XREF to: 004f63c0 (UNCONDITIONAL_JUMP)  ; LAB_004f63c0
    LEA EAX,[EBX + 0x30]                ; 004f6a3c
        ;   Label: LAB_004f6a3c
    PUSH EAX                            ; 004f6a3f
    LEA EAX,[EBX + 0x20]                ; 004f6a40
    PUSH EAX                            ; 004f6a43
    MOV dword ptr [ESP + 0x320],EAX     ; 004f6a44
    LEA EAX,[ESP + 0x174]               ; 004f6a4b
    PUSH EAX                            ; 004f6a52
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004f6a53
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004f6a58
    LEA EAX,[ESP + 0x10c]               ; 004f6a5b
    PUSH EAX                            ; 004f6a62
    LEA EAX,[ESP + 0x170]               ; 004f6a63
    PUSH EAX                            ; 004f6a6a
    LEA ESI,[ESP + 0x204]               ; 004f6a6b
    LEA EDI,[ESP + 0x1d4]               ; 004f6a72
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004f6a79
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004f6a7e
    ADD ESP,0x8                         ; 004f6a83
    LEA EAX,[ESP + 0x22c]               ; 004f6a86
    LEA ESI,[ESP + 0x1fc]               ; 004f6a8d
    PUSH EAX                            ; 004f6a94
    LEA EAX,[ESP + 0x1d0]               ; 004f6a95
    MOVSD.REP ES:EDI,ESI                ; 004f6a9c
    PUSH EAX                            ; 004f6a9e
    LEA ESI,[ESP + 0x1a4]               ; 004f6a9f
    LEA EDI,[ESP + 0x144]               ; 004f6aa6
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004f6aad
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004f6ab2
    LEA ESI,[ESP + 0x1a4]               ; 004f6ab7
    ADD ESP,0x8                         ; 004f6abe
    MOVSD.REP ES:EDI,ESI                ; 004f6ac1
    MOV EAX,dword ptr [ESP + 0x148]     ; 004f6ac3
    MOV dword ptr [ESP + 0x2b4],EAX     ; 004f6aca
    MOV EAX,dword ptr [ESP + 0x158]     ; 004f6ad1
    MOV dword ptr [ESP + 0x2b8],EAX     ; 004f6ad8
    MOV EAX,dword ptr [ESP + 0x168]     ; 004f6adf
    MOV dword ptr [ESP + 0x2bc],EAX     ; 004f6ae6
    LEA EAX,[ESP + 0x29c]               ; 004f6aed
    PUSH EAX                            ; 004f6af4
    LEA EAX,[ESP + 0x140]               ; 004f6af5
    PUSH EAX                            ; 004f6afc
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 004f6afd
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 004f6b02
    LEA EDX,[EBX + 0xe0]                ; 004f6b05
    MOV EAX,dword ptr [ESP + 0x318]     ; 004f6b0b
    FLD float ptr [ESP + 0x2b4]         ; 004f6b12
    FSUB float ptr [EAX]                ; 004f6b19
    FLD float ptr [ESP + 0x2b8]         ; 004f6b1b
    FXCH                                ; 004f6b22
    FSTP float ptr [ESP + 0x2a8]        ; 004f6b24
    FSUB float ptr [EAX + 0x4]          ; 004f6b2b
    FLD float ptr [ESP + 0x2bc]         ; 004f6b2e
    FXCH                                ; 004f6b35
    FSTP float ptr [ESP + 0x2ac]        ; 004f6b37
    FSUB float ptr [EAX + 0x8]          ; 004f6b3e
    LEA EAX,[ESP + 0x2a8]               ; 004f6b41
    FSTP float ptr [ESP + 0x2b0]        ; 004f6b48
    CMP EDX,EAX                         ; 004f6b4f
    JZ 0x004f6b70                       ; 004f6b51
        ;   XREF to: 004f6b70 (CONDITIONAL_JUMP)  ; LAB_004f6b70
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 004f6b53
    MOV dword ptr [EDX],EAX             ; 004f6b5a
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 004f6b5c
    MOV dword ptr [EDX + 0x4],EAX       ; 004f6b63
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 004f6b66
    MOV dword ptr [EDX + 0x8],EAX       ; 004f6b6d
    MOV dword ptr [EBX + 0xec],0x0      ; 004f6b70
        ;   Label: LAB_004f6b70
    MOV dword ptr [EBX + 0xf4],0x0      ; 004f6b7a
    FLD float ptr [ESP + 0x2a0]         ; 004f6b84
    FSUB float ptr [EBX + 0x34]         ; 004f6b8b
    SUB ESP,0x4                         ; 004f6b8e
    FSTP float ptr [ESP]                ; 004f6b91
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004f6b94
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x31c],EAX     ; 004f6b99
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004f6ba0
    MOV dword ptr [EBX + 0xf0],EAX      ; 004f6ba7
    ADD ESP,0x4                         ; 004f6bad
    JMP 0x004f6415                      ; 004f6bb0
        ;   XREF to: 004f6415 (UNCONDITIONAL_JUMP)  ; LAB_004f6415
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f6bb5
        ;   Label: LAB_004f6bb5
    PUSH EBX                            ; 004f6bb8
    CALL core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_004f7700 ; 004f6bb9
        ;   XREF to: 004f7700 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_004f7700(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 004f6bbe
    MOV ESP,EBP                         ; 004f6bc1
        ;   Label: LAB_004f6bc1
    POP EBP                             ; 004f6bc3
    POP EDI                             ; 004f6bc4
    POP ESI                             ; 004f6bc5
    POP EBX                             ; 004f6bc6
    RET                                 ; 004f6bc7

