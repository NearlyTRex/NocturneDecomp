; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00431470(int param_1,CDemonActor *param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_shadow.cpp_FUN_00544fd0 at 00544ff4
;   core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_0057edf0 at 0057ee1d
;   unkafter_tawiscar.cpp_FUN_005956d0 at 005956fd
;
; Referenced Globals:
;   undefined4 s_STAND_005b8495+1
;   TerminatedCString s_STAND_005b849c
;   TerminatedCString s_CCharacter_005b84a2
;   undefined4 DAT_005b84ae
;   undefined4 DAT_005b84b6
;   undefined4 DAT_005b84ba
;
; Called Functions:
;   core_actor.cpp_FUN_0040c790
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160
;   core_motion.cpp_FUN_004fba50
;   core_motion.cpp_FUN_004fc310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431470
        ;   Label: core_charactr.cpp_FUN_00431470
    PUSH EDI                            ; 00431471
    SUB ESP,0x10                        ; 00431472
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00431475
    MOV EDI,dword ptr [ESP + 0x20]      ; 00431479
    TEST EDI,EDI                        ; 0043147d
    JNZ 0x00431515                      ; 0043147f
        ;   XREF to: 00431515 (CONDITIONAL_JUMP)  ; LAB_00431515
    PUSH ESI                            ; 00431485
    CMP dword ptr [EBX + 0x273c],0x0    ; 00431486
    JZ 0x004314d5                       ; 0043148d
        ;   XREF to: 004314d5 (CONDITIONAL_JUMP)  ; LAB_004314d5
    CMP dword ptr [EBX + 0x2704],0x0    ; 0043148f
    JZ 0x004314d5                       ; 00431496
        ;   XREF to: 004314d5 (CONDITIONAL_JUMP)  ; LAB_004314d5
    LEA ESI,[EBX + 0x158]               ; 00431498
    LEA EAX,[EBX + 0x24a8]              ; 0043149e
    CMP byte ptr [EAX],0x0              ; 004314a4
    JZ 0x004314d5                       ; 004314a7
        ;   XREF to: 004314d5 (CONDITIONAL_JUMP)  ; LAB_004314d5
    PUSH EDI                            ; 004314a9
    PUSH 0x5b8496                       ; 004314aa | s_STAND_005b8495+1
    PUSH ESI                            ; 004314af
    CALL core_motion.cpp_FUN_004fc310   ; 004314b0
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004314b5
    PUSH EAX                            ; 004314b8
    CALL core_motion.cpp_FUN_004fba50   ; 004314b9
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004314be
    TEST EAX,EAX                        ; 004314c1
    JL 0x004314d5                       ; 004314c3
        ;   XREF to: 004314d5 (CONDITIONAL_JUMP)  ; LAB_004314d5
    PUSH 0x1                            ; 004314c5
    PUSH 0x5b849c                       ; 004314c7 | = "STAND"
    PUSH ESI                            ; 004314cc
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 004314cd
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004314d2
    PUSH 0xbf800000                     ; 004314d5
        ;   Label: LAB_004314d5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004314da
    PUSH EBX                            ; 004314e0
    MOV dword ptr [EBX + 0x273c],0x0    ; 004314e1
    CALL dword ptr [EAX + 0x138]        ; 004314eb
    ADD ESP,0x8                         ; 004314f1
    POP ESI                             ; 004314f4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004314f5
        ;   Label: LAB_004314f5
    MOV dword ptr [EBX + 0x2704],EDI    ; 004314f9
    MOV dword ptr [EBX + 0x2708],EAX    ; 004314ff
    MOV EAX,dword ptr [ESP + 0x28]      ; 00431505
    MOV dword ptr [EBX + 0x270c],EAX    ; 00431509
    ADD ESP,0x10                        ; 0043150f
    POP EDI                             ; 00431512
    POP EBX                             ; 00431513
    RET                                 ; 00431514
    PUSH 0x5b84a2                       ; 00431515 | = "CCharacter"
        ;   Label: LAB_00431515
    PUSH EDI                            ; 0043151a
    MOV dword ptr [EBX + 0x273c],0x1    ; 0043151b
    CALL core_actor.cpp_FUN_0040c790    ; 00431525
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0043152a
    TEST EAX,EAX                        ; 0043152d
    JNZ 0x0043158b                      ; 0043152f
        ;   XREF to: 0043158b (CONDITIONAL_JUMP)  ; LAB_0043158b
    LEA EDX,[EBX + 0x20]                ; 00431531
    LEA EAX,[EDI + 0x20]                ; 00431534
    FLD float ptr [EDX]                 ; 00431537
    FSUB float ptr [EAX]                ; 00431539
    FMUL ST0                            ; 0043153b
    FLD float ptr [EDX + 0x4]           ; 0043153d
    FSUB float ptr [EAX + 0x4]          ; 00431540
    FMUL ST0                            ; 00431543
    FLD float ptr [EDX + 0x8]           ; 00431545
    FXCH                                ; 00431548
    FADDP ST2,ST0                       ; 0043154a
    FSUB float ptr [EAX + 0x8]          ; 0043154c
    FMUL ST0                            ; 0043154f
    FADDP                               ; 00431551
    FSQRT                               ; 00431553
    FMUL double ptr [0x005b84ae]        ; 00431555 | DAT_005b84ae
    FST float ptr [ESP + 0x8]           ; 0043155b
    FCOMP float ptr [0x005b84b6]        ; 0043155f | DAT_005b84b6
    FNSTSW AX                           ; 00431565
    SAHF                                ; 00431567
    JNC 0x004315a5                      ; 00431568
        ;   XREF to: 004315a5 (CONDITIONAL_JUMP)  ; LAB_004315a5
    MOV dword ptr [ESP + 0x8],0x40a00000 ; 0043156a
    PUSH dword ptr [ESP + 0x8]          ; 00431572
        ;   Label: LAB_00431572
    MOV EAX,dword ptr [EBX + 0x154]     ; 00431576
    PUSH EBX                            ; 0043157c
    CALL dword ptr [EAX + 0x138]        ; 0043157d
    ADD ESP,0x8                         ; 00431583
    JMP 0x004314f5                      ; 00431586
        ;   XREF to: 004314f5 (UNCONDITIONAL_JUMP)  ; LAB_004314f5
    PUSH 0xbf800000                     ; 0043158b
        ;   Label: LAB_0043158b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00431590
    PUSH EBX                            ; 00431596
    CALL dword ptr [EAX + 0x138]        ; 00431597
    ADD ESP,0x8                         ; 0043159d
    JMP 0x004314f5                      ; 004315a0
        ;   XREF to: 004314f5 (UNCONDITIONAL_JUMP)  ; LAB_004314f5
    FLD float ptr [ESP + 0x8]           ; 004315a5
        ;   Label: LAB_004315a5
    FCOMP float ptr [0x005b84ba]        ; 004315a9 | DAT_005b84ba
    FNSTSW AX                           ; 004315af
    SAHF                                ; 004315b1
    JBE 0x00431572                      ; 004315b2
        ;   XREF to: 00431572 (CONDITIONAL_JUMP)  ; LAB_00431572
    MOV dword ptr [ESP + 0x8],0x42700000 ; 004315b4
    JMP 0x00431572                      ; 004315bc
        ;   XREF to: 00431572 (UNCONDITIONAL_JUMP)  ; LAB_00431572

