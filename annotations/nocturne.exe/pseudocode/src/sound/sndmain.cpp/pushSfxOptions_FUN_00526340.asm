; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00526340(void)
;
;
; XREF[27]:
;   FUN_00418a00 at 00418ffe
;   FUN_0045ab40 at 0045afaa
;   FUN_004c79a0 at 004c7c08
;   FUN_0052d790 at 0052db96
;   FUN_0052dff0 at 0052e3a4
;   FUN_00535900 at 00537c1f
;   FUN_005464a0 at 00546680
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e7f4
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426d2a
;   core_drone.cpp_CDrone_process_FUN_00462a60 at 0046307b
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0059347a
;   TerminatedCString s_pushSfxOptions_stack_ful_0059348f
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc1b74
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00526340
        ;   Label: sound_sndmain.cpp_pushSfxOptions_FUN_00526340
    PUSH EDI                            ; 00526341
    MOV EDX,dword ptr [0x02dc1b74]      ; 00526342 | DAT_02dc1b74
    INC EDX                             ; 00526348
    MOV dword ptr [0x02dc1b74],EDX      ; 00526349 | DAT_02dc1b74
    CMP EDX,0x8                         ; 0052634f
    JGE 0x00526397                      ; 00526352
        ;   XREF to: 00526397 (CONDITIONAL_JUMP)  ; LAB_00526397
    MOV ECX,dword ptr [0x02dc1b74]      ; 00526354 | DAT_02dc1b74
        ;   Label: LAB_00526354
    LEA EDX,[ECX + -0x1]                ; 0052635a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052635d
    SUB EAX,EDX                         ; 00526364
    SHL EAX,0x2                         ; 00526366
    LEA ESI,[EAX*0x8 + 0x0]             ; 00526369
    ADD ESI,EAX                         ; 00526370
    LEA EAX,[ECX*0x4 + 0x0]             ; 00526372
    SUB EAX,ECX                         ; 00526379
    SHL EAX,0x2                         ; 0052637b
    MOV EDX,EAX                         ; 0052637e
    LEA ESI,[ESI + 0x2dc1b78]           ; 00526380
    MOV ECX,0x1b                        ; 00526386
    LEA EDI,[EDX + EAX*0x8 + 0x2dc1b78] ; 0052638b
    MOVSD.REP ES:EDI,ESI                ; 00526392
    POP EDI                             ; 00526394
    POP ESI                             ; 00526395
    RET                                 ; 00526396
    PUSH EBX                            ; 00526397
        ;   Label: LAB_00526397
    MOV EBX,0x59347a                    ; 00526398 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xcf4                       ; 0052639d
    PUSH 0x59348f                       ; 005263a2 | = "pushSfxOptions - stack full"
    MOV dword ptr [0x01cc4800],EBX      ; 005263a7 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005263ad | DAT_01cc4804
    CALL FUN_004c8440                   ; 005263b3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005263b8
    POP EBX                             ; 005263bb
    JMP 0x00526354                      ; 005263bc
        ;   XREF to: 00526354 (UNCONDITIONAL_JUMP)  ; LAB_00526354

