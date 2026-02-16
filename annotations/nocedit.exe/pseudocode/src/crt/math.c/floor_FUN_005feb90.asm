; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_floor_FUN_005feb90(double input_value)
;
; Parameters:
; double           Stack[0x4]:8   input_value
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[39]:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 at 0040cdf8
;   core_bat.cpp_CBat_FUN_00414ce0 at 00414d2c
;   core_bat.cpp_FUN_004146f0 at 00414719
;   core_boneguy.cpp_hsvToRgb_FUN_0041ba10 at 0041bb27
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421a1f
;   core_bugs.cpp_CBugs_FUN_004257f0 at 004258c4
;   core_conveyor.cpp_FUN_00442400 at 00442429
;   core_course.cpp_CCourse_FUN_004427a0 at 004429b3
;   core_course.cpp_CCourse_FUN_00443bc0 at 00443c51
;   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370 at 0047c3c4
;   ... and 29 more
;
; Referenced Globals:
;   double g_MathDomainAdjustment = -1
;
; Called Functions:
;   crt_math.c_modf_FUN_00602102
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005feb90
        ;   Label: crt_math.c_floor_FUN_005feb90
    MOV EBP,ESP                         ; 005feb91
    PUSH EBX                            ; 005feb93
    SUB ESP,0x10                        ; 005feb94
    LEA EAX,[EBP + -0x14]               ; 005feb97
    PUSH EAX                            ; 005feb9a
    MOV EDX,dword ptr [EBP + 0xc]       ; 005feb9b
    PUSH EDX                            ; 005feb9e
    MOV EBX,dword ptr [EBP + 0x8]       ; 005feb9f
    PUSH EBX                            ; 005feba2
    CALL crt_math.c_modf_FUN_00602102   ; 005feba3
        ;   XREF to: 00602102 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_00602102(double value, double * integer_part)
    MOV dword ptr [EBP + -0xc],EAX      ; 005feba8
    MOV dword ptr [EBP + -0x8],EDX      ; 005febab
    ADD ESP,0xc                         ; 005febae
    FLD double ptr [EBP + -0xc]         ; 005febb1
    FLDZ                                ; 005febb4
    FCOMPP                              ; 005febb6
    FNSTSW AX                           ; 005febb8
    SAHF                                ; 005febba
    JBE 0x005febc9                      ; 005febbb
        ;   XREF to: 005febc9 (CONDITIONAL_JUMP)  ; LAB_005febc9
    FLD double ptr [EBP + -0x14]        ; 005febbd
    FADD double ptr [0x00658aec]        ; 005febc0 | g_MathDomainAdjustment
    FSTP double ptr [EBP + -0x14]       ; 005febc6
    MOV EAX,dword ptr [EBP + -0x14]     ; 005febc9
        ;   Label: LAB_005febc9
    MOV EDX,dword ptr [EBP + -0x10]     ; 005febcc
    LEA ESP,[EBP + -0x4]                ; 005febcf
    POP EBX                             ; 005febd2
    POP EBP                             ; 005febd3
    RET                                 ; 005febd4

