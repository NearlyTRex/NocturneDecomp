; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0(HANDLE param_1,double param_2)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   sound_sndmain.cpp_processAudio_FUN_005288f0 at 00528913
;
; Referenced Globals:
;   void* PTR_WaitForSingleObject_005755e0 = 00176102
;   undefined4 DAT_00598141
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00559bf0
        ;   Label: wincore_winrun.cpp_waitForMutexTimeout_FUN_00559bf0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00559bf3
    TEST EDX,EDX                        ; 00559bf7
    JNZ 0x00559c01                      ; 00559bf9
        ;   XREF to: 00559c01 (CONDITIONAL_JUMP)  ; LAB_00559c01
    XOR EAX,EAX                         ; 00559bfb
    ADD ESP,0x8                         ; 00559bfd
    RET                                 ; 00559c00
    FLD double ptr [ESP + 0x10]         ; 00559c01
        ;   Label: LAB_00559c01
    FMUL double ptr [0x00598141]        ; 00559c05 | DAT_00598141
    CALL crt_math.c_round_FUN_00563a30  ; 00559c0b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP qword ptr [ESP]               ; 00559c10
    MOV EAX,dword ptr [ESP]             ; 00559c13
    PUSH EAX                            ; 00559c16
    PUSH EDX                            ; 00559c17
    CALL dword ptr CS:[0x5755e0]        ; 00559c18 | PTR_WaitForSingleObject_005755e0
    TEST EAX,EAX                        ; 00559c1f
    SETZ AL                             ; 00559c21
    AND EAX,0xff                        ; 00559c24
    ADD ESP,0x8                         ; 00559c29
    RET                                 ; 00559c2c

