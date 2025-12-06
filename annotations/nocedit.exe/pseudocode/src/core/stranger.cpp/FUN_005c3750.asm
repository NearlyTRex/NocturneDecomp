; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_FUN_005c3750()
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_00653c84 = 0.0100000000000000
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3750
        ;   Label: core_stranger.cpp_FUN_005c3750
    PUSH EBP                            ; 005c3751
    MOV EBP,ESP                         ; 005c3752
    SUB ESP,0x18                        ; 005c3754
    AND ESP,0xfffffff8                  ; 005c3757
    MOV EBX,dword ptr [EBP + 0xc]       ; 005c375a
    FLD float ptr [EBP + 0x10]          ; 005c375d
    FST double ptr [ESP + 0x8]          ; 005c3760
    FCOMP double ptr [0x00653c84]       ; 005c3764 | double DOUBLE_00653c84
    FNSTSW AX                           ; 005c376a
    SAHF                                ; 005c376c
    JC 0x005c37ce                       ; 005c376d | LAB_005c37ce
        ;   XREF to: 005c37ce (CONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x10]          ; 005c376f
    FMUL ST0                            ; 005c3772
    FLD float ptr [EBP + 0x14]          ; 005c3774
    FMUL ST0                            ; 005c3777
    FSUBP                               ; 005c3779
    FSQRT                               ; 005c377b
    FDIV double ptr [ESP + 0x8]         ; 005c377d
    FLD1                                ; 005c3781
    FXCH                                ; 005c3783
    FSTP double ptr [ESP]               ; 005c3785
    FCOMP double ptr [ESP]              ; 005c3788
    FNSTSW AX                           ; 005c378b
    SAHF                                ; 005c378d
    JBE 0x005c37ce                      ; 005c378e | LAB_005c37ce
        ;   XREF to: 005c37ce (CONDITIONAL_JUMP)
    FLDZ                                ; 005c3790
    FCOMP double ptr [ESP]              ; 005c3792
    FNSTSW AX                           ; 005c3795
    SAHF                                ; 005c3797
    JA 0x005c37ce                       ; 005c3798 | LAB_005c37ce
        ;   XREF to: 005c37ce (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 005c379a
    CALL crt_math.c_acos_FUN_00600162   ; 005c379d | double crt_math.c_acos_FUN_00600162(double x)
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)
    FLDZ                                ; 005c37a2
    FXCH                                ; 005c37a4
    FSTP float ptr [ESP + 0x10]         ; 005c37a6
    FCOMP float ptr [EBP + 0x14]        ; 005c37aa
    FNSTSW AX                           ; 005c37ad
    SAHF                                ; 005c37af
    JA 0x005c37d3                       ; 005c37b0 | LAB_005c37d3
        ;   XREF to: 005c37d3 (CONDITIONAL_JUMP)
    FLD float ptr [EBX]                 ; 005c37b2
    FADD float ptr [ESP + 0x10]         ; 005c37b4
    FSTP float ptr [EBX]                ; 005c37b8
        ;   Label: LAB_005c37b8
    PUSH dword ptr [EBX]                ; 005c37ba
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c37bc | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x18],EAX      ; 005c37c1
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c37c5
    MOV dword ptr [EBX],EAX             ; 005c37c9
    ADD ESP,0x4                         ; 005c37cb
    MOV ESP,EBP                         ; 005c37ce
        ;   Label: LAB_005c37ce
    POP EBP                             ; 005c37d0
    POP EBX                             ; 005c37d1
    RET                                 ; 005c37d2
    FLD float ptr [EBX]                 ; 005c37d3
        ;   Label: LAB_005c37d3
    FSUB float ptr [ESP + 0x10]         ; 005c37d5
    JMP 0x005c37b8                      ; 005c37d9 | LAB_005c37b8
        ;   XREF to: 005c37b8 (UNCONDITIONAL_JUMP)

