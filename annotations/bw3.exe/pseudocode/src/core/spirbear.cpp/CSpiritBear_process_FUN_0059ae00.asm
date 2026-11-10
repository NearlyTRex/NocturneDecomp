; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spirbear_cpp_CSpiritBear_process_FUN_0059ae00(CSpiritBear *this_ptr,float delta_time)
;
; Parameters:
; CSpiritBear *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_STAND_005d9b51
;   TerminatedCString s_s_confused_while_walking_005d9b57
;   undefined4 DAT_005d9b81
;   undefined4 DAT_005d9b85
;   TerminatedCString s_STAND_005d9b8a
;   undefined4 DAT_005d9b90
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   undefined4 DAT_00600530
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_gore.cpp_CGore_createBloodPool_FUN_004cec40
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_FUN_004f6f10
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ae00
        ;   Label: core_spirbear.cpp_CSpiritBear_process_FUN_0059ae00
    PUSH ESI                            ; 0059ae01
    PUSH EDI                            ; 0059ae02
    PUSH EBP                            ; 0059ae03
    MOV EBP,ESP                         ; 0059ae04
    SUB ESP,0xa0                        ; 0059ae06
    AND ESP,0xfffffff8                  ; 0059ae0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059ae0f
    PUSH dword ptr [EBP + 0x18]         ; 0059ae12
    PUSH EBX                            ; 0059ae15
    CALL core_charactr.cpp_FUN_00433c60 ; 0059ae16
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    LEA EAX,[EBX + 0x249c]              ; 0059ae1b
    MOV EDX,0x1                         ; 0059ae21
    ADD ESP,0x8                         ; 0059ae26
    MOV dword ptr [EAX + 0x8],0x0       ; 0059ae29
    FLD float ptr [EBP + 0x18]          ; 0059ae30
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059ae33
    MOV dword ptr [EAX + 0x4],ECX       ; 0059ae36
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059ae39
    MOV dword ptr [EAX],ECX             ; 0059ae3c
    FMUL float ptr [EBX + 0x34168]      ; 0059ae3e
    MOV dword ptr [ESP + 0x9c],EDX      ; 0059ae44
    LEA ESI,[EBX + 0x158]               ; 0059ae4b
    FSTP float ptr [ESP]                ; 0059ae51
    FLD float ptr [ESP]                 ; 0059ae54
        ;   Label: LAB_0059ae54
    FLDZ                                ; 0059ae57
    FCOMPP                              ; 0059ae59
    FNSTSW AX                           ; 0059ae5b
    SAHF                                ; 0059ae5d
    JC 0x0059b0b2                       ; 0059ae5e
        ;   XREF to: 0059b0b2 (CONDITIONAL_JUMP)  ; LAB_0059b0b2
    PUSH EBX                            ; 0059ae64
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059ae65
    CALL dword ptr [EAX + 0x10c]        ; 0059ae6b
    ADD ESP,0x4                         ; 0059ae71
    CMP EAX,0x1                         ; 0059ae74
    JLE 0x0059aeff                      ; 0059ae77
        ;   XREF to: 0059aeff (CONDITIONAL_JUMP)  ; LAB_0059aeff
    CMP dword ptr [EBX + 0x70],0x1      ; 0059ae7d
    JNZ 0x0059aeff                      ; 0059ae81
        ;   XREF to: 0059aeff (CONDITIONAL_JUMP)  ; LAB_0059aeff
    MOV EDI,dword ptr [EBX + 0x34164]   ; 0059ae87
    TEST EDI,EDI                        ; 0059ae8d
    JNZ 0x0059aeff                      ; 0059ae8f
        ;   XREF to: 0059aeff (CONDITIONAL_JUMP)  ; LAB_0059aeff
    CMP dword ptr [EBX + 0xdc],0x0      ; 0059ae91
    JNZ 0x0059aeff                      ; 0059ae98
        ;   XREF to: 0059aeff (CONDITIONAL_JUMP)  ; LAB_0059aeff
    PUSH EDI                            ; 0059ae9a
    PUSH ESI                            ; 0059ae9b
    LEA ESI,[ESP + 0x84]                ; 0059ae9c
    LEA EDI,[ESP + 0x78]                ; 0059aea3
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0059aea7
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0059aeac
    LEA EAX,[ESP + 0x70]                ; 0059aeaf
    LEA ESI,[ESP + 0x7c]                ; 0059aeb3
    PUSH EAX                            ; 0059aeb7
    MOVSD ES:EDI,ESI                    ; 0059aeb8
    MOVSD ES:EDI,ESI                    ; 0059aeb9
    MOVSD ES:EDI,ESI                    ; 0059aeba
    PUSH EBX                            ; 0059aebb
    LEA ESI,[ESP + 0x18]                ; 0059aebc
    CALL core_actor.cpp_FUN_00408b80    ; 0059aec0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0059aec5
    PUSH 0x0                            ; 0059aec8
    LEA EAX,[ESP + 0x44]                ; 0059aeca
    LEA EDI,[ESP + 0x44]                ; 0059aece
    PUSH EAX                            ; 0059aed2
    MOV EDX,dword ptr [0x005fed24]      ; 0059aed3 | g_CGorePtr
    LEA ESI,[ESP + 0x18]                ; 0059aed9
    PUSH EDX                            ; 0059aedd
    MOVSD ES:EDI,ESI                    ; 0059aede
    MOVSD ES:EDI,ESI                    ; 0059aedf
    MOVSD ES:EDI,ESI                    ; 0059aee0
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0059aee1
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    MOV ECX,0x1                         ; 0059aee6
    ADD ESP,0xc                         ; 0059aeeb
    MOV dword ptr [EBX + 0x34164],0x1   ; 0059aeee
    MOV dword ptr [ESP + 0x9c],ECX      ; 0059aef8
    FLD float ptr [EBP + 0x18]          ; 0059aeff
        ;   Label: LAB_0059aeff
    FMUL float ptr [EBX + 0x34168]      ; 0059af02
    FLD float ptr [EBX + 0x24a4]        ; 0059af08
    SUB ESP,0x4                         ; 0059af0e
    FSTP float ptr [EBX + 0x2524]       ; 0059af11
    FSTP float ptr [ESP]                ; 0059af17
    PUSH EBX                            ; 0059af1a
    CALL core_charactr.cpp_FUN_00434850 ; 0059af1b
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0059af20
    PUSH dword ptr [EBP + 0x18]         ; 0059af23
    PUSH EBX                            ; 0059af26
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0059af27
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059af2c
    LEA ESI,[EBX + 0x158]               ; 0059af2f
    TEST EAX,EAX                        ; 0059af35
    JZ 0x0059b136                       ; 0059af37
        ;   XREF to: 0059b136 (CONDITIONAL_JUMP)  ; LAB_0059b136
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0059af3d
    CMP EAX,0x2                         ; 0059af43
    JNC 0x0059b123                      ; 0059af46
        ;   XREF to: 0059b123 (CONDITIONAL_JUMP)  ; LAB_0059b123
    CMP EAX,0x1                         ; 0059af4c
    JNZ 0x0059b12a                      ; 0059af4f
        ;   XREF to: 0059b12a (CONDITIONAL_JUMP)  ; LAB_0059b12a
    PUSH 0x1                            ; 0059af55
        ;   Label: LAB_0059af55
    PUSH 0x5d9b85                       ; 0059af57 | DAT_005d9b85
    LEA EAX,[EBX + 0x158]               ; 0059af5c
        ;   Label: LAB_0059af5c
    PUSH EAX                            ; 0059af62
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 0059af63
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0059af68
        ;   Label: LAB_0059af68
    LEA EAX,[EBX + 0x249c]              ; 0059af6b
    MOV dword ptr [EAX + 0x8],0x0       ; 0059af71
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059af78
    MOV dword ptr [EAX + 0x4],EDX       ; 0059af7b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059af7e
    MOV dword ptr [EAX],EDX             ; 0059af81
    PUSH dword ptr [EBP + 0x18]         ; 0059af83
        ;   Label: LAB_0059af83
    PUSH EBX                            ; 0059af86
    LEA ESI,[EBX + 0x2518]              ; 0059af87
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0059af8d
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    ADD ESP,0x8                         ; 0059af92
    FLD float ptr [ESI]                 ; 0059af95
    FMUL float ptr [EBP + 0x18]         ; 0059af97
    FLD float ptr [ESI + 0x4]           ; 0059af9a
    FMUL float ptr [EBP + 0x18]         ; 0059af9d
    FLD float ptr [ESI + 0x8]           ; 0059afa0
    FMUL float ptr [EBP + 0x18]         ; 0059afa3
    LEA EDI,[ESP + 0x4]                 ; 0059afa6
    LEA ESI,[ESP + 0x28]                ; 0059afaa
    FXCH ST2                            ; 0059afae
    FSTP float ptr [ESP + 0x28]         ; 0059afb0
    FSTP float ptr [ESP + 0x2c]         ; 0059afb4
    FSTP float ptr [ESP + 0x30]         ; 0059afb8
    MOVSD ES:EDI,ESI                    ; 0059afbc
    MOVSD ES:EDI,ESI                    ; 0059afbd
    MOVSD ES:EDI,ESI                    ; 0059afbe
    LEA EDX,[EBX + 0x250c]              ; 0059afbf
    FLD float ptr [ESP + 0x4]           ; 0059afc5
    FLD float ptr [ESP + 0x8]           ; 0059afc9
    FLD float ptr [ESP + 0xc]           ; 0059afcd
    LEA EDI,[ESP + 0x88]                ; 0059afd1
    LEA ESI,[ESP + 0x64]                ; 0059afd8
    FXCH ST2                            ; 0059afdc
    FADD float ptr [EDX]                ; 0059afde
    FXCH                                ; 0059afe0
    FADD float ptr [EDX + 0x4]          ; 0059afe2
    FXCH ST2                            ; 0059afe5
    FADD float ptr [EDX + 0x8]          ; 0059afe7
    FXCH                                ; 0059afea
    FSTP float ptr [ESP + 0x64]         ; 0059afec
    FXCH                                ; 0059aff0
    FSTP float ptr [ESP + 0x68]         ; 0059aff2
    FSTP float ptr [ESP + 0x6c]         ; 0059aff6
    MOVSD ES:EDI,ESI                    ; 0059affa
    MOVSD ES:EDI,ESI                    ; 0059affb
    MOVSD ES:EDI,ESI                    ; 0059affc
    LEA EAX,[EBX + 0x249c]              ; 0059affd
    FLD float ptr [ESP + 0x88]          ; 0059b003
    FLD float ptr [ESP + 0x8c]          ; 0059b00a
    FLD float ptr [ESP + 0x90]          ; 0059b011
    LEA EDI,[ESP + 0x1c]                ; 0059b018
    LEA ESI,[ESP + 0x4c]                ; 0059b01c
    FXCH ST2                            ; 0059b020
    FADD float ptr [EAX]                ; 0059b022
    FXCH                                ; 0059b024
    FADD float ptr [EAX + 0x4]          ; 0059b026
    FXCH ST2                            ; 0059b029
    FADD float ptr [EAX + 0x8]          ; 0059b02b
    FXCH                                ; 0059b02e
    FSTP float ptr [ESP + 0x4c]         ; 0059b030
    FXCH                                ; 0059b034
    FSTP float ptr [ESP + 0x50]         ; 0059b036
    FSTP float ptr [ESP + 0x54]         ; 0059b03a
    MOVSD ES:EDI,ESI                    ; 0059b03e
    MOVSD ES:EDI,ESI                    ; 0059b03f
    MOVSD ES:EDI,ESI                    ; 0059b040
    MOV dword ptr [EDX + 0x8],0x0       ; 0059b041
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059b048
    MOV dword ptr [EDX + 0x4],ECX       ; 0059b04b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059b04e
    MOV dword ptr [EDX],ECX             ; 0059b051
    MOV dword ptr [EAX + 0x8],0x0       ; 0059b053
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059b05a
    MOV dword ptr [EAX + 0x4],EDX       ; 0059b05d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059b060
    MOV dword ptr [EAX],EDX             ; 0059b063
    LEA EAX,[ESP + 0x1c]                ; 0059b065
    PUSH EAX                            ; 0059b069
    PUSH EBX                            ; 0059b06a
    CALL core_charactr.cpp_FUN_0042c230 ; 0059b06b
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0059b070
    PUSH EBX                            ; 0059b073
    CALL core_charactr.cpp_FUN_0042cd30 ; 0059b074
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059b079
    LEA EAX,[EBX + 0x158]               ; 0059b07c
    PUSH EAX                            ; 0059b082
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0059b083
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059b088
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0059b08b
    PUSH EAX                            ; 0059b092
    PUSH dword ptr [EBP + 0x18]         ; 0059b093
    PUSH EBX                            ; 0059b096
    CALL core_charactr.cpp_FUN_00432330 ; 0059b097
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    ADD ESP,0xc                         ; 0059b09c
    PUSH dword ptr [EBP + 0x18]         ; 0059b09f
    PUSH EBX                            ; 0059b0a2
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0059b0a3
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059b0a8
    MOV ESP,EBP                         ; 0059b0ab
        ;   Label: LAB_0059b0ab
    POP EBP                             ; 0059b0ad
    POP EDI                             ; 0059b0ae
    POP ESI                             ; 0059b0af
    POP EBX                             ; 0059b0b0
    RET                                 ; 0059b0b1
    MOV EAX,ESP                         ; 0059b0b2
        ;   Label: LAB_0059b0b2
    PUSH EAX                            ; 0059b0b4
    PUSH ESI                            ; 0059b0b5
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 0059b0b6
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0059b0bb
    PUSH EAX                            ; 0059b0be
    PUSH EBX                            ; 0059b0bf
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059b0c0
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0059b0c5
    JMP 0x0059ae54                      ; 0059b0c8
        ;   XREF to: 0059ae54 (UNCONDITIONAL_JUMP)  ; LAB_0059ae54
    PUSH 0x1                            ; 0059b0cd
        ;   Label: LAB_0059b0cd
    PUSH 0x5d9b51                       ; 0059b0cf | = "STAND"
    PUSH ESI                            ; 0059b0d4
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 0059b0d5
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0059b0da
    PUSH EBX                            ; 0059b0dd
    PUSH 0x5d9b57                       ; 0059b0de | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005f1690]      ; 0059b0e3 | g_CConsolePtr
    PUSH EDI                            ; 0059b0e9 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0059b0ea
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0059af68                      ; 0059b0ef
        ;   XREF to: 0059af68 (UNCONDITIONAL_JUMP)  ; LAB_0059af68
    PUSH 0x0                            ; 0059b0f4
        ;   Label: LAB_0059b0f4
    PUSH 0x5d9b81                       ; 0059b0f6 | DAT_005d9b81
    PUSH ESI                            ; 0059b0fb
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0059b0fc
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059b101
    PUSH EAX                            ; 0059b104
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50 ; 0059b105
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0059b10a
    TEST EAX,EAX                        ; 0059b10d
    JL 0x0059af55                       ; 0059b10f
        ;   XREF to: 0059af55 (CONDITIONAL_JUMP)  ; LAB_0059af55
    PUSH 0x1                            ; 0059b115
    PUSH EAX                            ; 0059b117
    PUSH ESI                            ; 0059b118
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059b119
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    JMP 0x0059af68                      ; 0059b11e
        ;   XREF to: 0059af68 (UNCONDITIONAL_JUMP)  ; LAB_0059af68
    JBE 0x0059b0f4                      ; 0059b123
        ;   XREF to: 0059b0f4 (CONDITIONAL_JUMP)  ; LAB_0059b0f4
        ;   Label: LAB_0059b123
    CMP EAX,0x3                         ; 0059b125
    JZ 0x0059b0cd                       ; 0059b128
        ;   XREF to: 0059b0cd (CONDITIONAL_JUMP)  ; LAB_0059b0cd
    PUSH 0x1                            ; 0059b12a
        ;   Label: LAB_0059b12a
    PUSH 0x5d9b8a                       ; 0059b12c | = "STAND"
    JMP 0x0059af5c                      ; 0059b131
        ;   XREF to: 0059af5c (UNCONDITIONAL_JUMP)  ; LAB_0059af5c
    FLD float ptr [EBX + 0x34da0]       ; 0059b136
        ;   Label: LAB_0059b136
    FLD1                                ; 0059b13c
    FCOMPP                              ; 0059b13e
    FNSTSW AX                           ; 0059b140
    SAHF                                ; 0059b142
    JBE 0x0059b0ab                      ; 0059b143
        ;   XREF to: 0059b0ab (CONDITIONAL_JUMP)  ; LAB_0059b0ab
    PUSH ESI                            ; 0059b149
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059b14a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059b14f
    ADD ESP,0x4                         ; 0059b152
    MOV dword ptr [EBX + 0x3416c],EAX   ; 0059b155
    CMP EAX,0x91                        ; 0059b15b
    JNZ 0x0059b228                      ; 0059b160
        ;   XREF to: 0059b228 (CONDITIONAL_JUMP)  ; LAB_0059b228
    MOV dword ptr [EBX + 0xf8],0x1      ; 0059b166
        ;   Label: LAB_0059b166
    MOV dword ptr [EBX + 0xfc],0x0      ; 0059b170
    MOV EAX,dword ptr [EBX + 0x3416c]   ; 0059b17a
        ;   Label: LAB_0059b17a
    CMP EAX,0x91                        ; 0059b180
    JZ 0x0059b238                       ; 0059b185
        ;   XREF to: 0059b238 (CONDITIONAL_JUMP)  ; LAB_0059b238
    CMP EAX,0x92                        ; 0059b18b
    JZ 0x0059b238                       ; 0059b190
        ;   XREF to: 0059b238 (CONDITIONAL_JUMP)  ; LAB_0059b238
    CMP dword ptr [EBX + 0x3416c],0x0   ; 0059b196
        ;   Label: LAB_0059b196
    JZ 0x0059b208                       ; 0059b19d
        ;   XREF to: 0059b208 (CONDITIONAL_JUMP)  ; LAB_0059b208
    LEA EAX,[EBX + 0x249c]              ; 0059b19f
    PUSH EAX                            ; 0059b1a5
    PUSH EBX                            ; 0059b1a6
    LEA ESI,[ESP + 0x60]                ; 0059b1a7
    LEA EDI,[ESP + 0x3c]                ; 0059b1ab
    CALL core_actor.cpp_FUN_00408b00    ; 0059b1af
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x60]                ; 0059b1b4
    ADD ESP,0x8                         ; 0059b1b8
    LEA EAX,[EBX + 0x20]                ; 0059b1bb
    MOVSD ES:EDI,ESI                    ; 0059b1be
    MOVSD ES:EDI,ESI                    ; 0059b1bf
    MOVSD ES:EDI,ESI                    ; 0059b1c0
    FLD float ptr [EAX]                 ; 0059b1c1
    FLD float ptr [EAX + 0x4]           ; 0059b1c3
    FLD float ptr [EAX + 0x8]           ; 0059b1c6
    FXCH ST2                            ; 0059b1c9
    FADD float ptr [ESP + 0x34]         ; 0059b1cb
    FXCH                                ; 0059b1cf
    FADD float ptr [ESP + 0x38]         ; 0059b1d1
    FXCH ST2                            ; 0059b1d5
    FADD float ptr [ESP + 0x3c]         ; 0059b1d7
    FXCH                                ; 0059b1db
    FSTP float ptr [EAX]                ; 0059b1dd
    FXCH                                ; 0059b1df
    FSTP float ptr [EAX + 0x4]          ; 0059b1e1
    FSTP float ptr [EAX + 0x8]          ; 0059b1e4
    MOV ESI,dword ptr [EBX + 0x34170]   ; 0059b1e7
    TEST ESI,ESI                        ; 0059b1ed
    JZ 0x0059b208                       ; 0059b1ef
        ;   XREF to: 0059b208 (CONDITIONAL_JUMP)  ; LAB_0059b208
    MOV EDX,dword ptr [EAX]             ; 0059b1f1
    MOV dword ptr [ESI + 0x20],EDX      ; 0059b1f3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059b1f6
    MOV dword ptr [ESI + 0x24],EDX      ; 0059b1f9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059b1fc
    MOV dword ptr [ESI + 0x28],EDX      ; 0059b1ff
    MOV EAX,dword ptr [EAX + 0xc]       ; 0059b202
    MOV dword ptr [ESI + 0x2c],EAX      ; 0059b205
    LEA EAX,[EBX + 0x158]               ; 0059b208
        ;   Label: LAB_0059b208
    PUSH EAX                            ; 0059b20e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0059b20f
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059b214
    PUSH dword ptr [EBP + 0x18]         ; 0059b217
    PUSH EBX                            ; 0059b21a
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0059b21b
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059b220
    JMP 0x0059af83                      ; 0059b223
        ;   XREF to: 0059af83 (UNCONDITIONAL_JUMP)  ; LAB_0059af83
    CMP EAX,0x92                        ; 0059b228
        ;   Label: LAB_0059b228
    JZ 0x0059b166                       ; 0059b22d
        ;   XREF to: 0059b166 (CONDITIONAL_JUMP)  ; LAB_0059b166
    JMP 0x0059b17a                      ; 0059b233
        ;   XREF to: 0059b17a (UNCONDITIONAL_JUMP)  ; LAB_0059b17a
    CMP dword ptr [EBX + 0x3416c],0x92  ; 0059b238
        ;   Label: LAB_0059b238
    JNZ 0x0059b196                      ; 0059b242
        ;   XREF to: 0059b196 (CONDITIONAL_JUMP)  ; LAB_0059b196
    FLD float ptr [EBP + 0x18]          ; 0059b248
    FMUL double ptr [0x005d9b90]        ; 0059b24b | DAT_005d9b90
    FADD float ptr [EBX + 0x34da0]      ; 0059b251
    FST float ptr [EBX + 0x34da0]       ; 0059b257
    FLD1                                ; 0059b25d
    FCOMPP                              ; 0059b25f
    FNSTSW AX                           ; 0059b261
    SAHF                                ; 0059b263
    JA 0x0059b196                       ; 0059b264
        ;   XREF to: 0059b196 (CONDITIONAL_JUMP)  ; LAB_0059b196
    MOV ESI,dword ptr [EBX + 0x34170]   ; 0059b26a
    TEST ESI,ESI                        ; 0059b270
    JZ 0x0059b196                       ; 0059b272
        ;   XREF to: 0059b196 (CONDITIONAL_JUMP)  ; LAB_0059b196
    PUSH ESI                            ; 0059b278
    MOV EAX,[0x00600530]                ; 0059b279 | DAT_00600530
    PUSH EAX                            ; 0059b27e | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0059b27f
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0059b284
    PUSH 0x1                            ; 0059b287
    PUSH EBX                            ; 0059b289
    MOV EDX,dword ptr [0x00600530]      ; 0059b28a | DAT_00600530
    PUSH EDX                            ; 0059b290 | DAT_01d81080
    MOV dword ptr [EBX + 0x34170],0x0   ; 0059b291
    CALL core_mission.cpp_FUN_004f6f10  ; 0059b29b
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    ADD ESP,0xc                         ; 0059b2a0
    JMP 0x0059b196                      ; 0059b2a3
        ;   XREF to: 0059b196 (UNCONDITIONAL_JUMP)  ; LAB_0059b196

