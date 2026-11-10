; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004d6140(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004d4c50 at 004d4cfe
;
; Referenced Globals:
;   undefined1* switchdataD_004d6128 = 004d6174
;   undefined4 DAT_01cee0e8
;   undefined4 DAT_01cee0ec
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_FUN_00428b10
;   core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004d6230
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6140
        ;   Label: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004d6140
    PUSH ESI                            ; 004d6141
    PUSH EDI                            ; 004d6142
    PUSH EBP                            ; 004d6143
    MOV EBP,ESP                         ; 004d6144
    AND ESP,0xfffffff8                  ; 004d6146
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d6149
    LEA ESI,[EBX + 0x2b4]               ; 004d614c
    LEA EAX,[EBP + 0x18]                ; 004d6152
        ;   Label: LAB_004d6152
    PUSH EAX                            ; 004d6155
    PUSH ESI                            ; 004d6156
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004d6157
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 004d615c
    SUB EAX,0x64                        ; 004d615e
    ADD ESP,0x8                         ; 004d6161
    CMP EAX,0x5                         ; 004d6164
    JA 0x004d6221                       ; 004d6167
        ;   XREF to: 004d6221 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4d6128]  ; 004d616d | caseD_64 | caseD_65 | caseD_66
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x25644]   ; 004d6174
        ;   Label: caseD_64
    INC EAX                             ; 004d617a
    MOV dword ptr [EBX + 0x25644],EAX   ; 004d617b
    CMP EAX,0x4                         ; 004d6181
    JLE 0x004d6190                      ; 004d6184
        ;   XREF to: 004d6190 (CONDITIONAL_JUMP)  ; LAB_004d6190
    MOV dword ptr [EBX + 0x25644],0x0   ; 004d6186
    FLD float ptr [EBP + 0x18]          ; 004d6190
        ;   Label: LAB_004d6190
    FLDZ                                ; 004d6193
    FCOMPP                              ; 004d6195
    FNSTSW AX                           ; 004d6197
    SAHF                                ; 004d6199
    JC 0x004d6152                       ; 004d619a
        ;   XREF to: 004d6152 (CONDITIONAL_JUMP)  ; LAB_004d6152
    MOV ESP,EBP                         ; 004d619c
    POP EBP                             ; 004d619e
    POP EDI                             ; 004d619f
    POP ESI                             ; 004d61a0
    POP EBX                             ; 004d61a1
    RET                                 ; 004d61a2
    MOV EDI,dword ptr [0x01cee0e8]      ; 004d61a3 | DAT_01cee0e8
        ;   Label: caseD_65
    PUSH EDI                            ; 004d61a9
    PUSH EBX                            ; 004d61aa
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004d6230 ; 004d61ab
        ;   XREF to: 004d6230 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004d6230(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d61b0
    JMP 0x004d6190                      ; 004d61b3
        ;   XREF to: 004d6190 (UNCONDITIONAL_JUMP)  ; LAB_004d6190
    MOV ECX,dword ptr [0x01cee0ec]      ; 004d61b5 | DAT_01cee0ec
        ;   Label: caseD_66
    PUSH ECX                            ; 004d61bb
    PUSH EBX                            ; 004d61bc
    CALL core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004d6230 ; 004d61bd
        ;   XREF to: 004d6230 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004d6230(CIcePick * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d61c2
    JMP 0x004d6190                      ; 004d61c5
        ;   XREF to: 004d6190 (UNCONDITIONAL_JUMP)  ; LAB_004d6190
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004d61c7
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: caseD_67
    TEST AL,0x3                         ; 004d61cc
    JNZ 0x004d6190                      ; 004d61ce
        ;   XREF to: 004d6190 (CONDITIONAL_JUMP)  ; LAB_004d6190
    PUSH 0x1                            ; 004d61d0
    PUSH 0x15                           ; 004d61d2
    PUSH ESI                            ; 004d61d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d61d5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d61da
    JMP 0x004d6190                      ; 004d61dd
        ;   XREF to: 004d6190 (UNCONDITIONAL_JUMP)  ; LAB_004d6190
    MOV EDX,dword ptr [EBX + 0x25664]   ; 004d61df
        ;   Label: caseD_68
    TEST EDX,EDX                        ; 004d61e5
    JZ 0x004d6190                       ; 004d61e7
        ;   XREF to: 004d6190 (CONDITIONAL_JUMP)  ; LAB_004d6190
    PUSH 0x0                            ; 004d61e9
    PUSH 0x3e4ccccd                     ; 004d61eb
    PUSH EDX                            ; 004d61f0
    PUSH 0x1                            ; 004d61f1
    PUSH EBX                            ; 004d61f3
    MOV dword ptr [EBX + 0x25664],0x0   ; 004d61f4
    CALL core_charactr.cpp_FUN_00428b10 ; 004d61fe
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428b10()
    ADD ESP,0x14                        ; 004d6203
    JMP 0x004d6190                      ; 004d6206
        ;   XREF to: 004d6190 (UNCONDITIONAL_JUMP)  ; LAB_004d6190
    PUSH 0x0                            ; 004d6208
        ;   Label: caseD_69
    PUSH 0x1                            ; 004d620a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d620c
    PUSH EBX                            ; 004d6212
    CALL dword ptr [EAX + 0x130]        ; 004d6213
    ADD ESP,0xc                         ; 004d6219
    JMP 0x004d6190                      ; 004d621c
        ;   XREF to: 004d6190 (UNCONDITIONAL_JUMP)  ; LAB_004d6190
    PUSH EDX                            ; 004d6221
        ;   Label: default
    PUSH EBX                            ; 004d6222
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004d6223
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004d6228
    JMP 0x004d6190                      ; 004d622b
        ;   XREF to: 004d6190 (UNCONDITIONAL_JUMP)  ; LAB_004d6190

