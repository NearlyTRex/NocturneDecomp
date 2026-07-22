; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_math_c_floor_FUN_005648c0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined        Stack[-0x8]:1  local_8
;
; XREF[26]:
;   FUN_00411940 at 00411969
;   FUN_0046b650 at 0046b66d
;   FUN_00494e80 at 00494faf
;   FUN_005464a0 at 00546607
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00 at 0040df4c
;   core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20 at 00411f6c
;   core_bat.cpp_fmodfPositive_FUN_0043b510 at 0043b539
;   core_boneguy.cpp_hsvToRgb_FUN_00418480 at 00418597
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e61f
;   core_bugs.cpp_FUN_00421b80 at 00421c27
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_005989b0
;
; Called Functions:
;   crt_math.c_modf_FUN_00566fb6
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005648c0
        ;   Label: crt_math.c_floor_FUN_005648c0
    MOV EBP,ESP                         ; 005648c1
    PUSH EBX                            ; 005648c3
    SUB ESP,0x10                        ; 005648c4
    LEA EAX,[EBP + -0x14]               ; 005648c7
    PUSH EAX                            ; 005648ca
    MOV EDX,dword ptr [EBP + 0xc]       ; 005648cb
    PUSH EDX                            ; 005648ce
    MOV EBX,dword ptr [EBP + 0x8]       ; 005648cf
    PUSH EBX                            ; 005648d2
    CALL crt_math.c_modf_FUN_00566fb6   ; 005648d3
        ;   XREF to: 00566fb6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_modf_FUN_00566fb6()
    MOV dword ptr [EBP + -0xc],EAX      ; 005648d8
    MOV dword ptr [EBP + -0x8],EDX      ; 005648db
    ADD ESP,0xc                         ; 005648de
    FLD double ptr [EBP + -0xc]         ; 005648e1
    FLDZ                                ; 005648e4
    FCOMPP                              ; 005648e6
    FNSTSW AX                           ; 005648e8
    SAHF                                ; 005648ea
    JBE 0x005648f9                      ; 005648eb
        ;   XREF to: 005648f9 (CONDITIONAL_JUMP)  ; LAB_005648f9
    FLD double ptr [EBP + -0x14]        ; 005648ed
    FADD double ptr [0x005989b0]        ; 005648f0 | DAT_005989b0
    FSTP double ptr [EBP + -0x14]       ; 005648f6
    MOV EAX,dword ptr [EBP + -0x14]     ; 005648f9
        ;   Label: LAB_005648f9
    MOV EDX,dword ptr [EBP + -0x10]     ; 005648fc
    LEA ESP,[EBP + -0x4]                ; 005648ff
    POP EBX                             ; 00564902
    POP EBP                             ; 00564903
    RET                                 ; 00564904

