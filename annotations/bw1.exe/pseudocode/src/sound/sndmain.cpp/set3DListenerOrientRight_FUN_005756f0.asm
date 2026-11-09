; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0057dad0 at 0057daf4
;   core_sound.cpp_FUN_0057cc00 at 0057cc5b
;   core_sound.cpp_FUN_0057d6a0 at 0057d73e
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c807d0
;   undefined4 DAT_02c807d4
;   undefined4 DAT_02c807d8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005756f0
        ;   Label: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005756f0
    MOV [0x02c807d0],EAX                ; 005756f4 | DAT_02c807d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005756f9
    MOV [0x02c807d4],EAX                ; 005756fd | DAT_02c807d4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00575702
    MOV EDX,dword ptr [0x02c80650]      ; 00575706 | DAT_02c80650
    MOV [0x02c807d8],EAX                ; 0057570c | DAT_02c807d8
    TEST EDX,EDX                        ; 00575711
    JNZ 0x00575716                      ; 00575713
        ;   XREF to: 00575716 (CONDITIONAL_JUMP)  ; LAB_00575716
    RET                                 ; 00575715
    PUSH dword ptr [ESP + 0xc]          ; 00575716
        ;   Label: LAB_00575716
    PUSH dword ptr [ESP + 0xc]          ; 0057571a
    MOV EAX,EDX                         ; 0057571e
    PUSH dword ptr [ESP + 0xc]          ; 00575720
    MOV EDX,dword ptr [EDX]             ; 00575724
    PUSH EAX                            ; 00575726
    CALL dword ptr [EDX + 0x2c]         ; 00575727
    ADD ESP,0x10                        ; 0057572a
    RET                                 ; 0057572d

