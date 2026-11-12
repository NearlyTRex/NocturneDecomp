; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[65]:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 at 004088bb
;   core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0 at 0040fdb1
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 00411ba9
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 004135e2
;   core_bmppuzzl.cpp_CAudioRecPuzzle_render_FUN_00416620 at 004166de
;   core_boxactor.cpp_CBoxActor_process_FUN_00422000 at 0042219a
;   core_bugs.cpp_FUN_00426870 at 00426c24
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240 at 00432412
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_0042d540 at 0042d58d
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 at 0042d014
;   ... and 55 more
;
; Referenced Globals:
;   undefined4 DAT_005d2eb9
;   undefined4 DAT_005d2ebd
;   undefined4 DAT_005d2ec1
;   undefined4 DAT_005d2ec9
;   undefined4 DAT_005d2ed1
;   undefined4 DAT_005d2ed9
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0040cd60
        ;   Label: core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
    FLD float ptr [ESP + 0x10]          ; 0040cd63
    FCOMP float ptr [0x005d2eb9]        ; 0040cd67 | DAT_005d2eb9
    FNSTSW AX                           ; 0040cd6d
    SAHF                                ; 0040cd6f
    JC 0x0040cd91                       ; 0040cd70
        ;   XREF to: 0040cd91 (CONDITIONAL_JUMP)  ; LAB_0040cd91
    FLD float ptr [ESP + 0x10]          ; 0040cd72
    FCOMP float ptr [0x005d2ebd]        ; 0040cd76 | DAT_005d2ebd
    FNSTSW AX                           ; 0040cd7c
    SAHF                                ; 0040cd7e
    JA 0x0040cdcf                       ; 0040cd7f
        ;   XREF to: 0040cdcf (CONDITIONAL_JUMP)  ; LAB_0040cdcf
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040cd81
    MOV dword ptr [ESP + 0x8],EAX       ; 0040cd85
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040cd89
        ;   Label: LAB_0040cd89
    ADD ESP,0xc                         ; 0040cd8d
    RET                                 ; 0040cd90
    FLD float ptr [ESP + 0x10]          ; 0040cd91
        ;   Label: LAB_0040cd91
    FADD float ptr [0x005d2ebd]         ; 0040cd95 | DAT_005d2ebd
    FMUL double ptr [0x005d2ed1]        ; 0040cd9b | DAT_005d2ed1
    SUB ESP,0x8                         ; 0040cda1
    FSTP double ptr [ESP]               ; 0040cda4
    CALL crt_math.c_floor_FUN_005c0880  ; 0040cda7
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040cdac
    MOV dword ptr [ESP + 0xc],EDX       ; 0040cdb0
    FLD double ptr [ESP + 0x8]          ; 0040cdb4
    FLD1                                ; 0040cdb8
    FADDP                               ; 0040cdba
    FMUL double ptr [0x005d2ed9]        ; 0040cdbc | DAT_005d2ed9
    ADD ESP,0x8                         ; 0040cdc2
    FADD float ptr [ESP + 0x10]         ; 0040cdc5
    FSTP float ptr [ESP + 0x8]          ; 0040cdc9
    JMP 0x0040cd89                      ; 0040cdcd
        ;   XREF to: 0040cd89 (UNCONDITIONAL_JUMP)  ; LAB_0040cd89
    FLD float ptr [ESP + 0x10]          ; 0040cdcf
        ;   Label: LAB_0040cdcf
    FADD float ptr [0x005d2eb9]         ; 0040cdd3 | DAT_005d2eb9
    FMUL double ptr [0x005d2ec1]        ; 0040cdd9 | DAT_005d2ec1
    SUB ESP,0x8                         ; 0040cddf
    FSTP double ptr [ESP]               ; 0040cde2
    CALL crt_math.c_floor_FUN_005c0880  ; 0040cde5
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040cdea
    MOV dword ptr [ESP + 0xc],EDX       ; 0040cdee
    FLD double ptr [ESP + 0x8]          ; 0040cdf2
    FLD1                                ; 0040cdf6
    FADDP                               ; 0040cdf8
    FMUL double ptr [0x005d2ec9]        ; 0040cdfa | DAT_005d2ec9
    ADD ESP,0x8                         ; 0040ce00
    FADD float ptr [ESP + 0x10]         ; 0040ce03
    FSTP float ptr [ESP + 0x8]          ; 0040ce07
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ce0b
    ADD ESP,0xc                         ; 0040ce0f
    RET                                 ; 0040ce12

