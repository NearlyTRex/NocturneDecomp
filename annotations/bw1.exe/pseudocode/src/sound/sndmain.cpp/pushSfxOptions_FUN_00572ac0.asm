; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0(void)
;
;
; XREF[29]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c1c5
;   core_boxactor.cpp_CBoxActor_process_FUN_00422000 at 00422245
;   core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0 at 0042fcae
;   core_doc.cpp_FUN_00469550 at 0046bcf3
;   core_dracbrid.cpp_FUN_0047d920 at 0047dd84
;   core_drone.cpp_CDrone_process_FUN_00485d70 at 00486405
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550 at 004aa581
;   core_event.cpp_FUN_004a1d00 at 004a4a69
;   core_fire.cpp_CFireball_onCollision_FUN_004aee60 at 004aeeda
;   core_flame.cpp_CFlame_process_FUN_004b7b90 at 004b7f10
;   ... and 19 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3e1c
;   TerminatedCString s_pushSfxOptions_stack_ful_005f3e31
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c78cec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00572ac0
        ;   Label: sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
    PUSH EDI                            ; 00572ac1
    MOV EDX,dword ptr [0x02c78cec]      ; 00572ac2 | DAT_02c78cec
    INC EDX                             ; 00572ac8
    MOV dword ptr [0x02c78cec],EDX      ; 00572ac9 | DAT_02c78cec
    CMP EDX,0x8                         ; 00572acf
    JGE 0x00572b0b                      ; 00572ad2
        ;   XREF to: 00572b0b (CONDITIONAL_JUMP)  ; LAB_00572b0b
    MOV ECX,dword ptr [0x02c78cec]      ; 00572ad4 | DAT_02c78cec
        ;   Label: LAB_00572ad4
    LEA EDX,[ECX + -0x1]                ; 00572ada
    LEA ESI,[EDX*0x4 + 0x0]             ; 00572add
    LEA EAX,[ECX*0x4 + 0x0]             ; 00572ae4
    SUB ESI,EDX                         ; 00572aeb
    SUB EAX,ECX                         ; 00572aed
    MOV ECX,0x18                        ; 00572aef
    SHL EAX,0x5                         ; 00572af4
    SHL ESI,0x5                         ; 00572af7
    LEA EDI,[EAX + 0x2c78cf0]           ; 00572afa
    LEA ESI,[ESI + 0x2c78cf0]           ; 00572b00
    MOVSD.REP ES:EDI,ESI                ; 00572b06
    POP EDI                             ; 00572b08
    POP ESI                             ; 00572b09
    RET                                 ; 00572b0a
    PUSH EBX                            ; 00572b0b
        ;   Label: LAB_00572b0b
    MOV EBX,0x5f3e1c                    ; 00572b0c | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xe98                       ; 00572b11
    PUSH 0x5f3e31                       ; 00572b16 | = "pushSfxOptions - stack full"
    MOV dword ptr [0x01d1d400],EBX      ; 00572b1b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00572b21 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00572b27
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00572b2c
    POP EBX                             ; 00572b2f
    JMP 0x00572ad4                      ; 00572b30
        ;   XREF to: 00572ad4 (UNCONDITIONAL_JUMP)  ; LAB_00572ad4

