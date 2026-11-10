; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00550450(void)
;
;
; XREF[30]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418d45
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c2d5
;   core_charactr.cpp_CCharacter_processFire_FUN_00425fb0 at 0042637d
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 00437576
;   core_doc.cpp_FUN_00450c60 at 00453162
;   core_dracbrid.cpp_FUN_00465400 at 00465864
;   core_drone.cpp_CDrone_process_FUN_0046d870 at 0046df05
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0 at 00491c11
;   core_event.cpp_FUN_00489670 at 0048c227
;   core_fire.cpp_CFireball_onCollision_FUN_004964c0 at 0049653a
;   ... and 20 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8c22
;   TerminatedCString s_pushSfxOptions_stack_ful_005e8c37
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264161c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00550450
        ;   Label: sound_sndmain.cpp_pushSfxOptions_FUN_00550450
    PUSH EDI                            ; 00550451
    MOV EDX,dword ptr [0x0264161c]      ; 00550452 | DAT_0264161c
    INC EDX                             ; 00550458
    MOV dword ptr [0x0264161c],EDX      ; 00550459 | DAT_0264161c
    CMP EDX,0x8                         ; 0055045f
    JGE 0x0055049b                      ; 00550462
        ;   XREF to: 0055049b (CONDITIONAL_JUMP)  ; LAB_0055049b
    MOV ECX,dword ptr [0x0264161c]      ; 00550464 | DAT_0264161c
        ;   Label: LAB_00550464
    LEA EDX,[ECX + -0x1]                ; 0055046a
    LEA ESI,[EDX*0x4 + 0x0]             ; 0055046d
    LEA EAX,[ECX*0x4 + 0x0]             ; 00550474
    SUB ESI,EDX                         ; 0055047b
    SUB EAX,ECX                         ; 0055047d
    MOV ECX,0x18                        ; 0055047f
    SHL EAX,0x5                         ; 00550484
    SHL ESI,0x5                         ; 00550487
    LEA EDI,[EAX + 0x2641620]           ; 0055048a
    LEA ESI,[ESI + 0x2641620]           ; 00550490
    MOVSD.REP ES:EDI,ESI                ; 00550496
    POP EDI                             ; 00550498
    POP ESI                             ; 00550499
    RET                                 ; 0055049a
    PUSH EBX                            ; 0055049b
        ;   Label: LAB_0055049b
    MOV EBX,0x5e8c22                    ; 0055049c | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xe98                       ; 005504a1
    PUSH 0x5e8c37                       ; 005504a6 | = "pushSfxOptions - stack full"
    MOV dword ptr [0x01d046a0],EBX      ; 005504ab | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005504b1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005504b7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005504bc
    POP EBX                             ; 005504bf
    JMP 0x00550464                      ; 005504c0
        ;   XREF to: 00550464 (UNCONDITIONAL_JUMP)  ; LAB_00550464

