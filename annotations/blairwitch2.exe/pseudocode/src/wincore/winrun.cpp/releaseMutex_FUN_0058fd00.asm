; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
;
; XREF[5]:
;   sound_sndmain.cpp_FUN_00551440 at 00551470
;   sound_sndmain.cpp_FUN_00553580 at 005535eb
;   support_trisock.cpp_FUN_0057a47c at 0057a533
;   support_trisock.cpp_FUN_0057a8b0 at 0057a8f7
;   support_trisock.cpp_FUN_0057a980 at 0057a9f5
;
; Referenced Globals:
;   void* PTR_ReleaseMutex_005c8608 = 001c90ca
;
; Called Functions:
;   ReleaseMutex
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058fd00
        ;   Label: wincore_winrun.cpp_releaseMutex_FUN_0058fd00
    TEST EAX,EAX                        ; 0058fd04
    JNZ 0x0058fd09                      ; 0058fd06
        ;   XREF to: 0058fd09 (CONDITIONAL_JUMP)  ; LAB_0058fd09
    RET                                 ; 0058fd08
    PUSH EAX                            ; 0058fd09
        ;   Label: LAB_0058fd09
    CALL dword ptr CS:[0x5c8608]        ; 0058fd0a | PTR_ReleaseMutex_005c8608
    RET                                 ; 0058fd11

