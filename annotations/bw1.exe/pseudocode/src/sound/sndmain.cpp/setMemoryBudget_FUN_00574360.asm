; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00574360(int min_bytes,int max_bytes)
;
; Parameters:
; int              Stack[0x4]:4   min_bytes
; int              Stack[0x8]:4   max_bytes
;
; Referenced Globals:
;   undefined4 DAT_0062330c
;   undefined4 DAT_00623310
;
; Called Functions:
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0056dfd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574360
        ;   Label: sound_sndmain.cpp_setMemoryBudget_FUN_00574360
    MOV [0x0062330c],EAX                ; 00574364 | DAT_0062330c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574369
    PUSH 0x0                            ; 0057436d
    MOV [0x00623310],EAX                ; 0057436f | DAT_00623310
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0056dfd0 ; 00574374
        ;   XREF to: 0056dfd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0056dfd0(int requested_bytes)
    ADD ESP,0x4                         ; 00574379
    RET                                 ; 0057437c

