; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004efc90(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004efc50 = 004f004e
;   TerminatedCString s_s_confused_while_walking_005e5169
;   TerminatedCString s_hotdemon_attack_wav_005e5193
;   TerminatedCString s_hotdemon_attack_wav_005e51a7
;   undefined4 DAT_005e51c2
;   undefined4 DAT_006022fc
;   undefined4 DAT_00602308
;   CConsole* g_CConsolePtr = 007db5f0
;   CGore* g_CGorePtr = 01cd0e3c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d06bd4
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cd60
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e120
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00433e80
;   core_charactr.cpp_FUN_00435320
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_enemy.cpp_FUN_004a0770
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efc90
        ;   Label: core_hotdemon.cpp_FUN_004efc90
    PUSH ESI                            ; 004efc91
    PUSH EDI                            ; 004efc92
    PUSH EBP                            ; 004efc93
    MOV EBP,ESP                         ; 004efc94
    SUB ESP,0x190                       ; 004efc96
    SUB EBP,0x7a                        ; 004efc9c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004efc9f
    PUSH dword ptr [EBP + 0x92]         ; 004efca5
    PUSH EBX                            ; 004efcab
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004efcac
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004efcb1
    TEST EAX,EAX                        ; 004efcb4
    JZ 0x004efec8                       ; 004efcb6
        ;   XREF to: 004efec8 (CONDITIONAL_JUMP)  ; LAB_004efec8
    LEA EAX,[EBX + 0x249c]              ; 004efcbc
    MOV dword ptr [EAX + 0x8],0x0       ; 004efcc2
    FLD float ptr [EBP + 0x92]          ; 004efcc9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004efccf
    MOV dword ptr [EAX + 0x4],EDX       ; 004efcd2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004efcd5
    MOV dword ptr [EAX],EDX             ; 004efcd8
    FMUL float ptr [EBX + 0xc1d0]       ; 004efcda
    LEA ESI,[EBX + 0x158]               ; 004efce0
    FSTP float ptr [EBP + 0x56]         ; 004efce6
    FLD float ptr [EBP + 0x56]          ; 004efce9
        ;   Label: LAB_004efce9
    FLDZ                                ; 004efcec
    FCOMPP                              ; 004efcee
    FNSTSW AX                           ; 004efcf0
    SAHF                                ; 004efcf2
    JC 0x004efed0                       ; 004efcf3
        ;   XREF to: 004efed0 (CONDITIONAL_JUMP)  ; LAB_004efed0
    FLD float ptr [EBP + 0x92]          ; 004efcf9
    FMUL float ptr [EBX + 0xc1d0]       ; 004efcff
    SUB ESP,0x4                         ; 004efd05
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004efd08
    MOV dword ptr [EBX + 0x2524],EAX    ; 004efd0e
    FSTP float ptr [ESP]                ; 004efd14
    PUSH EBX                            ; 004efd17
    CALL core_charactr.cpp_FUN_00435320 ; 004efd18
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004efd1d
    PUSH ESI                            ; 004efd20
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004efd21
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004efd26
    PUSH dword ptr [EBP + 0x92]         ; 004efd29
    MOV EDI,dword ptr [EAX + 0x24]      ; 004efd2f
    PUSH EBX                            ; 004efd32
    MOV dword ptr [EBP + 0x6e],EDI      ; 004efd33
    CALL core_charactr.cpp_FUN_00432240 ; 004efd36
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004efd3b
    TEST EAX,EAX                        ; 004efd3e
    JZ 0x004f04df                       ; 004efd40
        ;   XREF to: 004f04df (CONDITIONAL_JUMP)  ; LAB_004f04df
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004efd46
    CMP EAX,0x2                         ; 004efd4c
    JNC 0x004eff10                      ; 004efd4f
        ;   XREF to: 004eff10 (CONDITIONAL_JUMP)  ; LAB_004eff10
    CMP EAX,0x1                         ; 004efd55
    JNZ 0x004eff1b                      ; 004efd58
        ;   XREF to: 004eff1b (CONDITIONAL_JUMP)  ; LAB_004eff1b
    PUSH 0x1                            ; 004efd5e
        ;   Label: LAB_004efd5e
    PUSH 0x1                            ; 004efd60
    LEA EAX,[EBX + 0x158]               ; 004efd62
        ;   Label: LAB_004efd62
    PUSH EAX                            ; 004efd68
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004efd69
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004efd6e
        ;   Label: LAB_004efd6e
    LEA EAX,[EBX + 0x249c]              ; 004efd71
    MOV dword ptr [EAX + 0x8],0x0       ; 004efd77
    MOV EDX,dword ptr [EAX + 0x8]       ; 004efd7e
    MOV dword ptr [EAX + 0x4],EDX       ; 004efd81
    MOV EDX,dword ptr [EAX + 0x4]       ; 004efd84
    MOV dword ptr [EAX],EDX             ; 004efd87
    FLD float ptr [EBX + 0xc1e4]        ; 004efd89
        ;   Label: caseD_3
    FLDZ                                ; 004efd8f
    FCOMPP                              ; 004efd91
    FNSTSW AX                           ; 004efd93
    SAHF                                ; 004efd95
    JNC 0x004efdaa                      ; 004efd96
        ;   XREF to: 004efdaa (CONDITIONAL_JUMP)  ; LAB_004efdaa
    FLD float ptr [EBX + 0xc1e4]        ; 004efd98
    FSUB float ptr [EBP + 0x92]         ; 004efd9e
    FSTP float ptr [EBX + 0xc1e4]       ; 004efda4
    PUSH EBX                            ; 004efdaa
        ;   Label: LAB_004efdaa
    CALL core_charactr.cpp_FUN_0042e120 ; 004efdab
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004efdb0
    TEST EAX,EAX                        ; 004efdb3
    JZ 0x004efea1                       ; 004efdb5
        ;   XREF to: 004efea1 (CONDITIONAL_JUMP)  ; LAB_004efea1
    PUSH dword ptr [EBP + 0x92]         ; 004efdbb
    PUSH EBX                            ; 004efdc1
    LEA ESI,[EBX + 0x2518]              ; 004efdc2
    CALL core_charactr.cpp_FUN_0042d700 ; 004efdc8
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 004efdcd
    FMUL float ptr [EBP + 0x92]         ; 004efdcf
    FLD float ptr [ESI + 0x4]           ; 004efdd5
    FMUL float ptr [EBP + 0x92]         ; 004efdd8
    FLD float ptr [ESI + 0x8]           ; 004efdde
    FMUL float ptr [EBP + 0x92]         ; 004efde1
    LEA EDI,[EBP + -0x26]               ; 004efde7
    LEA ESI,[EBP + 0x2e]                ; 004efdea
    FXCH ST2                            ; 004efded
    FSTP float ptr [EBP + 0x2e]         ; 004efdef
    FSTP float ptr [EBP + 0x32]         ; 004efdf2
    FSTP float ptr [EBP + 0x36]         ; 004efdf5
    MOVSD ES:EDI,ESI                    ; 004efdf8
    MOVSD ES:EDI,ESI                    ; 004efdf9
    MOVSD ES:EDI,ESI                    ; 004efdfa
    LEA EDX,[EBX + 0x250c]              ; 004efdfb
    FLD float ptr [EBP + -0x26]         ; 004efe01
    FLD float ptr [EBP + -0x22]         ; 004efe04
    FLD float ptr [EBP + -0x1e]         ; 004efe07
    LEA EDI,[EBP + -0x4a]               ; 004efe0a
    LEA ESI,[EBP + 0xffffff32]          ; 004efe0d
    FXCH ST2                            ; 004efe13
    FADD float ptr [EDX]                ; 004efe15
    FXCH                                ; 004efe17
    FADD float ptr [EDX + 0x4]          ; 004efe19
    FXCH ST2                            ; 004efe1c
    FADD float ptr [EDX + 0x8]          ; 004efe1e
    FXCH                                ; 004efe21
    FSTP float ptr [EBP + 0xffffff32]   ; 004efe23
    FXCH                                ; 004efe29
    FSTP float ptr [EBP + 0xffffff36]   ; 004efe2b
    FSTP float ptr [EBP + 0xffffff3a]   ; 004efe31
    MOVSD ES:EDI,ESI                    ; 004efe37
    MOVSD ES:EDI,ESI                    ; 004efe38
    MOVSD ES:EDI,ESI                    ; 004efe39
    LEA EAX,[EBX + 0x249c]              ; 004efe3a
    FLD float ptr [EBP + -0x4a]         ; 004efe40
    FLD float ptr [EBP + -0x46]         ; 004efe43
    FLD float ptr [EBP + -0x42]         ; 004efe46
    LEA EDI,[EBP + -0x3e]               ; 004efe49
    LEA ESI,[EBP + -0x56]               ; 004efe4c
    FXCH ST2                            ; 004efe4f
    FADD float ptr [EAX]                ; 004efe51
    FXCH                                ; 004efe53
    FADD float ptr [EAX + 0x4]          ; 004efe55
    FXCH ST2                            ; 004efe58
    FADD float ptr [EAX + 0x8]          ; 004efe5a
    FXCH                                ; 004efe5d
    FSTP float ptr [EBP + -0x56]        ; 004efe5f
    FXCH                                ; 004efe62
    FSTP float ptr [EBP + -0x52]        ; 004efe64
    FSTP float ptr [EBP + -0x4e]        ; 004efe67
    MOVSD ES:EDI,ESI                    ; 004efe6a
    MOVSD ES:EDI,ESI                    ; 004efe6b
    MOVSD ES:EDI,ESI                    ; 004efe6c
    MOV dword ptr [EDX + 0x8],0x0       ; 004efe6d
    MOV ECX,dword ptr [EDX + 0x8]       ; 004efe74
    MOV dword ptr [EDX + 0x4],ECX       ; 004efe77
    MOV ECX,dword ptr [EDX + 0x4]       ; 004efe7a
    MOV dword ptr [EDX],ECX             ; 004efe7d
    MOV dword ptr [EAX + 0x8],0x0       ; 004efe7f
    ADD ESP,0x8                         ; 004efe86
    MOV EDX,dword ptr [EAX + 0x8]       ; 004efe89
    MOV dword ptr [EAX + 0x4],EDX       ; 004efe8c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004efe8f
    MOV dword ptr [EAX],EDX             ; 004efe92
    LEA EAX,[EBP + -0x3e]               ; 004efe94
    PUSH EAX                            ; 004efe97
    PUSH EBX                            ; 004efe98
    CALL core_charactr.cpp_FUN_0042d750 ; 004efe99
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004efe9e
    PUSH EBX                            ; 004efea1
        ;   Label: LAB_004efea1
    CALL core_charactr.cpp_FUN_0042e160 ; 004efea2
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004efea7
    LEA EAX,[EBX + 0x158]               ; 004efeaa
    PUSH EAX                            ; 004efeb0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004efeb1
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004efeb6
    PUSH dword ptr [EBP + 0x92]         ; 004efeb9
    PUSH EBX                            ; 004efebf
    CALL core_charactr.cpp_FUN_00433e80 ; 004efec0
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004efec5
    LEA ESP,[EBP + 0x7a]                ; 004efec8
        ;   Label: LAB_004efec8
    POP EBP                             ; 004efecb
    POP EDI                             ; 004efecc
    POP ESI                             ; 004efecd
    POP EBX                             ; 004efece
    RET                                 ; 004efecf
    LEA EAX,[EBP + 0x56]                ; 004efed0
        ;   Label: LAB_004efed0
    PUSH EAX                            ; 004efed3
    PUSH ESI                            ; 004efed4
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004efed5
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004efeda
    PUSH EAX                            ; 004efedd
    PUSH EBX                            ; 004efede
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004efedf
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004efee4
    JMP 0x004efce9                      ; 004efee7
        ;   XREF to: 004efce9 (UNCONDITIONAL_JUMP)  ; LAB_004efce9
    PUSH 0x1                            ; 004efeec
        ;   Label: LAB_004efeec
    PUSH 0x0                            ; 004efeee
    PUSH ESI                            ; 004efef0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004efef1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004efef6
    PUSH EBX                            ; 004efef9
    PUSH 0x5e5169                       ; 004efefa | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00611100]      ; 004efeff | g_CConsolePtr
    PUSH EDI                            ; 004eff05 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004eff06
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x004efd6e                      ; 004eff0b
        ;   XREF to: 004efd6e (UNCONDITIONAL_JUMP)  ; LAB_004efd6e
    JBE 0x004efd5e                      ; 004eff10
        ;   XREF to: 004efd5e (CONDITIONAL_JUMP)  ; LAB_004efd5e
        ;   Label: LAB_004eff10
    CMP EAX,0x3                         ; 004eff16
    JZ 0x004efeec                       ; 004eff19
        ;   XREF to: 004efeec (CONDITIONAL_JUMP)  ; LAB_004efeec
    PUSH 0x1                            ; 004eff1b
        ;   Label: LAB_004eff1b
    PUSH 0x0                            ; 004eff1d
    JMP 0x004efd62                      ; 004eff1f
        ;   XREF to: 004efd62 (UNCONDITIONAL_JUMP)  ; LAB_004efd62
    MOV EDX,dword ptr [EBX + 0xc1d4]    ; 004eff24
        ;   Label: caseD_5
    TEST EDX,EDX                        ; 004eff2a
    JNZ 0x004efd89                      ; 004eff2c
        ;   XREF to: 004efd89 (CONDITIONAL_JUMP)  ; caseD_e
    CMP dword ptr [EBX + 0xdc],0x0      ; 004eff32
    JNZ 0x004efd89                      ; 004eff39
        ;   XREF to: 004efd89 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH EDX                            ; 004eff3f
    LEA EAX,[EBX + 0x158]               ; 004eff40
    PUSH EAX                            ; 004eff46
    LEA ESI,[EBP + -0x1a]               ; 004eff47
    LEA EDI,[EBP + -0x32]               ; 004eff4a
    CALL core_skeleton.cpp_FUN_00569040 ; 004eff4d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 004eff52
    LEA EAX,[EBP + -0x32]               ; 004eff55
    LEA ESI,[EBP + -0x1a]               ; 004eff58
    PUSH EAX                            ; 004eff5b
    MOVSD ES:EDI,ESI                    ; 004eff5c
    MOVSD ES:EDI,ESI                    ; 004eff5d
    MOVSD ES:EDI,ESI                    ; 004eff5e
    PUSH EBX                            ; 004eff5f
    LEA ESI,[EBP + -0xe]                ; 004eff60
    LEA EDI,[EBP + 0xffffff26]          ; 004eff63
    CALL core_actor.cpp_FUN_00408b40    ; 004eff69
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004eff6e
    LEA ESI,[EBP + -0xe]                ; 004eff71
    LEA EAX,[EBP + 0xffffff26]          ; 004eff74
    PUSH 0x0                            ; 004eff7a
    MOVSD ES:EDI,ESI                    ; 004eff7c
    MOVSD ES:EDI,ESI                    ; 004eff7d
    MOVSD ES:EDI,ESI                    ; 004eff7e
    PUSH EAX                            ; 004eff7f
    MOV ESI,dword ptr [0x0061dca4]      ; 004eff80 | g_CGorePtr
    PUSH ESI                            ; 004eff86
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 004eff87
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004eff8c
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 004eff8f
    JMP 0x004efd89                      ; 004eff99
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + 0xfffffeea]          ; 004eff9e
        ;   Label: caseD_2
    PUSH EAX                            ; 004effa4
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004effa5
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004effaa
    PUSH 0x41700000                     ; 004effad
    PUSH 0x40e00000                     ; 004effb2
    LEA ESI,[EBP + 0xffffff7a]          ; 004effb7
    CALL core_actor.cpp_FUN_0040cc00    ; 004effbd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004effc2
    ADD ESP,0x8                         ; 004effc5
    LEA EAX,[EBP + 0xfffffeea]          ; 004effc8
    MOV EDX,dword ptr [0x01d06bd4]      ; 004effce | DAT_01d06bd4
    PUSH EAX                            ; 004effd4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004effd5
    MOV dword ptr [EBP + 0xffffff1e],EBX ; 004effdc
    SUB EAX,EDX                         ; 004effe2
    MOV dword ptr [EBP + 0xffffff22],EBX ; 004effe4
    SHL EAX,0x4                         ; 004effea
    LEA EDX,[EBX + 0xfd8]               ; 004effed
    PUSH 0x3ecccccd                     ; 004efff3
    ADD EAX,EDX                         ; 004efff8
    LEA EDI,[EBP + -0x7a]               ; 004efffa
    PUSH EAX                            ; 004efffd
    FLD float ptr [EBP + 0x76]          ; 004efffe
    PUSH 0x2c8af28                      ; 004f0001 | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffeee]   ; 004f0006
    CALL core_xform.cpp_FUN_005b5080    ; 004f000c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 004f0011
    LEA EAX,[EBP + -0x7a]               ; 004f0014
    LEA ESI,[EBP + 0xffffff7a]          ; 004f0017
    PUSH EAX                            ; 004f001d
    MOVSD ES:EDI,ESI                    ; 004f001e
    MOVSD ES:EDI,ESI                    ; 004f001f
    MOVSD ES:EDI,ESI                    ; 004f0020
    PUSH EBX                            ; 004f0021
    LEA ESI,[EBP + 0xffffff3e]          ; 004f0022
    CALL core_actor.cpp_FUN_00408b40    ; 004f0028
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004f002d
    LEA EAX,[EBP + -0x6e]               ; 004f0030
    PUSH EAX                            ; 004f0033
    LEA EDI,[EBP + -0x6e]               ; 004f0034
    LEA ESI,[EBP + 0xffffff3e]          ; 004f0037
    PUSH EBX                            ; 004f003d
    MOVSD ES:EDI,ESI                    ; 004f003e
    MOVSD ES:EDI,ESI                    ; 004f003f
    MOVSD ES:EDI,ESI                    ; 004f0040
    CALL core_enemy.cpp_FUN_004a0770    ; 004f0041
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004f0046
    JMP 0x004efd89                      ; 004f0049
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004f004e
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f0054
    PUSH EBX                            ; 004f005a
    CALL dword ptr [EAX + 0x144]        ; 004f005b
    ADD ESP,0x8                         ; 004f0061
    LEA EAX,[EBX + 0x158]               ; 004f0064
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004f006a
    MOV dword ptr [EBP + 0x66],EAX      ; 004f0070
    TEST ESI,ESI                        ; 004f0073
    JZ 0x004f01e1                       ; 004f0075
        ;   XREF to: 004f01e1 (CONDITIONAL_JUMP)  ; LAB_004f01e1
    MOV EDX,ESI                         ; 004f007b
    LEA EDI,[EBP + 0xffffff62]          ; 004f007d
    LEA EAX,[EBX + 0x20]                ; 004f0083
    FLD float ptr [EDX + 0x20]          ; 004f0086
    FLD float ptr [EDX + 0x24]          ; 004f0089
    FLD float ptr [EDX + 0x28]          ; 004f008c
    LEA ESI,[EBP + 0x3a]                ; 004f008f
    FXCH ST2                            ; 004f0092
    FSUB float ptr [EAX]                ; 004f0094
    FXCH                                ; 004f0096
    FSUB float ptr [EAX + 0x4]          ; 004f0098
    FXCH ST2                            ; 004f009b
    FSUB float ptr [EAX + 0x8]          ; 004f009d
    FXCH                                ; 004f00a0
    FSTP float ptr [EBP + 0x3a]         ; 004f00a2
    FXCH                                ; 004f00a5
    FSTP float ptr [EBP + 0x3e]         ; 004f00a7
    FSTP float ptr [EBP + 0x42]         ; 004f00aa
    MOVSD ES:EDI,ESI                    ; 004f00ad
    MOVSD ES:EDI,ESI                    ; 004f00ae
    MOVSD ES:EDI,ESI                    ; 004f00af
    FLD float ptr [EBP + 0xffffff66]    ; 004f00b0
    FMUL ST0                            ; 004f00b6
    FLD float ptr [EBP + 0xffffff62]    ; 004f00b8
    FMUL ST0                            ; 004f00be
    FADDP                               ; 004f00c0
    FLD float ptr [EBP + 0xffffff6a]    ; 004f00c2
    FMUL ST0                            ; 004f00c8
    FADDP                               ; 004f00ca
    FSQRT                               ; 004f00cc
    FSTP float ptr [EBP + 0x52]         ; 004f00ce
    MOV EAX,dword ptr [EBP + 0x52]      ; 004f00d1
    FLD float ptr [EBP + 0x52]          ; 004f00d4
    MOV dword ptr [EBP + 0x5e],EAX      ; 004f00d7
    FCOMP float ptr [0x006022fc]        ; 004f00da | DAT_006022fc
    FNSTSW AX                           ; 004f00e0
    SAHF                                ; 004f00e2
    JC 0x004f012b                       ; 004f00e3
        ;   XREF to: 004f012b (CONDITIONAL_JUMP)  ; LAB_004f012b
    FLD float ptr [EBP + 0x5e]          ; 004f00e5
        ;   Label: LAB_004f00e5
    FCOMP float ptr [EBX + 0xc1e0]      ; 004f00e8
    FNSTSW AX                           ; 004f00ee
    SAHF                                ; 004f00f0
    JNC 0x004efd89                      ; 004f00f1
        ;   XREF to: 004efd89 (CONDITIONAL_JUMP)  ; caseD_e
    FLD float ptr [EBP + 0x5e]          ; 004f00f7
    LEA EDX,[EBX + 0x158]               ; 004f00fa
    FCOMP float ptr [0x00602308]        ; 004f0100 | DAT_00602308
    FNSTSW AX                           ; 004f0106
    SAHF                                ; 004f0108
    JNC 0x004f01c5                      ; 004f0109
        ;   XREF to: 004f01c5 (CONDITIONAL_JUMP)  ; LAB_004f01c5
    PUSH 0x1                            ; 004f010f
    PUSH 0x1                            ; 004f0111
    PUSH EDX                            ; 004f0113
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0114
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f0119
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004f011c
    JMP 0x004efd89                      ; 004f0126
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    LEA EAX,[EBP + 0xffffff62]          ; 004f012b
        ;   Label: LAB_004f012b
    PUSH EAX                            ; 004f0131
    LEA ESI,[EBP + 0xa]                 ; 004f0132
    LEA EDI,[EBP + -0x2]                ; 004f0135
    CALL core_vecdir.cpp_FUN_005a7520   ; 004f0138
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + 0xa]                 ; 004f013d
    MOVSD ES:EDI,ESI                    ; 004f0140
    MOVSD ES:EDI,ESI                    ; 004f0141
    MOVSD ES:EDI,ESI                    ; 004f0142
    ADD ESP,0x4                         ; 004f0143
    FLD float ptr [EBP + 0x2]           ; 004f0146
    FSUB float ptr [EBX + 0x34]         ; 004f0149
    SUB ESP,0x4                         ; 004f014c
    FSTP float ptr [ESP]                ; 004f014f
    CALL core_actor.cpp_FUN_0040cd60    ; 004f0152
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004f0157
    FLD float ptr [EBP + 0x76]          ; 004f015a
    FABS                                ; 004f015d
    ADD ESP,0x4                         ; 004f015f
    FCOMP double ptr [0x005e51c2]       ; 004f0162 | DAT_005e51c2
    FNSTSW AX                           ; 004f0168
    SAHF                                ; 004f016a
    JNC 0x004f00e5                      ; 004f016b
        ;   XREF to: 004f00e5 (CONDITIONAL_JUMP)  ; LAB_004f00e5
    CMP dword ptr [EBP + 0x6e],0x0      ; 004f0171
    JZ 0x004f01bb                       ; 004f0175
        ;   XREF to: 004f01bb (CONDITIONAL_JUMP)  ; LAB_004f01bb
    PUSH 0x1                            ; 004f0177
    PUSH 0x8                            ; 004f0179
    MOV EDX,dword ptr [EBP + 0x66]      ; 004f017b
    PUSH EDX                            ; 004f017e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f017f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f017f
    ADD ESP,0xc                         ; 004f0184
    MOV ESI,dword ptr [EBX + 0xc268]    ; 004f0187
    PUSH ESI                            ; 004f018d
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f018e
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f0193
    TEST EAX,EAX                        ; 004f0196
    JNZ 0x004f00e5                      ; 004f0198
        ;   XREF to: 004f00e5 (CONDITIONAL_JUMP)  ; LAB_004f00e5
    PUSH 0x5e5193                       ; 004f019e | = "hotdemon-attack.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f01a3
    PUSH EBX                            ; 004f01a9
    CALL dword ptr [EAX + 0x2c]         ; 004f01aa
    ADD ESP,0x8                         ; 004f01ad
    MOV dword ptr [EBX + 0xc268],EAX    ; 004f01b0
    JMP 0x004f00e5                      ; 004f01b6
        ;   XREF to: 004f00e5 (UNCONDITIONAL_JUMP)  ; LAB_004f00e5
    PUSH 0x1                            ; 004f01bb
        ;   Label: LAB_004f01bb
    PUSH 0x2                            ; 004f01bd
    MOV ECX,dword ptr [EBP + 0x66]      ; 004f01bf
    PUSH ECX                            ; 004f01c2
    JMP 0x004f017f                      ; 004f01c3
        ;   XREF to: 004f017f (UNCONDITIONAL_JUMP)  ; LAB_004f017f
    PUSH 0x1                            ; 004f01c5
        ;   Label: LAB_004f01c5
    PUSH 0x7                            ; 004f01c7
    PUSH EDX                            ; 004f01c9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f01ca
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f01cf
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004f01d2
    JMP 0x004efd89                      ; 004f01dc
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004f01e1
        ;   Label: LAB_004f01e1
    PUSH EBX                            ; 004f01e7
    CALL core_enemy.cpp_FUN_004a0fe0    ; 004f01e8
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f01ed
    TEST EAX,EAX                        ; 004f01f0
    JZ 0x004efd89                       ; 004f01f2
        ;   XREF to: 004efd89 (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004f01f8
    PUSH 0x1                            ; 004f01fa
    MOV EDI,dword ptr [EBP + 0x66]      ; 004f01fc
    PUSH EDI                            ; 004f01ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0200
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f0205
    JMP 0x004efd89                      ; 004f0208
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH dword ptr [EBP + 0x92]         ; 004f020d
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f0213
    PUSH EBX                            ; 004f0219
    CALL dword ptr [EAX + 0x144]        ; 004f021a
    ADD ESP,0x8                         ; 004f0220
    LEA EAX,[EBX + 0x158]               ; 004f0223
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 004f0229
    MOV dword ptr [EBP + 0x6a],EAX      ; 004f022f
    TEST EDI,EDI                        ; 004f0232
    JNZ 0x004f028e                      ; 004f0234
        ;   XREF to: 004f028e (CONDITIONAL_JUMP)  ; LAB_004f028e
    PUSH dword ptr [EBP + 0x92]         ; 004f0236
    PUSH EBX                            ; 004f023c
    CALL core_enemy.cpp_FUN_004a0fe0    ; 004f023d
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f0242
    TEST EAX,EAX                        ; 004f0245
    JNZ 0x004f0264                      ; 004f0247
        ;   XREF to: 004f0264 (CONDITIONAL_JUMP)  ; LAB_004f0264
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004f0249
    CMP EDI,0x1                         ; 004f024c
    JNZ 0x004f0279                      ; 004f024f
        ;   XREF to: 004f0279 (CONDITIONAL_JUMP)  ; LAB_004f0279
    PUSH EDI                            ; 004f0251
    PUSH EAX                            ; 004f0252
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004f0253
    PUSH EDX                            ; 004f0256
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0257
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f025c
    JMP 0x004efd89                      ; 004f025f
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004f0264
        ;   Label: LAB_004f0264
    PUSH 0x1                            ; 004f0266
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004f0268
    PUSH ECX                            ; 004f026b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f026c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f0271
    JMP 0x004efd89                      ; 004f0274
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004f0279
        ;   Label: LAB_004f0279
    PUSH 0x6                            ; 004f027b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004f027d
    PUSH EAX                            ; 004f0280
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0281
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f0286
    JMP 0x004efd89                      ; 004f0289
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x006022fc]                ; 004f028e | DAT_006022fc
        ;   Label: LAB_004f028e
    MOV dword ptr [EBP + 0x62],EAX      ; 004f0293
    LEA EAX,[EBX + 0x249c]              ; 004f0296
    MOV dword ptr [EAX + 0x8],0x0       ; 004f029c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f02a3
    MOV dword ptr [EAX + 0x4],EDX       ; 004f02a6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f02a9
    MOV dword ptr [EAX],EDX             ; 004f02ac
    XOR EAX,EAX                         ; 004f02ae
    MOV dword ptr [EBP + 0xffffff56],EAX ; 004f02b0
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 004f02b6
    MOV EAX,dword ptr [EBP + 0x62]      ; 004f02bc
    PUSH 0x3e32b8c2                     ; 004f02bf
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 004f02c4
    LEA EAX,[EBP + 0xffffff56]          ; 004f02ca
    PUSH 0x3f000000                     ; 004f02d0
    PUSH EAX                            ; 004f02d5
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f02d6
    PUSH EAX                            ; 004f02dc
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f02dd
    CALL dword ptr [EDX + 0xc4]         ; 004f02e3
    ADD ESP,0x4                         ; 004f02e9
    PUSH EAX                            ; 004f02ec
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f02ed
    ADD EAX,0x20                        ; 004f02f3
    PUSH EAX                            ; 004f02f6
    PUSH EBX                            ; 004f02f7
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004f02f8
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004f02fd
    TEST EAX,EAX                        ; 004f0300
    JL 0x004efd89                       ; 004f0302
        ;   XREF to: 004efd89 (CONDITIONAL_JUMP)  ; caseD_e
    LEA EDI,[EBP + 0xffffff4a]          ; 004f0308
    LEA EAX,[EBX + 0x20]                ; 004f030e
    LEA ESI,[EBP + 0xffffff6e]          ; 004f0311
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004f0317
    FLD float ptr [EAX]                 ; 004f031d
    FLD float ptr [EAX + 0x4]           ; 004f031f
    FLD float ptr [EAX + 0x8]           ; 004f0322
    FXCH ST2                            ; 004f0325
    FSUB float ptr [EDX + 0x20]         ; 004f0327
    FXCH                                ; 004f032a
    FSUB float ptr [EDX + 0x24]         ; 004f032c
    FXCH ST2                            ; 004f032f
    FSUB float ptr [EDX + 0x28]         ; 004f0331
    FXCH                                ; 004f0334
    FSTP float ptr [EBP + 0xffffff6e]   ; 004f0336
    FXCH                                ; 004f033c
    FSTP float ptr [EBP + 0xffffff72]   ; 004f033e
    FSTP float ptr [EBP + 0xffffff76]   ; 004f0344
    MOVSD ES:EDI,ESI                    ; 004f034a
    MOVSD ES:EDI,ESI                    ; 004f034b
    MOVSD ES:EDI,ESI                    ; 004f034c
    FLD float ptr [EBP + 0xffffff4a]    ; 004f034d
    FMUL ST0                            ; 004f0353
    FLD float ptr [EBP + 0xffffff52]    ; 004f0355
    FMUL ST0                            ; 004f035b
    FADDP                               ; 004f035d
    FSQRT                               ; 004f035f
    XOR ECX,ECX                         ; 004f0361
    MOV dword ptr [EBP + 0xffffff4e],ECX ; 004f0363
    FSTP float ptr [EBP + 0x72]         ; 004f0369
    MOV EAX,dword ptr [EBP + 0x72]      ; 004f036c
    FLD float ptr [EBP + 0x72]          ; 004f036f
    MOV dword ptr [EBP + 0x5a],EAX      ; 004f0372
    FCOMP float ptr [0x00602308]        ; 004f0375 | DAT_00602308
    FNSTSW AX                           ; 004f037b
    SAHF                                ; 004f037d
    JBE 0x004f039c                      ; 004f037e
        ;   XREF to: 004f039c (CONDITIONAL_JUMP)  ; LAB_004f039c
    CMP dword ptr [EBP + 0x6e],0x7      ; 004f0380
    JZ 0x004f039c                       ; 004f0384
        ;   XREF to: 004f039c (CONDITIONAL_JUMP)  ; LAB_004f039c
    PUSH 0x1                            ; 004f0386
    PUSH 0x7                            ; 004f0388
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004f038a
    PUSH EDI                            ; 004f038d
    MOV dword ptr [EBX + 0xc1e4],ECX    ; 004f038e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0394
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f0399
    FLD float ptr [EBP + 0x5a]          ; 004f039c
        ;   Label: LAB_004f039c
    FCOMP float ptr [EBP + 0x62]        ; 004f039f
    FNSTSW AX                           ; 004f03a2
    SAHF                                ; 004f03a4
    JA 0x004f0467                       ; 004f03a5
        ;   XREF to: 004f0467 (CONDITIONAL_JUMP)  ; LAB_004f0467
    FLD float ptr [EBX + 0xc1e4]        ; 004f03ab
    FLDZ                                ; 004f03b1
    FCOMPP                              ; 004f03b3
    FNSTSW AX                           ; 004f03b5
    SAHF                                ; 004f03b7
    JC 0x004f0467                       ; 004f03b8
        ;   XREF to: 004f0467 (CONDITIONAL_JUMP)  ; LAB_004f0467
    LEA EDI,[EBP + -0x62]               ; 004f03be
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004f03c1
    LEA ESI,[EBP + 0x16]                ; 004f03c7
    LEA EDX,[EBX + 0x20]                ; 004f03ca
    FLD float ptr [EAX + 0x24]          ; 004f03cd
    FLD float ptr [EAX + 0x28]          ; 004f03d0
    FLD float ptr [EAX + 0x20]          ; 004f03d3
    LEA EAX,[EBP + -0x62]               ; 004f03d6
    FSUB float ptr [EDX]                ; 004f03d9
    FXCH ST2                            ; 004f03db
    FSUB float ptr [EDX + 0x4]          ; 004f03dd
    FXCH                                ; 004f03e0
    FSUB float ptr [EDX + 0x8]          ; 004f03e2
    FXCH ST2                            ; 004f03e5
    FSTP float ptr [EBP + 0x16]         ; 004f03e7
    FSTP float ptr [EBP + 0x1a]         ; 004f03ea
    FSTP float ptr [EBP + 0x1e]         ; 004f03ed
    MOVSD ES:EDI,ESI                    ; 004f03f0
    MOVSD ES:EDI,ESI                    ; 004f03f1
    MOVSD ES:EDI,ESI                    ; 004f03f2
    PUSH EAX                            ; 004f03f3
    LEA ESI,[EBP + 0x46]                ; 004f03f4
    LEA EDI,[EBP + 0x22]                ; 004f03f7
    CALL core_vecdir.cpp_FUN_005a7520   ; 004f03fa
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + 0x46]                ; 004f03ff
    MOVSD ES:EDI,ESI                    ; 004f0402
    MOVSD ES:EDI,ESI                    ; 004f0403
    MOVSD ES:EDI,ESI                    ; 004f0404
    ADD ESP,0x4                         ; 004f0405
    FLD float ptr [EBP + 0x26]          ; 004f0408
    FSUB float ptr [EBX + 0x34]         ; 004f040b
    SUB ESP,0x4                         ; 004f040e
    FSTP float ptr [ESP]                ; 004f0411
    CALL core_actor.cpp_FUN_0040cd60    ; 004f0414
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004f0419
    FLD float ptr [EBP + 0x76]          ; 004f041c
    FABS                                ; 004f041f
    ADD ESP,0x4                         ; 004f0421
    FCOMP double ptr [0x005e51c2]       ; 004f0424 | DAT_005e51c2
    FNSTSW AX                           ; 004f042a
    SAHF                                ; 004f042c
    JNC 0x004f0467                      ; 004f042d
        ;   XREF to: 004f0467 (CONDITIONAL_JUMP)  ; LAB_004f0467
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004f042f
    LEA EAX,[EBX + 0x158]               ; 004f0432
    CMP EDX,0x7                         ; 004f0438
    JZ 0x004f04a3                       ; 004f043b
        ;   XREF to: 004f04a3 (CONDITIONAL_JUMP)  ; LAB_004f04a3
    PUSH 0x1                            ; 004f043d
    PUSH 0x2                            ; 004f043f
    PUSH EAX                            ; 004f0441
        ;   Label: LAB_004f0441
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0442
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f0447
    MOV ECX,dword ptr [EBX + 0xc268]    ; 004f044a
    PUSH ECX                            ; 004f0450
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f0451
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f0456
    TEST EAX,EAX                        ; 004f0459
    JZ 0x004f04a9                       ; 004f045b
        ;   XREF to: 004f04a9 (CONDITIONAL_JUMP)  ; LAB_004f04a9
    MOV dword ptr [EBX + 0xc1e4],0x40000000 ; 004f045d
        ;   Label: LAB_004f045d
    FLD float ptr [EBP + 0x5a]          ; 004f0467
        ;   Label: LAB_004f0467
    FCOMP float ptr [EBX + 0xc1e0]      ; 004f046a
    FNSTSW AX                           ; 004f0470
    SAHF                                ; 004f0472
    JBE 0x004efd89                      ; 004f0473
        ;   XREF to: 004efd89 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004f0479
    LEA EAX,[EBX + 0x158]               ; 004f047c
    CMP ESI,0x7                         ; 004f0482
    JZ 0x004f04c3                       ; 004f0485
        ;   XREF to: 004f04c3 (CONDITIONAL_JUMP)  ; LAB_004f04c3
    PUSH 0x1                            ; 004f0487
    PUSH 0x0                            ; 004f0489
    PUSH EAX                            ; 004f048b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f048c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f0491
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004f0494
    JMP 0x004efd89                      ; 004f049e
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x1                            ; 004f04a3
        ;   Label: LAB_004f04a3
    PUSH 0x8                            ; 004f04a5
    JMP 0x004f0441                      ; 004f04a7
        ;   XREF to: 004f0441 (UNCONDITIONAL_JUMP)  ; LAB_004f0441
    PUSH 0x5e51a7                       ; 004f04a9 | = "hotdemon-attack.wav"
        ;   Label: LAB_004f04a9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f04ae
    PUSH EBX                            ; 004f04b4
    CALL dword ptr [EAX + 0x2c]         ; 004f04b5
    ADD ESP,0x8                         ; 004f04b8
    MOV dword ptr [EBX + 0xc268],EAX    ; 004f04bb
    JMP 0x004f045d                      ; 004f04c1
        ;   XREF to: 004f045d (UNCONDITIONAL_JUMP)  ; LAB_004f045d
    PUSH 0x1                            ; 004f04c3
        ;   Label: LAB_004f04c3
    PUSH 0x6                            ; 004f04c5
    PUSH EAX                            ; 004f04c7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f04c8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f04cd
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004f04d0
    JMP 0x004efd89                      ; 004f04da
        ;   XREF to: 004efd89 (UNCONDITIONAL_JUMP)  ; caseD_e
    CMP EDI,0xf                         ; 004f04df
        ;   Label: LAB_004f04df
    JA 0x004efd89                       ; 004f04e2
        ;   XREF to: 004efd89 (CONDITIONAL_JUMP)  ; caseD_e
    JMP dword ptr [EDI*0x4 + 0x4efc50]  ; 004f04e8 | caseD_6 | caseD_f | caseD_8
        ;   Label: switchD

