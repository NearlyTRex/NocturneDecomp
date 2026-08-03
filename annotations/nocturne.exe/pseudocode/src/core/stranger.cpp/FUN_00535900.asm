; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_00535900(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x250]:1  local_250
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[1]:
;   core_stranger.cpp_CStranger_process_FUN_005357d0 at 00535813
;
; Referenced Globals:
;   void* switchdataD_005358a0 = 0053737b
;   void* switchdataD_005358b8 = 005371d5
;   TerminatedCString s_DebugActionPending_005954d7
;   TerminatedCString s_grabbedBy_s_005954ea
;   TerminatedCString s_pushedObject_s_005954f8
;   TerminatedCString s_ladder_00595509
;   TerminatedCString s_pickup_00595511
;   TerminatedCString s_hurt_00595519
;   TerminatedCString s_door_0059551f
;   TerminatedCString s_sitting_00595525
;   TerminatedCString s_stashinventory_0059552e
;   TerminatedCString s_placeobject_0059553e
;   TerminatedCString s_putdownobject_0059554b
;   TerminatedCString s_toss_0059555a
;   TerminatedCString s_attackmelee_00595560
;   ... and 53 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0
;   core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535900
        ;   Label: core_stranger.cpp_FUN_00535900
    PUSH ESI                            ; 00535901
    PUSH EDI                            ; 00535902
    PUSH EBP                            ; 00535903
    MOV EBP,ESP                         ; 00535904
    SUB ESP,0x2e8                       ; 00535906
    AND ESP,0xfffffff8                  ; 0053590c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053590f
    PUSH 0x5954d7                       ; 00535912 | = "DebugActionPending"
    MOV EDX,dword ptr [0x005b7650]      ; 00535917 | DAT_005b7650
    PUSH EDX                            ; 0053591d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0053591e
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00535923
    MOV ECX,dword ptr [EBX + 0x24f0]    ; 00535926
    MOV dword ptr [ESP + 0x2d4],EAX     ; 0053592c
    TEST ECX,ECX                        ; 00535933
    JZ 0x00535a4a                       ; 00535935
        ;   XREF to: 00535a4a (CONDITIONAL_JUMP)  ; LAB_00535a4a
    FLD float ptr [EBX + 0x1fb18]       ; 0053593b
    FCOMP float ptr [0x005955ff]        ; 00535941 | FLOAT_005955ff
    FNSTSW AX                           ; 00535947
    SAHF                                ; 00535949
    JNC 0x00535a4a                      ; 0053594a
        ;   XREF to: 00535a4a (CONDITIONAL_JUMP)  ; LAB_00535a4a
    LEA EDX,[ESP + 0xa8]                ; 00535950
    PUSH EDX                            ; 00535957
    MOV EAX,ECX                         ; 00535958
    MOV ECX,dword ptr [ECX + 0x14c]     ; 0053595a
    PUSH EAX                            ; 00535960
    CALL dword ptr [ECX + 0x14]         ; 00535961
    ADD ESP,0x8                         ; 00535964
    LEA EDX,[EBX + 0x1fb0c]             ; 00535967
    MOV EDI,EAX                         ; 0053596d
    MOV ESI,EDX                         ; 0053596f
    CMP EDX,EAX                         ; 00535971
    JZ 0x00535985                       ; 00535973
        ;   XREF to: 00535985 (CONDITIONAL_JUMP)  ; LAB_00535985
    MOV ECX,dword ptr [EAX]             ; 00535975
    MOV dword ptr [EDX],ECX             ; 00535977
    MOV ECX,dword ptr [EAX + 0x4]       ; 00535979
    MOV dword ptr [EDX + 0x4],ECX       ; 0053597c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053597f
    MOV dword ptr [EDX + 0x8],ECX       ; 00535982
    LEA EDX,[EDI + 0xc]                 ; 00535985
        ;   Label: LAB_00535985
    LEA EAX,[ESI + 0xc]                 ; 00535988
    CMP EAX,EDX                         ; 0053598b
    JZ 0x0053599f                       ; 0053598d
        ;   XREF to: 0053599f (CONDITIONAL_JUMP)  ; LAB_0053599f
    MOV ECX,dword ptr [EDX]             ; 0053598f
    MOV dword ptr [EAX],ECX             ; 00535991
    MOV ECX,dword ptr [EDX + 0x4]       ; 00535993
    MOV dword ptr [EAX + 0x4],ECX       ; 00535996
    MOV ECX,dword ptr [EDX + 0x8]       ; 00535999
    MOV dword ptr [EAX + 0x8],ECX       ; 0053599c
    LEA EAX,[EBX + 0x1fb0c]             ; 0053599f
        ;   Label: LAB_0053599f
    LEA EDX,[EBX + 0x1fb18]             ; 005359a5
    FLD float ptr [EAX]                 ; 005359ab
    FADD float ptr [EDX]                ; 005359ad
    FST float ptr [ESP + 0xd8]          ; 005359af
    FLD float ptr [EAX + 0x4]           ; 005359b6
    FADD float ptr [EDX + 0x4]          ; 005359b9
    FXCH                                ; 005359bc
    FLD float ptr [0x00595603]          ; 005359be | FLOAT_00595603
    FXCH                                ; 005359c4
    FMUL ST1                            ; 005359c6
    FXCH ST2                            ; 005359c8
    FST float ptr [ESP + 0xdc]          ; 005359ca
    FLD float ptr [EAX + 0x8]           ; 005359d1
    FADD float ptr [EDX + 0x8]          ; 005359d4
    FXCH                                ; 005359d7
    FMUL ST2                            ; 005359d9
    FXCH                                ; 005359db
    FST float ptr [ESP + 0xe0]          ; 005359dd
    FMULP ST2                           ; 005359e4
    LEA EAX,[ESP + 0x150]               ; 005359e6
    FXCH ST2                            ; 005359ed
    FSTP float ptr [ESP + 0x150]        ; 005359ef
    PUSH EAX                            ; 005359f6
    LEA EAX,[ESP + 0x130]               ; 005359f7
    FXCH                                ; 005359fe
    FSTP float ptr [ESP + 0x158]        ; 00535a00
    PUSH EAX                            ; 00535a07
    FSTP float ptr [ESP + 0x160]        ; 00535a08
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 00535a0f
    PUSH ESI                            ; 00535a15
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00535a16
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00535a1b
    PUSH EAX                            ; 00535a1e
    LEA EAX,[ESP + 0x100]               ; 00535a1f
    PUSH EAX                            ; 00535a26
    PUSH EBX                            ; 00535a27
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00535a28
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    LEA EDX,[EBX + 0x1fb00]             ; 00535a2d
    ADD ESP,0xc                         ; 00535a33
    CMP EDX,EAX                         ; 00535a36
    JZ 0x00535a4a                       ; 00535a38
        ;   XREF to: 00535a4a (CONDITIONAL_JUMP)  ; LAB_00535a4a
    MOV ECX,dword ptr [EAX]             ; 00535a3a
    MOV dword ptr [EDX],ECX             ; 00535a3c
    MOV ECX,dword ptr [EAX + 0x4]       ; 00535a3e
    MOV dword ptr [EDX + 0x4],ECX       ; 00535a41
    MOV ECX,dword ptr [EAX + 0x8]       ; 00535a44
    MOV dword ptr [EDX + 0x8],ECX       ; 00535a47
    PUSH dword ptr [EBP + 0x18]         ; 00535a4a
        ;   Label: LAB_00535a4a
    PUSH EBX                            ; 00535a4d
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0 ; 00535a4e
        ;   XREF to: 0042abd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00535a53
    MOV EDI,dword ptr [0x005b9354]      ; 00535a56 | g_CGame_PTR_005b9354
    PUSH dword ptr [EBP + 0x18]         ; 00535a5c
    PUSH EDI                            ; 00535a5f | g_CGame_01c775ec
    CALL core_game.cpp_CGame_slamDT_FUN_004a5f00 ; 00535a60
        ;   XREF to: 004a5f00 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004a5f00(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00535a65
    FLD float ptr [EBX + 0xbc8c]        ; 00535a68
    FSUB float ptr [EBP + 0x18]         ; 00535a6e
    FST float ptr [EBX + 0xbc8c]        ; 00535a71
    FLDZ                                ; 00535a77
    FCOMPP                              ; 00535a79
    FNSTSW AX                           ; 00535a7b
    SAHF                                ; 00535a7d
    JBE 0x00535a8a                      ; 00535a7e
        ;   XREF to: 00535a8a (CONDITIONAL_JUMP)  ; LAB_00535a8a
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 00535a80
    FLD float ptr [EBX + 0x1faa8]       ; 00535a8a
        ;   Label: LAB_00535a8a
    FSUB float ptr [EBP + 0x18]         ; 00535a90
    FST float ptr [EBX + 0x1faa8]       ; 00535a93
    FLDZ                                ; 00535a99
    FCOMPP                              ; 00535a9b
    FNSTSW AX                           ; 00535a9d
    SAHF                                ; 00535a9f
    JBE 0x00535aac                      ; 00535aa0
        ;   XREF to: 00535aac (CONDITIONAL_JUMP)  ; LAB_00535aac
    MOV dword ptr [EBX + 0x1faa8],0x0   ; 00535aa2
    LEA EAX,[EBX + 0x23a4]              ; 00535aac
        ;   Label: LAB_00535aac
    MOV dword ptr [EAX + 0x8],0x0       ; 00535ab2
    MOV EDX,dword ptr [EAX + 0x8]       ; 00535ab9
    MOV dword ptr [EAX + 0x4],EDX       ; 00535abc
    MOV EDX,dword ptr [EAX + 0x4]       ; 00535abf
    MOV dword ptr [EAX],EDX             ; 00535ac2
    LEA EAX,[ESP + 0x168]               ; 00535ac4
    PUSH EAX                            ; 00535acb
    PUSH EBX                            ; 00535acc
    CALL core_stranger.cpp_FUN_00538440 ; 00535acd
        ;   XREF to: 00538440 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00538440()
    ADD ESP,0x8                         ; 00535ad2
    PUSH EAX                            ; 00535ad5
    LEA EAX,[ESP + 0x160]               ; 00535ad6
    PUSH EAX                            ; 00535add
    PUSH EBX                            ; 00535ade
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00535adf
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00535ae4
    PUSH dword ptr [EBP + 0x18]         ; 00535ae7
    PUSH EBX                            ; 00535aea
    CALL core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0 ; 00535aeb
        ;   XREF to: 00537cd0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0(CStranger * this_ptr, float delta_time)
    MOV EAX,0x1                         ; 00535af0
    ADD ESP,0x8                         ; 00535af5
    MOV dword ptr [ESP + 0x2d0],EAX     ; 00535af8
    MOV dword ptr [ESP + 0x2c8],EAX     ; 00535aff
    MOV dword ptr [ESP + 0x2cc],EAX     ; 00535b06
    MOV ESI,EAX                         ; 00535b0d
    MOV EDI,EAX                         ; 00535b0f
    CMP dword ptr [EBX + 0x2590],0x0    ; 00535b11
    JZ 0x00535b5b                       ; 00535b18
        ;   XREF to: 00535b5b (CONDITIONAL_JUMP)  ; LAB_00535b5b
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535b1a
    XOR EDX,EDX                         ; 00535b21
    XOR ESI,ESI                         ; 00535b23
    XOR EDI,EDI                         ; 00535b25
    MOV dword ptr [ESP + 0x2d0],EDX     ; 00535b27
    MOV dword ptr [ESP + 0x2cc],EDX     ; 00535b2e
    MOV dword ptr [ESP + 0x2c8],EDX     ; 00535b35
    TEST EAX,EAX                        ; 00535b3c
    JZ 0x00535b5b                       ; 00535b3e
        ;   XREF to: 00535b5b (CONDITIONAL_JUMP)  ; LAB_00535b5b
    MOV EDX,dword ptr [EBX + 0x2590]    ; 00535b40
    PUSH EDX                            ; 00535b46
    PUSH 0x5954ea                       ; 00535b47 | = "grabbedBy=%s\n"
    MOV ECX,dword ptr [0x005ad350]      ; 00535b4c | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 00535b52 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535b53
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00535b58
    CMP dword ptr [EBX + 0x1fa0c],0x0   ; 00535b5b
        ;   Label: LAB_00535b5b
    JZ 0x00535b9e                       ; 00535b62
        ;   XREF to: 00535b9e (CONDITIONAL_JUMP)  ; LAB_00535b9e
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535b64
    XOR EDX,EDX                         ; 00535b6b
    XOR ESI,ESI                         ; 00535b6d
    XOR EDI,EDI                         ; 00535b6f
    MOV dword ptr [ESP + 0x2d0],EDX     ; 00535b71
    MOV dword ptr [ESP + 0x2cc],EDX     ; 00535b78
    TEST EAX,EAX                        ; 00535b7f
    JZ 0x00535b9e                       ; 00535b81
        ;   XREF to: 00535b9e (CONDITIONAL_JUMP)  ; LAB_00535b9e
    MOV EDX,dword ptr [EBX + 0x1fa0c]   ; 00535b83
    PUSH EDX                            ; 00535b89
    PUSH 0x5954f8                       ; 00535b8a | = "pushedObject=%s\n"
    MOV ECX,dword ptr [0x005ad350]      ; 00535b8f | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 00535b95 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535b96
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00535b9b
    CMP dword ptr [EBX + 0x1fa14],0x0   ; 00535b9e
        ;   Label: LAB_00535b9e
    JZ 0x0053650d                       ; 00535ba5
        ;   XREF to: 0053650d (CONDITIONAL_JUMP)  ; LAB_0053650d
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535bab
        ;   Label: LAB_00535bab
    XOR ECX,ECX                         ; 00535bb2
    XOR ESI,ESI                         ; 00535bb4
    XOR EDI,EDI                         ; 00535bb6
    MOV dword ptr [ESP + 0x2c8],ECX     ; 00535bb8
    MOV dword ptr [ESP + 0x2cc],ECX     ; 00535bbf
    MOV dword ptr [ESP + 0x2d0],ECX     ; 00535bc6
    TEST EAX,EAX                        ; 00535bcd
    JZ 0x00535be5                       ; 00535bcf
        ;   XREF to: 00535be5 (CONDITIONAL_JUMP)  ; LAB_00535be5
    PUSH 0x595509                       ; 00535bd1 | = "ladder\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535bd6 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535bdc | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535bdd
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535be2
    CMP dword ptr [EBX + 0x1fa08],0x0   ; 00535be5
        ;   Label: LAB_00535be5
    JZ 0x0053651f                       ; 00535bec
        ;   XREF to: 0053651f (CONDITIONAL_JUMP)  ; LAB_0053651f
    MOV ECX,dword ptr [ESP + 0x2d4]     ; 00535bf2
        ;   Label: LAB_00535bf2
    XOR EDX,EDX                         ; 00535bf9
    XOR ESI,ESI                         ; 00535bfb
    XOR EDI,EDI                         ; 00535bfd
    MOV dword ptr [ESP + 0x2d0],EDX     ; 00535bff
    TEST ECX,ECX                        ; 00535c06
    JZ 0x00535c1d                       ; 00535c08
        ;   XREF to: 00535c1d (CONDITIONAL_JUMP)  ; LAB_00535c1d
    PUSH 0x595511                       ; 00535c0a | = "pickup\n"
    MOV EAX,[0x005ad350]                ; 00535c0f | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 00535c14 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535c15
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535c1a
    PUSH 0x24                           ; 00535c1d
        ;   Label: LAB_00535c1d
    LEA EAX,[EBX + 0x150]               ; 00535c1f
    PUSH EAX                            ; 00535c25
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00535c26
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00535c2d
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535c32
    FLD float ptr [ESP + 0x2ec]         ; 00535c39
    FLDZ                                ; 00535c40
    ADD ESP,0x8                         ; 00535c42
    FCOMPP                              ; 00535c45
    FNSTSW AX                           ; 00535c47
    SAHF                                ; 00535c49
    JNC 0x00536531                      ; 00535c4a
        ;   XREF to: 00536531 (CONDITIONAL_JUMP)  ; LAB_00536531
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535c50
        ;   Label: LAB_00535c50
    XOR EDX,EDX                         ; 00535c57
    XOR ESI,ESI                         ; 00535c59
    XOR EDI,EDI                         ; 00535c5b
    MOV dword ptr [ESP + 0x2cc],EDX     ; 00535c5d
    MOV dword ptr [ESP + 0x2d0],EDX     ; 00535c64
    TEST EAX,EAX                        ; 00535c6b
    JZ 0x00535c83                       ; 00535c6d
        ;   XREF to: 00535c83 (CONDITIONAL_JUMP)  ; LAB_00535c83
    PUSH 0x595519                       ; 00535c6f | = "hurt\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535c74 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535c7a | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535c7b
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535c80
    PUSH 0x1c                           ; 00535c83
        ;   Label: LAB_00535c83
    LEA EAX,[EBX + 0x150]               ; 00535c85
    PUSH EAX                            ; 00535c8b
    MOV dword ptr [ESP + 0x2e4],EAX     ; 00535c8c
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00535c93
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535c98
    FLD float ptr [ESP + 0x2ec]         ; 00535c9f
    FLDZ                                ; 00535ca6
    ADD ESP,0x8                         ; 00535ca8
    FCOMPP                              ; 00535cab
    FNSTSW AX                           ; 00535cad
    SAHF                                ; 00535caf
    JNC 0x005365a3                      ; 00535cb0
        ;   XREF to: 005365a3 (CONDITIONAL_JUMP)  ; LAB_005365a3
    MOV ECX,dword ptr [ESP + 0x2d4]     ; 00535cb6
        ;   Label: LAB_00535cb6
    XOR ESI,ESI                         ; 00535cbd
    XOR EDI,EDI                         ; 00535cbf
    MOV dword ptr [ESP + 0x2d0],ESI     ; 00535cc1
    TEST ECX,ECX                        ; 00535cc8
    JZ 0x00535cdf                       ; 00535cca
        ;   XREF to: 00535cdf (CONDITIONAL_JUMP)  ; LAB_00535cdf
    PUSH 0x59551f                       ; 00535ccc | = "door\n"
    MOV EAX,[0x005ad350]                ; 00535cd1 | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 00535cd6 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535cd7
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535cdc
    PUSH 0x2e                           ; 00535cdf
        ;   Label: LAB_00535cdf
    LEA EAX,[EBX + 0x150]               ; 00535ce1
    PUSH EAX                            ; 00535ce7
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00535ce8
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535ced
    FLD float ptr [ESP + 0x2ec]         ; 00535cf4
    FLDZ                                ; 00535cfb
    ADD ESP,0x8                         ; 00535cfd
    FCOMPP                              ; 00535d00
    FNSTSW AX                           ; 00535d02
    SAHF                                ; 00535d04
    JNC 0x00535d41                      ; 00535d05
        ;   XREF to: 00535d41 (CONDITIONAL_JUMP)  ; LAB_00535d41
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535d07
    XOR EDX,EDX                         ; 00535d0e
    XOR ESI,ESI                         ; 00535d10
    XOR EDI,EDI                         ; 00535d12
    MOV dword ptr [ESP + 0x2cc],EDX     ; 00535d14
    MOV dword ptr [ESP + 0x2c8],EDX     ; 00535d1b
    MOV dword ptr [ESP + 0x2d0],EDX     ; 00535d22
    TEST EAX,EAX                        ; 00535d29
    JZ 0x00535d41                       ; 00535d2b
        ;   XREF to: 00535d41 (CONDITIONAL_JUMP)  ; LAB_00535d41
    PUSH 0x595525                       ; 00535d2d | = "sitting\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535d32 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535d38 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535d39
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535d3e
    CMP dword ptr [EBX + 0x1faa0],0x1   ; 00535d41
        ;   Label: LAB_00535d41
    JNZ 0x00535d6d                      ; 00535d48
        ;   XREF to: 00535d6d (CONDITIONAL_JUMP)  ; LAB_00535d6d
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535d4a
    XOR EDI,EDI                         ; 00535d51
    XOR ESI,ESI                         ; 00535d53
    TEST EAX,EAX                        ; 00535d55
    JZ 0x00535d6d                       ; 00535d57
        ;   XREF to: 00535d6d (CONDITIONAL_JUMP)  ; LAB_00535d6d
    PUSH 0x59552e                       ; 00535d59 | = "stashinventory\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535d5e | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535d64 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535d65
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535d6a
    CMP dword ptr [EBX + 0x1faa0],0x2   ; 00535d6d
        ;   Label: LAB_00535d6d
    JNZ 0x00535d99                      ; 00535d74
        ;   XREF to: 00535d99 (CONDITIONAL_JUMP)  ; LAB_00535d99
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535d76
    XOR EDI,EDI                         ; 00535d7d
    XOR ESI,ESI                         ; 00535d7f
    TEST EAX,EAX                        ; 00535d81
    JZ 0x00535d99                       ; 00535d83
        ;   XREF to: 00535d99 (CONDITIONAL_JUMP)  ; LAB_00535d99
    PUSH 0x59553e                       ; 00535d85 | = "placeobject\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535d8a | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535d90 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535d91
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535d96
    CMP dword ptr [EBX + 0x1faa0],0x6   ; 00535d99
        ;   Label: LAB_00535d99
    JNZ 0x00535dc5                      ; 00535da0
        ;   XREF to: 00535dc5 (CONDITIONAL_JUMP)  ; LAB_00535dc5
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535da2
    XOR EDI,EDI                         ; 00535da9
    XOR ESI,ESI                         ; 00535dab
    TEST EAX,EAX                        ; 00535dad
    JZ 0x00535dc5                       ; 00535daf
        ;   XREF to: 00535dc5 (CONDITIONAL_JUMP)  ; LAB_00535dc5
    PUSH 0x59554b                       ; 00535db1 | = "putdownobject\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535db6 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535dbc | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535dbd
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535dc2
    CMP dword ptr [EBX + 0x1faa0],0x3   ; 00535dc5
        ;   Label: LAB_00535dc5
    JNZ 0x00535df1                      ; 00535dcc
        ;   XREF to: 00535df1 (CONDITIONAL_JUMP)  ; LAB_00535df1
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535dce
    XOR EDI,EDI                         ; 00535dd5
    XOR ESI,ESI                         ; 00535dd7
    TEST EAX,EAX                        ; 00535dd9
    JZ 0x00535df1                       ; 00535ddb
        ;   XREF to: 00535df1 (CONDITIONAL_JUMP)  ; LAB_00535df1
    PUSH 0x59555a                       ; 00535ddd | = "toss\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535de2 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535de8 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535de9
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535dee
    CMP dword ptr [EBX + 0x1faa0],0x7   ; 00535df1
        ;   Label: LAB_00535df1
    JNZ 0x00535e1d                      ; 00535df8
        ;   XREF to: 00535e1d (CONDITIONAL_JUMP)  ; LAB_00535e1d
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00535dfa
    XOR EDI,EDI                         ; 00535e01
    XOR ESI,ESI                         ; 00535e03
    TEST EAX,EAX                        ; 00535e05
    JZ 0x00535e1d                       ; 00535e07
        ;   XREF to: 00535e1d (CONDITIONAL_JUMP)  ; LAB_00535e1d
    PUSH 0x595560                       ; 00535e09 | = "attackmelee\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00535e0e | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 00535e14 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00535e15
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00535e1a
    CMP dword ptr [EBX + 0x2590],0x0    ; 00535e1d
        ;   Label: LAB_00535e1d
    JNZ 0x00535e53                      ; 00535e24
        ;   XREF to: 00535e53 (CONDITIONAL_JUMP)  ; LAB_00535e53
    CMP dword ptr [EBX + 0xdc],0x0      ; 00535e26
    JZ 0x00535e3a                       ; 00535e2d
        ;   XREF to: 00535e3a (CONDITIONAL_JUMP)  ; LAB_00535e3a
    MOV dword ptr [ESP + 0x2c8],0x1     ; 00535e2f
    FLD float ptr [EBX + 0x24]          ; 00535e3a
        ;   Label: LAB_00535e3a
    FCOMP float ptr [EBX + 0x240c]      ; 00535e3d
    FNSTSW AX                           ; 00535e43
    SAHF                                ; 00535e45
    JZ 0x00535e53                       ; 00535e46
        ;   XREF to: 00535e53 (CONDITIONAL_JUMP)  ; LAB_00535e53
    MOV dword ptr [ESP + 0x2c8],0x1     ; 00535e48
    FLD float ptr [EBP + 0x18]          ; 00535e53
        ;   Label: LAB_00535e53
    FMUL double ptr [0x00595607]        ; 00535e56 | DOUBLE_00595607
    FLD float ptr [EBX + 0x23ac]        ; 00535e5c
    LEA EAX,[EBX + 0x150]               ; 00535e62
    FSTP float ptr [EBX + 0x242c]       ; 00535e68
    MOV dword ptr [ESP + 0x28c],EAX     ; 00535e6e
    PUSH EAX                            ; 00535e75
    FSTP float ptr [EBX + 0x2430]       ; 00535e76
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00535e7c
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00535e81
    ADD ESP,0x4                         ; 00535e84
    CMP EAX,0x4                         ; 00535e87
    JNZ 0x0053661c                      ; 00535e8a
        ;   XREF to: 0053661c (CONDITIONAL_JUMP)  ; LAB_0053661c
    FLD float ptr [EBX + 0x23a4]        ; 00535e90
        ;   Label: LAB_00535e90
    FLD ST0                             ; 00535e96
    FMUL double ptr [0x0059560f]        ; 00535e98 | DOUBLE_0059560f
    FSTP ST1                            ; 00535e9e
    FSTP float ptr [EBX + 0x23a4]       ; 00535ea0
    MOV ECX,dword ptr [EBX + 0x1fa18]   ; 00535ea6
        ;   Label: LAB_00535ea6
    TEST ECX,ECX                        ; 00535eac
    JNZ 0x0053663d                      ; 00535eae
        ;   XREF to: 0053663d (CONDITIONAL_JUMP)  ; LAB_0053663d
    FLD float ptr [EBP + 0x18]          ; 00535eb4
    FMUL double ptr [0x0059560f]        ; 00535eb7 | DOUBLE_0059560f
    FSUBR float ptr [EBX + 0x1faac]     ; 00535ebd
    FST float ptr [EBX + 0x1faac]       ; 00535ec3
    FLDZ                                ; 00535ec9
    FCOMPP                              ; 00535ecb
    FNSTSW AX                           ; 00535ecd
    SAHF                                ; 00535ecf
    JBE 0x00535ed8                      ; 00535ed0
        ;   XREF to: 00535ed8 (CONDITIONAL_JUMP)  ; LAB_00535ed8
    MOV dword ptr [EBX + 0x1faac],ECX   ; 00535ed2
    MOV EAX,0x1                         ; 00535ed8
        ;   Label: LAB_00535ed8
    MOV EDX,dword ptr [EBX + 0x1fa14]   ; 00535edd
    MOV dword ptr [ESP + 0x290],EAX     ; 00535ee3
    TEST EDX,EDX                        ; 00535eea
    JZ 0x005366d8                       ; 00535eec
        ;   XREF to: 005366d8 (CONDITIONAL_JUMP)  ; LAB_005366d8
    PUSH 0x2a                           ; 00535ef2
    LEA EAX,[EBX + 0x150]               ; 00535ef4
    PUSH EAX                            ; 00535efa
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00535efb
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535f00
    FLD float ptr [ESP + 0x2ec]         ; 00535f07
    FLDZ                                ; 00535f0e
    ADD ESP,0x8                         ; 00535f10
    FCOMPP                              ; 00535f13
    FNSTSW AX                           ; 00535f15
    SAHF                                ; 00535f17
    JC 0x0053666e                       ; 00535f18
        ;   XREF to: 0053666e (CONDITIONAL_JUMP)  ; LAB_0053666e
    MOV dword ptr [EBX + 0x1fa14],0x0   ; 00535f1e
    FLD float ptr [EBX + 0x1fccc]       ; 00535f28
        ;   Label: LAB_00535f28
    FLDZ                                ; 00535f2e
    FCOMPP                              ; 00535f30
    FNSTSW AX                           ; 00535f32
    SAHF                                ; 00535f34
    JNC 0x0053602e                      ; 00535f35
        ;   XREF to: 0053602e (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBP + 0x18]          ; 00535f3b
    FCOMP float ptr [EBX + 0x1fccc]     ; 00535f3e
    FNSTSW AX                           ; 00535f44
    SAHF                                ; 00535f46
    JNC 0x005366c0                      ; 00535f47
        ;   XREF to: 005366c0 (CONDITIONAL_JUMP)  ; LAB_005366c0
    FLD float ptr [EBP + 0x18]          ; 00535f4d
    FLD ST0                             ; 00535f50
    FDIV float ptr [EBX + 0x1fccc]      ; 00535f52
    FLD float ptr [EBX + 0x1fccc]       ; 00535f58
    FSUBRP ST2,ST0                      ; 00535f5e
    FSTP float ptr [ESP + 0x28]         ; 00535f60
    FSTP float ptr [EBX + 0x1fccc]      ; 00535f64
    LEA EAX,[EBX + 0x1fcbc]             ; 00535f6a
        ;   Label: LAB_00535f6a
    FLD float ptr [EAX]                 ; 00535f70
    FMUL float ptr [ESP + 0x28]         ; 00535f72
    FSTP float ptr [ESP + 0x144]        ; 00535f76
    FLD float ptr [EAX + 0x4]           ; 00535f7d
    FMUL float ptr [ESP + 0x28]         ; 00535f80
    FSTP float ptr [ESP + 0x148]        ; 00535f84
    FLD float ptr [EAX + 0x8]           ; 00535f8b
    FMUL float ptr [ESP + 0x28]         ; 00535f8e
    FLD float ptr [ESP + 0x28]          ; 00535f92
    FLD1                                ; 00535f96
    LEA EDX,[EBX + 0x20]                ; 00535f98
    FSUBRP                              ; 00535f9b
    FXCH                                ; 00535f9d
    FSTP float ptr [ESP + 0x14c]        ; 00535f9f
    FLD float ptr [EDX]                 ; 00535fa6
    FADD float ptr [ESP + 0x144]        ; 00535fa8
    FLD float ptr [EDX + 0x4]           ; 00535faf
    FXCH                                ; 00535fb2
    FSTP float ptr [EDX]                ; 00535fb4
    FADD float ptr [ESP + 0x148]        ; 00535fb6
    FLD float ptr [EDX + 0x8]           ; 00535fbd
    FXCH                                ; 00535fc0
    FSTP float ptr [EDX + 0x4]          ; 00535fc2
    FADD float ptr [ESP + 0x14c]        ; 00535fc5
    FXCH                                ; 00535fcc
    FSTP float ptr [ESP + 0x2b0]        ; 00535fce
    FSTP float ptr [EDX + 0x8]          ; 00535fd5
    FLD float ptr [EAX]                 ; 00535fd8
    FMUL float ptr [ESP + 0x2b0]        ; 00535fda
    FLD float ptr [EAX + 0x4]           ; 00535fe1
    FMUL float ptr [ESP + 0x2b0]        ; 00535fe4
    FLD float ptr [EAX + 0x8]           ; 00535feb
    FMUL float ptr [ESP + 0x2b0]        ; 00535fee
    FXCH ST2                            ; 00535ff5
    FSTP float ptr [EAX]                ; 00535ff7
    FSTP float ptr [EAX + 0x4]          ; 00535ff9
    FSTP float ptr [EAX + 0x8]          ; 00535ffc
    FLD float ptr [EBX + 0x1fcc8]       ; 00535fff
    FSUB float ptr [EBX + 0x34]         ; 00536005
    SUB ESP,0x4                         ; 00536008
    FSTP float ptr [ESP]                ; 0053600b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053600e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536013
    FLD float ptr [ESP + 0x2e8]         ; 0053601a
    ADD ESP,0x4                         ; 00536021
    FMUL float ptr [ESP + 0x28]         ; 00536024
    FSTP float ptr [EBX + 0x2410]       ; 00536028
    LEA EAX,[EBX + 0x150]               ; 0053602e
        ;   Label: caseD_6
    PUSH EAX                            ; 00536034
    MOV dword ptr [ESP + 0x28c],EAX     ; 00536035
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0053603c
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00536041
    ADD ESP,0x4                         ; 00536044
    CMP EAX,0x1b                        ; 00536047
    JNZ 0x005360a1                      ; 0053604a
        ;   XREF to: 005360a1 (CONDITIONAL_JUMP)  ; LAB_005360a1
    MOV EDX,dword ptr [0x00764230]      ; 0053604c | g_CAmmoBoxActorType_007641f8.name_hash
    PUSH EDX                            ; 00536052
    MOV ECX,dword ptr [EBX + 0x1fa08]   ; 00536053
    PUSH ECX                            ; 00536059
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053605a
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x288],EAX     ; 0053605f
    ADD ESP,0x8                         ; 00536066
    TEST EAX,EAX                        ; 00536069
    JZ 0x005360a1                       ; 0053606b
        ;   XREF to: 005360a1 (CONDITIONAL_JUMP)  ; LAB_005360a1
    MOV EDX,dword ptr [ESP + 0x288]     ; 0053606d
    PUSH EDX                            ; 00536074
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 00536075
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0053607a
    FLD float ptr [ESP + 0x2e8]         ; 00536081
    ADD ESP,0x4                         ; 00536088
    SUB ESP,0x4                         ; 0053608b
    MOV ECX,dword ptr [ESP + 0x284]     ; 0053608e
    FSTP float ptr [ESP]                ; 00536095
    PUSH ECX                            ; 00536098
    CALL core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130 ; 00536099
        ;   XREF to: 0040f130 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130(CAmmoBox * this_ptr, float open_pct)
    ADD ESP,0x8                         ; 0053609e
    PUSH EBX                            ; 005360a1
        ;   Label: LAB_005360a1
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 005360a2
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005360a7
    PUSH dword ptr [EBP + 0x18]         ; 005360aa
    PUSH EBX                            ; 005360ad
    CALL core_stranger.cpp_CStranger_updateTurnBlending_FUN_005397b0 ; 005360ae
        ;   XREF to: 005397b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateTurnBlending_FUN_005397b0(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005360b3
    CMP dword ptr [ESP + 0x290],0x0     ; 005360b6
    JZ 0x005360d8                       ; 005360be
        ;   XREF to: 005360d8 (CONDITIONAL_JUMP)  ; LAB_005360d8
    LEA EAX,[EBX + 0x1fae0]             ; 005360c0
    MOV dword ptr [EAX + 0x8],0x0       ; 005360c6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005360cd
    MOV dword ptr [EAX + 0x4],EDX       ; 005360d0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005360d3
    MOV dword ptr [EAX],EDX             ; 005360d6
    CMP dword ptr [EBX + 0x1fa14],0x0   ; 005360d8
        ;   Label: LAB_005360d8
    JZ 0x0053748b                       ; 005360df
        ;   XREF to: 0053748b (CONDITIONAL_JUMP)  ; LAB_0053748b
    LEA EAX,[EBX + 0x23a4]              ; 005360e5
        ;   Label: LAB_005360e5
    PUSH EAX                            ; 005360eb
    MOV dword ptr [ESP + 0x2e4],EAX     ; 005360ec
    LEA EAX,[ESP + 0xf4]                ; 005360f3
    PUSH EAX                            ; 005360fa
    PUSH EBX                            ; 005360fb
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 005360fc
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00536101
    LEA EAX,[EBX + 0x20]                ; 00536103
    FLD float ptr [EDX]                 ; 00536106
    FADD float ptr [EAX]                ; 00536108
    FSTP float ptr [EAX]                ; 0053610a
    FLD float ptr [EDX + 0x4]           ; 0053610c
    FADD float ptr [EAX + 0x4]          ; 0053610f
    FSTP float ptr [EAX + 0x4]          ; 00536112
    FLD float ptr [EDX + 0x8]           ; 00536115
    FADD float ptr [EAX + 0x8]          ; 00536118
    ADD ESP,0xc                         ; 0053611b
    FSTP float ptr [EAX + 0x8]          ; 0053611e
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 00536121
    MOV dword ptr [EAX + 0x8],0x0       ; 00536128
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053612f
    MOV dword ptr [EAX + 0x4],EDX       ; 00536132
    MOV EDX,dword ptr [EAX + 0x4]       ; 00536135
    MOV dword ptr [EAX],EDX             ; 00536138
    MOV dword ptr [EBX + 0x1faf8],0x0   ; 0053613a
        ;   Label: LAB_0053613a
    LEA EAX,[EBX + 0x1fae0]             ; 00536144
        ;   Label: LAB_00536144
    MOV dword ptr [EAX + 0x8],0x0       ; 0053614a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00536151
    MOV dword ptr [EAX + 0x4],EDX       ; 00536154
    MOV EDX,dword ptr [EAX + 0x4]       ; 00536157
    MOV dword ptr [EAX],EDX             ; 0053615a
    CMP dword ptr [ESP + 0x2d0],0x0     ; 0053615c
    JZ 0x00536216                       ; 00536164
        ;   XREF to: 00536216 (CONDITIONAL_JUMP)  ; LAB_00536216
    CMP dword ptr [EBX + 0xbcac],0x0    ; 0053616a
    JZ 0x005361b4                       ; 00536171
        ;   XREF to: 005361b4 (CONDITIONAL_JUMP)  ; LAB_005361b4
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 00536173
    JZ 0x00537b99                       ; 0053617a
        ;   XREF to: 00537b99 (CONDITIONAL_JUMP)  ; LAB_00537b99
    MOV EAX,[0x005b9354]                ; 00536180 | g_CGame_PTR_005b9354
    MOV dword ptr [EBX + 0x1fa3c],0x0   ; 00536185
    CMP dword ptr [EAX + 0x244],0x0     ; 0053618f | g_CGame_01c775ec.flashlight_active
    JZ 0x005361b4                       ; 00536196
        ;   XREF to: 005361b4 (CONDITIONAL_JUMP)  ; LAB_005361b4
    PUSH 0x5955b6                       ; 00536198 | = "flashlit.wav"
    MOV dword ptr [EAX + 0x244],0x0     ; 0053619d | g_CGame_01c775ec.flashlight_active
    PUSH EBX                            ; 005361a7
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005361a8
    CALL dword ptr [EAX + 0x24]         ; 005361ae
    ADD ESP,0x8                         ; 005361b1
    CMP dword ptr [EBX + 0xbca8],0x0    ; 005361b4
        ;   Label: LAB_005361b4
    JZ 0x00536216                       ; 005361bb
        ;   XREF to: 00536216 (CONDITIONAL_JUMP)  ; LAB_00536216
    LEA EAX,[EBX + 0x1f5a0]             ; 005361bd
    MOV EAX,dword ptr [EAX + 0x330]     ; 005361c3
    TEST EAX,EAX                        ; 005361c9
    JZ 0x00536216                       ; 005361cb
        ;   XREF to: 00536216 (CONDITIONAL_JUMP)  ; LAB_00536216
    CMP dword ptr [EAX + 0x2e8],0x0     ; 005361cd
    JZ 0x00536216                       ; 005361d4
        ;   XREF to: 00536216 (CONDITIONAL_JUMP)  ; LAB_00536216
    MOV EAX,[0x005b9354]                ; 005361d6 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x244],0x0     ; 005361db | g_CGame_01c775ec.flashlight_active
    SETZ AL                             ; 005361e2
    MOV EDX,EAX                         ; 005361e5
    MOV EAX,[0x005b9354]                ; 005361e7 | g_CGame_PTR_005b9354
    AND EDX,0xff                        ; 005361ec
    MOV dword ptr [EAX + 0x244],EDX     ; 005361f2 | g_CGame_01c775ec.flashlight_active
    JZ 0x00536204                       ; 005361f8
        ;   XREF to: 00536204 (CONDITIONAL_JUMP)  ; LAB_00536204
    MOV dword ptr [EBX + 0x1fa3c],0x1   ; 005361fa
    PUSH 0x5955c3                       ; 00536204 | = "flashlit.wav"
        ;   Label: LAB_00536204
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00536209
    PUSH EBX                            ; 0053620f
    CALL dword ptr [EAX + 0x24]         ; 00536210
    ADD ESP,0x8                         ; 00536213
    LEA EAX,[EBX + 0x1f5a0]             ; 00536216
        ;   Label: LAB_00536216
    MOV EAX,dword ptr [EAX + 0x330]     ; 0053621c
    TEST EAX,EAX                        ; 00536222
    JNZ 0x00537ba8                      ; 00536224
        ;   XREF to: 00537ba8 (CONDITIONAL_JUMP)  ; LAB_00537ba8
    MOV EAX,[0x005b9354]                ; 0053622a | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x244],0x0     ; 0053622f | g_CGame_01c775ec.flashlight_active
    CMP dword ptr [ESP + 0x2cc],0x0     ; 00536239
        ;   Label: LAB_00536239
    JZ 0x0053624f                       ; 00536241
        ;   XREF to: 0053624f (CONDITIONAL_JUMP)  ; LAB_0053624f
    PUSH dword ptr [EBP + 0x18]         ; 00536243
    PUSH EBX                            ; 00536246
    CALL core_stranger.cpp_FUN_0053f310 ; 00536247
        ;   XREF to: 0053f310 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_0053f310(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053624c
    MOV EDX,dword ptr [EBX + 0x1fa3c]   ; 0053624f
        ;   Label: LAB_0053624f
    TEST EDX,EDX                        ; 00536255
    JZ 0x00537bc6                       ; 00536257
        ;   XREF to: 00537bc6 (CONDITIONAL_JUMP)  ; LAB_00537bc6
    FLD float ptr [EBP + 0x18]          ; 0053625d
    FDIV float ptr [0x005a26ec]         ; 00536260 | FLOAT_005a26ec
    FADD float ptr [EBX + 0x1fa40]      ; 00536266
    FST float ptr [EBX + 0x1fa40]       ; 0053626c
    FLD1                                ; 00536272
    FCOMPP                              ; 00536274
    FNSTSW AX                           ; 00536276
    SAHF                                ; 00536278
    JNC 0x00536285                      ; 00536279
        ;   XREF to: 00536285 (CONDITIONAL_JUMP)  ; LAB_00536285
    MOV dword ptr [EBX + 0x1fa40],0x3f800000 ; 0053627b
    FLD float ptr [EBP + 0x18]          ; 00536285
        ;   Label: LAB_00536285
    FDIV float ptr [0x005a26f4]         ; 00536288 | FLOAT_005a26f4
    FSUBR float ptr [EBX + 0x1fa60]     ; 0053628e
    MOV dword ptr [EBX + 0x1fa44],0x0   ; 00536294
    FST float ptr [EBX + 0x1fa60]       ; 0053629e
    FLDZ                                ; 005362a4
    FCOMPP                              ; 005362a6
    FNSTSW AX                           ; 005362a8
    SAHF                                ; 005362aa
    JC 0x005362b7                       ; 005362ab
        ;   XREF to: 005362b7 (CONDITIONAL_JUMP)  ; LAB_005362b7
    MOV dword ptr [EBX + 0x1fa60],0x0   ; 005362ad
    FLD float ptr [EBP + 0x18]          ; 005362b7
        ;   Label: LAB_005362b7
    FDIV float ptr [0x005a26f4]         ; 005362ba | FLOAT_005a26f4
    FSUBR float ptr [EBX + 0x1fa80]     ; 005362c0
    FST float ptr [EBX + 0x1fa80]       ; 005362c6
    FLDZ                                ; 005362cc
    FCOMPP                              ; 005362ce
    FNSTSW AX                           ; 005362d0
    SAHF                                ; 005362d2
    JC 0x005362df                       ; 005362d3
        ;   XREF to: 005362df (CONDITIONAL_JUMP)  ; LAB_005362df
    MOV dword ptr [EBX + 0x1fa80],0x0   ; 005362d5
    TEST ESI,ESI                        ; 005362df
        ;   Label: LAB_005362df
    JZ 0x005362ec                       ; 005362e1
        ;   XREF to: 005362ec (CONDITIONAL_JUMP)  ; LAB_005362ec
    PUSH EBX                            ; 005362e3
    CALL core_stranger.cpp_FUN_0053fc60 ; 005362e4
        ;   XREF to: 0053fc60 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_0053fc60(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005362e9
    PUSH EBX                            ; 005362ec
        ;   Label: LAB_005362ec
    CALL core_stranger.cpp_FUN_005384d0 ; 005362ed
        ;   XREF to: 005384d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_005384d0(CStranger * this_ptr)
    MOV ECX,dword ptr [EBX + 0x1f59c]   ; 005362f2
    ADD ESP,0x4                         ; 005362f8
    CMP ECX,0x2                         ; 005362fb
    JNZ 0x0053633f                      ; 005362fe
        ;   XREF to: 0053633f (CONDITIONAL_JUMP)  ; LAB_0053633f
    MOV ESI,dword ptr [EBX + 0x1fa94]   ; 00536300
    TEST ESI,ESI                        ; 00536306
    JZ 0x0053633f                       ; 00536308
        ;   XREF to: 0053633f (CONDITIONAL_JUMP)  ; LAB_0053633f
    CMP dword ptr [ESI + 0x2d8],0x0     ; 0053630a
    JNZ 0x0053633f                      ; 00536311
        ;   XREF to: 0053633f (CONDITIONAL_JUMP)  ; LAB_0053633f
    LEA EAX,[EBX + 0x150]               ; 00536313
    PUSH EAX                            ; 00536319
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 0053631a
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053631f
    PUSH 0x0                            ; 00536322
    PUSH EBX                            ; 00536324
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660 ; 00536325
        ;   XREF to: 0053a660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0053632a
    PUSH EBX                            ; 0053632d
    CALL core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320 ; 0053632e
        ;   XREF to: 0053e320 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00536333
    PUSH EBX                            ; 00536336
    CALL core_stranger.cpp_FUN_005384d0 ; 00536337
        ;   XREF to: 005384d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_005384d0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0053633c
    PUSH EDI                            ; 0053633f
        ;   Label: LAB_0053633f
    PUSH dword ptr [EBP + 0x18]         ; 00536340
    PUSH EBX                            ; 00536343
    CALL core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0 ; 00536344
        ;   XREF to: 0053ecc0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(CStranger * this_ptr, float delta_time, int is_weapon_active)
    ADD ESP,0xc                         ; 00536349
    PUSH EBX                            ; 0053634c
    CALL core_stranger.cpp_FUN_005402f0 ; 0053634d
        ;   XREF to: 005402f0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_005402f0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00536352
    PUSH dword ptr [EBP + 0x18]         ; 00536355
    PUSH EBX                            ; 00536358
    CALL core_charactr.cpp_FUN_0042a150 ; 00536359
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053635e
    PUSH 0x6                            ; 00536361
    LEA ESI,[EBX + 0x150]               ; 00536363
    PUSH ESI                            ; 00536369
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0053636a
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053636f
    FLD float ptr [ESP + 0x2ec]         ; 00536376
    FLDZ                                ; 0053637d
    ADD ESP,0x8                         ; 0053637f
    FCOMPP                              ; 00536382
    FNSTSW AX                           ; 00536384
    SAHF                                ; 00536386
    JNC 0x00537bf3                      ; 00536387
        ;   XREF to: 00537bf3 (CONDITIONAL_JUMP)  ; LAB_00537bf3
    PUSH ESI                            ; 0053638d
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 0053638e
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536393
    FLD float ptr [ESP + 0x2e8]         ; 0053639a
    FLD1                                ; 005363a1
    ADD ESP,0x4                         ; 005363a3
    FCOMPP                              ; 005363a6
    FNSTSW AX                           ; 005363a8
    SAHF                                ; 005363aa
    JNC 0x00536472                      ; 005363ab
        ;   XREF to: 00536472 (CONDITIONAL_JUMP)  ; LAB_00536472
    MOV ECX,dword ptr [0x00764838]      ; 005363b1 | g_CBoxActorActorType_00764800.name_hash
    PUSH ECX                            ; 005363b7
    MOV ESI,dword ptr [EBX + 0x1fa0c]   ; 005363b8
    PUSH ESI                            ; 005363be
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005363bf
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 005363c4
    ADD ESP,0x8                         ; 005363c6
    TEST EAX,EAX                        ; 005363c9
    JZ 0x00536472                       ; 005363cb
        ;   XREF to: 00536472 (CONDITIONAL_JUMP)  ; LAB_00536472
    LEA EAX,[ESP + 0x174]               ; 005363d1
    PUSH EAX                            ; 005363d8
    PUSH EBX                            ; 005363d9
    CALL core_stranger.cpp_FUN_00538440 ; 005363da
        ;   XREF to: 00538440 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00538440()
    ADD ESP,0x8                         ; 005363df
    LEA EAX,[ESP + 0x174]               ; 005363e2
    PUSH EAX                            ; 005363e9
    LEA EAX,[ESP + 0x1e4]               ; 005363ea
    PUSH EAX                            ; 005363f1
    PUSH EBX                            ; 005363f2
    XOR EDI,EDI                         ; 005363f3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005363f5
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005363fa
    LEA EAX,[ESP + 0x114]               ; 005363fd
    FLD float ptr [ESP + 0x1e0]         ; 00536404
    FLD float ptr [ESP + 0x1e8]         ; 0053640b
    MOV dword ptr [ESP + 0x118],EDI     ; 00536412
    PUSH EAX                            ; 00536419
    LEA EAX,[ESP + 0x10c]               ; 0053641a
    FXCH                                ; 00536421
    FSUB float ptr [ESP + 0x160]        ; 00536423
    FXCH                                ; 0053642a
    FSUB float ptr [ESP + 0x168]        ; 0053642c
    PUSH EAX                            ; 00536433
    FXCH                                ; 00536434
    FSTP float ptr [ESP + 0x11c]        ; 00536436
    PUSH EBX                            ; 0053643d
    FSTP float ptr [ESP + 0x128]        ; 0053643e
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 00536445
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    FLD float ptr [EAX + 0x8]           ; 0053644a
    FLDZ                                ; 0053644d
    ADD ESP,0xc                         ; 0053644f
    FCOMPP                              ; 00536452
    FNSTSW AX                           ; 00536454
    SAHF                                ; 00536456
    JNC 0x00536472                      ; 00536457
        ;   XREF to: 00536472 (CONDITIONAL_JUMP)  ; LAB_00536472
    LEA EAX,[ESP + 0x114]               ; 00536459
    PUSH EAX                            ; 00536460
    LEA EAX,[ESP + 0x160]               ; 00536461
    PUSH EAX                            ; 00536468
    PUSH ESI                            ; 00536469
    CALL core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90 ; 0053646a
        ;   XREF to: 0041ef90 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90(CBoxActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    ADD ESP,0xc                         ; 0053646f
    PUSH 0x0                            ; 00536472
        ;   Label: LAB_00536472
    PUSH EBX                            ; 00536474
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660 ; 00536475
        ;   XREF to: 0053a660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0053647a
    PUSH dword ptr [EBP + 0x18]         ; 0053647d
    PUSH 0x0                            ; 00536480
    PUSH EBX                            ; 00536482
    CALL core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910 ; 00536483
        ;   XREF to: 0053d910 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910(CStranger * this_ptr, int hand_index, float delta_time)
    ADD ESP,0xc                         ; 00536488
    PUSH dword ptr [EBP + 0x18]         ; 0053648b
    PUSH 0x1                            ; 0053648e
    PUSH EBX                            ; 00536490
    CALL core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910 ; 00536491
        ;   XREF to: 0053d910 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910(CStranger * this_ptr, int hand_index, float delta_time)
    ADD ESP,0xc                         ; 00536496
    PUSH dword ptr [EBP + 0x18]         ; 00536499
    PUSH EBX                            ; 0053649c
    CALL core_stranger.cpp_FUN_0053ffe0 ; 0053649d
        ;   XREF to: 0053ffe0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_0053ffe0(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005364a2
    LEA EAX,[EBX + 0x1f5a0]             ; 005364a5
    PUSH EAX                            ; 005364ab
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004c1850 ; 005364ac
        ;   XREF to: 004c1850 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateInventory_FUN_004c1850(CInventory * this_ptr)
    ADD ESP,0x4                         ; 005364b1
    PUSH dword ptr [EBP + 0x18]         ; 005364b4
    PUSH EBX                            ; 005364b7
    CALL core_stranger.cpp_CStranger_processWeaponTick_FUN_00540660 ; 005364b8
        ;   XREF to: 00540660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_processWeaponTick_FUN_00540660(CStranger * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 005364bd
    ADD ESP,0x8                         ; 005364c3
    TEST EAX,EAX                        ; 005364c6
    JZ 0x005364dd                       ; 005364c8
        ;   XREF to: 005364dd (CONDITIONAL_JUMP)  ; LAB_005364dd
    CMP dword ptr [EAX + 0xfc],0x0      ; 005364ca
    JZ 0x005364dd                       ; 005364d1
        ;   XREF to: 005364dd (CONDITIONAL_JUMP)  ; LAB_005364dd
    MOV dword ptr [EBX + 0xfc],0x1      ; 005364d3
    MOV ECX,dword ptr [EBX + 0x1fab0]   ; 005364dd
        ;   Label: LAB_005364dd
    PUSH ECX                            ; 005364e3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 005364e4
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 005364e9
    TEST EAX,EAX                        ; 005364ec
    JZ 0x00537c47                       ; 005364ee
        ;   XREF to: 00537c47 (CONDITIONAL_JUMP)  ; LAB_00537c47
    MOV EAX,[0x005b9354]                ; 005364f4 | g_CGame_PTR_005b9354 | g_CGame_01c775ec
    CMP dword ptr [EAX + 0x240],0x0     ; 005364f9 | g_CGame_01c775ec.goggles_active
    JZ 0x00537c01                       ; 00536500
        ;   XREF to: 00537c01 (CONDITIONAL_JUMP)  ; LAB_00537c01
    MOV ESP,EBP                         ; 00536506
        ;   Label: LAB_00536506
    POP EBP                             ; 00536508
    POP EDI                             ; 00536509
    POP ESI                             ; 0053650a
    POP EBX                             ; 0053650b
    RET                                 ; 0053650c
    CMP dword ptr [EBX + 0x1fa90],0x0   ; 0053650d
        ;   Label: LAB_0053650d
    JNZ 0x00535bab                      ; 00536514
        ;   XREF to: 00535bab (CONDITIONAL_JUMP)  ; LAB_00535bab
    JMP 0x00535be5                      ; 0053651a
        ;   XREF to: 00535be5 (UNCONDITIONAL_JUMP)  ; LAB_00535be5
    CMP dword ptr [EBX + 0x1faa0],0x4   ; 0053651f
        ;   Label: LAB_0053651f
    JZ 0x00535bf2                       ; 00536526
        ;   XREF to: 00535bf2 (CONDITIONAL_JUMP)  ; LAB_00535bf2
    JMP 0x00535c1d                      ; 0053652c
        ;   XREF to: 00535c1d (UNCONDITIONAL_JUMP)  ; LAB_00535c1d
    PUSH 0x28                           ; 00536531
        ;   Label: LAB_00536531
    MOV ECX,dword ptr [ESP + 0x2a0]     ; 00536533
    PUSH ECX                            ; 0053653a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0053653b
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00536540
    FLD float ptr [ESP + 0x2ec]         ; 00536547
    FLDZ                                ; 0053654e
    ADD ESP,0x8                         ; 00536550
    FCOMPP                              ; 00536553
    FNSTSW AX                           ; 00536555
    SAHF                                ; 00536557
    JC 0x00535c50                       ; 00536558
        ;   XREF to: 00535c50 (CONDITIONAL_JUMP)  ; LAB_00535c50
    PUSH 0x29                           ; 0053655e
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 00536560
    PUSH EAX                            ; 00536567
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00536568
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053656d
    FLD float ptr [ESP + 0x2ec]         ; 00536574
    FLDZ                                ; 0053657b
    ADD ESP,0x8                         ; 0053657d
    FCOMPP                              ; 00536580
    FNSTSW AX                           ; 00536582
    SAHF                                ; 00536584
    JC 0x00535c50                       ; 00536585
        ;   XREF to: 00535c50 (CONDITIONAL_JUMP)  ; LAB_00535c50
    FLD float ptr [EBX + 0x2434]        ; 0053658b
    FLDZ                                ; 00536591
    FCOMPP                              ; 00536593
    FNSTSW AX                           ; 00536595
    SAHF                                ; 00536597
    JNC 0x00535c50                      ; 00536598
        ;   XREF to: 00535c50 (CONDITIONAL_JUMP)  ; LAB_00535c50
    JMP 0x00535c83                      ; 0053659e
        ;   XREF to: 00535c83 (UNCONDITIONAL_JUMP)  ; LAB_00535c83
    PUSH 0x1d                           ; 005365a3
        ;   Label: LAB_005365a3
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 005365a5
    PUSH EAX                            ; 005365ac
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 005365ad
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005365b2
    FLD float ptr [ESP + 0x2ec]         ; 005365b9
    FLDZ                                ; 005365c0
    ADD ESP,0x8                         ; 005365c2
    FCOMPP                              ; 005365c5
    FNSTSW AX                           ; 005365c7
    SAHF                                ; 005365c9
    JC 0x00535cb6                       ; 005365ca
        ;   XREF to: 00535cb6 (CONDITIONAL_JUMP)  ; LAB_00535cb6
    PUSH 0x1e                           ; 005365d0
    MOV EDX,dword ptr [ESP + 0x2e0]     ; 005365d2
    PUSH EDX                            ; 005365d9
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 005365da
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005365df
    FLD float ptr [ESP + 0x2ec]         ; 005365e6
    FLDZ                                ; 005365ed
    ADD ESP,0x8                         ; 005365ef
    FCOMPP                              ; 005365f2
    FNSTSW AX                           ; 005365f4
    SAHF                                ; 005365f6
    JC 0x00535cb6                       ; 005365f7
        ;   XREF to: 00535cb6 (CONDITIONAL_JUMP)  ; LAB_00535cb6
    CMP dword ptr [EBX + 0x1faa0],0x5   ; 005365fd
    JZ 0x00535cb6                       ; 00536604
        ;   XREF to: 00535cb6 (CONDITIONAL_JUMP)  ; LAB_00535cb6
    CMP dword ptr [EBX + 0x1fa04],0x0   ; 0053660a
    JNZ 0x00535cb6                      ; 00536611
        ;   XREF to: 00535cb6 (CONDITIONAL_JUMP)  ; LAB_00535cb6
    JMP 0x00535cdf                      ; 00536617
        ;   XREF to: 00535cdf (UNCONDITIONAL_JUMP)  ; LAB_00535cdf
    MOV EDX,dword ptr [ESP + 0x28c]     ; 0053661c
        ;   Label: LAB_0053661c
    PUSH EDX                            ; 00536623
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00536624
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00536629
    ADD ESP,0x4                         ; 0053662c
    CMP EAX,0x5                         ; 0053662f
    JZ 0x00535e90                       ; 00536632
        ;   XREF to: 00535e90 (CONDITIONAL_JUMP)  ; LAB_00535e90
    JMP 0x00535ea6                      ; 00536638
        ;   XREF to: 00535ea6 (UNCONDITIONAL_JUMP)  ; LAB_00535ea6
    FLD float ptr [EBP + 0x18]          ; 0053663d
        ;   Label: LAB_0053663d
    FMUL double ptr [0x0059560f]        ; 00536640 | DOUBLE_0059560f
    FADD float ptr [EBX + 0x1faac]      ; 00536646
    FST float ptr [EBX + 0x1faac]       ; 0053664c
    FLD1                                ; 00536652
    FCOMPP                              ; 00536654
    FNSTSW AX                           ; 00536656
    SAHF                                ; 00536658
    JNC 0x00535ed8                      ; 00536659
        ;   XREF to: 00535ed8 (CONDITIONAL_JUMP)  ; LAB_00535ed8
    MOV dword ptr [EBX + 0x1faac],0x3f800000 ; 0053665f
    JMP 0x00535ed8                      ; 00536669
        ;   XREF to: 00535ed8 (UNCONDITIONAL_JUMP)  ; LAB_00535ed8
    MOV EAX,dword ptr [EBX + 0x1fa14]   ; 0053666e
        ;   Label: LAB_0053666e
    ADD EAX,0x2cc                       ; 00536674
    PUSH EAX                            ; 00536679
    LEA EAX,[ESP + 0x22c]               ; 0053667a
    PUSH EAX                            ; 00536681
    MOV EDX,dword ptr [EBX + 0x1fa14]   ; 00536682
    PUSH EDX                            ; 00536688
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00536689
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX + 0x4]           ; 0053668e
    FADD double ptr [0x00595677]        ; 00536691 | DOUBLE_00595677
    ADD ESP,0xc                         ; 00536697
    FLD float ptr [EBX + 0x24]          ; 0053669a
    FCOMPP                              ; 0053669d
    FNSTSW AX                           ; 0053669f
    SAHF                                ; 005366a1
    JBE 0x00535f28                      ; 005366a2
        ;   XREF to: 00535f28 (CONDITIONAL_JUMP)  ; LAB_00535f28
    PUSH 0x1                            ; 005366a8
    PUSH 0x0                            ; 005366aa
    LEA EAX,[EBX + 0x150]               ; 005366ac
    PUSH EAX                            ; 005366b2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005366b3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005366b8
    JMP 0x00535f28                      ; 005366bb
        ;   XREF to: 00535f28 (UNCONDITIONAL_JUMP)  ; LAB_00535f28
    MOV ECX,0x3f800000                  ; 005366c0
        ;   Label: LAB_005366c0
    MOV dword ptr [EBX + 0x1fccc],0x0   ; 005366c5
    MOV dword ptr [ESP + 0x28],ECX      ; 005366cf
    JMP 0x00535f6a                      ; 005366d3
        ;   XREF to: 00535f6a (UNCONDITIONAL_JUMP)  ; LAB_00535f6a
    CMP dword ptr [EBX + 0x1fa90],0x0   ; 005366d8
        ;   Label: LAB_005366d8
    JNZ 0x00536900                      ; 005366df
        ;   XREF to: 00536900 (CONDITIONAL_JUMP)  ; LAB_00536900
    MOV EAX,dword ptr [EBX + 0x1fa18]   ; 005366e5
    TEST EAX,EAX                        ; 005366eb
    JNZ 0x00536ab5                      ; 005366ed
        ;   XREF to: 00536ab5 (CONDITIONAL_JUMP)  ; LAB_00536ab5
    MOV EDX,dword ptr [EBX + 0x2590]    ; 005366f3
    TEST EDX,EDX                        ; 005366f9
    JZ 0x00536e93                       ; 005366fb
        ;   XREF to: 00536e93 (CONDITIONAL_JUMP)  ; LAB_00536e93
    CMP dword ptr [EBX + 0x2594],0x0    ; 00536701
    JNZ 0x005367ef                      ; 00536708
        ;   XREF to: 005367ef (CONDITIONAL_JUMP)  ; LAB_005367ef
    LEA EAX,[EDX + 0x20]                ; 0053670e
    PUSH EAX                            ; 00536711
    LEA EAX,[ESP + 0x19c]               ; 00536712
    PUSH EAX                            ; 00536719
    PUSH EBX                            ; 0053671a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053671b
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00536720
    PUSH EAX                            ; 00536723
    LEA EAX,[ESP + 0x214]               ; 00536724
    PUSH EAX                            ; 0053672b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0053672c
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00536731
    PUSH dword ptr [EAX + 0x4]          ; 00536734
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00536737
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0053673c
    FLD float ptr [ESP + 0x2e8]         ; 00536743
    ADD ESP,0x4                         ; 0053674a
    FST float ptr [ESP + 0x20]          ; 0053674d
    FCOMP double ptr [0x00595647]       ; 00536751 | DOUBLE_00595647
    FNSTSW AX                           ; 00536757
    SAHF                                ; 00536759
    JNC 0x0053676a                      ; 0053675a
        ;   XREF to: 0053676a (CONDITIONAL_JUMP)  ; LAB_0053676a
    FLD float ptr [ESP + 0x20]          ; 0053675c
    FADD float ptr [0x0059564f]         ; 00536760 | FLOAT_0059564f
    FSTP float ptr [ESP + 0x20]         ; 00536766
    FLD float ptr [ESP + 0x20]          ; 0053676a
        ;   Label: LAB_0053676a
    FCOMP double ptr [0x00595657]       ; 0053676e | DOUBLE_00595657
    FNSTSW AX                           ; 00536774
    SAHF                                ; 00536776
    JBE 0x00536787                      ; 00536777
        ;   XREF to: 00536787 (CONDITIONAL_JUMP)  ; LAB_00536787
    FLD float ptr [ESP + 0x20]          ; 00536779
    FADD float ptr [0x0059565f]         ; 0053677d | FLOAT_0059565f
    FSTP float ptr [ESP + 0x20]         ; 00536783
    FLD float ptr [EBP + 0x18]          ; 00536787
        ;   Label: LAB_00536787
    FMUL double ptr [0x0059563f]        ; 0053678a | DOUBLE_0059563f
    FLD float ptr [ESP + 0x20]          ; 00536790
    FXCH                                ; 00536794
    FST float ptr [ESP + 0x2a4]         ; 00536796
    FCHS                                ; 0053679d
    FSTP float ptr [ESP + 0x284]        ; 0053679f
    FCOMP float ptr [ESP + 0x284]       ; 005367a6
    FNSTSW AX                           ; 005367ad
    SAHF                                ; 005367af
    JNC 0x005367bd                      ; 005367b0
        ;   XREF to: 005367bd (CONDITIONAL_JUMP)  ; LAB_005367bd
    MOV EAX,dword ptr [ESP + 0x284]     ; 005367b2
    MOV dword ptr [ESP + 0x20],EAX      ; 005367b9
    FLD float ptr [ESP + 0x20]          ; 005367bd
        ;   Label: LAB_005367bd
    FCOMP float ptr [ESP + 0x2a4]       ; 005367c1
    FNSTSW AX                           ; 005367c8
    SAHF                                ; 005367ca
    JBE 0x005367d8                      ; 005367cb
        ;   XREF to: 005367d8 (CONDITIONAL_JUMP)  ; LAB_005367d8
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005367cd
    MOV dword ptr [ESP + 0x20],EAX      ; 005367d4
    LEA EAX,[EBX + 0x30]                ; 005367d8
        ;   Label: LAB_005367d8
    FLD float ptr [EBX + 0x34]          ; 005367db
    PUSH EAX                            ; 005367de
    FADD float ptr [ESP + 0x24]         ; 005367df
    PUSH EBX                            ; 005367e3
    FSTP float ptr [EBX + 0x34]         ; 005367e4
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060 ; 005367e7
        ;   XREF to: 0042a060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter * this_ptr, UOrientationVector * orientation)
    ADD ESP,0x8                         ; 005367ec
    MOV EAX,dword ptr [EBX + 0x2590]    ; 005367ef
        ;   Label: LAB_005367ef
    MOV dword ptr [ESP + 0x2d8],EAX     ; 005367f5
    MOV EAX,dword ptr [EAX + 0x14c]     ; 005367fc
    PUSH 0x0                            ; 00536802
    MOV dword ptr [ESP + 0x270],EAX     ; 00536804
    LEA EAX,[ESP + 0x1a8]               ; 0053680b
    PUSH EAX                            ; 00536812
    LEA EAX,[EBX + 0x150]               ; 00536813
    PUSH EAX                            ; 00536819
    MOV dword ptr [ESP + 0x2c8],EAX     ; 0053681a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00536821
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00536826
    PUSH EAX                            ; 00536829
    PUSH EBX                            ; 0053682a
    MOV ECX,dword ptr [ESP + 0x2e0]     ; 0053682b
    MOV EAX,dword ptr [ESP + 0x274]     ; 00536832
    PUSH ECX                            ; 00536839
    CALL dword ptr [EAX + 0x108]        ; 0053683a
    ADD ESP,0xc                         ; 00536840
    TEST EAX,EAX                        ; 00536843
    JZ 0x00536e60                       ; 00536845
        ;   XREF to: 00536e60 (CONDITIONAL_JUMP)  ; LAB_00536e60
    CMP dword ptr [EBX + 0x2590],0x0    ; 0053684b
    JZ 0x00536e66                       ; 00536852
        ;   XREF to: 00536e66 (CONDITIONAL_JUMP)  ; LAB_00536e66
    FLD float ptr [EBX + 0x1fb3c]       ; 00536858
    FADD float ptr [EBP + 0x18]         ; 0053685e
    FST float ptr [EBX + 0x1fb3c]       ; 00536861
    FCOMP float ptr [0x005a272c]        ; 00536867 | FLOAT_005a272c
    FNSTSW AX                           ; 0053686d
    SAHF                                ; 0053686f
    JC 0x0053602e                       ; 00536870
        ;   XREF to: 0053602e (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x2594],0x1    ; 00536876
    JZ 0x0053602e                       ; 0053687d
        ;   XREF to: 0053602e (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x22                           ; 00536883
    MOV ECX,dword ptr [ESP + 0x2c0]     ; 00536885
    PUSH ECX                            ; 0053688c
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0053688d
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536892
    ADD ESP,0x8                         ; 00536899
    PUSH 0x23                           ; 0053689c
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 0053689e
    PUSH EAX                            ; 005368a5
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 005368a6
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005368ab
    FLD float ptr [ESP + 0x2ec]         ; 005368b2
    ADD ESP,0x8                         ; 005368b9
    FADD float ptr [ESP + 0x2e0]        ; 005368bc
    FLDZ                                ; 005368c3
    FCOMPP                              ; 005368c5
    FNSTSW AX                           ; 005368c7
    SAHF                                ; 005368c9
    JNC 0x00536e7e                      ; 005368ca
        ;   XREF to: 00536e7e (CONDITIONAL_JUMP)  ; LAB_00536e7e
    CMP dword ptr [EBX + 0xbca0],0x0    ; 005368d0
    JZ 0x0053602e                       ; 005368d7
        ;   XREF to: 0053602e (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 005368dd
    PUSH 0x23                           ; 005368df
    MOV ECX,dword ptr [ESP + 0x2c4]     ; 005368e1
    PUSH ECX                            ; 005368e8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005368e9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005368ee
    MOV dword ptr [EBX + 0xbca0],0x0    ; 005368f1
    JMP 0x0053602e                      ; 005368fb
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x2b                           ; 00536900
        ;   Label: LAB_00536900
    LEA EAX,[EBX + 0x150]               ; 00536902
    PUSH EAX                            ; 00536908
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00536909
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053690e
    FLD float ptr [ESP + 0x2ec]         ; 00536915
    FLDZ                                ; 0053691c
    ADD ESP,0x8                         ; 0053691e
    FCOMPP                              ; 00536921
    FNSTSW AX                           ; 00536923
    SAHF                                ; 00536925
    JC 0x00536a6a                       ; 00536926
        ;   XREF to: 00536a6a (CONDITIONAL_JUMP)  ; LAB_00536a6a
    MOV dword ptr [EBX + 0x1fa90],0x0   ; 0053692c
    FLD float ptr [EBX + 0x1fccc]       ; 00536936
        ;   Label: LAB_00536936
    FLDZ                                ; 0053693c
    FCOMPP                              ; 0053693e
    FNSTSW AX                           ; 00536940
    SAHF                                ; 00536942
    JNC 0x00536a3c                      ; 00536943
        ;   XREF to: 00536a3c (CONDITIONAL_JUMP)  ; LAB_00536a3c
    FLD float ptr [EBP + 0x18]          ; 00536949
    FCOMP float ptr [EBX + 0x1fccc]     ; 0053694c
    FNSTSW AX                           ; 00536952
    SAHF                                ; 00536954
    JNC 0x00536a9d                      ; 00536955
        ;   XREF to: 00536a9d (CONDITIONAL_JUMP)  ; LAB_00536a9d
    FLD float ptr [EBP + 0x18]          ; 0053695b
    FLD ST0                             ; 0053695e
    FDIV float ptr [EBX + 0x1fccc]      ; 00536960
    FLD float ptr [EBX + 0x1fccc]       ; 00536966
    FSUBRP ST2,ST0                      ; 0053696c
    FSTP float ptr [ESP + 0x24]         ; 0053696e
    FSTP float ptr [EBX + 0x1fccc]      ; 00536972
    LEA EAX,[EBX + 0x1fcbc]             ; 00536978
        ;   Label: LAB_00536978
    FLD float ptr [EAX]                 ; 0053697e
    FMUL float ptr [ESP + 0x24]         ; 00536980
    FSTP float ptr [ESP + 0x204]        ; 00536984
    FLD float ptr [EAX + 0x4]           ; 0053698b
    FMUL float ptr [ESP + 0x24]         ; 0053698e
    FSTP float ptr [ESP + 0x208]        ; 00536992
    FLD float ptr [EAX + 0x8]           ; 00536999
    FMUL float ptr [ESP + 0x24]         ; 0053699c
    FLD float ptr [ESP + 0x24]          ; 005369a0
    FLD1                                ; 005369a4
    LEA EDX,[EBX + 0x20]                ; 005369a6
    FSUBRP                              ; 005369a9
    FXCH                                ; 005369ab
    FSTP float ptr [ESP + 0x20c]        ; 005369ad
    FLD float ptr [EDX]                 ; 005369b4
    FADD float ptr [ESP + 0x204]        ; 005369b6
    FLD float ptr [EDX + 0x4]           ; 005369bd
    FXCH                                ; 005369c0
    FSTP float ptr [EDX]                ; 005369c2
    FADD float ptr [ESP + 0x208]        ; 005369c4
    FLD float ptr [EDX + 0x8]           ; 005369cb
    FXCH                                ; 005369ce
    FSTP float ptr [EDX + 0x4]          ; 005369d0
    FADD float ptr [ESP + 0x20c]        ; 005369d3
    FXCH                                ; 005369da
    FSTP float ptr [ESP + 0x2a0]        ; 005369dc
    FSTP float ptr [EDX + 0x8]          ; 005369e3
    FLD float ptr [EAX]                 ; 005369e6
    FMUL float ptr [ESP + 0x2a0]        ; 005369e8
    FLD float ptr [EAX + 0x4]           ; 005369ef
    FMUL float ptr [ESP + 0x2a0]        ; 005369f2
    FLD float ptr [EAX + 0x8]           ; 005369f9
    FMUL float ptr [ESP + 0x2a0]        ; 005369fc
    FXCH ST2                            ; 00536a03
    FSTP float ptr [EAX]                ; 00536a05
    FSTP float ptr [EAX + 0x4]          ; 00536a07
    FSTP float ptr [EAX + 0x8]          ; 00536a0a
    FLD float ptr [EBX + 0x1fcc8]       ; 00536a0d
    FSUB float ptr [EBX + 0x34]         ; 00536a13
    SUB ESP,0x4                         ; 00536a16
    FSTP float ptr [ESP]                ; 00536a19
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00536a1c
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536a21
    FLD float ptr [ESP + 0x2e8]         ; 00536a28
    ADD ESP,0x4                         ; 00536a2f
    FMUL float ptr [ESP + 0x24]         ; 00536a32
    FSTP float ptr [EBX + 0x2410]       ; 00536a36
    PUSH 0x0                            ; 00536a3c
        ;   Label: LAB_00536a3c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00536a3e
    PUSH dword ptr [EBX + 0x2dd4]       ; 00536a44
    PUSH EBX                            ; 00536a4a
    CALL dword ptr [EAX + 0x38]         ; 00536a4b
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00536a4e
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 00536a55
    MOV dword ptr [EBX + 0x240c],EAX    ; 00536a5c
    ADD ESP,0xc                         ; 00536a62
    JMP 0x0053602e                      ; 00536a65
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,dword ptr [EBX + 0x1fa90]   ; 00536a6a
        ;   Label: LAB_00536a6a
    FLD float ptr [EAX + 0x24]          ; 00536a70
    FLD1                                ; 00536a73
    FADDP                               ; 00536a75
    FLD float ptr [EBX + 0x24]          ; 00536a77
    FCOMPP                              ; 00536a7a
    FNSTSW AX                           ; 00536a7c
    SAHF                                ; 00536a7e
    JNC 0x00536936                      ; 00536a7f
        ;   XREF to: 00536936 (CONDITIONAL_JUMP)  ; LAB_00536936
    PUSH 0x1                            ; 00536a85
    PUSH 0x0                            ; 00536a87
    LEA EAX,[EBX + 0x150]               ; 00536a89
    PUSH EAX                            ; 00536a8f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00536a90
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00536a95
    JMP 0x00536936                      ; 00536a98
        ;   XREF to: 00536936 (UNCONDITIONAL_JUMP)  ; LAB_00536936
    MOV EAX,0x3f800000                  ; 00536a9d
        ;   Label: LAB_00536a9d
    MOV dword ptr [EBX + 0x1fccc],0x0   ; 00536aa2
    MOV dword ptr [ESP + 0x24],EAX      ; 00536aac
    JMP 0x00536978                      ; 00536ab0
        ;   XREF to: 00536978 (UNCONDITIONAL_JUMP)  ; LAB_00536978
    LEA EDX,[ESP + 0x70]                ; 00536ab5
        ;   Label: LAB_00536ab5
    PUSH EDX                            ; 00536ab9
    MOV ECX,dword ptr [EAX + 0x14c]     ; 00536aba
    PUSH EAX                            ; 00536ac0
    CALL dword ptr [ECX + 0x90]         ; 00536ac1
    ADD ESP,0x8                         ; 00536ac7
    CMP dword ptr [ESP + 0x70],0x0      ; 00536aca
    JZ 0x00536e07                       ; 00536acf
        ;   XREF to: 00536e07 (CONDITIONAL_JUMP)  ; LAB_00536e07
    MOV EDX,dword ptr [ESP + 0x74]      ; 00536ad5
    CMP EBX,EDX                         ; 00536ad9
    JNZ 0x00536e07                      ; 00536adb
        ;   XREF to: 00536e07 (CONDITIONAL_JUMP)  ; LAB_00536e07
    MOV EAX,dword ptr [EDX + 0x1fa18]   ; 00536ae1
    LEA EDX,[EAX + 0x30]                ; 00536ae7
    MOV EAX,dword ptr [EDX]             ; 00536aea
    MOV dword ptr [ESP + 0x240],EAX     ; 00536aec
    LEA EAX,[EDX + 0x4]                 ; 00536af3
    MOV EAX,dword ptr [EAX]             ; 00536af6
    MOV dword ptr [ESP + 0x244],EAX     ; 00536af8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00536aff
    MOV dword ptr [ESP + 0x248],EAX     ; 00536b02
    FLD float ptr [EBX + 0xbcb8]        ; 00536b09
    FMUL double ptr [0x0059563f]        ; 00536b0f | DOUBLE_0059563f
    FMUL double ptr [0x00595667]        ; 00536b15 | DOUBLE_00595667
    FMUL float ptr [EBP + 0x18]         ; 00536b1b
    FST float ptr [ESP + 0x2c0]         ; 00536b1e
    FCOMP float ptr [ESP + 0x84]        ; 00536b25
    FNSTSW AX                           ; 00536b2c
    SAHF                                ; 00536b2e
    JNC 0x00536b3f                      ; 00536b2f
        ;   XREF to: 00536b3f (CONDITIONAL_JUMP)  ; LAB_00536b3f
    MOV EAX,dword ptr [ESP + 0x84]      ; 00536b31
    MOV dword ptr [ESP + 0x2c0],EAX     ; 00536b38
    FLD float ptr [ESP + 0x2c0]         ; 00536b3f
        ;   Label: LAB_00536b3f
    FCOMP float ptr [ESP + 0x80]        ; 00536b46
    FNSTSW AX                           ; 00536b4d
    SAHF                                ; 00536b4f
    JBE 0x00536b60                      ; 00536b50
        ;   XREF to: 00536b60 (CONDITIONAL_JUMP)  ; LAB_00536b60
    MOV EAX,dword ptr [ESP + 0x80]      ; 00536b52
    MOV dword ptr [ESP + 0x2c0],EAX     ; 00536b59
    FLD float ptr [ESP + 0x244]         ; 00536b60
        ;   Label: LAB_00536b60
    FADD float ptr [ESP + 0x2c0]        ; 00536b67
    SUB ESP,0x4                         ; 00536b6e
    FSTP float ptr [ESP]                ; 00536b71
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00536b74
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536b79
    FLD float ptr [ESP + 0x2e8]         ; 00536b80
    ADD ESP,0x4                         ; 00536b87
    FSTP float ptr [ESP + 0x244]        ; 00536b8a
    FLD float ptr [EBX + 0xbcbc]        ; 00536b91
    FMUL double ptr [0x0059563f]        ; 00536b97 | DOUBLE_0059563f
    FMUL double ptr [0x00595667]        ; 00536b9d | DOUBLE_00595667
    FMUL float ptr [EBP + 0x18]         ; 00536ba3
    FST float ptr [ESP + 0x2c4]         ; 00536ba6
    FCOMP float ptr [ESP + 0x8c]        ; 00536bad
    FNSTSW AX                           ; 00536bb4
    SAHF                                ; 00536bb6
    JNC 0x00536bc7                      ; 00536bb7
        ;   XREF to: 00536bc7 (CONDITIONAL_JUMP)  ; LAB_00536bc7
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00536bb9
    MOV dword ptr [ESP + 0x2c4],EAX     ; 00536bc0
    FLD float ptr [ESP + 0x2c4]         ; 00536bc7
        ;   Label: LAB_00536bc7
    FCOMP float ptr [ESP + 0x88]        ; 00536bce
    FNSTSW AX                           ; 00536bd5
    SAHF                                ; 00536bd7
    JBE 0x00536be8                      ; 00536bd8
        ;   XREF to: 00536be8 (CONDITIONAL_JUMP)  ; LAB_00536be8
    MOV EAX,dword ptr [ESP + 0x88]      ; 00536bda
    MOV dword ptr [ESP + 0x2c4],EAX     ; 00536be1
    FLD float ptr [ESP + 0x240]         ; 00536be8
        ;   Label: LAB_00536be8
    FADD float ptr [ESP + 0x2c4]        ; 00536bef
    SUB ESP,0x4                         ; 00536bf6
    FSTP float ptr [ESP]                ; 00536bf9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00536bfc
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536c01
    FLD float ptr [ESP + 0x2e8]         ; 00536c08
    ADD ESP,0x4                         ; 00536c0f
    LEA EDX,[EBX + 0xbc94]              ; 00536c12
    FSTP float ptr [ESP + 0x240]        ; 00536c18
    PUSH EDX                            ; 00536c1f
    LEA EDX,[ESP + 0x244]               ; 00536c20
    MOV EAX,dword ptr [EBX + 0x1fa18]   ; 00536c27
    PUSH EDX                            ; 00536c2d
    MOV ECX,dword ptr [EAX + 0x14c]     ; 00536c2e
    PUSH EAX                            ; 00536c34
    CALL dword ptr [ECX + 0x98]         ; 00536c35
    ADD ESP,0xc                         ; 00536c3b
    LEA EDX,[EBX + 0x150]               ; 00536c3e
    MOV dword ptr [ESP + 0x2b4],EDX     ; 00536c44
    TEST EAX,EAX                        ; 00536c4b
    JZ 0x00536e46                       ; 00536c4d
        ;   XREF to: 00536e46 (CONDITIONAL_JUMP)  ; LAB_00536e46
    MOV EAX,dword ptr [EBX + 0x1fa18]   ; 00536c53
    FLD float ptr [EAX + 0x34]          ; 00536c59
    FSUB float ptr [EBX + 0x34]         ; 00536c5c
    SUB ESP,0x4                         ; 00536c5f
    FSTP float ptr [ESP]                ; 00536c62
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00536c65
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536c6a
    FLD float ptr [ESP + 0x2e8]         ; 00536c71
    ADD ESP,0x4                         ; 00536c78
    FST float ptr [ESP + 0x18]          ; 00536c7b
    FST double ptr [ESP + 0x10]         ; 00536c7f
    FCOMP double ptr [0x00595617]       ; 00536c83 | DOUBLE_00595617
    FNSTSW AX                           ; 00536c89
    SAHF                                ; 00536c8b
    JNC 0x00536e15                      ; 00536c8c
        ;   XREF to: 00536e15 (CONDITIONAL_JUMP)  ; LAB_00536e15
    PUSH 0x1                            ; 00536c92
    PUSH 0x5                            ; 00536c94
    MOV ECX,dword ptr [ESP + 0x2bc]     ; 00536c96
    PUSH ECX                            ; 00536c9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00536c9e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00536c9e
    ADD ESP,0xc                         ; 00536ca3
    LEA EDX,[EBX + 0x30]                ; 00536ca6
    MOV EAX,dword ptr [EDX]             ; 00536ca9
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00536cab
    LEA EAX,[EDX + 0x4]                 ; 00536cb2
    MOV EAX,dword ptr [EAX]             ; 00536cb5
    MOV dword ptr [ESP + 0x1b4],EAX     ; 00536cb7
    LEA EAX,[EDX + 0x8]                 ; 00536cbe
    MOV EAX,dword ptr [EAX]             ; 00536cc1
    FLD float ptr [ESP + 0x18]          ; 00536cc3
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00536cc7
    LEA EAX,[ESP + 0x1b0]               ; 00536cce
    FMUL float ptr [EBX + 0x1faac]      ; 00536cd5
    PUSH EAX                            ; 00536cdb
    FADD float ptr [ESP + 0x1b8]        ; 00536cdc
    PUSH EBX                            ; 00536ce3
    FSTP float ptr [ESP + 0x1bc]        ; 00536ce4
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060 ; 00536ceb
        ;   XREF to: 0042a060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter * this_ptr, UOrientationVector * orientation)
    ADD ESP,0x8                         ; 00536cf0
    XOR EAX,EAX                         ; 00536cf3
    FLD float ptr [ESP + 0x78]          ; 00536cf5
    MOV dword ptr [ESP + 0x24c],EAX     ; 00536cf9
    FADD double ptr [0x0059566f]        ; 00536d00 | DOUBLE_0059566f
    MOV dword ptr [ESP + 0x250],EAX     ; 00536d06
    FSTP float ptr [ESP + 0x2e0]        ; 00536d0d
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 00536d14
    MOV dword ptr [ESP + 0x254],EAX     ; 00536d1b
    LEA EAX,[ESP + 0x24c]               ; 00536d22
    PUSH EAX                            ; 00536d29
    LEA EAX,[ESP + 0x1c0]               ; 00536d2a
    PUSH EAX                            ; 00536d31
    MOV ECX,dword ptr [EBX + 0x1fa18]   ; 00536d32
    PUSH ECX                            ; 00536d38
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00536d39
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00536d3e
    LEA EAX,[EBX + 0x20]                ; 00536d41
    FLD float ptr [ESP + 0x1bc]         ; 00536d44
    FSUB float ptr [EAX]                ; 00536d4b
    FLD float ptr [ESP + 0x1c0]         ; 00536d4d
    FXCH                                ; 00536d54
    FSTP float ptr [ESP + 0x1d4]        ; 00536d56
    FSUB float ptr [EAX + 0x4]          ; 00536d5d
    FLD float ptr [ESP + 0x1c4]         ; 00536d60
    FXCH                                ; 00536d67
    FSTP float ptr [ESP + 0x1d8]        ; 00536d69
    FSUB float ptr [EAX + 0x8]          ; 00536d70
    LEA EAX,[ESP + 0x1d4]               ; 00536d73
    PUSH EAX                            ; 00536d7a
    LEA EAX,[ESP + 0x13c]               ; 00536d7b
    LEA EDX,[EBX + 0x1faac]             ; 00536d82
    PUSH EAX                            ; 00536d88
    MOV dword ptr [ESP + 0x2b4],EDX     ; 00536d89
    PUSH EBX                            ; 00536d90
    FSTP float ptr [ESP + 0x1e8]        ; 00536d91
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 00536d98
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 00536d9d
    MOV EDX,dword ptr [ESP + 0x2ac]     ; 00536da0
    FLD float ptr [EAX]                 ; 00536da7
    FMUL float ptr [EDX]                ; 00536da9
    FSTP float ptr [ESP + 0xcc]         ; 00536dab
    FLD float ptr [EAX + 0x4]           ; 00536db2
    FMUL float ptr [EDX]                ; 00536db5
    FSTP float ptr [ESP + 0xd0]         ; 00536db7
    FLD float ptr [EAX + 0x8]           ; 00536dbe
    FMUL float ptr [EDX]                ; 00536dc1
    LEA EAX,[ESP + 0xcc]                ; 00536dc3
    LEA EDX,[EBX + 0x23a4]              ; 00536dca
    FSTP float ptr [ESP + 0xd4]         ; 00536dd0
    CMP EDX,EAX                         ; 00536dd7
    JZ 0x00536df8                       ; 00536dd9
        ;   XREF to: 00536df8 (CONDITIONAL_JUMP)  ; LAB_00536df8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00536ddb
    MOV dword ptr [EDX],EAX             ; 00536de2
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00536de4
    MOV dword ptr [EDX + 0x4],EAX       ; 00536deb
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00536dee
    MOV dword ptr [EDX + 0x8],EAX       ; 00536df5
    MOV dword ptr [EBX + 0x23a8],0x0    ; 00536df8
        ;   Label: LAB_00536df8
    JMP 0x0053602e                      ; 00536e02
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 00536e07
        ;   Label: LAB_00536e07
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920 ; 00536e08
        ;   XREF to: 004b5920 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920(CHero * this_ptr)
    ADD ESP,0x4                         ; 00536e0d
    JMP 0x0053602e                      ; 00536e10
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    FLD double ptr [ESP + 0x10]         ; 00536e15
        ;   Label: LAB_00536e15
    FCOMP double ptr [0x0059561f]       ; 00536e19 | DOUBLE_0059561f
    FNSTSW AX                           ; 00536e1f
    SAHF                                ; 00536e21
    JBE 0x00536e35                      ; 00536e22
        ;   XREF to: 00536e35 (CONDITIONAL_JUMP)  ; LAB_00536e35
    PUSH 0x1                            ; 00536e24
    PUSH 0x4                            ; 00536e26
    MOV EDX,dword ptr [ESP + 0x2bc]     ; 00536e28
    PUSH EDX                            ; 00536e2f
    JMP 0x00536c9e                      ; 00536e30
        ;   XREF to: 00536c9e (UNCONDITIONAL_JUMP)  ; LAB_00536c9e
    PUSH 0x1                            ; 00536e35
        ;   Label: LAB_00536e35
    PUSH 0x0                            ; 00536e37
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 00536e39
    PUSH EAX                            ; 00536e40
    JMP 0x00536c9e                      ; 00536e41
        ;   XREF to: 00536c9e (UNCONDITIONAL_JUMP)  ; LAB_00536c9e
    PUSH 0x1                            ; 00536e46
        ;   Label: LAB_00536e46
    PUSH EAX                            ; 00536e48
    PUSH EDX                            ; 00536e49
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00536e4a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00536e4f
    PUSH EBX                            ; 00536e52
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920 ; 00536e53
        ;   XREF to: 004b5920 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004b5920(CHero * this_ptr)
    ADD ESP,0x4                         ; 00536e58
    JMP 0x0053602e                      ; 00536e5b
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EBX + 0x2590],EAX    ; 00536e60
        ;   Label: LAB_00536e60
    PUSH 0x1                            ; 00536e66
        ;   Label: LAB_00536e66
    PUSH 0x0                            ; 00536e68
    LEA EAX,[EBX + 0x150]               ; 00536e6a
    PUSH EAX                            ; 00536e70
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00536e71
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00536e76
    JMP 0x0053602e                      ; 00536e79
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 00536e7e
        ;   Label: LAB_00536e7e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00536e7f
    CALL dword ptr [EAX + 0xe8]         ; 00536e85
    ADD ESP,0x4                         ; 00536e8b
    JMP 0x0053602e                      ; 00536e8e
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x1fa0c],0x0   ; 00536e93
        ;   Label: LAB_00536e93
    JZ 0x00537112                       ; 00536e9a
        ;   XREF to: 00537112 (CONDITIONAL_JUMP)  ; LAB_00537112
    MOV ECX,dword ptr [EBX + 0xbca0]    ; 00536ea0
    MOV dword ptr [ESP + 0x278],EDX     ; 00536ea6
    TEST ECX,ECX                        ; 00536ead
    JNZ 0x00536ee0                      ; 00536eaf
        ;   XREF to: 00536ee0 (CONDITIONAL_JUMP)  ; LAB_00536ee0
    MOV ECX,dword ptr [ESP + 0x278]     ; 00536eb1
        ;   Label: LAB_00536eb1
    TEST ECX,ECX                        ; 00536eb8
    JNZ 0x0053602e                      ; 00536eba
        ;   XREF to: 0053602e (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00536ec0
    PUSH ECX                            ; 00536ec2
    LEA EAX,[EBX + 0x150]               ; 00536ec3
    PUSH EAX                            ; 00536ec9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00536eca
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00536ecf
    PUSH EBX                            ; 00536ed2
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0 ; 00536ed3
        ;   XREF to: 004b56f0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00536ed8
    JMP 0x0053602e                      ; 00536edb
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA ECX,[ESP + 0x90]                ; 00536ee0
        ;   Label: LAB_00536ee0
    MOV EAX,dword ptr [EBX + 0x1fa0c]   ; 00536ee7
    PUSH ECX                            ; 00536eed
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00536eee
    PUSH EAX                            ; 00536ef4
    CALL dword ptr [EDX + 0x14]         ; 00536ef5
    ADD ESP,0x8                         ; 00536ef8
    FLD float ptr [ESP + 0x94]          ; 00536efb
    FLD float ptr [ESP + 0x90]          ; 00536f02
    FADD float ptr [ESP + 0x9c]         ; 00536f09
    FXCH                                ; 00536f10
    FADD float ptr [ESP + 0xa0]         ; 00536f12
    FXCH                                ; 00536f19
    FST float ptr [ESP + 0xe4]          ; 00536f1b
    FMUL float ptr [0x00595603]         ; 00536f22 | FLOAT_00595603
    FXCH                                ; 00536f28
    FST float ptr [ESP + 0xe8]          ; 00536f2a
    FMUL float ptr [0x00595603]         ; 00536f31 | FLOAT_00595603
    LEA EAX,[ESP + 0x18c]               ; 00536f37
    FLD float ptr [ESP + 0x98]          ; 00536f3e
    PUSH EAX                            ; 00536f45
    FADD float ptr [ESP + 0xa8]         ; 00536f46
    LEA EAX,[ESP + 0x1cc]               ; 00536f4d
    FST float ptr [ESP + 0xf0]          ; 00536f54
    FMUL float ptr [0x00595603]         ; 00536f5b | FLOAT_00595603
    PUSH EAX                            ; 00536f61
    FXCH ST2                            ; 00536f62
    FSTP float ptr [ESP + 0x194]        ; 00536f64
    FSTP float ptr [ESP + 0x198]        ; 00536f6b
    FSTP float ptr [ESP + 0x19c]        ; 00536f72
    MOV EAX,dword ptr [EBX + 0x1fa0c]   ; 00536f79
    PUSH EAX                            ; 00536f7f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00536f80
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00536f85
    LEA EAX,[ESP + 0x1c8]               ; 00536f88
    PUSH EAX                            ; 00536f8f
    LEA EAX,[ESP + 0x238]               ; 00536f90
    PUSH EAX                            ; 00536f97
    PUSH EBX                            ; 00536f98
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00536f99
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00536f9e
    LEA EAX,[ESP + 0x234]               ; 00536fa1
    PUSH EAX                            ; 00536fa8
    LEA EAX,[ESP + 0x124]               ; 00536fa9
    PUSH EAX                            ; 00536fb0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00536fb1
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00536fb6
    PUSH dword ptr [EAX + 0x4]          ; 00536fb9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00536fbc
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00536fc1
    FLD float ptr [ESP + 0x2e8]         ; 00536fc8
    ADD ESP,0x4                         ; 00536fcf
    FLD float ptr [ESP + 0xa4]          ; 00536fd2
    FLD float ptr [ESP + 0x9c]          ; 00536fd9
    FSUB float ptr [ESP + 0x90]         ; 00536fe0
    FXCH                                ; 00536fe7
    FSUB float ptr [ESP + 0x98]         ; 00536fe9
    FXCH                                ; 00536ff0
    FST float ptr [ESP + 0x1f8]         ; 00536ff2
    FMUL float ptr [0x00595603]         ; 00536ff9 | FLOAT_00595603
    FXCH                                ; 00536fff
    FST float ptr [ESP + 0x200]         ; 00537001
    FMUL float ptr [0x00595603]         ; 00537008 | FLOAT_00595603
    FXCH                                ; 0053700e
    FST float ptr [ESP + 0x180]         ; 00537010
    FMUL float ptr [ESP + 0x180]        ; 00537017
    FXCH                                ; 0053701e
    FST float ptr [ESP + 0x188]         ; 00537020
    FMUL float ptr [ESP + 0x188]        ; 00537027
    FADDP                               ; 0053702e
    FSQRT                               ; 00537030
    XOR EDX,EDX                         ; 00537032
    FLD float ptr [ESP + 0xa0]          ; 00537034
    FXCH ST2                            ; 0053703b
    FSTP float ptr [ESP + 0x30]         ; 0053703d
    MOV dword ptr [ESP + 0x184],EDX     ; 00537041
    FXCH                                ; 00537048
    FSUB float ptr [ESP + 0x94]         ; 0053704a
    FXCH                                ; 00537051
    FSUBR float ptr [ESP + 0x23c]       ; 00537053
    FXCH                                ; 0053705a
    FSTP float ptr [ESP + 0x1fc]        ; 0053705c
    FCOMP double ptr [0x00595627]       ; 00537063 | DOUBLE_00595627
    FNSTSW AX                           ; 00537069
    SAHF                                ; 0053706b
    JNC 0x00536eb1                      ; 0053706c
        ;   XREF to: 00536eb1 (CONDITIONAL_JUMP)  ; LAB_00536eb1
    FLD float ptr [ESP + 0x238]         ; 00537072
    FLD1                                ; 00537079
    FCOMPP                              ; 0053707b
    FNSTSW AX                           ; 0053707d
    SAHF                                ; 0053707f
    JNC 0x00536eb1                      ; 00537080
        ;   XREF to: 00536eb1 (CONDITIONAL_JUMP)  ; LAB_00536eb1
    FLD float ptr [ESP + 0x238]         ; 00537086
    FCOMP double ptr [0x0059562f]       ; 0053708d | DOUBLE_0059562f
    FNSTSW AX                           ; 00537093
    SAHF                                ; 00537095
    JNC 0x00536eb1                      ; 00537096
        ;   XREF to: 00536eb1 (CONDITIONAL_JUMP)  ; LAB_00536eb1
    FLD float ptr [ESP + 0x30]          ; 0053709c
    FABS                                ; 005370a0
    FCOMP double ptr [0x00595637]       ; 005370a2 | DOUBLE_00595637
    FNSTSW AX                           ; 005370a8
    SAHF                                ; 005370aa
    JNC 0x00536eb1                      ; 005370ab
        ;   XREF to: 00536eb1 (CONDITIONAL_JUMP)  ; LAB_00536eb1
    FLD float ptr [EBP + 0x18]          ; 005370b1
    FMUL double ptr [0x0059563f]        ; 005370b4 | DOUBLE_0059563f
    FST float ptr [ESP + 0x2b8]         ; 005370ba
    FCHS                                ; 005370c1
    FCOMP float ptr [ESP + 0x30]        ; 005370c3
    FNSTSW AX                           ; 005370c7
    SAHF                                ; 005370c9
    JA 0x00537103                       ; 005370ca
        ;   XREF to: 00537103 (CONDITIONAL_JUMP)  ; LAB_00537103
    FLD float ptr [ESP + 0x30]          ; 005370cc
        ;   Label: LAB_005370cc
    FCOMP float ptr [ESP + 0x2b8]       ; 005370d0
    FNSTSW AX                           ; 005370d7
    SAHF                                ; 005370d9
    JBE 0x005370e7                      ; 005370da
        ;   XREF to: 005370e7 (CONDITIONAL_JUMP)  ; LAB_005370e7
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 005370dc
    MOV dword ptr [ESP + 0x30],EAX      ; 005370e3
    LEA EAX,[EBX + 0x30]                ; 005370e7
        ;   Label: LAB_005370e7
    FLD float ptr [EBX + 0x34]          ; 005370ea
    PUSH EAX                            ; 005370ed
    FADD float ptr [ESP + 0x34]         ; 005370ee
    PUSH EBX                            ; 005370f2
    FSTP float ptr [EBX + 0x34]         ; 005370f3
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060 ; 005370f6
        ;   XREF to: 0042a060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter * this_ptr, UOrientationVector * orientation)
    ADD ESP,0x8                         ; 005370fb
    JMP 0x0053602e                      ; 005370fe
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [ESP + 0x2b8]         ; 00537103
        ;   Label: LAB_00537103
    FCHS                                ; 0053710a
    FSTP float ptr [ESP + 0x30]         ; 0053710c
    JMP 0x005370cc                      ; 00537110
        ;   XREF to: 005370cc (UNCONDITIONAL_JUMP)  ; LAB_005370cc
    PUSH dword ptr [EBP + 0x18]         ; 00537112
        ;   Label: LAB_00537112
    PUSH EBX                            ; 00537115
    CALL core_charactr.cpp_FUN_00428c00 ; 00537116
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0053711b
    LEA EDX,[EBX + 0x150]               ; 0053711e
    TEST EAX,EAX                        ; 00537124
    JZ 0x005371ab                       ; 00537126
        ;   XREF to: 005371ab (CONDITIONAL_JUMP)  ; LAB_005371ab
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 0053712c
    CMP EAX,0x2                         ; 00537132
    JNC 0x00537197                      ; 00537135
        ;   XREF to: 00537197 (CONDITIONAL_JUMP)  ; LAB_00537197
    CMP EAX,0x1                         ; 00537137
    JNZ 0x0053718a                      ; 0053713a
        ;   XREF to: 0053718a (CONDITIONAL_JUMP)  ; LAB_0053718a
    PUSH EAX                            ; 0053713c
    PUSH EAX                            ; 0053713d
    PUSH EDX                            ; 0053713e
        ;   Label: LAB_0053713e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053713f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0053713f
    ADD ESP,0xc                         ; 00537144
        ;   Label: LAB_00537144
    LEA EAX,[EBX + 0x23a4]              ; 00537147
    MOV dword ptr [EAX + 0x8],0x0       ; 0053714d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00537154
    MOV dword ptr [EAX + 0x4],EDX       ; 00537157
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053715a
    MOV dword ptr [EAX],EDX             ; 0053715d
    JMP 0x0053602e                      ; 0053715f
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00537164
        ;   Label: LAB_00537164
    PUSH 0x0                            ; 00537166
    PUSH EDX                            ; 00537168
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00537169
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053716e
    PUSH EBX                            ; 00537171
    PUSH 0x59556d                       ; 00537172 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005ad350]                ; 00537177 | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 0053717c | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0053717d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    JMP 0x00537144                      ; 00537182
        ;   XREF to: 00537144 (UNCONDITIONAL_JUMP)  ; LAB_00537144
    PUSH 0x1                            ; 00537184
        ;   Label: LAB_00537184
    PUSH 0x3                            ; 00537186
    JMP 0x0053713e                      ; 00537188
        ;   XREF to: 0053713e (UNCONDITIONAL_JUMP)  ; LAB_0053713e
    PUSH 0x1                            ; 0053718a
        ;   Label: LAB_0053718a
    PUSH 0x0                            ; 0053718c
    LEA EAX,[EBX + 0x150]               ; 0053718e
    PUSH EAX                            ; 00537194
    JMP 0x0053713f                      ; 00537195
        ;   XREF to: 0053713f (UNCONDITIONAL_JUMP)  ; LAB_0053713f
    JBE 0x00537184                      ; 00537197
        ;   XREF to: 00537184 (CONDITIONAL_JUMP)  ; LAB_00537184
        ;   Label: LAB_00537197
    CMP EAX,0x3                         ; 00537199
    JZ 0x00537164                       ; 0053719c
        ;   XREF to: 00537164 (CONDITIONAL_JUMP)  ; LAB_00537164
    PUSH 0x1                            ; 0053719e
    PUSH 0x0                            ; 005371a0
    LEA EAX,[EBX + 0x150]               ; 005371a2
    PUSH EAX                            ; 005371a8
    JMP 0x0053713f                      ; 005371a9
        ;   XREF to: 0053713f (UNCONDITIONAL_JUMP)  ; LAB_0053713f
    CMP dword ptr [ESP + 0x2d0],0x0     ; 005371ab
        ;   Label: LAB_005371ab
    JZ 0x0053602e                       ; 005371b3
        ;   XREF to: 0053602e (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EDX                            ; 005371b9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005371ba
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005371bf
    ADD ESP,0x4                         ; 005371c2
    CMP EAX,0xe                         ; 005371c5
    JA 0x0053602e                       ; 005371c8
        ;   XREF to: 0053602e (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x5358b8]  ; 005371ce | caseD_5 | caseD_6 | caseD_e
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2408],0x0    ; 005371d5
        ;   Label: caseD_0
    JNZ 0x005371ec                      ; 005371dc
        ;   XREF to: 005371ec (CONDITIONAL_JUMP)  ; LAB_005371ec
    XOR ECX,ECX                         ; 005371de
        ;   Label: LAB_005371de
    MOV dword ptr [ESP + 0x290],ECX     ; 005371e0
    JMP 0x0053602e                      ; 005371e7
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBX + 0x150]               ; 005371ec
        ;   Label: LAB_005371ec
    PUSH EAX                            ; 005371f2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005371f3
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005371f8
    MOV EAX,dword ptr [EAX + 0x24]      ; 005371fb
    XOR ECX,ECX                         ; 005371fe
    MOV dword ptr [ESP + 0x298],EAX     ; 00537200
    MOV EAX,dword ptr [EBX + 0xbc94]    ; 00537207
    MOV dword ptr [ESP + 0x274],ECX     ; 0053720d
    TEST EAX,EAX                        ; 00537214
    JZ 0x005373e7                       ; 00537216
        ;   XREF to: 005373e7 (CONDITIONAL_JUMP)  ; LAB_005373e7
    CMP dword ptr [EBX + 0xbc9c],0x0    ; 0053721c
    JZ 0x005373d7                       ; 00537223
        ;   XREF to: 005373d7 (CONDITIONAL_JUMP)  ; LAB_005373d7
    MOV dword ptr [ESP + 0x274],0x3     ; 00537229
    PUSH 0x1                            ; 00537234
        ;   Label: LAB_00537234
    LEA EAX,[EBX + 0x150]               ; 00537236
    PUSH EAX                            ; 0053723c
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0053723d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00537244
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00537249
    FLD float ptr [ESP + 0x2ec]         ; 00537250
    ADD ESP,0x8                         ; 00537257
    FMUL float ptr [0x005a2720]         ; 0053725a | FLOAT_005a2720
    PUSH 0x3                            ; 00537260
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 00537262
    PUSH EAX                            ; 00537269
    FSTP float ptr [ESP + 0x274]        ; 0053726a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00537271
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00537276
    FLD float ptr [ESP + 0x2ec]         ; 0053727d
    ADD ESP,0x8                         ; 00537284
    FMUL float ptr [0x005a2724]         ; 00537287 | FLOAT_005a2724
    PUSH 0x2                            ; 0053728d
    MOV EDX,dword ptr [ESP + 0x2e4]     ; 0053728f
    FADD float ptr [ESP + 0x270]        ; 00537296
    PUSH EDX                            ; 0053729d
    FSTP float ptr [ESP + 0x2e8]        ; 0053729e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 005372a5
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005372aa
    FLD float ptr [ESP + 0x2ec]         ; 005372b1
    FMUL float ptr [0x005a2728]         ; 005372b8 | FLOAT_005a2728
    ADD ESP,0x8                         ; 005372be
    FADD float ptr [ESP + 0x2e0]        ; 005372c1
    FLD float ptr [EBX + 0xbcb4]        ; 005372c8
    FMUL float ptr [EBP + 0x18]         ; 005372ce
    FLD float ptr [EBX + 0xbcb8]        ; 005372d1
    FMUL float ptr [EBX + 0x2430]       ; 005372d7
    FXCH                                ; 005372dd
    FMULP ST2                           ; 005372df
    MOV ECX,dword ptr [EBX + 0xbcb0]    ; 005372e1
    FST float ptr [EBX + 0x2410]        ; 005372e7
    FLD ST0                             ; 005372ed
    FLD float ptr [EBX + 0x2410]        ; 005372ef
    FLD ST0                             ; 005372f5
    FLD float ptr [EBX + 0x2410]        ; 005372f7
    FXCH ST4                            ; 005372fd
    FSUBR float ptr [EBX + 0x1fab8]     ; 005372ff
    FXCH ST3                            ; 00537305
    FSUBR float ptr [EBX + 0x1fa54]     ; 00537307
    FXCH ST2                            ; 0053730d
    FSUBR float ptr [EBX + 0x1fa74]     ; 0053730f
    FXCH                                ; 00537315
    FSUBR float ptr [EBX + 0x1fa5c]     ; 00537317
    FXCH ST4                            ; 0053731d
    FSUBR float ptr [EBX + 0x1fa7c]     ; 0053731f
    FXCH ST3                            ; 00537325
    FSTP float ptr [EBX + 0x1fab8]      ; 00537327
    FXCH                                ; 0053732d
    FSTP float ptr [EBX + 0x1fa54]      ; 0053732f
    FSTP float ptr [EBX + 0x1fa74]      ; 00537335
    FXCH                                ; 0053733b
    FSTP float ptr [EBX + 0x1fa5c]      ; 0053733d
    FXCH                                ; 00537343
    FADD float ptr [EBX + 0x2414]       ; 00537345
    FXCH                                ; 0053734b
    FSTP float ptr [EBX + 0x1fa7c]      ; 0053734d
    FSTP float ptr [EBX + 0x2414]       ; 00537353
    TEST ECX,ECX                        ; 00537359
    JZ 0x00537391                       ; 0053735b
        ;   XREF to: 00537391 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x2a84],0xe    ; 0053735d
    JZ 0x00537391                       ; 00537364
        ;   XREF to: 00537391 (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [ESP + 0x298]     ; 00537366
    CMP EDX,0x5                         ; 0053736d
    JA 0x00537391                       ; 00537370
        ;   XREF to: 00537391 (CONDITIONAL_JUMP)  ; default
    MOV EAX,EDX                         ; 00537372
    JMP dword ptr [EAX*0x4 + 0x5358a0]  ; 00537374 | caseD_5 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EDX,0xb                         ; 0053737b
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x2408],0x0    ; 00537380
    MOV dword ptr [ESP + 0x274],EDX     ; 0053738a
    MOV EAX,dword ptr [ESP + 0x274]     ; 00537391
        ;   Label: default
    CMP EAX,dword ptr [ESP + 0x298]     ; 00537398
    JZ 0x005373b3                       ; 0053739f
        ;   XREF to: 005373b3 (CONDITIONAL_JUMP)  ; LAB_005373b3
    PUSH 0x1                            ; 005373a1
    PUSH EAX                            ; 005373a3
    LEA EAX,[EBX + 0x150]               ; 005373a4
    PUSH EAX                            ; 005373aa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005373ab
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005373b0
    CMP dword ptr [EBX + 0xbca4],0x0    ; 005373b3
        ;   Label: LAB_005373b3
    JZ 0x005371de                       ; 005373ba
        ;   XREF to: 005371de (CONDITIONAL_JUMP)  ; LAB_005371de
    PUSH EBX                            ; 005373c0
    CALL core_hero.cpp_FUN_004b5b00     ; 005373c1
        ;   XREF to: 004b5b00 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004b5b00(CHero * this_ptr)
    ADD ESP,0x4                         ; 005373c6
    XOR ECX,ECX                         ; 005373c9
    MOV dword ptr [ESP + 0x290],ECX     ; 005373cb
    JMP 0x0053602e                      ; 005373d2
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [ESP + 0x274],0x1     ; 005373d7
        ;   Label: LAB_005373d7
    JMP 0x00537234                      ; 005373e2
        ;   XREF to: 00537234 (UNCONDITIONAL_JUMP)  ; LAB_00537234
    CMP dword ptr [EBX + 0xbc98],0x0    ; 005373e7
        ;   Label: LAB_005373e7
    JZ 0x00537400                       ; 005373ee
        ;   XREF to: 00537400 (CONDITIONAL_JUMP)  ; LAB_00537400
    MOV dword ptr [ESP + 0x274],0x2     ; 005373f0
    JMP 0x00537234                      ; 005373fb
        ;   XREF to: 00537234 (UNCONDITIONAL_JUMP)  ; LAB_00537234
    FLD float ptr [EBX + 0xbcb4]        ; 00537400
        ;   Label: LAB_00537400
    FST double ptr [ESP]                ; 00537406
    FCOMP double ptr [0x00595617]       ; 00537409 | DOUBLE_00595617
    FNSTSW AX                           ; 0053740f
    SAHF                                ; 00537411
    JNC 0x00537424                      ; 00537412
        ;   XREF to: 00537424 (CONDITIONAL_JUMP)  ; LAB_00537424
    MOV dword ptr [ESP + 0x274],0x4     ; 00537414
    JMP 0x00537234                      ; 0053741f
        ;   XREF to: 00537234 (UNCONDITIONAL_JUMP)  ; LAB_00537234
    FLD double ptr [ESP]                ; 00537424
        ;   Label: LAB_00537424
    FCOMP double ptr [0x0059561f]       ; 00537427 | DOUBLE_0059561f
    FNSTSW AX                           ; 0053742d
    SAHF                                ; 0053742f
    JBE 0x00537234                      ; 00537430
        ;   XREF to: 00537234 (CONDITIONAL_JUMP)  ; LAB_00537234
    MOV dword ptr [ESP + 0x274],0x5     ; 00537436
    JMP 0x00537234                      ; 00537441
        ;   XREF to: 00537234 (UNCONDITIONAL_JUMP)  ; LAB_00537234
    MOV EAX,0xb                         ; 00537446
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x2408],0x0    ; 0053744b
    MOV dword ptr [ESP + 0x274],EAX     ; 00537455
    JMP 0x00537391                      ; 0053745c
        ;   XREF to: 00537391 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,0x7                         ; 00537461
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x2408],0x0    ; 00537466
    MOV dword ptr [ESP + 0x274],ECX     ; 00537470
    JMP 0x00537391                      ; 00537477
        ;   XREF to: 00537391 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x2408],0x0    ; 0053747c
        ;   Label: caseD_7
    JMP 0x0053602e                      ; 00537486
        ;   XREF to: 0053602e (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x1fa90],0x0   ; 0053748b
        ;   Label: LAB_0053748b
    JNZ 0x005360e5                      ; 00537492
        ;   XREF to: 005360e5 (CONDITIONAL_JUMP)  ; LAB_005360e5
    CMP dword ptr [ESP + 0x2c8],0x0     ; 00537498
    JZ 0x00536144                       ; 005374a0
        ;   XREF to: 00536144 (CONDITIONAL_JUMP)  ; LAB_00536144
    LEA EAX,[EBX + 0x150]               ; 005374a6
    PUSH EAX                            ; 005374ac
    MOV dword ptr [ESP + 0x298],EAX     ; 005374ad
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005374b4
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    FLD float ptr [0x005a270c]          ; 005374b9 | FLOAT_005a270c
    LEA EDX,[EBX + 0x23a4]              ; 005374bf
    ADD ESP,0x4                         ; 005374c5
    LEA ECX,[EBX + 0x2414]              ; 005374c8
    FLD float ptr [EDX]                 ; 005374ce
    FADD float ptr [ECX]                ; 005374d0
    MOV EAX,dword ptr [EAX + 0x24]      ; 005374d2
    FSTP float ptr [ESP + 0x1ec]        ; 005374d5
    FLD float ptr [EDX + 0x4]           ; 005374dc
    FADD float ptr [ECX + 0x4]          ; 005374df
    FXCH                                ; 005374e2
    FMUL float ptr [EBP + 0x18]         ; 005374e4
    FXCH                                ; 005374e7
    FSTP float ptr [ESP + 0x1f0]        ; 005374e9
    FLD float ptr [EDX + 0x8]           ; 005374f0
    FADD float ptr [ECX + 0x8]          ; 005374f3
    MOV dword ptr [ESP + 0x270],EAX     ; 005374f6
    FSTP float ptr [ESP + 0x1f4]        ; 005374fd
    MOV dword ptr [EDX + 0x8],0x0       ; 00537504
    FLD float ptr [EDX + 0x8]           ; 0053750b
    FST float ptr [EDX + 0x4]           ; 0053750e
    FSTP float ptr [EDX]                ; 00537511
    MOV EDX,ECX                         ; 00537513
    MOV dword ptr [ECX + 0x8],0x0       ; 00537515
    FSTP float ptr [ESP + 0x2a8]        ; 0053751c
    FLD float ptr [EDX + 0x8]           ; 00537523
    FSTP float ptr [ECX + 0x4]          ; 00537526
    FLD float ptr [EDX + 0x4]           ; 00537529
    FSTP float ptr [ECX]                ; 0053752c
    CMP EAX,0x7                         ; 0053752e
    JZ 0x00537753                       ; 00537531
        ;   XREF to: 00537753 (CONDITIONAL_JUMP)  ; LAB_00537753
    CMP EAX,0x8                         ; 00537537
    JNZ 0x0053778d                      ; 0053753a
        ;   XREF to: 0053778d (CONDITIONAL_JUMP)  ; LAB_0053778d
    FLD float ptr [EBP + 0x18]          ; 00537540
    FMUL double ptr [0x0059567f]        ; 00537543 | DOUBLE_0059567f
    XOR EDX,ECX                         ; 00537549
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 0053754b
    MOV dword ptr [ESP + 0x1ec],EDX     ; 00537552
    XOR ECX,ECX                         ; 00537559
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0053755b
    MOV dword ptr [ESP + 0x1f0],ECX     ; 00537562
    FLD float ptr [EBX + 0x2424]        ; 00537569
    MOV EAX,[0x005a270c]                ; 0053756f | FLOAT_005a270c
    MOV dword ptr [EBX + 0x1fafc],EAX   ; 00537574
    FXCH                                ; 0053757a
    FSUBR ST0,ST1                       ; 0053757c
    MOV dword ptr [EBX + 0x1faf8],ECX   ; 0053757e
    FSTP ST1                            ; 00537584
        ;   Label: LAB_00537584
    FSTP float ptr [EBX + 0x2424]       ; 00537586
        ;   Label: LAB_00537586
    LEA EAX,[EBX + 0x1fae0]             ; 0053758c
        ;   Label: LAB_0053758c
    PUSH EAX                            ; 00537592
    LEA EAX,[ESP + 0x25c]               ; 00537593
    PUSH EAX                            ; 0053759a
    PUSH EBX                            ; 0053759b
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 0053759c
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    LEA EDX,[EBX + 0x2420]              ; 005375a1
    ADD ESP,0xc                         ; 005375a7
    FLD float ptr [EBP + 0x18]          ; 005375aa
    FLD float ptr [EDX]                 ; 005375ad
    FMUL ST1                            ; 005375af
    FSTP float ptr [ESP + 0xc0]         ; 005375b1
    FLD float ptr [EDX + 0x4]           ; 005375b8
    FMUL ST1                            ; 005375bb
    FSTP float ptr [ESP + 0xc4]         ; 005375bd
    FMUL float ptr [EDX + 0x8]          ; 005375c4
    FLD float ptr [ESP + 0x1ec]         ; 005375c7
    FLD float ptr [ESP + 0x1f0]         ; 005375ce
    FLD float ptr [ESP + 0x1f4]         ; 005375d5
    FLD float ptr [ESP + 0xc0]          ; 005375dc
    FLD float ptr [ESP + 0xc4]          ; 005375e3
    FXCH ST5                            ; 005375ea
    FSTP float ptr [ESP + 0xc8]         ; 005375ec
    FADD float ptr [EAX]                ; 005375f3
    FLD float ptr [ESP + 0xc8]          ; 005375f5
    FXCH                                ; 005375fc
    FSTP float ptr [ESP + 0x21c]        ; 005375fe
    FXCH ST4                            ; 00537605
    FADD float ptr [EAX + 0x4]          ; 00537607
    FXCH ST3                            ; 0053760a
    FADD float ptr [ESP + 0x21c]        ; 0053760c
    FXCH ST3                            ; 00537613
    FSTP float ptr [ESP + 0x220]        ; 00537615
    FXCH ST3                            ; 0053761c
    FADD float ptr [EAX + 0x8]          ; 0053761e
    FXCH                                ; 00537621
    FADD float ptr [ESP + 0x220]        ; 00537623
    FXCH                                ; 0053762a
    FSTP float ptr [ESP + 0x224]        ; 0053762c
    FXCH                                ; 00537633
    FSTP float ptr [ESP + 0x1ec]        ; 00537635
    FSTP float ptr [ESP + 0x1f0]        ; 0053763c
    LEA EAX,[ESP + 0x1ec]               ; 00537643
    FADD float ptr [ESP + 0x224]        ; 0053764a
    PUSH EAX                            ; 00537651
    FSTP float ptr [ESP + 0x1f8]        ; 00537652
    PUSH EBX                            ; 00537659
    MOV EAX,dword ptr [EBX + 0x2424]    ; 0053765a
    MOV dword ptr [EBX + 0x1fcd4],EAX   ; 00537660
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00537666
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    FLD float ptr [EBX + 0x240c]        ; 0053766b
    FADD double ptr [0x00595687]        ; 00537671 | DOUBLE_00595687
    ADD ESP,0x8                         ; 00537677
    FLD float ptr [EBX + 0x24]          ; 0053767a
    FCOMPP                              ; 0053767d
    FNSTSW AX                           ; 0053767f
    SAHF                                ; 00537681
    JNC 0x0053768e                      ; 00537682
        ;   XREF to: 0053768e (CONDITIONAL_JUMP)  ; LAB_0053768e
    MOV dword ptr [EBX + 0x2408],0x1    ; 00537684
    MOV ECX,dword ptr [ESP + 0x270]     ; 0053768e
        ;   Label: LAB_0053768e
    CMP ECX,0xf                         ; 00537695
    JNZ 0x00537a05                      ; 00537698
        ;   XREF to: 00537a05 (CONDITIONAL_JUMP)  ; LAB_00537a05
    CMP dword ptr [EBX + 0x2408],0x0    ; 0053769e
        ;   Label: LAB_0053769e
    JZ 0x00537741                       ; 005376a5
        ;   XREF to: 00537741 (CONDITIONAL_JUMP)  ; LAB_00537741
    MOV EAX,[0x005b9284]                ; 005376ab | PTR_DAT_005b9284
    PUSH EAX                            ; 005376b0
    CALL xxx_unk.c_FUN_004940d0         ; 005376b1
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 005376b6
    SUB ESP,0x8                         ; 005376b9
    FLD float ptr [EBX + 0x2424]        ; 005376bc
    FSTP double ptr [ESP]               ; 005376c2
    PUSH 0x595597                       ; 005376c5 | = "Splat at %3.2f fps\n"
    MOV EDX,dword ptr [0x005ad350]      ; 005376ca | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 005376d0 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005376d1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    FLD float ptr [EBX + 0x1fcd4]       ; 005376d6
    ADD ESP,0x10                        ; 005376dc
    FCHS                                ; 005376df
    FST float ptr [ESP + 0x1c]          ; 005376e1
    FST double ptr [ESP + 0x8]          ; 005376e5
    FCOMP double ptr [0x0059568f]       ; 005376e9 | DOUBLE_0059568f
    FNSTSW AX                           ; 005376ef
    SAHF                                ; 005376f1
    JNC 0x00537a49                      ; 005376f2
        ;   XREF to: 00537a49 (CONDITIONAL_JUMP)  ; LAB_00537a49
    MOV EDX,dword ptr [ESP + 0x270]     ; 005376f8
    LEA EAX,[EBX + 0x150]               ; 005376ff
    CMP EDX,0xd                         ; 00537705
    JNZ 0x00537a29                      ; 00537708
        ;   XREF to: 00537a29 (CONDITIONAL_JUMP)  ; LAB_00537a29
    PUSH 0x1                            ; 0053770e
    PUSH 0xe                            ; 00537710
    PUSH EAX                            ; 00537712
        ;   Label: LAB_00537712
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00537713
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00537718
    FLD float ptr [ESP + 0x1c]          ; 0053771b
        ;   Label: LAB_0053771b
    FMUL float ptr [0x005956af]         ; 0053771f | FLOAT_005956af
    SUB ESP,0x4                         ; 00537725
    FLD1                                ; 00537728
    FADDP                               ; 0053772a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053772c
    FSTP float ptr [ESP]                ; 00537732
    PUSH 0x2dd1184                      ; 00537735 | DAT_02dd1184
    PUSH EBX                            ; 0053773a
    CALL dword ptr [EAX + 0x1c]         ; 0053773b
    ADD ESP,0xc                         ; 0053773e
    CMP dword ptr [EBX + 0x2408],0x0    ; 00537741
        ;   Label: LAB_00537741
    JZ 0x00537b12                       ; 00537748
        ;   XREF to: 00537b12 (CONDITIONAL_JUMP)  ; LAB_00537b12
    JMP 0x0053613a                      ; 0053774e
        ;   XREF to: 0053613a (UNCONDITIONAL_JUMP)  ; LAB_0053613a
    XOR EAX,EAX                         ; 00537753
        ;   Label: LAB_00537753
    XOR EDX,ECX                         ; 00537755
    MOV dword ptr [ESP + 0x1ec],EAX     ; 00537757
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 0053775e
    MOV dword ptr [ESP + 0x1f0],EDX     ; 00537765
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0053776c
    MOV EAX,[0x005a270c]                ; 00537773 | FLOAT_005a270c
    MOV dword ptr [EBX + 0x1fafc],EAX   ; 00537778
    MOV dword ptr [EBX + 0x1faf8],0x0   ; 0053777e
    JMP 0x0053758c                      ; 00537788
        ;   XREF to: 0053758c (UNCONDITIONAL_JUMP)  ; LAB_0053758c
    CMP EAX,0x9                         ; 0053778d
        ;   Label: LAB_0053778d
    JNZ 0x00537830                      ; 00537790
        ;   XREF to: 00537830 (CONDITIONAL_JUMP)  ; LAB_00537830
    FLD float ptr [EBP + 0x18]          ; 00537796
    FLD ST0                             ; 00537799
    FMUL double ptr [0x0059567f]        ; 0053779b | DOUBLE_0059567f
    FLD float ptr [0x005a271c]          ; 005377a1 | FLOAT_005a271c
    FMUL float ptr [0x005a270c]         ; 005377a7 | FLOAT_005a270c
    XOR EDX,ECX                         ; 005377ad
    XOR ECX,ECX                         ; 005377af
    MOV dword ptr [ESP + 0x1ec],EDX     ; 005377b1
    MOV dword ptr [ESP + 0x1f0],ECX     ; 005377b8
    FLD float ptr [EBX + 0x1fafc]       ; 005377bf
    FMUL ST3                            ; 005377c5
    FXCH                                ; 005377c7
    FMULP ST3                           ; 005377c9
    FSTP float ptr [ESP + 0x1f4]        ; 005377cb
    MOV dword ptr [EBX + 0x1faf8],ECX   ; 005377d2
    FXCH                                ; 005377d8
    FSUBR float ptr [EBX + 0x1fafc]     ; 005377da
    FLD float ptr [EBX + 0x2424]        ; 005377e0
    FXCH                                ; 005377e6
    FSTP float ptr [EBX + 0x1fafc]      ; 005377e8
    FXCH                                ; 005377ee
    FSUBR ST0,ST1                       ; 005377f0
    FLD float ptr [EBX + 0x1fafc]       ; 005377f2
    FLDZ                                ; 005377f8
    FXCH ST2                            ; 005377fa
    FSTP ST3                            ; 005377fc
    FXCH ST2                            ; 005377fe
    FSTP float ptr [EBX + 0x2424]       ; 00537800
    FCOMPP                              ; 00537806
    FNSTSW AX                           ; 00537808
    SAHF                                ; 0053780a
    JBE 0x0053758c                      ; 0053780b
        ;   XREF to: 0053758c (CONDITIONAL_JUMP)  ; LAB_0053758c
    PUSH 0x1                            ; 00537811
    PUSH 0xf                            ; 00537813
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00537815
    PUSH EAX                            ; 0053781c
    MOV dword ptr [EBX + 0x1fafc],ECX   ; 0053781d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00537823
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00537828
    JMP 0x0053758c                      ; 0053782b
        ;   XREF to: 0053758c (UNCONDITIONAL_JUMP)  ; LAB_0053758c
    CMP EAX,0xa                         ; 00537830
        ;   Label: LAB_00537830
    JNZ 0x00537858                      ; 00537833
        ;   XREF to: 00537858 (CONDITIONAL_JUMP)  ; LAB_00537858
    XOR ECX,ECX                         ; 00537835
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 00537837
    MOV dword ptr [ESP + 0x1f0],ECX     ; 0053783e
    MOV dword ptr [ESP + 0x1f4],EAX     ; 00537845
    MOV dword ptr [ESP + 0x1ec],ECX     ; 0053784c
    JMP 0x0053758c                      ; 00537853
        ;   XREF to: 0053758c (UNCONDITIONAL_JUMP)  ; LAB_0053758c
    CMP EAX,0xb                         ; 00537858
        ;   Label: LAB_00537858
    JNZ 0x00537877                      ; 0053785b
        ;   XREF to: 00537877 (CONDITIONAL_JUMP)  ; LAB_00537877
    MOV dword ptr [EBX + 0x1faf8],0x0   ; 0053785d
    MOV EAX,[0x005a2714]                ; 00537867 | FLOAT_005a2714
    MOV dword ptr [EBX + 0x1fafc],EAX   ; 0053786c
    JMP 0x0053758c                      ; 00537872
        ;   XREF to: 0053758c (UNCONDITIONAL_JUMP)  ; LAB_0053758c
    CMP EAX,0xc                         ; 00537877
        ;   Label: LAB_00537877
    JNZ 0x005378c9                      ; 0053787a
        ;   XREF to: 005378c9 (CONDITIONAL_JUMP)  ; LAB_005378c9
    FLD float ptr [0x005a2714]          ; 0053787c | FLOAT_005a2714
    FLD ST0                             ; 00537882
    FLD float ptr [EBP + 0x18]          ; 00537884
    FXCH                                ; 00537887
    FMUL ST1                            ; 00537889
    FXCH                                ; 0053788b
    FMUL double ptr [0x0059567f]        ; 0053788d | DOUBLE_0059567f
    XOR EAX,EAX                         ; 00537893
    XOR EDX,ECX                         ; 00537895
    MOV dword ptr [ESP + 0x1ec],EAX     ; 00537897
    MOV dword ptr [ESP + 0x1f0],EDX     ; 0053789e
    FXCH                                ; 005378a5
    FSTP float ptr [ESP + 0x1f4]        ; 005378a7
    FLD float ptr [EBX + 0x2424]        ; 005378ae
    FXCH ST2                            ; 005378b4
    FSTP float ptr [EBX + 0x1fafc]      ; 005378b6
    FSUBR ST0,ST1                       ; 005378bc
    MOV dword ptr [EBX + 0x1faf8],EAX   ; 005378be
    JMP 0x00537584                      ; 005378c4
        ;   XREF to: 00537584 (UNCONDITIONAL_JUMP)  ; LAB_00537584
    CMP EAX,0xd                         ; 005378c9
        ;   Label: LAB_005378c9
    JNZ 0x00537970                      ; 005378cc
        ;   XREF to: 00537970 (CONDITIONAL_JUMP)  ; LAB_00537970
    FLD float ptr [EBP + 0x18]          ; 005378d2
    FLD ST0                             ; 005378d5
    FMUL double ptr [0x0059567f]        ; 005378d7 | DOUBLE_0059567f
    FLD float ptr [0x005a271c]          ; 005378dd | FLOAT_005a271c
    XOR EAX,EAX                         ; 005378e3
    XOR EDX,ECX                         ; 005378e5
    MOV dword ptr [ESP + 0x1ec],EAX     ; 005378e7
    MOV dword ptr [ESP + 0x1f0],EDX     ; 005378ee
    FMUL float ptr [0x005a2714]         ; 005378f5 | FLOAT_005a2714
    FLD float ptr [EBX + 0x1fafc]       ; 005378fb
    FMUL ST3                            ; 00537901
    FXCH                                ; 00537903
    FMULP ST3                           ; 00537905
    FSTP float ptr [ESP + 0x1f4]        ; 00537907
    MOV dword ptr [EBX + 0x1faf8],EAX   ; 0053790e
    FXCH                                ; 00537914
    FSUBR float ptr [EBX + 0x1fafc]     ; 00537916
    FLD float ptr [EBX + 0x2424]        ; 0053791c
    FXCH                                ; 00537922
    FSTP float ptr [EBX + 0x1fafc]      ; 00537924
    FXCH                                ; 0053792a
    FSUBR ST0,ST1                       ; 0053792c
    FLD float ptr [EBX + 0x1fafc]       ; 0053792e
    FLDZ                                ; 00537934
    FXCH ST2                            ; 00537936
    FSTP ST3                            ; 00537938
    FXCH ST2                            ; 0053793a
    FSTP float ptr [EBX + 0x2424]       ; 0053793c
    FCOMPP                              ; 00537942
    FNSTSW AX                           ; 00537944
    SAHF                                ; 00537946
    JBE 0x0053758c                      ; 00537947
        ;   XREF to: 0053758c (CONDITIONAL_JUMP)  ; LAB_0053758c
    PUSH 0x1                            ; 0053794d
    PUSH 0xf                            ; 0053794f
    MOV ECX,dword ptr [ESP + 0x29c]     ; 00537951
    PUSH ECX                            ; 00537958
    MOV dword ptr [EBX + 0x1fafc],0x0   ; 00537959
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00537963
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00537968
    JMP 0x0053758c                      ; 0053796b
        ;   XREF to: 0053758c (UNCONDITIONAL_JUMP)  ; LAB_0053758c
    CMP EAX,0xe                         ; 00537970
        ;   Label: LAB_00537970
    JNZ 0x00537983                      ; 00537973
        ;   XREF to: 00537983 (CONDITIONAL_JUMP)  ; LAB_00537983
    XOR ECX,ECX                         ; 00537975
    MOV dword ptr [ESP + 0x1f0],ECX     ; 00537977
    JMP 0x0053758c                      ; 0053797e
        ;   XREF to: 0053758c (UNCONDITIONAL_JUMP)  ; LAB_0053758c
    CMP EAX,0xf                         ; 00537983
        ;   Label: LAB_00537983
    JNZ 0x005379c1                      ; 00537986
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    FLD float ptr [EBP + 0x18]          ; 00537988
    XOR ECX,ECX                         ; 0053798b
    FMUL double ptr [0x0059567f]        ; 0053798d | DOUBLE_0059567f
    MOV dword ptr [ESP + 0x1f4],ECX     ; 00537993
    MOV dword ptr [ESP + 0x1f0],ECX     ; 0053799a
    MOV dword ptr [ESP + 0x1ec],ECX     ; 005379a1
    FLD float ptr [EBX + 0x2424]        ; 005379a8
    FXCH                                ; 005379ae
    FSUBR ST0,ST1                       ; 005379b0
    MOV dword ptr [EBX + 0x1faf8],0x461c3f9a ; 005379b2
    JMP 0x00537584                      ; 005379bc
        ;   XREF to: 00537584 (UNCONDITIONAL_JUMP)  ; LAB_00537584
    CMP EAX,0x10                        ; 005379c1
        ;   Label: LAB_005379c1
    JNZ 0x005379f1                      ; 005379c4
        ;   XREF to: 005379f1 (CONDITIONAL_JUMP)  ; LAB_005379f1
    FLD float ptr [EBP + 0x18]          ; 005379c6
    XOR ECX,ECX                         ; 005379c9
    FMUL double ptr [0x0059567f]        ; 005379cb | DOUBLE_0059567f
    MOV dword ptr [ESP + 0x1f4],ECX     ; 005379d1
    MOV dword ptr [ESP + 0x1f0],ECX     ; 005379d8
    MOV dword ptr [ESP + 0x1ec],ECX     ; 005379df
    FSUBR float ptr [EBX + 0x2424]      ; 005379e6
    JMP 0x00537586                      ; 005379ec
        ;   XREF to: 00537586 (UNCONDITIONAL_JUMP)  ; LAB_00537586
    FLD float ptr [EBP + 0x18]          ; 005379f1
        ;   Label: LAB_005379f1
    FMUL double ptr [0x0059567f]        ; 005379f4 | DOUBLE_0059567f
    FSUBR float ptr [EBX + 0x2424]      ; 005379fa
    JMP 0x00537586                      ; 00537a00
        ;   XREF to: 00537586 (UNCONDITIONAL_JUMP)  ; LAB_00537586
    CMP ECX,0x9                         ; 00537a05
        ;   Label: LAB_00537a05
    JZ 0x0053769e                       ; 00537a08
        ;   XREF to: 0053769e (CONDITIONAL_JUMP)  ; LAB_0053769e
    CMP ECX,0xd                         ; 00537a0e
    JZ 0x0053769e                       ; 00537a11
        ;   XREF to: 0053769e (CONDITIONAL_JUMP)  ; LAB_0053769e
    CMP dword ptr [EBX + 0x2408],0x0    ; 00537a17
    JZ 0x00537b12                       ; 00537a1e
        ;   XREF to: 00537b12 (CONDITIONAL_JUMP)  ; LAB_00537b12
    JMP 0x0053613a                      ; 00537a24
        ;   XREF to: 0053613a (UNCONDITIONAL_JUMP)  ; LAB_0053613a
    CMP EDX,0x9                         ; 00537a29
        ;   Label: LAB_00537a29
    JZ 0x00537a40                       ; 00537a2c
        ;   XREF to: 00537a40 (CONDITIONAL_JUMP)  ; LAB_00537a40
    CMP EDX,0xf                         ; 00537a2e
    JNZ 0x0053771b                      ; 00537a31
        ;   XREF to: 0053771b (CONDITIONAL_JUMP)  ; LAB_0053771b
    PUSH 0x1                            ; 00537a37
    PUSH 0x10                           ; 00537a39
    JMP 0x00537712                      ; 00537a3b
        ;   XREF to: 00537712 (UNCONDITIONAL_JUMP)  ; LAB_00537712
    PUSH 0x1                            ; 00537a40
        ;   Label: LAB_00537a40
    PUSH 0xa                            ; 00537a42
    JMP 0x00537712                      ; 00537a44
        ;   XREF to: 00537712 (UNCONDITIONAL_JUMP)  ; LAB_00537712
    LEA EAX,[ESP + 0x34]                ; 00537a49
        ;   Label: LAB_00537a49
    XOR ECX,ECX                         ; 00537a4d
    PUSH EAX                            ; 00537a4f
    MOV dword ptr [ESP + 0x280],ECX     ; 00537a50
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00537a57
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00537a5c
    FLD double ptr [ESP + 0x8]          ; 00537a5f
    FADD double ptr [0x00595697]        ; 00537a63 | DOUBLE_00595697
    FMUL double ptr [0x0059569f]        ; 00537a69 | DOUBLE_0059569f
    FMUL double ptr [0x005956a7]        ; 00537a6f | DOUBLE_005956a7
    FSTP float ptr [ESP + 0x38]         ; 00537a75
    CMP dword ptr [ESP + 0x38],0x42c80000 ; 00537a79
    JLE 0x00537a98                      ; 00537a81
        ;   XREF to: 00537a98 (CONDITIONAL_JUMP)  ; LAB_00537a98
    MOV ECX,0x1                         ; 00537a83
    MOV EDX,0x461c3c00                  ; 00537a88
    MOV dword ptr [ESP + 0x27c],ECX     ; 00537a8d
    MOV dword ptr [ESP + 0x38],EDX      ; 00537a94
    LEA EAX,[ESP + 0x34]                ; 00537a98
        ;   Label: LAB_00537a98
    PUSH EAX                            ; 00537a9c
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00537a9d
    PUSH EBX                            ; 00537aa3
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 00537aa4
    CALL dword ptr [EDX + 0x100]        ; 00537aae
    FLD float ptr [EBX + 0x2434]        ; 00537ab4
    FLDZ                                ; 00537aba
    ADD ESP,0x8                         ; 00537abc
    FCOMPP                              ; 00537abf
    FNSTSW AX                           ; 00537ac1
    SAHF                                ; 00537ac3
    JNC 0x00537ad0                      ; 00537ac4
        ;   XREF to: 00537ad0 (CONDITIONAL_JUMP)  ; LAB_00537ad0
    CMP dword ptr [ESP + 0x27c],0x0     ; 00537ac6
    JZ 0x00537b03                       ; 00537ace
        ;   XREF to: 00537b03 (CONDITIONAL_JUMP)  ; LAB_00537b03
    PUSH 0x1                            ; 00537ad0
        ;   Label: LAB_00537ad0
    PUSH 0x12                           ; 00537ad2
    LEA EAX,[EBX + 0x150]               ; 00537ad4
    PUSH EAX                            ; 00537ada
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00537adb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00537ae0
    PUSH 0x5955ab                       ; 00537ae3 | = "fall-?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00537ae8
    PUSH EBX                            ; 00537aee
    CALL dword ptr [EAX + 0x24]         ; 00537aef
    ADD ESP,0x8                         ; 00537af2
    CMP dword ptr [EBX + 0x2408],0x0    ; 00537af5
    JZ 0x00537b12                       ; 00537afc
        ;   XREF to: 00537b12 (CONDITIONAL_JUMP)  ; LAB_00537b12
    JMP 0x0053613a                      ; 00537afe
        ;   XREF to: 0053613a (UNCONDITIONAL_JUMP)  ; LAB_0053613a
    PUSH 0x1                            ; 00537b03
        ;   Label: LAB_00537b03
    PUSH 0x11                           ; 00537b05
    LEA EAX,[EBX + 0x150]               ; 00537b07
    JMP 0x00537712                      ; 00537b0d
        ;   XREF to: 00537712 (UNCONDITIONAL_JUMP)  ; LAB_00537712
    MOV EAX,[0x005a271c]                ; 00537b12 | FLOAT_005a271c
        ;   Label: LAB_00537b12
    FLD float ptr [EBX + 0x1faf8]       ; 00537b17
    MOV dword ptr [ESP + 0x2c],EAX      ; 00537b1d
    FADD float ptr [EBP + 0x18]         ; 00537b21
    MOV EAX,dword ptr [ESP + 0x270]     ; 00537b24
    FSTP float ptr [EBX + 0x1faf8]      ; 00537b2b
    CMP EAX,0x3                         ; 00537b31
    JNZ 0x00537b48                      ; 00537b34
        ;   XREF to: 00537b48 (CONDITIONAL_JUMP)  ; LAB_00537b48
    FLD float ptr [ESP + 0x2c]          ; 00537b36
    FLD ST0                             ; 00537b3a
    FMUL double ptr [0x0059560f]        ; 00537b3c | DOUBLE_0059560f
    FSTP ST1                            ; 00537b42
    FSTP float ptr [ESP + 0x2c]         ; 00537b44
    FLD float ptr [EBX + 0x1faf8]       ; 00537b48
        ;   Label: LAB_00537b48
    FCOMP float ptr [ESP + 0x2c]        ; 00537b4e
    FNSTSW AX                           ; 00537b52
    SAHF                                ; 00537b54
    JBE 0x00537b83                      ; 00537b55
        ;   XREF to: 00537b83 (CONDITIONAL_JUMP)  ; LAB_00537b83
    CMP dword ptr [ESP + 0x270],0xf     ; 00537b57
        ;   Label: LAB_00537b57
    JZ 0x00537b74                       ; 00537b5f
        ;   XREF to: 00537b74 (CONDITIONAL_JUMP)  ; LAB_00537b74
    PUSH 0x1                            ; 00537b61
    PUSH 0xf                            ; 00537b63
    LEA EAX,[EBX + 0x150]               ; 00537b65
    PUSH EAX                            ; 00537b6b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00537b6c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00537b71
    MOV dword ptr [EBX + 0x2408],0x0    ; 00537b74
        ;   Label: LAB_00537b74
    JMP 0x00536144                      ; 00537b7e
        ;   XREF to: 00536144 (UNCONDITIONAL_JUMP)  ; LAB_00536144
    FLD float ptr [EBX + 0x1fcd4]       ; 00537b83
        ;   Label: LAB_00537b83
    FCOMP double ptr [0x00595697]       ; 00537b89 | DOUBLE_00595697
    FNSTSW AX                           ; 00537b8f
    SAHF                                ; 00537b91
    JC 0x00537b57                       ; 00537b92
        ;   XREF to: 00537b57 (CONDITIONAL_JUMP)  ; LAB_00537b57
    JMP 0x00536144                      ; 00537b94
        ;   XREF to: 00536144 (UNCONDITIONAL_JUMP)  ; LAB_00536144
    MOV dword ptr [EBX + 0x1fa3c],0x1   ; 00537b99
        ;   Label: LAB_00537b99
    JMP 0x005361b4                      ; 00537ba3
        ;   XREF to: 005361b4 (UNCONDITIONAL_JUMP)  ; LAB_005361b4
    MOV ECX,dword ptr [EAX + 0x2e8]     ; 00537ba8
        ;   Label: LAB_00537ba8
    TEST ECX,ECX                        ; 00537bae
    JNZ 0x00536239                      ; 00537bb0
        ;   XREF to: 00536239 (CONDITIONAL_JUMP)  ; LAB_00536239
    MOV EAX,[0x005b9354]                ; 00537bb6 | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x244],ECX     ; 00537bbb | g_CGame_01c775ec.flashlight_active
    JMP 0x00536239                      ; 00537bc1
        ;   XREF to: 00536239 (UNCONDITIONAL_JUMP)  ; LAB_00536239
    FLD float ptr [EBP + 0x18]          ; 00537bc6
        ;   Label: LAB_00537bc6
    FDIV float ptr [0x005a26f0]         ; 00537bc9 | FLOAT_005a26f0
    FSUBR float ptr [EBX + 0x1fa40]     ; 00537bcf
    FST float ptr [EBX + 0x1fa40]       ; 00537bd5
    FLDZ                                ; 00537bdb
    FCOMPP                              ; 00537bdd
    FNSTSW AX                           ; 00537bdf
    SAHF                                ; 00537be1
    JBE 0x00536285                      ; 00537be2
        ;   XREF to: 00536285 (CONDITIONAL_JUMP)  ; LAB_00536285
    MOV dword ptr [EBX + 0x1fa40],EDX   ; 00537be8
    JMP 0x00536285                      ; 00537bee
        ;   XREF to: 00536285 (UNCONDITIONAL_JUMP)  ; LAB_00536285
    PUSH EBX                            ; 00537bf3
        ;   Label: LAB_00537bf3
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0 ; 00537bf4
        ;   XREF to: 004b56f0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00537bf9
    JMP 0x00536472                      ; 00537bfc
        ;   XREF to: 00536472 (UNCONDITIONAL_JUMP)  ; LAB_00536472
    MOV ECX,dword ptr [EBX + 0x1fab4]   ; 00537c01
        ;   Label: LAB_00537c01
    PUSH ECX                            ; 00537c07
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00537c08
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 00537c0d
    MOV ESI,dword ptr [EBX + 0x1fab0]   ; 00537c10
    PUSH ESI                            ; 00537c16
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00537c17
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 00537c1c
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 00537c1f
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x1                            ; 00537c24
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270 ; 00537c26
        ;   XREF to: 00526270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270(uint flag_mask)
    ADD ESP,0x4                         ; 00537c2b
    PUSH 0x5955d0                       ; 00537c2e | = "goggle-off.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 00537c33
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 00537c38
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 00537c3b
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV ESP,EBP                         ; 00537c40
    POP EBP                             ; 00537c42
    POP EDI                             ; 00537c43
    POP ESI                             ; 00537c44
    POP EBX                             ; 00537c45
    RET                                 ; 00537c46
    MOV EAX,[0x005b9354]                ; 00537c47 | g_CGame_PTR_005b9354 | g_CGame_01c775ec
        ;   Label: LAB_00537c47
    CMP dword ptr [EAX + 0x240],0x0     ; 00537c4c | g_CGame_01c775ec.goggles_active
    JZ 0x00536506                       ; 00537c53
        ;   XREF to: 00536506 (CONDITIONAL_JUMP)  ; LAB_00536506
    MOV EDI,dword ptr [EBX + 0x1fab4]   ; 00537c59
    PUSH EDI                            ; 00537c5f
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00537c60
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 00537c65
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 00537c68
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x1                            ; 00537c6d
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270 ; 00537c6f
        ;   XREF to: 00526270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270(uint flag_mask)
    ADD ESP,0x4                         ; 00537c74
    PUSH 0x5955df                       ; 00537c77 | = "goggle-on.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 00537c7c
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 00537c81
    PUSH 0x0                            ; 00537c84
    MOV dword ptr [EBX + 0x1fab4],EAX   ; 00537c86
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0 ; 00537c8c
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0(float volume)
    ADD ESP,0x4                         ; 00537c91
    PUSH 0x5955ed                       ; 00537c94 | = "goggle-loop.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 00537c99
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 00537c9e
    MOV dword ptr [EBX + 0x1fab0],EAX   ; 00537ca1
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 00537ca7
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    PUSH 0x0                            ; 00537cac
    PUSH 0x3f800000                     ; 00537cae
    MOV EAX,dword ptr [EBX + 0x1fab0]   ; 00537cb3
    PUSH 0x3f800000                     ; 00537cb9
    PUSH EAX                            ; 00537cbe
    CALL sound_sndmain.cpp_setSfxFade_FUN_00527260 ; 00537cbf
        ;   XREF to: 00527260 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_00527260(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 00537cc4
    MOV ESP,EBP                         ; 00537cc7
    POP EBP                             ; 00537cc9
    POP EDI                             ; 00537cca
    POP ESI                             ; 00537ccb
    POP EBX                             ; 00537ccc
    RET                                 ; 00537ccd

