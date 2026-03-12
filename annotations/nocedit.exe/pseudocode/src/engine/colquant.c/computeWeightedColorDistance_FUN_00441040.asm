; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl engine_colquant_c_computeWeightedColorDistance_FUN_00441040(SColorQuantMapper *workspace,int box_index,int color_index)
;
; Parameters:
; SColorQuantMapper * Stack[0x4]:4   workspace
; int              Stack[0x8]:4   box_index
; int              Stack[0xc]:4   color_index
;
; XREF[1]:
;   engine_colquant.c_refinePartitionByDistance_FUN_00441110 at 00441162
;
; Referenced Globals:
;   double DOUBLE_00618da1 = 0.300000000000000
;   double DOUBLE_00618da9 = 0.590000000000000
;   double DOUBLE_00618db1 = 0.110000000000000
;   double DOUBLE_00618db9 = 0.700000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441040
        ;   Label: engine_colquant.c_computeWeightedColorDistance_FUN_00441040
    SUB ESP,0x30                        ; 00441041
    MOV EBX,dword ptr [ESP + 0x38]      ; 00441044
    MOV EDX,dword ptr [ESP + 0x40]      ; 00441048
    MOV EAX,dword ptr [EBX + 0x2004]    ; 0044104c
    SHL EDX,0x2                         ; 00441052
    ADD EDX,EAX                         ; 00441055
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00441057
    SHL EAX,0x6                         ; 0044105b
    ADD EAX,EBX                         ; 0044105e
    XOR ECX,ECX                         ; 00441060
    MOV EBX,dword ptr [EAX + 0x4006]    ; 00441062
    MOV CL,byte ptr [EDX]               ; 00441068
    SAR EBX,0x10                        ; 0044106a
    SUB ECX,EBX                         ; 0044106d
    MOV dword ptr [ESP + 0x28],ECX      ; 0044106f
    XOR EBX,EBX                         ; 00441073
    MOV ECX,dword ptr [EAX + 0x4008]    ; 00441075
    MOV BL,byte ptr [EDX + 0x1]         ; 0044107b
    SAR ECX,0x10                        ; 0044107e
    SUB EBX,ECX                         ; 00441081
    MOV dword ptr [ESP + 0x2c],EBX      ; 00441083
    XOR ECX,ECX                         ; 00441087
    MOV EBX,dword ptr [EAX + 0x400a]    ; 00441089
    MOV CL,byte ptr [EDX + 0x2]         ; 0044108f
    SAR EBX,0x10                        ; 00441092
    FILD dword ptr [ESP + 0x28]         ; 00441095
    SUB ECX,EBX                         ; 00441099
    FILD dword ptr [ESP + 0x2c]         ; 0044109b
    MOV dword ptr [ESP + 0x2c],ECX      ; 0044109f
    MOV DL,byte ptr [EDX + 0x3]         ; 004410a3
    FILD dword ptr [ESP + 0x2c]         ; 004410a6
    FLD ST2                             ; 004410aa
    FMULP ST3                           ; 004410ac
    FXCH ST2                            ; 004410ae
    FMUL double ptr [0x00618da1]        ; 004410b0 | DOUBLE_00618da1
    FLD ST1                             ; 004410b6
    FMULP ST2                           ; 004410b8
    FXCH                                ; 004410ba
    FMUL double ptr [0x00618da9]        ; 004410bc | DOUBLE_00618da9
    AND EDX,0xff                        ; 004410c2
    MOV EAX,dword ptr [EAX + 0x400c]    ; 004410c8
    FADDP                               ; 004410ce
    SAR EAX,0x10                        ; 004410d0
    FLD ST1                             ; 004410d3
    FMULP ST2                           ; 004410d5
    SUB EDX,EAX                         ; 004410d7
    FXCH                                ; 004410d9
    FMUL double ptr [0x00618db1]        ; 004410db | DOUBLE_00618db1
    MOV dword ptr [ESP + 0x2c],EDX      ; 004410e1
    FADDP                               ; 004410e5
    FILD dword ptr [ESP + 0x2c]         ; 004410e7
    FMUL ST0                            ; 004410eb
    FMUL double ptr [0x00618db9]        ; 004410ed | DOUBLE_00618db9
    FADDP                               ; 004410f3
    FSTP double ptr [ESP + 0x10]        ; 004410f5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004410f9
    MOV EDX,dword ptr [ESP + 0x14]      ; 004410fd
    ADD ESP,0x30                        ; 00441101
    POP EBX                             ; 00441104
    RET                                 ; 00441105

