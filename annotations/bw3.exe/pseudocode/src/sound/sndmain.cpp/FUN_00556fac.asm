; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00556fac(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf28bc
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00558e90
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00556fac
        ;   Label: sound_sndmain.cpp_FUN_00556fac
    CALL sound_sndmain.cpp_FUN_00558e90 ; 00556fb0
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00558e90()
    MOV EAX,dword ptr [ESP + 0x4]       ; 00556fb5
    MOV [0x02cf28bc],EAX                ; 00556fb9 | DAT_02cf28bc
    TEST EAX,EAX                        ; 00556fbe
    JNZ 0x00556fd0                      ; 00556fc0
        ;   XREF to: 00556fd0 (CONDITIONAL_JUMP)
    MOV [0x02cf28b8],EAX                ; 00556fc6 | DAT_02cf28b8
    LEA EAX,[EAX]                       ; 00556fcb
    MOV ECX,ECX                         ; 00556fce

