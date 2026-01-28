; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005aa340(int min_bytes,int max_bytes)
;
; Parameters:
; int              Stack[0x4]:4   min_bytes
; int              Stack[0x8]:4   max_bytes
;
; Referenced Globals:
;   int g_MinimumSoundMemoryBudget = 0x200000
;   int g_MaximumSoundMemoryBudget = 0x400000
;
; Called Functions:
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa340
        ;   Label: sound_sndmain.cpp_setMemoryBudget_FUN_005aa340
    MOV [0x00681b40],EAX                ; 005aa344 | g_MinimumSoundMemoryBudget
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa349
    PUSH 0x0                            ; 005aa34d
    MOV [0x00681b44],EAX                ; 005aa34f | g_MaximumSoundMemoryBudget
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450 ; 005aa354
        ;   XREF to: 005a4450 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)
    ADD ESP,0x4                         ; 005aa359
    RET                                 ; 005aa35c

