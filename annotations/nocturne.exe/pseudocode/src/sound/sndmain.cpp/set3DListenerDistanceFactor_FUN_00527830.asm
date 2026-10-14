; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00527830(double distance_in_feet)
;
; Parameters:
; double           Stack[0x4]:8   distance_in_feet
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00527d80 at 00527da9
;
; Referenced Globals:
;   undefined4 DAT_005bea80
;   undefined4 DAT_005bea84
;   undefined4 DAT_005bea88
;   undefined4 DAT_02dc8318
;
; *****************************************************************************

section .text

    FLD1                                ; 00527830
        ;   Label: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00527830
    FDIV double ptr [ESP + 0x4]         ; 00527832
    MOV EAX,dword ptr [ESP + 0x4]       ; 00527836
    MOV [0x005bea80],EAX                ; 0052783a | DAT_005bea80
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052783f
    MOV EDX,dword ptr [0x02dc8318]      ; 00527843 | DAT_02dc8318
    MOV [0x005bea84],EAX                ; 00527849 | DAT_005bea84
    FSTP double ptr [0x005bea88]        ; 0052784e | DAT_005bea88
    TEST EDX,EDX                        ; 00527854
    JNZ 0x00527859                      ; 00527856
        ;   XREF to: 00527859 (CONDITIONAL_JUMP)  ; LAB_00527859
    RET                                 ; 00527858
    PUSH EBX                            ; 00527859
        ;   Label: LAB_00527859
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052785a
    PUSH ECX                            ; 0052785e
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052785f
    PUSH EBX                            ; 00527863
    MOV EAX,EDX                         ; 00527864
    MOV EDX,dword ptr [EDX]             ; 00527866
    PUSH EAX                            ; 00527868
    CALL dword ptr [EDX + 0x24]         ; 00527869
    ADD ESP,0xc                         ; 0052786c
    POP EBX                             ; 0052786f
    RET                                 ; 00527870

