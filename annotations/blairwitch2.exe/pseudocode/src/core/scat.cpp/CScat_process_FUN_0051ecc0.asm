; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_process_FUN_0051ecc0(CScat *this_ptr,float delta_time)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0051ec88 = 0051f1f7
;   TerminatedCString s_s_confused_while_walking_005e2b15
;   undefined4 DAT_005e2b3f
;   undefined4 DAT_005e2b43
;   undefined4 DAT_005e2b47
;   undefined4 DAT_005e2b4b
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01e62068
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_inv.cpp_CInventory_updateInventory_FUN_004dccd0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_005038a0
;   core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ecc0
        ;   Label: core_scat.cpp_CScat_process_FUN_0051ecc0
    PUSH ESI                            ; 0051ecc1
    PUSH EDI                            ; 0051ecc2
    PUSH EBP                            ; 0051ecc3
    SUB ESP,0xac                        ; 0051ecc4
    MOV EBX,dword ptr [ESP + 0xc0]      ; 0051ecca
    PUSH dword ptr [ESP + 0xc4]         ; 0051ecd1
    PUSH EBX                            ; 0051ecd8
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0051ecd9
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051ecde
    TEST EAX,EAX                        ; 0051ece1
    JNZ 0x0051ecf0                      ; 0051ece3
        ;   XREF to: 0051ecf0 (CONDITIONAL_JUMP)  ; LAB_0051ecf0
    ADD ESP,0xac                        ; 0051ece5
        ;   Label: caseD_5
    POP EBP                             ; 0051eceb
    POP EDI                             ; 0051ecec
    POP ESI                             ; 0051eced
    POP EBX                             ; 0051ecee
    RET                                 ; 0051ecef
    PUSH dword ptr [ESP + 0xc4]         ; 0051ecf0
        ;   Label: LAB_0051ecf0
    PUSH EBX                            ; 0051ecf7
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0051ecf8
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0051ecfd
    FLD float ptr [EBX + 0x10a60]       ; 0051ed00
    FSUB float ptr [ESP + 0xc4]         ; 0051ed06
    FST float ptr [EBX + 0x10a60]       ; 0051ed0d
    FLDZ                                ; 0051ed13
    FCOMPP                              ; 0051ed15
    FNSTSW AX                           ; 0051ed17
    SAHF                                ; 0051ed19
    JBE 0x0051ed26                      ; 0051ed1a
        ;   XREF to: 0051ed26 (CONDITIONAL_JUMP)  ; LAB_0051ed26
    MOV dword ptr [EBX + 0x10a60],0x0   ; 0051ed1c
    LEA ESI,[EBX + 0x2508]              ; 0051ed26
        ;   Label: LAB_0051ed26
    PUSH dword ptr [ESP + 0xc4]         ; 0051ed2c
    MOV dword ptr [ESI + 0x8],0x0       ; 0051ed33
    PUSH EBX                            ; 0051ed3a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051ed3b
    MOV dword ptr [ESI + 0x4],EAX       ; 0051ed3e
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051ed41
    MOV dword ptr [ESI],EAX             ; 0051ed44
    CALL core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0 ; 0051ed46
        ;   XREF to: 0051f9c0 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0(CScat * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051ed4b
    PUSH dword ptr [ESP + 0xc4]         ; 0051ed4e
    FLD float ptr [EBX + 0x2510]        ; 0051ed55
    PUSH EBX                            ; 0051ed5b
    FSTP float ptr [EBX + 0x2594]       ; 0051ed5c
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 0051ed62
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051ed67
    TEST EAX,EAX                        ; 0051ed6a
    JZ 0x0051f1bc                       ; 0051ed6c
        ;   XREF to: 0051f1bc (CONDITIONAL_JUMP)  ; LAB_0051f1bc
    MOV dword ptr [ESI + 0x8],0x0       ; 0051ed72
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051ed79
    MOV dword ptr [ESI + 0x4],EAX       ; 0051ed7c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051ed7f
    MOV dword ptr [ESI],EAX             ; 0051ed82
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0051ed84
    LEA ESI,[EBX + 0x2b4]               ; 0051ed8a
    CMP EAX,0x2                         ; 0051ed90
    JNC 0x0051f196                      ; 0051ed93
        ;   XREF to: 0051f196 (CONDITIONAL_JUMP)  ; LAB_0051f196
    CMP EAX,0x1                         ; 0051ed99
    JNZ 0x0051f19d                      ; 0051ed9c
        ;   XREF to: 0051f19d (CONDITIONAL_JUMP)  ; LAB_0051f19d
    PUSH EBX                            ; 0051eda2
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051eda3
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051eda8
    TEST EAX,EAX                        ; 0051edab
    JZ 0x0051f16a                       ; 0051edad
        ;   XREF to: 0051f16a (CONDITIONAL_JUMP)  ; LAB_0051f16a
    PUSH 0x1                            ; 0051edb3
        ;   Label: LAB_0051edb3
    PUSH 0x9                            ; 0051edb5
    PUSH ESI                            ; 0051edb7
        ;   Label: LAB_0051edb7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0051edb8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0051edb8
    ADD ESP,0xc                         ; 0051edbd
    MOV EBP,dword ptr [EBX + 0x276c]    ; 0051edc0
        ;   Label: caseD_4
    TEST EBP,EBP                        ; 0051edc6
    JZ 0x0051f383                       ; 0051edc8
        ;   XREF to: 0051f383 (CONDITIONAL_JUMP)  ; LAB_0051f383
    LEA EAX,[EBP + 0x20]                ; 0051edce
    PUSH EAX                            ; 0051edd1
    PUSH EBX                            ; 0051edd2
    LEA ESI,[ESP + 0x34]                ; 0051edd3
    LEA EDI,[ESP + 0x58]                ; 0051edd7
    CALL core_actor.cpp_FUN_00408de0    ; 0051eddb
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x34]                ; 0051ede0
    ADD ESP,0x8                         ; 0051ede4
    LEA EAX,[ESP + 0x50]                ; 0051ede7
    MOVSD ES:EDI,ESI                    ; 0051edeb
    MOVSD ES:EDI,ESI                    ; 0051edec
    MOVSD ES:EDI,ESI                    ; 0051eded
    PUSH EAX                            ; 0051edee
    LEA ESI,[ESP + 0x84]                ; 0051edef
    LEA EDI,[ESP + 0x48]                ; 0051edf6
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0051edfa
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x84]                ; 0051edff
    ADD ESP,0x4                         ; 0051ee06
    MOVSD ES:EDI,ESI                    ; 0051ee09
    MOVSD ES:EDI,ESI                    ; 0051ee0a
    MOVSD ES:EDI,ESI                    ; 0051ee0b
    PUSH dword ptr [ESP + 0x48]         ; 0051ee0c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0051ee10
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xac],EAX      ; 0051ee15
    FLD float ptr [ESP + 0xac]          ; 0051ee1c
    ADD ESP,0x4                         ; 0051ee23
    FST float ptr [ESP + 0xa4]          ; 0051ee26
    FCOMP float ptr [0x005e2b3f]        ; 0051ee2d | DAT_005e2b3f
    FNSTSW AX                           ; 0051ee33
    SAHF                                ; 0051ee35
    JNC 0x0051ee4c                      ; 0051ee36
        ;   XREF to: 0051ee4c (CONDITIONAL_JUMP)  ; LAB_0051ee4c
    FLD float ptr [ESP + 0xa4]          ; 0051ee38
    FADD float ptr [0x005e2b43]         ; 0051ee3f | DAT_005e2b43
    FSTP float ptr [ESP + 0xa4]         ; 0051ee45
    FLD float ptr [ESP + 0xa4]          ; 0051ee4c
        ;   Label: LAB_0051ee4c
    FCOMP float ptr [0x005e2b47]        ; 0051ee53 | DAT_005e2b47
    FNSTSW AX                           ; 0051ee59
    SAHF                                ; 0051ee5b
    JBE 0x0051ee72                      ; 0051ee5c
        ;   XREF to: 0051ee72 (CONDITIONAL_JUMP)  ; LAB_0051ee72
    FLD float ptr [ESP + 0xa4]          ; 0051ee5e
    FADD float ptr [0x005e2b4b]         ; 0051ee65 | DAT_005e2b4b
    FSTP float ptr [ESP + 0xa4]         ; 0051ee6b
    FLD float ptr [ESP + 0xc4]          ; 0051ee72
        ;   Label: LAB_0051ee72
    FMUL float ptr [0x005e2b43]         ; 0051ee79 | DAT_005e2b43
    FLD float ptr [ESP + 0xa4]          ; 0051ee7f
    FXCH                                ; 0051ee86
    FST float ptr [ESP + 0xa0]          ; 0051ee88
    FCHS                                ; 0051ee8f
    FSTP float ptr [ESP + 0x9c]         ; 0051ee91
    FCOMP float ptr [ESP + 0x9c]        ; 0051ee98
    FNSTSW AX                           ; 0051ee9f
    SAHF                                ; 0051eea1
    JNC 0x0051eeb2                      ; 0051eea2
        ;   XREF to: 0051eeb2 (CONDITIONAL_JUMP)  ; LAB_0051eeb2
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0051eea4
    MOV dword ptr [ESP + 0xa4],EAX      ; 0051eeab
    FLD float ptr [ESP + 0xa4]          ; 0051eeb2
        ;   Label: LAB_0051eeb2
    FCOMP float ptr [ESP + 0xa0]        ; 0051eeb9
    FNSTSW AX                           ; 0051eec0
    SAHF                                ; 0051eec2
    JBE 0x0051eed3                      ; 0051eec3
        ;   XREF to: 0051eed3 (CONDITIONAL_JUMP)  ; LAB_0051eed3
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0051eec5
    MOV dword ptr [ESP + 0xa4],EAX      ; 0051eecc
    FLD float ptr [EBX + 0x34]          ; 0051eed3
        ;   Label: LAB_0051eed3
    FADD float ptr [ESP + 0xa4]         ; 0051eed6
    PUSH EBX                            ; 0051eedd
    FSTP float ptr [EBX + 0x34]         ; 0051eede
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0051eee1
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    MOV EBP,dword ptr [EBX + 0x276c]    ; 0051eee6
    ADD ESP,0x4                         ; 0051eeec
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0051eeef
    PUSH 0x0                            ; 0051eef5
    MOV dword ptr [ESP + 0xac],EAX      ; 0051eef7
    LEA EAX,[EBX + 0x2b4]               ; 0051eefe
    PUSH EAX                            ; 0051ef04
    LEA ESI,[ESP + 0x28]                ; 0051ef05
    MOV dword ptr [ESP + 0xa0],EAX      ; 0051ef09
    CALL core_skeleton.cpp_FUN_00546a90 ; 0051ef10
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 0051ef15
    LEA EAX,[ESP + 0x74]                ; 0051ef18
    PUSH EAX                            ; 0051ef1c
    LEA EDI,[ESP + 0x78]                ; 0051ef1d
    PUSH EBX                            ; 0051ef21
    LEA ESI,[ESP + 0x28]                ; 0051ef22
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0051ef26
    PUSH EBP                            ; 0051ef2d
    MOVSD ES:EDI,ESI                    ; 0051ef2e
    MOVSD ES:EDI,ESI                    ; 0051ef2f
    MOVSD ES:EDI,ESI                    ; 0051ef30
    CALL dword ptr [EAX + 0x118]        ; 0051ef31
    ADD ESP,0xc                         ; 0051ef37
    TEST EAX,EAX                        ; 0051ef3a
    JZ 0x0051f35a                       ; 0051ef3c
        ;   XREF to: 0051f35a (CONDITIONAL_JUMP)  ; LAB_0051f35a
    CMP dword ptr [EBX + 0x276c],0x0    ; 0051ef42
    JNZ 0x0051f365                      ; 0051ef49
        ;   XREF to: 0051f365 (CONDITIONAL_JUMP)  ; LAB_0051f365
    PUSH 0x1                            ; 0051ef4f
        ;   Label: LAB_0051ef4f
    PUSH 0x0                            ; 0051ef51
    LEA EAX,[EBX + 0x2b4]               ; 0051ef53
    PUSH EAX                            ; 0051ef59
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0051ef5a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0051ef5a
    ADD ESP,0xc                         ; 0051ef5f
    LEA EAX,[EBX + 0x2437c]             ; 0051ef62
        ;   Label: LAB_0051ef62
    PUSH EAX                            ; 0051ef68
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004dccd0 ; 0051ef69
        ;   XREF to: 004dccd0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateInventory_FUN_004dccd0(CInventory * this_ptr)
    MOV EDI,dword ptr [EBX + 0x25654]   ; 0051ef6e
    ADD ESP,0x4                         ; 0051ef74
    TEST EDI,EDI                        ; 0051ef77
    JZ 0x0051ef8f                       ; 0051ef79
        ;   XREF to: 0051ef8f (CONDITIONAL_JUMP)  ; LAB_0051ef8f
    PUSH dword ptr [ESP + 0xc4]         ; 0051ef7b
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 0051ef82
    PUSH EDI                            ; 0051ef88
    CALL dword ptr [EDX + 0x14]         ; 0051ef89
    ADD ESP,0x8                         ; 0051ef8c
    PUSH dword ptr [ESP + 0xc4]         ; 0051ef8f
        ;   Label: LAB_0051ef8f
    PUSH EBX                            ; 0051ef96
    CALL core_scat.cpp_CScat_updateWeaponState_FUN_0051fd00 ; 0051ef97
        ;   XREF to: 0051fd00 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_updateWeaponState_FUN_0051fd00(CScat * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051ef9c
    PUSH EBX                            ; 0051ef9f
    XOR ESI,ESI                         ; 0051efa0
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 0051efa2
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    FLD float ptr [EBX + 0x25a8]        ; 0051efa7
    FLDZ                                ; 0051efad
    ADD ESP,0x4                         ; 0051efaf
    FCOMPP                              ; 0051efb2
    FNSTSW AX                           ; 0051efb4
    SAHF                                ; 0051efb6
    JC 0x0051efbe                       ; 0051efb7
        ;   XREF to: 0051efbe (CONDITIONAL_JUMP)  ; LAB_0051efbe
    MOV ESI,0x1                         ; 0051efb9
    PUSH EBX                            ; 0051efbe
        ;   Label: LAB_0051efbe
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051efbf
    CALL dword ptr [EAX + 0xfc]         ; 0051efc5
    ADD ESP,0x4                         ; 0051efcb
    TEST EAX,EAX                        ; 0051efce
    JZ 0x0051efd7                       ; 0051efd0
        ;   XREF to: 0051efd7 (CONDITIONAL_JUMP)  ; LAB_0051efd7
    MOV ESI,0x1                         ; 0051efd2
    PUSH 0xc                            ; 0051efd7
        ;   Label: LAB_0051efd7
    LEA EAX,[EBX + 0x2b4]               ; 0051efd9
    PUSH EAX                            ; 0051efdf
    CALL core_motion.cpp_FUN_005038a0   ; 0051efe0
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0051efe5
    FLD float ptr [ESP + 0xb0]          ; 0051efec
    FLDZ                                ; 0051eff3
    ADD ESP,0x8                         ; 0051eff5
    FCOMPP                              ; 0051eff8
    FNSTSW AX                           ; 0051effa
    SAHF                                ; 0051effc
    JNC 0x0051f004                      ; 0051effd
        ;   XREF to: 0051f004 (CONDITIONAL_JUMP)  ; LAB_0051f004
    MOV ESI,0x1                         ; 0051efff
    PUSH 0xd                            ; 0051f004
        ;   Label: LAB_0051f004
    LEA EAX,[EBX + 0x2b4]               ; 0051f006
    PUSH EAX                            ; 0051f00c
    CALL core_motion.cpp_FUN_005038a0   ; 0051f00d
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0051f012
    FLD float ptr [ESP + 0xb0]          ; 0051f019
    FLDZ                                ; 0051f020
    ADD ESP,0x8                         ; 0051f022
    FCOMPP                              ; 0051f025
    FNSTSW AX                           ; 0051f027
    SAHF                                ; 0051f029
    JNC 0x0051f031                      ; 0051f02a
        ;   XREF to: 0051f031 (CONDITIONAL_JUMP)  ; LAB_0051f031
    MOV ESI,0x1                         ; 0051f02c
    PUSH 0x4                            ; 0051f031
        ;   Label: LAB_0051f031
    LEA EAX,[EBX + 0x2b4]               ; 0051f033
    PUSH EAX                            ; 0051f039
    CALL core_motion.cpp_FUN_005038a0   ; 0051f03a
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0051f03f
    FLD float ptr [ESP + 0xb0]          ; 0051f046
    FLDZ                                ; 0051f04d
    ADD ESP,0x8                         ; 0051f04f
    FCOMPP                              ; 0051f052
    FNSTSW AX                           ; 0051f054
    SAHF                                ; 0051f056
    JNC 0x0051f05e                      ; 0051f057
        ;   XREF to: 0051f05e (CONDITIONAL_JUMP)  ; LAB_0051f05e
    MOV ESI,0x1                         ; 0051f059
    PUSH 0x5                            ; 0051f05e
        ;   Label: LAB_0051f05e
    LEA EAX,[EBX + 0x2b4]               ; 0051f060
    PUSH EAX                            ; 0051f066
    CALL core_motion.cpp_FUN_005038a0   ; 0051f067
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0051f06c
    FLD float ptr [ESP + 0xb0]          ; 0051f073
    FLDZ                                ; 0051f07a
    ADD ESP,0x8                         ; 0051f07c
    FCOMPP                              ; 0051f07f
    FNSTSW AX                           ; 0051f081
    SAHF                                ; 0051f083
    JNC 0x0051f08b                      ; 0051f084
        ;   XREF to: 0051f08b (CONDITIONAL_JUMP)  ; LAB_0051f08b
    MOV ESI,0x1                         ; 0051f086
    PUSH ESI                            ; 0051f08b
        ;   Label: LAB_0051f08b
    PUSH dword ptr [ESP + 0xc8]         ; 0051f08c
    PUSH EBX                            ; 0051f093
    CALL core_scat.cpp_FUN_005203c0     ; 0051f094
        ;   XREF to: 005203c0 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_FUN_005203c0()
    ADD ESP,0xc                         ; 0051f099
    LEA EBP,[EBX + 0x2b4]               ; 0051f09c
    PUSH EBP                            ; 0051f0a2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0051f0a3
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f0a8
    PUSH EBX                            ; 0051f0ab
    CALL core_scat.cpp_CScat_blendLayerAction_FUN_0051ff60 ; 0051f0ac
        ;   XREF to: 0051ff60 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_blendLayerAction_FUN_0051ff60(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051f0b1
    PUSH EBX                            ; 0051f0b4
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051f0b5
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051f0ba
    TEST EAX,EAX                        ; 0051f0bd
    JNZ 0x0051f113                      ; 0051f0bf
        ;   XREF to: 0051f113 (CONDITIONAL_JUMP)  ; LAB_0051f113
    PUSH EBX                            ; 0051f0c1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051f0c2
    CALL dword ptr [EAX + 0x114]        ; 0051f0c8
    ADD ESP,0x4                         ; 0051f0ce
    TEST EAX,EAX                        ; 0051f0d1
    JNZ 0x0051f113                      ; 0051f0d3
        ;   XREF to: 0051f113 (CONDITIONAL_JUMP)  ; LAB_0051f113
    PUSH 0x544cc0                       ; 0051f0d5
    MOV EAX,[0x01e62068]                ; 0051f0da | DAT_01e62068
    PUSH EAX                            ; 0051f0df
    LEA EAX,[EBX + 0x25644]             ; 0051f0e0
    PUSH dword ptr [EBX + 0x25650]      ; 0051f0e6
    PUSH EAX                            ; 0051f0ec
    LEA ESI,[ESP + 0x10]                ; 0051f0ed
    CALL core_xform.cpp_FUN_00594380    ; 0051f0f1
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    ADD ESP,0x4                         ; 0051f0f6
    LEA EAX,[ESP + 0x1c]                ; 0051f0f9
    PUSH EAX                            ; 0051f0fd
    LEA EDI,[ESP + 0x20]                ; 0051f0fe
    LEA ESI,[ESP + 0x10]                ; 0051f102
    PUSH EBP                            ; 0051f106
    MOVSD ES:EDI,ESI                    ; 0051f107
    MOVSD ES:EDI,ESI                    ; 0051f108
    MOVSD ES:EDI,ESI                    ; 0051f109
    MOVSD ES:EDI,ESI                    ; 0051f10a
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0 ; 0051f10b
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0051f110
    PUSH dword ptr [ESP + 0xc4]         ; 0051f113
        ;   Label: LAB_0051f113
    PUSH EBX                            ; 0051f11a
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0051f11b
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051f120
    PUSH EBX                            ; 0051f123
    CALL core_scat.cpp_FUN_00520df0     ; 0051f124
        ;   XREF to: 00520df0 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_FUN_00520df0()
    ADD ESP,0x4                         ; 0051f129
    ADD ESP,0xac                        ; 0051f12c
    POP EBP                             ; 0051f132
    POP EDI                             ; 0051f133
    POP ESI                             ; 0051f134
    POP EBX                             ; 0051f135
    RET                                 ; 0051f136
    PUSH EBX                            ; 0051f137
        ;   Label: LAB_0051f137
    PUSH 0x5e2b15                       ; 0051f138 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00609ed0]      ; 0051f13d | g_CConsolePtr
    PUSH EDI                            ; 0051f143 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0051f144
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0051f149
    PUSH EBX                            ; 0051f14c
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051f14d
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051f152
    TEST EAX,EAX                        ; 0051f155
    JZ 0x0051f162                       ; 0051f157
        ;   XREF to: 0051f162 (CONDITIONAL_JUMP)  ; LAB_0051f162
    PUSH 0x1                            ; 0051f159
    PUSH 0x7                            ; 0051f15b
    JMP 0x0051edb7                      ; 0051f15d
        ;   XREF to: 0051edb7 (UNCONDITIONAL_JUMP)  ; LAB_0051edb7
    PUSH 0x1                            ; 0051f162
        ;   Label: LAB_0051f162
    PUSH EAX                            ; 0051f164
    JMP 0x0051edb7                      ; 0051f165
        ;   XREF to: 0051edb7 (UNCONDITIONAL_JUMP)  ; LAB_0051edb7
    PUSH 0x1                            ; 0051f16a
        ;   Label: LAB_0051f16a
    PUSH 0x1                            ; 0051f16c
    JMP 0x0051edb7                      ; 0051f16e
        ;   XREF to: 0051edb7 (UNCONDITIONAL_JUMP)  ; LAB_0051edb7
    PUSH EBX                            ; 0051f173
        ;   Label: LAB_0051f173
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051f174
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051f179
    TEST EAX,EAX                        ; 0051f17c
    JNZ 0x0051edb3                      ; 0051f17e
        ;   XREF to: 0051edb3 (CONDITIONAL_JUMP)  ; LAB_0051edb3
    PUSH 0x1                            ; 0051f184
    PUSH 0x2                            ; 0051f186
    JMP 0x0051edb7                      ; 0051f188
        ;   XREF to: 0051edb7 (UNCONDITIONAL_JUMP)  ; LAB_0051edb7
    PUSH 0x1                            ; 0051f18d
        ;   Label: LAB_0051f18d
    PUSH EDX                            ; 0051f18f
    PUSH EAX                            ; 0051f190
    JMP 0x0051edb8                      ; 0051f191
        ;   XREF to: 0051edb8 (UNCONDITIONAL_JUMP)  ; LAB_0051edb8
    JBE 0x0051f173                      ; 0051f196
        ;   XREF to: 0051f173 (CONDITIONAL_JUMP)  ; LAB_0051f173
        ;   Label: LAB_0051f196
    CMP EAX,0x3                         ; 0051f198
    JZ 0x0051f137                       ; 0051f19b
        ;   XREF to: 0051f137 (CONDITIONAL_JUMP)  ; LAB_0051f137
    PUSH EBX                            ; 0051f19d
        ;   Label: LAB_0051f19d
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051f19e
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    MOV EDX,EAX                         ; 0051f1a3
    ADD ESP,0x4                         ; 0051f1a5
    LEA EAX,[EBX + 0x2b4]               ; 0051f1a8
    TEST EDX,EDX                        ; 0051f1ae
    JZ 0x0051f18d                       ; 0051f1b0
        ;   XREF to: 0051f18d (CONDITIONAL_JUMP)  ; LAB_0051f18d
    PUSH 0x1                            ; 0051f1b2
    PUSH 0x7                            ; 0051f1b4
    PUSH EAX                            ; 0051f1b6
    JMP 0x0051edb8                      ; 0051f1b7
        ;   XREF to: 0051edb8 (UNCONDITIONAL_JUMP)  ; LAB_0051edb8
    CMP dword ptr [EBX + 0x10a64],0x2   ; 0051f1bc
        ;   Label: LAB_0051f1bc
    JNZ 0x0051f1d5                      ; 0051f1c3
        ;   XREF to: 0051f1d5 (CONDITIONAL_JUMP)  ; LAB_0051f1d5
    PUSH dword ptr [ESP + 0xc4]         ; 0051f1c5
    PUSH EBX                            ; 0051f1cc
    CALL core_scat.cpp_CScat_updateAI_FUN_0051f490 ; 0051f1cd
        ;   XREF to: 0051f490 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_updateAI_FUN_0051f490(CScat * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051f1d2
    LEA EAX,[EBX + 0x2b4]               ; 0051f1d5
        ;   Label: LAB_0051f1d5
    PUSH EAX                            ; 0051f1db
    CALL core_motion.cpp_FUN_005035c0   ; 0051f1dc
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051f1e1
    ADD ESP,0x4                         ; 0051f1e4
    CMP EAX,0xa                         ; 0051f1e7
    JA 0x0051edc0                       ; 0051f1ea
        ;   XREF to: 0051edc0 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x51ec88]  ; 0051f1f0 | caseD_a | caseD_8 | caseD_5
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2570],0x0    ; 0051f1f7
        ;   Label: caseD_0
    JZ 0x0051edc0                       ; 0051f1fe
        ;   XREF to: 0051edc0 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EBX                            ; 0051f204
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051f205
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    XOR ESI,ESI                         ; 0051f20a
    ADD ESP,0x4                         ; 0051f20c
    TEST EAX,EAX                        ; 0051f20f
    JZ 0x0051f218                       ; 0051f211
        ;   XREF to: 0051f218 (CONDITIONAL_JUMP)  ; LAB_0051f218
    MOV ESI,0x7                         ; 0051f213
    CMP dword ptr [EBX + 0x10a68],0x0   ; 0051f218
        ;   Label: LAB_0051f218
    JZ 0x0051f237                       ; 0051f21f
        ;   XREF to: 0051f237 (CONDITIONAL_JUMP)  ; LAB_0051f237
    PUSH EBX                            ; 0051f221
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051f222
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051f227
    TEST EAX,EAX                        ; 0051f22a
    JZ 0x0051f333                       ; 0051f22c
        ;   XREF to: 0051f333 (CONDITIONAL_JUMP)  ; LAB_0051f333
    MOV ESI,0x9                         ; 0051f232
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 0051f237
        ;   Label: LAB_0051f237
    JZ 0x0051f256                       ; 0051f23e
        ;   XREF to: 0051f256 (CONDITIONAL_JUMP)  ; LAB_0051f256
    PUSH EBX                            ; 0051f240
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0 ; 0051f241
        ;   XREF to: 0051fcb0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051f246
    TEST EAX,EAX                        ; 0051f249
    JZ 0x0051f350                       ; 0051f24b
        ;   XREF to: 0051f350 (CONDITIONAL_JUMP)  ; LAB_0051f350
    MOV ESI,0xa                         ; 0051f251
    CMP dword ptr [EBX + 0x10a74],0x0   ; 0051f256
        ;   Label: LAB_0051f256
    JZ 0x0051f2bc                       ; 0051f25d
        ;   XREF to: 0051f2bc (CONDITIONAL_JUMP)  ; LAB_0051f2bc
    CMP dword ptr [EBX + 0x25640],0x0   ; 0051f25f
    JZ 0x0051f2bc                       ; 0051f266
        ;   XREF to: 0051f2bc (CONDITIONAL_JUMP)  ; LAB_0051f2bc
    MOV EDI,dword ptr [EBX + 0x25654]   ; 0051f268
    TEST EDI,EDI                        ; 0051f26e
    JZ 0x0051f2bc                       ; 0051f270
        ;   XREF to: 0051f2bc (CONDITIONAL_JUMP)  ; LAB_0051f2bc
    PUSH EDI                            ; 0051f272
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 0051f273
    CALL dword ptr [EDX + 0xf0]         ; 0051f279
    ADD ESP,0x4                         ; 0051f27f
    TEST EAX,EAX                        ; 0051f282
    JZ 0x0051f2bc                       ; 0051f284
        ;   XREF to: 0051f2bc (CONDITIONAL_JUMP)  ; LAB_0051f2bc
    MOV EAX,dword ptr [EBX + 0x25654]   ; 0051f286
    PUSH EAX                            ; 0051f28c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0051f28d
    CALL dword ptr [EDX + 0xec]         ; 0051f293
    MOV EAX,dword ptr [EBX + 0x25654]   ; 0051f299
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0051f29f
    MOV EBP,dword ptr [EAX + 0x43c]     ; 0051f2a9
    ADD ESP,0x4                         ; 0051f2af
    CMP EBP,0x9                         ; 0051f2b2
    JNZ 0x0051f2bc                      ; 0051f2b5
        ;   XREF to: 0051f2bc (CONDITIONAL_JUMP)  ; LAB_0051f2bc
    MOV ESI,0xb                         ; 0051f2b7
    FLD float ptr [EBX + 0x10a90]       ; 0051f2bc
        ;   Label: LAB_0051f2bc
    FMUL float ptr [EBX + 0x2598]       ; 0051f2c2
    LEA EDI,[EBX + 0x2b4]               ; 0051f2c8
    FADD float ptr [EBX + 0x2578]       ; 0051f2ce
    PUSH EDI                            ; 0051f2d4
    FSTP float ptr [EBX + 0x2578]       ; 0051f2d5
    CALL core_motion.cpp_FUN_005035c0   ; 0051f2db
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051f2e0
    ADD ESP,0x4                         ; 0051f2e3
    CMP ESI,EAX                         ; 0051f2e6
    JZ 0x0051f2f6                       ; 0051f2e8
        ;   XREF to: 0051f2f6 (CONDITIONAL_JUMP)  ; LAB_0051f2f6
    PUSH 0x1                            ; 0051f2ea
    PUSH ESI                            ; 0051f2ec
    PUSH EDI                            ; 0051f2ed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0051f2ee
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051f2f3
    CMP dword ptr [EBX + 0x10a80],0x0   ; 0051f2f6
        ;   Label: LAB_0051f2f6
    JZ 0x0051edc0                       ; 0051f2fd
        ;   XREF to: 0051edc0 (CONDITIONAL_JUMP)  ; caseD_8
    MOV dword ptr [EBX + 0x10a80],0x0   ; 0051f303
    MOV ECX,dword ptr [EBX + 0x25640]   ; 0051f30d
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0051f313
    TEST ECX,ECX                        ; 0051f319
    SETZ AL                             ; 0051f31b
    AND EAX,0xff                        ; 0051f31e
    PUSH EAX                            ; 0051f323
    PUSH EBX                            ; 0051f324
    CALL dword ptr [EDX + 0x150]        ; 0051f325
    ADD ESP,0x8                         ; 0051f32b
    JMP 0x0051edc0                      ; 0051f32e
        ;   XREF to: 0051edc0 (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0x10a70],0x0   ; 0051f333
        ;   Label: LAB_0051f333
    JZ 0x0051f346                       ; 0051f33a
        ;   XREF to: 0051f346 (CONDITIONAL_JUMP)  ; LAB_0051f346
    MOV ESI,0x2                         ; 0051f33c
    JMP 0x0051f237                      ; 0051f341
        ;   XREF to: 0051f237 (UNCONDITIONAL_JUMP)  ; LAB_0051f237
    MOV ESI,0x1                         ; 0051f346
        ;   Label: LAB_0051f346
    JMP 0x0051f237                      ; 0051f34b
        ;   XREF to: 0051f237 (UNCONDITIONAL_JUMP)  ; LAB_0051f237
    MOV ESI,0x3                         ; 0051f350
        ;   Label: LAB_0051f350
    JMP 0x0051f256                      ; 0051f355
        ;   XREF to: 0051f256 (UNCONDITIONAL_JUMP)  ; LAB_0051f256
    MOV dword ptr [EBX + 0x276c],EAX    ; 0051f35a
        ;   Label: LAB_0051f35a
    JMP 0x0051ef4f                      ; 0051f360
        ;   XREF to: 0051ef4f (UNCONDITIONAL_JUMP)  ; LAB_0051ef4f
    CMP dword ptr [EBX + 0x10a74],0x0   ; 0051f365
        ;   Label: LAB_0051f365
    JZ 0x0051ef62                       ; 0051f36c
        ;   XREF to: 0051ef62 (CONDITIONAL_JUMP)  ; LAB_0051ef62
    PUSH 0x1                            ; 0051f372
    PUSH 0xf                            ; 0051f374
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0051f376
    PUSH ESI                            ; 0051f37d
    JMP 0x0051ef5a                      ; 0051f37e
        ;   XREF to: 0051ef5a (UNCONDITIONAL_JUMP)  ; LAB_0051ef5a
    LEA EAX,[EBX + 0x2508]              ; 0051f383
        ;   Label: LAB_0051f383
    LEA EDI,[ESP + 0x8c]                ; 0051f389
    LEA ESI,[ESP + 0x68]                ; 0051f390
    FLD float ptr [EAX]                 ; 0051f394
    FLD float ptr [EAX + 0x4]           ; 0051f396
    LEA EDX,[EBX + 0x257c]              ; 0051f399
    FLD float ptr [EAX + 0x8]           ; 0051f39f
    FXCH ST2                            ; 0051f3a2
    FADD float ptr [EDX]                ; 0051f3a4
    FXCH                                ; 0051f3a6
    FADD float ptr [EDX + 0x4]          ; 0051f3a8
    FXCH ST2                            ; 0051f3ab
    FADD float ptr [EDX + 0x8]          ; 0051f3ad
    FXCH                                ; 0051f3b0
    FSTP float ptr [ESP + 0x68]         ; 0051f3b2
    FXCH                                ; 0051f3b6
    FSTP float ptr [ESP + 0x6c]         ; 0051f3b8
    FSTP float ptr [ESP + 0x70]         ; 0051f3bc
    MOVSD ES:EDI,ESI                    ; 0051f3c0
    MOVSD ES:EDI,ESI                    ; 0051f3c1
    MOVSD ES:EDI,ESI                    ; 0051f3c2
    MOV dword ptr [EAX + 0x8],EBP       ; 0051f3c3
    PUSH dword ptr [ESP + 0xc4]         ; 0051f3c6
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051f3cd
    MOV dword ptr [EAX + 0x4],ECX       ; 0051f3d0
    MOV ECX,dword ptr [EAX + 0x4]       ; 0051f3d3
    MOV dword ptr [EAX],ECX             ; 0051f3d6
    MOV dword ptr [EDX + 0x8],EBP       ; 0051f3d8
    PUSH EBX                            ; 0051f3db
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051f3dc
    MOV dword ptr [EDX + 0x4],EAX       ; 0051f3df
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051f3e2
    MOV dword ptr [EDX],EAX             ; 0051f3e5
    CALL core_charactr.cpp_FUN_00423a10 ; 0051f3e7
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA EAX,[EBX + 0x2588]              ; 0051f3ec
    ADD ESP,0x8                         ; 0051f3f2
    FLD float ptr [EAX]                 ; 0051f3f5
    FMUL float ptr [ESP + 0xc4]         ; 0051f3f7
    FLD float ptr [EAX + 0x4]           ; 0051f3fe
    FMUL float ptr [ESP + 0xc4]         ; 0051f401
    FLD float ptr [EAX + 0x8]           ; 0051f408
    FMUL float ptr [ESP + 0xc4]         ; 0051f40b
    LEA EDI,[ESP + 0x38]                ; 0051f412
    LEA ESI,[ESP + 0x5c]                ; 0051f416
    FLD float ptr [ESP + 0x8c]          ; 0051f41a
    FLD float ptr [ESP + 0x90]          ; 0051f421
    FLD float ptr [ESP + 0x94]          ; 0051f428
    LEA EAX,[ESP + 0x8c]                ; 0051f42f
    FXCH ST5                            ; 0051f436
    FSTP float ptr [ESP + 0x5c]         ; 0051f438
    FXCH ST3                            ; 0051f43c
    FSTP float ptr [ESP + 0x60]         ; 0051f43e
    FXCH                                ; 0051f442
    FSTP float ptr [ESP + 0x64]         ; 0051f444
    PUSH EAX                            ; 0051f448
    MOVSD ES:EDI,ESI                    ; 0051f449
    MOVSD ES:EDI,ESI                    ; 0051f44a
    MOVSD ES:EDI,ESI                    ; 0051f44b
    PUSH EBX                            ; 0051f44c
    FADD float ptr [ESP + 0x40]         ; 0051f44d
    FXCH                                ; 0051f451
    FADD float ptr [ESP + 0x44]         ; 0051f453
    FXCH ST2                            ; 0051f457
    FADD float ptr [ESP + 0x48]         ; 0051f459
    FXCH                                ; 0051f45d
    FSTP float ptr [ESP + 0x94]         ; 0051f45f
    FXCH                                ; 0051f466
    FSTP float ptr [ESP + 0x98]         ; 0051f468
    FSTP float ptr [ESP + 0x9c]         ; 0051f46f
    CALL core_charactr.cpp_FUN_00423a60 ; 0051f476
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0051f47b
    JMP 0x0051ef62                      ; 0051f47e
        ;   XREF to: 0051ef62 (UNCONDITIONAL_JUMP)  ; LAB_0051ef62

