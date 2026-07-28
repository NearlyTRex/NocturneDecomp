; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_initializeSynthesisDctTable_FUN_004e3f80(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_0058b680
;   undefined4 DAT_0058b688
;   undefined4 DAT_0058b690
;   undefined4 DAT_0058b698
;   undefined4 DAT_0058b6a0
;   undefined4 DAT_0058b6a8
;
; Called Functions:
;   crt_math.c_modf_FUN_00566fb6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3f80
        ;   Label: sound_mp3.cpp_initializeSynthesisDctTable_FUN_004e3f80
    PUSH ESI                            ; 004e3f81
    PUSH EDI                            ; 004e3f82
    PUSH EBP                            ; 004e3f83
    MOV EBP,ESP                         ; 004e3f84
    SUB ESP,0x24                        ; 004e3f86
    AND ESP,0xfffffff8                  ; 004e3f89
    XOR EDX,EDX                         ; 004e3f8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3f8e
    MOV dword ptr [ESP + 0x10],EDX      ; 004e3f91
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e3f95
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e3f99
        ;   Label: LAB_004e3f99
    MOV ESI,0x1                         ; 004e3f9d
    MOV EDI,EBX                         ; 004e3fa2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e3fa4
        ;   Label: LAB_004e3fa4
    MOV dword ptr [ESP + 0x20],EAX      ; 004e3fa8
    FILD dword ptr [ESP + 0x20]         ; 004e3fac
    FMUL double ptr [0x0058b680]        ; 004e3fb0 | DAT_0058b680
    FADD double ptr [0x0058b698]        ; 004e3fb6 | DAT_0058b698
    MOV dword ptr [ESP + 0x20],ESI      ; 004e3fbc
    FILD dword ptr [ESP + 0x20]         ; 004e3fc0
    FMULP                               ; 004e3fc4
    FCOS                                ; 004e3fc6
    FMUL double ptr [0x0058b688]        ; 004e3fc8 | DAT_0058b688
    FLDZ                                ; 004e3fce
    FXCH                                ; 004e3fd0
    FSTP float ptr [EBX]                ; 004e3fd2
    FCOMP float ptr [EBX]               ; 004e3fd4
    FNSTSW AX                           ; 004e3fd6
    SAHF                                ; 004e3fd8
    JBE 0x004e4042                      ; 004e3fd9
        ;   XREF to: 004e4042 (CONDITIONAL_JUMP)  ; LAB_004e4042
    FLD float ptr [EBX]                 ; 004e3fdb
    MOV EAX,ESP                         ; 004e3fdd
    FSTP double ptr [ESP]               ; 004e3fdf
    FLD float ptr [EBX]                 ; 004e3fe2
    PUSH EAX                            ; 004e3fe4
    FADD double ptr [0x0058b6a0]        ; 004e3fe5 | DAT_0058b6a0
    SUB ESP,0x8                         ; 004e3feb
    FSTP double ptr [ESP]               ; 004e3fee
    CALL crt_math.c_modf_FUN_00566fb6   ; 004e3ff1
        ;   XREF to: 00566fb6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_modf_FUN_00566fb6()
    ADD ESP,0xc                         ; 004e3ff6
    FLD double ptr [ESP]                ; 004e3ff9
    FSTP float ptr [EBX]                ; 004e3ffc
        ;   Label: LAB_004e3ffc
    FLD float ptr [EDI]                 ; 004e3ffe
    FLD ST0                             ; 004e4000
    FMUL double ptr [0x0058b690]        ; 004e4002 | DAT_0058b690
    ADD EBX,0x4                         ; 004e4008
    ADD ESI,0x2                         ; 004e400b
    ADD EDI,0x4                         ; 004e400e
    FSTP ST1                            ; 004e4011
    FSTP float ptr [EDI + -0x4]         ; 004e4013
    CMP ESI,0x41                        ; 004e4016
    JNZ 0x004e3fa4                      ; 004e4019
        ;   XREF to: 004e3fa4 (CONDITIONAL_JUMP)  ; LAB_004e3fa4
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e401b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e401f
    INC EBX                             ; 004e4023
    ADD ECX,0x80                        ; 004e4024
    MOV dword ptr [ESP + 0x10],EBX      ; 004e402a
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e402e
    CMP EBX,0x40                        ; 004e4032
    JL 0x004e3f99                       ; 004e4035
        ;   XREF to: 004e3f99 (CONDITIONAL_JUMP)  ; LAB_004e3f99
    MOV ESP,EBP                         ; 004e403b
    POP EBP                             ; 004e403d
    POP EDI                             ; 004e403e
    POP ESI                             ; 004e403f
    POP EBX                             ; 004e4040
    RET                                 ; 004e4041
    FLD float ptr [EBX]                 ; 004e4042
        ;   Label: LAB_004e4042
    LEA EAX,[ESP + 0x8]                 ; 004e4044
    FSTP double ptr [ESP + 0x8]         ; 004e4048
    FLD float ptr [EBX]                 ; 004e404c
    PUSH EAX                            ; 004e404e
    FADD double ptr [0x0058b6a8]        ; 004e404f | DAT_0058b6a8
    SUB ESP,0x8                         ; 004e4055
    FSTP double ptr [ESP]               ; 004e4058
    CALL crt_math.c_modf_FUN_00566fb6   ; 004e405b
        ;   XREF to: 00566fb6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_modf_FUN_00566fb6()
    ADD ESP,0xc                         ; 004e4060
    FLD double ptr [ESP + 0x8]          ; 004e4063
    JMP 0x004e3ffc                      ; 004e4067
        ;   XREF to: 004e3ffc (UNCONDITIONAL_JUMP)  ; LAB_004e3ffc

