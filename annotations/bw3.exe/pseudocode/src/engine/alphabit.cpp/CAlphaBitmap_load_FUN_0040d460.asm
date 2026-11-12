; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap *this_ptr,char *filename,int width,int height)
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
; XREF[24]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_addButton_FUN_00412320 at 00412351
;   core_bmppuzzl.cpp_CAudioRecPuzzle_load_FUN_00411d70 at 00411dca
;   core_bmppuzzl.cpp_CChemPuzzle_addButton_FUN_00413cd0 at 00413d00
;   core_bmppuzzl.cpp_CChemPuzzle_load_FUN_004133c0 at 004134ea
;   core_flashlit.cpp_FUN_004a7cf0 at 004a7d52
;   core_flashlit.cpp_FUN_004a7d70 at 004a7e7e
;   core_fldnotes.cpp_FUN_004abe00 at 004ac3b3
;   core_fldnotes.cpp_SNotesMap_load_FUN_004a9f30 at 004a9f4b
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a8680 at 004a86e2
;   core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004a87a0 at 004a881a
;   ... and 14 more
;
; Referenced Globals:
;   TerminatedCString s_s_raw_005b5feb
;   undefined4 DAT_005b5ff2
;   undefined4 DAT_005b5ff5
;   TerminatedCString s_engine_alphabit_cpp_005b5ff9
;   TerminatedCString s_CAlphaBitmap_load_Can_t_005b6010
;   TerminatedCString s_s_act_005b6033
;   undefined4 DAT_005b603a
;   undefined4 DAT_005b603d
;   TerminatedCString s_engine_alphabit_cpp_005b6041
;   TerminatedCString s_CAlphaBitmap_load_Can_t_005b6058
;   TerminatedCString s_s_opa_005b607b
;   undefined4 DAT_005b6082
;   undefined4 DAT_005b6085
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgetc_FUN_005a32b0
;   crt_stdio.c_fread_FUN_005a3890
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_alphabit.cpp_FUN_0040d320
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d460
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
    PUSH ESI                            ; 0040d461
    PUSH EDI                            ; 0040d462
    PUSH EBP                            ; 0040d463
    SUB ESP,0x104                       ; 0040d464
    MOV EBX,dword ptr [ESP + 0x118]     ; 0040d46a
    MOV EDX,dword ptr [ESP + 0x124]     ; 0040d471
    PUSH EDX                            ; 0040d478
    MOV ECX,dword ptr [ESP + 0x124]     ; 0040d479
    PUSH ECX                            ; 0040d480
    PUSH EBX                            ; 0040d481
    CALL engine_alphabit.cpp_FUN_0040d320 ; 0040d482
        ;   XREF to: 0040d320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d320()
    ADD ESP,0xc                         ; 0040d487
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0040d48a
    PUSH ESI                            ; 0040d491
    PUSH 0x5b5feb                       ; 0040d492 | = "%s.raw"
    LEA EAX,[ESP + 0x8]                 ; 0040d497
    PUSH EAX                            ; 0040d49b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0040d49c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d4a1
    PUSH 0x5b5ff2                       ; 0040d4a4 | DAT_005b5ff2
    LEA EAX,[ESP + 0x4]                 ; 0040d4a9
    PUSH EAX                            ; 0040d4ad
    PUSH 0x5b5ff5                       ; 0040d4ae | DAT_005b5ff5
    CALL engine_dosio.cpp_FUN_004659c0  ; 0040d4b3
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040d4b8
    MOV dword ptr [ESP + 0x100],EAX     ; 0040d4bb
    TEST EAX,EAX                        ; 0040d4c2
    JZ 0x0040d63f                       ; 0040d4c4
        ;   XREF to: 0040d63f (CONDITIONAL_JUMP)  ; LAB_0040d63f
    MOV EAX,dword ptr [ESP + 0x100]     ; 0040d4ca
        ;   Label: LAB_0040d4ca
    PUSH EAX                            ; 0040d4d1
    MOV EDX,dword ptr [ESP + 0x128]     ; 0040d4d2
    PUSH EDX                            ; 0040d4d9
    MOV ECX,dword ptr [ESP + 0x128]     ; 0040d4da
    PUSH ECX                            ; 0040d4e1
    MOV ESI,dword ptr [EBX]             ; 0040d4e2
    PUSH ESI                            ; 0040d4e4
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0040d4e5
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0040d4ea
    MOV EDI,dword ptr [ESP + 0x100]     ; 0040d4ed
    PUSH EDI                            ; 0040d4f4
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0040d4f5
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0040d4fa
    MOV EBP,dword ptr [ESP + 0x11c]     ; 0040d4fd
    PUSH EBP                            ; 0040d504
    PUSH 0x5b6033                       ; 0040d505 | = "%s.act"
    LEA EAX,[ESP + 0x8]                 ; 0040d50a
    PUSH EAX                            ; 0040d50e
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0040d50f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d514
    PUSH 0x5b603a                       ; 0040d517 | DAT_005b603a
    LEA EAX,[ESP + 0x4]                 ; 0040d51c
    PUSH EAX                            ; 0040d520
    PUSH 0x5b603d                       ; 0040d521 | DAT_005b603d
    CALL engine_dosio.cpp_FUN_004659c0  ; 0040d526
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040d52b
    MOV dword ptr [ESP + 0x100],EAX     ; 0040d52e
    TEST EAX,EAX                        ; 0040d535
    JZ 0x0040d66a                       ; 0040d537
        ;   XREF to: 0040d66a (CONDITIONAL_JUMP)  ; LAB_0040d66a
    XOR ESI,ESI                         ; 0040d53d
        ;   Label: LAB_0040d53d
    MOV ECX,dword ptr [ESP + 0x100]     ; 0040d53f
        ;   Label: LAB_0040d53f
    PUSH ECX                            ; 0040d546
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040d547
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040d54c
    MOV EBP,dword ptr [ESP + 0x100]     ; 0040d54f
    PUSH EBP                            ; 0040d556
    MOV EDI,EAX                         ; 0040d557
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040d559
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 0040d55e
    MOV EBP,EAX                         ; 0040d561
    MOV EAX,dword ptr [ESP + 0x100]     ; 0040d563
    PUSH EAX                            ; 0040d56a
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 0040d56b
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    MOV EDX,dword ptr [0x005fba20]      ; 0040d570 | DAT_005fba20
    ADD ESP,0x4                         ; 0040d576
    CMP EDX,0x20                        ; 0040d579
    JNZ 0x0040d694                      ; 0040d57c
        ;   XREF to: 0040d694 (CONDITIONAL_JUMP)  ; LAB_0040d694
    MOV CL,byte ptr [0x01c6af74]        ; 0040d582 | DAT_01c6af74
    SHL EDI,CL                          ; 0040d588
    MOV CL,byte ptr [0x01c6af80]        ; 0040d58a | DAT_01c6af80
    SHL EBP,CL                          ; 0040d590
    MOV CL,byte ptr [0x01c6af8c]        ; 0040d592 | DAT_01c6af8c
    OR EDI,EBP                          ; 0040d598
    SHL EAX,CL                          ; 0040d59a
    MOV ECX,EDI                         ; 0040d59c
    OR ECX,EAX                          ; 0040d59e
        ;   Label: LAB_0040d59e
    ADD ESI,0x4                         ; 0040d5a0
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040d5a3
    MOV dword ptr [ESI + EAX*0x1 + -0x4],ECX ; 0040d5a6
    CMP ESI,0x400                       ; 0040d5aa
    JNZ 0x0040d53f                      ; 0040d5b0
        ;   XREF to: 0040d53f (CONDITIONAL_JUMP)  ; LAB_0040d53f
    MOV ECX,dword ptr [ESP + 0x100]     ; 0040d5b2
    PUSH ECX                            ; 0040d5b9
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0040d5ba
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0040d5bf
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0040d5c2
    PUSH ESI                            ; 0040d5c9
    PUSH 0x5b607b                       ; 0040d5ca | = "%s.opa"
    LEA EAX,[ESP + 0x8]                 ; 0040d5cf
    PUSH EAX                            ; 0040d5d3
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0040d5d4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040d5d9
    PUSH 0x5b6082                       ; 0040d5dc | DAT_005b6082
    LEA EAX,[ESP + 0x4]                 ; 0040d5e1
    PUSH EAX                            ; 0040d5e5
    PUSH 0x5b6085                       ; 0040d5e6 | DAT_005b6085
    CALL engine_dosio.cpp_FUN_004659c0  ; 0040d5eb
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    MOV EDI,EAX                         ; 0040d5f0
    ADD ESP,0xc                         ; 0040d5f2
    TEST EAX,EAX                        ; 0040d5f5
    JNZ 0x0040d6a3                      ; 0040d5f7
        ;   XREF to: 0040d6a3 (CONDITIONAL_JUMP)  ; LAB_0040d6a3
    MOV EDI,dword ptr [ESP + 0x120]     ; 0040d5fd
    IMUL EDI,dword ptr [ESP + 0x124]    ; 0040d604
    TEST EDI,EDI                        ; 0040d60c
    JLE 0x0040d634                      ; 0040d60e
        ;   XREF to: 0040d634 (CONDITIONAL_JUMP)  ; LAB_0040d634
    MOV ECX,dword ptr [EBX]             ; 0040d610
        ;   Label: LAB_0040d610
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0040d612
    AND ECX,0xff                        ; 0040d615
    MOV ESI,dword ptr [EBX + 0x8]       ; 0040d61b
    CMP dword ptr [ESI + ECX*0x4],0x0   ; 0040d61e
    JNZ 0x0040d6d4                      ; 0040d622
        ;   XREF to: 0040d6d4 (CONDITIONAL_JUMP)  ; LAB_0040d6d4
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040d628
    MOV byte ptr [ECX + EAX*0x1],0x0    ; 0040d62b
    INC EAX                             ; 0040d62f
    CMP EAX,EDI                         ; 0040d630
    JL 0x0040d610                       ; 0040d632
        ;   XREF to: 0040d610 (CONDITIONAL_JUMP)  ; LAB_0040d610
    ADD ESP,0x104                       ; 0040d634
        ;   Label: LAB_0040d634
    POP EBP                             ; 0040d63a
    POP EDI                             ; 0040d63b
    POP ESI                             ; 0040d63c
    POP EBX                             ; 0040d63d
    RET                                 ; 0040d63e
    MOV EAX,ESP                         ; 0040d63f
        ;   Label: LAB_0040d63f
    PUSH EAX                            ; 0040d641
    MOV EDI,0x5b5ff9                    ; 0040d642 | = "..\\engine\\alphabit.cpp"
    MOV EBP,0xe1                        ; 0040d647
    PUSH 0x5b6010                       ; 0040d64c | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01d71de0],EDI      ; 0040d651 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0040d657 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040d65d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0040d662
    JMP 0x0040d4ca                      ; 0040d665
        ;   XREF to: 0040d4ca (UNCONDITIONAL_JUMP)  ; LAB_0040d4ca
    MOV dword ptr [0x01d71de0],0x5b6041 ; 0040d66a | DAT_01d71de0 | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040d66a
    MOV EAX,ESP                         ; 0040d674
    PUSH EAX                            ; 0040d676
    MOV EDX,0xe7                        ; 0040d677
    PUSH 0x5b6058                       ; 0040d67c | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01d71de4],EDX      ; 0040d681 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040d687
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0040d68c
    JMP 0x0040d53d                      ; 0040d68f
        ;   XREF to: 0040d53d (UNCONDITIONAL_JUMP)  ; LAB_0040d53d
    MOV ECX,EDI                         ; 0040d694
        ;   Label: LAB_0040d694
    SHL EBP,0x8                         ; 0040d696
    SHL ECX,0x10                        ; 0040d699
    OR ECX,EBP                          ; 0040d69c
    JMP 0x0040d59e                      ; 0040d69e
        ;   XREF to: 0040d59e (UNCONDITIONAL_JUMP)  ; LAB_0040d59e
    PUSH EAX                            ; 0040d6a3
        ;   Label: LAB_0040d6a3
    MOV EAX,dword ptr [ESP + 0x128]     ; 0040d6a4
    PUSH EAX                            ; 0040d6ab
    MOV EDX,dword ptr [ESP + 0x128]     ; 0040d6ac
    PUSH EDX                            ; 0040d6b3
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040d6b4
    PUSH ECX                            ; 0040d6b7
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0040d6b8
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0040d6bd
    PUSH EDI                            ; 0040d6c0
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 0040d6c1
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0040d6c6
    ADD ESP,0x104                       ; 0040d6c9
    POP EBP                             ; 0040d6cf
    POP EDI                             ; 0040d6d0
    POP ESI                             ; 0040d6d1
    POP EBX                             ; 0040d6d2
    RET                                 ; 0040d6d3
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040d6d4
        ;   Label: LAB_0040d6d4
    MOV byte ptr [ECX + EAX*0x1],0xff   ; 0040d6d7
    INC EAX                             ; 0040d6db
    CMP EAX,EDI                         ; 0040d6dc
    JL 0x0040d610                       ; 0040d6de
        ;   XREF to: 0040d610 (CONDITIONAL_JUMP)  ; LAB_0040d610
    ADD ESP,0x104                       ; 0040d6e4
    POP EBP                             ; 0040d6ea
    POP EDI                             ; 0040d6eb
    POP ESI                             ; 0040d6ec
    POP EBX                             ; 0040d6ed
    RET                                 ; 0040d6ee

