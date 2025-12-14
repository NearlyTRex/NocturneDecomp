; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_initializeTrigTables_FUN_0050c530(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507bc1
;
; Referenced Globals:
;   double g_PI = 3.14159265350000
;   double g_TrigTableStepSize = 0.0078125
;   double g_FixedPoint16Scale = 65536
;   int[257] g_SinTable
;   int[257] g_CosTable
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050c530
        ;   Label: engine_matrix.c_initializeTrigTables_FUN_0050c530
    MOV EBP,ESP                         ; 0050c531
    SUB ESP,0xc                         ; 0050c533
    AND ESP,0xfffffff8                  ; 0050c536
    XOR EDX,EDX                         ; 0050c539
    XOR ECX,ECX                         ; 0050c53b
    FLD double ptr [0x00635a35]         ; 0050c53d | g_FixedPoint16Scale
    FLD double ptr [0x00635a2d]         ; 0050c543 | g_TrigTableStepSize
    FLD double ptr [0x00635a25]         ; 0050c549 | g_PI
    MOV dword ptr [ESP + 0x8],ECX       ; 0050c54f
        ;   Label: LAB_0050c54f
    FILD dword ptr [ESP + 0x8]          ; 0050c553
    FMUL ST1                            ; 0050c557
    FMUL ST2                            ; 0050c559
    FLD ST0                             ; 0050c55b
    FSIN                                ; 0050c55d
    FXCH                                ; 0050c55f
    FCOS                                ; 0050c561
    FXCH                                ; 0050c563
    FMUL ST4                            ; 0050c565
    FXCH                                ; 0050c567
    FMUL ST4                            ; 0050c569
    ADD EDX,0x4                         ; 0050c56b
    FXCH                                ; 0050c56e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c570
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0050c575
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050c579
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050c57e
    FISTP dword ptr [ESP + 0x8]         ; 0050c582
    MOV dword ptr [EDX + 0x2f0cb58],EAX ; 0050c586 | g_SinTable
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050c58c
    INC ECX                             ; 0050c590
    MOV dword ptr [EDX + 0x2f0cf5c],EAX ; 0050c591 | g_CosTable
    CMP ECX,0x101                       ; 0050c597
    JL 0x0050c54f                       ; 0050c59d
        ;   XREF to: 0050c54f (CONDITIONAL_JUMP)  ; LAB_0050c54f
    FSTP ST0                            ; 0050c59f
    FSTP ST0                            ; 0050c5a1
    FSTP ST0                            ; 0050c5a3
    MOV ESP,EBP                         ; 0050c5a5
    POP EBP                             ; 0050c5a7
    LEA EAX,[EAX]                       ; 0050c5a8
    MOV EDX,EDX                         ; 0050c5ae

