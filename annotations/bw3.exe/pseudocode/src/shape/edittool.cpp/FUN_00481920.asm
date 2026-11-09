; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481920(undefined4 param_1,float *param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005bd34d
;
; Called Functions:
;   shape_edittool.cpp_FUN_00481350
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00481920
        ;   Label: shape_edittool.cpp_FUN_00481920
    PUSH EDI                            ; 00481921
    PUSH EBP                            ; 00481922
    MOV EBP,ESP                         ; 00481923
    SUB ESP,0x48                        ; 00481925
    MOV EAX,dword ptr [EBP + 0x14]      ; 00481928
    FLD float ptr [0x005bd34d]          ; 0048192b | DAT_005bd34d
    FLD float ptr [EAX]                 ; 00481931
    FMUL ST1                            ; 00481933
    FLD float ptr [EAX + 0x4]           ; 00481935
    FMUL ST2                            ; 00481938
    FLD float ptr [EAX + 0x8]           ; 0048193a
    FMUL ST3                            ; 0048193d
    LEA EDI,[EBP + -0x3c]               ; 0048193f
    LEA ESI,[EBP + -0x30]               ; 00481942
    FXCH ST2                            ; 00481945
    FSTP float ptr [EBP + -0x30]        ; 00481947
    FSTP float ptr [EBP + -0x2c]        ; 0048194a
    FSTP float ptr [EBP + -0x28]        ; 0048194d
    MOVSD ES:EDI,ESI                    ; 00481950
    MOVSD ES:EDI,ESI                    ; 00481951
    MOVSD ES:EDI,ESI                    ; 00481952
    FLD float ptr [EAX]                 ; 00481953
    FLD float ptr [EAX + 0x4]           ; 00481955
    FLD float ptr [EAX + 0x8]           ; 00481958
    LEA EDI,[EBP + -0x18]               ; 0048195b
    LEA ESI,[EBP + -0x48]               ; 0048195e
    FXCH ST2                            ; 00481961
    FCHS                                ; 00481963
    FXCH                                ; 00481965
    FCHS                                ; 00481967
    FXCH ST2                            ; 00481969
    FCHS                                ; 0048196b
    FXCH                                ; 0048196d
    FSTP float ptr [EBP + -0x48]        ; 0048196f
    FXCH                                ; 00481972
    FSTP float ptr [EBP + -0x44]        ; 00481974
    FSTP float ptr [EBP + -0x40]        ; 00481977
    MOVSD ES:EDI,ESI                    ; 0048197a
    MOVSD ES:EDI,ESI                    ; 0048197b
    MOVSD ES:EDI,ESI                    ; 0048197c
    FLD float ptr [EBP + -0x18]         ; 0048197d
    FMUL ST1                            ; 00481980
    MOV EDX,dword ptr [EBP + 0x18]      ; 00481982
    FLD float ptr [EBP + -0x14]         ; 00481985
    FMUL ST2                            ; 00481988
    PUSH EDX                            ; 0048198a
    LEA EDX,[EBP + -0x3c]               ; 0048198b
    FLD float ptr [EBP + -0x10]         ; 0048198e
    FMULP ST3                           ; 00481991
    PUSH EDX                            ; 00481993
    LEA EAX,[EBP + -0x24]               ; 00481994
    MOV ECX,dword ptr [EBP + 0x10]      ; 00481997
    PUSH EAX                            ; 0048199a
    LEA EDI,[EBP + -0x24]               ; 0048199b
    LEA ESI,[EBP + -0xc]                ; 0048199e
    PUSH ECX                            ; 004819a1
    FXCH                                ; 004819a2
    FSTP float ptr [EBP + -0xc]         ; 004819a4
    FSTP float ptr [EBP + -0x8]         ; 004819a7
    FSTP float ptr [EBP + -0x4]         ; 004819aa
    MOVSD ES:EDI,ESI                    ; 004819ad
    MOVSD ES:EDI,ESI                    ; 004819ae
    MOVSD ES:EDI,ESI                    ; 004819af
    CALL shape_edittool.cpp_FUN_00481350 ; 004819b0
        ;   XREF to: 00481350 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00481350()
    ADD ESP,0x10                        ; 004819b5
    MOV ESP,EBP                         ; 004819b8
    POP EBP                             ; 004819ba
    POP EDI                             ; 004819bb
    POP ESI                             ; 004819bc
    RET                                 ; 004819bd

