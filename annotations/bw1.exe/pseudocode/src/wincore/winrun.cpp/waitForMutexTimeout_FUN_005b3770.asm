; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_005b3770(HANDLE mutex_handle,double timeout_seconds)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
; double           Stack[0x8]:8   timeout_seconds
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   sound_sndmain.cpp_processAudio_FUN_00575fb0 at 00575fd3
;   support_trisock.cpp_FUN_0059daf0 at 0059db42
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005d0680 = 001d12cc
;   undefined4 DAT_005f9e72
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005b3770
        ;   Label: wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b3773
    TEST EDX,EDX                        ; 005b3777
    JNZ 0x005b3781                      ; 005b3779
        ;   XREF to: 005b3781 (CONDITIONAL_JUMP)  ; LAB_005b3781
    XOR EAX,EAX                         ; 005b377b
    ADD ESP,0x8                         ; 005b377d
    RET                                 ; 005b3780
    FLD double ptr [ESP + 0x10]         ; 005b3781
        ;   Label: LAB_005b3781
    FMUL double ptr [0x005f9e72]        ; 005b3785 | DAT_005f9e72
    CALL crt_math.c_round_FUN_005c03a0  ; 005b378b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP qword ptr [ESP]               ; 005b3790
    MOV EAX,dword ptr [ESP]             ; 005b3793
    PUSH EAX                            ; 005b3796
    PUSH EDX                            ; 005b3797
    CALL dword ptr CS:[0x5d0680]        ; 005b3798 | PTR_WaitForSingleObject_005d0680
    TEST EAX,EAX                        ; 005b379f
    SETZ AL                             ; 005b37a1
    AND EAX,0xff                        ; 005b37a4
    ADD ESP,0x8                         ; 005b37a9
    RET                                 ; 005b37ac

