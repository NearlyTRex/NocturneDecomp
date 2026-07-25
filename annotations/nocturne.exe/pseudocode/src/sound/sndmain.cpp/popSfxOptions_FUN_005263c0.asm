; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005263c0(void)
;
;
; XREF[28]:
;   FUN_00418a00 at 00419040
;   FUN_0045ab40 at 0045afff
;   FUN_004c79a0 at 004c7c44
;   FUN_0052d790 at 0052dbfb
;   FUN_0052dff0 at 0052e426
;   FUN_0052eac0 at 0052eaf6
;   FUN_00535900 at 00537c3b
;   FUN_005464a0 at 005466d0
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e840
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426d53
;   ... and 18 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005934ab
;   TerminatedCString s_popSfxOptions_stack_empt_005934c0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc1b74
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 005263c0 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_popSfxOptions_FUN_005263c0
    DEC EDX                             ; 005263c6
    MOV dword ptr [0x02dc1b74],EDX      ; 005263c7 | DAT_02dc1b74
    TEST EDX,EDX                        ; 005263cd
    JL 0x005263d2                       ; 005263cf
        ;   XREF to: 005263d2 (CONDITIONAL_JUMP)  ; LAB_005263d2
    RET                                 ; 005263d1
    PUSH ESI                            ; 005263d2
        ;   Label: LAB_005263d2
    PUSH EBX                            ; 005263d3
    MOV EBX,0x5934ab                    ; 005263d4 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xd03                       ; 005263d9
    PUSH 0x5934c0                       ; 005263de | = "popSfxOptions - stack empty"
    MOV dword ptr [0x01cc4800],EBX      ; 005263e3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005263e9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005263ef
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005263f4
    POP EBX                             ; 005263f7
    POP ESI                             ; 005263f8
    RET                                 ; 005263f9

