; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_00558a50 at 00558a50
;   sound_sndmain.cpp_readIni_FUN_00559220 at 0055929d
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00558010 at 00558033
;
; Referenced Globals:
;   undefined4 DAT_02cf3c68
;
; Called Functions:
;   sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0 ; 00558ab0
        ;   XREF to: 00558ce0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0()
        ;   Label: sound_sndmain.cpp_releaseRecordingDevice_FUN_00558ab0
    TEST EAX,EAX                        ; 00558ab5
    JZ 0x00558ac8                       ; 00558ab7
        ;   XREF to: 00558ac8 (CONDITIONAL_JUMP)  ; LAB_00558ac8
    MOV EDX,dword ptr [0x02cf3c68]      ; 00558ab9 | DAT_02cf3c68
    TEST EDX,EDX                        ; 00558abf
    JNZ 0x00558ac9                      ; 00558ac1
        ;   XREF to: 00558ac9 (CONDITIONAL_JUMP)  ; LAB_00558ac9
    MOV EAX,0x1                         ; 00558ac3
    RET                                 ; 00558ac8
        ;   Label: LAB_00558ac8
    MOV EAX,EDX                         ; 00558ac9
        ;   Label: LAB_00558ac9
    PUSH EAX                            ; 00558acb
    MOV EDX,dword ptr [EDX]             ; 00558acc
    CALL dword ptr [EDX]                ; 00558ace
    ADD ESP,0x4                         ; 00558ad0
    TEST EAX,EAX                        ; 00558ad3
    JZ 0x00558ac8                       ; 00558ad5
        ;   XREF to: 00558ac8 (CONDITIONAL_JUMP)  ; LAB_00558ac8
    XOR ECX,ECX                         ; 00558ad7
    MOV EAX,0x1                         ; 00558ad9
    MOV dword ptr [0x02cf3c68],ECX      ; 00558ade | DAT_02cf3c68
    RET                                 ; 00558ae4

