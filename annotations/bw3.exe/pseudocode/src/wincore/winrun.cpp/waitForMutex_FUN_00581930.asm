; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_waitForMutex_FUN_00581930(HANDLE mutex_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
;
; XREF[5]:
;   sound_sndmain.cpp_lockSound_FUN_00558e90 at 00558ed5
;   support_trisock.cpp_FUN_00570ae0 at 00570bd5
;   support_trisock.cpp_FUN_00570ea0 at 00570ec8
;   support_trisock.cpp_FUN_00570fb0 at 00571007
;   support_trisock.cpp_FUN_00571f10 at 00571f46
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005b3680 = 001b42d2
;
; Called Functions:
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00581930
        ;   Label: wincore_winrun.cpp_waitForMutex_FUN_00581930
    TEST EAX,EAX                        ; 00581934
    JNZ 0x00581939                      ; 00581936
        ;   XREF to: 00581939 (CONDITIONAL_JUMP)  ; LAB_00581939
    RET                                 ; 00581938
    PUSH -0x1                           ; 00581939
        ;   Label: LAB_00581939
    PUSH EAX                            ; 0058193b
    CALL dword ptr CS:[0x5b3680]        ; 0058193c | PTR_WaitForSingleObject_005b3680
    TEST EAX,EAX                        ; 00581943
    SETZ AL                             ; 00581945
    AND EAX,0xff                        ; 00581948
    RET                                 ; 0058194d

