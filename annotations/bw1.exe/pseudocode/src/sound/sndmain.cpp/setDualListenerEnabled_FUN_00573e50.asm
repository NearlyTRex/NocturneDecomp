; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00573e50(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c7fc8c
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00573e50
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: sound_sndmain.cpp_setDualListenerEnabled_FUN_00573e50
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573e55
    MOV [0x02c7fc8c],EAX                ; 00573e59 | DAT_02c7fc8c
    TEST EAX,EAX                        ; 00573e5e
    JNZ 0x00573e70                      ; 00573e60
        ;   XREF to: 00573e70 (CONDITIONAL_JUMP)
    MOV [0x02c7fc88],EAX                ; 00573e66 | DAT_02c7fc88
    LEA EAX,[EAX]                       ; 00573e6b
    MOV ECX,ECX                         ; 00573e6e

