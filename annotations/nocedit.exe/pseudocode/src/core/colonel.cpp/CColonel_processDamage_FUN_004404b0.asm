; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_processDamage_FUN_004404b0(CColonel *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   float FLOAT_0065bd48 = 0.5
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   undefined4 DAT_02d81c6c
;   undefined4 DAT_02d81cc8
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004404b0
        ;   Label: core_colonel.cpp_CColonel_processDamage_FUN_004404b0
    PUSH ESI                            ; 004404b1
    PUSH EDI                            ; 004404b2
    PUSH EBP                            ; 004404b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004404b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004404b8
    TEST dword ptr [EBX + 0xbe24],0x7fffffff ; 004404bc
    JNZ 0x00440534                      ; 004404c6
        ;   XREF to: 00440534 (CONDITIONAL_JUMP)  ; LAB_00440534
    MOV EAX,[0x0067b654]                ; 004404c8 | g_CGamePtr
        ;   Label: LAB_004404c8
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004404cd | DAT_02d81c6c
    JZ 0x004404dd                       ; 004404d4
        ;   XREF to: 004404dd (CONDITIONAL_JUMP)  ; LAB_004404dd
    MOV dword ptr [ESI + 0x4],0x0       ; 004404d6
    MOV EAX,[0x0067b654]                ; 004404dd | g_CGamePtr
        ;   Label: LAB_004404dd
    MOV EDI,dword ptr [EAX + 0x22c]     ; 004404e2 | DAT_02d81cc8
    TEST EDI,EDI                        ; 004404e8
    JZ 0x0044053d                       ; 004404ea
        ;   XREF to: 0044053d (CONDITIONAL_JUMP)  ; LAB_0044053d
    MOV EAX,[0x0065bd48]                ; 004404ec | FLOAT_0065bd48
        ;   Label: LAB_004404ec
    MOV dword ptr [EBX + 0xbe24],EAX    ; 004404f1
    FLD float ptr [ESI + 0x4]           ; 004404f7
    FSUBR float ptr [EBX + 0x243c]      ; 004404fa
    LEA EDI,[EBX + 0x158]               ; 00440500
    FST float ptr [EBX + 0x243c]        ; 00440506
    FLDZ                                ; 0044050c
    FCOMPP                              ; 0044050e
    FNSTSW AX                           ; 00440510
    SAHF                                ; 00440512
    JNC 0x00440542                      ; 00440513
        ;   XREF to: 00440542 (CONDITIONAL_JUMP)  ; LAB_00440542
    FLD float ptr [ESI + 0x4]           ; 00440515
    FLDZ                                ; 00440518
    FCOMPP                              ; 0044051a
    FNSTSW AX                           ; 0044051c
    SAHF                                ; 0044051e
    JC 0x004405ad                       ; 0044051f
        ;   XREF to: 004405ad (CONDITIONAL_JUMP)  ; LAB_004405ad
    PUSH ESI                            ; 00440525
        ;   Label: LAB_00440525
    PUSH EBX                            ; 00440526
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 00440527
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0044052c
    POP EBP                             ; 0044052f
    POP EDI                             ; 00440530
    POP ESI                             ; 00440531
    POP EBX                             ; 00440532
    RET                                 ; 00440533
    MOV dword ptr [ESI + 0x4],0x0       ; 00440534
        ;   Label: LAB_00440534
    JMP 0x004404c8                      ; 0044053b
        ;   XREF to: 004404c8 (UNCONDITIONAL_JUMP)  ; LAB_004404c8
    MOV dword ptr [ESI + 0x4],EDI       ; 0044053d
        ;   Label: LAB_0044053d
    JMP 0x004404ec                      ; 00440540
        ;   XREF to: 004404ec (UNCONDITIONAL_JUMP)  ; LAB_004404ec
    PUSH EDI                            ; 00440542
        ;   Label: LAB_00440542
    MOV dword ptr [EBX + 0x243c],0x0    ; 00440543
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0044054d
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00440552
    ADD ESP,0x4                         ; 00440555
    CMP EAX,0x6                         ; 00440558
    JZ 0x00440525                       ; 0044055b
        ;   XREF to: 00440525 (CONDITIONAL_JUMP)  ; LAB_00440525
    PUSH EDI                            ; 0044055d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0044055e
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00440563
    ADD ESP,0x4                         ; 00440566
    CMP EAX,0x5                         ; 00440569
    JZ 0x00440525                       ; 0044056c
        ;   XREF to: 00440525 (CONDITIONAL_JUMP)  ; LAB_00440525
    PUSH 0x1                            ; 0044056e
    PUSH 0x5                            ; 00440570
    PUSH EDI                            ; 00440572
    MOV dword ptr [EBX + 0x2598],0x0    ; 00440573
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0044057d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00440582
    PUSH 0x0                            ; 00440585
    PUSH 0x42480000                     ; 00440587
    PUSH 0x32                           ; 0044058c
    PUSH EBX                            ; 0044058e
    MOV EBP,dword ptr [0x0067b9a0]      ; 0044058f | g_CGorePtr
    PUSH EBP                            ; 00440595 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030 ; 00440596
        ;   XREF to: 004ee030 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 0044059b
    PUSH ESI                            ; 0044059e
    PUSH EBX                            ; 0044059f
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 004405a0
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004405a5
    POP EBP                             ; 004405a8
    POP EDI                             ; 004405a9
    POP ESI                             ; 004405aa
    POP EBX                             ; 004405ab
    RET                                 ; 004405ac
    PUSH 0x1                            ; 004405ad
        ;   Label: LAB_004405ad
    PUSH 0x4                            ; 004405af
    PUSH EDI                            ; 004405b1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004405b2
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004405b7
    PUSH ESI                            ; 004405ba
    PUSH EBX                            ; 004405bb
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 004405bc
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004405c1
    POP EBP                             ; 004405c4
    POP EDI                             ; 004405c5
    POP ESI                             ; 004405c6
    POP EBX                             ; 004405c7
    RET                                 ; 004405c8

