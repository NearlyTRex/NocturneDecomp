; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_005582c0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_005571f0 at 00557532
;
; Referenced Globals:
;   double DOUBLE_00641444 = 0.000100000000000000
;   int INT_0310619c
;
; Called Functions:
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_scat.cpp_CScat_blendAimBones_FUN_005584a0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005582c0
        ;   Label: core_scat.cpp_CScat_blendLayerAction_FUN_005582c0
    PUSH ESI                            ; 005582c1
    PUSH EDI                            ; 005582c2
    PUSH EBP                            ; 005582c3
    MOV EBP,ESP                         ; 005582c4
    SUB ESP,0x20                        ; 005582c6
    AND ESP,0xfffffff8                  ; 005582c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005582cc
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005582cf
    SHL EAX,0x3                         ; 005582d5
    MOV ESI,EAX                         ; 005582d8
    SHL EAX,0x3                         ; 005582da
    SUB EAX,ESI                         ; 005582dd
    MOV EDX,0x3f800000                  ; 005582df
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x262c] ; 005582e4
    MOV dword ptr [ESP + 0x8],EDX       ; 005582eb
    TEST ECX,ECX                        ; 005582ef
    JZ 0x00558475                       ; 005582f1
        ;   XREF to: 00558475 (CONDITIONAL_JUMP)  ; LAB_00558475
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005582f7
        ;   Label: LAB_005582f7
    SHL EAX,0x3                         ; 005582fd
    MOV ESI,EAX                         ; 00558300
    SHL EAX,0x3                         ; 00558302
    SUB EAX,ESI                         ; 00558305
    CMP dword ptr [EBX + EAX*0x1 + 0x2630],0x0 ; 00558307
    JNZ 0x00558323                      ; 0055830f
        ;   XREF to: 00558323 (CONDITIONAL_JUMP)  ; LAB_00558323
    FLD float ptr [EBX + 0x2a90]        ; 00558311
    FLD1                                ; 00558317
    FSUBRP                              ; 00558319
    FMUL float ptr [ESP + 0x8]          ; 0055831b
    FSTP float ptr [ESP + 0x8]          ; 0055831f
    PUSH 0x4                            ; 00558323
        ;   Label: LAB_00558323
    LEA ESI,[EBX + 0x158]               ; 00558325
    PUSH ESI                            ; 0055832b
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 0055832c
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x20],EAX      ; 00558331
    ADD ESP,0x8                         ; 00558335
    PUSH 0x5                            ; 00558338
    PUSH ESI                            ; 0055833a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 0055833b
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 00558340
    FLD float ptr [ESP + 0x24]          ; 00558344
    ADD ESP,0x8                         ; 00558348
    PUSH 0xc                            ; 0055834b
    FADD float ptr [ESP + 0x1c]         ; 0055834d
    PUSH ESI                            ; 00558351
    FSTP float ptr [ESP + 0x20]         ; 00558352
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 00558356
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 0055835b
    FLD float ptr [ESP + 0x24]          ; 0055835f
    ADD ESP,0x8                         ; 00558363
    PUSH 0xd                            ; 00558366
    FADD float ptr [ESP + 0x1c]         ; 00558368
    PUSH ESI                            ; 0055836c
    FSTP float ptr [ESP + 0x20]         ; 0055836d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 00558371
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 00558376
    FLD float ptr [ESP + 0x24]          ; 0055837a
    ADD ESP,0x8                         ; 0055837e
    PUSH 0xe                            ; 00558381
    FADD float ptr [ESP + 0x1c]         ; 00558383
    PUSH ESI                            ; 00558387
    FSTP float ptr [ESP + 0x20]         ; 00558388
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 0055838c
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 00558391
    FLD float ptr [ESP + 0x24]          ; 00558395
    ADD ESP,0x8                         ; 00558399
    FADD float ptr [ESP + 0x18]         ; 0055839c
    FLD1                                ; 005583a0
    FSUBRP                              ; 005583a2
    FLD float ptr [ESP + 0x8]           ; 005583a4
    FXCH                                ; 005583a8
    FMUL ST1                            ; 005583aa
    FLDZ                                ; 005583ac
    FXCH                                ; 005583ae
    FSTP ST2                            ; 005583b0
    FXCH                                ; 005583b2
    FSTP float ptr [ESP + 0x8]          ; 005583b4
    FCOMP float ptr [ESP + 0x8]         ; 005583b8
    FNSTSW AX                           ; 005583bc
    SAHF                                ; 005583be
    JBE 0x005583c7                      ; 005583bf
        ;   XREF to: 005583c7 (CONDITIONAL_JUMP)  ; LAB_005583c7
    XOR EDI,EDI                         ; 005583c1
    MOV dword ptr [ESP + 0x8],EDI       ; 005583c3
    FLD float ptr [ESP + 0x8]           ; 005583c7
        ;   Label: LAB_005583c7
    FST double ptr [ESP]                ; 005583cb
    FCOMP double ptr [0x00641444]       ; 005583ce | DOUBLE_00641444
    FNSTSW AX                           ; 005583d4
    SAHF                                ; 005583d6
    JBE 0x0055846e                      ; 005583d7
        ;   XREF to: 0055846e (CONDITIONAL_JUMP)  ; LAB_0055846e
    FLD1                                ; 005583dd
    FCOMP double ptr [ESP]              ; 005583df
    FNSTSW AX                           ; 005583e2
    SAHF                                ; 005583e4
    JNC 0x005583ef                      ; 005583e5
        ;   XREF to: 005583ef (CONDITIONAL_JUMP)  ; LAB_005583ef
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005583e7
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005583ef
        ;   Label: LAB_005583ef
    SHL EAX,0x3                         ; 005583f5
    MOV ESI,EAX                         ; 005583f8
    SHL EAX,0x3                         ; 005583fa
    SUB EAX,ESI                         ; 005583fd
    MOV ESI,EAX                         ; 005583ff
    LEA EAX,[EBX + 0x262c]              ; 00558401
    ADD EAX,ESI                         ; 00558407
    PUSH 0x1                            ; 00558409
    ADD EAX,0x8                         ; 0055840b
    PUSH EAX                            ; 0055840e
    LEA ESI,[EBX + 0x158]               ; 0055840f
    PUSH ESI                            ; 00558415
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00558416
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0055841b
    PUSH EAX                            ; 0055841e
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 0055841f
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00558424
    PUSH dword ptr [EBX + 0x2a90]       ; 00558427
    PUSH EAX                            ; 0055842d
    PUSH ESI                            ; 0055842e
    MOV EDI,EAX                         ; 0055842f
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 00558431
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0x28],EAX      ; 00558436
    FLD float ptr [ESP + 0x28]          ; 0055843a
    ADD ESP,0xc                         ; 0055843e
    PUSH 0x59ddb0                       ; 00558441
    MOV EDX,dword ptr [0x0310619c]      ; 00558446 | INT_0310619c
    PUSH EDX                            ; 0055844c
    PUSH dword ptr [ESP + 0x10]         ; 0055844d
    FSTP float ptr [ESP + 0x20]         ; 00558451
    PUSH dword ptr [ESP + 0x20]         ; 00558455
    PUSH EDI                            ; 00558459
    PUSH ESI                            ; 0055845a
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 0055845b
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    MOV ECX,dword ptr [EBX + 0x2a8c]    ; 00558460
    ADD ESP,0x18                        ; 00558466
    CMP ECX,0x1                         ; 00558469
    JZ 0x00558484                       ; 0055846c
        ;   XREF to: 00558484 (CONDITIONAL_JUMP)  ; LAB_00558484
    MOV ESP,EBP                         ; 0055846e
        ;   Label: LAB_0055846e
    POP EBP                             ; 00558470
    POP EDI                             ; 00558471
    POP ESI                             ; 00558472
    POP EBX                             ; 00558473
    RET                                 ; 00558474
    MOV EAX,dword ptr [EBX + 0x2a90]    ; 00558475
        ;   Label: LAB_00558475
    MOV dword ptr [ESP + 0x8],EAX       ; 0055847b
    JMP 0x005582f7                      ; 0055847f
        ;   XREF to: 005582f7 (UNCONDITIONAL_JUMP)  ; LAB_005582f7
    PUSH ECX                            ; 00558484
        ;   Label: LAB_00558484
    PUSH EBX                            ; 00558485
    CALL core_scat.cpp_CScat_blendAimBones_FUN_005584a0 ; 00558486
        ;   XREF to: 005584a0 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_blendAimBones_FUN_005584a0(CScat * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0055848b
    MOV ESP,EBP                         ; 0055848e
    POP EBP                             ; 00558490
    POP EDI                             ; 00558491
    POP ESI                             ; 00558492
    POP EBX                             ; 00558493
    RET                                 ; 00558494

