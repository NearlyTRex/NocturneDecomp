; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog1_cpp_CDog_processChaseFoodState_FUN_005ac0c0(CDog *this_ptr,float delta_time)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_ChaseFoodComplete_005f0dad+1
;   TerminatedCString s_ChaseFoodComplete_005f0dc0
;   undefined4 DAT_00618170
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_mission.cpp_FUN_004fc7b0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkaddr_0059d350.cpp_FUN_0059d880
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059db90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac0c0
        ;   Label: core_dog1.cpp_CDog_processChaseFoodState_FUN_005ac0c0
    PUSH ESI                            ; 005ac0c1
    PUSH EBP                            ; 005ac0c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ac0c3
    MOV EDX,dword ptr [EBX + 0x1185c]   ; 005ac0c7
    LEA ESI,[EBX + 0x10af8]             ; 005ac0cd
    TEST EDX,EDX                        ; 005ac0d3
    JZ 0x005ac16f                       ; 005ac0d5
        ;   XREF to: 005ac16f (CONDITIONAL_JUMP)  ; LAB_005ac16f
    MOV ECX,dword ptr [EDX + 0x474]     ; 005ac0db
    MOV EAX,EDX                         ; 005ac0e1
    TEST ECX,ECX                        ; 005ac0e3
    JZ 0x005ac0ef                       ; 005ac0e5
        ;   XREF to: 005ac0ef (CONDITIONAL_JUMP)  ; LAB_005ac0ef
    CMP EBX,ECX                         ; 005ac0e7
    JNZ 0x005ac181                      ; 005ac0e9
        ;   XREF to: 005ac181 (CONDITIONAL_JUMP)  ; LAB_005ac181
    PUSH 0x3eb2b8c2                     ; 005ac0ef
        ;   Label: LAB_005ac0ef
    LEA EAX,[EBX + 0x11424]             ; 005ac0f4
    PUSH dword ptr [EBX + 0x1142c]      ; 005ac0fa
    PUSH EAX                            ; 005ac100
    MOV EAX,dword ptr [EBX + 0x1185c]   ; 005ac101
    PUSH 0x0                            ; 005ac107
    ADD EAX,0x20                        ; 005ac109
    PUSH EAX                            ; 005ac10c
    PUSH EBX                            ; 005ac10d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 005ac10e
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005ac113
    LEA ESI,[EBX + 0x2b4]               ; 005ac116
    TEST EAX,EAX                        ; 005ac11c
    JZ 0x005ac19d                       ; 005ac11e
        ;   XREF to: 005ac19d (CONDITIONAL_JUMP)  ; LAB_005ac19d
    PUSH EBX                            ; 005ac124
    MOV EAX,dword ptr [EBX + 0x1185c]   ; 005ac125
    PUSH EAX                            ; 005ac12b
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005ac12c
    CALL dword ptr [EDX + 0x90]         ; 005ac132
    ADD ESP,0x8                         ; 005ac138
    PUSH 0x1                            ; 005ac13b
    PUSH 0x9                            ; 005ac13d
    PUSH ESI                            ; 005ac13f
    MOV dword ptr [EBX + 0x10a78],0x0   ; 005ac140
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005ac14a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005ac14f
    FLD float ptr [EBX + 0x11868]       ; 005ac152
    FSUB float ptr [ESP + 0x14]         ; 005ac158
    FST float ptr [EBX + 0x11868]       ; 005ac15c
    FLDZ                                ; 005ac162
    FCOMPP                              ; 005ac164
    FNSTSW AX                           ; 005ac166
    SAHF                                ; 005ac168
    JNC 0x005ac1ae                      ; 005ac169
        ;   XREF to: 005ac1ae (CONDITIONAL_JUMP)  ; LAB_005ac1ae
    POP EBP                             ; 005ac16b
    POP ESI                             ; 005ac16c
    POP EBX                             ; 005ac16d
    RET                                 ; 005ac16e
    PUSH 0x5f0dae                       ; 005ac16f | s_ChaseFoodComplete_005f0dad+1
        ;   Label: LAB_005ac16f
    PUSH ESI                            ; 005ac174
    CALL unkaddr_0059d350.cpp_FUN_0059d880 ; 005ac175
        ;   XREF to: 0059d880 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d880()
    ADD ESP,0x8                         ; 005ac17a
    POP EBP                             ; 005ac17d
    POP ESI                             ; 005ac17e
    POP EBX                             ; 005ac17f
    RET                                 ; 005ac180
    PUSH 0x5f0dc0                       ; 005ac181 | = "ChaseFoodComplete"
        ;   Label: LAB_005ac181
    PUSH ESI                            ; 005ac186
    MOV dword ptr [EBX + 0x1185c],0x0   ; 005ac187
    CALL unkaddr_0059d350.cpp_FUN_0059d880 ; 005ac191
        ;   XREF to: 0059d880 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d880()
    ADD ESP,0x8                         ; 005ac196
    POP EBP                             ; 005ac199
    POP ESI                             ; 005ac19a
    POP EBX                             ; 005ac19b
    RET                                 ; 005ac19c
    PUSH 0x1                            ; 005ac19d
        ;   Label: LAB_005ac19d
    PUSH 0x2                            ; 005ac19f
    PUSH ESI                            ; 005ac1a1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005ac1a2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005ac1a7
    POP EBP                             ; 005ac1aa
    POP ESI                             ; 005ac1ab
    POP EBX                             ; 005ac1ac
    RET                                 ; 005ac1ad
    PUSH 0x0                            ; 005ac1ae
        ;   Label: LAB_005ac1ae
    MOV EAX,dword ptr [EBX + 0x1185c]   ; 005ac1b0
    PUSH EAX                            ; 005ac1b6
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005ac1b7
    CALL dword ptr [ESI + 0x94]         ; 005ac1bd
    ADD ESP,0x8                         ; 005ac1c3
    PUSH 0x1                            ; 005ac1c6
    MOV EBP,dword ptr [EBX + 0x1185c]   ; 005ac1c8
    PUSH EBP                            ; 005ac1ce
    MOV EAX,[0x00618170]                ; 005ac1cf | DAT_00618170
    PUSH EAX                            ; 005ac1d4 | DAT_01d182f0
    CALL core_mission.cpp_FUN_004fc7b0  ; 005ac1d5
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    ADD ESP,0xc                         ; 005ac1da
    ADD EBX,0x10af8                     ; 005ac1dd
    PUSH EBX                            ; 005ac1e3
    CALL unkaddr_0059d350.cpp_FUN_0059db90 ; 005ac1e4
        ;   XREF to: 0059db90 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059db90()
    ADD ESP,0x4                         ; 005ac1e9
    PUSH EAX                            ; 005ac1ec
    PUSH EBX                            ; 005ac1ed
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005ac1ee
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005ac1f3
    POP EBP                             ; 005ac1f6
    POP ESI                             ; 005ac1f7
    POP EBX                             ; 005ac1f8
    RET                                 ; 005ac1f9

