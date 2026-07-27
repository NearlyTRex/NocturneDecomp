; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined1       Stack[-0x211]:1  local_211
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004bd480 at 004bd4bb
;
; Referenced Globals:
;   TerminatedCString s_rt_0058652d
;   TerminatedCString s_engine_ini_cpp_00586530
;   TerminatedCString s_cIni_FindLineNumberOfVar_00586542
;   TerminatedCString s_s_00586577
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd2b0
        ;   Label: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0
    PUSH ESI                            ; 004bd2b1
    PUSH EDI                            ; 004bd2b2
    PUSH EBP                            ; 004bd2b3
    SUB ESP,0x204                       ; 004bd2b4
    MOV EAX,dword ptr [ESP + 0x218]     ; 004bd2ba
    PUSH 0x58652d                       ; 004bd2c1 | = "rt"
    MOV EDX,dword ptr [ESP + 0x228]     ; 004bd2c6
    XOR EBX,EBX                         ; 004bd2cd
    PUSH EDX                            ; 004bd2cf
    XOR EBP,EBP                         ; 004bd2d0
    MOV dword ptr [EAX],0x1             ; 004bd2d2
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004bd2d8
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_0056568c()
    ADD ESP,0x8                         ; 004bd2dd
    MOV EDI,EAX                         ; 004bd2e0
    TEST EAX,EAX                        ; 004bd2e2
    JZ 0x004bd3fe                       ; 004bd2e4
        ;   XREF to: 004bd3fe (CONDITIONAL_JUMP)  ; LAB_004bd3fe
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004bd2ea
        ;   Label: LAB_004bd2ea
    PUSH EAX                            ; 004bd2f1
    PUSH 0x586577                       ; 004bd2f2 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004bd2f7
    PUSH EAX                            ; 004bd2fe
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bd2ff
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004bd304
    TEST EBP,EBP                        ; 004bd307
        ;   Label: LAB_004bd307
    JNZ 0x004bd315                      ; 004bd309
        ;   XREF to: 004bd315 (CONDITIONAL_JUMP)  ; LAB_004bd315
    TEST byte ptr [EDI + 0xc],0x10      ; 004bd30b
    JZ 0x004bd426                       ; 004bd30f
        ;   XREF to: 004bd426 (CONDITIONAL_JUMP)  ; LAB_004bd426
    TEST EBP,EBP                        ; 004bd315
        ;   Label: LAB_004bd315
    JZ 0x004bd3e0                       ; 004bd317
        ;   XREF to: 004bd3e0 (CONDITIONAL_JUMP)  ; LAB_004bd3e0
    MOV DL,byte ptr [EDI + 0xc]         ; 004bd31d
        ;   Label: LAB_004bd31d
    XOR EBP,EBP                         ; 004bd320
    TEST DL,0x10                        ; 004bd322
    JNZ 0x004bd3e0                      ; 004bd325
        ;   XREF to: 004bd3e0 (CONDITIONAL_JUMP)  ; LAB_004bd3e0
        ;   Label: LAB_004bd325
    PUSH EDI                            ; 004bd32b
    PUSH 0xff                           ; 004bd32c
    LEA EAX,[ESP + 0x8]                 ; 004bd331
    PUSH EAX                            ; 004bd335
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd336
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 004bd33b
    TEST EAX,EAX                        ; 004bd33e
    JZ 0x004bd3e0                       ; 004bd340
        ;   XREF to: 004bd3e0 (CONDITIONAL_JUMP)  ; LAB_004bd3e0
    MOV DL,0xa                          ; 004bd346
    MOV ESI,ESP                         ; 004bd348
    MOV AL,byte ptr [ESI]               ; 004bd34a
        ;   Label: LAB_004bd34a
    CMP AL,DL                           ; 004bd34c
    JZ 0x004bd362                       ; 004bd34e
        ;   XREF to: 004bd362 (CONDITIONAL_JUMP)  ; LAB_004bd362
    CMP AL,0x0                          ; 004bd350
    JZ 0x004bd360                       ; 004bd352
        ;   XREF to: 004bd360 (CONDITIONAL_JUMP)  ; LAB_004bd360
    INC ESI                             ; 004bd354
    MOV AL,byte ptr [ESI]               ; 004bd355
    CMP AL,DL                           ; 004bd357
    JZ 0x004bd362                       ; 004bd359
        ;   XREF to: 004bd362 (CONDITIONAL_JUMP)  ; LAB_004bd362
    INC ESI                             ; 004bd35b
    CMP AL,0x0                          ; 004bd35c
    JNZ 0x004bd34a                      ; 004bd35e
        ;   XREF to: 004bd34a (CONDITIONAL_JUMP)  ; LAB_004bd34a
    SUB ESI,ESI                         ; 004bd360
        ;   Label: LAB_004bd360
    TEST ESI,ESI                        ; 004bd362
        ;   Label: LAB_004bd362
    JZ 0x004bd369                       ; 004bd364
        ;   XREF to: 004bd369 (CONDITIONAL_JUMP)  ; LAB_004bd369
    MOV byte ptr [ESI],0x0              ; 004bd366
    MOV DL,0x3d                         ; 004bd369
        ;   Label: LAB_004bd369
    MOV ESI,ESP                         ; 004bd36b
    MOV AL,byte ptr [ESI]               ; 004bd36d
        ;   Label: LAB_004bd36d
    CMP AL,DL                           ; 004bd36f
    JZ 0x004bd385                       ; 004bd371
        ;   XREF to: 004bd385 (CONDITIONAL_JUMP)  ; LAB_004bd385
    CMP AL,0x0                          ; 004bd373
    JZ 0x004bd383                       ; 004bd375
        ;   XREF to: 004bd383 (CONDITIONAL_JUMP)  ; LAB_004bd383
    INC ESI                             ; 004bd377
    MOV AL,byte ptr [ESI]               ; 004bd378
    CMP AL,DL                           ; 004bd37a
    JZ 0x004bd385                       ; 004bd37c
        ;   XREF to: 004bd385 (CONDITIONAL_JUMP)  ; LAB_004bd385
    INC ESI                             ; 004bd37e
    CMP AL,0x0                          ; 004bd37f
    JNZ 0x004bd36d                      ; 004bd381
        ;   XREF to: 004bd36d (CONDITIONAL_JUMP)  ; LAB_004bd36d
    SUB ESI,ESI                         ; 004bd383
        ;   Label: LAB_004bd383
    MOV dword ptr [ESP + 0x200],ESI     ; 004bd385
        ;   Label: LAB_004bd385
    TEST ESI,ESI                        ; 004bd38c
    JZ 0x004bd393                       ; 004bd38e
        ;   XREF to: 004bd393 (CONDITIONAL_JUMP)  ; LAB_004bd393
    MOV byte ptr [ESI],0x0              ; 004bd390
    MOV EDX,dword ptr [ESP + 0x220]     ; 004bd393
        ;   Label: LAB_004bd393
    PUSH EDX                            ; 004bd39a
    LEA EAX,[ESP + 0x4]                 ; 004bd39b
    PUSH EAX                            ; 004bd39f
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004bd3a0
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004bd3a5
    TEST EAX,EAX                        ; 004bd3a8
    JNZ 0x004bd464                      ; 004bd3aa
        ;   XREF to: 004bd464 (CONDITIONAL_JUMP)  ; LAB_004bd464
    MOV EBP,0x1                         ; 004bd3b0
    MOV ECX,dword ptr [ESP + 0x228]     ; 004bd3b5
    MOV EAX,dword ptr [ESP + 0x200]     ; 004bd3bc
    PUSH ECX                            ; 004bd3c3
    ADD EAX,EBP                         ; 004bd3c4
    PUSH EAX                            ; 004bd3c6
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004bd3c7
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004bd3cc
    TEST EAX,EAX                        ; 004bd3cf
    JNZ 0x004bd3e0                      ; 004bd3d1
        ;   XREF to: 004bd3e0 (CONDITIONAL_JUMP)  ; LAB_004bd3e0
    MOV EAX,dword ptr [ESP + 0x218]     ; 004bd3d3
    MOV dword ptr [EAX],0x0             ; 004bd3da
    PUSH EDI                            ; 004bd3e0
        ;   Label: LAB_004bd3e0
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004bd3e1
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004bd3e6
    TEST EBP,EBP                        ; 004bd3e9
    JZ 0x004bd470                       ; 004bd3eb
        ;   XREF to: 004bd470 (CONDITIONAL_JUMP)  ; LAB_004bd470
    MOV EAX,EBX                         ; 004bd3f1
    ADD ESP,0x204                       ; 004bd3f3
    POP EBP                             ; 004bd3f9
    POP EDI                             ; 004bd3fa
    POP ESI                             ; 004bd3fb
    POP EBX                             ; 004bd3fc
    RET                                 ; 004bd3fd
    MOV ECX,0x586530                    ; 004bd3fe | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004bd3fe
    MOV ESI,0xf5                        ; 004bd403
    PUSH 0x586542                       ; 004bd408 | = "cIni::FindLineNumberOfVariable: Unabl..."
    MOV dword ptr [0x01cc4800],ECX      ; 004bd40d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004bd413 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004bd419
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004bd41e
    JMP 0x004bd2ea                      ; 004bd421
        ;   XREF to: 004bd2ea (UNCONDITIONAL_JUMP)  ; LAB_004bd2ea
    PUSH EDI                            ; 004bd426
        ;   Label: LAB_004bd426
    PUSH 0xff                           ; 004bd427
    LEA EAX,[ESP + 0x8]                 ; 004bd42c
    PUSH EAX                            ; 004bd430
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004bd431
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 004bd436
    TEST EAX,EAX                        ; 004bd439
    JZ 0x004bd315                       ; 004bd43b
        ;   XREF to: 004bd315 (CONDITIONAL_JUMP)  ; LAB_004bd315
    LEA EAX,[ESP + 0x100]               ; 004bd441
    PUSH EAX                            ; 004bd448
    LEA EAX,[ESP + 0x4]                 ; 004bd449
    PUSH EAX                            ; 004bd44d
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004bd44e
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 004bd453
    TEST EAX,EAX                        ; 004bd456
    JZ 0x004bd31d                       ; 004bd458
        ;   XREF to: 004bd31d (CONDITIONAL_JUMP)  ; LAB_004bd31d
    INC EBX                             ; 004bd45e
    JMP 0x004bd307                      ; 004bd45f
        ;   XREF to: 004bd307 (UNCONDITIONAL_JUMP)  ; LAB_004bd307
    MOV DH,byte ptr [EDI + 0xc]         ; 004bd464
        ;   Label: LAB_004bd464
    INC EBX                             ; 004bd467
    TEST DH,0x10                        ; 004bd468
    JMP 0x004bd325                      ; 004bd46b
        ;   XREF to: 004bd325 (UNCONDITIONAL_JUMP)  ; LAB_004bd325
    XOR EBX,EBX                         ; 004bd470
        ;   Label: LAB_004bd470
    MOV EAX,EBX                         ; 004bd472
    ADD ESP,0x204                       ; 004bd474
    POP EBP                             ; 004bd47a
    POP EDI                             ; 004bd47b
    POP ESI                             ; 004bd47c
    POP EBX                             ; 004bd47d
    RET                                 ; 004bd47e

