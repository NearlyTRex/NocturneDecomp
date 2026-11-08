; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea280(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_004b7f90 at 004b8a18
;   FUN_004ea4d0 at 004ea9ac
;
; Referenced Globals:
;   void* switchdataD_004ea26c = 004ea3d9
;   undefined4 s_Graphic_Options_005c78e5+1
;   TerminatedCString s_Sound_Options_005c78f6
;   TerminatedCString s_Control_Options_005c7904
;   TerminatedCString s_Credits_005c7914
;   TerminatedCString s_Option_Menu_005c791c
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00600284
;   undefined4 DAT_00603b28
;   undefined4 DAT_006045f8
;   undefined4 DAT_01d213e0
;   undefined4 DAT_01d213e4
;   undefined4 DAT_01d70a78
;   undefined4 DAT_01d737d8
;   undefined4 DAT_01ed78c8
;   ... and 2 more
;
; Called Functions:
;   FUN_004b4430
;   FUN_004b4440
;   FUN_004c02a0
;   FUN_004d95c0
;   FUN_004e7860
;   FUN_004e85a0
;   FUN_004e8f80
;   FUN_004e94f0
;   FUN_004eae80
;   FUN_004f94a0
;   FUN_004f9580
;   FUN_004f9670
;   FUN_00508960
;   FUN_0053b100
;   FUN_005607d0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea280
        ;   Label: FUN_004ea280
    PUSH EDI                            ; 004ea281
    PUSH EBP                            ; 004ea282
    SUB ESP,0x4                         ; 004ea283
    XOR EDX,EDX                         ; 004ea286
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ea288
    MOV dword ptr [ESP],EDX             ; 004ea28c
    TEST ECX,ECX                        ; 004ea28f
    JNZ 0x004ea40d                      ; 004ea291
        ;   XREF to: 004ea40d (CONDITIONAL_JUMP)  ; LAB_004ea40d
    PUSH ESI                            ; 004ea297
        ;   Label: LAB_004ea297
    MOV ESI,dword ptr [0x005fe9dc]      ; 004ea298 | DAT_005fe9dc
    PUSH ESI                            ; 004ea29e
    MOV EBX,0x1d75478                   ; 004ea29f
    CALL FUN_004b4430                   ; 004ea2a4
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4430()
    ADD ESP,0x4                         ; 004ea2a9
    XOR EAX,EAX                         ; 004ea2ac
    POP ESI                             ; 004ea2ae
    MOV dword ptr [EAX + 0x1d75878],EBX ; 004ea2af
        ;   Label: LAB_004ea2af
    ADD EAX,0x4                         ; 004ea2b5
    ADD EBX,0x100                       ; 004ea2b8
    CMP EAX,0x10                        ; 004ea2be
    JNZ 0x004ea2af                      ; 004ea2c1
        ;   XREF to: 004ea2af (CONDITIONAL_JUMP)  ; LAB_004ea2af
    MOV EDI,dword ptr [0x005fe9dc]      ; 004ea2c3 | DAT_005fe9dc
        ;   Label: LAB_004ea2c3
    PUSH EDI                            ; 004ea2c9
    CALL FUN_004b4440                   ; 004ea2ca
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4440()
    ADD ESP,0x4                         ; 004ea2cf
    PUSH 0x10000                        ; 004ea2d2
    PUSH 0xc350                         ; 004ea2d7
    PUSH 0xc350                         ; 004ea2dc
    MOV EAX,[0x00603b28]                ; 004ea2e1 | DAT_00603b28
    PUSH EAX                            ; 004ea2e6 | DAT_01ed78c8
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004ea2e7 | DAT_0203274c
    CALL FUN_0053b100                   ; 004ea2f1
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b100()
    ADD ESP,0x10                        ; 004ea2f6
    MOV EAX,[0x00603b28]                ; 004ea2f9 | DAT_00603b28
    PUSH 0x1d72cb0                      ; 004ea2fe
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ea303 | DAT_0203275c
    CALL FUN_004f9670                   ; 004ea30d
        ;   XREF to: 004f9670 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9670()
    ADD ESP,0x4                         ; 004ea312
    MOV EAX,[0x00603b28]                ; 004ea315 | DAT_00603b28
    PUSH 0x5c78e6                       ; 004ea31a | s_Graphic_Options_005c78e5+1
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ea31f | DAT_0203274c
    CALL FUN_00508960                   ; 004ea329
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea32e
    PUSH EAX                            ; 004ea331
    PUSH 0x1d75478                      ; 004ea332
    CALL FUN_005a28c0                   ; 004ea337
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x8                         ; 004ea33c
    PUSH 0x5c78f6                       ; 004ea33f | = "Sound Options"
    CALL FUN_00508960                   ; 004ea344
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea349
    PUSH EAX                            ; 004ea34c
    PUSH 0x1d75578                      ; 004ea34d
    CALL FUN_005a28c0                   ; 004ea352
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x8                         ; 004ea357
    PUSH 0x5c7904                       ; 004ea35a | = "Control Options"
    CALL FUN_00508960                   ; 004ea35f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea364
    PUSH EAX                            ; 004ea367
    PUSH 0x1d75678                      ; 004ea368
    CALL FUN_005a28c0                   ; 004ea36d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x8                         ; 004ea372
    PUSH 0x5c7914                       ; 004ea375 | = "Credits"
    CALL FUN_00508960                   ; 004ea37a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea37f
    PUSH EAX                            ; 004ea382
    PUSH 0x1d75778                      ; 004ea383
    CALL FUN_005a28c0                   ; 004ea388
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x8                         ; 004ea38d
    MOV EAX,[0x005fe9dc]                ; 004ea390 | DAT_005fe9dc
    PUSH 0x5c791c                       ; 004ea395 | = "Option Menu"
    MOV dword ptr [EAX + 0xd8],0x9      ; 004ea39a | DAT_01d213e4
    CALL FUN_00508960                   ; 004ea3a4
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ea3a9
    PUSH EAX                            ; 004ea3ac
    PUSH 0xc8                           ; 004ea3ad
    LEA EAX,[ESP + 0x8]                 ; 004ea3b2
    PUSH EAX                            ; 004ea3b6
    PUSH 0x4                            ; 004ea3b7
    PUSH 0x1d75878                      ; 004ea3b9
    CALL FUN_004e7860                   ; 004ea3be
        ;   XREF to: 004e7860 (UNCONDITIONAL_CALL)  ; undefined FUN_004e7860()
    ADD ESP,0x14                        ; 004ea3c3
    MOV EBX,EAX                         ; 004ea3c6
    CALL FUN_0057a8a0                   ; 004ea3c8
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    CMP EBX,0x3                         ; 004ea3cd
    JA 0x004ea3de                       ; 004ea3d0
        ;   XREF to: 004ea3de (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4ea26c]  ; 004ea3d2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL FUN_004e85a0                   ; 004ea3d9
        ;   XREF to: 004e85a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e85a0()
        ;   Label: caseD_0
    PUSH 0x1                            ; 004ea3de
        ;   Label: default
    MOV EAX,[0x00600284]                ; 004ea3e0 | DAT_00600284
    PUSH EAX                            ; 004ea3e5 | DAT_01d70a78
    MOV EBX,dword ptr [EAX]             ; 004ea3e6 | DAT_01d70a78
    CALL dword ptr [EBX + 0x4]          ; 004ea3e8
    ADD ESP,0x8                         ; 004ea3eb
    TEST EAX,EAX                        ; 004ea3ee
    JZ 0x004ea2c3                       ; 004ea3f0
        ;   XREF to: 004ea2c3 (CONDITIONAL_JUMP)  ; LAB_004ea2c3
    CMP dword ptr [ESP + 0x14],0x0      ; 004ea3f6
    JNZ 0x004ea489                      ; 004ea3fb
        ;   XREF to: 004ea489 (CONDITIONAL_JUMP)  ; LAB_004ea489
    CALL FUN_004d95c0                   ; 004ea401
        ;   XREF to: 004d95c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d95c0()
    ADD ESP,0x4                         ; 004ea406
    POP EBP                             ; 004ea409
    POP EDI                             ; 004ea40a
    POP EBX                             ; 004ea40b
    RET                                 ; 004ea40c
    PUSH 0x1d72cb0                      ; 004ea40d
        ;   Label: LAB_004ea40d
    CALL FUN_004f94a0                   ; 004ea412
        ;   XREF to: 004f94a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f94a0()
    ADD ESP,0x4                         ; 004ea417
    MOV EBX,dword ptr [0x006045f8]      ; 004ea41a | DAT_006045f8
    PUSH EBX                            ; 004ea420
    CALL FUN_005607d0                   ; 004ea421
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005607d0()
    ADD ESP,0x4                         ; 004ea426
    JMP 0x004ea297                      ; 004ea429
        ;   XREF to: 004ea297 (UNCONDITIONAL_JUMP)  ; LAB_004ea297
    CALL FUN_004e94f0                   ; 004ea42e
        ;   XREF to: 004e94f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e94f0()
        ;   Label: caseD_1
    JMP 0x004ea3de                      ; 004ea433
        ;   XREF to: 004ea3de (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 004ea435 | DAT_005fe9dc
        ;   Label: caseD_2
    MOV EAX,dword ptr [EAX + 0xd4]      ; 004ea43a | DAT_01d213e0
    MOV [0x01d737d8],EAX                ; 004ea440 | DAT_01d737d8
    CALL FUN_004e8f80                   ; 004ea445
        ;   XREF to: 004e8f80 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8f80()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004ea44a | DAT_005fe9dc
    MOV EAX,[0x01d737d8]                ; 004ea450 | DAT_01d737d8
    CMP EAX,dword ptr [EBX + 0xd4]      ; 004ea455 | DAT_01d213e0
    JZ 0x004ea3de                       ; 004ea45b
        ;   XREF to: 004ea3de (CONDITIONAL_JUMP)  ; default
    CALL FUN_004eae80                   ; 004ea45d
        ;   XREF to: 004eae80 (UNCONDITIONAL_CALL)  ; undefined FUN_004eae80()
    JMP 0x004ea3de                      ; 004ea462
        ;   XREF to: 004ea3de (UNCONDITIONAL_JUMP)  ; default
    MOV EBP,dword ptr [0x005fe9dc]      ; 004ea467 | DAT_005fe9dc
        ;   Label: caseD_3
    PUSH EBP                            ; 004ea46d
    CALL FUN_004c02a0                   ; 004ea46e
        ;   XREF to: 004c02a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c02a0()
    ADD ESP,0x4                         ; 004ea473
    MOV EAX,[0x006045f8]                ; 004ea476 | DAT_006045f8
    PUSH EAX                            ; 004ea47b
    CALL FUN_005607d0                   ; 004ea47c
        ;   XREF to: 005607d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005607d0()
    ADD ESP,0x4                         ; 004ea481
    JMP 0x004ea3de                      ; 004ea484
        ;   XREF to: 004ea3de (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1d72cb0                      ; 004ea489
        ;   Label: LAB_004ea489
    CALL FUN_004f9580                   ; 004ea48e
        ;   XREF to: 004f9580 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9580()
    ADD ESP,0x4                         ; 004ea493
    MOV EBX,dword ptr [0x006045f8]      ; 004ea496 | DAT_006045f8
    PUSH EBX                            ; 004ea49c
    CALL FUN_00560930                   ; 004ea49d
        ;   XREF to: 00560930 (UNCONDITIONAL_CALL)  ; undefined FUN_00560930()
    ADD ESP,0x4                         ; 004ea4a2
    CALL FUN_004d95c0                   ; 004ea4a5
        ;   XREF to: 004d95c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d95c0()
    ADD ESP,0x4                         ; 004ea4aa
    POP EBP                             ; 004ea4ad
    POP EDI                             ; 004ea4ae
    POP EBX                             ; 004ea4af
    RET                                 ; 004ea4b0

