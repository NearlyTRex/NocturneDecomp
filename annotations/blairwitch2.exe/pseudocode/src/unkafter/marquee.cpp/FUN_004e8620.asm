; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_marquee_cpp_FUN_004e8620(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e47a2
;
; Referenced Globals:
;   undefined4 DAT_005dc77e
;   undefined4 DAT_005dc782
;   undefined4 DAT_005dc786
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004e8620
        ;   Label: unkafter_marquee.cpp_FUN_004e8620
    XOR ECX,ECX                         ; 004e8623
    XOR EDX,EDX                         ; 004e8625
    FLD double ptr [0x005dc786]         ; 004e8627 | DAT_005dc786
    FLD float ptr [0x005dc782]          ; 004e862d | DAT_005dc782
    FLD float ptr [0x005dc77e]          ; 004e8633 | DAT_005dc77e
    MOV dword ptr [ESP + 0x8],EDX       ; 004e8639
        ;   Label: LAB_004e8639
    FILD dword ptr [ESP + 0x8]          ; 004e863d
    FMUL ST1                            ; 004e8641
    FMUL ST2                            ; 004e8643
    FLD ST0                             ; 004e8645
    FSIN                                ; 004e8647
    FXCH                                ; 004e8649
    FCOS                                ; 004e864b
    FXCH                                ; 004e864d
    FMUL ST4                            ; 004e864f
    FXCH                                ; 004e8651
    FMUL ST4                            ; 004e8653
    ADD ECX,0x4                         ; 004e8655
    FXCH                                ; 004e8658
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e865a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 004e865f
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e8663
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8668
    FISTP dword ptr [ESP + 0x8]         ; 004e866c
    MOV dword ptr [ECX + 0x1d047ac],EAX ; 004e8670
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8676
    INC EDX                             ; 004e867a
    MOV dword ptr [ECX + 0x1d04bb0],EAX ; 004e867b
    CMP EDX,0x101                       ; 004e8681
    JL 0x004e8639                       ; 004e8687
        ;   XREF to: 004e8639 (CONDITIONAL_JUMP)  ; LAB_004e8639
    FSTP ST0                            ; 004e8689
    FSTP ST0                            ; 004e868b
    FSTP ST0                            ; 004e868d
    ADD ESP,0xc                         ; 004e868f
    LEA EAX,[EAX]                       ; 004e8692
    LEA EDX,[EDX]                       ; 004e8698
    MOV EAX,EAX                         ; 004e869e

