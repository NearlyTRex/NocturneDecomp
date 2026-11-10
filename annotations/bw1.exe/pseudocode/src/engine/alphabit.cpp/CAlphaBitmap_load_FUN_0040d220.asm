; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap *this_ptr,char *filename,int width,int height)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; Local Variables:
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[23]:
;   core_bmppuzzl.cpp_FUN_00416570 at 004165a1
;   core_fldnotes.cpp_FUN_004baa40 at 004baaa2
;   core_fldnotes.cpp_FUN_004bab60 at 004babda
;   core_fldnotes.cpp_FUN_004badc0 at 004baec2
;   core_fldnotes.cpp_FUN_004bc2d0 at 004bc2eb
;   core_fldnotes.cpp_FUN_004be0f0 at 004be667
;   core_game.cpp_CGame_displayActStats_FUN_004d8700 at 004d8731
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8afb
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8eab
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 at 004cf595
;   ... and 13 more
;
; Referenced Globals:
;   TerminatedCString s_s_raw_005d2f9b
;   undefined4 DAT_005d2fa2
;   undefined4 DAT_005d2fa5
;   TerminatedCString s_engine_alphabit_cpp_005d2fa9
;   TerminatedCString s_CAlphaBitmap_load_Can_t_005d2fc0
;   TerminatedCString s_s_act_005d2fe3
;   undefined4 DAT_005d2fea
;   undefined4 DAT_005d2fed
;   TerminatedCString s_engine_alphabit_cpp_005d2ff1
;   TerminatedCString s_CAlphaBitmap_load_Can_t_005d3008
;   TerminatedCString s_s_opa_005d302b
;   undefined4 DAT_005d3032
;   undefined4 DAT_005d3035
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_alphabit.cpp_FUN_0040d0e0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d220
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
    PUSH ESI                            ; 0040d221
    PUSH EDI                            ; 0040d222
    PUSH EBP                            ; 0040d223
    SUB ESP,0x104                       ; 0040d224
    MOV EBX,dword ptr [ESP + 0x118]     ; 0040d22a
    MOV EDX,dword ptr [ESP + 0x124]     ; 0040d231
    PUSH EDX                            ; 0040d238
    MOV ECX,dword ptr [ESP + 0x124]     ; 0040d239
    PUSH ECX                            ; 0040d240
    PUSH EBX                            ; 0040d241
    CALL engine_alphabit.cpp_FUN_0040d0e0 ; 0040d242
        ;   XREF to: 0040d0e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d0e0()
    ADD ESP,0xc                         ; 0040d247
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0040d24a
    PUSH ESI                            ; 0040d251
    PUSH 0x5d2f9b                       ; 0040d252 | = "%s.raw"
    LEA EAX,[ESP + 0x8]                 ; 0040d257
    PUSH EAX                            ; 0040d25b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0040d25c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d261
    PUSH 0x5d2fa2                       ; 0040d264 | DAT_005d2fa2
    LEA EAX,[ESP + 0x4]                 ; 0040d269
    PUSH EAX                            ; 0040d26d
    PUSH 0x5d2fa5                       ; 0040d26e | DAT_005d2fa5
    CALL engine_dosio.cpp_FUN_00479180  ; 0040d273
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040d278
    MOV dword ptr [ESP + 0x100],EAX     ; 0040d27b
    TEST EAX,EAX                        ; 0040d282
    JZ 0x0040d3ff                       ; 0040d284
        ;   XREF to: 0040d3ff (CONDITIONAL_JUMP)  ; LAB_0040d3ff
    MOV EAX,dword ptr [ESP + 0x100]     ; 0040d28a
        ;   Label: LAB_0040d28a
    PUSH EAX                            ; 0040d291
    MOV EDX,dword ptr [ESP + 0x128]     ; 0040d292
    PUSH EDX                            ; 0040d299
    MOV ECX,dword ptr [ESP + 0x128]     ; 0040d29a
    PUSH ECX                            ; 0040d2a1
    MOV ESI,dword ptr [EBX]             ; 0040d2a2
    PUSH ESI                            ; 0040d2a4
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0040d2a5
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0040d2aa
    MOV EDI,dword ptr [ESP + 0x100]     ; 0040d2ad
    PUSH EDI                            ; 0040d2b4
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0040d2b5
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0040d2ba
    MOV EBP,dword ptr [ESP + 0x11c]     ; 0040d2bd
    PUSH EBP                            ; 0040d2c4
    PUSH 0x5d2fe3                       ; 0040d2c5 | = "%s.act"
    LEA EAX,[ESP + 0x8]                 ; 0040d2ca
    PUSH EAX                            ; 0040d2ce
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0040d2cf
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d2d4
    PUSH 0x5d2fea                       ; 0040d2d7 | DAT_005d2fea
    LEA EAX,[ESP + 0x4]                 ; 0040d2dc
    PUSH EAX                            ; 0040d2e0
    PUSH 0x5d2fed                       ; 0040d2e1 | DAT_005d2fed
    CALL engine_dosio.cpp_FUN_00479180  ; 0040d2e6
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040d2eb
    MOV dword ptr [ESP + 0x100],EAX     ; 0040d2ee
    TEST EAX,EAX                        ; 0040d2f5
    JZ 0x0040d42a                       ; 0040d2f7
        ;   XREF to: 0040d42a (CONDITIONAL_JUMP)  ; LAB_0040d42a
    XOR ESI,ESI                         ; 0040d2fd
        ;   Label: LAB_0040d2fd
    MOV ECX,dword ptr [ESP + 0x100]     ; 0040d2ff
        ;   Label: LAB_0040d2ff
    PUSH ECX                            ; 0040d306
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040d307
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040d30c
    MOV EBP,dword ptr [ESP + 0x100]     ; 0040d30f
    PUSH EBP                            ; 0040d316
    MOV EDI,EAX                         ; 0040d317
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040d319
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 0040d31e
    MOV EBP,EAX                         ; 0040d321
    MOV EAX,dword ptr [ESP + 0x100]     ; 0040d323
    PUSH EAX                            ; 0040d32a
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040d32b
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    MOV EDX,dword ptr [0x0061b4a0]      ; 0040d330 | DAT_0061b4a0
    ADD ESP,0x4                         ; 0040d336
    CMP EDX,0x20                        ; 0040d339
    JNZ 0x0040d454                      ; 0040d33c
        ;   XREF to: 0040d454 (CONDITIONAL_JUMP)  ; LAB_0040d454
    MOV CL,byte ptr [0x01c4e9d4]        ; 0040d342 | DAT_01c4e9d4
    SHL EDI,CL                          ; 0040d348
    MOV CL,byte ptr [0x01c4e9e0]        ; 0040d34a | DAT_01c4e9e0
    SHL EBP,CL                          ; 0040d350
    MOV CL,byte ptr [0x01c4e9ec]        ; 0040d352 | DAT_01c4e9ec
    OR EDI,EBP                          ; 0040d358
    SHL EAX,CL                          ; 0040d35a
    MOV ECX,EDI                         ; 0040d35c
    OR ECX,EAX                          ; 0040d35e
        ;   Label: LAB_0040d35e
    ADD ESI,0x4                         ; 0040d360
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040d363
    MOV dword ptr [ESI + EAX*0x1 + -0x4],ECX ; 0040d366
    CMP ESI,0x400                       ; 0040d36a
    JNZ 0x0040d2ff                      ; 0040d370
        ;   XREF to: 0040d2ff (CONDITIONAL_JUMP)  ; LAB_0040d2ff
    MOV ECX,dword ptr [ESP + 0x100]     ; 0040d372
    PUSH ECX                            ; 0040d379
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0040d37a
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0040d37f
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0040d382
    PUSH ESI                            ; 0040d389
    PUSH 0x5d302b                       ; 0040d38a | = "%s.opa"
    LEA EAX,[ESP + 0x8]                 ; 0040d38f
    PUSH EAX                            ; 0040d393
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0040d394
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d399
    PUSH 0x5d3032                       ; 0040d39c | DAT_005d3032
    LEA EAX,[ESP + 0x4]                 ; 0040d3a1
    PUSH EAX                            ; 0040d3a5
    PUSH 0x5d3035                       ; 0040d3a6 | DAT_005d3035
    CALL engine_dosio.cpp_FUN_00479180  ; 0040d3ab
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    MOV EDI,EAX                         ; 0040d3b0
    ADD ESP,0xc                         ; 0040d3b2
    TEST EAX,EAX                        ; 0040d3b5
    JNZ 0x0040d463                      ; 0040d3b7
        ;   XREF to: 0040d463 (CONDITIONAL_JUMP)  ; LAB_0040d463
    MOV EDI,dword ptr [ESP + 0x120]     ; 0040d3bd
    IMUL EDI,dword ptr [ESP + 0x124]    ; 0040d3c4
    TEST EDI,EDI                        ; 0040d3cc
    JLE 0x0040d3f4                      ; 0040d3ce
        ;   XREF to: 0040d3f4 (CONDITIONAL_JUMP)  ; LAB_0040d3f4
    MOV ECX,dword ptr [EBX]             ; 0040d3d0
        ;   Label: LAB_0040d3d0
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0040d3d2
    AND ECX,0xff                        ; 0040d3d5
    MOV ESI,dword ptr [EBX + 0x8]       ; 0040d3db
    CMP dword ptr [ESI + ECX*0x4],0x0   ; 0040d3de
    JNZ 0x0040d494                      ; 0040d3e2
        ;   XREF to: 0040d494 (CONDITIONAL_JUMP)  ; LAB_0040d494
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040d3e8
    MOV byte ptr [ECX + EAX*0x1],0x0    ; 0040d3eb
    INC EAX                             ; 0040d3ef
    CMP EAX,EDI                         ; 0040d3f0
    JL 0x0040d3d0                       ; 0040d3f2
        ;   XREF to: 0040d3d0 (CONDITIONAL_JUMP)  ; LAB_0040d3d0
    ADD ESP,0x104                       ; 0040d3f4
        ;   Label: LAB_0040d3f4
    POP EBP                             ; 0040d3fa
    POP EDI                             ; 0040d3fb
    POP ESI                             ; 0040d3fc
    POP EBX                             ; 0040d3fd
    RET                                 ; 0040d3fe
    MOV EAX,ESP                         ; 0040d3ff
        ;   Label: LAB_0040d3ff
    PUSH EAX                            ; 0040d401
    MOV EDI,0x5d2fa9                    ; 0040d402 | = "..\\engine\\alphabit.cpp"
    MOV EBP,0xe1                        ; 0040d407
    PUSH 0x5d2fc0                       ; 0040d40c | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01d1d400],EDI      ; 0040d411 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0040d417 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040d41d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0040d422
    JMP 0x0040d28a                      ; 0040d425
        ;   XREF to: 0040d28a (UNCONDITIONAL_JUMP)  ; LAB_0040d28a
    MOV dword ptr [0x01d1d400],0x5d2ff1 ; 0040d42a | DAT_01d1d400 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d42a
    MOV EAX,ESP                         ; 0040d434
    PUSH EAX                            ; 0040d436
    MOV EDX,0xe7                        ; 0040d437
    PUSH 0x5d3008                       ; 0040d43c | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01d1d404],EDX      ; 0040d441 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040d447
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0040d44c
    JMP 0x0040d2fd                      ; 0040d44f
        ;   XREF to: 0040d2fd (UNCONDITIONAL_JUMP)  ; LAB_0040d2fd
    MOV ECX,EDI                         ; 0040d454
        ;   Label: LAB_0040d454
    SHL EBP,0x8                         ; 0040d456
    SHL ECX,0x10                        ; 0040d459
    OR ECX,EBP                          ; 0040d45c
    JMP 0x0040d35e                      ; 0040d45e
        ;   XREF to: 0040d35e (UNCONDITIONAL_JUMP)  ; LAB_0040d35e
    PUSH EAX                            ; 0040d463
        ;   Label: LAB_0040d463
    MOV EAX,dword ptr [ESP + 0x128]     ; 0040d464
    PUSH EAX                            ; 0040d46b
    MOV EDX,dword ptr [ESP + 0x128]     ; 0040d46c
    PUSH EDX                            ; 0040d473
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040d474
    PUSH ECX                            ; 0040d477
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0040d478
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0040d47d
    PUSH EDI                            ; 0040d480
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 0040d481
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0040d486
    ADD ESP,0x104                       ; 0040d489
    POP EBP                             ; 0040d48f
    POP EDI                             ; 0040d490
    POP ESI                             ; 0040d491
    POP EBX                             ; 0040d492
    RET                                 ; 0040d493
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040d494
        ;   Label: LAB_0040d494
    MOV byte ptr [ECX + EAX*0x1],0xff   ; 0040d497
    INC EAX                             ; 0040d49b
    CMP EAX,EDI                         ; 0040d49c
    JL 0x0040d3d0                       ; 0040d49e
        ;   XREF to: 0040d3d0 (CONDITIONAL_JUMP)  ; LAB_0040d3d0
    ADD ESP,0x104                       ; 0040d4a4
    POP EBP                             ; 0040d4aa
    POP EDI                             ; 0040d4ab
    POP ESI                             ; 0040d4ac
    POP EBX                             ; 0040d4ad
    RET                                 ; 0040d4ae

