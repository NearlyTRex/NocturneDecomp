; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555270(int param_1)
;
;
; XREF[10]:
;   FUN_00552f10 at 00552f9b
;   FUN_00553960 at 00553c18
;   FUN_00554430 at 00554713
;   FUN_00554920 at 00554a65
;   FUN_00555410 at 00555489
;   FUN_00556240 at 005564bb
;   FUN_00556be0 at 00556bf5
;   FUN_00556c60 at 00556c73
;   FUN_00556db0 at 00556e07
;   FUN_00558f20 at 005590d4
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3246
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005d325b
;   TerminatedCString s_NULLsamplePtr_005d327b
;   TerminatedCString s_Killing_sfx_s_005d328b
;   TerminatedCString s_sound_sndmain_cpp_005d329b
;   TerminatedCString s_SfxSlot_kill_ref_count_o_005d32b0
;   TerminatedCString s_sound_sndmain_cpp_005d32da
;   TerminatedCString s_refCount_for_streaming_S_005d32ef
;   TerminatedCString s_sound_sndmain_cpp_005d3311
;   TerminatedCString s_streaming_sample_sfx_ind_005d3326
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3280
;   ... and 1 more
;
; Called Functions:
;   FUN_00441ff0
;   FUN_004e4330
;   FUN_005514c0
;   FUN_00553520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555270
        ;   Label: FUN_00555270
    PUSH ESI                            ; 00555271
    PUSH EBP                            ; 00555272
    MOV EBX,dword ptr [ESP + 0x10]      ; 00555273
    CMP dword ptr [0x02cf341c],0x0      ; 00555277 | DAT_02cf341c
    JLE 0x005553b2                      ; 0055527e
        ;   XREF to: 005553b2 (CONDITIONAL_JUMP)  ; LAB_005553b2
    CMP dword ptr [EBX + 0x108],0x0     ; 00555284
        ;   Label: LAB_00555284
    JZ 0x005552af                       ; 0055528b
        ;   XREF to: 005552af (CONDITIONAL_JUMP)  ; LAB_005552af
    MOV EBP,dword ptr [EBX + 0x68]      ; 0055528d
    MOV EDX,0x5d327b                    ; 00555290 | = "[NULLsamplePtr]"
    TEST EBP,EBP                        ; 00555295
    JZ 0x0055529b                       ; 00555297
        ;   XREF to: 0055529b (CONDITIONAL_JUMP)  ; LAB_0055529b
    MOV EDX,EBP                         ; 00555299
    PUSH EDX                            ; 0055529b | = "[NULLsamplePtr]"
        ;   Label: LAB_0055529b
    PUSH 0x5d328b                       ; 0055529c | = "Killing sfx %s\n"
    MOV EAX,[0x005f1690]                ; 005552a1 | PTR_DAT_005f1690
    PUSH EAX                            ; 005552a6 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 005552a7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 005552ac
    CMP dword ptr [EBX + 0x60],0x0      ; 005552af
        ;   Label: LAB_005552af
    JZ 0x005552d0                       ; 005552b3
        ;   XREF to: 005552d0 (CONDITIONAL_JUMP)  ; LAB_005552d0
    MOV ECX,dword ptr [0x02cf3280]      ; 005552b5 | DAT_02cf3280
    TEST ECX,ECX                        ; 005552bb
    JZ 0x005552c9                       ; 005552bd
        ;   XREF to: 005552c9 (CONDITIONAL_JUMP)  ; LAB_005552c9
    PUSH EBX                            ; 005552bf
    MOV EAX,dword ptr [ECX]             ; 005552c0
    PUSH ECX                            ; 005552c2
    CALL dword ptr [EAX + 0x50]         ; 005552c3
    ADD ESP,0x8                         ; 005552c6
    MOV dword ptr [EBX + 0x60],0x0      ; 005552c9
        ;   Label: LAB_005552c9
    MOV dword ptr [EBX + 0x108],0x0     ; 005552d0
        ;   Label: LAB_005552d0
    MOV ESI,dword ptr [EBX + 0x68]      ; 005552da
    MOV dword ptr [EBX + 0x64],0x0      ; 005552dd
    TEST ESI,ESI                        ; 005552e4
    JZ 0x005553a4                       ; 005552e6
        ;   XREF to: 005553a4 (CONDITIONAL_JUMP)  ; LAB_005553a4
    CMP dword ptr [ESI + 0x154],0x1     ; 005552ec
    JL 0x005553da                       ; 005552f3
        ;   XREF to: 005553da (CONDITIONAL_JUMP)  ; LAB_005553da
    MOV EDX,dword ptr [EBX + 0x68]      ; 005552f9
        ;   Label: LAB_005552f9
    DEC dword ptr [EDX + 0x154]         ; 005552fc
    MOV ESI,dword ptr [EBX + 0x68]      ; 00555302
    MOV dword ptr [EBX + 0x68],0x0      ; 00555305
    CMP dword ptr [ESI + 0x160],0x0     ; 0055530c
    JL 0x00555390                       ; 00555313
        ;   XREF to: 00555390 (CONDITIONAL_JUMP)  ; LAB_00555390
    CMP dword ptr [ESI + 0x154],0x0     ; 00555319
    JZ 0x00555345                       ; 00555320
        ;   XREF to: 00555345 (CONDITIONAL_JUMP)  ; LAB_00555345
    PUSH ESI                            ; 00555322
    MOV EAX,0x5d32da                    ; 00555323 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0xcd3                       ; 00555328
    PUSH 0x5d32ef                       ; 0055532d | = "refCount for streaming Sfx %s > 1"
    MOV [0x01d71de0],EAX                ; 00555332 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00555337 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055533d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00555342
    MOV EDX,EBX                         ; 00555345
        ;   Label: LAB_00555345
    SUB EDX,0x2ce721c                   ; 00555347
    MOV ECX,0x11c                       ; 0055534d
    MOV EAX,EDX                         ; 00555352
    SAR EDX,0x1f                        ; 00555354
    IDIV ECX                            ; 00555357
    CMP EAX,dword ptr [ESI + 0x160]     ; 00555359
    JZ 0x00555387                       ; 0055535f
        ;   XREF to: 00555387 (CONDITIONAL_JUMP)  ; LAB_00555387
    PUSH EDI                            ; 00555361
    PUSH ESI                            ; 00555362
    MOV EDI,0x5d3311                    ; 00555363 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xcd4                       ; 00555368
    PUSH 0x5d3326                       ; 0055536d | = "streaming sample sfx index mismatch o..."
    MOV dword ptr [0x01d71de0],EDI      ; 00555372 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00555378 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055537e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00555383
    POP EDI                             ; 00555386
    PUSH ESI                            ; 00555387
        ;   Label: LAB_00555387
    CALL FUN_00553520                   ; 00555388
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; undefined FUN_00553520()
    ADD ESP,0x4                         ; 0055538d
    PUSH 0x0                            ; 00555390
        ;   Label: LAB_00555390
    CALL FUN_005514c0                   ; 00555392
        ;   XREF to: 005514c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005514c0()
    ADD ESP,0x4                         ; 00555397
    MOV dword ptr [ESI + 0x160],0xffffffff ; 0055539a
    MOV dword ptr [EBX + 0x118],0x0     ; 005553a4
        ;   Label: LAB_005553a4
    POP EBP                             ; 005553ae
    POP ESI                             ; 005553af
    POP EBX                             ; 005553b0
    RET                                 ; 005553b1
    MOV ECX,0x5d3246                    ; 005553b2 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005553b2
    MOV ESI,0xca5                       ; 005553b7
    PUSH 0x5d325b                       ; 005553bc | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 005553c1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005553c7 | DAT_01d71de4
    CALL FUN_004e4330                   ; 005553cd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005553d2
    JMP 0x00555284                      ; 005553d5
        ;   XREF to: 00555284 (UNCONDITIONAL_JUMP)  ; LAB_00555284
    MOV EBP,0x5d329b                    ; 005553da | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005553da
    MOV EAX,0xcc4                       ; 005553df
    PUSH 0x5d32b0                       ; 005553e4 | = "SfxSlot::kill - ref count out of bala..."
    MOV dword ptr [0x01d71de0],EBP      ; 005553e9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005553ef | DAT_01d71de4
    CALL FUN_004e4330                   ; 005553f4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005553f9
    JMP 0x005552f9                      ; 005553fc
        ;   XREF to: 005552f9 (UNCONDITIONAL_JUMP)  ; LAB_005552f9

