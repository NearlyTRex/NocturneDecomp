; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_npc.cpp_CNPC_process_FUN_005448b0(CNPC * this_ptr, float delta_time)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
;
; XREF[1]:
;   core_hpriest.cpp_FUN_004f7c00 at 004f7c0a
;
; Referenced Globals:
;   TerminatedCString s_STAND_0063e31f
;   TerminatedCString s_s_confused_while_walking_0063e325
;   TerminatedCString s_RUN_0063e34f
;   TerminatedCString s_WALK_0063e353
;   TerminatedCString s_STAND_0063e358
;   double DOUBLE_0063e364 = 3.14159265350000
;   double DOUBLE_0063e36c = 0.5
;   double DOUBLE_0063e374 = 32
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   CConsole g_ConsolePtr
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042ea40
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_gore.cpp_FUN_004ede30
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005448b0
        ;   Label: core_npc.cpp_CNPC_process_FUN_005448b0
    PUSH ESI                            ; 005448b1
    PUSH EDI                            ; 005448b2
    PUSH EBP                            ; 005448b3
    MOV EBP,ESP                         ; 005448b4
    SUB ESP,0x48                        ; 005448b6
    AND ESP,0xfffffff8                  ; 005448b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005448bc
    PUSH dword ptr [EBP + 0x18]         ; 005448bf
    PUSH EBX                            ; 005448c2
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 005448c3
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005448c8
    TEST EAX,EAX                        ; 005448cb
    JNZ 0x005448d6                      ; 005448cd
        ;   XREF to: 005448d6 (CONDITIONAL_JUMP)  ; LAB_005448d6
    MOV ESP,EBP                         ; 005448cf
    POP EBP                             ; 005448d1
    POP EDI                             ; 005448d2
    POP ESI                             ; 005448d3
    POP EBX                             ; 005448d4
    RET                                 ; 005448d5
    PUSH dword ptr [EBP + 0x18]         ; 005448d6
        ;   Label: LAB_005448d6
    PUSH EBX                            ; 005448d9
    CALL core_charactr.cpp_CCharacter_FUN_0042ea40 ; 005448da
        ;   XREF to: 0042ea40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ea40(CCharacter * this_ptr)
    LEA EAX,[EBX + 0x23ac]              ; 005448df
    MOV dword ptr [EAX + 0x8],0x0       ; 005448e5
    ADD ESP,0x8                         ; 005448ec
    MOV EDX,dword ptr [EAX + 0x8]       ; 005448ef
    MOV dword ptr [EAX + 0x4],EDX       ; 005448f2
    MOV EDX,dword ptr [EAX + 0x4]       ; 005448f5
    MOV dword ptr [EAX],EDX             ; 005448f8
    MOV EAX,dword ptr [EBP + 0x18]      ; 005448fa
    LEA ESI,[EBX + 0x158]               ; 005448fd
    MOV dword ptr [ESP],EAX             ; 00544903
    FLD float ptr [ESP]                 ; 00544906
        ;   Label: LAB_00544906
    FLDZ                                ; 00544909
    FCOMPP                              ; 0054490b
    FNSTSW AX                           ; 0054490d
    SAHF                                ; 0054490f
    JNC 0x0054492a                      ; 00544910
        ;   XREF to: 0054492a (CONDITIONAL_JUMP)  ; LAB_0054492a
    MOV EAX,ESP                         ; 00544912
    PUSH EAX                            ; 00544914
    PUSH ESI                            ; 00544915
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00544916
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 0054491b
    PUSH EAX                            ; 0054491e
    PUSH EBX                            ; 0054491f
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00544920
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00544925
    JMP 0x00544906                      ; 00544928
        ;   XREF to: 00544906 (UNCONDITIONAL_JUMP)  ; LAB_00544906
    PUSH EBX                            ; 0054492a
        ;   Label: LAB_0054492a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054492b
    CALL dword ptr [EAX + 0x120]        ; 00544931
    ADD ESP,0x4                         ; 00544937
    CMP EAX,0x1                         ; 0054493a
    JLE 0x00544995                      ; 0054493d
        ;   XREF to: 00544995 (CONDITIONAL_JUMP)  ; LAB_00544995
    CMP dword ptr [EBX + 0x70],0x1      ; 0054493f
    JNZ 0x00544995                      ; 00544943
        ;   XREF to: 00544995 (CONDITIONAL_JUMP)  ; LAB_00544995
    MOV ECX,dword ptr [EBX + 0x1f704]   ; 00544945
    TEST ECX,ECX                        ; 0054494b
    JNZ 0x00544995                      ; 0054494d
        ;   XREF to: 00544995 (CONDITIONAL_JUMP)  ; LAB_00544995
    MOV EDI,dword ptr [EBX + 0xdc]      ; 0054494f
    TEST EDI,EDI                        ; 00544955
    JNZ 0x00544995                      ; 00544957
        ;   XREF to: 00544995 (CONDITIONAL_JUMP)  ; LAB_00544995
    PUSH ECX                            ; 00544959
    LEA EAX,[ESP + 0x14]                ; 0054495a
    PUSH EAX                            ; 0054495e
    PUSH ESI                            ; 0054495f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00544960
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00544965
    PUSH EAX                            ; 00544968
    LEA EAX,[ESP + 0x2c]                ; 00544969
    PUSH EAX                            ; 0054496d
    PUSH EBX                            ; 0054496e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0054496f
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00544974
    PUSH EDI                            ; 00544977
    LEA EAX,[ESP + 0x2c]                ; 00544978
    PUSH EAX                            ; 0054497c
    MOV EAX,[0x0067b9a0]                ; 0054497d | g_CGoreInstance | g_CGorePtr
    PUSH EAX                            ; 00544982 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004ede30     ; 00544983
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ede30()
    ADD ESP,0xc                         ; 00544988
    MOV dword ptr [EBX + 0x1f704],0x1   ; 0054498b
    FLD float ptr [EBP + 0x18]          ; 00544995
        ;   Label: LAB_00544995
    FMUL double ptr [0x0063e364]        ; 00544998 | DOUBLE_0063e364
    FMUL double ptr [0x0063e36c]        ; 0054499e | DOUBLE_0063e36c
    PUSH dword ptr [EBP + 0x18]         ; 005449a4
    MOV EAX,dword ptr [EBX + 0x23b4]    ; 005449a7
    MOV dword ptr [EBX + 0x2434],EAX    ; 005449ad
    PUSH EBX                            ; 005449b3
    FSTP float ptr [EBX + 0x2438]       ; 005449b4
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 005449ba
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005449bf
    TEST EAX,EAX                        ; 005449c2
    JZ 0x00544a0c                       ; 005449c4
        ;   XREF to: 00544a0c (CONDITIONAL_JUMP)  ; LAB_00544a0c
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005449c6
    CMP EAX,0x2                         ; 005449cc
    JNC 0x00544b55                      ; 005449cf
        ;   XREF to: 00544b55 (CONDITIONAL_JUMP)  ; LAB_00544b55
    CMP EAX,0x1                         ; 005449d5
    JNZ 0x00544b62                      ; 005449d8
        ;   XREF to: 00544b62 (CONDITIONAL_JUMP)  ; LAB_00544b62
    PUSH 0x1                            ; 005449de
        ;   Label: LAB_005449de
    PUSH 0x63e353                       ; 005449e0 | = "WALK"
    LEA EAX,[EBX + 0x158]               ; 005449e5
        ;   Label: LAB_005449e5
    PUSH EAX                            ; 005449eb
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 ; 005449ec
        ;   XREF to: 0052db90 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 005449f1
        ;   Label: LAB_005449f1
    LEA EAX,[EBX + 0x23ac]              ; 005449f4
    MOV dword ptr [EAX + 0x8],0x0       ; 005449fa
    MOV EDX,dword ptr [EAX + 0x8]       ; 00544a01
    MOV dword ptr [EAX + 0x4],EDX       ; 00544a04
    MOV EDX,dword ptr [EAX + 0x4]       ; 00544a07
    MOV dword ptr [EAX],EDX             ; 00544a0a
    FLD float ptr [EBP + 0x18]          ; 00544a0c
        ;   Label: LAB_00544a0c
    FMUL double ptr [0x0063e374]        ; 00544a0f | DOUBLE_0063e374
    FLD float ptr [EBX + 0x242c]        ; 00544a15
    FXCH                                ; 00544a1b
    FSUBR ST0,ST1                       ; 00544a1d
    LEA EDX,[EBX + 0x2428]              ; 00544a1f
    FSTP ST1                            ; 00544a25
    FSTP float ptr [EBX + 0x242c]       ; 00544a27
    FLD float ptr [EDX]                 ; 00544a2d
    FMUL float ptr [EBP + 0x18]         ; 00544a2f
    FSTP float ptr [ESP + 0x1c]         ; 00544a32
    FLD float ptr [EDX + 0x4]           ; 00544a36
    FMUL float ptr [EBP + 0x18]         ; 00544a39
    LEA ESI,[EBX + 0x241c]              ; 00544a3c
    FSTP float ptr [ESP + 0x20]         ; 00544a42
    FLD float ptr [EDX + 0x8]           ; 00544a46
    FMUL float ptr [EBP + 0x18]         ; 00544a49
    LEA EAX,[EBX + 0x23ac]              ; 00544a4c
    FLD float ptr [ESP + 0x1c]          ; 00544a52
    FXCH                                ; 00544a56
    FSTP float ptr [ESP + 0x24]         ; 00544a58
    FADD float ptr [ESI]                ; 00544a5c
    FLD float ptr [ESP + 0x20]          ; 00544a5e
    FXCH                                ; 00544a62
    FSTP float ptr [ESP + 0x34]         ; 00544a64
    FADD float ptr [ESI + 0x4]          ; 00544a68
    FLD float ptr [ESP + 0x24]          ; 00544a6b
    FXCH                                ; 00544a6f
    FSTP float ptr [ESP + 0x38]         ; 00544a71
    FADD float ptr [ESI + 0x8]          ; 00544a75
    FLD float ptr [ESP + 0x34]          ; 00544a78
    FXCH                                ; 00544a7c
    FSTP float ptr [ESP + 0x3c]         ; 00544a7e
    FADD float ptr [EAX]                ; 00544a82
    FLD float ptr [ESP + 0x38]          ; 00544a84
    FXCH                                ; 00544a88
    FSTP float ptr [ESP + 0x4]          ; 00544a8a
    FADD float ptr [EAX + 0x4]          ; 00544a8e
    FLD float ptr [ESP + 0x3c]          ; 00544a91
    FXCH                                ; 00544a95
    FSTP float ptr [ESP + 0x8]          ; 00544a97
    FADD float ptr [EAX + 0x8]          ; 00544a9b
    FSTP float ptr [ESP + 0xc]          ; 00544a9e
    MOV dword ptr [ESI + 0x8],0x0       ; 00544aa2
    MOV EDX,dword ptr [ESI + 0x8]       ; 00544aa9
    MOV dword ptr [ESI + 0x4],EDX       ; 00544aac
    MOV EDX,dword ptr [ESI + 0x4]       ; 00544aaf
    MOV dword ptr [ESI],EDX             ; 00544ab2
    MOV dword ptr [EAX + 0x8],0x0       ; 00544ab4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00544abb
    MOV dword ptr [EAX + 0x4],EDX       ; 00544abe
    MOV EDX,dword ptr [EAX + 0x4]       ; 00544ac1
    MOV dword ptr [EAX],EDX             ; 00544ac4
    LEA EAX,[ESP + 0x4]                 ; 00544ac6
    PUSH EAX                            ; 00544aca
    PUSH EBX                            ; 00544acb
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 00544acc
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00544ad1
    PUSH EBX                            ; 00544ad4
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 00544ad5
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00544ada
    LEA EAX,[EBX + 0x158]               ; 00544add
    PUSH EAX                            ; 00544ae3
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00544ae4
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544ae9
    PUSH dword ptr [EBP + 0x18]         ; 00544aec
    PUSH EBX                            ; 00544aef
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00544af0
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00544af5
    MOV ESP,EBP                         ; 00544af8
    POP EBP                             ; 00544afa
    POP EDI                             ; 00544afb
    POP ESI                             ; 00544afc
    POP EBX                             ; 00544afd
    RET                                 ; 00544afe
    PUSH 0x1                            ; 00544aff
        ;   Label: LAB_00544aff
    PUSH 0x63e31f                       ; 00544b01 | = "STAND"
    PUSH ESI                            ; 00544b06
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 ; 00544b07
        ;   XREF to: 0052db90 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 00544b0c
    PUSH EBX                            ; 00544b0f
    PUSH 0x63e325                       ; 00544b10 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 00544b15 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 00544b1b | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00544b1c
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x005449f1                      ; 00544b21
        ;   XREF to: 005449f1 (UNCONDITIONAL_JUMP)  ; LAB_005449f1
    PUSH 0x0                            ; 00544b26
        ;   Label: LAB_00544b26
    PUSH 0x63e34f                       ; 00544b28 | = "RUN"
    PUSH ESI                            ; 00544b2d
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 00544b2e
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00544b33
    PUSH EAX                            ; 00544b36
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 00544b37
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 00544b3c
    TEST EAX,EAX                        ; 00544b3f
    JL 0x005449de                       ; 00544b41
        ;   XREF to: 005449de (CONDITIONAL_JUMP)  ; LAB_005449de
    PUSH 0x1                            ; 00544b47
    PUSH EAX                            ; 00544b49
    PUSH ESI                            ; 00544b4a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00544b4b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    JMP 0x005449f1                      ; 00544b50
        ;   XREF to: 005449f1 (UNCONDITIONAL_JUMP)  ; LAB_005449f1
    LEA ESI,[EBX + 0x158]               ; 00544b55
        ;   Label: LAB_00544b55
    JBE 0x00544b26                      ; 00544b5b
        ;   XREF to: 00544b26 (CONDITIONAL_JUMP)  ; LAB_00544b26
    CMP EAX,0x3                         ; 00544b5d
    JZ 0x00544aff                       ; 00544b60
        ;   XREF to: 00544aff (CONDITIONAL_JUMP)  ; LAB_00544aff
    PUSH 0x1                            ; 00544b62
        ;   Label: LAB_00544b62
    PUSH 0x63e358                       ; 00544b64 | = "STAND"
    JMP 0x005449e5                      ; 00544b69
        ;   XREF to: 005449e5 (UNCONDITIONAL_JUMP)  ; LAB_005449e5

