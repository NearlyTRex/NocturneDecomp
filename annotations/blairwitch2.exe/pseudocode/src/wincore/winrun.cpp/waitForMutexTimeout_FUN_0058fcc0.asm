; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_0058fcc0(HANDLE mutex_handle,double timeout_seconds)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
; double           Stack[0x8]:8   timeout_seconds
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   sound_sndmain.cpp_processAudio_FUN_00553580 at 005535a3
;   support_trisock.cpp_FUN_0057a480 at 0057a4d2
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005c866c = 001c9290
;   undefined4 DAT_005eea9a
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0058fcc0
        ;   Label: wincore_winrun.cpp_waitForMutexTimeout_FUN_0058fcc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058fcc3
    TEST EDX,EDX                        ; 0058fcc7
    JNZ 0x0058fcd1                      ; 0058fcc9
        ;   XREF to: 0058fcd1 (CONDITIONAL_JUMP)  ; LAB_0058fcd1
    XOR EAX,EAX                         ; 0058fccb
    ADD ESP,0x8                         ; 0058fccd
    RET                                 ; 0058fcd0
    FLD double ptr [ESP + 0x10]         ; 0058fcd1
        ;   Label: LAB_0058fcd1
    FMUL double ptr [0x005eea9a]        ; 0058fcd5 | DAT_005eea9a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0058fcdb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP qword ptr [ESP]               ; 0058fce0
    MOV EAX,dword ptr [ESP]             ; 0058fce3
    PUSH EAX                            ; 0058fce6
    PUSH EDX                            ; 0058fce7
    CALL dword ptr CS:[0x5c866c]        ; 0058fce8 | PTR_WaitForSingleObject_005c866c
    TEST EAX,EAX                        ; 0058fcef
    SETZ AL                             ; 0058fcf1
    AND EAX,0xff                        ; 0058fcf4
    ADD ESP,0x8                         ; 0058fcf9
    RET                                 ; 0058fcfc

