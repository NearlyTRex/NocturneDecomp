; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double sound_mp3_cpp_initializeSynthesisDctTable_FUN_00505fbe(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dfffb
;   undefined4 DAT_005e0003
;   undefined4 DAT_005e000b
;   undefined4 DAT_005e0013
;   undefined4 DAT_005e001b
;   undefined4 DAT_005e0023
;
; Called Functions:
;   crt_math.c_modf_FUN_005bada6
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00505fbe
        ;   Label: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00505fbe
    PUSH EBX                            ; 00505fc0
    PUSH ESI                            ; 00505fc1
    PUSH EDI                            ; 00505fc2
    PUSH EBP                            ; 00505fc3
    MOV EBP,ESP                         ; 00505fc4
    SUB ESP,0x24                        ; 00505fc6
    AND ESP,0xfffffff8                  ; 00505fc9
    XOR EDX,EDX                         ; 00505fcc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505fce
    MOV dword ptr [ESP + 0x10],EDX      ; 00505fd1
    MOV dword ptr [ESP + 0x1c],EAX      ; 00505fd5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00505fd9
        ;   Label: LAB_00505fd9
    MOV ESI,0x1                         ; 00505fdd
    MOV EDI,EBX                         ; 00505fe2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00505fe4
        ;   Label: LAB_00505fe4
    MOV dword ptr [ESP + 0x20],EAX      ; 00505fe8
    FILD dword ptr [ESP + 0x20]         ; 00505fec
    FMUL double ptr [0x005dfffb]        ; 00505ff0 | DAT_005dfffb
    FADD double ptr [0x005e0013]        ; 00505ff6 | DAT_005e0013
    MOV dword ptr [ESP + 0x20],ESI      ; 00505ffc
    FILD dword ptr [ESP + 0x20]         ; 00506000
    FMULP                               ; 00506004
    FCOS                                ; 00506006
    FMUL double ptr [0x005e0003]        ; 00506008 | DAT_005e0003
    FLDZ                                ; 0050600e
    FXCH                                ; 00506010
    FSTP float ptr [EBX]                ; 00506012
    FCOMP float ptr [EBX]               ; 00506014
    FNSTSW AX                           ; 00506016
    SAHF                                ; 00506018
    JBE 0x00506082                      ; 00506019
        ;   XREF to: 00506082 (CONDITIONAL_JUMP)  ; LAB_00506082
    FLD float ptr [EBX]                 ; 0050601b
    MOV EAX,ESP                         ; 0050601d
    FSTP double ptr [ESP]               ; 0050601f
    FLD float ptr [EBX]                 ; 00506022
    PUSH EAX                            ; 00506024
    FADD double ptr [0x005e001b]        ; 00506025 | DAT_005e001b
    SUB ESP,0x8                         ; 0050602b
    FSTP double ptr [ESP]               ; 0050602e
    CALL crt_math.c_modf_FUN_005bada6   ; 00506031
        ;   XREF to: 005bada6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005bada6(double value, double * integer_part)
    ADD ESP,0xc                         ; 00506036
    FLD double ptr [ESP]                ; 00506039
    FSTP float ptr [EBX]                ; 0050603c
        ;   Label: LAB_0050603c
    FLD float ptr [EDI]                 ; 0050603e
    FLD ST0                             ; 00506040
    FMUL double ptr [0x005e000b]        ; 00506042 | DAT_005e000b
    ADD EBX,0x4                         ; 00506048
    ADD ESI,0x2                         ; 0050604b
    ADD EDI,0x4                         ; 0050604e
    FSTP ST1                            ; 00506051
    FSTP float ptr [EDI + -0x4]         ; 00506053
    CMP ESI,0x41                        ; 00506056
    JNZ 0x00505fe4                      ; 00506059
        ;   XREF to: 00505fe4 (CONDITIONAL_JUMP)  ; LAB_00505fe4
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050605b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050605f
    INC EBX                             ; 00506063
    ADD ECX,0x80                        ; 00506064
    MOV dword ptr [ESP + 0x10],EBX      ; 0050606a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0050606e
    CMP EBX,0x40                        ; 00506072
    JL 0x00505fd9                       ; 00506075
        ;   XREF to: 00505fd9 (CONDITIONAL_JUMP)  ; LAB_00505fd9
    MOV ESP,EBP                         ; 0050607b
    POP EBP                             ; 0050607d
    POP EDI                             ; 0050607e
    POP ESI                             ; 0050607f
    POP EBX                             ; 00506080
    RET                                 ; 00506081
    FLD float ptr [EBX]                 ; 00506082
        ;   Label: LAB_00506082
    LEA EAX,[ESP + 0x8]                 ; 00506084
    FSTP double ptr [ESP + 0x8]         ; 00506088
    FLD float ptr [EBX]                 ; 0050608c
    PUSH EAX                            ; 0050608e
    FADD double ptr [0x005e0023]        ; 0050608f | DAT_005e0023
    SUB ESP,0x8                         ; 00506095
    FSTP double ptr [ESP]               ; 00506098
    CALL crt_math.c_modf_FUN_005bada6   ; 0050609b
        ;   XREF to: 005bada6 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_005bada6(double value, double * integer_part)
    ADD ESP,0xc                         ; 005060a0
    FLD double ptr [ESP + 0x8]          ; 005060a3
    JMP 0x0050603c                      ; 005060a7
        ;   XREF to: 0050603c (UNCONDITIONAL_JUMP)  ; LAB_0050603c

