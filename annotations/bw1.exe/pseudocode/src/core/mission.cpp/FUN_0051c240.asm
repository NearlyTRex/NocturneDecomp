; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051c240(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x3cc]:4  local_3cc
;
; XREF[1]:
;   FUN_0051a3f0 at 0051a450
;
; Referenced Globals:
;   TerminatedCString s_CHero_005e9aaa
;   TerminatedCString s_Warning_mission_has_no_h_005e9ab0
;   TerminatedCString s_Mission_has_no_hero_plac_005e9ae9
;   TerminatedCString s_core_mission_cpp_005e9bab
;   TerminatedCString s_Hell_froze_finding_hero_005e9bbf
;   TerminatedCString s_Replaced_hero_OK_You_wil_005e9bd8
;   undefined4 DAT_0061abc0
;   undefined4 DAT_01d06b4c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0040c550
;   FUN_0040c600
;   FUN_004942e0
;   FUN_004994d0
;   FUN_004998a0
;   FUN_0049a620
;   FUN_0049a710
;   FUN_0049a8b0
;   FUN_004ecba0
;   FUN_005030e0
;   FUN_0051b160
;   FUN_0051b4d0
;   FUN_0051b6c0
;   FUN_0051bd60
;   FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c240
        ;   Label: FUN_0051c240
    PUSH EDI                            ; 0051c241
    PUSH EBP                            ; 0051c242
    SUB ESP,0x3c0                       ; 0051c243
    MOV EDI,dword ptr [ESP + 0x3d0]     ; 0051c249
    MOV EAX,ESP                         ; 0051c250
    PUSH EAX                            ; 0051c252
    CALL FUN_0049a620                   ; 0051c253
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a620()
    MOV EBX,dword ptr [EDI + 0x1118]    ; 0051c258
    ADD ESP,0x4                         ; 0051c25e
    TEST EBX,EBX                        ; 0051c261
    JZ 0x0051c2a7                       ; 0051c263
        ;   XREF to: 0051c2a7 (CONDITIONAL_JUMP)  ; LAB_0051c2a7
    PUSH 0x5e9aaa                       ; 0051c265 | = "CHero"
        ;   Label: LAB_0051c265
    PUSH EBX                            ; 0051c26a
    CALL FUN_0040c550                   ; 0051c26b
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0051c270
    TEST EAX,EAX                        ; 0051c273
    JZ 0x0051c285                       ; 0051c275
        ;   XREF to: 0051c285 (CONDITIONAL_JUMP)  ; LAB_0051c285
    PUSH EBX                            ; 0051c277
    LEA EAX,[ESP + 0x4]                 ; 0051c278
    PUSH EAX                            ; 0051c27c
    CALL FUN_004994d0                   ; 0051c27d
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 0051c282
    MOV EBP,dword ptr [0x01d06b4c]      ; 0051c285 | DAT_01d06b4c
        ;   Label: LAB_0051c285
    PUSH EBP                            ; 0051c28b
    PUSH EBX                            ; 0051c28c
    CALL FUN_0040c600                   ; 0051c28d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 0051c292
    TEST EAX,EAX                        ; 0051c295
    JNZ 0x0051c3bb                      ; 0051c297
        ;   XREF to: 0051c3bb (CONDITIONAL_JUMP)  ; LAB_0051c3bb
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051c29d
        ;   Label: LAB_0051c29d
    TEST EBX,EBX                        ; 0051c2a3
    JNZ 0x0051c265                      ; 0051c2a5
        ;   XREF to: 0051c265 (CONDITIONAL_JUMP)  ; LAB_0051c265
    CMP dword ptr [ESP],0x1             ; 0051c2a7
        ;   Label: LAB_0051c2a7
    JL 0x0051c3e1                       ; 0051c2ab
        ;   XREF to: 0051c3e1 (CONDITIONAL_JUMP)  ; LAB_0051c3e1
    PUSH 0x0                            ; 0051c2b1
    PUSH -0x1                           ; 0051c2b3
    PUSH 0x5e9ae9                       ; 0051c2b5 | = "Mission has no hero placeholders.\n\n..."
    LEA EAX,[ESP + 0xc]                 ; 0051c2ba
    PUSH EAX                            ; 0051c2be
    CALL FUN_0049a8b0                   ; 0051c2bf
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a8b0()
    ADD ESP,0x10                        ; 0051c2c4
    TEST EAX,EAX                        ; 0051c2c7
    JL 0x0051c3f5                       ; 0051c2c9
        ;   XREF to: 0051c3f5 (CONDITIONAL_JUMP)  ; LAB_0051c3f5
    PUSH ESI                            ; 0051c2cf
    PUSH EAX                            ; 0051c2d0
    LEA EAX,[ESP + 0x8]                 ; 0051c2d1
    PUSH EAX                            ; 0051c2d5
    CALL FUN_004998a0                   ; 0051c2d6
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998a0()
    ADD ESP,0x8                         ; 0051c2db
    PUSH EAX                            ; 0051c2de
    PUSH EDI                            ; 0051c2df
    CALL FUN_0051b6c0                   ; 0051c2e0
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6c0()
    ADD ESP,0x8                         ; 0051c2e5
    MOV ESI,EAX                         ; 0051c2e8
    TEST EAX,EAX                        ; 0051c2ea
    JNZ 0x0051c311                      ; 0051c2ec
        ;   XREF to: 0051c311 (CONDITIONAL_JUMP)  ; LAB_0051c311
    MOV ECX,0x5e9bab                    ; 0051c2ee | = "..\\core\\mission.cpp"
    MOV EBX,0x6e4                       ; 0051c2f3
    PUSH 0x5e9bbf                       ; 0051c2f8 | = "Hell froze finding hero."
    MOV dword ptr [0x01d1d400],ECX      ; 0051c2fd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0051c303 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051c309
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051c30e
    PUSH 0x17c                          ; 0051c311
        ;   Label: LAB_0051c311
    CALL FUN_005c0f32                   ; 0051c316
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f32()
    ADD ESP,0x4                         ; 0051c31b
    TEST EAX,EAX                        ; 0051c31e
    JZ 0x0051c32b                       ; 0051c320
        ;   XREF to: 0051c32b (CONDITIONAL_JUMP)  ; LAB_0051c32b
    PUSH EAX                            ; 0051c322
    CALL FUN_004ecba0                   ; 0051c323
        ;   XREF to: 004ecba0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ecba0()
    ADD ESP,0x4                         ; 0051c328
    MOV EBP,EAX                         ; 0051c32b
        ;   Label: LAB_0051c32b
    LEA EDX,[ESI + 0x20]                ; 0051c32d
    MOV dword ptr [EAX + 0x158],0x0     ; 0051c330
    LEA EBX,[EAX + 0x20]                ; 0051c33a
    MOV ECX,dword ptr [EDX]             ; 0051c33d
    MOV dword ptr [EBX],ECX             ; 0051c33f
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051c341
    MOV dword ptr [EBX + 0x4],ECX       ; 0051c344
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051c347
    MOV dword ptr [EBX + 0x8],ECX       ; 0051c34a
    MOV EDX,dword ptr [EDX + 0xc]       ; 0051c34d
    ADD EAX,0x30                        ; 0051c350
    MOV dword ptr [EBX + 0xc],EDX       ; 0051c353
    LEA EBX,[ESI + 0x30]                ; 0051c356
    CMP EAX,EBX                         ; 0051c359
    JZ 0x0051c36d                       ; 0051c35b
        ;   XREF to: 0051c36d (CONDITIONAL_JUMP)  ; LAB_0051c36d
    MOV EDX,dword ptr [EBX]             ; 0051c35d
    MOV dword ptr [EAX],EDX             ; 0051c35f
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051c361
    MOV dword ptr [EAX + 0x4],EDX       ; 0051c364
    MOV EDX,dword ptr [EBX + 0x8]       ; 0051c367
    MOV dword ptr [EAX + 0x8],EDX       ; 0051c36a
    PUSH EBP                            ; 0051c36d
        ;   Label: LAB_0051c36d
    PUSH EDI                            ; 0051c36e
    CALL FUN_0051bd60                   ; 0051c36f
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bd60()
    ADD ESP,0x8                         ; 0051c374
    PUSH 0x1                            ; 0051c377
    PUSH ESI                            ; 0051c379
    PUSH EDI                            ; 0051c37a
    CALL FUN_0051b4d0                   ; 0051c37b
        ;   XREF to: 0051b4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b4d0()
    ADD ESP,0xc                         ; 0051c380
    PUSH EBP                            ; 0051c383
    PUSH EDI                            ; 0051c384
    CALL FUN_0051b160                   ; 0051c385
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b160()
    ADD ESP,0x8                         ; 0051c38a
    PUSH 0x5e9bd8                       ; 0051c38d | = "Replaced hero OK.  You will need to s..."
    MOV ESI,dword ptr [0x0061abc0]      ; 0051c392 | DAT_0061abc0
    PUSH ESI                            ; 0051c398
    CALL FUN_004942e0                   ; 0051c399
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004942e0()
    ADD ESP,0x8                         ; 0051c39e
    PUSH 0x0                            ; 0051c3a1
    LEA EAX,[ESP + 0x8]                 ; 0051c3a3
    PUSH EAX                            ; 0051c3a7
    CALL FUN_0049a710                   ; 0051c3a8
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a710()
    ADD ESP,0x8                         ; 0051c3ad
    POP ESI                             ; 0051c3b0
    ADD ESP,0x3c0                       ; 0051c3b1
    POP EBP                             ; 0051c3b7
    POP EDI                             ; 0051c3b8
    POP EBX                             ; 0051c3b9
    RET                                 ; 0051c3ba
    MOV EDX,dword ptr [EAX + 0x158]     ; 0051c3bb
        ;   Label: LAB_0051c3bb
    TEST EDX,EDX                        ; 0051c3c1
    JNZ 0x0051c29d                      ; 0051c3c3
        ;   XREF to: 0051c29d (CONDITIONAL_JUMP)  ; LAB_0051c29d
    PUSH EDX                            ; 0051c3c9
    LEA EAX,[ESP + 0x4]                 ; 0051c3ca
    PUSH EAX                            ; 0051c3ce
    CALL FUN_0049a710                   ; 0051c3cf
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a710()
    ADD ESP,0x8                         ; 0051c3d4
    ADD ESP,0x3c0                       ; 0051c3d7
    POP EBP                             ; 0051c3dd
    POP EDI                             ; 0051c3de
    POP EBX                             ; 0051c3df
    RET                                 ; 0051c3e0
    PUSH 0x5e9ab0                       ; 0051c3e1 | = "Warning: mission has no hero placehol..."
        ;   Label: LAB_0051c3e1
    MOV EDI,dword ptr [0x0061abc0]      ; 0051c3e6 | DAT_0061abc0
    PUSH EDI                            ; 0051c3ec
    CALL FUN_004942e0                   ; 0051c3ed
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004942e0()
    ADD ESP,0x8                         ; 0051c3f2
    PUSH 0x0                            ; 0051c3f5
        ;   Label: LAB_0051c3f5
    LEA EAX,[ESP + 0x4]                 ; 0051c3f7
    PUSH EAX                            ; 0051c3fb
    CALL FUN_0049a710                   ; 0051c3fc
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a710()
    ADD ESP,0x8                         ; 0051c401
    ADD ESP,0x3c0                       ; 0051c404
    POP EBP                             ; 0051c40a
    POP EDI                             ; 0051c40b
    POP EBX                             ; 0051c40c
    RET                                 ; 0051c40d

