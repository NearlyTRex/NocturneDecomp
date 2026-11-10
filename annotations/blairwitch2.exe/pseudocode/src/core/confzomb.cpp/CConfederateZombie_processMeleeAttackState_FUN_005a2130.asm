; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confzomb_cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130(CConfederateZombie *this_ptr,float delta_time)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_BRangeAttack_005efe66+1
;   TerminatedCString s_ChaseComplete_005efe73
;   TerminatedCString s_Chasing_005efe81
;   TerminatedCString s_Chasing_005efe89
;   undefined4 DAT_005efe93
;   undefined4 DAT_005fef90
;   undefined4 DAT_005fef94
;
; Called Functions:
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2130
        ;   Label: core_confzomb.cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130
    PUSH ESI                            ; 005a2131
    PUSH EBP                            ; 005a2132
    MOV EBP,ESP                         ; 005a2133
    SUB ESP,0x14                        ; 005a2135
    AND ESP,0xfffffff8                  ; 005a2138
    MOV EBX,dword ptr [EBP + 0x10]      ; 005a213b
    PUSH 0x1                            ; 005a213e
    PUSH 0x3                            ; 005a2140
    LEA EAX,[EBX + 0x2b4]               ; 005a2142
    PUSH EAX                            ; 005a2148
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a2149
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a214e
    ADD ESP,0xc                         ; 005a2154
    ADD EAX,0x20                        ; 005a2157
    PUSH EAX                            ; 005a215a
    PUSH EBX                            ; 005a215b
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a215c
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    LEA EAX,[EBX + 0x20]                ; 005a2161
    ADD ESP,0x8                         ; 005a2164
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005a2167
    FLD float ptr [EAX + 0x8]           ; 005a216d
    FLD float ptr [EAX]                 ; 005a2170
    FSUB float ptr [ESI + 0x20]         ; 005a2172
    FXCH                                ; 005a2175
    FSUB float ptr [ESI + 0x28]         ; 005a2177
    FXCH                                ; 005a217a
    FST float ptr [ESP]                 ; 005a217c
    FMUL float ptr [ESP]                ; 005a217f
    FXCH                                ; 005a2182
    FST float ptr [ESP + 0x10]          ; 005a2184
    FMUL float ptr [ESP + 0x10]         ; 005a2188
    FXCH                                ; 005a218c
    FSTP float ptr [ESP + 0x8]          ; 005a218e
    FSTP float ptr [ESP + 0xc]          ; 005a2192
    FLD float ptr [ESP + 0x8]           ; 005a2196
    FADD float ptr [ESP + 0xc]          ; 005a219a
    FSQRT                               ; 005a219e
    LEA ESI,[EBX + 0x10af8]             ; 005a21a0
    FST float ptr [ESP + 0x4]           ; 005a21a6
    FCOMP float ptr [0x005fef90]        ; 005a21aa | DAT_005fef90
    FNSTSW AX                           ; 005a21b0
    SAHF                                ; 005a21b2
    JA 0x005a21d0                       ; 005a21b3
        ;   XREF to: 005a21d0 (CONDITIONAL_JUMP)  ; LAB_005a21d0
    FLD float ptr [0x005fef94]          ; 005a21b5 | DAT_005fef94
    FADD float ptr [0x005efe93]         ; 005a21bb | DAT_005efe93
    FCOMP float ptr [ESP + 0x4]         ; 005a21c1
    FNSTSW AX                           ; 005a21c5
    SAHF                                ; 005a21c7
    JC 0x005a220d                       ; 005a21c8
        ;   XREF to: 005a220d (CONDITIONAL_JUMP)  ; LAB_005a220d
    MOV ESP,EBP                         ; 005a21ca
        ;   Label: LAB_005a21ca
    POP EBP                             ; 005a21cc
    POP ESI                             ; 005a21cd
    POP EBX                             ; 005a21ce
    RET                                 ; 005a21cf
    PUSH 0x5efe67                       ; 005a21d0 | s_BRangeAttack_005efe66+1
        ;   Label: LAB_005a21d0
    PUSH 0x5efe73                       ; 005a21d5 | = "ChaseComplete"
    FLD float ptr [0x005fef90]          ; 005a21da | DAT_005fef90
    PUSH ESI                            ; 005a21e0
    FSTP float ptr [EBX + 0x11394]      ; 005a21e1
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a21e7
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a21ec
    PUSH 0x3dcccccd                     ; 005a21ef
    PUSH ESI                            ; 005a21f4
    CALL unkaddr_0059d350.cpp_FUN_0059dcb0 ; 005a21f5
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a21fa
    PUSH 0x5efe81                       ; 005a21fd | = "Chasing"
    PUSH ESI                            ; 005a2202
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005a2203
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a2208
    JMP 0x005a21ca                      ; 005a220b
        ;   XREF to: 005a21ca (UNCONDITIONAL_JUMP)  ; LAB_005a21ca
    PUSH 0x3dcccccd                     ; 005a220d
        ;   Label: LAB_005a220d
    FLD float ptr [0x005fef94]          ; 005a2212 | DAT_005fef94
    PUSH ESI                            ; 005a2218
    FSTP float ptr [EBX + 0x11394]      ; 005a2219
    CALL unkaddr_0059d350.cpp_FUN_0059dcb0 ; 005a221f
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a2224
    PUSH 0x5efe89                       ; 005a2227 | = "Chasing"
    PUSH ESI                            ; 005a222c
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005a222d
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a2232
    MOV ESP,EBP                         ; 005a2235
    POP EBP                             ; 005a2237
    POP ESI                             ; 005a2238
    POP EBX                             ; 005a2239
    RET                                 ; 005a223a

