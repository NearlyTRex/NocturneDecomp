; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_env_c_getenv_FUN_006013f0(char *name)
;
; Parameters:
; char *           Stack[0x4]:4   name
;
; XREF[13]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004dab63
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd623
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db18e
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507a92
;   core_netgame.cpp_CNetGame_init_FUN_0053f780 at 0053f816
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 005933d6
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b250e
;   crt_io.c_getTempDirectory_FUN_00609afc at 00609b14
;   crt_stdlib.c_system_FUN_00602130 at 0060213e
;   crt_time.c_tzset_FUN_006072f8 at 006072fd
;   ... and 3 more
;
; Referenced Globals:
;   char** g_EnvironmentBlock
;
; Called Functions:
;   crt_string.c__mbstrnicmp_FUN_00608e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006013f0
        ;   Label: crt_env.c_getenv_FUN_006013f0
    PUSH ESI                            ; 006013f1
    PUSH EDI                            ; 006013f2
    PUSH EBP                            ; 006013f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 006013f4
    MOV ESI,dword ptr [0x03f9b864]      ; 006013f8 | g_EnvironmentBlock
    TEST ESI,ESI                        ; 006013fe
    JZ 0x00601444                       ; 00601400
        ;   XREF to: 00601444 (CONDITIONAL_JUMP)  ; LAB_00601444
    TEST EBP,EBP                        ; 00601402
    JZ 0x00601444                       ; 00601404
        ;   XREF to: 00601444 (CONDITIONAL_JUMP)  ; LAB_00601444
    MOV EDI,EBP                         ; 00601406
    PUSH ES                             ; 00601408
    MOV AX,DS                           ; 00601409
    MOV ES,AX                           ; 0060140b
    SUB ECX,ECX                         ; 0060140d
    DEC ECX                             ; 0060140f
    XOR EAX,EAX                         ; 00601410
    SCASB.REPNE ES:EDI                  ; 00601412
    NOT ECX                             ; 00601414
    DEC ECX                             ; 00601416
    POP ES                              ; 00601417
    MOV EDI,ECX                         ; 00601418
    JMP 0x0060143e                      ; 0060141a
        ;   XREF to: 0060143e (UNCONDITIONAL_JUMP)  ; LAB_0060143e
    PUSH EDI                            ; 0060141c
        ;   Label: LAB_0060141c
    PUSH EBP                            ; 0060141d
    PUSH EBX                            ; 0060141e
    CALL crt_string.c__mbstrnicmp_FUN_00608e50 ; 0060141f
        ;   XREF to: 00608e50 (UNCONDITIONAL_CALL)  ; int crt_string.c__mbstrnicmp_FUN_00608e50(char * str1, char * str2, SIZE_T count)
    ADD ESP,0xc                         ; 00601424
    TEST EAX,EAX                        ; 00601427
    JNZ 0x0060143b                      ; 00601429
        ;   XREF to: 0060143b (CONDITIONAL_JUMP)  ; LAB_0060143b
    CMP byte ptr [EDI + EBX*0x1],0x3d   ; 0060142b
    JNZ 0x0060143b                      ; 0060142f
        ;   XREF to: 0060143b (CONDITIONAL_JUMP)  ; LAB_0060143b
    LEA EAX,[EDI + 0x1]                 ; 00601431
    ADD EAX,EBX                         ; 00601434
    POP EBP                             ; 00601436
    POP EDI                             ; 00601437
    POP ESI                             ; 00601438
    POP EBX                             ; 00601439
    RET                                 ; 0060143a
    ADD ESI,0x4                         ; 0060143b
        ;   Label: LAB_0060143b
    MOV EBX,dword ptr [ESI]             ; 0060143e
        ;   Label: LAB_0060143e
    TEST EBX,EBX                        ; 00601440
    JNZ 0x0060141c                      ; 00601442
        ;   XREF to: 0060141c (CONDITIONAL_JUMP)  ; LAB_0060141c
    XOR EAX,EAX                         ; 00601444
        ;   Label: LAB_00601444
    POP EBP                             ; 00601446
    POP EDI                             ; 00601447
    POP ESI                             ; 00601448
    POP EBX                             ; 00601449
    RET                                 ; 0060144a

