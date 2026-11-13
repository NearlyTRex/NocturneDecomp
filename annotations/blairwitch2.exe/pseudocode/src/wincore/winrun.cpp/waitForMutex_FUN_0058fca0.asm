; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_waitForMutex_FUN_0058fca0(HANDLE mutex_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
;
; XREF[4]:
;   sound_sndmain.cpp_lockSound_FUN_005532f0 at 00553335
;   support_trisock.cpp_FUN_0057a480 at 0057a575
;   support_trisock.cpp_FUN_0057a840 at 0057a877
;   support_trisock.cpp_FUN_0057a980 at 0057a9d7
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005c866c = 001c9290
;
; Called Functions:
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058fca0
        ;   Label: wincore_winrun.cpp_waitForMutex_FUN_0058fca0
    TEST EAX,EAX                        ; 0058fca4
    JNZ 0x0058fca9                      ; 0058fca6
        ;   XREF to: 0058fca9 (CONDITIONAL_JUMP)  ; LAB_0058fca9
    RET                                 ; 0058fca8
    PUSH -0x1                           ; 0058fca9
        ;   Label: LAB_0058fca9
    PUSH EAX                            ; 0058fcab
    CALL dword ptr CS:[0x5c866c]        ; 0058fcac | PTR_WaitForSingleObject_005c866c
    TEST EAX,EAX                        ; 0058fcb3
    SETZ AL                             ; 0058fcb5
    AND EAX,0xff                        ; 0058fcb8
    RET                                 ; 0058fcbd

