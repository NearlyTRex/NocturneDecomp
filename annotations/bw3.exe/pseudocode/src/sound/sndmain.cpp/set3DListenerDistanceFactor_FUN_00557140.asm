; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_00557140(float distance_in_feet)
;
; Parameters:
; float            Stack[0x4]:4   distance_in_feet
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 at 00557fa3
;
; Referenced Globals:
;   undefined4 DAT_00604240
;   undefined4 DAT_00604244
;   undefined4 DAT_02cf3280
;
; *****************************************************************************

section .text

    FLD1                                ; 00557140
        ;   Label: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_00557140
    FDIV float ptr [ESP + 0x4]          ; 00557142
    MOV EAX,dword ptr [ESP + 0x4]       ; 00557146
    MOV EDX,dword ptr [0x02cf3280]      ; 0055714a | DAT_02cf3280
    MOV [0x00604240],EAX                ; 00557150 | DAT_00604240
    FSTP float ptr [0x00604244]         ; 00557155 | DAT_00604244
    TEST EDX,EDX                        ; 0055715b
    JNZ 0x00557160                      ; 0055715d
        ;   XREF to: 00557160 (CONDITIONAL_JUMP)  ; LAB_00557160
    RET                                 ; 0055715f
    MOV EAX,EDX                         ; 00557160
        ;   Label: LAB_00557160
    PUSH dword ptr [ESP + 0x4]          ; 00557162
    PUSH EAX                            ; 00557166
    MOV EDX,dword ptr [EDX]             ; 00557167
    CALL dword ptr [EDX + 0x28]         ; 00557169
    ADD ESP,0x8                         ; 0055716c
    RET                                 ; 0055716f

