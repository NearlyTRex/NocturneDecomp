; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00573e4c(int param_1)
;
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

    LEA EDX,[EDX]                       ; 00573e4c
        ;   Label: sound_sndmain.cpp_FUN_00573e4c
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00573e50
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573e55
    MOV [0x02c7fc8c],EAX                ; 00573e59 | DAT_02c7fc8c
    TEST EAX,EAX                        ; 00573e5e
    JNZ 0x00573e70                      ; 00573e60
        ;   XREF to: 00573e70 (CONDITIONAL_JUMP)
    MOV [0x02c7fc88],EAX                ; 00573e66 | DAT_02c7fc88
    LEA EAX,[EAX]                       ; 00573e6b
    MOV ECX,ECX                         ; 00573e6e

