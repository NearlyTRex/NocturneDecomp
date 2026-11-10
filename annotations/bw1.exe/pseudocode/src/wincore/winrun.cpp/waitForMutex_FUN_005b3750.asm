; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_waitForMutex_FUN_005b3750(HANDLE mutex_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
;
; XREF[5]:
;   sound_sndmain.cpp_lockSound_FUN_00575d20 at 00575d65
;   support_trisock.cpp_FUN_0059daec at 0059dbe5
;   support_trisock.cpp_FUN_0059deb0 at 0059ded8
;   support_trisock.cpp_FUN_0059dfc0 at 0059e017
;   support_trisock.cpp_FUN_0059ef20 at 0059ef56
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005d0680 = 001d12cc
;
; Called Functions:
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b3750
        ;   Label: wincore_winrun.cpp_waitForMutex_FUN_005b3750
    TEST EAX,EAX                        ; 005b3754
    JNZ 0x005b3759                      ; 005b3756
        ;   XREF to: 005b3759 (CONDITIONAL_JUMP)  ; LAB_005b3759
    RET                                 ; 005b3758
    PUSH -0x1                           ; 005b3759
        ;   Label: LAB_005b3759
    PUSH EAX                            ; 005b375b
    CALL dword ptr CS:[0x5d0680]        ; 005b375c | PTR_WaitForSingleObject_005d0680
    TEST EAX,EAX                        ; 005b3763
    SETZ AL                             ; 005b3765
    AND EAX,0xff                        ; 005b3768
    RET                                 ; 005b376d

