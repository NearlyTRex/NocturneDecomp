; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[63]:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 at 00408aeb
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 00410231
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411f39
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 004138e8
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c22a
;   core_bugs.cpp_FUN_00420840 at 00420bf4
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420 at 00429aca
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 at 00428970
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 at 0042389d
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 at 00423324
;   ... and 53 more
;
; Referenced Globals:
;   undefined4 DAT_005caf3e
;   undefined4 DAT_005caf42
;   undefined4 DAT_005caf46
;   undefined4 DAT_005caf4e
;   undefined4 DAT_005caf56
;   undefined4 DAT_005caf5e
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0040d0c0
        ;   Label: core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
    FLD float ptr [ESP + 0x10]          ; 0040d0c3
    FCOMP float ptr [0x005caf3e]        ; 0040d0c7 | DAT_005caf3e
    FNSTSW AX                           ; 0040d0cd
    SAHF                                ; 0040d0cf
    JC 0x0040d0f1                       ; 0040d0d0
        ;   XREF to: 0040d0f1 (CONDITIONAL_JUMP)  ; LAB_0040d0f1
    FLD float ptr [ESP + 0x10]          ; 0040d0d2
    FCOMP float ptr [0x005caf42]        ; 0040d0d6 | DAT_005caf42
    FNSTSW AX                           ; 0040d0dc
    SAHF                                ; 0040d0de
    JA 0x0040d12f                       ; 0040d0df
        ;   XREF to: 0040d12f (CONDITIONAL_JUMP)  ; LAB_0040d12f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040d0e1
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d0e5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d0e9
        ;   Label: LAB_0040d0e9
    ADD ESP,0xc                         ; 0040d0ed
    RET                                 ; 0040d0f0
    FLD float ptr [ESP + 0x10]          ; 0040d0f1
        ;   Label: LAB_0040d0f1
    FADD float ptr [0x005caf42]         ; 0040d0f5 | DAT_005caf42
    FMUL double ptr [0x005caf56]        ; 0040d0fb | DAT_005caf56
    SUB ESP,0x8                         ; 0040d101
    FSTP double ptr [ESP]               ; 0040d104
    CALL crt_math.c_floor_FUN_005b84d0  ; 0040d107
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d10c
    MOV dword ptr [ESP + 0xc],EDX       ; 0040d110
    FLD double ptr [ESP + 0x8]          ; 0040d114
    FLD1                                ; 0040d118
    FADDP                               ; 0040d11a
    FMUL double ptr [0x005caf5e]        ; 0040d11c | DAT_005caf5e
    ADD ESP,0x8                         ; 0040d122
    FADD float ptr [ESP + 0x10]         ; 0040d125
    FSTP float ptr [ESP + 0x8]          ; 0040d129
    JMP 0x0040d0e9                      ; 0040d12d
        ;   XREF to: 0040d0e9 (UNCONDITIONAL_JUMP)  ; LAB_0040d0e9
    FLD float ptr [ESP + 0x10]          ; 0040d12f
        ;   Label: LAB_0040d12f
    FADD float ptr [0x005caf3e]         ; 0040d133 | DAT_005caf3e
    FMUL double ptr [0x005caf46]        ; 0040d139 | DAT_005caf46
    SUB ESP,0x8                         ; 0040d13f
    FSTP double ptr [ESP]               ; 0040d142
    CALL crt_math.c_floor_FUN_005b84d0  ; 0040d145
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d14a
    MOV dword ptr [ESP + 0xc],EDX       ; 0040d14e
    FLD double ptr [ESP + 0x8]          ; 0040d152
    FLD1                                ; 0040d156
    FADDP                               ; 0040d158
    FMUL double ptr [0x005caf4e]        ; 0040d15a | DAT_005caf4e
    ADD ESP,0x8                         ; 0040d160
    FADD float ptr [ESP + 0x10]         ; 0040d163
    FSTP float ptr [ESP + 0x8]          ; 0040d167
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d16b
    ADD ESP,0xc                         ; 0040d16f
    RET                                 ; 0040d172

