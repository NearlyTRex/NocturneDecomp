; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00556fb0(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf28bc
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00556fb0
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
        ;   Label: sound_sndmain.cpp_setDualListenerEnabled_FUN_00556fb0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00556fb5
    MOV [0x02cf28bc],EAX                ; 00556fb9 | DAT_02cf28bc
    TEST EAX,EAX                        ; 00556fbe
    JNZ 0x00556fd0                      ; 00556fc0
        ;   XREF to: 00556fd0 (CONDITIONAL_JUMP)
    MOV [0x02cf28b8],EAX                ; 00556fc6 | DAT_02cf28b8
    LEA EAX,[EAX]                       ; 00556fcb
    MOV ECX,ECX                         ; 00556fce

