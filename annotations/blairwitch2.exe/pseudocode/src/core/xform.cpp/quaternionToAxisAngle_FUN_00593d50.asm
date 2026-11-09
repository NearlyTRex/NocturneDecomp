; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionToAxisAngle_FUN_00593d50(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 at 00546f7a
;
; Referenced Globals:
;   undefined4 DAT_005eed9a
;   undefined4 DAT_005eed9e
;
; Called Functions:
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593d50
        ;   Label: core_xform.cpp_quaternionToAxisAngle_FUN_00593d50
    PUSH EBP                            ; 00593d51
    MOV EBP,ESP                         ; 00593d52
    SUB ESP,0x8                         ; 00593d54
    AND ESP,0xfffffff8                  ; 00593d57
    MOV ECX,dword ptr [EBP + 0xc]       ; 00593d5a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00593d5d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00593d60
    TEST EBX,EBX                        ; 00593d63
    JZ 0x00593d7a                       ; 00593d65
        ;   XREF to: 00593d7a (CONDITIONAL_JUMP)  ; LAB_00593d7a
    FLD float ptr [ECX]                 ; 00593d67
    FCOMP float ptr [0x005eed9a]        ; 00593d69 | DAT_005eed9a
    FNSTSW AX                           ; 00593d6f
    SAHF                                ; 00593d71
    JA 0x00593dac                       ; 00593d72
        ;   XREF to: 00593dac (CONDITIONAL_JUMP)  ; LAB_00593dac
    MOV dword ptr [EBX],0x40c90fdb      ; 00593d74
    TEST EDX,EDX                        ; 00593d7a
        ;   Label: LAB_00593d7a
    JZ 0x00593da7                       ; 00593d7c
        ;   XREF to: 00593da7 (CONDITIONAL_JUMP)  ; LAB_00593da7
    FLD float ptr [ECX]                 ; 00593d7e
    FMUL ST0                            ; 00593d80
    FLD1                                ; 00593d82
    FSUBRP                              ; 00593d84
    FLDZ                                ; 00593d86
    FXCH                                ; 00593d88
    FSTP float ptr [ESP]                ; 00593d8a
    FCOMP float ptr [ESP]               ; 00593d8d
    FNSTSW AX                           ; 00593d90
    SAHF                                ; 00593d92
    JC 0x00593dcd                       ; 00593d93
        ;   XREF to: 00593dcd (CONDITIONAL_JUMP)  ; LAB_00593dcd
    MOV dword ptr [EDX + 0x8],0x0       ; 00593d95
    MOV EAX,dword ptr [EDX + 0x8]       ; 00593d9c
    MOV dword ptr [EDX + 0x4],EAX       ; 00593d9f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00593da2
    MOV dword ptr [EDX],EAX             ; 00593da5
    MOV ESP,EBP                         ; 00593da7
        ;   Label: LAB_00593da7
    POP EBP                             ; 00593da9
    POP EBX                             ; 00593daa
    RET                                 ; 00593dab
    CMP dword ptr [ECX],0x3f800000      ; 00593dac
        ;   Label: LAB_00593dac
    JL 0x00593dbc                       ; 00593db2
        ;   XREF to: 00593dbc (CONDITIONAL_JUMP)  ; LAB_00593dbc
    MOV dword ptr [EBX],0x0             ; 00593db4
    JMP 0x00593d7a                      ; 00593dba
        ;   XREF to: 00593d7a (UNCONDITIONAL_JUMP)  ; LAB_00593d7a
    FLD float ptr [ECX]                 ; 00593dbc
        ;   Label: LAB_00593dbc
    CALL crt_math.c_acos_FUN_005b9924   ; 00593dbe
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FMUL double ptr [0x005eed9e]        ; 00593dc3 | DAT_005eed9e
    FSTP float ptr [EBX]                ; 00593dc9
    JMP 0x00593d7a                      ; 00593dcb
        ;   XREF to: 00593d7a (UNCONDITIONAL_JUMP)  ; LAB_00593d7a
    FLD float ptr [ESP]                 ; 00593dcd
        ;   Label: LAB_00593dcd
    FSQRT                               ; 00593dd0
    FLD float ptr [ECX + 0x4]           ; 00593dd2
    FLD1                                ; 00593dd5
    FDIVRP ST2,ST0                      ; 00593dd7
    FMUL ST1                            ; 00593dd9
    FSTP float ptr [EDX]                ; 00593ddb
    FLD float ptr [ECX + 0x8]           ; 00593ddd
    FMUL ST1                            ; 00593de0
    FSTP float ptr [EDX + 0x4]          ; 00593de2
    FMUL float ptr [ECX + 0xc]          ; 00593de5
    FSTP float ptr [EDX + 0x8]          ; 00593de8
    MOV ESP,EBP                         ; 00593deb
    POP EBP                             ; 00593ded
    POP EBX                             ; 00593dee
    RET                                 ; 00593def

