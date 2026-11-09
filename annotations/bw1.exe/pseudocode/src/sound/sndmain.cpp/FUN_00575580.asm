; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00575580(undefined4 param_1)
;
;
; XREF[2]:
;   core_menu.cpp_FUN_0050ba70 at 0050c94a
;   sound_sndmain.cpp_FUN_005760b0 at 005761d4
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f4276
;   TerminatedCString s_enableHwSoundMixing_Can_005f428b
;   undefined4 DAT_00623300
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_FUN_00575540
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00575540 ; 00575580
        ;   XREF to: 00575540 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_FUN_00575540()
        ;   Label: sound_sndmain.cpp_FUN_00575580
    TEST EAX,EAX                        ; 00575585
    JNZ 0x00575593                      ; 00575587
        ;   XREF to: 00575593 (CONDITIONAL_JUMP)  ; LAB_00575593
    MOV EAX,dword ptr [ESP + 0x4]       ; 00575589
    MOV [0x00623300],EAX                ; 0057558d | DAT_00623300
    RET                                 ; 00575592
    MOV EDX,0x5f4276                    ; 00575593 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00575593
    MOV ECX,0x158f                      ; 00575598
    PUSH 0x5f428b                       ; 0057559d | = "enableHwSoundMixing - Can't do this w..."
    MOV dword ptr [0x01d1d400],EDX      ; 005755a2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005755a8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005755ae
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005755b3
    MOV EAX,dword ptr [ESP + 0x4]       ; 005755b6
    MOV [0x00623300],EAX                ; 005755ba | DAT_00623300
    RET                                 ; 005755bf

