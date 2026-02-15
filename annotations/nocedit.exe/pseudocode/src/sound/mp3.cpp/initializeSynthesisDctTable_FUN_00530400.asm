; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table)
;
; Parameters:
; float *          Stack[0x4]:4   output_dct_table
; Local Variables:
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_0063ae2a = 0.0490873852120000
;   double DOUBLE_0063ae32 = 1000000000
;   double DOUBLE_0063ae3a = 1.00000000000000E-9
;   double DOUBLE_0063ae42 = 0.785398163397000
;   double DOUBLE_0063ae4a = -0.5
;   double DOUBLE_0063ae52 = 0.5
;
; Called Functions:
;   crt_math.c_modf_FUN_00602102
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530400
        ;   Label: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400
    PUSH ESI                            ; 00530401
    PUSH EDI                            ; 00530402
    PUSH EBP                            ; 00530403
    MOV EBP,ESP                         ; 00530404
    SUB ESP,0x24                        ; 00530406
    AND ESP,0xfffffff8                  ; 00530409
    XOR EDX,EDX                         ; 0053040c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053040e
    MOV dword ptr [ESP + 0x10],EDX      ; 00530411
    MOV dword ptr [ESP + 0x1c],EAX      ; 00530415
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00530419
        ;   Label: LAB_00530419
    MOV ESI,0x1                         ; 0053041d
    MOV EDI,EBX                         ; 00530422
    MOV EAX,dword ptr [ESP + 0x10]      ; 00530424
        ;   Label: LAB_00530424
    MOV dword ptr [ESP + 0x20],EAX      ; 00530428
    FILD dword ptr [ESP + 0x20]         ; 0053042c
    FMUL double ptr [0x0063ae2a]        ; 00530430 | DOUBLE_0063ae2a
    FADD double ptr [0x0063ae42]        ; 00530436 | DOUBLE_0063ae42
    MOV dword ptr [ESP + 0x20],ESI      ; 0053043c
    FILD dword ptr [ESP + 0x20]         ; 00530440
    FMULP                               ; 00530444
    FCOS                                ; 00530446
    FMUL double ptr [0x0063ae32]        ; 00530448 | DOUBLE_0063ae32
    FLDZ                                ; 0053044e
    FXCH                                ; 00530450
    FSTP float ptr [EBX]                ; 00530452
    FCOMP float ptr [EBX]               ; 00530454
    FNSTSW AX                           ; 00530456
    SAHF                                ; 00530458
    JBE 0x005304c2                      ; 00530459
        ;   XREF to: 005304c2 (CONDITIONAL_JUMP)  ; LAB_005304c2
    FLD float ptr [EBX]                 ; 0053045b
    MOV EAX,ESP                         ; 0053045d
    FSTP double ptr [ESP]               ; 0053045f
    FLD float ptr [EBX]                 ; 00530462
    PUSH EAX                            ; 00530464
    FADD double ptr [0x0063ae4a]        ; 00530465 | DOUBLE_0063ae4a
    SUB ESP,0x8                         ; 0053046b
    FSTP double ptr [ESP]               ; 0053046e
    CALL crt_math.c_modf_FUN_00602102   ; 00530471
        ;   XREF to: 00602102 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_00602102(double value, double * integer_part)
    ADD ESP,0xc                         ; 00530476
    FLD double ptr [ESP]                ; 00530479
    FSTP float ptr [EBX]                ; 0053047c
        ;   Label: LAB_0053047c
    FLD float ptr [EDI]                 ; 0053047e
    FLD ST0                             ; 00530480
    FMUL double ptr [0x0063ae3a]        ; 00530482 | DOUBLE_0063ae3a
    ADD EBX,0x4                         ; 00530488
    ADD ESI,0x2                         ; 0053048b
    ADD EDI,0x4                         ; 0053048e
    FSTP ST1                            ; 00530491
    FSTP float ptr [EDI + -0x4]         ; 00530493
    CMP ESI,0x41                        ; 00530496
    JNZ 0x00530424                      ; 00530499
        ;   XREF to: 00530424 (CONDITIONAL_JUMP)  ; LAB_00530424
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053049b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0053049f
    INC EBX                             ; 005304a3
    ADD ECX,0x80                        ; 005304a4
    MOV dword ptr [ESP + 0x10],EBX      ; 005304aa
    MOV dword ptr [ESP + 0x1c],ECX      ; 005304ae
    CMP EBX,0x40                        ; 005304b2
    JL 0x00530419                       ; 005304b5
        ;   XREF to: 00530419 (CONDITIONAL_JUMP)  ; LAB_00530419
    MOV ESP,EBP                         ; 005304bb
    POP EBP                             ; 005304bd
    POP EDI                             ; 005304be
    POP ESI                             ; 005304bf
    POP EBX                             ; 005304c0
    RET                                 ; 005304c1
    FLD float ptr [EBX]                 ; 005304c2
        ;   Label: LAB_005304c2
    LEA EAX,[ESP + 0x8]                 ; 005304c4
    FSTP double ptr [ESP + 0x8]         ; 005304c8
    FLD float ptr [EBX]                 ; 005304cc
    PUSH EAX                            ; 005304ce
    FADD double ptr [0x0063ae52]        ; 005304cf | DOUBLE_0063ae52
    SUB ESP,0x8                         ; 005304d5
    FSTP double ptr [ESP]               ; 005304d8
    CALL crt_math.c_modf_FUN_00602102   ; 005304db
        ;   XREF to: 00602102 (UNCONDITIONAL_CALL)  ; double crt_math.c_modf_FUN_00602102(double value, double * integer_part)
    ADD ESP,0xc                         ; 005304e0
    FLD double ptr [ESP + 0x8]          ; 005304e3
    JMP 0x0053047c                      ; 005304e7
        ;   XREF to: 0053047c (UNCONDITIONAL_JUMP)  ; LAB_0053047c

