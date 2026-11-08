; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad2c0(void)
;
;
; XREF[1]:
;   FUN_005acff0 at 005ad0bc
;
; Referenced Globals:
;   void* PTR_SetFocus_005d0500 = 001d0bf6
;   TerminatedCString s_trigl_dll_005f983f
;   TerminatedCString s_wincore_wddvmem_cpp_005f9849
;   TerminatedCString s_videoRestore_Unable_to_s_005f9860
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined1 DAT_006257d0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c83370
;   undefined4 DAT_02c99300
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9930c
;   ... and 2 more
;
; Called Functions:
;   DirectDrawCreate
;   FUN_005030e0
;   FUN_005821c0
;   FUN_005ac300
;   FUN_005c04e0
;   SetFocus
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad2c0
        ;   Label: FUN_005ad2c0
    PUSH ESI                            ; 005ad2c1
    PUSH EBP                            ; 005ad2c2
    CMP dword ptr [0x02c83370],0x0      ; 005ad2c3 | DAT_02c83370
    JZ 0x005ad3e7                       ; 005ad2ca
        ;   XREF to: 005ad3e7 (CONDITIONAL_JUMP)  ; LAB_005ad3e7
    CMP dword ptr [0x02c99318],0x0      ; 005ad2d0 | DAT_02c99318
    JZ 0x005ad3e7                       ; 005ad2d7
        ;   XREF to: 005ad3e7 (CONDITIONAL_JUMP)  ; LAB_005ad3e7
    PUSH 0x5f983f                       ; 005ad2dd | = "trigl.dll"
    PUSH 0x6257d0                       ; 005ad2e2 | DAT_006257d0
    CALL FUN_005c04e0                   ; 005ad2e7
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005ad2ec
    TEST EAX,EAX                        ; 005ad2ef
    JZ 0x005ad3bb                       ; 005ad2f1
        ;   XREF to: 005ad3bb (CONDITIONAL_JUMP)  ; LAB_005ad3bb
    MOV EDX,dword ptr [0x0061b4a0]      ; 005ad2f7 | DAT_0061b4a0
    PUSH EDX                            ; 005ad2fd
    MOV ECX,dword ptr [0x0061b49c]      ; 005ad2fe | DAT_0061b49c
    PUSH ECX                            ; 005ad304
    MOV EBX,dword ptr [0x0061b498]      ; 005ad305 | DAT_0061b498
    PUSH EBX                            ; 005ad30b
    CALL FUN_005821c0                   ; 005ad30c
        ;   XREF to: 005821c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005821c0()
    ADD ESP,0xc                         ; 005ad311
    TEST EAX,EAX                        ; 005ad314
    JNZ 0x005ad3bb                      ; 005ad316
        ;   XREF to: 005ad3bb (CONDITIONAL_JUMP)  ; LAB_005ad3bb
    PUSH EDI                            ; 005ad31c
    MOV EDI,dword ptr [0x02c9930c]      ; 005ad31d | DAT_02c9930c
    MOV [0x02c83370],EAX                ; 005ad323 | DAT_02c83370
    TEST EDI,EDI                        ; 005ad328
    JZ 0x005ad33a                       ; 005ad32a
        ;   XREF to: 005ad33a (CONDITIONAL_JUMP)  ; LAB_005ad33a
    PUSH EDI                            ; 005ad32c
    MOV EDX,dword ptr [EDI]             ; 005ad32d
    XOR EBP,EBP                         ; 005ad32f
    CALL dword ptr [EDX + 0x8]          ; 005ad331
    MOV dword ptr [0x02c9930c],EBP      ; 005ad334 | DAT_02c9930c
    MOV EAX,[0x02c99308]                ; 005ad33a | DAT_02c99308
        ;   Label: LAB_005ad33a
    TEST EAX,EAX                        ; 005ad33f
    JZ 0x005ad351                       ; 005ad341
        ;   XREF to: 005ad351 (CONDITIONAL_JUMP)  ; LAB_005ad351
    PUSH EAX                            ; 005ad343
    MOV EDX,dword ptr [EAX]             ; 005ad344
    CALL dword ptr [EDX + 0x8]          ; 005ad346
    XOR EDX,EDX                         ; 005ad349
    MOV dword ptr [0x02c99308],EDX      ; 005ad34b | DAT_02c99308
    MOV ECX,dword ptr [0x02c99304]      ; 005ad351 | DAT_02c99304
        ;   Label: LAB_005ad351
    TEST ECX,ECX                        ; 005ad357
    JZ 0x005ad369                       ; 005ad359
        ;   XREF to: 005ad369 (CONDITIONAL_JUMP)  ; LAB_005ad369
    PUSH ECX                            ; 005ad35b
    MOV EDX,dword ptr [ECX]             ; 005ad35c
    XOR EBX,EBX                         ; 005ad35e
    CALL dword ptr [EDX + 0x8]          ; 005ad360
    MOV dword ptr [0x02c99304],EBX      ; 005ad363 | DAT_02c99304
    MOV ESI,dword ptr [0x02c99300]      ; 005ad369 | DAT_02c99300
        ;   Label: LAB_005ad369
    TEST ESI,ESI                        ; 005ad36f
    JZ 0x005ad38c                       ; 005ad371
        ;   XREF to: 005ad38c (CONDITIONAL_JUMP)  ; LAB_005ad38c
    PUSH ESI                            ; 005ad373
    MOV EDX,dword ptr [ESI]             ; 005ad374
    CALL dword ptr [EDX + 0x4c]         ; 005ad376
    MOV EAX,[0x02c99300]                ; 005ad379 | DAT_02c99300
    PUSH EAX                            ; 005ad37e
    MOV EDX,dword ptr [EAX]             ; 005ad37f
    XOR EDI,EDI                         ; 005ad381
    CALL dword ptr [EDX + 0x8]          ; 005ad383
    MOV dword ptr [0x02c99300],EDI      ; 005ad386 | DAT_02c99300
    PUSH 0x0                            ; 005ad38c
        ;   Label: LAB_005ad38c
    PUSH 0x2c99300                      ; 005ad38e | DAT_02c99300
    PUSH 0x0                            ; 005ad393
    CALL DirectDrawCreate               ; 005ad395
        ;   XREF to: 005cf7ba (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 005ad39a
    JZ 0x005ad3d1                       ; 005ad39c
        ;   XREF to: 005ad3d1 (CONDITIONAL_JUMP)  ; LAB_005ad3d1
    MOV EAX,[0x0061b4a0]                ; 005ad39e | DAT_0061b4a0
        ;   Label: LAB_005ad39e
    PUSH EAX                            ; 005ad3a3
    MOV EDX,dword ptr [0x0061b49c]      ; 005ad3a4 | DAT_0061b49c
    PUSH EDX                            ; 005ad3aa
    MOV ECX,dword ptr [0x0061b498]      ; 005ad3ab | DAT_0061b498
    PUSH ECX                            ; 005ad3b1
    CALL FUN_005ac300                   ; 005ad3b2
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac300()
    ADD ESP,0xc                         ; 005ad3b7
    POP EDI                             ; 005ad3ba
    MOV EBX,dword ptr [0x02c9be68]      ; 005ad3bb | DAT_02c9be68
        ;   Label: LAB_005ad3bb
    PUSH EBX                            ; 005ad3c1
    CALL dword ptr CS:[0x5d0500]        ; 005ad3c2 | PTR_SetFocus_005d0500
    POP EBP                             ; 005ad3c9
        ;   Label: LAB_005ad3c9
    POP ESI                             ; 005ad3ca
    POP EBX                             ; 005ad3cb
    LEA EAX,[EAX]                       ; 005ad3cc
    PUSH 0x11                           ; 005ad3d1
        ;   Label: LAB_005ad3d1
    MOV EBP,dword ptr [0x02c9be68]      ; 005ad3d3 | DAT_02c9be68
    MOV EAX,[0x02c99300]                ; 005ad3d9 | DAT_02c99300
    PUSH EBP                            ; 005ad3de
    MOV EDX,dword ptr [EAX]             ; 005ad3df
    PUSH EAX                            ; 005ad3e1
    CALL dword ptr [EDX + 0x50]         ; 005ad3e2
    JMP 0x005ad39e                      ; 005ad3e5
        ;   XREF to: 005ad39e (UNCONDITIONAL_JUMP)  ; LAB_005ad39e
    MOV EBX,dword ptr [0x02c99304]      ; 005ad3e7 | DAT_02c99304
        ;   Label: LAB_005ad3e7
    TEST EBX,EBX                        ; 005ad3ed
    JZ 0x005ad3c9                       ; 005ad3ef
        ;   XREF to: 005ad3c9 (CONDITIONAL_JUMP)  ; LAB_005ad3c9
    PUSH EBX                            ; 005ad3f1
    MOV EDX,dword ptr [EBX]             ; 005ad3f2
    CALL dword ptr [EDX + 0x6c]         ; 005ad3f4
    MOV EAX,[0x02c99308]                ; 005ad3f7 | DAT_02c99308
    PUSH EAX                            ; 005ad3fc
    MOV EDX,dword ptr [EAX]             ; 005ad3fd
    CALL dword ptr [EDX + 0x6c]         ; 005ad3ff
    MOV ESI,dword ptr [0x02c9930c]      ; 005ad402 | DAT_02c9930c
    TEST ESI,ESI                        ; 005ad408
    JZ 0x005ad3c9                       ; 005ad40a
        ;   XREF to: 005ad3c9 (CONDITIONAL_JUMP)  ; LAB_005ad3c9
    PUSH ESI                            ; 005ad40c
    MOV EAX,[0x02c99304]                ; 005ad40d | DAT_02c99304
    PUSH EAX                            ; 005ad412
    MOV EDX,dword ptr [EAX]             ; 005ad413
    CALL dword ptr [EDX + 0x7c]         ; 005ad415
    TEST EAX,EAX                        ; 005ad418
    JZ 0x005ad3c9                       ; 005ad41a
        ;   XREF to: 005ad3c9 (CONDITIONAL_JUMP)  ; LAB_005ad3c9
    MOV EBP,0x5f9849                    ; 005ad41c | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0x3fe                       ; 005ad421
    PUSH 0x5f9860                       ; 005ad426 | = "videoRestore - Unable to set front bu..."
    MOV dword ptr [0x01d1d400],EBP      ; 005ad42b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005ad431 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005ad436
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005ad43b
    POP EBP                             ; 005ad43e
    POP ESI                             ; 005ad43f
    POP EBX                             ; 005ad440
    RET                                 ; 005ad441

