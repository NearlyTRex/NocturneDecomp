; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hecaitmx_cpp_CHecaitomix_process_FUN_00597f40(CHecaitomix *this_ptr,float delta_time)
;
; Parameters:
; CHecaitomix *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00597f1c = 005980bb
;   TerminatedCString s_s_confused_while_walking_005d974b
;   TerminatedCString s_Zone_f_005d9775
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d977f
;   undefined4 DAT_005d97a7
;   undefined4 DAT_005d97af
;   undefined4 DAT_005e785c
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597f40
        ;   Label: core_hecaitmx.cpp_CHecaitomix_process_FUN_00597f40
    PUSH ESI                            ; 00597f41
    PUSH EDI                            ; 00597f42
    PUSH EBP                            ; 00597f43
    MOV EBP,ESP                         ; 00597f44
    SUB ESP,0x88                        ; 00597f46
    SUB EBP,0x7a                        ; 00597f4c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00597f4f
    PUSH dword ptr [EBP + 0x92]         ; 00597f55
    MOV EAX,dword ptr [EBX + 0x154]     ; 00597f5b
    PUSH EBX                            ; 00597f61
    CALL dword ptr [EAX + 0x148]        ; 00597f62
    ADD ESP,0x8                         ; 00597f68
    TEST EAX,EAX                        ; 00597f6b
    JNZ 0x00597f77                      ; 00597f6d
        ;   XREF to: 00597f77 (CONDITIONAL_JUMP)  ; LAB_00597f77
    LEA ESP,[EBP + 0x7a]                ; 00597f6f
    POP EBP                             ; 00597f72
    POP EDI                             ; 00597f73
    POP ESI                             ; 00597f74
    POP EBX                             ; 00597f75
    RET                                 ; 00597f76
    LEA ESI,[EBX + 0x158]               ; 00597f77
        ;   Label: LAB_00597f77
    PUSH ESI                            ; 00597f7d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00597f7e
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00597f83
    PUSH ESI                            ; 00597f86
    MOV EDI,dword ptr [EAX + 0x24]      ; 00597f87
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00597f8a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00597f8f
    PUSH dword ptr [EBP + 0x92]         ; 00597f92
    PUSH EBX                            ; 00597f98
    CALL core_charactr.cpp_FUN_00433c60 ; 00597f99
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 00597f9e
    MOV EDX,dword ptr [EBX + 0xcdd0]    ; 00597fa1
    XOR EAX,EAX                         ; 00597fa7
    CMP EDX,0x1                         ; 00597fa9
    JZ 0x00598016                       ; 00597fac
        ;   XREF to: 00598016 (CONDITIONAL_JUMP)  ; LAB_00598016
    PUSH EAX                            ; 00597fae
        ;   Label: LAB_00597fae
    PUSH dword ptr [EBP + 0x92]         ; 00597faf
    PUSH EBX                            ; 00597fb5
    CALL core_charactr.cpp_FUN_00432330 ; 00597fb6
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    LEA EAX,[EBX + 0x249c]              ; 00597fbb
    MOV dword ptr [EAX + 0x8],0x0       ; 00597fc1
    FLD float ptr [EBP + 0x92]          ; 00597fc8
    MOV EDX,dword ptr [EAX + 0x8]       ; 00597fce
    MOV dword ptr [EAX + 0x4],EDX       ; 00597fd1
    MOV EDX,dword ptr [EAX + 0x4]       ; 00597fd4
    MOV dword ptr [EAX],EDX             ; 00597fd7
    FMUL float ptr [EBX + 0xcdcc]       ; 00597fd9
    FMUL float ptr [EBX + 0xd068]       ; 00597fdf
    ADD ESP,0xc                         ; 00597fe5
    LEA ESI,[EBX + 0x158]               ; 00597fe8
    FSTP float ptr [EBP + 0x72]         ; 00597fee
    FLD float ptr [EBP + 0x72]          ; 00597ff1
        ;   Label: LAB_00597ff1
    FLDZ                                ; 00597ff4
    FCOMPP                              ; 00597ff6
    FNSTSW AX                           ; 00597ff8
    SAHF                                ; 00597ffa
    JNC 0x0059801a                      ; 00597ffb
        ;   XREF to: 0059801a (CONDITIONAL_JUMP)  ; LAB_0059801a
    LEA EAX,[EBP + 0x72]                ; 00597ffd
    PUSH EAX                            ; 00598000
    PUSH ESI                            ; 00598001
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00598002
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00598007
    PUSH EAX                            ; 0059800a
    PUSH EBX                            ; 0059800b
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0059800c
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00598011
    JMP 0x00597ff1                      ; 00598014
        ;   XREF to: 00597ff1 (UNCONDITIONAL_JUMP)  ; LAB_00597ff1
    MOV EAX,EDX                         ; 00598016
        ;   Label: LAB_00598016
    JMP 0x00597fae                      ; 00598018
        ;   XREF to: 00597fae (UNCONDITIONAL_JUMP)  ; LAB_00597fae
    FLD float ptr [EBP + 0x92]          ; 0059801a
        ;   Label: LAB_0059801a
    FMUL float ptr [EBX + 0xcdcc]       ; 00598020
    SUB ESP,0x4                         ; 00598026
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00598029
    MOV dword ptr [EBX + 0x2524],EAX    ; 0059802f
    FSTP float ptr [ESP]                ; 00598035
    PUSH EBX                            ; 00598038
    CALL core_charactr.cpp_FUN_00434850 ; 00598039
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0059803e
    PUSH dword ptr [EBP + 0x92]         ; 00598041
    PUSH EBX                            ; 00598047
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00598048
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0059804d
    TEST EAX,EAX                        ; 00598050
    JZ 0x00598465                       ; 00598052
        ;   XREF to: 00598465 (CONDITIONAL_JUMP)  ; LAB_00598465
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00598058
    LEA ESI,[EBX + 0x158]               ; 0059805e
    CMP EAX,0x2                         ; 00598064
    JNC 0x0059823f                      ; 00598067
        ;   XREF to: 0059823f (CONDITIONAL_JUMP)  ; LAB_0059823f
    CMP EAX,0x1                         ; 0059806d
    JNZ 0x00598246                      ; 00598070
        ;   XREF to: 00598246 (CONDITIONAL_JUMP)  ; LAB_00598246
    PUSH ESI                            ; 00598076
    CALL core_motion.cpp_FUN_004fc930   ; 00598077
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059807c
    ADD ESP,0x4                         ; 0059807f
    FLD float ptr [EBP + 0x76]          ; 00598082
    FCOMP double ptr [0x005d97af]       ; 00598085 | DAT_005d97af
    FNSTSW AX                           ; 0059808b
    SAHF                                ; 0059808d
    JBE 0x005980a3                      ; 0059808e
        ;   XREF to: 005980a3 (CONDITIONAL_JUMP)  ; LAB_005980a3
    PUSH 0x1                            ; 00598090
    PUSH 0x2                            ; 00598092
    LEA EAX,[EBX + 0x158]               ; 00598094
    PUSH EAX                            ; 0059809a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059809b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0059809b
    ADD ESP,0xc                         ; 005980a0
        ;   Label: LAB_005980a0
    LEA EAX,[EBX + 0x249c]              ; 005980a3
        ;   Label: LAB_005980a3
    MOV dword ptr [EAX + 0x8],0x0       ; 005980a9
    MOV EDX,dword ptr [EAX + 0x8]       ; 005980b0
    MOV dword ptr [EAX + 0x4],EDX       ; 005980b3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005980b6
    MOV dword ptr [EAX],EDX             ; 005980b9
    FLD float ptr [EBX + 0xcde0]        ; 005980bb
        ;   Label: caseD_1
    FLDZ                                ; 005980c1
    FCOMPP                              ; 005980c3
    FNSTSW AX                           ; 005980c5
    SAHF                                ; 005980c7
    JNC 0x005980dc                      ; 005980c8
        ;   XREF to: 005980dc (CONDITIONAL_JUMP)  ; LAB_005980dc
    FLD float ptr [EBX + 0xcde0]        ; 005980ca
    FSUB float ptr [EBP + 0x92]         ; 005980d0
    FSTP float ptr [EBX + 0xcde0]       ; 005980d6
    PUSH EBX                            ; 005980dc
        ;   Label: LAB_005980dc
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 005980dd
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005980e2
    TEST EAX,EAX                        ; 005980e5
    JZ 0x005981c4                       ; 005980e7
        ;   XREF to: 005981c4 (CONDITIONAL_JUMP)  ; LAB_005981c4
    PUSH dword ptr [EBP + 0x92]         ; 005980ed
    PUSH EBX                            ; 005980f3
    LEA ESI,[EBX + 0x2518]              ; 005980f4
    CALL core_charactr.cpp_FUN_0042c1e0 ; 005980fa
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 005980ff
    FMUL float ptr [EBP + 0x92]         ; 00598101
    FLD float ptr [ESI + 0x4]           ; 00598107
    FMUL float ptr [EBP + 0x92]         ; 0059810a
    FLD float ptr [ESI + 0x8]           ; 00598110
    FMUL float ptr [EBP + 0x92]         ; 00598113
    LEA EDI,[EBP + 0x46]                ; 00598119
    LEA ESI,[EBP + 0x3a]                ; 0059811c
    FXCH ST2                            ; 0059811f
    FSTP float ptr [EBP + 0x3a]         ; 00598121
    FSTP float ptr [EBP + 0x3e]         ; 00598124
    FSTP float ptr [EBP + 0x42]         ; 00598127
    MOVSD ES:EDI,ESI                    ; 0059812a
    MOVSD ES:EDI,ESI                    ; 0059812b
    MOVSD ES:EDI,ESI                    ; 0059812c
    LEA EAX,[EBX + 0x250c]              ; 0059812d
    FLD float ptr [EBP + 0x46]          ; 00598133
    FLD float ptr [EBP + 0x4a]          ; 00598136
    FLD float ptr [EBP + 0x4e]          ; 00598139
    LEA EDI,[EBP + 0x2e]                ; 0059813c
    LEA ESI,[EBP + -0x2]                ; 0059813f
    FXCH ST2                            ; 00598142
    FADD float ptr [EAX]                ; 00598144
    FXCH                                ; 00598146
    FADD float ptr [EAX + 0x4]          ; 00598148
    FXCH ST2                            ; 0059814b
    FADD float ptr [EAX + 0x8]          ; 0059814d
    FXCH                                ; 00598150
    FSTP float ptr [EBP + -0x2]         ; 00598152
    FXCH                                ; 00598155
    FSTP float ptr [EBP + 0x2]          ; 00598157
    FSTP float ptr [EBP + 0x6]          ; 0059815a
    MOVSD ES:EDI,ESI                    ; 0059815d
    MOVSD ES:EDI,ESI                    ; 0059815e
    MOVSD ES:EDI,ESI                    ; 0059815f
    LEA EDX,[EBX + 0x249c]              ; 00598160
    FLD float ptr [EBP + 0x2e]          ; 00598166
    FLD float ptr [EBP + 0x32]          ; 00598169
    FLD float ptr [EBP + 0x36]          ; 0059816c
    LEA EDI,[EBP + -0xe]                ; 0059816f
    LEA ESI,[EBP + 0x22]                ; 00598172
    FXCH ST2                            ; 00598175
    FADD float ptr [EDX]                ; 00598177
    FXCH                                ; 00598179
    FADD float ptr [EDX + 0x4]          ; 0059817b
    FXCH ST2                            ; 0059817e
    FADD float ptr [EDX + 0x8]          ; 00598180
    FXCH                                ; 00598183
    FSTP float ptr [EBP + 0x22]         ; 00598185
    FXCH                                ; 00598188
    FSTP float ptr [EBP + 0x26]         ; 0059818a
    FSTP float ptr [EBP + 0x2a]         ; 0059818d
    MOVSD ES:EDI,ESI                    ; 00598190
    MOVSD ES:EDI,ESI                    ; 00598191
    MOVSD ES:EDI,ESI                    ; 00598192
    MOV dword ptr [EAX + 0x8],0x0       ; 00598193
    ADD ESP,0x8                         ; 0059819a
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059819d
    MOV dword ptr [EAX + 0x4],ECX       ; 005981a0
    MOV ECX,dword ptr [EAX + 0x4]       ; 005981a3
    MOV dword ptr [EAX],ECX             ; 005981a6
    MOV dword ptr [EDX + 0x8],0x0       ; 005981a8
    LEA EAX,[EBP + -0xe]                ; 005981af
    FLD float ptr [EDX + 0x8]           ; 005981b2
    PUSH EAX                            ; 005981b5
    FST float ptr [EDX + 0x4]           ; 005981b6
    PUSH EBX                            ; 005981b9
    FSTP float ptr [EDX]                ; 005981ba
    CALL core_charactr.cpp_FUN_0042c230 ; 005981bc
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005981c1
    PUSH EBX                            ; 005981c4
        ;   Label: LAB_005981c4
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 005981c5
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005981ca
    LEA EAX,[EBX + 0x158]               ; 005981cd
    PUSH EAX                            ; 005981d3
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005981d4
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005981d9
    PUSH dword ptr [EBP + 0x92]         ; 005981dc
    PUSH EBX                            ; 005981e2
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 005981e3
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005981e8
    LEA ESP,[EBP + 0x7a]                ; 005981eb
    POP EBP                             ; 005981ee
    POP EDI                             ; 005981ef
    POP ESI                             ; 005981f0
    POP EBX                             ; 005981f1
    RET                                 ; 005981f2
    PUSH 0x1                            ; 005981f3
        ;   Label: LAB_005981f3
    PUSH 0x1                            ; 005981f5
    PUSH ESI                            ; 005981f7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005981f8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005981fd
    PUSH EBX                            ; 00598200
    PUSH 0x5d974b                       ; 00598201 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005f1690]      ; 00598206 | g_CConsolePtr
    PUSH ECX                            ; 0059820c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0059820d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x005980a0                      ; 00598212
        ;   XREF to: 005980a0 (UNCONDITIONAL_JUMP)  ; LAB_005980a0
    PUSH ESI                            ; 00598217
        ;   Label: LAB_00598217
    CALL core_motion.cpp_FUN_004fc930   ; 00598218
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059821d
    ADD ESP,0x4                         ; 00598220
    FLD float ptr [EBP + 0x76]          ; 00598223
    FCOMP double ptr [0x005d97af]       ; 00598226 | DAT_005d97af
    FNSTSW AX                           ; 0059822c
    SAHF                                ; 0059822e
    JBE 0x005980a3                      ; 0059822f
        ;   XREF to: 005980a3 (CONDITIONAL_JUMP)  ; LAB_005980a3
    PUSH 0x1                            ; 00598235
    PUSH 0x2                            ; 00598237
    PUSH ESI                            ; 00598239
    JMP 0x0059809b                      ; 0059823a
        ;   XREF to: 0059809b (UNCONDITIONAL_JUMP)  ; LAB_0059809b
    JBE 0x00598217                      ; 0059823f
        ;   XREF to: 00598217 (CONDITIONAL_JUMP)  ; LAB_00598217
        ;   Label: LAB_0059823f
    CMP EAX,0x3                         ; 00598241
    JZ 0x005981f3                       ; 00598244
        ;   XREF to: 005981f3 (CONDITIONAL_JUMP)  ; LAB_005981f3
    LEA ESI,[EBX + 0x158]               ; 00598246
        ;   Label: LAB_00598246
    PUSH ESI                            ; 0059824c
    CALL core_motion.cpp_FUN_004fc930   ; 0059824d
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00598252
    ADD ESP,0x4                         ; 00598255
    FLD float ptr [EBP + 0x76]          ; 00598258
    FCOMP double ptr [0x005d97af]       ; 0059825b | DAT_005d97af
    FNSTSW AX                           ; 00598261
    SAHF                                ; 00598263
    JBE 0x005980a3                      ; 00598264
        ;   XREF to: 005980a3 (CONDITIONAL_JUMP)  ; LAB_005980a3
    PUSH 0x1                            ; 0059826a
    PUSH 0x1                            ; 0059826c
    PUSH ESI                            ; 0059826e
    JMP 0x0059809b                      ; 0059826f
        ;   XREF to: 0059809b (UNCONDITIONAL_JUMP)  ; LAB_0059809b
    LEA ESI,[EBX + 0x158]               ; 00598274
        ;   Label: caseD_3
    PUSH ESI                            ; 0059827a
    CALL core_motion.cpp_FUN_004fc930   ; 0059827b
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00598280
    ADD ESP,0x4                         ; 00598283
    FLD float ptr [EBP + 0x76]          ; 00598286
    FSTP double ptr [EBP + 0x6a]        ; 00598289
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0059828c
    PUSH EDI                            ; 0059828f
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00598290
    PUSH EAX                            ; 00598293
    PUSH 0x5d9775                       ; 00598294 | = "Zone: %f\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00598299 | g_CConsolePtr
    PUSH EDX                            ; 0059829f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 005982a0
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    FLD double ptr [EBP + 0x6a]         ; 005982a5
    ADD ESP,0x10                        ; 005982a8
    FCOMP double ptr [0x005d97a7]       ; 005982ab | DAT_005d97a7
    FNSTSW AX                           ; 005982b1
    SAHF                                ; 005982b3
    JBE 0x005980bb                      ; 005982b4
        ;   XREF to: 005980bb (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 005982ba
        ;   Label: LAB_005982ba
    PUSH 0x1                            ; 005982bc
    PUSH ESI                            ; 005982be
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005982bf
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005982c4
    JMP 0x005980bb                      ; 005982c7
        ;   XREF to: 005980bb (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ECX,dword ptr [EBX + 0xcdd0]    ; 005982cc
        ;   Label: caseD_7
    TEST ECX,ECX                        ; 005982d2
    JNZ 0x005980bb                      ; 005982d4
        ;   XREF to: 005980bb (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xdc],0x0      ; 005982da
    JNZ 0x005980bb                      ; 005982e1
        ;   XREF to: 005980bb (CONDITIONAL_JUMP)  ; caseD_6
    PUSH ECX                            ; 005982e7
    LEA EAX,[EBX + 0x158]               ; 005982e8
    PUSH EAX                            ; 005982ee
    LEA ESI,[EBP + 0x52]                ; 005982ef
    LEA EDI,[EBP + 0x16]                ; 005982f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 005982f5
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005982fa
    LEA EAX,[EBP + 0x16]                ; 005982fd
    LEA ESI,[EBP + 0x52]                ; 00598300
    PUSH EAX                            ; 00598303
    MOVSD ES:EDI,ESI                    ; 00598304
    MOVSD ES:EDI,ESI                    ; 00598305
    MOVSD ES:EDI,ESI                    ; 00598306
    PUSH EBX                            ; 00598307
    LEA ESI,[EBP + 0x5e]                ; 00598308
    CALL core_actor.cpp_FUN_00408b80    ; 0059830b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00598310
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00598313
    JMP 0x005980bb                      ; 0059831d
        ;   XREF to: 005980bb (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00598322
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598328
    PUSH EBX                            ; 0059832e
    CALL dword ptr [EAX + 0x144]        ; 0059832f
    ADD ESP,0x8                         ; 00598335
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00598338
    LEA ESI,[EBX + 0x158]               ; 0059833e
    TEST ECX,ECX                        ; 00598344
    JNZ 0x0059838f                      ; 00598346
        ;   XREF to: 0059838f (CONDITIONAL_JUMP)  ; LAB_0059838f
    PUSH dword ptr [EBP + 0x92]         ; 00598348
    PUSH EBX                            ; 0059834e
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0059834f
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00598354
    TEST EAX,EAX                        ; 00598357
    JZ 0x005982ba                       ; 00598359
        ;   XREF to: 005982ba (CONDITIONAL_JUMP)  ; LAB_005982ba
    PUSH ESI                            ; 0059835f
    CALL core_motion.cpp_FUN_004fc930   ; 00598360
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00598365
    ADD ESP,0x4                         ; 00598368
    FLD float ptr [EBP + 0x76]          ; 0059836b
    FCOMP double ptr [0x005d97af]       ; 0059836e | DAT_005d97af
    FNSTSW AX                           ; 00598374
    SAHF                                ; 00598376
    JBE 0x005980bb                      ; 00598377
        ;   XREF to: 005980bb (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0059837d
    PUSH 0x2                            ; 0059837f
    PUSH ESI                            ; 00598381
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00598382
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00598387
    JMP 0x005980bb                      ; 0059838a
        ;   XREF to: 005980bb (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x3e32b8c2                     ; 0059838f
        ;   Label: LAB_0059838f
    LEA EAX,[EBX + 0x249c]              ; 00598394
    PUSH 0x3e4ccccd                     ; 0059839a
    MOV dword ptr [EAX + 0x8],0x0       ; 0059839f
    XOR EDI,EDI                         ; 005983a6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005983a8
    MOV dword ptr [EAX + 0x4],EDX       ; 005983ab
    MOV EDX,dword ptr [EAX + 0x4]       ; 005983ae
    MOV dword ptr [EAX],EDX             ; 005983b1
    MOV EAX,[0x005e785c]                ; 005983b3 | DAT_005e785c
    MOV dword ptr [EBP + 0xa],EDI       ; 005983b8
    MOV dword ptr [EBP + 0x12],EAX      ; 005983bb
    LEA EAX,[EBP + 0xa]                 ; 005983be
    MOV dword ptr [EBP + 0xe],EDI       ; 005983c1
    PUSH EAX                            ; 005983c4
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005983c5
    PUSH EAX                            ; 005983cb
    MOV EDX,dword ptr [EAX + 0x154]     ; 005983cc
    CALL dword ptr [EDX + 0xc4]         ; 005983d2
    ADD ESP,0x4                         ; 005983d8
    PUSH EAX                            ; 005983db
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005983dc
    ADD EAX,0x20                        ; 005983e2
    PUSH EAX                            ; 005983e5
    PUSH EBX                            ; 005983e6
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 005983e7
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005983ec
    TEST EAX,EAX                        ; 005983ef
    JL 0x00598438                       ; 005983f1
        ;   XREF to: 00598438 (CONDITIONAL_JUMP)  ; LAB_00598438
    JLE 0x005980bb                      ; 005983f3
        ;   XREF to: 005980bb (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xcde0]        ; 005983f9
    FLDZ                                ; 005983ff
    FCOMPP                              ; 00598401
    FNSTSW AX                           ; 00598403
    SAHF                                ; 00598405
    JC 0x005980bb                       ; 00598406
        ;   XREF to: 005980bb (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x64                           ; 0059840c
    PUSH EDI                            ; 0059840e
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0059840f
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00598414
    CMP EAX,0x4b                        ; 00598417
    JL 0x0059845f                       ; 0059841a
        ;   XREF to: 0059845f (CONDITIONAL_JUMP)  ; LAB_0059845f
    PUSH 0x1                            ; 0059841c
    PUSH 0x5                            ; 0059841e
    PUSH ESI                            ; 00598420
        ;   Label: LAB_00598420
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00598421
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00598426
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00598429
    JMP 0x005980bb                      ; 00598433
        ;   XREF to: 005980bb (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 00598438
        ;   Label: LAB_00598438
    PUSH 0x5d977f                       ; 00598439 | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0059843e | g_CConsolePtr
    PUSH EDX                            ; 00598444 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00598445
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0059844a
    PUSH 0x1                            ; 0059844d
    PUSH 0x1                            ; 0059844f
    PUSH ESI                            ; 00598451
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00598452
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00598457
    JMP 0x005980bb                      ; 0059845a
        ;   XREF to: 005980bb (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0059845f
        ;   Label: LAB_0059845f
    PUSH 0x3                            ; 00598461
    JMP 0x00598420                      ; 00598463
        ;   XREF to: 00598420 (UNCONDITIONAL_JUMP)  ; LAB_00598420
    LEA EAX,[EDI + -0x1]                ; 00598465
        ;   Label: LAB_00598465
    CMP EAX,0x6                         ; 00598468
    JA 0x005980bb                       ; 0059846b
        ;   XREF to: 005980bb (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x597f1c]  ; 00598471 | caseD_6 | caseD_2 | caseD_5
        ;   Label: switchD

