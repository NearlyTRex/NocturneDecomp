; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_004e4330(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[544]:
;   cockpit_ckptutil.c_FUN_00436400 at 004365bf
;   cockpit_ckptutil.c_FUN_004367e0 at 0043683a
;   cockpit_ckptutil.c_FUN_00436a50 at 00436aae
;   cockpit_ckptutil.c_FUN_00436c9e at 00436d38
;   cockpit_ckptutil.c_FUN_00437e10 at 00437f28
;   cockpit_ckptutil.c_FUN_00438ca0 at 00438de3
;   cockpit_ckptutil.c_FUN_00438ef0 at 00438f65
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_004350a0 at 004351b3
;   cockpit_ckptutil.c_rotateBitmap_FUN_00437c50 at 00437d04
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_0043806e at 0043819b
;   ... and 534 more
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de8
;
; Called Functions:
;   core_sound.cpp_shutdownSoundSystem_FUN_0055fcc0
;   crt_stdio.c_vsprintf_FUN_005a2898
;   crt_watcom.c_notifyAbnormalTermination_FUN_005a5fb0
;   engine_2d.c_cleanupGraphicsSystem_FUN_00401120
;   wincore_winrun.cpp_endPeriod_FUN_00580690
;   wincore_winrun.cpp_FUN_00581300
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e4330
        ;   Label: core_main.c_FUN_004e4330
    PUSH EDI                            ; 004e4331
    SUB ESP,0x4                         ; 004e4332
    CMP dword ptr [0x01d71de8],0x0      ; 004e4335 | DAT_01d71de8
    JNZ 0x004e43c6                      ; 004e433c
        ;   XREF to: 004e43c6 (CONDITIONAL_JUMP)  ; LAB_004e43c6
    PUSH EBX                            ; 004e4342
        ;   Label: LAB_004e4342
    LEA ESI,[ESP + 0x18]                ; 004e4343
    MOV dword ptr [ESP + 0x4],ESI       ; 004e4347
    LEA ESI,[ESP + 0x4]                 ; 004e434b
    PUSH ESI                            ; 004e434f
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e4350
    PUSH EBX                            ; 004e4354
    MOV ECX,0x1                         ; 004e4355
    PUSH 0x1d70ce0                      ; 004e435a
    MOV dword ptr [0x01d71de8],ECX      ; 004e435f | DAT_01d71de8
    XOR ESI,ESI                         ; 004e4365
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 004e4367
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 004e436c
    MOV DH,0x5c                         ; 004e436f
    MOV dword ptr [ESP + 0x4],ESI       ; 004e4371
    MOV DL,DH                           ; 004e4375
    POP EBX                             ; 004e4377
    MOV ESI,dword ptr [0x01d71de0]      ; 004e4378 | DAT_01d71de0
        ;   Label: LAB_004e4378
    MOV AL,byte ptr [ESI]               ; 004e437e
        ;   Label: LAB_004e437e
    CMP AL,DL                           ; 004e4380
    JZ 0x004e4396                       ; 004e4382
        ;   XREF to: 004e4396 (CONDITIONAL_JUMP)  ; LAB_004e4396
    CMP AL,0x0                          ; 004e4384
    JZ 0x004e4394                       ; 004e4386
        ;   XREF to: 004e4394 (CONDITIONAL_JUMP)  ; LAB_004e4394
    INC ESI                             ; 004e4388
    MOV AL,byte ptr [ESI]               ; 004e4389
    CMP AL,DL                           ; 004e438b
    JZ 0x004e4396                       ; 004e438d
        ;   XREF to: 004e4396 (CONDITIONAL_JUMP)  ; LAB_004e4396
    INC ESI                             ; 004e438f
    CMP AL,0x0                          ; 004e4390
    JNZ 0x004e437e                      ; 004e4392
        ;   XREF to: 004e437e (CONDITIONAL_JUMP)  ; LAB_004e437e
    SUB ESI,ESI                         ; 004e4394
        ;   Label: LAB_004e4394
    TEST ESI,ESI                        ; 004e4396
        ;   Label: LAB_004e4396
    JNZ 0x004e43d0                      ; 004e4398
        ;   XREF to: 004e43d0 (CONDITIONAL_JUMP)  ; LAB_004e43d0
    MOV EDI,dword ptr [0x006045f8]      ; 004e439a | DAT_006045f8
    PUSH EDI                            ; 004e43a0
    CALL core_sound.cpp_shutdownSoundSystem_FUN_0055fcc0 ; 004e43a1
        ;   XREF to: 0055fcc0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_shutdownSoundSystem_FUN_0055fcc0()
    ADD ESP,0x4                         ; 004e43a6
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_00401120 ; 004e43a9
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_00401120()
    CALL wincore_winrun.cpp_endPeriod_FUN_00580690 ; 004e43ae
        ;   XREF to: 00580690 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_00580690()
    PUSH 0x1d70ce0                      ; 004e43b3
    CALL wincore_winrun.cpp_FUN_00581300 ; 004e43b8
        ;   XREF to: 00581300 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00581300(char * message)
    ADD ESP,0x4                         ; 004e43bd
    ADD ESP,0x4                         ; 004e43c0
    POP EDI                             ; 004e43c3
    POP ESI                             ; 004e43c4
    RET                                 ; 004e43c5
    CALL crt_watcom.c_notifyAbnormalTermination_FUN_005a5fb0 ; 004e43c6
        ;   XREF to: 005a5fb0 (UNCONDITIONAL_CALL)  ; void crt_watcom.c_notifyAbnormalTermination_FUN_005a5fb0()
        ;   Label: LAB_004e43c6
    JMP 0x004e4342                      ; 004e43cb
        ;   XREF to: 004e4342 (UNCONDITIONAL_JUMP)  ; LAB_004e4342
    MOV ESI,dword ptr [0x01d71de0]      ; 004e43d0 | DAT_01d71de0
        ;   Label: LAB_004e43d0
    MOV AL,byte ptr [ESI]               ; 004e43d6
        ;   Label: LAB_004e43d6
    CMP AL,DL                           ; 004e43d8
    JZ 0x004e43ee                       ; 004e43da
        ;   XREF to: 004e43ee (CONDITIONAL_JUMP)  ; LAB_004e43ee
    CMP AL,0x0                          ; 004e43dc
    JZ 0x004e43ec                       ; 004e43de
        ;   XREF to: 004e43ec (CONDITIONAL_JUMP)  ; LAB_004e43ec
    INC ESI                             ; 004e43e0
    MOV AL,byte ptr [ESI]               ; 004e43e1
    CMP AL,DL                           ; 004e43e3
    JZ 0x004e43ee                       ; 004e43e5
        ;   XREF to: 004e43ee (CONDITIONAL_JUMP)  ; LAB_004e43ee
    INC ESI                             ; 004e43e7
    CMP AL,0x0                          ; 004e43e8
    JNZ 0x004e43d6                      ; 004e43ea
        ;   XREF to: 004e43d6 (CONDITIONAL_JUMP)  ; LAB_004e43d6
    SUB ESI,ESI                         ; 004e43ec
        ;   Label: LAB_004e43ec
    INC ESI                             ; 004e43ee
        ;   Label: LAB_004e43ee
    MOV dword ptr [0x01d71de0],ESI      ; 004e43ef | DAT_01d71de0
    JMP 0x004e4378                      ; 004e43f5
        ;   XREF to: 004e4378 (UNCONDITIONAL_JUMP)  ; LAB_004e4378

