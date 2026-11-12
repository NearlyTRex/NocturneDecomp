; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[40]:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 at 004088fb
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00597084
;   core_baal.cpp_FUN_00597700 at 00597788
;   core_bmppuzzl.cpp_CAudioRecPuzzle_render_FUN_004123c0 at 0041247b
;   core_boxactor.cpp_CBoxActor_process_FUN_0041f360 at 0041f513
;   core_bugs.cpp_FUN_00422a00 at 00422db4
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660 at 00431845
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 at 0042bcd4
;   core_charactr.cpp_FUN_0042b970 at 0042b977
;   core_charactr.cpp_FUN_004310e0 at 004312c5
;   ... and 30 more
;
; Referenced Globals:
;   undefined4 DAT_005b5f09
;   undefined4 DAT_005b5f0d
;   undefined4 DAT_005b5f11
;   undefined4 DAT_005b5f19
;   undefined4 DAT_005b5f21
;   undefined4 DAT_005b5f29
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0040cfa0
        ;   Label: core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
    FLD float ptr [ESP + 0x10]          ; 0040cfa3
    FCOMP float ptr [0x005b5f09]        ; 0040cfa7 | DAT_005b5f09
    FNSTSW AX                           ; 0040cfad
    SAHF                                ; 0040cfaf
    JC 0x0040cfd1                       ; 0040cfb0
        ;   XREF to: 0040cfd1 (CONDITIONAL_JUMP)  ; LAB_0040cfd1
    FLD float ptr [ESP + 0x10]          ; 0040cfb2
    FCOMP float ptr [0x005b5f0d]        ; 0040cfb6 | DAT_005b5f0d
    FNSTSW AX                           ; 0040cfbc
    SAHF                                ; 0040cfbe
    JA 0x0040d00f                       ; 0040cfbf
        ;   XREF to: 0040d00f (CONDITIONAL_JUMP)  ; LAB_0040d00f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040cfc1
    MOV dword ptr [ESP + 0x8],EAX       ; 0040cfc5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040cfc9
        ;   Label: LAB_0040cfc9
    ADD ESP,0xc                         ; 0040cfcd
    RET                                 ; 0040cfd0
    FLD float ptr [ESP + 0x10]          ; 0040cfd1
        ;   Label: LAB_0040cfd1
    FADD float ptr [0x005b5f0d]         ; 0040cfd5 | DAT_005b5f0d
    FMUL double ptr [0x005b5f21]        ; 0040cfdb | DAT_005b5f21
    SUB ESP,0x8                         ; 0040cfe1
    FSTP double ptr [ESP]               ; 0040cfe4
    CALL crt_math.c_floor_FUN_005a3600  ; 0040cfe7
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040cfec
    MOV dword ptr [ESP + 0xc],EDX       ; 0040cff0
    FLD double ptr [ESP + 0x8]          ; 0040cff4
    FLD1                                ; 0040cff8
    FADDP                               ; 0040cffa
    FMUL double ptr [0x005b5f29]        ; 0040cffc | DAT_005b5f29
    ADD ESP,0x8                         ; 0040d002
    FADD float ptr [ESP + 0x10]         ; 0040d005
    FSTP float ptr [ESP + 0x8]          ; 0040d009
    JMP 0x0040cfc9                      ; 0040d00d
        ;   XREF to: 0040cfc9 (UNCONDITIONAL_JUMP)  ; LAB_0040cfc9
    FLD float ptr [ESP + 0x10]          ; 0040d00f
        ;   Label: LAB_0040d00f
    FADD float ptr [0x005b5f09]         ; 0040d013 | DAT_005b5f09
    FMUL double ptr [0x005b5f11]        ; 0040d019 | DAT_005b5f11
    SUB ESP,0x8                         ; 0040d01f
    FSTP double ptr [ESP]               ; 0040d022
    CALL crt_math.c_floor_FUN_005a3600  ; 0040d025
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d02a
    MOV dword ptr [ESP + 0xc],EDX       ; 0040d02e
    FLD double ptr [ESP + 0x8]          ; 0040d032
    FLD1                                ; 0040d036
    FADDP                               ; 0040d038
    FMUL double ptr [0x005b5f19]        ; 0040d03a | DAT_005b5f19
    ADD ESP,0x8                         ; 0040d040
    FADD float ptr [ESP + 0x10]         ; 0040d043
    FSTP float ptr [ESP + 0x8]          ; 0040d047
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d04b
    ADD ESP,0xc                         ; 0040d04f
    RET                                 ; 0040d052

