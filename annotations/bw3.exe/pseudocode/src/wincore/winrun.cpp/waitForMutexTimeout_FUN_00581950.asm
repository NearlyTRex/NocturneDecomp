; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_00581950(HANDLE mutex_handle,double timeout_seconds)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
; double           Stack[0x8]:8   timeout_seconds
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_00559120 at 00559143
;   support_trisock.cpp_FUN_00570adc at 00570b32
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005b3680 = 001b42d2
;   undefined4 DAT_005d7e93
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00581950
        ;   Label: wincore_winrun.cpp_waitForMutexTimeout_FUN_00581950
    MOV EDX,dword ptr [ESP + 0xc]       ; 00581953
    TEST EDX,EDX                        ; 00581957
    JNZ 0x00581961                      ; 00581959
        ;   XREF to: 00581961 (CONDITIONAL_JUMP)  ; LAB_00581961
    XOR EAX,EAX                         ; 0058195b
    ADD ESP,0x8                         ; 0058195d
    RET                                 ; 00581960
    FLD double ptr [ESP + 0x10]         ; 00581961
        ;   Label: LAB_00581961
    FMUL double ptr [0x005d7e93]        ; 00581965 | DAT_005d7e93
    CALL crt_math.c_round_FUN_005a3120  ; 0058196b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [ESP]               ; 00581970
    MOV EAX,dword ptr [ESP]             ; 00581973
    PUSH EAX                            ; 00581976
    PUSH EDX                            ; 00581977
    CALL dword ptr CS:[0x5b3680]        ; 00581978 | PTR_WaitForSingleObject_005b3680
    TEST EAX,EAX                        ; 0058197f
    SETZ AL                             ; 00581981
    AND EAX,0xff                        ; 00581984
    ADD ESP,0x8                         ; 00581989
    RET                                 ; 0058198c

