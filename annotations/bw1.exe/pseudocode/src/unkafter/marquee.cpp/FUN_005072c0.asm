; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_marquee_cpp_FUN_005072c0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 00503382
;
; Referenced Globals:
;   undefined4 DAT_005e76ce
;   undefined4 DAT_005e76d2
;   undefined4 DAT_005e76d6
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005072c0
        ;   Label: unkafter_marquee.cpp_FUN_005072c0
    XOR ECX,ECX                         ; 005072c3
    XOR EDX,EDX                         ; 005072c5
    FLD double ptr [0x005e76d6]         ; 005072c7 | DAT_005e76d6
    FLD float ptr [0x005e76d2]          ; 005072cd | DAT_005e76d2
    FLD float ptr [0x005e76ce]          ; 005072d3 | DAT_005e76ce
    MOV dword ptr [ESP + 0x8],EDX       ; 005072d9
        ;   Label: LAB_005072d9
    FILD dword ptr [ESP + 0x8]          ; 005072dd
    FMUL ST1                            ; 005072e1
    FMUL ST2                            ; 005072e3
    FLD ST0                             ; 005072e5
    FSIN                                ; 005072e7
    FXCH                                ; 005072e9
    FCOS                                ; 005072eb
    FXCH                                ; 005072ed
    FMUL ST4                            ; 005072ef
    FXCH                                ; 005072f1
    FMUL ST4                            ; 005072f3
    ADD ECX,0x4                         ; 005072f5
    FXCH                                ; 005072f8
    CALL crt_math.c_round_FUN_005c03a0  ; 005072fa
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 005072ff
    CALL crt_math.c_round_FUN_005c03a0  ; 00507303
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [ESP + 0x8]       ; 00507308
    FISTP dword ptr [ESP + 0x8]         ; 0050730c
    MOV dword ptr [ECX + 0x1d1d50c],EAX ; 00507310
    MOV EAX,dword ptr [ESP + 0x8]       ; 00507316
    INC EDX                             ; 0050731a
    MOV dword ptr [ECX + 0x1d1d910],EAX ; 0050731b
    CMP EDX,0x101                       ; 00507321
    JL 0x005072d9                       ; 00507327
        ;   XREF to: 005072d9 (CONDITIONAL_JUMP)  ; LAB_005072d9
    FSTP ST0                            ; 00507329
    FSTP ST0                            ; 0050732b
    FSTP ST0                            ; 0050732d
    ADD ESP,0xc                         ; 0050732f
    LEA EAX,[EAX]                       ; 00507332
    LEA EDX,[EDX]                       ; 00507338
    MOV EAX,EAX                         ; 0050733e

