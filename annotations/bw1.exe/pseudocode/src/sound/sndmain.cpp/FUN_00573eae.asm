; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00573eae(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c7fc88
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00573eae
        ;   Label: sound_sndmain.cpp_FUN_00573eae
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00573eb0
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573eb5
    MOV [0x02c7fc88],EAX                ; 00573eb9 | DAT_02c7fc88
    JMP 0x00573e70                      ; 00573ebe
        ;   XREF to: 00573e70 (UNCONDITIONAL_JUMP)

