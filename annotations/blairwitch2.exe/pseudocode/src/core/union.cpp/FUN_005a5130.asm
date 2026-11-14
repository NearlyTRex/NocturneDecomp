; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_FUN_005a5130(CCharacter *param_1,float param_2)
;
;
; XREF[1]:
;   core_union.cpp_CUnion_processStates_FUN_005a4c50 at 005a4d36
;
; Referenced Globals:
;   undefined4 DAT_005f056a
;   undefined4 DAT_005f056e
;
; Called Functions:
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_union.cpp_FUN_005a5460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5130
        ;   Label: core_union.cpp_FUN_005a5130
    PUSH ESI                            ; 005a5131
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a5132
    LEA ESI,[EBX + 0x2508]              ; 005a5136
    MOV dword ptr [ESI + 0x8],0x0       ; 005a513c
    PUSH EBX                            ; 005a5143
    MOV EAX,dword ptr [ESI + 0x8]       ; 005a5144
    MOV dword ptr [ESI + 0x4],EAX       ; 005a5147
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a514a
    MOV dword ptr [ESI],EAX             ; 005a514d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a514f
    LEA ESI,[EBX + 0x2b4]               ; 005a5155
    CALL dword ptr [EAX + 0x17c]        ; 005a515b
    ADD ESP,0x4                         ; 005a5161
    TEST EAX,EAX                        ; 005a5164
    JZ 0x005a51b8                       ; 005a5166
        ;   XREF to: 005a51b8 (CONDITIONAL_JUMP)  ; LAB_005a51b8
    PUSH ESI                            ; 005a5168
    CALL core_motion.cpp_FUN_005035c0   ; 005a5169
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a516e
    ADD ESP,0x4                         ; 005a5171
    CMP EAX,0x2                         ; 005a5174
    JNC 0x005a5256                      ; 005a5177
        ;   XREF to: 005a5256 (CONDITIONAL_JUMP)  ; LAB_005a5256
    TEST EAX,EAX                        ; 005a517d
    JNZ 0x005a5261                      ; 005a517f
        ;   XREF to: 005a5261 (CONDITIONAL_JUMP)  ; LAB_005a5261
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a5185
    ADD EAX,0x20                        ; 005a518b
    PUSH EAX                            ; 005a518e
    PUSH EBX                            ; 005a518f
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a5190
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    ADD ESP,0x8                         ; 005a5195
    FLD float ptr [EBX + 0x11850]       ; 005a5198
    FSUB float ptr [ESP + 0x10]         ; 005a519e
    FST float ptr [EBX + 0x11850]       ; 005a51a2
    FLDZ                                ; 005a51a8
    FCOMPP                              ; 005a51aa
    FNSTSW AX                           ; 005a51ac
    SAHF                                ; 005a51ae
    JNC 0x005a523c                      ; 005a51af
        ;   XREF to: 005a523c (CONDITIONAL_JUMP)  ; LAB_005a523c
    POP ESI                             ; 005a51b5
        ;   Label: LAB_005a51b5
    POP EBX                             ; 005a51b6
    RET                                 ; 005a51b7
    PUSH 0x1                            ; 005a51b8
        ;   Label: LAB_005a51b8
    MOV EDX,dword ptr [EBX + 0x11384]   ; 005a51ba
    PUSH EDX                            ; 005a51c0
    PUSH ESI                            ; 005a51c1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a51c2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a51c7
    POP ESI                             ; 005a51ca
    POP EBX                             ; 005a51cb
    RET                                 ; 005a51cc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a51cd
        ;   Label: LAB_005a51cd
    ADD EAX,0x20                        ; 005a51d3
    PUSH EAX                            ; 005a51d6
    PUSH EBX                            ; 005a51d7
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a51d8
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    FLD float ptr [ESI + 0x8]           ; 005a51dd
    ADD ESP,0x8                         ; 005a51e0
    FCOMP float ptr [0x005f056e]        ; 005a51e3 | DAT_005f056e
    FNSTSW AX                           ; 005a51e9
    SAHF                                ; 005a51eb
    JBE 0x005a51b5                      ; 005a51ec
        ;   XREF to: 005a51b5 (CONDITIONAL_JUMP)  ; LAB_005a51b5
    PUSH 0x1                            ; 005a51ee
    PUSH 0x3                            ; 005a51f0
    PUSH ESI                            ; 005a51f2
    MOV dword ptr [EBX + 0x11850],0x40a00000 ; 005a51f3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a51fd
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a5202
    PUSH EBX                            ; 005a5205
    CALL core_union.cpp_FUN_005a5460    ; 005a5206
        ;   XREF to: 005a5460 (UNCONDITIONAL_CALL)  ; undefined core_union.cpp_FUN_005a5460()
    MOV ECX,dword ptr [EBX + 0x11854]   ; 005a520b
    DEC ECX                             ; 005a5211
    ADD ESP,0x4                         ; 005a5212
    MOV dword ptr [EBX + 0x11854],ECX   ; 005a5215
    POP ESI                             ; 005a521b
    POP EBX                             ; 005a521c
    RET                                 ; 005a521d
    FLD float ptr [ESI + 0x8]           ; 005a521e
        ;   Label: LAB_005a521e
    FCOMP float ptr [0x005f056a]        ; 005a5221 | DAT_005f056a
    FNSTSW AX                           ; 005a5227
    SAHF                                ; 005a5229
    JBE 0x005a51b5                      ; 005a522a
        ;   XREF to: 005a51b5 (CONDITIONAL_JUMP)  ; LAB_005a51b5
    PUSH 0x1                            ; 005a522c
    PUSH 0x0                            ; 005a522e
    PUSH ESI                            ; 005a5230
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a5231
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a5236
    POP ESI                             ; 005a5239
    POP EBX                             ; 005a523a
    RET                                 ; 005a523b
    PUSH 0x1                            ; 005a523c
        ;   Label: LAB_005a523c
    PUSH 0x2                            ; 005a523e
    PUSH ESI                            ; 005a5240
    MOV dword ptr [EBX + 0x11850],0x0   ; 005a5241
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a524b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a5250
    POP ESI                             ; 005a5253
    POP EBX                             ; 005a5254
    RET                                 ; 005a5255
    JBE 0x005a51cd                      ; 005a5256
        ;   XREF to: 005a51cd (CONDITIONAL_JUMP)  ; LAB_005a51cd
        ;   Label: LAB_005a5256
    CMP EAX,0x3                         ; 005a525c
    JZ 0x005a521e                       ; 005a525f
        ;   XREF to: 005a521e (CONDITIONAL_JUMP)  ; LAB_005a521e
    PUSH 0x1                            ; 005a5261
        ;   Label: LAB_005a5261
    PUSH 0x0                            ; 005a5263
    ADD EBX,0x2b4                       ; 005a5265
    PUSH EBX                            ; 005a526b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a526c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a5271
    POP ESI                             ; 005a5274
    POP EBX                             ; 005a5275
    RET                                 ; 005a5276

