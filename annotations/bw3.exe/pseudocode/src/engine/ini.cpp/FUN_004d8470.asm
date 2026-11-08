; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d8470(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined1       Stack[-0x211]:1  local_211
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d8640 at 004d867b
;
; Referenced Globals:
;   undefined4 DAT_005c56b1
;   TerminatedCString s_engine_ini_cpp_005c56b4
;   TerminatedCString s_cIni_FindLineNumberOfVar_005c56c6
;   TerminatedCString s_s_005c56fb
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a28c0
;   FUN_005a3a90
;   FUN_005a3d00
;   FUN_005a3f00
;   FUN_005a43ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8470
        ;   Label: FUN_004d8470
    PUSH ESI                            ; 004d8471
    PUSH EDI                            ; 004d8472
    PUSH EBP                            ; 004d8473
    SUB ESP,0x204                       ; 004d8474
    MOV EAX,dword ptr [ESP + 0x218]     ; 004d847a
    PUSH 0x5c56b1                       ; 004d8481 | DAT_005c56b1
    MOV EDX,dword ptr [ESP + 0x228]     ; 004d8486
    XOR EBX,EBX                         ; 004d848d
    PUSH EDX                            ; 004d848f
    XOR EBP,EBP                         ; 004d8490
    MOV dword ptr [EAX],0x1             ; 004d8492
    CALL FUN_005a43ec                   ; 004d8498
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined FUN_005a43ec()
    ADD ESP,0x8                         ; 004d849d
    MOV EDI,EAX                         ; 004d84a0
    TEST EAX,EAX                        ; 004d84a2
    JZ 0x004d85be                       ; 004d84a4
        ;   XREF to: 004d85be (CONDITIONAL_JUMP)  ; LAB_004d85be
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004d84aa
        ;   Label: LAB_004d84aa
    PUSH EAX                            ; 004d84b1
    PUSH 0x5c56fb                       ; 004d84b2 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004d84b7
    PUSH EAX                            ; 004d84be
    CALL FUN_005a28c0                   ; 004d84bf
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 004d84c4
    TEST EBP,EBP                        ; 004d84c7
        ;   Label: LAB_004d84c7
    JNZ 0x004d84d5                      ; 004d84c9
        ;   XREF to: 004d84d5 (CONDITIONAL_JUMP)  ; LAB_004d84d5
    TEST byte ptr [EDI + 0xc],0x10      ; 004d84cb
    JZ 0x004d85e6                       ; 004d84cf
        ;   XREF to: 004d85e6 (CONDITIONAL_JUMP)  ; LAB_004d85e6
    TEST EBP,EBP                        ; 004d84d5
        ;   Label: LAB_004d84d5
    JZ 0x004d85a0                       ; 004d84d7
        ;   XREF to: 004d85a0 (CONDITIONAL_JUMP)  ; LAB_004d85a0
    MOV DL,byte ptr [EDI + 0xc]         ; 004d84dd
        ;   Label: LAB_004d84dd
    XOR EBP,EBP                         ; 004d84e0
    TEST DL,0x10                        ; 004d84e2
    JNZ 0x004d85a0                      ; 004d84e5
        ;   XREF to: 004d85a0 (CONDITIONAL_JUMP)  ; LAB_004d85a0
        ;   Label: LAB_004d84e5
    PUSH EDI                            ; 004d84eb
    PUSH 0xff                           ; 004d84ec
    LEA EAX,[ESP + 0x8]                 ; 004d84f1
    PUSH EAX                            ; 004d84f5
    CALL FUN_005a3f00                   ; 004d84f6
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 004d84fb
    TEST EAX,EAX                        ; 004d84fe
    JZ 0x004d85a0                       ; 004d8500
        ;   XREF to: 004d85a0 (CONDITIONAL_JUMP)  ; LAB_004d85a0
    MOV DL,0xa                          ; 004d8506
    MOV ESI,ESP                         ; 004d8508
    MOV AL,byte ptr [ESI]               ; 004d850a
        ;   Label: LAB_004d850a
    CMP AL,DL                           ; 004d850c
    JZ 0x004d8522                       ; 004d850e
        ;   XREF to: 004d8522 (CONDITIONAL_JUMP)  ; LAB_004d8522
    CMP AL,0x0                          ; 004d8510
    JZ 0x004d8520                       ; 004d8512
        ;   XREF to: 004d8520 (CONDITIONAL_JUMP)  ; LAB_004d8520
    INC ESI                             ; 004d8514
    MOV AL,byte ptr [ESI]               ; 004d8515
    CMP AL,DL                           ; 004d8517
    JZ 0x004d8522                       ; 004d8519
        ;   XREF to: 004d8522 (CONDITIONAL_JUMP)  ; LAB_004d8522
    INC ESI                             ; 004d851b
    CMP AL,0x0                          ; 004d851c
    JNZ 0x004d850a                      ; 004d851e
        ;   XREF to: 004d850a (CONDITIONAL_JUMP)  ; LAB_004d850a
    SUB ESI,ESI                         ; 004d8520
        ;   Label: LAB_004d8520
    TEST ESI,ESI                        ; 004d8522
        ;   Label: LAB_004d8522
    JZ 0x004d8529                       ; 004d8524
        ;   XREF to: 004d8529 (CONDITIONAL_JUMP)  ; LAB_004d8529
    MOV byte ptr [ESI],0x0              ; 004d8526
    MOV DL,0x3d                         ; 004d8529
        ;   Label: LAB_004d8529
    MOV ESI,ESP                         ; 004d852b
    MOV AL,byte ptr [ESI]               ; 004d852d
        ;   Label: LAB_004d852d
    CMP AL,DL                           ; 004d852f
    JZ 0x004d8545                       ; 004d8531
        ;   XREF to: 004d8545 (CONDITIONAL_JUMP)  ; LAB_004d8545
    CMP AL,0x0                          ; 004d8533
    JZ 0x004d8543                       ; 004d8535
        ;   XREF to: 004d8543 (CONDITIONAL_JUMP)  ; LAB_004d8543
    INC ESI                             ; 004d8537
    MOV AL,byte ptr [ESI]               ; 004d8538
    CMP AL,DL                           ; 004d853a
    JZ 0x004d8545                       ; 004d853c
        ;   XREF to: 004d8545 (CONDITIONAL_JUMP)  ; LAB_004d8545
    INC ESI                             ; 004d853e
    CMP AL,0x0                          ; 004d853f
    JNZ 0x004d852d                      ; 004d8541
        ;   XREF to: 004d852d (CONDITIONAL_JUMP)  ; LAB_004d852d
    SUB ESI,ESI                         ; 004d8543
        ;   Label: LAB_004d8543
    MOV dword ptr [ESP + 0x200],ESI     ; 004d8545
        ;   Label: LAB_004d8545
    TEST ESI,ESI                        ; 004d854c
    JZ 0x004d8553                       ; 004d854e
        ;   XREF to: 004d8553 (CONDITIONAL_JUMP)  ; LAB_004d8553
    MOV byte ptr [ESI],0x0              ; 004d8550
    MOV EDX,dword ptr [ESP + 0x220]     ; 004d8553
        ;   Label: LAB_004d8553
    PUSH EDX                            ; 004d855a
    LEA EAX,[ESP + 0x4]                 ; 004d855b
    PUSH EAX                            ; 004d855f
    CALL FUN_005a3d00                   ; 004d8560
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 004d8565
    TEST EAX,EAX                        ; 004d8568
    JNZ 0x004d8624                      ; 004d856a
        ;   XREF to: 004d8624 (CONDITIONAL_JUMP)  ; LAB_004d8624
    MOV EBP,0x1                         ; 004d8570
    MOV ECX,dword ptr [ESP + 0x228]     ; 004d8575
    MOV EAX,dword ptr [ESP + 0x200]     ; 004d857c
    PUSH ECX                            ; 004d8583
    ADD EAX,EBP                         ; 004d8584
    PUSH EAX                            ; 004d8586
    CALL FUN_005a3d00                   ; 004d8587
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 004d858c
    TEST EAX,EAX                        ; 004d858f
    JNZ 0x004d85a0                      ; 004d8591
        ;   XREF to: 004d85a0 (CONDITIONAL_JUMP)  ; LAB_004d85a0
    MOV EAX,dword ptr [ESP + 0x218]     ; 004d8593
    MOV dword ptr [EAX],0x0             ; 004d859a
    PUSH EDI                            ; 004d85a0
        ;   Label: LAB_004d85a0
    CALL FUN_005a3a90                   ; 004d85a1
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004d85a6
    TEST EBP,EBP                        ; 004d85a9
    JZ 0x004d8630                       ; 004d85ab
        ;   XREF to: 004d8630 (CONDITIONAL_JUMP)  ; LAB_004d8630
    MOV EAX,EBX                         ; 004d85b1
    ADD ESP,0x204                       ; 004d85b3
    POP EBP                             ; 004d85b9
    POP EDI                             ; 004d85ba
    POP ESI                             ; 004d85bb
    POP EBX                             ; 004d85bc
    RET                                 ; 004d85bd
    MOV ECX,0x5c56b4                    ; 004d85be | = "..\\engine\\ini.cpp"
        ;   Label: LAB_004d85be
    MOV ESI,0xfd                        ; 004d85c3
    PUSH 0x5c56c6                       ; 004d85c8 | = "cIni::FindLineNumberOfVariable: Unabl..."
    MOV dword ptr [0x01d71de0],ECX      ; 004d85cd | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004d85d3 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004d85d9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004d85de
    JMP 0x004d84aa                      ; 004d85e1
        ;   XREF to: 004d84aa (UNCONDITIONAL_JUMP)  ; LAB_004d84aa
    PUSH EDI                            ; 004d85e6
        ;   Label: LAB_004d85e6
    PUSH 0xff                           ; 004d85e7
    LEA EAX,[ESP + 0x8]                 ; 004d85ec
    PUSH EAX                            ; 004d85f0
    CALL FUN_005a3f00                   ; 004d85f1
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 004d85f6
    TEST EAX,EAX                        ; 004d85f9
    JZ 0x004d84d5                       ; 004d85fb
        ;   XREF to: 004d84d5 (CONDITIONAL_JUMP)  ; LAB_004d84d5
    LEA EAX,[ESP + 0x100]               ; 004d8601
    PUSH EAX                            ; 004d8608
    LEA EAX,[ESP + 0x4]                 ; 004d8609
    PUSH EAX                            ; 004d860d
    CALL FUN_005a3d00                   ; 004d860e
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 004d8613
    TEST EAX,EAX                        ; 004d8616
    JZ 0x004d84dd                       ; 004d8618
        ;   XREF to: 004d84dd (CONDITIONAL_JUMP)  ; LAB_004d84dd
    INC EBX                             ; 004d861e
    JMP 0x004d84c7                      ; 004d861f
        ;   XREF to: 004d84c7 (UNCONDITIONAL_JUMP)  ; LAB_004d84c7
    MOV DH,byte ptr [EDI + 0xc]         ; 004d8624
        ;   Label: LAB_004d8624
    INC EBX                             ; 004d8627
    TEST DH,0x10                        ; 004d8628
    JMP 0x004d84e5                      ; 004d862b
        ;   XREF to: 004d84e5 (UNCONDITIONAL_JUMP)  ; LAB_004d84e5
    XOR EBX,EBX                         ; 004d8630
        ;   Label: LAB_004d8630
    MOV EAX,EBX                         ; 004d8632
    ADD ESP,0x204                       ; 004d8634
    POP EBP                             ; 004d863a
    POP EDI                             ; 004d863b
    POP ESI                             ; 004d863c
    POP EBX                             ; 004d863d
    RET                                 ; 004d863e

