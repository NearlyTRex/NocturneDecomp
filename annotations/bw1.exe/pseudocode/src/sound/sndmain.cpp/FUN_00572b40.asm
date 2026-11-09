; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00572b40(void)
;
;
; XREF[29]:
;   core_boneguy.cpp_FUN_0041bb40 at 0041c207
;   core_boxactor.cpp_FUN_00422000 at 00422291
;   core_charactr.cpp_FUN_0042f8e0 at 0042fcd7
;   core_doc.cpp_FUN_00469550 at 0046bd0f
;   core_dracbrid.cpp_FUN_0047d920 at 0047dddb
;   core_drone.cpp_FUN_00485d70 at 00486447
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550 at 004aa5b4
;   core_event.cpp_FUN_004a1d00 at 004a4a97
;   core_fire.cpp_FUN_004aee60 at 004aef0e
;   core_flame.cpp_FUN_004b7b90 at 004b7f60
;   ... and 19 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3e4d
;   TerminatedCString s_popSfxOptions_stack_empt_005f3e62
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c78cec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572b40 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_00572b40
    DEC EDX                             ; 00572b46
    MOV dword ptr [0x02c78cec],EDX      ; 00572b47 | DAT_02c78cec
    TEST EDX,EDX                        ; 00572b4d
    JL 0x00572b52                       ; 00572b4f
        ;   XREF to: 00572b52 (CONDITIONAL_JUMP)  ; LAB_00572b52
    RET                                 ; 00572b51
    PUSH ESI                            ; 00572b52
        ;   Label: LAB_00572b52
    PUSH EBX                            ; 00572b53
    MOV EBX,0x5f3e4d                    ; 00572b54 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xea7                       ; 00572b59
    PUSH 0x5f3e62                       ; 00572b5e | = "popSfxOptions - stack empty"
    MOV dword ptr [0x01d1d400],EBX      ; 00572b63 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00572b69 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00572b6f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00572b74
    POP EBX                             ; 00572b77
    POP ESI                             ; 00572b78
    RET                                 ; 00572b79

