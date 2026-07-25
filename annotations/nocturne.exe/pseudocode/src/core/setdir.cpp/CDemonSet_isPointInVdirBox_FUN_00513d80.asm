; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(int param_1,int param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_00513e20 at 00513e69
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340 at 0051435a
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513d80
        ;   Label: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
    PUSH EBP                            ; 00513d81
    MOV EBP,ESP                         ; 00513d82
    SUB ESP,0x18                        ; 00513d84
    AND ESP,0xfffffff8                  ; 00513d87
    MOV EDX,dword ptr [EBP + 0x14]      ; 00513d8a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00513d8d
    MOV EAX,EBX                         ; 00513d90
    SHL EAX,0x4                         ; 00513d92
    ADD EAX,EBX                         ; 00513d95
    MOV EBX,dword ptr [EBP + 0xc]       ; 00513d97
    SHL EAX,0x2                         ; 00513d9a
    ADD EBX,0x15b02c                    ; 00513d9d
    ADD EBX,EAX                         ; 00513da3
    FLD float ptr [EDX]                 ; 00513da5
    FSUB float ptr [EBX]                ; 00513da7
    LEA EAX,[ESP + 0xc]                 ; 00513da9
    FSTP float ptr [ESP + 0xc]          ; 00513dad
    PUSH EAX                            ; 00513db1
    FLD float ptr [EDX + 0x4]           ; 00513db2
    LEA EAX,[ESP + 0x4]                 ; 00513db5
    FSUB float ptr [EBX + 0x4]          ; 00513db9
    PUSH EAX                            ; 00513dbc
    FSTP float ptr [ESP + 0x18]         ; 00513dbd
    LEA EAX,[EBX + 0x18]                ; 00513dc1
    FLD float ptr [EDX + 0x8]           ; 00513dc4
    FSUB float ptr [EBX + 0x8]          ; 00513dc7
    PUSH EAX                            ; 00513dca
    FSTP float ptr [ESP + 0x20]         ; 00513dcb
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00513dcf
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 00513dd4
    FLD float ptr [EBX + 0xc]           ; 00513dd7
    FLD float ptr [ESP]                 ; 00513dda
    FABS                                ; 00513ddd
    FCOMPP                              ; 00513ddf
    FNSTSW AX                           ; 00513de1
    SAHF                                ; 00513de3
    JA 0x00513e06                       ; 00513de4
        ;   XREF to: 00513e06 (CONDITIONAL_JUMP)  ; LAB_00513e06
    FLD float ptr [ESP + 0x4]           ; 00513de6
    FABS                                ; 00513dea
    FLD float ptr [EBX + 0x10]          ; 00513dec
    FCOMPP                              ; 00513def
    FNSTSW AX                           ; 00513df1
    SAHF                                ; 00513df3
    JC 0x00513e06                       ; 00513df4
        ;   XREF to: 00513e06 (CONDITIONAL_JUMP)  ; LAB_00513e06
    FLD float ptr [ESP + 0x8]           ; 00513df6
    FABS                                ; 00513dfa
    FLD float ptr [EBX + 0x14]          ; 00513dfc
    FCOMPP                              ; 00513dff
    FNSTSW AX                           ; 00513e01
    SAHF                                ; 00513e03
    JNC 0x00513e0d                      ; 00513e04
        ;   XREF to: 00513e0d (CONDITIONAL_JUMP)  ; LAB_00513e0d
    XOR EAX,EAX                         ; 00513e06
        ;   Label: LAB_00513e06
    MOV ESP,EBP                         ; 00513e08
    POP EBP                             ; 00513e0a
    POP EBX                             ; 00513e0b
    RET                                 ; 00513e0c
    MOV EAX,0x1                         ; 00513e0d
        ;   Label: LAB_00513e0d
    MOV ESP,EBP                         ; 00513e12
    POP EBP                             ; 00513e14
    POP EBX                             ; 00513e15
    RET                                 ; 00513e16

