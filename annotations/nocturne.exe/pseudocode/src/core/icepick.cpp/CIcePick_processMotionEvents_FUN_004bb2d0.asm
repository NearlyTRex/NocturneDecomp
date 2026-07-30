; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004b9fe0 at 004ba083
;
; Referenced Globals:
;   undefined1* switchdataD_004bb2ac = 004bb304
;   undefined4 DAT_01cae2bc
;   undefined4 DAT_01cae2c0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb2d0
        ;   Label: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0
    PUSH ESI                            ; 004bb2d1
    PUSH EDI                            ; 004bb2d2
    PUSH EBP                            ; 004bb2d3
    MOV EBP,ESP                         ; 004bb2d4
    AND ESP,0xfffffff8                  ; 004bb2d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bb2d9
    LEA ESI,[EBX + 0x150]               ; 004bb2dc
    LEA EAX,[EBP + 0x18]                ; 004bb2e2
        ;   Label: LAB_004bb2e2
    PUSH EAX                            ; 004bb2e5
    PUSH ESI                            ; 004bb2e6
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004bb2e7
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 004bb2ec
    SUB EAX,0x64                        ; 004bb2ee
    ADD ESP,0x8                         ; 004bb2f1
    CMP EAX,0x5                         ; 004bb2f4
    JA 0x004bb3af                       ; 004bb2f7
        ;   XREF to: 004bb3af (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4bb2ac]  ; 004bb2fd | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x1fa40]   ; 004bb304
        ;   Label: caseD_64
    INC EAX                             ; 004bb30a
    MOV dword ptr [EBX + 0x1fa40],EAX   ; 004bb30b
    CMP EAX,0x4                         ; 004bb311
    JLE 0x004bb320                      ; 004bb314
        ;   XREF to: 004bb320 (CONDITIONAL_JUMP)  ; LAB_004bb320
    MOV dword ptr [EBX + 0x1fa40],0x0   ; 004bb316
    FLD float ptr [EBP + 0x18]          ; 004bb320
        ;   Label: LAB_004bb320
    FLDZ                                ; 004bb323
    FCOMPP                              ; 004bb325
    FNSTSW AX                           ; 004bb327
    SAHF                                ; 004bb329
    JC 0x004bb2e2                       ; 004bb32a
        ;   XREF to: 004bb2e2 (CONDITIONAL_JUMP)  ; LAB_004bb2e2
    MOV ESP,EBP                         ; 004bb32c
    POP EBP                             ; 004bb32e
    POP EDI                             ; 004bb32f
    POP ESI                             ; 004bb330
    POP EBX                             ; 004bb331
    RET                                 ; 004bb332
    MOV EDI,dword ptr [0x01cae2bc]      ; 004bb333 | DAT_01cae2bc
        ;   Label: caseD_65
    PUSH EDI                            ; 004bb339
    PUSH EBX                            ; 004bb33a
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0 ; 004bb33b
        ;   XREF to: 004bb3c0 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004bb340
    JMP 0x004bb320                      ; 004bb343
        ;   XREF to: 004bb320 (UNCONDITIONAL_JUMP)  ; LAB_004bb320
    MOV ECX,dword ptr [0x01cae2c0]      ; 004bb345 | DAT_01cae2c0
        ;   Label: caseD_66
    PUSH ECX                            ; 004bb34b
    PUSH EBX                            ; 004bb34c
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0 ; 004bb34d
        ;   XREF to: 004bb3c0 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004bb352
    JMP 0x004bb320                      ; 004bb355
        ;   XREF to: 004bb320 (UNCONDITIONAL_JUMP)  ; LAB_004bb320
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004bb357
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: caseD_67
    TEST AL,0x3                         ; 004bb35c
    JNZ 0x004bb320                      ; 004bb35e
        ;   XREF to: 004bb320 (CONDITIONAL_JUMP)  ; LAB_004bb320
    PUSH 0x1                            ; 004bb360
    PUSH 0x15                           ; 004bb362
    PUSH ESI                            ; 004bb364
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bb365
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004bb36a
    JMP 0x004bb320                      ; 004bb36d
        ;   XREF to: 004bb320 (UNCONDITIONAL_JUMP)  ; LAB_004bb320
    MOV EDX,dword ptr [EBX + 0x1fa60]   ; 004bb36f
        ;   Label: caseD_68
    TEST EDX,EDX                        ; 004bb375
    JZ 0x004bb320                       ; 004bb377
        ;   XREF to: 004bb320 (CONDITIONAL_JUMP)  ; LAB_004bb320
    PUSH 0x3e4ccccd                     ; 004bb379
    PUSH EDX                            ; 004bb37e
    PUSH 0x1                            ; 004bb37f
    PUSH EBX                            ; 004bb381
    MOV dword ptr [EBX + 0x1fa60],0x0   ; 004bb382
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 ; 004bb38c
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40(CCharacter * this_ptr, int hand_index, CDemonActor * object, float blend_time)
    ADD ESP,0x10                        ; 004bb391
    JMP 0x004bb320                      ; 004bb394
        ;   XREF to: 004bb320 (UNCONDITIONAL_JUMP)  ; LAB_004bb320
    PUSH 0x0                            ; 004bb396
        ;   Label: caseD_69
    PUSH 0x1                            ; 004bb398
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bb39a
    PUSH EBX                            ; 004bb3a0
    CALL dword ptr [EAX + 0x120]        ; 004bb3a1
    ADD ESP,0xc                         ; 004bb3a7
    JMP 0x004bb320                      ; 004bb3aa
        ;   XREF to: 004bb320 (UNCONDITIONAL_JUMP)  ; LAB_004bb320
    PUSH EDX                            ; 004bb3af
        ;   Label: default
    PUSH EBX                            ; 004bb3b0
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004bb3b1
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004bb3b6
    JMP 0x004bb320                      ; 004bb3b9
        ;   XREF to: 004bb320 (UNCONDITIONAL_JUMP)  ; LAB_004bb320

