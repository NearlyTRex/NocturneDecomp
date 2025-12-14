; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051ba4b
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 at 0051b3be
;
; Called Functions:
;   crt_memory.c_copyArrayWithFunction_FUN_006020c2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b570
        ;   Label: shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
    PUSH ESI                            ; 0051b571
    PUSH EDI                            ; 0051b572
    PUSH EBP                            ; 0051b573
    SUB ESP,0x14                        ; 0051b574
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051b577
    XOR EDX,EDX                         ; 0051b57b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051b57d
    MOV dword ptr [ESP + 0x8],EDX       ; 0051b580
    TEST ECX,ECX                        ; 0051b584
    JLE 0x0051b5bd                      ; 0051b586
        ;   XREF to: 0051b5bd (CONDITIONAL_JUMP)  ; LAB_0051b5bd
    XOR EBX,EBX                         ; 0051b588
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051b58a
        ;   Label: LAB_0051b58a
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051b58e
    ADD EAX,EBX                         ; 0051b591
    CMP dword ptr [EAX + 0x40],0x0      ; 0051b593
    JNZ 0x0051b64f                      ; 0051b597
        ;   XREF to: 0051b64f (CONDITIONAL_JUMP)  ; LAB_0051b64f
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051b59d
    MOV dword ptr [EAX + 0x40],ECX      ; 0051b5a1
    LEA ESI,[ECX + 0x1]                 ; 0051b5a4
    MOV dword ptr [ESP + 0x8],ESI       ; 0051b5a7
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051b5ab
        ;   Label: LAB_0051b5ab
    INC EDX                             ; 0051b5af
    MOV ESI,dword ptr [EAX + 0x8]       ; 0051b5b0
    ADD EBX,0x8c                        ; 0051b5b3
    CMP EDX,ESI                         ; 0051b5b9
    JL 0x0051b58a                       ; 0051b5bb
        ;   XREF to: 0051b58a (CONDITIONAL_JUMP)  ; LAB_0051b58a
    XOR EDI,EDI                         ; 0051b5bd
        ;   Label: LAB_0051b5bd
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051b5bf
    MOV dword ptr [ESP + 0x10],EDI      ; 0051b5c3
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051b5c7
    MOV dword ptr [ESP + 0x4],EDI       ; 0051b5ca
    TEST EDX,EDX                        ; 0051b5ce
    JLE 0x0051b63c                      ; 0051b5d0
        ;   XREF to: 0051b63c (CONDITIONAL_JUMP)  ; LAB_0051b63c
    MOV dword ptr [ESP + 0xc],EDI       ; 0051b5d2
    MOV dword ptr [ESP],EDI             ; 0051b5d6
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051b5d9
        ;   Label: LAB_0051b5d9
    MOV EAX,dword ptr [ESP]             ; 0051b5dd
    MOV EDX,dword ptr [EDX + 0xc]       ; 0051b5e0
    ADD EAX,EDX                         ; 0051b5e3
    CMP dword ptr [EAX + 0x40],0x0      ; 0051b5e5
    JL 0x0051b61c                       ; 0051b5e9
        ;   XREF to: 0051b61c (CONDITIONAL_JUMP)  ; LAB_0051b61c
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051b5eb
    CMP ECX,dword ptr [ESP + 0x10]      ; 0051b5ef
    JL 0x0051b65b                       ; 0051b5f3
        ;   XREF to: 0051b65b (CONDITIONAL_JUMP)  ; LAB_0051b65b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051b5f5
        ;   Label: LAB_0051b5f5
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051b5f9
    MOV EDI,dword ptr [ESP + 0x4]       ; 0051b5fd
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051b601
    INC EDI                             ; 0051b604
    ADD EAX,EBX                         ; 0051b605
    MOV dword ptr [ESP + 0x4],EDI       ; 0051b607
    LEA ESI,[EBX + 0x8c]                ; 0051b60b
    MOV dword ptr [EAX + 0x40],0x0      ; 0051b611
    MOV dword ptr [ESP + 0xc],ESI       ; 0051b618
    MOV EDI,dword ptr [ESP]             ; 0051b61c
        ;   Label: LAB_0051b61c
    MOV EBP,dword ptr [ESP + 0x10]      ; 0051b61f
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051b623
    ADD EDI,0x8c                        ; 0051b627
    INC EBP                             ; 0051b62d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051b62e
    MOV dword ptr [ESP],EDI             ; 0051b631
    MOV dword ptr [ESP + 0x10],EBP      ; 0051b634
    CMP EBP,ECX                         ; 0051b638
    JL 0x0051b5d9                       ; 0051b63a
        ;   XREF to: 0051b5d9 (CONDITIONAL_JUMP)  ; LAB_0051b5d9
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051b63c
        ;   Label: LAB_0051b63c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051b640
    MOV dword ptr [EDX + 0x8],EAX       ; 0051b644
    ADD ESP,0x14                        ; 0051b647
    POP EBP                             ; 0051b64a
    POP EDI                             ; 0051b64b
    POP ESI                             ; 0051b64c
    POP EBX                             ; 0051b64d
    RET                                 ; 0051b64e
    MOV dword ptr [EAX + 0x40],0xffffffff ; 0051b64f
        ;   Label: LAB_0051b64f
    JMP 0x0051b5ab                      ; 0051b656
        ;   XREF to: 0051b5ab (UNCONDITIONAL_JUMP)  ; LAB_0051b5ab
    ADD EDX,dword ptr [ESP + 0xc]       ; 0051b65b
        ;   Label: LAB_0051b65b
    MOV ESI,EAX                         ; 0051b65f
    MOV EDI,EDX                         ; 0051b661
    MOVSD ES:EDI,ESI                    ; 0051b663
    MOVSD ES:EDI,ESI                    ; 0051b664
    MOVSD ES:EDI,ESI                    ; 0051b665
    MOVSD ES:EDI,ESI                    ; 0051b666
    LEA EDI,[EDX + 0x10]                ; 0051b667
    LEA ESI,[EAX + 0x10]                ; 0051b66a
    MOVSD ES:EDI,ESI                    ; 0051b66d
    MOVSD ES:EDI,ESI                    ; 0051b66e
    MOVSD ES:EDI,ESI                    ; 0051b66f
    MOV ECX,0x6                         ; 0051b670
    LEA EDI,[EDX + 0x1c]                ; 0051b675
    LEA ESI,[EAX + 0x1c]                ; 0051b678
    MOVSD.REP ES:EDI,ESI                ; 0051b67b
    LEA EDI,[EDX + 0x34]                ; 0051b67d
    LEA ESI,[EAX + 0x34]                ; 0051b680
    MOV EBX,EAX                         ; 0051b683
    MOV EBP,EDX                         ; 0051b685
    MOVSD ES:EDI,ESI                    ; 0051b687
    MOVSD ES:EDI,ESI                    ; 0051b688
    MOVSD ES:EDI,ESI                    ; 0051b689
    ADD EDX,0x44                        ; 0051b68a
    MOV ECX,dword ptr [EAX + 0x40]      ; 0051b68d
    ADD EAX,0x44                        ; 0051b690
    MOV dword ptr [EDX + -0x4],ECX      ; 0051b693
    CMP EDX,EAX                         ; 0051b696
    JZ 0x0051b6aa                       ; 0051b698
        ;   XREF to: 0051b6aa (CONDITIONAL_JUMP)  ; LAB_0051b6aa
    MOV ECX,dword ptr [EAX]             ; 0051b69a
    MOV dword ptr [EDX],ECX             ; 0051b69c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0051b69e
    MOV dword ptr [EDX + 0x4],ECX       ; 0051b6a1
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051b6a4
    MOV dword ptr [EDX + 0x8],ECX       ; 0051b6a7
    PUSH 0x410360                       ; 0051b6aa
        ;   Label: LAB_0051b6aa
    PUSH 0xc                            ; 0051b6af
    PUSH 0x3                            ; 0051b6b1
    LEA EAX,[EBX + 0x54]                ; 0051b6b3
    PUSH EAX                            ; 0051b6b6
    LEA EAX,[EBP + 0x54]                ; 0051b6b7
    FLD float ptr [EBX + 0x50]          ; 0051b6ba
    PUSH EAX                            ; 0051b6bd
    FSTP float ptr [EBP + 0x50]         ; 0051b6be
    CALL crt_memory.c_copyArrayWithFunction_FUN_006020c2 ; 0051b6c1
        ;   XREF to: 006020c2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_copyArrayWithFunction_FUN_006020c2(void * dest, void * source, int count, int element_size, ...)
    LEA EDI,[EBP + 0x78]                ; 0051b6c6
    LEA ESI,[EBX + 0x78]                ; 0051b6c9
    MOVSD ES:EDI,ESI                    ; 0051b6cc
    MOVSD ES:EDI,ESI                    ; 0051b6cd
    MOVSD ES:EDI,ESI                    ; 0051b6ce
    MOV EAX,dword ptr [EBX + 0x84]      ; 0051b6cf
    MOV dword ptr [EBP + 0x84],EAX      ; 0051b6d5
    MOV EAX,dword ptr [EBX + 0x88]      ; 0051b6db
    ADD ESP,0x14                        ; 0051b6e1
    MOV dword ptr [EBP + 0x88],EAX      ; 0051b6e4
    JMP 0x0051b5f5                      ; 0051b6ea
        ;   XREF to: 0051b5f5 (UNCONDITIONAL_JUMP)  ; LAB_0051b5f5

