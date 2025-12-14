; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle, double timeout_seconds)
;
; Parameters:
; typedef HANDLE void * Stack[0x4]:4   mutex_handle
; double           Stack[0x8]:8   timeout_seconds
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   sound_sndmain.cpp_processAudio_FUN_005abe20 at 005abe43
;
; Referenced Globals:
;   WaitForSingleObject* WaitForSingleObject = 002122c4
;   double g_SecondsToMillisecondsMultiplier = 1000
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005f4010
        ;   Label: wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f4013
    TEST EDX,EDX                        ; 005f4017
    JNZ 0x005f4021                      ; 005f4019
        ;   XREF to: 005f4021 (CONDITIONAL_JUMP)  ; LAB_005f4021
    XOR EAX,EAX                         ; 005f401b
    ADD ESP,0x8                         ; 005f401d
    RET                                 ; 005f4020
    FLD double ptr [ESP + 0x10]         ; 005f4021
        ;   Label: LAB_005f4021
    FMUL double ptr [0x0065817c]        ; 005f4025 | g_SecondsToMillisecondsMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 005f402b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [ESP]               ; 005f4030
    MOV EAX,dword ptr [ESP]             ; 005f4033
    PUSH EAX                            ; 005f4036
    PUSH EDX                            ; 005f4037
    CALL dword ptr CS:[0x61166c]        ; 005f4038 | WaitForSingleObject
    TEST EAX,EAX                        ; 005f403f
    SETZ AL                             ; 005f4041
    AND EAX,0xff                        ; 005f4044
    ADD ESP,0x8                         ; 005f4049
    RET                                 ; 005f404c

