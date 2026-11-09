; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadowsc_cpp_FUN_00561330(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_ShotShadowWithLead_005f197c
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_enemy.cpp_FUN_004a0f00
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_shadowsc.cpp_FUN_00561060
;   core_shadowsc.cpp_FUN_005610a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561330
        ;   Label: core_shadowsc.cpp_FUN_00561330
    PUSH EDI                            ; 00561331
    SUB ESP,0xc                         ; 00561332
    MOV EDI,dword ptr [ESP + 0x18]      ; 00561335
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00561339
    CMP dword ptr [EDI + 0xc28c],0x0    ; 0056133d
    JNZ 0x005613fe                      ; 00561344
        ;   XREF to: 005613fe (CONDITIONAL_JUMP)  ; LAB_005613fe
    MOV ECX,dword ptr [EBX + 0x30]      ; 0056134a
    CMP ECX,0x64                        ; 0056134d
    JZ 0x00561404                       ; 00561350
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    CMP ECX,0x65                        ; 00561356
    JZ 0x00561404                       ; 00561359
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    CMP ECX,0x66                        ; 0056135f
    JZ 0x00561404                       ; 00561362
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    CMP ECX,0x67                        ; 00561368
    JZ 0x00561404                       ; 0056136b
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    CMP ECX,0x68                        ; 00561371
    JZ 0x00561404                       ; 00561374
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    CMP ECX,0x69                        ; 0056137a
    JZ 0x00561404                       ; 0056137d
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    CMP ECX,0x6a                        ; 00561383
    JZ 0x00561404                       ; 00561386
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    CMP ECX,0x6b                        ; 0056138c
    JZ 0x00561404                       ; 0056138f
        ;   XREF to: 00561404 (CONDITIONAL_JUMP)  ; LAB_00561404
    PUSH ESI                            ; 00561391
    CMP ECX,0x6c                        ; 00561392
    JZ 0x00561425                       ; 00561395
        ;   XREF to: 00561425 (CONDITIONAL_JUMP)  ; LAB_00561425
    FLD float ptr [EBX + 0x4]           ; 0056139b
        ;   Label: LAB_0056139b
    FSUBR float ptr [EDI + 0x2538]      ; 0056139e
    FST float ptr [EDI + 0x2538]        ; 005613a4
    FLDZ                                ; 005613aa
    FCOMPP                              ; 005613ac
    FNSTSW AX                           ; 005613ae
    SAHF                                ; 005613b0
    JC 0x0056143b                       ; 005613b1
        ;   XREF to: 0056143b (CONDITIONAL_JUMP)  ; LAB_0056143b
    LEA ESI,[EDI + 0x158]               ; 005613b7
    PUSH ESI                            ; 005613bd
    MOV dword ptr [EDI + 0x2538],0x0    ; 005613be
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005613c8
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005613cd
    ADD ESP,0x4                         ; 005613d0
    CMP EAX,0x7                         ; 005613d3
    JZ 0x005613f3                       ; 005613d6
        ;   XREF to: 005613f3 (CONDITIONAL_JUMP)  ; LAB_005613f3
    CMP EAX,0x6                         ; 005613d8
    JZ 0x005613f3                       ; 005613db
        ;   XREF to: 005613f3 (CONDITIONAL_JUMP)  ; LAB_005613f3
    PUSH 0x1                            ; 005613dd
    PUSH 0x6                            ; 005613df
    PUSH ESI                            ; 005613e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005613e2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005613e7
    PUSH EDI                            ; 005613ea
    CALL core_shadowsc.cpp_FUN_005610a0 ; 005613eb
        ;   XREF to: 005610a0 (UNCONDITIONAL_CALL)  ; undefined core_shadowsc.cpp_FUN_005610a0()
    ADD ESP,0x4                         ; 005613f0
    PUSH EBX                            ; 005613f3
        ;   Label: LAB_005613f3
    PUSH EDI                            ; 005613f4
    CALL core_enemy.cpp_FUN_004a0f00    ; 005613f5
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 005613fa
    POP ESI                             ; 005613fd
    ADD ESP,0xc                         ; 005613fe
        ;   Label: LAB_005613fe
    POP EDI                             ; 00561401
    POP EBX                             ; 00561402
    RET                                 ; 00561403
    PUSH 0x5f197c                       ; 00561404 | = "ShotShadowWithLead"
        ;   Label: LAB_00561404
    MOV EDX,dword ptr [0x0061b4d0]      ; 00561409 | DAT_0061b4d0
    PUSH EDX                            ; 0056140f
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00561410
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00561415
    MOV dword ptr [EBX + 0x4],0x0       ; 00561418
    ADD ESP,0xc                         ; 0056141f
    POP EDI                             ; 00561422
    POP EBX                             ; 00561423
    RET                                 ; 00561424
    LEA EAX,[EBX + 0x1c]                ; 00561425
        ;   Label: LAB_00561425
    PUSH EAX                            ; 00561428
    PUSH EDI                            ; 00561429
    LEA ESI,[ESP + 0xc]                 ; 0056142a
    CALL core_actor.cpp_FUN_00408b40    ; 0056142e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00561433
    JMP 0x0056139b                      ; 00561436
        ;   XREF to: 0056139b (UNCONDITIONAL_JUMP)  ; LAB_0056139b
    PUSH EDI                            ; 0056143b
        ;   Label: LAB_0056143b
    CALL core_shadowsc.cpp_FUN_00561060 ; 0056143c
        ;   XREF to: 00561060 (UNCONDITIONAL_CALL)  ; undefined core_shadowsc.cpp_FUN_00561060()
    ADD ESP,0x4                         ; 00561441
    PUSH EBX                            ; 00561444
    PUSH EDI                            ; 00561445
    CALL core_enemy.cpp_FUN_004a0f00    ; 00561446
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 0056144b
    POP ESI                             ; 0056144e
    ADD ESP,0xc                         ; 0056144f
    POP EDI                             ; 00561452
    POP EBX                             ; 00561453
    RET                                 ; 00561454

