; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_FUN_004152e0(int param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfc0
;   core_enemy.cpp_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004152e0
        ;   Label: core_biggs.cpp_FUN_004152e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004152e1
    MOV EDX,dword ptr [EBX + 0x281c]    ; 004152e5
    TEST EDX,EDX                        ; 004152eb
    JNZ 0x00415374                      ; 004152ed
        ;   XREF to: 00415374 (CONDITIONAL_JUMP)  ; LAB_00415374
    PUSH EDI                            ; 004152f3
    PUSH ESI                            ; 004152f4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004152f5
    FLD float ptr [EAX + 0x4]           ; 004152f9
    FSUBR float ptr [EBX + 0x25a8]      ; 004152fc
    LEA EDI,[EBX + 0x2b4]               ; 00415302
    FST float ptr [EBX + 0x25a8]        ; 00415308
    FLDZ                                ; 0041530e
    FCOMPP                              ; 00415310
    FNSTSW AX                           ; 00415312
    SAHF                                ; 00415314
    JNC 0x00415376                      ; 00415315
        ;   XREF to: 00415376 (CONDITIONAL_JUMP)  ; LAB_00415376
    PUSH 0x2                            ; 00415317
    PUSH EDX                            ; 00415319
    CALL core_actor.cpp_FUN_0040cfc0    ; 0041531a
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041531f
    MOV ESI,EAX                         ; 00415322
    TEST EAX,EAX                        ; 00415324
    JNZ 0x00415335                      ; 00415326
        ;   XREF to: 00415335 (CONDITIONAL_JUMP)  ; LAB_00415335
    PUSH 0x1                            ; 00415328
    PUSH 0x4                            ; 0041532a
    PUSH EDI                            ; 0041532c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041532d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415332
    CMP ESI,0x1                         ; 00415335
        ;   Label: LAB_00415335
    JNZ 0x0041534c                      ; 00415338
        ;   XREF to: 0041534c (CONDITIONAL_JUMP)  ; LAB_0041534c
    PUSH ESI                            ; 0041533a
    PUSH 0x5                            ; 0041533b
    LEA EAX,[EBX + 0x2b4]               ; 0041533d
    PUSH EAX                            ; 00415343
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00415344
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00415349
    CMP ESI,0x2                         ; 0041534c
        ;   Label: LAB_0041534c
    JNZ 0x00415364                      ; 0041534f
        ;   XREF to: 00415364 (CONDITIONAL_JUMP)  ; LAB_00415364
    PUSH 0x1                            ; 00415351
    PUSH 0x6                            ; 00415353
    LEA EAX,[EBX + 0x2b4]               ; 00415355
    PUSH EAX                            ; 0041535b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041535c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0041535c
    ADD ESP,0xc                         ; 00415361
    MOV ECX,dword ptr [ESP + 0x14]      ; 00415364
        ;   Label: LAB_00415364
    PUSH ECX                            ; 00415368
    PUSH EBX                            ; 00415369
    CALL core_enemy.cpp_FUN_00488890    ; 0041536a
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00488890()
    ADD ESP,0x8                         ; 0041536f
    POP ESI                             ; 00415372
    POP EDI                             ; 00415373
    POP EBX                             ; 00415374
        ;   Label: LAB_00415374
    RET                                 ; 00415375
    PUSH 0x1                            ; 00415376
        ;   Label: LAB_00415376
    PUSH 0x7                            ; 00415378
    PUSH EDI                            ; 0041537a
    MOV dword ptr [EBX + 0x25a8],EDX    ; 0041537b
    JMP 0x0041535c                      ; 00415381
        ;   XREF to: 0041535c (UNCONDITIONAL_JUMP)  ; LAB_0041535c

