; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b9d1
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 at 0051b3c7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b3e0
        ;   Label: shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
    PUSH ESI                            ; 0051b3e1
    PUSH EDI                            ; 0051b3e2
    PUSH EBP                            ; 0051b3e3
    SUB ESP,0x10                        ; 0051b3e4
    MOV EDX,dword ptr [ESP + 0x24]      ; 0051b3e7
    MOV EBX,dword ptr [EDX]             ; 0051b3eb
    XOR ECX,ECX                         ; 0051b3ed
    TEST EBX,EBX                        ; 0051b3ef
    JLE 0x0051b410                      ; 0051b3f1
        ;   XREF to: 0051b410 (CONDITIONAL_JUMP)  ; LAB_0051b410
    XOR EAX,EAX                         ; 0051b3f3
    MOV EBX,dword ptr [EDX + 0x4]       ; 0051b3f5
        ;   Label: LAB_0051b3f5
    MOV dword ptr [EBX + EAX*0x1 + 0x3f4],0x0 ; 0051b3f8
    INC ECX                             ; 0051b403
    MOV ESI,dword ptr [EDX]             ; 0051b404
    ADD EAX,0x4c4                       ; 0051b406
    CMP ECX,ESI                         ; 0051b40b
    JL 0x0051b3f5                       ; 0051b40d
        ;   XREF to: 0051b3f5 (CONDITIONAL_JUMP)  ; LAB_0051b3f5
    NOP                                 ; 0051b40f
    XOR EDI,EDI                         ; 0051b410
        ;   Label: LAB_0051b410
    MOV EBP,dword ptr [EDX + 0x8]       ; 0051b412
    MOV dword ptr [ESP + 0x8],EDI       ; 0051b415
    TEST EBP,EBP                        ; 0051b419
    JLE 0x0051b464                      ; 0051b41b
        ;   XREF to: 0051b464 (CONDITIONAL_JUMP)  ; LAB_0051b464
    MOV EAX,dword ptr [EDX + 0xc]       ; 0051b41d
        ;   Label: LAB_0051b41d
    CMP dword ptr [EDI + EAX*0x1 + 0x40],0x0 ; 0051b420
    JNZ 0x0051b44e                      ; 0051b425
        ;   XREF to: 0051b44e (CONDITIONAL_JUMP)  ; LAB_0051b44e
    MOV ESI,EDI                         ; 0051b427
    XOR EAX,EAX                         ; 0051b429
    MOV ECX,dword ptr [EDX + 0xc]       ; 0051b42b
        ;   Label: LAB_0051b42b
    ADD ECX,ESI                         ; 0051b42e
    IMUL ECX,dword ptr [ECX + EAX*0x1 + 0x10],0x4c4 ; 0051b430
    MOV EBX,dword ptr [EDX + 0x4]       ; 0051b438
    ADD EAX,0x4                         ; 0051b43b
    MOV dword ptr [ECX + EBX*0x1 + 0x3f4],0x1 ; 0051b43e
    CMP EAX,0xc                         ; 0051b449
    JNZ 0x0051b42b                      ; 0051b44c
        ;   XREF to: 0051b42b (CONDITIONAL_JUMP)  ; LAB_0051b42b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051b44e
        ;   Label: LAB_0051b44e
    ADD EDI,0x8c                        ; 0051b452
    INC EAX                             ; 0051b458
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051b459
    MOV dword ptr [ESP + 0x8],EAX       ; 0051b45c
    CMP EAX,ECX                         ; 0051b460
    JL 0x0051b41d                       ; 0051b462
        ;   XREF to: 0051b41d (CONDITIONAL_JUMP)  ; LAB_0051b41d
    MOV EBX,dword ptr [EDX]             ; 0051b464
        ;   Label: LAB_0051b464
    XOR EDI,EDI                         ; 0051b466
    XOR ESI,ESI                         ; 0051b468
    TEST EBX,EBX                        ; 0051b46a
    JLE 0x0051b496                      ; 0051b46c
        ;   XREF to: 0051b496 (CONDITIONAL_JUMP)  ; LAB_0051b496
    XOR ECX,ECX                         ; 0051b46e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051b470
        ;   Label: LAB_0051b470
    ADD EAX,ECX                         ; 0051b473
    CMP dword ptr [EAX + 0x3f4],0x0     ; 0051b475
    JZ 0x0051b53e                       ; 0051b47c
        ;   XREF to: 0051b53e (CONDITIONAL_JUMP)  ; LAB_0051b53e
    MOV dword ptr [EAX + 0x3f4],ESI     ; 0051b482
    INC ESI                             ; 0051b488
    INC EDI                             ; 0051b489
        ;   Label: LAB_0051b489
    MOV EBP,dword ptr [EDX]             ; 0051b48a
    ADD ECX,0x4c4                       ; 0051b48c
    CMP EDI,EBP                         ; 0051b492
    JL 0x0051b470                       ; 0051b494
        ;   XREF to: 0051b470 (CONDITIONAL_JUMP)  ; LAB_0051b470
    XOR EAX,EAX                         ; 0051b496
        ;   Label: LAB_0051b496
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051b498
    MOV dword ptr [ESP + 0xc],EAX       ; 0051b49b
    TEST ECX,ECX                        ; 0051b49f
    JLE 0x0051b4ec                      ; 0051b4a1
        ;   XREF to: 0051b4ec (CONDITIONAL_JUMP)  ; LAB_0051b4ec
    XOR EBP,EBP                         ; 0051b4a3
    MOV EAX,dword ptr [EDX + 0xc]       ; 0051b4a5
        ;   Label: LAB_0051b4a5
    CMP dword ptr [EAX + EBP*0x1 + 0x40],0x0 ; 0051b4a8
    JNZ 0x0051b4d6                      ; 0051b4ad
        ;   XREF to: 0051b4d6 (CONDITIONAL_JUMP)  ; LAB_0051b4d6
    MOV EDI,EBP                         ; 0051b4af
    XOR ECX,ECX                         ; 0051b4b1
    MOV EAX,dword ptr [EDX + 0xc]       ; 0051b4b3
        ;   Label: LAB_0051b4b3
    ADD EAX,EDI                         ; 0051b4b6
    IMUL ESI,dword ptr [ECX + EAX*0x1 + 0x10],0x4c4 ; 0051b4b8
    MOV EBX,dword ptr [EDX + 0x4]       ; 0051b4c0
    ADD ECX,0x4                         ; 0051b4c3
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x3f4] ; 0051b4c6
    MOV dword ptr [ECX + EAX*0x1 + 0xc],EBX ; 0051b4cd
    CMP ECX,0xc                         ; 0051b4d1
    JNZ 0x0051b4b3                      ; 0051b4d4
        ;   XREF to: 0051b4b3 (CONDITIONAL_JUMP)  ; LAB_0051b4b3
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b4d6
        ;   Label: LAB_0051b4d6
    ADD EBP,0x8c                        ; 0051b4da
    INC EAX                             ; 0051b4e0
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051b4e1
    MOV dword ptr [ESP + 0xc],EAX       ; 0051b4e4
    CMP EAX,ECX                         ; 0051b4e8
    JL 0x0051b4a5                       ; 0051b4ea
        ;   XREF to: 0051b4a5 (CONDITIONAL_JUMP)  ; LAB_0051b4a5
    MOV ESI,dword ptr [EDX]             ; 0051b4ec
        ;   Label: LAB_0051b4ec
    XOR EBP,EBP                         ; 0051b4ee
    XOR EBX,EBX                         ; 0051b4f0
    TEST ESI,ESI                        ; 0051b4f2
    JLE 0x0051b534                      ; 0051b4f4
        ;   XREF to: 0051b534 (CONDITIONAL_JUMP)  ; LAB_0051b534
    MOV dword ptr [ESP],EBX             ; 0051b4f6
    MOV dword ptr [ESP + 0x4],EBX       ; 0051b4f9
    MOV ESI,dword ptr [ESP + 0x4]       ; 0051b4fd
        ;   Label: LAB_0051b4fd
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051b501
    ADD ESI,EAX                         ; 0051b504
    CMP dword ptr [ESI + 0x3f4],0x0     ; 0051b506
    JL 0x0051b520                       ; 0051b50d
        ;   XREF to: 0051b520 (CONDITIONAL_JUMP)  ; LAB_0051b520
    CMP EBX,EBP                         ; 0051b50f
    JL 0x0051b54d                       ; 0051b511
        ;   XREF to: 0051b54d (CONDITIONAL_JUMP)  ; LAB_0051b54d
    MOV ESI,dword ptr [ESP]             ; 0051b513
        ;   Label: LAB_0051b513
    ADD ESI,0x4c4                       ; 0051b516
    INC EBX                             ; 0051b51c
    MOV dword ptr [ESP],ESI             ; 0051b51d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051b520
        ;   Label: LAB_0051b520
    INC EBP                             ; 0051b524
    ADD EAX,0x4c4                       ; 0051b525
    MOV ECX,dword ptr [EDX]             ; 0051b52a
    MOV dword ptr [ESP + 0x4],EAX       ; 0051b52c
    CMP EBP,ECX                         ; 0051b530
    JL 0x0051b4fd                       ; 0051b532
        ;   XREF to: 0051b4fd (CONDITIONAL_JUMP)  ; LAB_0051b4fd
    MOV dword ptr [EDX],EBX             ; 0051b534
        ;   Label: LAB_0051b534
    ADD ESP,0x10                        ; 0051b536
    POP EBP                             ; 0051b539
    POP EDI                             ; 0051b53a
    POP ESI                             ; 0051b53b
    POP EBX                             ; 0051b53c
    RET                                 ; 0051b53d
    MOV dword ptr [EAX + 0x3f4],0xffffffff ; 0051b53e
        ;   Label: LAB_0051b53e
    JMP 0x0051b489                      ; 0051b548
        ;   XREF to: 0051b489 (UNCONDITIONAL_JUMP)  ; LAB_0051b489
    MOV EDI,dword ptr [ESP]             ; 0051b54d
        ;   Label: LAB_0051b54d
    MOV ECX,0x4c4                       ; 0051b550
    ADD EDI,EAX                         ; 0051b555
    PUSH EDI                            ; 0051b557
    MOV EAX,ECX                         ; 0051b558
    SHR ECX,0x2                         ; 0051b55a
    MOVSD.REP ES:EDI,ESI                ; 0051b55d
    MOV CL,AL                           ; 0051b55f
    AND CL,0x3                          ; 0051b561
    MOVSB.REP ES:EDI,ESI                ; 0051b564
    POP EDI                             ; 0051b566
    JMP 0x0051b513                      ; 0051b567
        ;   XREF to: 0051b513 (UNCONDITIONAL_JUMP)  ; LAB_0051b513

