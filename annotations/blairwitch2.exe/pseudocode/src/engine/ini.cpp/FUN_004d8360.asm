; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_ini_cpp_FUN_004d8360(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,char *param_5 )
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined1       Stack[-0x211]:1  local_211
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_ini.cpp_CIni_writeProfileString_FUN_004d8530 at 004d856b
;
; Referenced Globals:
;   undefined4 DAT_005dab8a
;   TerminatedCString s_engine_ini_cpp_005dab8d
;   TerminatedCString s_cIni_FindLineNumberOfVar_005dab9f
;   TerminatedCString s_s_005dabd4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8360
        ;   Label: engine_ini.cpp_FUN_004d8360
    PUSH ESI                            ; 004d8361
    PUSH EDI                            ; 004d8362
    PUSH EBP                            ; 004d8363
    SUB ESP,0x204                       ; 004d8364
    MOV EAX,dword ptr [ESP + 0x218]     ; 004d836a
    PUSH 0x5dab8a                       ; 004d8371 | DAT_005dab8a
    MOV EDX,dword ptr [ESP + 0x228]     ; 004d8376
    XOR EBX,EBX                         ; 004d837d
    PUSH EDX                            ; 004d837f
    XOR EBP,EBP                         ; 004d8380
    MOV dword ptr [EAX],0x1             ; 004d8382
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004d8388
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 004d838d
    MOV EDI,EAX                         ; 004d8390
    TEST EAX,EAX                        ; 004d8392
    JZ 0x004d84ae                       ; 004d8394
        ;   XREF to: 004d84ae (CONDITIONAL_JUMP)  ; LAB_004d84ae
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004d839a
        ;   Label: LAB_004d839a
    PUSH EAX                            ; 004d83a1
    PUSH 0x5dabd4                       ; 004d83a2 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004d83a7
    PUSH EAX                            ; 004d83ae
    CALL crt_unknown.c_FUN_005b7790     ; 004d83af
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004d83b4
    TEST EBP,EBP                        ; 004d83b7
        ;   Label: LAB_004d83b7
    JNZ 0x004d83c5                      ; 004d83b9
        ;   XREF to: 004d83c5 (CONDITIONAL_JUMP)  ; LAB_004d83c5
    TEST byte ptr [EDI + 0xc],0x10      ; 004d83bb
    JZ 0x004d84d6                       ; 004d83bf
        ;   XREF to: 004d84d6 (CONDITIONAL_JUMP)  ; LAB_004d84d6
    TEST EBP,EBP                        ; 004d83c5
        ;   Label: LAB_004d83c5
    JZ 0x004d8490                       ; 004d83c7
        ;   XREF to: 004d8490 (CONDITIONAL_JUMP)  ; LAB_004d8490
    MOV DL,byte ptr [EDI + 0xc]         ; 004d83cd
        ;   Label: LAB_004d83cd
    XOR EBP,EBP                         ; 004d83d0
    TEST DL,0x10                        ; 004d83d2
    JNZ 0x004d8490                      ; 004d83d5
        ;   XREF to: 004d8490 (CONDITIONAL_JUMP)  ; LAB_004d8490
        ;   Label: LAB_004d83d5
    PUSH EDI                            ; 004d83db
    PUSH 0xff                           ; 004d83dc
    LEA EAX,[ESP + 0x8]                 ; 004d83e1
    PUSH EAX                            ; 004d83e5
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d83e6
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 004d83eb
    TEST EAX,EAX                        ; 004d83ee
    JZ 0x004d8490                       ; 004d83f0
        ;   XREF to: 004d8490 (CONDITIONAL_JUMP)  ; LAB_004d8490
    MOV DL,0xa                          ; 004d83f6
    MOV ESI,ESP                         ; 004d83f8
    MOV AL,byte ptr [ESI]               ; 004d83fa
        ;   Label: LAB_004d83fa
    CMP AL,DL                           ; 004d83fc
    JZ 0x004d8412                       ; 004d83fe
        ;   XREF to: 004d8412 (CONDITIONAL_JUMP)  ; LAB_004d8412
    CMP AL,0x0                          ; 004d8400
    JZ 0x004d8410                       ; 004d8402
        ;   XREF to: 004d8410 (CONDITIONAL_JUMP)  ; LAB_004d8410
    INC ESI                             ; 004d8404
    MOV AL,byte ptr [ESI]               ; 004d8405
    CMP AL,DL                           ; 004d8407
    JZ 0x004d8412                       ; 004d8409
        ;   XREF to: 004d8412 (CONDITIONAL_JUMP)  ; LAB_004d8412
    INC ESI                             ; 004d840b
    CMP AL,0x0                          ; 004d840c
    JNZ 0x004d83fa                      ; 004d840e
        ;   XREF to: 004d83fa (CONDITIONAL_JUMP)  ; LAB_004d83fa
    SUB ESI,ESI                         ; 004d8410
        ;   Label: LAB_004d8410
    TEST ESI,ESI                        ; 004d8412
        ;   Label: LAB_004d8412
    JZ 0x004d8419                       ; 004d8414
        ;   XREF to: 004d8419 (CONDITIONAL_JUMP)  ; LAB_004d8419
    MOV byte ptr [ESI],0x0              ; 004d8416
    MOV DL,0x3d                         ; 004d8419
        ;   Label: LAB_004d8419
    MOV ESI,ESP                         ; 004d841b
    MOV AL,byte ptr [ESI]               ; 004d841d
        ;   Label: LAB_004d841d
    CMP AL,DL                           ; 004d841f
    JZ 0x004d8435                       ; 004d8421
        ;   XREF to: 004d8435 (CONDITIONAL_JUMP)  ; LAB_004d8435
    CMP AL,0x0                          ; 004d8423
    JZ 0x004d8433                       ; 004d8425
        ;   XREF to: 004d8433 (CONDITIONAL_JUMP)  ; LAB_004d8433
    INC ESI                             ; 004d8427
    MOV AL,byte ptr [ESI]               ; 004d8428
    CMP AL,DL                           ; 004d842a
    JZ 0x004d8435                       ; 004d842c
        ;   XREF to: 004d8435 (CONDITIONAL_JUMP)  ; LAB_004d8435
    INC ESI                             ; 004d842e
    CMP AL,0x0                          ; 004d842f
    JNZ 0x004d841d                      ; 004d8431
        ;   XREF to: 004d841d (CONDITIONAL_JUMP)  ; LAB_004d841d
    SUB ESI,ESI                         ; 004d8433
        ;   Label: LAB_004d8433
    MOV dword ptr [ESP + 0x200],ESI     ; 004d8435
        ;   Label: LAB_004d8435
    TEST ESI,ESI                        ; 004d843c
    JZ 0x004d8443                       ; 004d843e
        ;   XREF to: 004d8443 (CONDITIONAL_JUMP)  ; LAB_004d8443
    MOV byte ptr [ESI],0x0              ; 004d8440
    MOV EDX,dword ptr [ESP + 0x220]     ; 004d8443
        ;   Label: LAB_004d8443
    PUSH EDX                            ; 004d844a
    LEA EAX,[ESP + 0x4]                 ; 004d844b
    PUSH EAX                            ; 004d844f
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004d8450
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d8455
    TEST EAX,EAX                        ; 004d8458
    JNZ 0x004d8514                      ; 004d845a
        ;   XREF to: 004d8514 (CONDITIONAL_JUMP)  ; LAB_004d8514
    MOV EBP,0x1                         ; 004d8460
    MOV ECX,dword ptr [ESP + 0x228]     ; 004d8465
    MOV EAX,dword ptr [ESP + 0x200]     ; 004d846c
    PUSH ECX                            ; 004d8473
    ADD EAX,EBP                         ; 004d8474
    PUSH EAX                            ; 004d8476
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004d8477
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d847c
    TEST EAX,EAX                        ; 004d847f
    JNZ 0x004d8490                      ; 004d8481
        ;   XREF to: 004d8490 (CONDITIONAL_JUMP)  ; LAB_004d8490
    MOV EAX,dword ptr [ESP + 0x218]     ; 004d8483
    MOV dword ptr [EAX],0x0             ; 004d848a
    PUSH EDI                            ; 004d8490
        ;   Label: LAB_004d8490
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004d8491
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004d8496
    TEST EBP,EBP                        ; 004d8499
    JZ 0x004d8520                       ; 004d849b
        ;   XREF to: 004d8520 (CONDITIONAL_JUMP)  ; LAB_004d8520
    MOV EAX,EBX                         ; 004d84a1
    ADD ESP,0x204                       ; 004d84a3
    POP EBP                             ; 004d84a9
    POP EDI                             ; 004d84aa
    POP ESI                             ; 004d84ab
    POP EBX                             ; 004d84ac
    RET                                 ; 004d84ad
    MOV ECX,0x5dab8d                    ; 004d84ae | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004d84ae
    MOV ESI,0xfd                        ; 004d84b3
    PUSH 0x5dab9f                       ; 004d84b8 | = "cIni::FindLineNumberOfVariable: Unabl..."
    MOV dword ptr [0x01d046a0],ECX      ; 004d84bd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004d84c3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d84c9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d84ce
    JMP 0x004d839a                      ; 004d84d1
        ;   XREF to: 004d839a (UNCONDITIONAL_JUMP)  ; LAB_004d839a
    PUSH EDI                            ; 004d84d6
        ;   Label: LAB_004d84d6
    PUSH 0xff                           ; 004d84d7
    LEA EAX,[ESP + 0x8]                 ; 004d84dc
    PUSH EAX                            ; 004d84e0
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d84e1
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 004d84e6
    TEST EAX,EAX                        ; 004d84e9
    JZ 0x004d83c5                       ; 004d84eb
        ;   XREF to: 004d83c5 (CONDITIONAL_JUMP)  ; LAB_004d83c5
    LEA EAX,[ESP + 0x100]               ; 004d84f1
    PUSH EAX                            ; 004d84f8
    LEA EAX,[ESP + 0x4]                 ; 004d84f9
    PUSH EAX                            ; 004d84fd
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004d84fe
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d8503
    TEST EAX,EAX                        ; 004d8506
    JZ 0x004d83cd                       ; 004d8508
        ;   XREF to: 004d83cd (CONDITIONAL_JUMP)  ; LAB_004d83cd
    INC EBX                             ; 004d850e
    JMP 0x004d83b7                      ; 004d850f
        ;   XREF to: 004d83b7 (UNCONDITIONAL_JUMP)  ; LAB_004d83b7
    MOV DH,byte ptr [EDI + 0xc]         ; 004d8514
        ;   Label: LAB_004d8514
    INC EBX                             ; 004d8517
    TEST DH,0x10                        ; 004d8518
    JMP 0x004d83d5                      ; 004d851b
        ;   XREF to: 004d83d5 (UNCONDITIONAL_JUMP)  ; LAB_004d83d5
    XOR EBX,EBX                         ; 004d8520
        ;   Label: LAB_004d8520
    MOV EAX,EBX                         ; 004d8522
    ADD ESP,0x204                       ; 004d8524
    POP EBP                             ; 004d852a
    POP EDI                             ; 004d852b
    POP ESI                             ; 004d852c
    POP EBX                             ; 004d852d
    RET                                 ; 004d852e

