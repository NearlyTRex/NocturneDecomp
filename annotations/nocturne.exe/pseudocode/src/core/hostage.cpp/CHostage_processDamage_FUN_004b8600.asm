; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004b8600(CHostage *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_00763e44
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_npc.cpp_CNPC_processDamage_FUN_004eeea0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8600
        ;   Label: core_hostage.cpp_CHostage_processDamage_FUN_004b8600
    PUSH ESI                            ; 004b8601
    PUSH EDI                            ; 004b8602
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b8603
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b8607
    MOV EDX,dword ptr [EBX + 0x1f920]   ; 004b860b
    TEST EDX,EDX                        ; 004b8611
    JZ 0x004b868f                       ; 004b8613
        ;   XREF to: 004b868f (CONDITIONAL_JUMP)  ; LAB_004b868f
    FLD float ptr [ESI + 0x4]           ; 004b8619
        ;   Label: LAB_004b8619
    FSUBR float ptr [EBX + 0x2434]      ; 004b861c
    LEA EDX,[EBX + 0x150]               ; 004b8622
    FST float ptr [EBX + 0x2434]        ; 004b8628
    FLDZ                                ; 004b862e
    FCOMPP                              ; 004b8630
    FNSTSW AX                           ; 004b8632
    SAHF                                ; 004b8634
    JNC 0x004b8694                      ; 004b8635
        ;   XREF to: 004b8694 (CONDITIONAL_JUMP)  ; LAB_004b8694
    FLD float ptr [ESI + 0x4]           ; 004b8637
    FLDZ                                ; 004b863a
    FCOMPP                              ; 004b863c
    FNSTSW AX                           ; 004b863e
    SAHF                                ; 004b8640
    JNC 0x004b8681                      ; 004b8641
        ;   XREF to: 004b8681 (CONDITIONAL_JUMP)  ; LAB_004b8681
    CMP dword ptr [EBX + 0x2590],0x0    ; 004b8643
    JNZ 0x004b866e                      ; 004b864a
        ;   XREF to: 004b866e (CONDITIONAL_JUMP)  ; LAB_004b866e
    PUSH 0x1                            ; 004b864c
    PUSH 0x4                            ; 004b864e
    PUSH EDX                            ; 004b8650
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b8651
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,[0x00763e44]                ; 004b8656 | DAT_00763e44
    MOV dword ptr [EBX + 0x1f954],0x40400000 ; 004b865b
    ADD ESP,0xc                         ; 004b8665
    MOV dword ptr [EBX + 0x1f950],EAX   ; 004b8668
    MOV EDI,dword ptr [EBX + 0x1f918]   ; 004b866e
        ;   Label: LAB_004b866e
    PUSH EDI                            ; 004b8674
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004b8675
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004b867a
    TEST EAX,EAX                        ; 004b867d
    JZ 0x004b86d8                       ; 004b867f
        ;   XREF to: 004b86d8 (CONDITIONAL_JUMP)  ; LAB_004b86d8
    PUSH ESI                            ; 004b8681
        ;   Label: LAB_004b8681
    PUSH EBX                            ; 004b8682
    CALL core_npc.cpp_CNPC_processDamage_FUN_004eeea0 ; 004b8683
        ;   XREF to: 004eeea0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_processDamage_FUN_004eeea0(CNPC * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004b8688
    POP EDI                             ; 004b868b
    POP ESI                             ; 004b868c
    POP EBX                             ; 004b868d
    RET                                 ; 004b868e
    MOV dword ptr [ESI + 0x4],EDX       ; 004b868f
        ;   Label: LAB_004b868f
    JMP 0x004b8619                      ; 004b8692
        ;   XREF to: 004b8619 (UNCONDITIONAL_JUMP)  ; LAB_004b8619
    PUSH 0x1                            ; 004b8694
        ;   Label: LAB_004b8694
    PUSH 0x6                            ; 004b8696
    PUSH EDX                            ; 004b8698
    MOV dword ptr [EBX + 0x2434],0x0    ; 004b8699
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b86a3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b86a8
    PUSH 0x41c80000                     ; 004b86ab
    PUSH 0x32                           ; 004b86b0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b86b2
    PUSH EBX                            ; 004b86b8
    CALL dword ptr [EAX + 0xa0]         ; 004b86b9
    ADD ESP,0xc                         ; 004b86bf
    LEA EAX,[EBX + 0x1f8b4]             ; 004b86c2
    PUSH EAX                            ; 004b86c8
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004b86c9
    PUSH EBX                            ; 004b86cf
    CALL dword ptr [EDX + 0x24]         ; 004b86d0
    ADD ESP,0x8                         ; 004b86d3
    JMP 0x004b8681                      ; 004b86d6
        ;   XREF to: 004b8681 (UNCONDITIONAL_JUMP)  ; LAB_004b8681
    LEA EAX,[EBX + 0x1f850]             ; 004b86d8
        ;   Label: LAB_004b86d8
    PUSH EAX                            ; 004b86de
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004b86df
    PUSH EBX                            ; 004b86e5
    CALL dword ptr [EDX + 0x24]         ; 004b86e6
    ADD ESP,0x8                         ; 004b86e9
    MOV dword ptr [EBX + 0x1f918],EAX   ; 004b86ec
    PUSH ESI                            ; 004b86f2
    PUSH EBX                            ; 004b86f3
    CALL core_npc.cpp_CNPC_processDamage_FUN_004eeea0 ; 004b86f4
        ;   XREF to: 004eeea0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_processDamage_FUN_004eeea0(CNPC * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004b86f9
    POP EDI                             ; 004b86fc
    POP ESI                             ; 004b86fd
    POP EBX                             ; 004b86fe
    RET                                 ; 004b86ff

