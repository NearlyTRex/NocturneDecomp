; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog1_cpp_CDog_processDeathState_FUN_005ac520(CDog *this_ptr,float delta_time)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_charactr.cpp_FUN_0042b550
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac520
        ;   Label: core_dog1.cpp_CDog_processDeathState_FUN_005ac520
    PUSH ESI                            ; 005ac521
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ac522
    PUSH 0x1                            ; 005ac526
    PUSH 0x5                            ; 005ac528
    LEA ESI,[EBX + 0x2b4]               ; 005ac52a
    PUSH ESI                            ; 005ac530
    MOV dword ptr [EBX + 0x342c],0x0    ; 005ac531
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005ac53b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0x10a28]   ; 005ac540
    ADD ESP,0xc                         ; 005ac546
    TEST EDX,EDX                        ; 005ac549
    JZ 0x005ac556                       ; 005ac54b
        ;   XREF to: 005ac556 (CONDITIONAL_JUMP)  ; LAB_005ac556
    CMP dword ptr [EBX + 0x1186c],0x0   ; 005ac54d
    JZ 0x005ac559                       ; 005ac554
        ;   XREF to: 005ac559 (CONDITIONAL_JUMP)  ; LAB_005ac559
    POP ESI                             ; 005ac556
        ;   Label: LAB_005ac556
    POP EBX                             ; 005ac557
    RET                                 ; 005ac558
    PUSH ESI                            ; 005ac559
        ;   Label: LAB_005ac559
    CALL core_motion.cpp_FUN_005035c0   ; 005ac55a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005ac55f
    ADD ESP,0x4                         ; 005ac562
    CMP EAX,0x6                         ; 005ac565
    JNZ 0x005ac556                      ; 005ac568
        ;   XREF to: 005ac556 (CONDITIONAL_JUMP)  ; LAB_005ac556
    PUSH 0x0                            ; 005ac56a
    PUSH 0x0                            ; 005ac56c
    PUSH 0x3f800000                     ; 005ac56e
    PUSH 0x40a00000                     ; 005ac573
    PUSH 0x0                            ; 005ac578
    PUSH 0x3f800000                     ; 005ac57a
    PUSH 0x1                            ; 005ac57f
    PUSH EBX                            ; 005ac581
    MOV dword ptr [EBX + 0x1186c],0x1   ; 005ac582
    CALL core_charactr.cpp_FUN_0042b550 ; 005ac58c
        ;   XREF to: 0042b550 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b550()
    ADD ESP,0x20                        ; 005ac591
    POP ESI                             ; 005ac594
    POP EBX                             ; 005ac595
    RET                                 ; 005ac596

