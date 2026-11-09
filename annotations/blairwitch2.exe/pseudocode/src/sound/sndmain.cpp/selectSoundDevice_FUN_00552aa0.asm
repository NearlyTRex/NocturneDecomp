; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(int device_id)
;
; Parameters:
; int              Stack[0x4]:4   device_id
;
; XREF[4]:
;   core_menu.cpp_FUN_004ed260 at 004ee101
;   sound_sndmain.cpp_FUN_00553680 at 00553764
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90 at 00552ba3
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0 at 0055244a
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e903e
;   TerminatedCString s_selectSoundDevice_device_005e9053
;   undefined4 DAT_0061bcac
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_FUN_00552980
;   sound_sndmain.cpp_FUN_00552b10
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552aa0
        ;   Label: sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00552aa1
    CALL sound_sndmain.cpp_FUN_00552b10 ; 00552aa5
        ;   XREF to: 00552b10 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_FUN_00552b10()
    TEST EAX,EAX                        ; 00552aaa
    JNZ 0x00552ad0                      ; 00552aac
        ;   XREF to: 00552ad0 (CONDITIONAL_JUMP)  ; LAB_00552ad0
    TEST EBX,EBX                        ; 00552aae
        ;   Label: LAB_00552aae
    JGE 0x00552ab8                      ; 00552ab0
        ;   XREF to: 00552ab8 (CONDITIONAL_JUMP)  ; LAB_00552ab8
    MOV EBX,dword ptr [0x0061bcac]      ; 00552ab2 | DAT_0061bcac
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890 ; 00552ab8
        ;   XREF to: 00552890 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890()
        ;   Label: LAB_00552ab8
    CMP EBX,EAX                         ; 00552abd
    JL 0x00552af5                       ; 00552abf
        ;   XREF to: 00552af5 (CONDITIONAL_JUMP)  ; LAB_00552af5
    CALL sound_sndmain.cpp_FUN_00552980 ; 00552ac1
        ;   XREF to: 00552980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00552980()
        ;   Label: LAB_00552ac1
    MOV EBX,EAX                         ; 00552ac6
    MOV dword ptr [0x0061bcac],EBX      ; 00552ac8 | DAT_0061bcac
    POP EBX                             ; 00552ace
    RET                                 ; 00552acf
    MOV EDX,0x5e903e                    ; 00552ad0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00552ad0
    MOV ECX,0x156b                      ; 00552ad5
    PUSH 0x5e9053                       ; 00552ada | = "selectSoundDevice - device already open."
    MOV dword ptr [0x01d046a0],EDX      ; 00552adf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00552ae5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00552aeb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00552af0
    JMP 0x00552aae                      ; 00552af3
        ;   XREF to: 00552aae (UNCONDITIONAL_JUMP)  ; LAB_00552aae
    TEST EBX,EBX                        ; 00552af5
        ;   Label: LAB_00552af5
    JL 0x00552ac1                       ; 00552af7
        ;   XREF to: 00552ac1 (CONDITIONAL_JUMP)  ; LAB_00552ac1
    MOV dword ptr [0x0061bcac],EBX      ; 00552af9 | DAT_0061bcac
    POP EBX                             ; 00552aff
    RET                                 ; 00552b00

