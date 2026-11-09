; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_00503470(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_005030c0 at 00503139
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 at 0050369d
;
; Referenced Globals:
;   void* switchdataD_00503450 = 005034e2
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980
;   core_motion.cpp_CMotionController_startTransition_FUN_005036e0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503470
        ;   Label: core_motion.cpp_CMotionController_findAndStartTransition_FUN_00503470
    PUSH ESI                            ; 00503471
    PUSH EDI                            ; 00503472
    PUSH EBP                            ; 00503473
    MOV EBX,dword ptr [ESP + 0x14]      ; 00503474
    PUSH EBX                            ; 00503478
    CALL core_motion.cpp_FUN_005035c0   ; 00503479
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0050347e
    MOV EDX,dword ptr [EBX + 0x28]      ; 00503481
    MOV ESI,EAX                         ; 00503484
    TEST EDX,EDX                        ; 00503486
    JL 0x00503548                       ; 00503488
        ;   XREF to: 00503548 (CONDITIONAL_JUMP)  ; LAB_00503548
    CMP EDX,dword ptr [EAX + 0x24]      ; 0050348e
    JZ 0x00503548                       ; 00503491
        ;   XREF to: 00503548 (CONDITIONAL_JUMP)  ; LAB_00503548
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00503497
    TEST EDI,EDI                        ; 0050349a
    JNZ 0x00503512                      ; 0050349c
        ;   XREF to: 00503512 (CONDITIONAL_JUMP)  ; LAB_00503512
    MOV EAX,dword ptr [ESI + 0x68]      ; 005034a2
        ;   Label: LAB_005034a2
    XOR EDX,EDX                         ; 005034a5
    XOR EDI,EDI                         ; 005034a7
    TEST EAX,EAX                        ; 005034a9
    JLE 0x005034b9                      ; 005034ab
        ;   XREF to: 005034b9 (CONDITIONAL_JUMP)  ; LAB_005034b9
    MOV EAX,dword ptr [ESI + 0x6c]      ; 005034ad
    MOV EBP,dword ptr [EBX + 0x28]      ; 005034b0
        ;   Label: LAB_005034b0
    CMP EBP,dword ptr [EAX]             ; 005034b3
    JNZ 0x0050351d                      ; 005034b5
        ;   XREF to: 0050351d (CONDITIONAL_JUMP)  ; LAB_0050351d
    MOV EDI,EAX                         ; 005034b7
    TEST EDI,EDI                        ; 005034b9
        ;   Label: LAB_005034b9
    JZ 0x00503516                       ; 005034bb
        ;   XREF to: 00503516 (CONDITIONAL_JUMP)  ; default
    CMP EDI,dword ptr [EBX + 0x2c]      ; 005034bd
    JZ 0x00503516                       ; 005034c0
        ;   XREF to: 00503516 (CONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 005034c2
    MOV dword ptr [EBX + 0x2c],0x0      ; 005034c3
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0 ; 005034ca
        ;   XREF to: 005039e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EDI + 0x4]       ; 005034cf
    DEC EAX                             ; 005034d2
    ADD ESP,0x4                         ; 005034d3
    CMP EAX,0x5                         ; 005034d6
    JA 0x00503516                       ; 005034d9
        ;   XREF to: 00503516 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x503450]  ; 005034db | caseD_1 | caseD_2 | caseD_6
        ;   Label: switchD
    MOV EDX,dword ptr [EDI + 0x8]       ; 005034e2
        ;   Label: caseD_1
    PUSH dword ptr [EDI + 0xc]          ; 005034e5
    PUSH EDX                            ; 005034e8
    PUSH EBX                            ; 005034e9
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980 ; 005034ea
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    MOV ECX,dword ptr [EDI + 0x14]      ; 005034ef
    ADD ESP,0xc                         ; 005034f2
    TEST ECX,ECX                        ; 005034f5
    JZ 0x00503508                       ; 005034f7
        ;   XREF to: 00503508 (CONDITIONAL_JUMP)  ; LAB_00503508
    PUSH EBX                            ; 005034f9
    CALL core_motion.cpp_FUN_005035c0   ; 005034fa
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005034ff
    ADD ESP,0x4                         ; 00503502
    MOV dword ptr [EBX + 0x28],EAX      ; 00503505
    MOV EAX,0x1                         ; 00503508
        ;   Label: LAB_00503508
    POP EBP                             ; 0050350d
    POP EDI                             ; 0050350e
    POP ESI                             ; 0050350f
    POP EBX                             ; 00503510
    RET                                 ; 00503511
    CMP EDX,dword ptr [EDI]             ; 00503512
        ;   Label: LAB_00503512
    JNZ 0x005034a2                      ; 00503514
        ;   XREF to: 005034a2 (CONDITIONAL_JUMP)  ; LAB_005034a2
    XOR EAX,EAX                         ; 00503516
        ;   Label: default
    POP EBP                             ; 00503518
    POP EDI                             ; 00503519
    POP ESI                             ; 0050351a
    POP EBX                             ; 0050351b
    RET                                 ; 0050351c
    INC EDX                             ; 0050351d
        ;   Label: LAB_0050351d
    MOV ECX,dword ptr [ESI + 0x68]      ; 0050351e
    ADD EAX,0x18                        ; 00503521
    CMP EDX,ECX                         ; 00503524
    JL 0x005034b0                       ; 00503526
        ;   XREF to: 005034b0 (CONDITIONAL_JUMP)  ; LAB_005034b0
    JMP 0x005034b9                      ; 00503528
        ;   XREF to: 005034b9 (UNCONDITIONAL_JUMP)  ; LAB_005034b9
    MOV dword ptr [EBX + 0x2c],EDI      ; 0050352a
        ;   Label: caseD_2
    XOR EAX,EAX                         ; 0050352d
    POP EBP                             ; 0050352f
    POP EDI                             ; 00503530
    POP ESI                             ; 00503531
    POP EBX                             ; 00503532
    RET                                 ; 00503533
    PUSH EDI                            ; 00503534
        ;   Label: caseD_3
    PUSH EBX                            ; 00503535
    MOV dword ptr [EBX + 0x2c],EDI      ; 00503536
    CALL core_motion.cpp_CMotionController_startTransition_FUN_005036e0 ; 00503539
        ;   XREF to: 005036e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_startTransition_FUN_005036e0(CMotionController * this_ptr, SMotionTransition * transition)
    ADD ESP,0x8                         ; 0050353e
    XOR EAX,EAX                         ; 00503541
    POP EBP                             ; 00503543
    POP EDI                             ; 00503544
    POP ESI                             ; 00503545
    POP EBX                             ; 00503546
    RET                                 ; 00503547
    MOV dword ptr [EBX + 0x2c],0x0      ; 00503548
        ;   Label: LAB_00503548
    XOR EAX,EAX                         ; 0050354f
    POP EBP                             ; 00503551
    POP EDI                             ; 00503552
    POP ESI                             ; 00503553
    POP EBX                             ; 00503554
    RET                                 ; 00503555

