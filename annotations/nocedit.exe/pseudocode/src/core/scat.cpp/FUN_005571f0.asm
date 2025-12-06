; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_005571f0()
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_005571b8 = 0055768d
;   TerminatedCString s_s_confused_while_walking_0064136f
;   double DOUBLE_0064139c = 12.5663706140000
;   double DOUBLE_006413a4 = 0.333333333333333
;   double DOUBLE_006413ac = 32
;   double DOUBLE_006413b4 = -1.57079632675000
;   float FLOAT_006413bc = 3.141593
;   double DOUBLE_006413c4 = 1.57079632675000
;   float FLOAT_006413cc = -3.141593
;   double DOUBLE_006413d4 = 3.14159265350000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGame* g_CGamePtr = 02d81a9c
;   CConsole g_ConsolePtr
;   undefined4 DAT_02d81cc4
;   undefined4 DAT_0310615c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_scat.cpp_FUN_005578e0
;   core_scat.cpp_FUN_00557d20
;   core_scat.cpp_FUN_00558010
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005571f0
        ;   Label: core_scat.cpp_FUN_005571f0
    PUSH ESI                            ; 005571f1
    PUSH EDI                            ; 005571f2
    PUSH EBP                            ; 005571f3
    MOV EBP,ESP                         ; 005571f4
    SUB ESP,0x78                        ; 005571f6
    AND ESP,0xfffffff8                  ; 005571f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005571fc
    PUSH dword ptr [EBP + 0x18]         ; 005571ff
    PUSH EBX                            ; 00557202
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 00557203 | int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00557208
    TEST EAX,EAX                        ; 0055720b
    JZ 0x005575b3                       ; 0055720d | caseD_5
        ;   XREF to: 005575b3 (CONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x18]          ; 00557213
    FMUL double ptr [0x0064139c]        ; 00557216 | double DOUBLE_0064139c
    MOV EAX,[0x0067b654]                ; 0055721c | CGame * g_CGamePtr
    FSTP float ptr [EBX + 0x2438]       ; 00557221
    CMP dword ptr [EAX + 0x228],0x0     ; 00557227 | DAT_02d81cc4
    JNZ 0x005575ba                      ; 0055722e | LAB_005575ba
        ;   XREF to: 005575ba (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe24]        ; 00557234
        ;   Label: LAB_00557234
    FSUB float ptr [EBP + 0x18]         ; 0055723a
    FST float ptr [EBX + 0xbe24]        ; 0055723d
    FLDZ                                ; 00557243
    FCOMPP                              ; 00557245
    FNSTSW AX                           ; 00557247
    SAHF                                ; 00557249
    JBE 0x00557256                      ; 0055724a | LAB_00557256
        ;   XREF to: 00557256 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe24],0x0    ; 0055724c
    LEA ESI,[EBX + 0x23ac]              ; 00557256
        ;   Label: LAB_00557256
    PUSH dword ptr [EBP + 0x18]         ; 0055725c
    MOV dword ptr [ESI + 0x8],0x0       ; 0055725f
    PUSH EBX                            ; 00557266
    MOV EAX,dword ptr [ESI + 0x8]       ; 00557267
    MOV dword ptr [ESI + 0x4],EAX       ; 0055726a
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055726d
    MOV dword ptr [ESI],EAX             ; 00557270
    CALL core_scat.cpp_FUN_00557d20     ; 00557272 | undefined core_scat.cpp_FUN_00557d20()
        ;   XREF to: 00557d20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00557277
    PUSH dword ptr [EBP + 0x18]         ; 0055727a
    FLD float ptr [EBX + 0x23b4]        ; 0055727d
    PUSH EBX                            ; 00557283
    FSTP float ptr [EBX + 0x2434]       ; 00557284
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 0055728a | int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055728f
    TEST EAX,EAX                        ; 00557292
    JZ 0x00557656                       ; 00557294 | LAB_00557656
        ;   XREF to: 00557656 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x8],0x0       ; 0055729a
    MOV EAX,dword ptr [ESI + 0x8]       ; 005572a1
    MOV dword ptr [ESI + 0x4],EAX       ; 005572a4
    MOV EAX,dword ptr [ESI + 0x4]       ; 005572a7
    MOV dword ptr [ESI],EAX             ; 005572aa
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005572ac
    LEA ESI,[EBX + 0x158]               ; 005572b2
    CMP EAX,0x2                         ; 005572b8
    JNC 0x00557630                      ; 005572bb | LAB_00557630
        ;   XREF to: 00557630 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 005572c1
    JNZ 0x00557637                      ; 005572c4 | LAB_00557637
        ;   XREF to: 00557637 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005572ca
    CALL core_scat.cpp_FUN_00558010     ; 005572cb | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005572d0
    TEST EAX,EAX                        ; 005572d3
    JZ 0x00557604                       ; 005572d5 | LAB_00557604
        ;   XREF to: 00557604 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005572db
        ;   Label: LAB_005572db
    PUSH 0x9                            ; 005572dd
    PUSH ESI                            ; 005572df
        ;   Label: LAB_005572df
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005572e0 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005572e0
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005572e5
    MOV ESI,dword ptr [EBX + 0x2598]    ; 005572e8
        ;   Label: caseD_8
    TEST ESI,ESI                        ; 005572ee
    JZ 0x00557812                       ; 005572f0 | LAB_00557812
        ;   XREF to: 00557812 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x20]                ; 005572f6
    PUSH EAX                            ; 005572f9
    LEA EAX,[ESP + 0x4c]                ; 005572fa
    PUSH EAX                            ; 005572fe
    PUSH EBX                            ; 005572ff
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00557300 | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00557305
    PUSH EAX                            ; 00557308
    LEA EAX,[ESP + 0x34]                ; 00557309
    PUSH EAX                            ; 0055730d
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0055730e | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00557313
    PUSH dword ptr [EAX + 0x4]          ; 00557316
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00557319 | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x78],EAX      ; 0055731e
    FLD float ptr [ESP + 0x78]          ; 00557322
    ADD ESP,0x4                         ; 00557326
    FST float ptr [ESP]                 ; 00557329
    FCOMP double ptr [0x006413b4]       ; 0055732c | double DOUBLE_006413b4
    FNSTSW AX                           ; 00557332
    SAHF                                ; 00557334
    JNC 0x00557343                      ; 00557335 | LAB_00557343
        ;   XREF to: 00557343 (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00557337
    FADD float ptr [0x006413bc]         ; 0055733a | float FLOAT_006413bc
    FSTP float ptr [ESP]                ; 00557340
    FLD float ptr [ESP]                 ; 00557343
        ;   Label: LAB_00557343
    FCOMP double ptr [0x006413c4]       ; 00557346 | double DOUBLE_006413c4
    FNSTSW AX                           ; 0055734c
    SAHF                                ; 0055734e
    JBE 0x0055735d                      ; 0055734f | LAB_0055735d
        ;   XREF to: 0055735d (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00557351
    FADD float ptr [0x006413cc]         ; 00557354 | float FLOAT_006413cc
    FSTP float ptr [ESP]                ; 0055735a
    FLD float ptr [EBP + 0x18]          ; 0055735d
        ;   Label: LAB_0055735d
    FMUL double ptr [0x006413d4]        ; 00557360 | double DOUBLE_006413d4
    FLD float ptr [ESP]                 ; 00557366
    FXCH                                ; 00557369
    FST float ptr [ESP + 0x70]          ; 0055736b
    FCHS                                ; 0055736f
    FSTP float ptr [ESP + 0x6c]         ; 00557371
    FCOMP float ptr [ESP + 0x6c]        ; 00557375
    FNSTSW AX                           ; 00557379
    SAHF                                ; 0055737b
    JNC 0x00557385                      ; 0055737c | LAB_00557385
        ;   XREF to: 00557385 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0055737e
    MOV dword ptr [ESP],EAX             ; 00557382
    FLD float ptr [ESP]                 ; 00557385
        ;   Label: LAB_00557385
    FCOMP float ptr [ESP + 0x70]        ; 00557388
    FNSTSW AX                           ; 0055738c
    SAHF                                ; 0055738e
    JBE 0x00557398                      ; 0055738f | LAB_00557398
        ;   XREF to: 00557398 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x70]      ; 00557391
    MOV dword ptr [ESP],EAX             ; 00557395
    FLD float ptr [EBX + 0x34]          ; 00557398
        ;   Label: LAB_00557398
    FADD float ptr [ESP]                ; 0055739b
    PUSH EBX                            ; 0055739e
    FSTP float ptr [EBX + 0x34]         ; 0055739f
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005573a2 | void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x2598]    ; 005573a7
    ADD ESP,0x4                         ; 005573ad
    MOV EAX,dword ptr [ESI + 0x154]     ; 005573b0
    PUSH 0x0                            ; 005573b6
    MOV dword ptr [ESP + 0x78],EAX      ; 005573b8
    LEA EAX,[ESP + 0x58]                ; 005573bc
    PUSH EAX                            ; 005573c0
    LEA EDI,[EBX + 0x158]               ; 005573c1
    PUSH EDI                            ; 005573c7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005573c8 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005573cd
    PUSH EAX                            ; 005573d0
    PUSH EBX                            ; 005573d1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005573d2
    PUSH ESI                            ; 005573d6
    CALL dword ptr [EAX + 0x124]        ; 005573d7
    ADD ESP,0xc                         ; 005573dd
    TEST EAX,EAX                        ; 005573e0
    JZ 0x005577f0                       ; 005573e2 | LAB_005577f0
        ;   XREF to: 005577f0 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2598],0x0    ; 005573e8
    JNZ 0x005577fb                      ; 005573ef | LAB_005577fb
        ;   XREF to: 005577fb (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005573f5
        ;   Label: LAB_005573f5
    PUSH 0x0                            ; 005573f7
    LEA EAX,[EBX + 0x158]               ; 005573f9
    PUSH EAX                            ; 005573ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00557400 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00557400
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00557405
    LEA EAX,[EBX + 0x1f738]             ; 00557408
        ;   Label: LAB_00557408
    PUSH EAX                            ; 0055740e
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004ffad0 ; 0055740f | void core_inv.cpp_CInventory_updateInventory_FUN_004ffad0(CInventory * this_ptr)
        ;   XREF to: 004ffad0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x1fbe8]   ; 00557414
    ADD ESP,0x4                         ; 0055741a
    TEST ECX,ECX                        ; 0055741d
    JZ 0x00557431                       ; 0055741f | LAB_00557431
        ;   XREF to: 00557431 (CONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x18]         ; 00557421
    MOV ESI,dword ptr [ECX + 0x154]     ; 00557424
    PUSH ECX                            ; 0055742a
    CALL dword ptr [ESI + 0x4]          ; 0055742b
    ADD ESP,0x8                         ; 0055742e
    PUSH dword ptr [EBP + 0x18]         ; 00557431
        ;   Label: LAB_00557431
    PUSH EBX                            ; 00557434
    CALL core_scat.cpp_FUN_00558060     ; 00557435 | undefined core_scat.cpp_FUN_00558060()
        ;   XREF to: 00558060 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055743a
    PUSH EBX                            ; 0055743d
    XOR ESI,ESI                         ; 0055743e
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 00557440 | void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0x243c]        ; 00557445
    FLDZ                                ; 0055744b
    ADD ESP,0x4                         ; 0055744d
    FCOMPP                              ; 00557450
    FNSTSW AX                           ; 00557452
    SAHF                                ; 00557454
    JC 0x0055745c                       ; 00557455 | LAB_0055745c
        ;   XREF to: 0055745c (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 00557457
    PUSH EBX                            ; 0055745c
        ;   Label: LAB_0055745c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055745d
    CALL dword ptr [EAX + 0x108]        ; 00557463
    ADD ESP,0x4                         ; 00557469
    TEST EAX,EAX                        ; 0055746c
    JZ 0x00557475                       ; 0055746e | LAB_00557475
        ;   XREF to: 00557475 (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 00557470
    PUSH 0xc                            ; 00557475
        ;   Label: LAB_00557475
    LEA EAX,[EBX + 0x158]               ; 00557477
    PUSH EAX                            ; 0055747d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 0055747e | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 00557483
    FLD float ptr [ESP + 0x7c]          ; 00557487
    FLDZ                                ; 0055748b
    ADD ESP,0x8                         ; 0055748d
    FCOMPP                              ; 00557490
    FNSTSW AX                           ; 00557492
    SAHF                                ; 00557494
    JNC 0x0055749c                      ; 00557495 | LAB_0055749c
        ;   XREF to: 0055749c (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 00557497
    PUSH 0xd                            ; 0055749c
        ;   Label: LAB_0055749c
    LEA EAX,[EBX + 0x158]               ; 0055749e
    PUSH EAX                            ; 005574a4
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005574a5 | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 005574aa
    FLD float ptr [ESP + 0x7c]          ; 005574ae
    FLDZ                                ; 005574b2
    ADD ESP,0x8                         ; 005574b4
    FCOMPP                              ; 005574b7
    FNSTSW AX                           ; 005574b9
    SAHF                                ; 005574bb
    JNC 0x005574c3                      ; 005574bc | LAB_005574c3
        ;   XREF to: 005574c3 (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 005574be
    PUSH 0x4                            ; 005574c3
        ;   Label: LAB_005574c3
    LEA EAX,[EBX + 0x158]               ; 005574c5
    PUSH EAX                            ; 005574cb
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005574cc | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 005574d1
    FLD float ptr [ESP + 0x7c]          ; 005574d5
    FLDZ                                ; 005574d9
    ADD ESP,0x8                         ; 005574db
    FCOMPP                              ; 005574de
    FNSTSW AX                           ; 005574e0
    SAHF                                ; 005574e2
    JNC 0x005574ea                      ; 005574e3 | LAB_005574ea
        ;   XREF to: 005574ea (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 005574e5
    PUSH 0x5                            ; 005574ea
        ;   Label: LAB_005574ea
    LEA EAX,[EBX + 0x158]               ; 005574ec
    PUSH EAX                            ; 005574f2
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005574f3 | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 005574f8
    FLD float ptr [ESP + 0x7c]          ; 005574fc
    FLDZ                                ; 00557500
    ADD ESP,0x8                         ; 00557502
    FCOMPP                              ; 00557505
    FNSTSW AX                           ; 00557507
    SAHF                                ; 00557509
    JNC 0x00557511                      ; 0055750a | LAB_00557511
        ;   XREF to: 00557511 (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 0055750c
    PUSH ESI                            ; 00557511
        ;   Label: LAB_00557511
    PUSH dword ptr [EBP + 0x18]         ; 00557512
    PUSH EBX                            ; 00557515
    CALL core_scat.cpp_FUN_00558720     ; 00557516 | undefined core_scat.cpp_FUN_00558720()
        ;   XREF to: 00558720 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0055751b
    LEA EAX,[EBX + 0x158]               ; 0055751e
    PUSH EAX                            ; 00557524
    MOV dword ptr [ESP + 0x6c],EAX      ; 00557525
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00557529 | void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0055752e
    PUSH EBX                            ; 00557531
    CALL core_scat.cpp_FUN_005582c0     ; 00557532 | undefined core_scat.cpp_FUN_005582c0()
        ;   XREF to: 005582c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00557537
    PUSH EBX                            ; 0055753a
    CALL core_scat.cpp_FUN_00558010     ; 0055753b | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00557540
    TEST EAX,EAX                        ; 00557543
    JNZ 0x0055759e                      ; 00557545 | LAB_0055759e
        ;   XREF to: 0055759e (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00557547
    MOV EAX,dword ptr [EBX + 0x154]     ; 00557548
    CALL dword ptr [EAX + 0x120]        ; 0055754e
    ADD ESP,0x4                         ; 00557554
    TEST EAX,EAX                        ; 00557557
    JNZ 0x0055759e                      ; 00557559 | LAB_0055759e
        ;   XREF to: 0055759e (CONDITIONAL_JUMP)
    PUSH 0x59ddb0                       ; 0055755b
    MOV EDI,dword ptr [0x0310615c]      ; 00557560 | undefined4 DAT_0310615c
    PUSH EDI                            ; 00557566
    LEA EAX,[EBX + 0x1fbd8]             ; 00557567
    PUSH dword ptr [EBX + 0x1fbe4]      ; 0055756d
    PUSH EAX                            ; 00557573
    LEA ESI,[ESP + 0x24]                ; 00557574
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 00557578 | CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f * quat_out, CVector3f * euler_angles)
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0055757d
    LEA EAX,[ESP + 0x10]                ; 00557580
    LEA EDI,[ESP + 0x10]                ; 00557584
    PUSH EAX                            ; 00557588
    MOV EAX,dword ptr [ESP + 0x78]      ; 00557589
    LEA ESI,[ESP + 0x24]                ; 0055758d
    PUSH EAX                            ; 00557591
    MOVSD ES:EDI,ESI                    ; 00557592
    MOVSD ES:EDI,ESI                    ; 00557593
    MOVSD ES:EDI,ESI                    ; 00557594
    MOVSD ES:EDI,ESI                    ; 00557595
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 00557596 | void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0055759b
    PUSH dword ptr [EBP + 0x18]         ; 0055759e
        ;   Label: LAB_0055759e
    PUSH EBX                            ; 005575a1
    CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 ; 005575a2 | void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005575a7
    PUSH EBX                            ; 005575aa
    CALL core_scat.cpp_FUN_00558fd0     ; 005575ab | undefined core_scat.cpp_FUN_00558fd0()
        ;   XREF to: 00558fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005575b0
    MOV ESP,EBP                         ; 005575b3
        ;   Label: caseD_5
    POP EBP                             ; 005575b5
    POP EDI                             ; 005575b6
    POP ESI                             ; 005575b7
    POP EBX                             ; 005575b8
    RET                                 ; 005575b9
    FLD float ptr [EBX + 0x2438]        ; 005575ba
        ;   Label: LAB_005575ba
    FMUL double ptr [0x006413a4]        ; 005575c0 | double DOUBLE_006413a4
    FSTP float ptr [EBX + 0x2438]       ; 005575c6
    JMP 0x00557234                      ; 005575cc | LAB_00557234
        ;   XREF to: 00557234 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005575d1
        ;   Label: LAB_005575d1
    PUSH 0x64136f                       ; 005575d2 | = "%s confused while walking to scriptDe..." | s_s_confused_while_walking_0064136f = %s confused while walking to scriptDest!

    MOV ECX,dword ptr [0x0066e8e0]      ; 005575d7 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 005575dd | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005575de | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005575e3
    PUSH EBX                            ; 005575e6
    CALL core_scat.cpp_FUN_00558010     ; 005575e7 | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005575ec
    TEST EAX,EAX                        ; 005575ef
    JZ 0x005575fc                       ; 005575f1 | LAB_005575fc
        ;   XREF to: 005575fc (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005575f3
    PUSH 0x7                            ; 005575f5
    JMP 0x005572df                      ; 005575f7 | LAB_005572df
        ;   XREF to: 005572df (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 005575fc
        ;   Label: LAB_005575fc
    PUSH EAX                            ; 005575fe
    JMP 0x005572df                      ; 005575ff | LAB_005572df
        ;   XREF to: 005572df (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00557604
        ;   Label: LAB_00557604
    PUSH 0x1                            ; 00557606
    JMP 0x005572df                      ; 00557608 | LAB_005572df
        ;   XREF to: 005572df (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0055760d
        ;   Label: LAB_0055760d
    CALL core_scat.cpp_FUN_00558010     ; 0055760e | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00557613
    TEST EAX,EAX                        ; 00557616
    JNZ 0x005572db                      ; 00557618 | LAB_005572db
        ;   XREF to: 005572db (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0055761e
    PUSH 0x2                            ; 00557620
    JMP 0x005572df                      ; 00557622 | LAB_005572df
        ;   XREF to: 005572df (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00557627
        ;   Label: LAB_00557627
    PUSH ESI                            ; 00557629
    PUSH EAX                            ; 0055762a
    JMP 0x005572e0                      ; 0055762b | LAB_005572e0
        ;   XREF to: 005572e0 (UNCONDITIONAL_JUMP)
    JBE 0x0055760d                      ; 00557630 | LAB_0055760d
        ;   Label: LAB_00557630
        ;   XREF to: 0055760d (CONDITIONAL_JUMP)
    CMP EAX,0x3                         ; 00557632
    JZ 0x005575d1                       ; 00557635 | LAB_005575d1
        ;   XREF to: 005575d1 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00557637
        ;   Label: LAB_00557637
    CALL core_scat.cpp_FUN_00558010     ; 00557638 | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 0055763d
    ADD ESP,0x4                         ; 0055763f
    LEA EAX,[EBX + 0x158]               ; 00557642
    TEST ESI,ESI                        ; 00557648
    JZ 0x00557627                       ; 0055764a | LAB_00557627
        ;   XREF to: 00557627 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0055764c
    PUSH 0x7                            ; 0055764e
    PUSH EAX                            ; 00557650
    JMP 0x005572e0                      ; 00557651 | LAB_005572e0
        ;   XREF to: 005572e0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe28],0x2    ; 00557656
        ;   Label: LAB_00557656
    JNZ 0x0055766b                      ; 0055765d | LAB_0055766b
        ;   XREF to: 0055766b (CONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x18]         ; 0055765f
    PUSH EBX                            ; 00557662
    CALL core_scat.cpp_FUN_005578e0     ; 00557663 | undefined core_scat.cpp_FUN_005578e0()
        ;   XREF to: 005578e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00557668
    LEA EAX,[EBX + 0x158]               ; 0055766b
        ;   Label: LAB_0055766b
    PUSH EAX                            ; 00557671
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00557672 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00557677
    ADD ESP,0x4                         ; 0055767a
    CMP EAX,0xa                         ; 0055767d
    JA 0x005572e8                       ; 00557680 | caseD_6
        ;   XREF to: 005572e8 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5571b8]  ; 00557686 | void * switchdataD_005571b8
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2410],0x0    ; 0055768d
        ;   Label: caseD_a
    JZ 0x005572e8                       ; 00557694 | caseD_6
        ;   XREF to: 005572e8 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0055769a
    CALL core_scat.cpp_FUN_00558010     ; 0055769b | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    XOR ESI,ESI                         ; 005576a0
    ADD ESP,0x4                         ; 005576a2
    TEST EAX,EAX                        ; 005576a5
    JZ 0x005576ae                       ; 005576a7 | LAB_005576ae
        ;   XREF to: 005576ae (CONDITIONAL_JUMP)
    MOV ESI,0x7                         ; 005576a9
    CMP dword ptr [EBX + 0xbe2c],0x0    ; 005576ae
        ;   Label: LAB_005576ae
    JZ 0x005576cd                       ; 005576b5 | LAB_005576cd
        ;   XREF to: 005576cd (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005576b7
    CALL core_scat.cpp_FUN_00558010     ; 005576b8 | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005576bd
    TEST EAX,EAX                        ; 005576c0
    JZ 0x005577c9                       ; 005576c2 | LAB_005577c9
        ;   XREF to: 005577c9 (CONDITIONAL_JUMP)
    MOV ESI,0x9                         ; 005576c8
    CMP dword ptr [EBX + 0xbe30],0x0    ; 005576cd
        ;   Label: LAB_005576cd
    JZ 0x005576ec                       ; 005576d4 | LAB_005576ec
        ;   XREF to: 005576ec (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005576d6
    CALL core_scat.cpp_FUN_00558010     ; 005576d7 | undefined core_scat.cpp_FUN_00558010()
        ;   XREF to: 00558010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005576dc
    TEST EAX,EAX                        ; 005576df
    JZ 0x005577e6                       ; 005576e1 | LAB_005577e6
        ;   XREF to: 005577e6 (CONDITIONAL_JUMP)
    MOV ESI,0xa                         ; 005576e7
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005576ec
        ;   Label: LAB_005576ec
    JZ 0x00557752                       ; 005576f3 | LAB_00557752
        ;   XREF to: 00557752 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005576f5
    JZ 0x00557752                       ; 005576fc | LAB_00557752
        ;   XREF to: 00557752 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1fbe8]   ; 005576fe
    TEST EAX,EAX                        ; 00557704
    JZ 0x00557752                       ; 00557706 | LAB_00557752
        ;   XREF to: 00557752 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00557708
    MOV EDI,dword ptr [EAX + 0x154]     ; 00557709
    CALL dword ptr [EDI + 0xfc]         ; 0055770f
    ADD ESP,0x4                         ; 00557715
    TEST EAX,EAX                        ; 00557718
    JZ 0x00557752                       ; 0055771a | LAB_00557752
        ;   XREF to: 00557752 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1fbe8]   ; 0055771c
    PUSH EAX                            ; 00557722
    MOV EDI,dword ptr [EAX + 0x154]     ; 00557723
    CALL dword ptr [EDI + 0xf8]         ; 00557729
    MOV EAX,dword ptr [EBX + 0x1fbe8]   ; 0055772f
    MOV dword ptr [EBX + 0xbe38],0x0    ; 00557735
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 0055773f
    ADD ESP,0x4                         ; 00557745
    CMP EDX,0x8                         ; 00557748
    JNZ 0x00557752                      ; 0055774b | LAB_00557752
        ;   XREF to: 00557752 (CONDITIONAL_JUMP)
    MOV ESI,0xb                         ; 0055774d
    FLD float ptr [EBX + 0xbe50]        ; 00557752
        ;   Label: LAB_00557752
    FMUL float ptr [EBX + 0x2438]       ; 00557758
    LEA EDI,[EBX + 0x158]               ; 0055775e
    FADD float ptr [EBX + 0x2418]       ; 00557764
    PUSH EDI                            ; 0055776a
    FSTP float ptr [EBX + 0x2418]       ; 0055776b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00557771 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00557776
    ADD ESP,0x4                         ; 00557779
    CMP ESI,EAX                         ; 0055777c
    JZ 0x0055778c                       ; 0055777e | LAB_0055778c
        ;   XREF to: 0055778c (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00557780
    PUSH ESI                            ; 00557782
    PUSH EDI                            ; 00557783
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00557784 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00557789
    CMP dword ptr [EBX + 0xbe44],0x0    ; 0055778c
        ;   Label: LAB_0055778c
    JZ 0x005572e8                       ; 00557793 | caseD_6
        ;   XREF to: 005572e8 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe44],0x0    ; 00557799
    MOV EDX,dword ptr [EBX + 0x1fbd4]   ; 005577a3
    MOV ESI,dword ptr [EBX + 0x154]     ; 005577a9
    TEST EDX,EDX                        ; 005577af
    SETZ AL                             ; 005577b1
    AND EAX,0xff                        ; 005577b4
    PUSH EAX                            ; 005577b9
    PUSH EBX                            ; 005577ba
    CALL dword ptr [ESI + 0x158]        ; 005577bb
    ADD ESP,0x8                         ; 005577c1
    JMP 0x005572e8                      ; 005577c4 | caseD_6
        ;   XREF to: 005572e8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe34],0x0    ; 005577c9
        ;   Label: LAB_005577c9
    JZ 0x005577dc                       ; 005577d0 | LAB_005577dc
        ;   XREF to: 005577dc (CONDITIONAL_JUMP)
    MOV ESI,0x2                         ; 005577d2
    JMP 0x005576cd                      ; 005577d7 | LAB_005576cd
        ;   XREF to: 005576cd (UNCONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 005577dc
        ;   Label: LAB_005577dc
    JMP 0x005576cd                      ; 005577e1 | LAB_005576cd
        ;   XREF to: 005576cd (UNCONDITIONAL_JUMP)
    MOV ESI,0x3                         ; 005577e6
        ;   Label: LAB_005577e6
    JMP 0x005576ec                      ; 005577eb | LAB_005576ec
        ;   XREF to: 005576ec (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2598],EAX    ; 005577f0
        ;   Label: LAB_005577f0
    JMP 0x005573f5                      ; 005577f6 | LAB_005573f5
        ;   XREF to: 005573f5 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005577fb
        ;   Label: LAB_005577fb
    JZ 0x00557408                       ; 00557802 | LAB_00557408
        ;   XREF to: 00557408 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00557808
    PUSH 0xf                            ; 0055780a
    PUSH EDI                            ; 0055780c
    JMP 0x00557400                      ; 0055780d | LAB_00557400
        ;   XREF to: 00557400 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x23ac]              ; 00557812
        ;   Label: LAB_00557812
    LEA ESI,[EBX + 0x241c]              ; 00557818
    FLD float ptr [EAX]                 ; 0055781e
    FADD float ptr [ESI]                ; 00557820
    FSTP float ptr [ESP + 0x3c]         ; 00557822
    FLD float ptr [EAX + 0x4]           ; 00557826
    FADD float ptr [ESI + 0x4]          ; 00557829
    FLD float ptr [EBP + 0x18]          ; 0055782c
    FLD ST0                             ; 0055782f
    FXCH ST2                            ; 00557831
    FSTP float ptr [ESP + 0x40]         ; 00557833
    FLD float ptr [EAX + 0x8]           ; 00557837
    FADD float ptr [ESI + 0x8]          ; 0055783a
    FXCH ST2                            ; 0055783d
    FMUL double ptr [0x006413ac]        ; 0055783f | double DOUBLE_006413ac
    FXCH ST2                            ; 00557845
    FSTP float ptr [ESP + 0x44]         ; 00557847
    MOV dword ptr [EAX + 0x8],0x0       ; 0055784b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00557852
    MOV dword ptr [EAX + 0x4],EDX       ; 00557855
    MOV EDX,dword ptr [EAX + 0x4]       ; 00557858
    MOV dword ptr [EAX],EDX             ; 0055785b
    MOV dword ptr [ESI + 0x8],0x0       ; 0055785d
    MOV EAX,dword ptr [ESI + 0x8]       ; 00557864
    MOV dword ptr [ESI + 0x4],EAX       ; 00557867
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055786a
    MOV dword ptr [ESI],EAX             ; 0055786d
    FLD float ptr [EBX + 0x242c]        ; 0055786f
    FXCH ST2                            ; 00557875
    FSUBR ST0,ST2                       ; 00557877
    LEA EAX,[EBX + 0x2428]              ; 00557879
    FSTP ST2                            ; 0055787f
    FXCH                                ; 00557881
    FSTP float ptr [EBX + 0x242c]       ; 00557883
    FLD float ptr [EAX]                 ; 00557889
    FMUL ST1                            ; 0055788b
    FSTP float ptr [ESP + 0x24]         ; 0055788d
    FLD float ptr [EAX + 0x4]           ; 00557891
    FMUL ST1                            ; 00557894
    FSTP float ptr [ESP + 0x28]         ; 00557896
    FMUL float ptr [EAX + 0x8]          ; 0055789a
    FLD float ptr [ESP + 0x40]          ; 0055789d
    FLD float ptr [ESP + 0x3c]          ; 005578a1
    FADD float ptr [ESP + 0x24]         ; 005578a5
    FLD float ptr [ESP + 0x44]          ; 005578a9
    FXCH                                ; 005578ad
    FSTP float ptr [ESP + 0x3c]         ; 005578af
    FXCH                                ; 005578b3
    FADD float ptr [ESP + 0x28]         ; 005578b5
    LEA EAX,[ESP + 0x3c]                ; 005578b9
    FSTP float ptr [ESP + 0x40]         ; 005578bd
    FXCH                                ; 005578c1
    FSTP float ptr [ESP + 0x2c]         ; 005578c3
    PUSH EAX                            ; 005578c7
    FADD float ptr [ESP + 0x30]         ; 005578c8
    PUSH EBX                            ; 005578cc
    FSTP float ptr [ESP + 0x4c]         ; 005578cd
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 005578d1 | void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005578d6
    JMP 0x00557408                      ; 005578d9 | LAB_00557408
        ;   XREF to: 00557408 (UNCONDITIONAL_JUMP)

