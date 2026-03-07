; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[58]:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 at 00408c47
;   core_baron.cpp_CBaron_performLightningAttack_FUN_004136b0 at 0041373e
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 004158ba
;   core_batman.cpp_CBatman_process_FUN_00416870 at 0041707e
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421b49
;   core_bugs.cpp_CBugs_FUN_00426420 at 004266cf
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042dc5c
;   core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 at 0042c78f
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 at 0042cc1a
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00428d80 at 00428dbe
;   ... and 48 more
;
; Referenced Globals:
;   double DOUBLE_00614310 = -3.14159265350000
;   double DOUBLE_00614318 = 3.14159265350000
;   double DOUBLE_00614320 = 0.159154943096444
;   double DOUBLE_00614328 = -6.28318530700000
;   double DOUBLE_00614330 = -0.159154943096444
;   double DOUBLE_00614338 = 6.28318530700000
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0040cd70
        ;   Label: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
    MOV EBP,ESP                         ; 0040cd71
    SUB ESP,0x14                        ; 0040cd73
    AND ESP,0xfffffff8                  ; 0040cd76
    FLD float ptr [EBP + 0x8]           ; 0040cd79
    FST double ptr [ESP]                ; 0040cd7c
    FCOMP double ptr [0x00614310]       ; 0040cd7f | DOUBLE_00614310
    FNSTSW AX                           ; 0040cd85
    SAHF                                ; 0040cd87
    JC 0x0040cda7                       ; 0040cd88
        ;   XREF to: 0040cda7 (CONDITIONAL_JUMP)  ; LAB_0040cda7
    FLD double ptr [ESP]                ; 0040cd8a
    FCOMP double ptr [0x00614318]       ; 0040cd8d | DOUBLE_00614318
    FNSTSW AX                           ; 0040cd93
    SAHF                                ; 0040cd95
    JA 0x0040cde3                       ; 0040cd96
        ;   XREF to: 0040cde3 (CONDITIONAL_JUMP)  ; LAB_0040cde3
    MOV EAX,dword ptr [EBP + 0x8]       ; 0040cd98
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cd9b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040cd9f
        ;   Label: LAB_0040cd9f
    MOV ESP,EBP                         ; 0040cda3
    POP EBP                             ; 0040cda5
    RET                                 ; 0040cda6
    FLD double ptr [ESP]                ; 0040cda7
        ;   Label: LAB_0040cda7
    FADD double ptr [0x00614318]        ; 0040cdaa | DOUBLE_00614318
    FMUL double ptr [0x00614330]        ; 0040cdb0 | DOUBLE_00614330
    SUB ESP,0x8                         ; 0040cdb6
    FSTP double ptr [ESP]               ; 0040cdb9
    CALL crt_math.c_floor_FUN_005feb90  ; 0040cdbc
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cdc1
    MOV dword ptr [ESP + 0x14],EDX      ; 0040cdc5
    FLD double ptr [ESP + 0x10]         ; 0040cdc9
    FLD1                                ; 0040cdcd
    FADDP                               ; 0040cdcf
    FMUL double ptr [0x00614338]        ; 0040cdd1 | DOUBLE_00614338
    ADD ESP,0x8                         ; 0040cdd7
    FADD double ptr [ESP]               ; 0040cdda
    FSTP float ptr [ESP + 0x10]         ; 0040cddd
    JMP 0x0040cd9f                      ; 0040cde1
        ;   XREF to: 0040cd9f (UNCONDITIONAL_JUMP)  ; LAB_0040cd9f
    FLD double ptr [ESP]                ; 0040cde3
        ;   Label: LAB_0040cde3
    FADD double ptr [0x00614310]        ; 0040cde6 | DOUBLE_00614310
    FMUL double ptr [0x00614320]        ; 0040cdec | DOUBLE_00614320
    SUB ESP,0x8                         ; 0040cdf2
    FSTP double ptr [ESP]               ; 0040cdf5
    CALL crt_math.c_floor_FUN_005feb90  ; 0040cdf8
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cdfd
    MOV dword ptr [ESP + 0x14],EDX      ; 0040ce01
    FLD double ptr [ESP + 0x10]         ; 0040ce05
    FLD1                                ; 0040ce09
    FADDP                               ; 0040ce0b
    FMUL double ptr [0x00614328]        ; 0040ce0d | DOUBLE_00614328
    ADD ESP,0x8                         ; 0040ce13
    FADD double ptr [ESP]               ; 0040ce16
    FSTP float ptr [ESP + 0x10]         ; 0040ce19
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040ce1d
    MOV ESP,EBP                         ; 0040ce21
    POP EBP                             ; 0040ce23
    RET                                 ; 0040ce24

