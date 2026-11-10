; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005504d0(void)
;
;
; XREF[30]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418d87
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c321
;   core_charactr.cpp_CCharacter_processFire_FUN_00425fb0 at 004263a6
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 004375b8
;   core_doc.cpp_FUN_00450c60 at 0045317e
;   core_dracbrid.cpp_FUN_00465400 at 004658bb
;   core_drone.cpp_CDrone_process_FUN_0046d870 at 0046df47
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0 at 00491c44
;   core_event.cpp_FUN_00489670 at 0048c255
;   core_fire.cpp_CFireball_onCollision_FUN_004964c0 at 0049656e
;   ... and 20 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8c53
;   TerminatedCString s_popSfxOptions_stack_empt_005e8c68
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264161c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264161c]      ; 005504d0 | DAT_0264161c
        ;   Label: sound_sndmain.cpp_popSfxOptions_FUN_005504d0
    DEC EDX                             ; 005504d6
    MOV dword ptr [0x0264161c],EDX      ; 005504d7 | DAT_0264161c
    TEST EDX,EDX                        ; 005504dd
    JL 0x005504e2                       ; 005504df
        ;   XREF to: 005504e2 (CONDITIONAL_JUMP)  ; LAB_005504e2
    RET                                 ; 005504e1
    PUSH ESI                            ; 005504e2
        ;   Label: LAB_005504e2
    PUSH EBX                            ; 005504e3
    MOV EBX,0x5e8c53                    ; 005504e4 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xea7                       ; 005504e9
    PUSH 0x5e8c68                       ; 005504ee | = "popSfxOptions - stack empty"
    MOV dword ptr [0x01d046a0],EBX      ; 005504f3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005504f9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005504ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00550504
    POP EBX                             ; 00550507
    POP ESI                             ; 00550508
    RET                                 ; 00550509

