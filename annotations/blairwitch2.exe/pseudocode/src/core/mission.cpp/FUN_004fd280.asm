; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd280(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x3cc]:4  local_3cc
;
; XREF[1]:
;   FUN_004fb490 at 004fb4f0
;
; Referenced Globals:
;   TerminatedCString s_CHero_005dea5d
;   TerminatedCString s_Warning_mission_has_no_h_005dea63
;   TerminatedCString s_Mission_has_no_hero_plac_005dea9c
;   TerminatedCString s_core_mission_cpp_005deb5e
;   TerminatedCString s_Hell_froze_finding_hero_005deb72
;   TerminatedCString s_Replaced_hero_OK_You_wil_005deb8b
;   undefined4 DAT_006138e0
;   undefined4 DAT_01cedf8c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0040c840
;   FUN_0040c8f0
;   FUN_0047bda0
;   FUN_00480e70
;   FUN_00481240
;   FUN_00481fc0
;   FUN_004820b0
;   FUN_00482250
;   FUN_004d0940
;   FUN_004e4500
;   FUN_004fc200
;   FUN_004fc570
;   FUN_004fc740
;   FUN_004fcda0
;   FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd280
        ;   Label: FUN_004fd280
    PUSH EDI                            ; 004fd281
    PUSH EBP                            ; 004fd282
    SUB ESP,0x3c0                       ; 004fd283
    MOV EDI,dword ptr [ESP + 0x3d0]     ; 004fd289
    MOV EAX,ESP                         ; 004fd290
    PUSH EAX                            ; 004fd292
    CALL FUN_00481fc0                   ; 004fd293
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481fc0()
    MOV EBX,dword ptr [EDI + 0x1114]    ; 004fd298
    ADD ESP,0x4                         ; 004fd29e
    TEST EBX,EBX                        ; 004fd2a1
    JZ 0x004fd2e7                       ; 004fd2a3
        ;   XREF to: 004fd2e7 (CONDITIONAL_JUMP)  ; LAB_004fd2e7
    PUSH 0x5dea5d                       ; 004fd2a5 | = "CHero"
        ;   Label: LAB_004fd2a5
    PUSH EBX                            ; 004fd2aa
    CALL FUN_0040c840                   ; 004fd2ab
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004fd2b0
    TEST EAX,EAX                        ; 004fd2b3
    JZ 0x004fd2c5                       ; 004fd2b5
        ;   XREF to: 004fd2c5 (CONDITIONAL_JUMP)  ; LAB_004fd2c5
    PUSH EBX                            ; 004fd2b7
    LEA EAX,[ESP + 0x4]                 ; 004fd2b8
    PUSH EAX                            ; 004fd2bc
    CALL FUN_00480e70                   ; 004fd2bd
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004fd2c2
    MOV EBP,dword ptr [0x01cedf8c]      ; 004fd2c5 | DAT_01cedf8c
        ;   Label: LAB_004fd2c5
    PUSH EBP                            ; 004fd2cb
    PUSH EBX                            ; 004fd2cc
    CALL FUN_0040c8f0                   ; 004fd2cd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004fd2d2
    TEST EAX,EAX                        ; 004fd2d5
    JNZ 0x004fd3fb                      ; 004fd2d7
        ;   XREF to: 004fd3fb (CONDITIONAL_JUMP)  ; LAB_004fd3fb
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fd2dd
        ;   Label: LAB_004fd2dd
    TEST EBX,EBX                        ; 004fd2e3
    JNZ 0x004fd2a5                      ; 004fd2e5
        ;   XREF to: 004fd2a5 (CONDITIONAL_JUMP)  ; LAB_004fd2a5
    CMP dword ptr [ESP],0x1             ; 004fd2e7
        ;   Label: LAB_004fd2e7
    JL 0x004fd421                       ; 004fd2eb
        ;   XREF to: 004fd421 (CONDITIONAL_JUMP)  ; LAB_004fd421
    PUSH 0x0                            ; 004fd2f1
    PUSH -0x1                           ; 004fd2f3
    PUSH 0x5dea9c                       ; 004fd2f5 | = "Mission has no hero placeholders.\n\n..."
    LEA EAX,[ESP + 0xc]                 ; 004fd2fa
    PUSH EAX                            ; 004fd2fe
    CALL FUN_00482250                   ; 004fd2ff
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; undefined FUN_00482250()
    ADD ESP,0x10                        ; 004fd304
    TEST EAX,EAX                        ; 004fd307
    JL 0x004fd435                       ; 004fd309
        ;   XREF to: 004fd435 (CONDITIONAL_JUMP)  ; LAB_004fd435
    PUSH ESI                            ; 004fd30f
    PUSH EAX                            ; 004fd310
    LEA EAX,[ESP + 0x8]                 ; 004fd311
    PUSH EAX                            ; 004fd315
    CALL FUN_00481240                   ; 004fd316
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; undefined FUN_00481240()
    ADD ESP,0x8                         ; 004fd31b
    PUSH EAX                            ; 004fd31e
    PUSH EDI                            ; 004fd31f
    CALL FUN_004fc740                   ; 004fd320
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc740()
    ADD ESP,0x8                         ; 004fd325
    MOV ESI,EAX                         ; 004fd328
    TEST EAX,EAX                        ; 004fd32a
    JNZ 0x004fd351                      ; 004fd32c
        ;   XREF to: 004fd351 (CONDITIONAL_JUMP)  ; LAB_004fd351
    MOV ECX,0x5deb5e                    ; 004fd32e | = "..\\core\\mission.cpp"
    MOV EBX,0x6d4                       ; 004fd333
    PUSH 0x5deb72                       ; 004fd338 | = "Hell froze finding hero."
    MOV dword ptr [0x01d046a0],ECX      ; 004fd33d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004fd343 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fd349
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fd34e
    PUSH 0x2d8                          ; 004fd351
        ;   Label: LAB_004fd351
    CALL FUN_005b8be2                   ; 004fd356
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004fd35b
    TEST EAX,EAX                        ; 004fd35e
    JZ 0x004fd36b                       ; 004fd360
        ;   XREF to: 004fd36b (CONDITIONAL_JUMP)  ; LAB_004fd36b
    PUSH EAX                            ; 004fd362
    CALL FUN_004d0940                   ; 004fd363
        ;   XREF to: 004d0940 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0940()
    ADD ESP,0x4                         ; 004fd368
    MOV EBP,EAX                         ; 004fd36b
        ;   Label: LAB_004fd36b
    LEA EDX,[ESI + 0x20]                ; 004fd36d
    MOV dword ptr [EAX + 0x2b4],0x0     ; 004fd370
    LEA EBX,[EAX + 0x20]                ; 004fd37a
    MOV ECX,dword ptr [EDX]             ; 004fd37d
    MOV dword ptr [EBX],ECX             ; 004fd37f
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fd381
    MOV dword ptr [EBX + 0x4],ECX       ; 004fd384
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fd387
    MOV dword ptr [EBX + 0x8],ECX       ; 004fd38a
    MOV EDX,dword ptr [EDX + 0xc]       ; 004fd38d
    ADD EAX,0x30                        ; 004fd390
    MOV dword ptr [EBX + 0xc],EDX       ; 004fd393
    LEA EBX,[ESI + 0x30]                ; 004fd396
    CMP EAX,EBX                         ; 004fd399
    JZ 0x004fd3ad                       ; 004fd39b
        ;   XREF to: 004fd3ad (CONDITIONAL_JUMP)  ; LAB_004fd3ad
    MOV EDX,dword ptr [EBX]             ; 004fd39d
    MOV dword ptr [EAX],EDX             ; 004fd39f
    MOV EDX,dword ptr [EBX + 0x4]       ; 004fd3a1
    MOV dword ptr [EAX + 0x4],EDX       ; 004fd3a4
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fd3a7
    MOV dword ptr [EAX + 0x8],EDX       ; 004fd3aa
    PUSH EBP                            ; 004fd3ad
        ;   Label: LAB_004fd3ad
    PUSH EDI                            ; 004fd3ae
    CALL FUN_004fcda0                   ; 004fd3af
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcda0()
    ADD ESP,0x8                         ; 004fd3b4
    PUSH 0x1                            ; 004fd3b7
    PUSH ESI                            ; 004fd3b9
    PUSH EDI                            ; 004fd3ba
    CALL FUN_004fc570                   ; 004fd3bb
        ;   XREF to: 004fc570 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc570()
    ADD ESP,0xc                         ; 004fd3c0
    PUSH EBP                            ; 004fd3c3
    PUSH EDI                            ; 004fd3c4
    CALL FUN_004fc200                   ; 004fd3c5
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc200()
    ADD ESP,0x8                         ; 004fd3ca
    PUSH 0x5deb8b                       ; 004fd3cd | = "Replaced hero OK.  You will need to s..."
    MOV ESI,dword ptr [0x006138e0]      ; 004fd3d2 | DAT_006138e0
    PUSH ESI                            ; 004fd3d8
    CALL FUN_0047bda0                   ; 004fd3d9
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bda0()
    ADD ESP,0x8                         ; 004fd3de
    PUSH 0x0                            ; 004fd3e1
    LEA EAX,[ESP + 0x8]                 ; 004fd3e3
    PUSH EAX                            ; 004fd3e7
    CALL FUN_004820b0                   ; 004fd3e8
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    ADD ESP,0x8                         ; 004fd3ed
    POP ESI                             ; 004fd3f0
    ADD ESP,0x3c0                       ; 004fd3f1
    POP EBP                             ; 004fd3f7
    POP EDI                             ; 004fd3f8
    POP EBX                             ; 004fd3f9
    RET                                 ; 004fd3fa
    MOV EDX,dword ptr [EAX + 0x2b4]     ; 004fd3fb
        ;   Label: LAB_004fd3fb
    TEST EDX,EDX                        ; 004fd401
    JNZ 0x004fd2dd                      ; 004fd403
        ;   XREF to: 004fd2dd (CONDITIONAL_JUMP)  ; LAB_004fd2dd
    PUSH EDX                            ; 004fd409
    LEA EAX,[ESP + 0x4]                 ; 004fd40a
    PUSH EAX                            ; 004fd40e
    CALL FUN_004820b0                   ; 004fd40f
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    ADD ESP,0x8                         ; 004fd414
    ADD ESP,0x3c0                       ; 004fd417
    POP EBP                             ; 004fd41d
    POP EDI                             ; 004fd41e
    POP EBX                             ; 004fd41f
    RET                                 ; 004fd420
    PUSH 0x5dea63                       ; 004fd421 | = "Warning: mission has no hero placehol..."
        ;   Label: LAB_004fd421
    MOV EDI,dword ptr [0x006138e0]      ; 004fd426 | DAT_006138e0
    PUSH EDI                            ; 004fd42c
    CALL FUN_0047bda0                   ; 004fd42d
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bda0()
    ADD ESP,0x8                         ; 004fd432
    PUSH 0x0                            ; 004fd435
        ;   Label: LAB_004fd435
    LEA EAX,[ESP + 0x4]                 ; 004fd437
    PUSH EAX                            ; 004fd43b
    CALL FUN_004820b0                   ; 004fd43c
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    ADD ESP,0x8                         ; 004fd441
    ADD ESP,0x3c0                       ; 004fd444
    POP EBP                             ; 004fd44a
    POP EDI                             ; 004fd44b
    POP EBX                             ; 004fd44c
    RET                                 ; 004fd44d

