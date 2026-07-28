; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_waitForMutex_FUN_00559bd0(HANDLE mutex_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
;
; XREF[1]:
;   sound_sndmain.cpp_lockSound_FUN_00528800 at 00528845
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005755e0 = 00176102
;
; Called Functions:
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00559bd0
        ;   Label: wincore_winrun.cpp_waitForMutex_FUN_00559bd0
    TEST EAX,EAX                        ; 00559bd4
    JNZ 0x00559bd9                      ; 00559bd6
        ;   XREF to: 00559bd9 (CONDITIONAL_JUMP)  ; LAB_00559bd9
    RET                                 ; 00559bd8
    PUSH -0x1                           ; 00559bd9
        ;   Label: LAB_00559bd9
    PUSH EAX                            ; 00559bdb
    CALL dword ptr CS:[0x5755e0]        ; 00559bdc | PTR_WaitForSingleObject_005755e0
    TEST EAX,EAX                        ; 00559be3
    SETZ AL                             ; 00559be5
    AND EAX,0xff                        ; 00559be8
    RET                                 ; 00559bed

