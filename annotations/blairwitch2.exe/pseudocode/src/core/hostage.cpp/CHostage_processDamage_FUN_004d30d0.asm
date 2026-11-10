; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_processDamage_FUN_004d30d0(CHostage *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_007bbff4
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_npc.cpp_CNPC_processDamage_FUN_00510b90
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d30d0
        ;   Label: core_hostage.cpp_CHostage_processDamage_FUN_004d30d0
    PUSH ESI                            ; 004d30d1
    PUSH EDI                            ; 004d30d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d30d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004d30d7
    MOV EDX,dword ptr [EBX + 0x246f8]   ; 004d30db
    TEST EDX,EDX                        ; 004d30e1
    JZ 0x004d315f                       ; 004d30e3
        ;   XREF to: 004d315f (CONDITIONAL_JUMP)  ; LAB_004d315f
    FLD float ptr [ESI + 0x4]           ; 004d30e9
        ;   Label: LAB_004d30e9
    FSUBR float ptr [EBX + 0x25a8]      ; 004d30ec
    LEA EDX,[EBX + 0x2b4]               ; 004d30f2
    FST float ptr [EBX + 0x25a8]        ; 004d30f8
    FLDZ                                ; 004d30fe
    FCOMPP                              ; 004d3100
    FNSTSW AX                           ; 004d3102
    SAHF                                ; 004d3104
    JNC 0x004d3164                      ; 004d3105
        ;   XREF to: 004d3164 (CONDITIONAL_JUMP)  ; LAB_004d3164
    FLD float ptr [ESI + 0x4]           ; 004d3107
    FLDZ                                ; 004d310a
    FCOMPP                              ; 004d310c
    FNSTSW AX                           ; 004d310e
    SAHF                                ; 004d3110
    JNC 0x004d3151                      ; 004d3111
        ;   XREF to: 004d3151 (CONDITIONAL_JUMP)  ; LAB_004d3151
    CMP dword ptr [EBX + 0x276c],0x0    ; 004d3113
    JNZ 0x004d313e                      ; 004d311a
        ;   XREF to: 004d313e (CONDITIONAL_JUMP)  ; LAB_004d313e
    PUSH 0x1                            ; 004d311c
    PUSH 0x4                            ; 004d311e
    PUSH EDX                            ; 004d3120
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3121
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,[0x007bbff4]                ; 004d3126 | DAT_007bbff4
    MOV dword ptr [EBX + 0x2472c],0x40400000 ; 004d312b
    ADD ESP,0xc                         ; 004d3135
    MOV dword ptr [EBX + 0x24728],EAX   ; 004d3138
    MOV EDI,dword ptr [EBX + 0x246f0]   ; 004d313e
        ;   Label: LAB_004d313e
    PUSH EDI                            ; 004d3144
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004d3145
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004d314a
    TEST EAX,EAX                        ; 004d314d
    JZ 0x004d31a8                       ; 004d314f
        ;   XREF to: 004d31a8 (CONDITIONAL_JUMP)  ; LAB_004d31a8
    PUSH ESI                            ; 004d3151
        ;   Label: LAB_004d3151
    PUSH EBX                            ; 004d3152
    CALL core_npc.cpp_CNPC_processDamage_FUN_00510b90 ; 004d3153
        ;   XREF to: 00510b90 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_processDamage_FUN_00510b90(CNPC * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d3158
    POP EDI                             ; 004d315b
    POP ESI                             ; 004d315c
    POP EBX                             ; 004d315d
    RET                                 ; 004d315e
    MOV dword ptr [ESI + 0x4],EDX       ; 004d315f
        ;   Label: LAB_004d315f
    JMP 0x004d30e9                      ; 004d3162
        ;   XREF to: 004d30e9 (UNCONDITIONAL_JUMP)  ; LAB_004d30e9
    PUSH 0x1                            ; 004d3164
        ;   Label: LAB_004d3164
    PUSH 0x6                            ; 004d3166
    PUSH EDX                            ; 004d3168
    MOV dword ptr [EBX + 0x25a8],0x0    ; 004d3169
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d3173
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3178
    PUSH 0x41c80000                     ; 004d317b
    PUSH 0x32                           ; 004d3180
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d3182
    PUSH EBX                            ; 004d3188
    CALL dword ptr [EAX + 0xb0]         ; 004d3189
    ADD ESP,0xc                         ; 004d318f
    LEA EAX,[EBX + 0x2468c]             ; 004d3192
    PUSH EAX                            ; 004d3198
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004d3199
    PUSH EBX                            ; 004d319f
    CALL dword ptr [EDX + 0x34]         ; 004d31a0
    ADD ESP,0x8                         ; 004d31a3
    JMP 0x004d3151                      ; 004d31a6
        ;   XREF to: 004d3151 (UNCONDITIONAL_JUMP)  ; LAB_004d3151
    LEA EAX,[EBX + 0x24628]             ; 004d31a8
        ;   Label: LAB_004d31a8
    PUSH EAX                            ; 004d31ae
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004d31af
    PUSH EBX                            ; 004d31b5
    CALL dword ptr [EDX + 0x34]         ; 004d31b6
    ADD ESP,0x8                         ; 004d31b9
    MOV dword ptr [EBX + 0x246f0],EAX   ; 004d31bc
    PUSH ESI                            ; 004d31c2
    PUSH EBX                            ; 004d31c3
    CALL core_npc.cpp_CNPC_processDamage_FUN_00510b90 ; 004d31c4
        ;   XREF to: 00510b90 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_processDamage_FUN_00510b90(CNPC * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004d31c9
    POP EDI                             ; 004d31cc
    POP ESI                             ; 004d31cd
    POP EBX                             ; 004d31ce
    RET                                 ; 004d31cf

