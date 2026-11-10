; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00552cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_sound.cpp_CSound_configure_FUN_0055ac50 at 0055acee
;   core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0055b080 at 0055b0a4
;   core_sound.cpp_FUN_0055a1d0 at 0055a22c
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;   undefined4 DAT_02649000
;   undefined4 DAT_02649004
;   undefined4 DAT_02649008
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00552cc0
        ;   Label: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0
    MOV [0x02649000],EAX                ; 00552cc4 | DAT_02649000
    MOV EAX,dword ptr [ESP + 0x8]       ; 00552cc9
    MOV [0x02649004],EAX                ; 00552ccd | DAT_02649004
    MOV EAX,dword ptr [ESP + 0xc]       ; 00552cd2
    MOV EDX,dword ptr [0x02648e80]      ; 00552cd6 | DAT_02648e80
    MOV [0x02649008],EAX                ; 00552cdc | DAT_02649008
    TEST EDX,EDX                        ; 00552ce1
    JNZ 0x00552ce6                      ; 00552ce3
        ;   XREF to: 00552ce6 (CONDITIONAL_JUMP)  ; LAB_00552ce6
    RET                                 ; 00552ce5
    PUSH dword ptr [ESP + 0xc]          ; 00552ce6
        ;   Label: LAB_00552ce6
    PUSH dword ptr [ESP + 0xc]          ; 00552cea
    MOV EAX,EDX                         ; 00552cee
    PUSH dword ptr [ESP + 0xc]          ; 00552cf0
    MOV EDX,dword ptr [EDX]             ; 00552cf4
    PUSH EAX                            ; 00552cf6
    CALL dword ptr [EDX + 0x2c]         ; 00552cf7
    ADD ESP,0x10                        ; 00552cfa
    RET                                 ; 00552cfd

