; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(int color_value)
;
; Parameters:
; int              Stack[0x4]:4   color_value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481151
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543c48
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005dafed
;   TerminatedCString s_Invalid_bitsPerPixel_in_005db005
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc11e4
;   undefined4 DAT_01bc11e8
;   undefined4 DAT_01bc11f0
;   undefined4 DAT_01bc11f4
;   undefined4 DAT_01bc11f8
;   undefined4 DAT_01bc11fc
;   undefined4 DAT_01bc1200
;   undefined4 DAT_01bc1204
;   undefined4 DAT_01bc1208
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e3b0
        ;   Label: cockpit_drawsurf.cpp_setColor_FUN_0047e3b0
    PUSH ESI                            ; 0047e3b1
    PUSH EDI                            ; 0047e3b2
    PUSH EBP                            ; 0047e3b3
    SUB ESP,0x4                         ; 0047e3b4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047e3b7
    TEST EAX,EAX                        ; 0047e3bb
    JL 0x0047e3f6                       ; 0047e3bd
        ;   XREF to: 0047e3f6 (CONDITIONAL_JUMP)  ; LAB_0047e3f6
    XOR EDX,EDX                         ; 0047e3bf
    MOV dword ptr [0x01bc11f0],EDX      ; 0047e3c1 | DAT_01bc11f0
    AND EAX,0xff                        ; 0047e3c7
        ;   Label: LAB_0047e3c7
    MOV EDX,dword ptr [0x0061b4a0]      ; 0047e3cc | DAT_0061b4a0
    MOV [0x01bc11e8],EAX                ; 0047e3d2 | DAT_01bc11e8
    CMP EDX,0x10                        ; 0047e3d7
    JNC 0x0047e578                      ; 0047e3da
        ;   XREF to: 0047e578 (CONDITIONAL_JUMP)  ; LAB_0047e578
    CMP EDX,0x8                         ; 0047e3e0
    JNZ 0x0047e58f                      ; 0047e3e3
        ;   XREF to: 0047e58f (CONDITIONAL_JUMP)  ; LAB_0047e58f
    MOV [0x01bc11e4],EAX                ; 0047e3e9 | DAT_01bc11e4
    ADD ESP,0x4                         ; 0047e3ee
    POP EBP                             ; 0047e3f1
    POP EDI                             ; 0047e3f2
    POP ESI                             ; 0047e3f3
    POP EBX                             ; 0047e3f4
    RET                                 ; 0047e3f5
    MOV ESI,dword ptr [0x01c4e9d8]      ; 0047e3f6 | DAT_01c4e9d8
        ;   Label: LAB_0047e3f6
    MOV [0x01bc11f4],EAX                ; 0047e3fc | DAT_01bc11f4
    MOV EBX,EAX                         ; 0047e401
    XOR EDX,EDX                         ; 0047e403
    MOV EAX,0xff                        ; 0047e405
    DIV ESI                             ; 0047e40a
    MOV ECX,0x1                         ; 0047e40c
    NEG EBX                             ; 0047e411
    MOV dword ptr [0x01bc11f0],ECX      ; 0047e413 | DAT_01bc11f0
    MOV ECX,EBX                         ; 0047e419
    MOV EDI,dword ptr [0x01c4e9e4]      ; 0047e41b | DAT_01c4e9e4
    SHR EAX,CL                          ; 0047e421
    XOR EDX,EDX                         ; 0047e423
    MOV [0x01bc11f8],EAX                ; 0047e425 | DAT_01bc11f8
    MOV EAX,0xff                        ; 0047e42a
    DIV EDI                             ; 0047e42f
    MOV EBP,dword ptr [0x01c4e9f0]      ; 0047e431 | DAT_01c4e9f0
    SHR EAX,CL                          ; 0047e437
    XOR EDX,EDX                         ; 0047e439
    MOV [0x01bc11fc],EAX                ; 0047e43b | DAT_01bc11fc
    MOV EAX,0xff                        ; 0047e440
    DIV EBP                             ; 0047e445
    MOV EDX,dword ptr [0x01bc11f8]      ; 0047e447 | DAT_01bc11f8
    SHR EAX,CL                          ; 0047e44d
    MOV CL,byte ptr [0x01c4e9d4]        ; 0047e44f | DAT_01c4e9d4
    MOV [0x01bc1200],EAX                ; 0047e455 | DAT_01bc1200
    MOV EAX,[0x01bc11fc]                ; 0047e45a | DAT_01bc11fc
    SHL EDX,CL                          ; 0047e45f
    MOV CL,byte ptr [0x01c4e9e0]        ; 0047e461 | DAT_01c4e9e0
    SHL EAX,CL                          ; 0047e467
    MOV CL,byte ptr [0x01c4e9ec]        ; 0047e469 | DAT_01c4e9ec
    OR EDX,EAX                          ; 0047e46f
    MOV EAX,[0x01bc1200]                ; 0047e471 | DAT_01bc1200
    SHL EAX,CL                          ; 0047e476
    OR EDX,EAX                          ; 0047e478
    MOV dword ptr [0x01bc1204],EDX      ; 0047e47a | DAT_01bc1204
    MOV EAX,[0x01bc1204]                ; 0047e480 | DAT_01bc1204
    SHL EDX,0x10                        ; 0047e485
    OR EAX,EDX                          ; 0047e488
    MOV dword ptr [0x01bc11f4],EBX      ; 0047e48a | DAT_01bc11f4
    MOV [0x01bc1208],EAX                ; 0047e490 | DAT_01bc1208
    XOR EAX,EAX                         ; 0047e495
    JMP 0x0047e3c7                      ; 0047e497
        ;   XREF to: 0047e3c7 (UNCONDITIONAL_JUMP)  ; LAB_0047e3c7
    XOR EBX,EBX                         ; 0047e49c
        ;   Label: LAB_0047e49c
    XOR EAX,EAX                         ; 0047e49e
    MOV BL,byte ptr [ECX + 0x1c4e9f9]   ; 0047e4a0 | DAT_01c4e9f9
    MOV AL,byte ptr [ECX + 0x1c4e9f8]   ; 0047e4a6 | DAT_01c4e9f8
    MOV CL,byte ptr [ECX + 0x1c4e9fa]   ; 0047e4ac | DAT_01c4e9fa
    MOV ESI,dword ptr [0x01c4e9d8]      ; 0047e4b2 | DAT_01c4e9d8
    XOR EDX,EDX                         ; 0047e4b8
    DIV ESI                             ; 0047e4ba
    MOV EDI,dword ptr [0x01c4e9e4]      ; 0047e4bc | DAT_01c4e9e4
    MOV ESI,EAX                         ; 0047e4c2
    XOR EDX,EDX                         ; 0047e4c4
    MOV EAX,EBX                         ; 0047e4c6
    DIV EDI                             ; 0047e4c8
    MOV EBP,dword ptr [0x01c4e9f0]      ; 0047e4ca | DAT_01c4e9f0
    AND ECX,0xff                        ; 0047e4d0
    MOV EDI,EAX                         ; 0047e4d6
    XOR EDX,EDX                         ; 0047e4d8
    MOV EAX,ECX                         ; 0047e4da
    DIV EBP                             ; 0047e4dc
    MOV dword ptr [ESP],ECX             ; 0047e4de
    MOV CL,byte ptr [0x01c4e9d4]        ; 0047e4e1 | DAT_01c4e9d4
    MOV dword ptr [ESP],EAX             ; 0047e4e7
    MOV EAX,ESI                         ; 0047e4ea
    SHL EAX,CL                          ; 0047e4ec
    MOV CL,byte ptr [0x01c4e9e0]        ; 0047e4ee | DAT_01c4e9e0
    MOV EDX,dword ptr [ESP]             ; 0047e4f4
    SHL EDI,CL                          ; 0047e4f7
    MOV CL,byte ptr [0x01c4e9ec]        ; 0047e4f9 | DAT_01c4e9ec
    OR EAX,EDI                          ; 0047e4ff
    SHL EDX,CL                          ; 0047e501
    OR EAX,EDX                          ; 0047e503
    AND EAX,0xffff                      ; 0047e505
    MOV [0x01bc11e4],EAX                ; 0047e50a | DAT_01bc11e4
    ADD ESP,0x4                         ; 0047e50f
    POP EBP                             ; 0047e512
    POP EDI                             ; 0047e513
    POP ESI                             ; 0047e514
    POP EBX                             ; 0047e515
    RET                                 ; 0047e516
    MOVZX ESI,byte ptr [ECX + 0x1c4e9f8] ; 0047e517 | DAT_01c4e9f8
        ;   Label: LAB_0047e517
    XOR EAX,EAX                         ; 0047e51e
    XOR EBX,EBX                         ; 0047e520
    MOV AL,byte ptr [ECX + 0x1c4e9f9]   ; 0047e522 | DAT_01c4e9f9
    MOV BL,byte ptr [ECX + 0x1c4e9fa]   ; 0047e528 | DAT_01c4e9fa
    CMP EDX,EDX                         ; 0047e52e
    JNZ 0x0047e55e                      ; 0047e530
        ;   XREF to: 0047e55e (CONDITIONAL_JUMP)  ; LAB_0047e55e
    MOV CL,byte ptr [0x01c4e9d4]        ; 0047e532 | DAT_01c4e9d4
    SHL ESI,CL                          ; 0047e538
    MOV CL,byte ptr [0x01c4e9e0]        ; 0047e53a | DAT_01c4e9e0
    SHL EAX,CL                          ; 0047e540
    MOV CL,byte ptr [0x01c4e9ec]        ; 0047e542 | DAT_01c4e9ec
    SHL EBX,CL                          ; 0047e548
    OR EAX,ESI                          ; 0047e54a
    MOV ECX,EBX                         ; 0047e54c
    OR ECX,EAX                          ; 0047e54e
    MOV dword ptr [0x01bc11e4],ECX      ; 0047e550 | DAT_01bc11e4
    ADD ESP,0x4                         ; 0047e556
    POP EBP                             ; 0047e559
    POP EDI                             ; 0047e55a
    POP ESI                             ; 0047e55b
    POP EBX                             ; 0047e55c
    RET                                 ; 0047e55d
    MOV ECX,EAX                         ; 0047e55e
        ;   Label: LAB_0047e55e
    SHL ESI,0x10                        ; 0047e560
    SHL ECX,0x8                         ; 0047e563
    OR ECX,ESI                          ; 0047e566
    OR ECX,EBX                          ; 0047e568
    MOV dword ptr [0x01bc11e4],ECX      ; 0047e56a | DAT_01bc11e4
    ADD ESP,0x4                         ; 0047e570
    POP EBP                             ; 0047e573
    POP EDI                             ; 0047e574
    POP ESI                             ; 0047e575
    POP EBX                             ; 0047e576
    RET                                 ; 0047e577
    LEA ECX,[EAX*0x4 + 0x0]             ; 0047e578
        ;   Label: LAB_0047e578
    SUB ECX,EAX                         ; 0047e57f
    CMP EDX,0x10                        ; 0047e581
    JBE 0x0047e49c                      ; 0047e584
        ;   XREF to: 0047e49c (CONDITIONAL_JUMP)  ; LAB_0047e49c
    CMP EDX,0x20                        ; 0047e58a
    JZ 0x0047e517                       ; 0047e58d
        ;   XREF to: 0047e517 (CONDITIONAL_JUMP)  ; LAB_0047e517
    MOV EAX,0x5dafed                    ; 0047e58f | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0047e58f
    MOV EDX,0xf8                        ; 0047e594
    PUSH 0x5db005                       ; 0047e599 | = "Invalid bitsPerPixel in CDrawSurface:..."
    MOV [0x01d1d400],EAX                ; 0047e59e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0047e5a3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0047e5a9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0047e5ae
    ADD ESP,0x4                         ; 0047e5b1
    POP EBP                             ; 0047e5b4
    POP EDI                             ; 0047e5b5
    POP ESI                             ; 0047e5b6
    POP EBX                             ; 0047e5b7
    RET                                 ; 0047e5b8

