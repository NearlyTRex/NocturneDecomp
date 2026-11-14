; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00573fe0(float distance_in_feet)
;
; Parameters:
; float            Stack[0x4]:4   distance_in_feet
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 at 00574e27
;
; Referenced Globals:
;   undefined4 DAT_00623304
;   undefined4 DAT_00623308
;   undefined4 DAT_02c80650
;
; *****************************************************************************

section .text

    FLD1                                ; 00573fe0
        ;   Label: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00573fe0
    FDIV float ptr [ESP + 0x4]          ; 00573fe2
    MOV EAX,dword ptr [ESP + 0x4]       ; 00573fe6
    MOV EDX,dword ptr [0x02c80650]      ; 00573fea | DAT_02c80650
    MOV [0x00623304],EAX                ; 00573ff0 | DAT_00623304
    FSTP float ptr [0x00623308]         ; 00573ff5 | DAT_00623308
    TEST EDX,EDX                        ; 00573ffb
    JNZ 0x00574000                      ; 00573ffd
        ;   XREF to: 00574000 (CONDITIONAL_JUMP)  ; LAB_00574000
    RET                                 ; 00573fff
    MOV EAX,EDX                         ; 00574000
        ;   Label: LAB_00574000
    PUSH dword ptr [ESP + 0x4]          ; 00574002
    PUSH EAX                            ; 00574006
    MOV EDX,dword ptr [EDX]             ; 00574007
    CALL dword ptr [EDX + 0x28]         ; 00574009
    ADD ESP,0x8                         ; 0057400c
    RET                                 ; 0057400f

