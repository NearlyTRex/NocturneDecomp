; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004f93a0(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f8153
;
; Referenced Globals:
;   void* switchdataD_004f937c = 004f93d4
;   undefined4 g_IcePickIndices[13]
;   undefined4 g_IcePickIndices[14]
;
; Called Functions:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f9490
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f93a0
        ;   Label: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004f93a0
    PUSH ESI                            ; 004f93a1
    PUSH EDI                            ; 004f93a2
    PUSH EBP                            ; 004f93a3
    MOV EBP,ESP                         ; 004f93a4
    AND ESP,0xfffffff8                  ; 004f93a6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f93a9
    LEA ESI,[EBX + 0x158]               ; 004f93ac
    LEA EAX,[EBP + 0x18]                ; 004f93b2
        ;   Label: LAB_004f93b2
    PUSH EAX                            ; 004f93b5
    PUSH ESI                            ; 004f93b6
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004f93b7
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 004f93bc
    SUB EAX,0x64                        ; 004f93be
    ADD ESP,0x8                         ; 004f93c1
    CMP EAX,0x5                         ; 004f93c4
    JA 0x004f947f                       ; 004f93c7
        ;   XREF to: 004f947f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f937c]  ; 004f93cd | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x1fbd8]   ; 004f93d4
        ;   Label: caseD_64
    INC EAX                             ; 004f93da
    MOV dword ptr [EBX + 0x1fbd8],EAX   ; 004f93db
    CMP EAX,0x4                         ; 004f93e1
    JLE 0x004f93f0                      ; 004f93e4
        ;   XREF to: 004f93f0 (CONDITIONAL_JUMP)  ; LAB_004f93f0
    MOV dword ptr [EBX + 0x1fbd8],0x0   ; 004f93e6
    FLD float ptr [EBP + 0x18]          ; 004f93f0
        ;   Label: LAB_004f93f0
    FLDZ                                ; 004f93f3
    FCOMPP                              ; 004f93f5
    FNSTSW AX                           ; 004f93f7
    SAHF                                ; 004f93f9
    JC 0x004f93b2                       ; 004f93fa
        ;   XREF to: 004f93b2 (CONDITIONAL_JUMP)  ; LAB_004f93b2
    MOV ESP,EBP                         ; 004f93fc
    POP EBP                             ; 004f93fe
    POP EDI                             ; 004f93ff
    POP ESI                             ; 004f9400
    POP EBX                             ; 004f9401
    RET                                 ; 004f9402
    MOV EDI,dword ptr [0x02db89a4]      ; 004f9403 | g_IcePickIndices[13]
        ;   Label: caseD_65
    PUSH EDI                            ; 004f9409
    PUSH EBX                            ; 004f940a
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f9490 ; 004f940b
        ;   XREF to: 004f9490 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f9490(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f9410
    JMP 0x004f93f0                      ; 004f9413
        ;   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)  ; LAB_004f93f0
    MOV ECX,dword ptr [0x02db89a8]      ; 004f9415 | g_IcePickIndices[14]
        ;   Label: caseD_66
    PUSH ECX                            ; 004f941b
    PUSH EBX                            ; 004f941c
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f9490 ; 004f941d
        ;   XREF to: 004f9490 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004f9490(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f9422
    JMP 0x004f93f0                      ; 004f9425
        ;   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)  ; LAB_004f93f0
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004f9427
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: caseD_67
    TEST AL,0x3                         ; 004f942c
    JNZ 0x004f93f0                      ; 004f942e
        ;   XREF to: 004f93f0 (CONDITIONAL_JUMP)  ; LAB_004f93f0
    PUSH 0x1                            ; 004f9430
    PUSH 0x15                           ; 004f9432
    PUSH ESI                            ; 004f9434
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f9435
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f943a
    JMP 0x004f93f0                      ; 004f943d
        ;   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)  ; LAB_004f93f0
    MOV EDX,dword ptr [EBX + 0x1fbf8]   ; 004f943f
        ;   Label: caseD_68
    TEST EDX,EDX                        ; 004f9445
    JZ 0x004f93f0                       ; 004f9447
        ;   XREF to: 004f93f0 (CONDITIONAL_JUMP)  ; LAB_004f93f0
    PUSH 0x3e4ccccd                     ; 004f9449
    PUSH EDX                            ; 004f944e
    PUSH 0x1                            ; 004f944f
    PUSH EBX                            ; 004f9451
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 004f9452
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 004f945c
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr, int hand_index, CDemonActor * object, float blend_time)
    ADD ESP,0x10                        ; 004f9461
    JMP 0x004f93f0                      ; 004f9464
        ;   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)  ; LAB_004f93f0
    PUSH 0x0                            ; 004f9466
        ;   Label: caseD_69
    PUSH 0x1                            ; 004f9468
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f946a
    PUSH EBX                            ; 004f9470
    CALL dword ptr [EAX + 0x13c]        ; 004f9471
    ADD ESP,0xc                         ; 004f9477
    JMP 0x004f93f0                      ; 004f947a
        ;   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)  ; LAB_004f93f0
    PUSH EDX                            ; 004f947f
        ;   Label: default
    PUSH EBX                            ; 004f9480
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 004f9481
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004f9486
    JMP 0x004f93f0                      ; 004f9489
        ;   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)  ; LAB_004f93f0

