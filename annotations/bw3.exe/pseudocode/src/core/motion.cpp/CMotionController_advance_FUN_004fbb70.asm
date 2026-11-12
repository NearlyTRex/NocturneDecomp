; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_advance_FUN_004fbb70(CMotionController *this_ptr,float *delta_time)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined8       Stack[-0xb8]:8  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[38]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0c7e
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596a60
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fbab
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419f39
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417dcb
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00425e56
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 0044334e
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 004453a1
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598a70
;   core_demnfolk.cpp_FUN_00455080 at 00455136
;   ... and 28 more
;
; Referenced Globals:
;   void* switchdataD_004fbb44 = 004fbc80
;   void* switchdataD_004fbb54 = 004fbe5f
;   TerminatedCString s_core_motion_cpp_005c9bd2
;   TerminatedCString s_CMotionController_advanc_005c9be5
;   TerminatedCString s_core_motion_cpp_005c9c2b
;   TerminatedCString s_Invalid_transition_comma_005c9c3e
;   TerminatedCString s_signal_d_005c9c8a
;   undefined4 DAT_005c9c94
;   undefined4 DAT_005c9c9c
;   undefined4 DAT_005c9ca4
;   undefined4 DAT_005c9cac
;   undefined4 DAT_005fba60
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_main.c_FUN_004e4330
;   core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004fc4b0
;   core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004fc680
;   core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_reverseTransition_FUN_004fc010
;   core_motion.cpp_CMotionController_startTransition_FUN_004fc190
;   core_motion.cpp_FUN_004fc850
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbb70
        ;   Label: core_motion.cpp_CMotionController_advance_FUN_004fbb70
    PUSH ESI                            ; 004fbb71
    PUSH EDI                            ; 004fbb72
    PUSH EBP                            ; 004fbb73
    MOV EBP,ESP                         ; 004fbb74
    SUB ESP,0xa8                        ; 004fbb76
    AND ESP,0xfffffff8                  ; 004fbb7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fbb7f
    MOV EDI,dword ptr [EBP + 0x18]      ; 004fbb82
    LEA EAX,[EBX + 0x1c]                ; 004fbb85
    MOV dword ptr [ESP + 0x8c],EAX      ; 004fbb88
    LEA EAX,[EBX + 0x18]                ; 004fbb8f
    MOV dword ptr [ESP + 0x94],EAX      ; 004fbb92
    LEA EAX,[EBX + 0x8]                 ; 004fbb99
    XOR EDX,EDX                         ; 004fbb9c
    MOV dword ptr [ESP + 0x98],EAX      ; 004fbb9e
    LEA EAX,[EBX + 0x4]                 ; 004fbba5
    MOV dword ptr [ESP + 0xa0],EDX      ; 004fbba8
    MOV dword ptr [ESP + 0x90],EAX      ; 004fbbaf
    FLD float ptr [EDI]                 ; 004fbbb6
        ;   Label: LAB_004fbbb6
    FCOMP double ptr [0x005c9c94]       ; 004fbbb8 | DAT_005c9c94
    FNSTSW AX                           ; 004fbbbe
    SAHF                                ; 004fbbc0
    JA 0x004fbbe8                       ; 004fbbc1
        ;   XREF to: 004fbbe8 (CONDITIONAL_JUMP)  ; LAB_004fbbe8
    MOV dword ptr [EDI],0x0             ; 004fbbc3
        ;   Label: LAB_004fbbc3
    XOR EAX,EAX                         ; 004fbbc9
    MOV ESP,EBP                         ; 004fbbcb
    POP EBP                             ; 004fbbcd
    POP EDI                             ; 004fbbce
    POP ESI                             ; 004fbbcf
    POP EBX                             ; 004fbbd0
    RET                                 ; 004fbbd1
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004fbbd2
        ;   Label: LAB_004fbbd2
    INC ESI                             ; 004fbbd9
    MOV dword ptr [ESP + 0xa0],ESI      ; 004fbbda
    CMP ESI,0x5                         ; 004fbbe1
    JL 0x004fbbb6                       ; 004fbbe4
        ;   XREF to: 004fbbb6 (CONDITIONAL_JUMP)  ; LAB_004fbbb6
    JMP 0x004fbbc3                      ; 004fbbe6
        ;   XREF to: 004fbbc3 (UNCONDITIONAL_JUMP)  ; LAB_004fbbc3
    PUSH EBX                            ; 004fbbe8
        ;   Label: LAB_004fbbe8
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20 ; 004fbbe9
        ;   XREF to: 004fbf20 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fbbee
    TEST EAX,EAX                        ; 004fbbf1
    JNZ 0x004fbbd2                      ; 004fbbf3
        ;   XREF to: 004fbbd2 (CONDITIONAL_JUMP)  ; LAB_004fbbd2
    MOV EAX,dword ptr [EDI]             ; 004fbbf5
    FLDZ                                ; 004fbbf7
    MOV dword ptr [ESP + 0x8],EAX       ; 004fbbf9
    XOR ESI,ESI                         ; 004fbbfd
    FLD float ptr [EBX + 0x14]          ; 004fbbff
    FSTP double ptr [ESP]               ; 004fbc02
    FCOMP double ptr [ESP]              ; 004fbc05
    FNSTSW AX                           ; 004fbc08
    SAHF                                ; 004fbc0a
    JA 0x004fbed1                       ; 004fbc0b
        ;   XREF to: 004fbed1 (CONDITIONAL_JUMP)  ; LAB_004fbed1
    CMP dword ptr [EBX + 0x20],0x0      ; 004fbc11
    JZ 0x004fbd67                       ; 004fbc15
        ;   XREF to: 004fbd67 (CONDITIONAL_JUMP)  ; LAB_004fbd67
    FLD float ptr [EBX + 0x14]          ; 004fbc1b
    FDIV float ptr [EBX + 0x10]         ; 004fbc1e
        ;   Label: LAB_004fbc1e
    FSTP float ptr [ESP + 0xc]          ; 004fbc21
    FLD float ptr [ESP + 0xc]           ; 004fbc25
    FLDZ                                ; 004fbc29
    FCOMPP                              ; 004fbc2b
    FNSTSW AX                           ; 004fbc2d
    SAHF                                ; 004fbc2f
    JBE 0x004fbc38                      ; 004fbc30
        ;   XREF to: 004fbc38 (CONDITIONAL_JUMP)  ; LAB_004fbc38
    XOR ECX,ECX                         ; 004fbc32
    MOV dword ptr [ESP + 0xc],ECX       ; 004fbc34
    FLD float ptr [ESP + 0xc]           ; 004fbc38
        ;   Label: LAB_004fbc38
    FCOMP float ptr [ESP + 0x8]         ; 004fbc3c
    FNSTSW AX                           ; 004fbc40
    SAHF                                ; 004fbc42
    JNC 0x004fbc4d                      ; 004fbc43
        ;   XREF to: 004fbc4d (CONDITIONAL_JUMP)  ; LAB_004fbc4d
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fbc45
    MOV dword ptr [ESP + 0x8],EAX       ; 004fbc49
    FLD float ptr [ESP + 0x8]           ; 004fbc4d
        ;   Label: LAB_004fbc4d
    XOR EAX,EAX                         ; 004fbc51
    FLDZ                                ; 004fbc53
    MOV dword ptr [ESP + 0x9c],EAX      ; 004fbc55
    MOV dword ptr [ESP + 0xa4],EAX      ; 004fbc5c
    FCOMPP                              ; 004fbc63
    FNSTSW AX                           ; 004fbc65
    SAHF                                ; 004fbc67
    JNC 0x004fbc80                      ; 004fbc68
        ;   XREF to: 004fbc80 (CONDITIONAL_JUMP)  ; caseD_3
    MOV EAX,dword ptr [EBX + 0xc]       ; 004fbc6a
    SUB EAX,0x3                         ; 004fbc6d
    CMP EAX,0x3                         ; 004fbc70
    JA 0x004fbdf0                       ; 004fbc73
        ;   XREF to: 004fbdf0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4fbb44]  ; 004fbc79 | caseD_3 | caseD_4 | caseD_5
        ;   Label: switchD
    CMP dword ptr [ESP + 0x9c],0x0      ; 004fbc80
        ;   Label: caseD_3
    JZ 0x004fbcac                       ; 004fbc88
        ;   XREF to: 004fbcac (CONDITIONAL_JUMP)  ; LAB_004fbcac
    PUSH dword ptr [EBX + 0x14]         ; 004fbc8a
        ;   Label: LAB_004fbc8a
    MOV ECX,dword ptr [ESP + 0x9c]      ; 004fbc8d
    PUSH dword ptr [ESP + 0xc]          ; 004fbc94
    PUSH ECX                            ; 004fbc98
    MOV ESI,dword ptr [ESP + 0x9c]      ; 004fbc99
    PUSH ESI                            ; 004fbca0
    PUSH EBX                            ; 004fbca1
    CALL core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004fc4b0 ; 004fbca2
        ;   XREF to: 004fc4b0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004fc4b0(CMotionController * this_ptr, int * inout_motion_index, float * inout_frame_number, float delta_time, ...)
    ADD ESP,0x14                        ; 004fbca7
    MOV ESI,EAX                         ; 004fbcaa
    CMP dword ptr [ESP + 0xa4],0x0      ; 004fbcac
        ;   Label: LAB_004fbcac
    JZ 0x004fbce6                       ; 004fbcb4
        ;   XREF to: 004fbce6 (CONDITIONAL_JUMP)  ; LAB_004fbce6
    SUB ESP,0x4                         ; 004fbcb6
    FLD float ptr [EBX + 0x14]          ; 004fbcb9
    FLD1                                ; 004fbcbc
    FSUBRP                              ; 004fbcbe
    MOV EDX,dword ptr [ESP + 0x90]      ; 004fbcc0
    FSTP float ptr [ESP]                ; 004fbcc7
    PUSH dword ptr [ESP + 0xc]          ; 004fbcca
    PUSH EDX                            ; 004fbcce
    MOV ECX,dword ptr [ESP + 0xa0]      ; 004fbccf
    PUSH ECX                            ; 004fbcd6
    PUSH EBX                            ; 004fbcd7
    CALL core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004fc4b0 ; 004fbcd8
        ;   XREF to: 004fc4b0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004fc4b0(CMotionController * this_ptr, int * inout_motion_index, float * inout_frame_number, float delta_time, ...)
    ADD ESP,0x14                        ; 004fbcdd
    TEST ESI,ESI                        ; 004fbce0
    JNZ 0x004fbce6                      ; 004fbce2
        ;   XREF to: 004fbce6 (CONDITIONAL_JUMP)  ; LAB_004fbce6
    MOV ESI,EAX                         ; 004fbce4
    CMP dword ptr [EBX + 0x20],0x0      ; 004fbce6
        ;   Label: LAB_004fbce6
    JZ 0x004fbe1b                       ; 004fbcea
        ;   XREF to: 004fbe1b (CONDITIONAL_JUMP)  ; LAB_004fbe1b
    FLD float ptr [ESP + 0x8]           ; 004fbcf0
    FMUL float ptr [EBX + 0x10]         ; 004fbcf4
    FSUBR float ptr [EBX + 0x14]        ; 004fbcf7
    FST float ptr [EBX + 0x14]          ; 004fbcfa
    FCOMP double ptr [0x005c9cac]       ; 004fbcfd | DAT_005c9cac
    FNSTSW AX                           ; 004fbd03
    SAHF                                ; 004fbd05
    JNC 0x004fbd11                      ; 004fbd06
        ;   XREF to: 004fbd11 (CONDITIONAL_JUMP)  ; LAB_004fbd11
    PUSH EBX                            ; 004fbd08
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480 ; 004fbd09
        ;   XREF to: 004fc480 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fbd0e
    FLD float ptr [EDI]                 ; 004fbd11
        ;   Label: LAB_004fbd11
    FSUB float ptr [ESP + 0x8]          ; 004fbd13
    FSTP float ptr [EDI]                ; 004fbd17
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004fbd19
    TEST ECX,ECX                        ; 004fbd1c
    JZ 0x004fbd2f                       ; 004fbd1e
        ;   XREF to: 004fbd2f (CONDITIONAL_JUMP)  ; LAB_004fbd2f
    MOV EAX,dword ptr [ECX + 0x8]       ; 004fbd20
    CMP EAX,dword ptr [EBX + 0x4]       ; 004fbd23
    JNZ 0x004fbd2f                      ; 004fbd26
        ;   XREF to: 004fbd2f (CONDITIONAL_JUMP)  ; LAB_004fbd2f
    MOV dword ptr [EBX + 0x2c],0x0      ; 004fbd28
    TEST ESI,ESI                        ; 004fbd2f
        ;   Label: LAB_004fbd2f
    JZ 0x004fbbd2                       ; 004fbd31
        ;   XREF to: 004fbbd2 (CONDITIONAL_JUMP)  ; LAB_004fbbd2
    PUSH ESI                            ; 004fbd37
    PUSH 0x5c9c8a                       ; 004fbd38 | = "signal%d"
    LEA EAX,[ESP + 0x18]                ; 004fbd3d
    PUSH EAX                            ; 004fbd41
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004fbd42
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fbd47
    LEA EAX,[ESP + 0x10]                ; 004fbd4a
    PUSH EAX                            ; 004fbd4e
    MOV ECX,dword ptr [0x005fba60]      ; 004fbd4f | DAT_005fba60
    PUSH ECX                            ; 004fbd55
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004fbd56
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004fbd5b
    MOV EAX,ESI                         ; 004fbd5e
    MOV ESP,EBP                         ; 004fbd60
    POP EBP                             ; 004fbd62
    POP EDI                             ; 004fbd63
    POP ESI                             ; 004fbd64
    POP EBX                             ; 004fbd65
    RET                                 ; 004fbd66
    FLD double ptr [0x005c9c9c]         ; 004fbd67 | DAT_005c9c9c
        ;   Label: LAB_004fbd67
    FSUB double ptr [ESP]               ; 004fbd6d
    JMP 0x004fbc1e                      ; 004fbd70
        ;   XREF to: 004fbc1e (UNCONDITIONAL_JUMP)  ; LAB_004fbc1e
    LEA EAX,[ESP + 0x8]                 ; 004fbd75
        ;   Label: caseD_4
    PUSH EAX                            ; 004fbd79
    MOV ECX,dword ptr [EBX + 0x18]      ; 004fbd7a
    PUSH dword ptr [EBX + 0x1c]         ; 004fbd7d
    PUSH ECX                            ; 004fbd80
    PUSH EBX                            ; 004fbd81
    CALL core_motion.cpp_FUN_004fc850   ; 004fbd82
        ;   XREF to: 004fc850 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc850()
    MOV EAX,0x1                         ; 004fbd87
    ADD ESP,0x10                        ; 004fbd8c
    MOV dword ptr [ESP + 0xa4],EAX      ; 004fbd8f
    JMP 0x004fbc80                      ; 004fbd96
        ;   XREF to: 004fbc80 (UNCONDITIONAL_JUMP)  ; caseD_3
    LEA EAX,[ESP + 0x8]                 ; 004fbd9b
        ;   Label: caseD_5
    PUSH EAX                            ; 004fbd9f
    MOV EDX,dword ptr [EBX + 0x4]       ; 004fbda0
    PUSH dword ptr [EBX + 0x8]          ; 004fbda3
    PUSH EDX                            ; 004fbda6
    PUSH EBX                            ; 004fbda7
    CALL core_motion.cpp_FUN_004fc850   ; 004fbda8
        ;   XREF to: 004fc850 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc850()
    ADD ESP,0x10                        ; 004fbdad
    JMP 0x004fbc8a                      ; 004fbdb0
        ;   XREF to: 004fbc8a (UNCONDITIONAL_JUMP)  ; LAB_004fbc8a
    LEA EAX,[ESP + 0x8]                 ; 004fbdb5
        ;   Label: caseD_6
    PUSH EAX                            ; 004fbdb9
    MOV ECX,dword ptr [EBX + 0x4]       ; 004fbdba
    PUSH dword ptr [EBX + 0x8]          ; 004fbdbd
    PUSH ECX                            ; 004fbdc0
    PUSH EBX                            ; 004fbdc1
    CALL core_motion.cpp_FUN_004fc850   ; 004fbdc2
        ;   XREF to: 004fc850 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc850()
    ADD ESP,0x10                        ; 004fbdc7
    LEA EAX,[ESP + 0x8]                 ; 004fbdca
    PUSH EAX                            ; 004fbdce
    MOV ESI,dword ptr [EBX + 0x18]      ; 004fbdcf
    PUSH dword ptr [EBX + 0x1c]         ; 004fbdd2
    PUSH ESI                            ; 004fbdd5
    PUSH EBX                            ; 004fbdd6
    CALL core_motion.cpp_FUN_004fc850   ; 004fbdd7
        ;   XREF to: 004fc850 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc850()
    MOV EAX,0x1                         ; 004fbddc
    ADD ESP,0x10                        ; 004fbde1
    MOV dword ptr [ESP + 0xa4],EAX      ; 004fbde4
    JMP 0x004fbc8a                      ; 004fbdeb
        ;   XREF to: 004fbc8a (UNCONDITIONAL_JUMP)  ; LAB_004fbc8a
    MOV EDX,dword ptr [EBX + 0xc]       ; 004fbdf0
        ;   Label: default
    PUSH EDX                            ; 004fbdf3
    MOV ECX,0x5c9bd2                    ; 004fbdf4 | = "..\\core\\motion.cpp"
    MOV EAX,0x1bd                       ; 004fbdf9
    PUSH 0x5c9be5                       ; 004fbdfe | = "CMotionController::advance: Tweening ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004fbe03 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004fbe09 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fbe0e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004fbe13
    JMP 0x004fbc80                      ; 004fbe16
        ;   XREF to: 004fbc80 (UNCONDITIONAL_JUMP)  ; caseD_3
    FLD float ptr [ESP + 0x8]           ; 004fbe1b
        ;   Label: LAB_004fbe1b
    FMUL float ptr [EBX + 0x10]         ; 004fbe1f
    FADD float ptr [EBX + 0x14]         ; 004fbe22
    FST float ptr [EBX + 0x14]          ; 004fbe25
    FCOMP double ptr [0x005c9ca4]       ; 004fbe28 | DAT_005c9ca4
    FNSTSW AX                           ; 004fbe2e
    SAHF                                ; 004fbe30
    JBE 0x004fbd11                      ; 004fbe31
        ;   XREF to: 004fbd11 (CONDITIONAL_JUMP)  ; LAB_004fbd11
    PUSH EBX                            ; 004fbe37
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_004fc010 ; 004fbe38
        ;   XREF to: 004fc010 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reverseTransition_FUN_004fc010(CMotionController * this_ptr)
    MOV EDX,dword ptr [EBX + 0x24]      ; 004fbe3d
    ADD ESP,0x4                         ; 004fbe40
    TEST EDX,EDX                        ; 004fbe43
    JZ 0x004fbd11                       ; 004fbe45
        ;   XREF to: 004fbd11 (CONDITIONAL_JUMP)  ; LAB_004fbd11
    PUSH EBX                            ; 004fbe4b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004fbe4c
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fbe51
    ADD ESP,0x4                         ; 004fbe54
    MOV dword ptr [EBX + 0x28],EAX      ; 004fbe57
    JMP 0x004fbd11                      ; 004fbe5a
        ;   XREF to: 004fbd11 (UNCONDITIONAL_JUMP)  ; LAB_004fbd11
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004fbe5f
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x4],EAX       ; 004fbe63
    MOV EAX,dword ptr [ESP + 0x80]      ; 004fbe66
    MOV dword ptr [EBX + 0x8],EAX       ; 004fbe6d
    CMP dword ptr [ESP + 0x88],0x0      ; 004fbe70
    JZ 0x004fbd11                       ; 004fbe78
        ;   XREF to: 004fbd11 (CONDITIONAL_JUMP)  ; LAB_004fbd11
    PUSH EBX                            ; 004fbe7e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004fbe7f
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fbe84
    ADD ESP,0x4                         ; 004fbe87
    MOV dword ptr [EBX + 0x28],EAX      ; 004fbe8a
    JMP 0x004fbd11                      ; 004fbe8d
        ;   XREF to: 004fbd11 (UNCONDITIONAL_JUMP)  ; LAB_004fbd11
    LEA EAX,[ESP + 0x74]                ; 004fbe92
        ;   Label: caseD_3
    PUSH EAX                            ; 004fbe96
    PUSH EBX                            ; 004fbe97
    CALL core_motion.cpp_CMotionController_startTransition_FUN_004fc190 ; 004fbe98
        ;   XREF to: 004fc190 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_startTransition_FUN_004fc190(CMotionController * this_ptr, SMotionTransition * transition)
    ADD ESP,0x8                         ; 004fbe9d
    JMP 0x004fbd11                      ; 004fbea0
        ;   XREF to: 004fbd11 (UNCONDITIONAL_JUMP)  ; LAB_004fbd11
    MOV ECX,dword ptr [ESP + 0x78]      ; 004fbea5
        ;   Label: default
    PUSH ECX                            ; 004fbea9
    MOV EAX,0x5c9c2b                    ; 004fbeaa | = "..\\core\\motion.cpp"
    MOV EDX,0x1f6                       ; 004fbeaf
    PUSH 0x5c9c3e                       ; 004fbeb4 | = "Invalid transition command returned b..."
    MOV [0x01d71de0],EAX                ; 004fbeb9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004fbebe | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fbec4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004fbec9
    JMP 0x004fbd11                      ; 004fbecc
        ;   XREF to: 004fbd11 (UNCONDITIONAL_JUMP)  ; LAB_004fbd11
    LEA EAX,[ESP + 0x74]                ; 004fbed1
        ;   Label: LAB_004fbed1
    PUSH EAX                            ; 004fbed5
    LEA EAX,[ESP + 0xc]                 ; 004fbed6
    PUSH EAX                            ; 004fbeda
    MOV ECX,dword ptr [EBX + 0x4]       ; 004fbedb
    PUSH dword ptr [EBX + 0x8]          ; 004fbede
    PUSH ECX                            ; 004fbee1
    PUSH EBX                            ; 004fbee2
    CALL core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004fc680 ; 004fbee3
        ;   XREF to: 004fc680 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004fc680(CMotionController * this_ptr, int motion_index, float current_frame, float * inout_delta_time, ...)
    ADD ESP,0x14                        ; 004fbee8
    MOV ESI,EAX                         ; 004fbeeb
    MOV EAX,dword ptr [ESP + 0x78]      ; 004fbeed
    DEC EAX                             ; 004fbef1
    CMP EAX,0x5                         ; 004fbef2
    JA 0x004fbea5                       ; 004fbef5
        ;   XREF to: 004fbea5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4fbb54]  ; 004fbef7 | caseD_2 | caseD_6 | switchdataD_004fbb54
        ;   Label: switchD

