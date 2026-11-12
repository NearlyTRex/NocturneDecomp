; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController *this_ptr,int desired_state_index,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   desired_state_index
; int              Stack[0xc]:4   force_immediate
;
; XREF[89]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a10d7
;   core_baal.cpp_CBaal_processDamage_FUN_00597af0 at 00597b34
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596f9e
;   core_baal.cpp_FUN_00597700 at 005977d4
;   core_baal.cpp_FUN_00597be0 at 00597c1f
;   core_bird.cpp_FUN_00410030 at 004100f1
;   core_boneguy.cpp_CBaalSkel_processDamage_FUN_0041a810 at 0041a886
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a523
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_004192d0 at 00419342
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 004183e3
;   ... and 79 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005c9cb4
;   TerminatedCString s_CMotionController_setDes_005c9cc7
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20
;   core_motion.cpp_CMotionController_reverseTransition_FUN_004fc010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc0d0
        ;   Label: core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
    PUSH ESI                            ; 004fc0d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fc0d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fc0d6
    TEST ESI,ESI                        ; 004fc0da
    JL 0x004fc110                       ; 004fc0dc
        ;   XREF to: 004fc110 (CONDITIONAL_JUMP)  ; LAB_004fc110
    MOV EAX,dword ptr [EBX]             ; 004fc0de
    CMP ESI,dword ptr [EAX]             ; 004fc0e0
    JGE 0x004fc11a                      ; 004fc0e2
        ;   XREF to: 004fc11a (CONDITIONAL_JUMP)  ; LAB_004fc11a
    CMP ESI,dword ptr [EBX + 0x28]      ; 004fc0e4
        ;   Label: LAB_004fc0e4
    JZ 0x004fc106                       ; 004fc0e7
        ;   XREF to: 004fc106 (CONDITIONAL_JUMP)  ; LAB_004fc106
    CMP dword ptr [EBX + 0x2c],0x0      ; 004fc0e9
    JZ 0x004fc0fc                       ; 004fc0ed
        ;   XREF to: 004fc0fc (CONDITIONAL_JUMP)  ; LAB_004fc0fc
    CMP dword ptr [EBX + 0x20],0x0      ; 004fc0ef
    JZ 0x004fc141                       ; 004fc0f3
        ;   XREF to: 004fc141 (CONDITIONAL_JUMP)  ; LAB_004fc141
    MOV dword ptr [EBX + 0x2c],0x0      ; 004fc0f5
        ;   Label: LAB_004fc0f5
    MOV dword ptr [EBX + 0x24],0x0      ; 004fc0fc
        ;   Label: LAB_004fc0fc
    MOV dword ptr [EBX + 0x28],ESI      ; 004fc103
    CMP dword ptr [ESP + 0x14],0x0      ; 004fc106
        ;   Label: LAB_004fc106
    JNZ 0x004fc14c                      ; 004fc10b
        ;   XREF to: 004fc14c (CONDITIONAL_JUMP)  ; LAB_004fc14c
    POP ESI                             ; 004fc10d
    POP EBX                             ; 004fc10e
    RET                                 ; 004fc10f
    MOV dword ptr [EBX + 0x28],0xffffffff ; 004fc110
        ;   Label: LAB_004fc110
    POP ESI                             ; 004fc117
    POP EBX                             ; 004fc118
    RET                                 ; 004fc119
    PUSH EDI                            ; 004fc11a
        ;   Label: LAB_004fc11a
    MOV ECX,0x5c9cb4                    ; 004fc11b | = "..\\core\\motion.cpp"
    MOV EDI,0x2bd                       ; 004fc120
    PUSH 0x5c9cc7                       ; 004fc125 | = "CMotionController::setDesiredState - ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004fc12a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004fc130 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fc136
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fc13b
    POP EDI                             ; 004fc13e
    JMP 0x004fc0e4                      ; 004fc13f
        ;   XREF to: 004fc0e4 (UNCONDITIONAL_JUMP)  ; LAB_004fc0e4
    PUSH EBX                            ; 004fc141
        ;   Label: LAB_004fc141
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_004fc010 ; 004fc142
        ;   XREF to: 004fc010 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reverseTransition_FUN_004fc010(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fc147
    JMP 0x004fc0f5                      ; 004fc14a
        ;   XREF to: 004fc0f5 (UNCONDITIONAL_JUMP)  ; LAB_004fc0f5
    PUSH EBX                            ; 004fc14c
        ;   Label: LAB_004fc14c
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20 ; 004fc14d
        ;   XREF to: 004fbf20 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fc152
    POP ESI                             ; 004fc155
    POP EBX                             ; 004fc156
    RET                                 ; 004fc157

