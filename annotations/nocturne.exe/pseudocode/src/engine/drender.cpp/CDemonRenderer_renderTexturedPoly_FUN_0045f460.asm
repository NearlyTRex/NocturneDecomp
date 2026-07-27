; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(int *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[7]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 at 00416175
;   core_dskybox.cpp_renderSkyDome_FUN_00463580 at 0046388e
;   core_flies.cpp_FUN_0048f490 at 0048f832
;   core_glass.cpp_FUN_004ac9b0 at 004acaf3
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0 at 004dff69
;   core_wateract.cpp_FUN_00551c00 at 00551e1f
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 at 004614d7
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f460
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
    PUSH EDI                            ; 0045f461
    PUSH EBP                            ; 0045f462
    SUB ESP,0x4                         ; 0045f463
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045f466
    CMP dword ptr [ESP + 0x1c],-0x1     ; 0045f46a
    JZ 0x0045f4ff                       ; 0045f46f
        ;   XREF to: 0045f4ff (CONDITIONAL_JUMP)  ; LAB_0045f4ff
    CMP dword ptr [EBX + 0x1c],0x0      ; 0045f475
        ;   Label: LAB_0045f475
    JNZ 0x0045f50c                      ; 0045f479
        ;   XREF to: 0045f50c (CONDITIONAL_JUMP)  ; LAB_0045f50c
    CMP dword ptr [EBX + 0xc],0x0       ; 0045f47f
    JNZ 0x0045f526                      ; 0045f483
        ;   XREF to: 0045f526 (CONDITIONAL_JUMP)  ; LAB_0045f526
    PUSH ESI                            ; 0045f489
        ;   Label: LAB_0045f489
    CMP dword ptr [EBX + 0x4],0x0       ; 0045f48a
    JZ 0x0045f53f                       ; 0045f48e
        ;   XREF to: 0045f53f (CONDITIONAL_JUMP)  ; LAB_0045f53f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f494
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045f498
    XOR ECX,ECX                         ; 0045f49b
    TEST ESI,ESI                        ; 0045f49d
    JLE 0x0045f4c0                      ; 0045f49f
        ;   XREF to: 0045f4c0 (CONDITIONAL_JUMP)  ; LAB_0045f4c0
    XOR EDX,EDX                         ; 0045f4a1
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045f4a3
        ;   Label: LAB_0045f4a3
    MOV dword ptr [EDX + 0x1b4d76c],ESI ; 0045f4a6 | DAT_01b4d76c | DAT_01b4d770
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f4ac
    ADD EDX,0x4                         ; 0045f4b0
    INC ECX                             ; 0045f4b3
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045f4b4
    ADD EAX,0xc                         ; 0045f4b7
    CMP ECX,EBP                         ; 0045f4ba
    JL 0x0045f4a3                       ; 0045f4bc
        ;   XREF to: 0045f4a3 (CONDITIONAL_JUMP)  ; LAB_0045f4a3
    MOV EAX,EAX                         ; 0045f4be
    CMP dword ptr [EBX + 0x4],0x0       ; 0045f4c0
        ;   Label: LAB_0045f4c0
    JZ 0x0045f59a                       ; 0045f4c4
        ;   XREF to: 0045f59a (CONDITIONAL_JUMP)  ; LAB_0045f59a
    XOR EAX,EAX                         ; 0045f4ca
    MOV EBP,0x463a79                    ; 0045f4cc
    MOV [0x01c039a0],EAX                ; 0045f4d1 | DAT_01c039a0
    MOV [0x01c039a4],EAX                ; 0045f4d6 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],EBP      ; 0045f4db | DAT_01c00c7c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f4e1
        ;   Label: LAB_0045f4e1
    PUSH 0x1b4d76c                      ; 0045f4e5 | DAT_01b4d76c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0045f4ea
    PUSH ECX                            ; 0045f4ed
    PUSH EBX                            ; 0045f4ee
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f4ef
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045f4f4
    POP ESI                             ; 0045f4f7
    ADD ESP,0x4                         ; 0045f4f8
        ;   Label: LAB_0045f4f8
    POP EBP                             ; 0045f4fb
    POP EDI                             ; 0045f4fc
    POP EBX                             ; 0045f4fd
    RET                                 ; 0045f4fe
    MOV dword ptr [ESP + 0x1c],0x2cd    ; 0045f4ff
        ;   Label: LAB_0045f4ff
    JMP 0x0045f475                      ; 0045f507
        ;   XREF to: 0045f475 (UNCONDITIONAL_JUMP)  ; LAB_0045f475
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045f50c
        ;   Label: LAB_0045f50c
    PUSH EDI                            ; 0045f510
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0045f511
    PUSH EBP                            ; 0045f515
    PUSH EBX                            ; 0045f516
    CALL engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0 ; 0045f517
        ;   XREF to: 00461ad0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0()
    ADD ESP,0xc                         ; 0045f51c
    ADD ESP,0x4                         ; 0045f51f
    POP EBP                             ; 0045f522
    POP EDI                             ; 0045f523
    POP EBX                             ; 0045f524
    RET                                 ; 0045f525
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045f526
        ;   Label: LAB_0045f526
    ADD EAX,0x8                         ; 0045f52a
    PUSH EAX                            ; 0045f52d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045f52e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045f533
    TEST EAX,EAX                        ; 0045f536
    JZ 0x0045f4f8                       ; 0045f538
        ;   XREF to: 0045f4f8 (CONDITIONAL_JUMP)  ; LAB_0045f4f8
    JMP 0x0045f489                      ; 0045f53a
        ;   XREF to: 0045f489 (UNCONDITIONAL_JUMP)  ; LAB_0045f489
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f53f
        ;   Label: LAB_0045f53f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045f543
    XOR ECX,ECX                         ; 0045f546
    TEST EDX,EDX                        ; 0045f548
    JLE 0x0045f4c0                      ; 0045f54a
        ;   XREF to: 0045f4c0 (CONDITIONAL_JUMP)  ; LAB_0045f4c0
    XOR EDX,EDX                         ; 0045f550
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045f552
        ;   Label: LAB_0045f552
    MOV EBP,dword ptr [EBX + 0x20]      ; 0045f555
    MOV dword ptr [ESP + 0x4],ESI       ; 0045f558
    TEST EBP,EBP                        ; 0045f55c
    JZ 0x0045f582                       ; 0045f55e
        ;   XREF to: 0045f582 (CONDITIONAL_JUMP)  ; LAB_0045f582
    MOV ESI,dword ptr [ESP + 0x4]       ; 0045f560
        ;   Label: LAB_0045f560
    MOV dword ptr [EDX + 0x1b4d76c],ESI ; 0045f564 | DAT_01b4d76c | DAT_01b4d770
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f56a
    ADD EAX,0xc                         ; 0045f56e
    INC ECX                             ; 0045f571
    MOV EDI,dword ptr [ESI + 0x4]       ; 0045f572
    ADD EDX,0x4                         ; 0045f575
    CMP ECX,EDI                         ; 0045f578
    JGE 0x0045f4c0                      ; 0045f57a
        ;   XREF to: 0045f4c0 (CONDITIONAL_JUMP)  ; LAB_0045f4c0
    JMP 0x0045f552                      ; 0045f580
        ;   XREF to: 0045f552 (UNCONDITIONAL_JUMP)  ; LAB_0045f552
    IMUL ESI,ESI,0x30                   ; 0045f582
        ;   Label: LAB_0045f582
    MOV EDI,dword ptr [EBX]             ; 0045f585
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0045f587
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0045f58a
    MOV EDI,dword ptr [EBX]             ; 0045f58e
    ADD EDI,ESI                         ; 0045f590
    MOV ESI,dword ptr [EAX + 0x20]      ; 0045f592
    MOV dword ptr [EDI + 0x1c],ESI      ; 0045f595
    JMP 0x0045f560                      ; 0045f598
        ;   XREF to: 0045f560 (UNCONDITIONAL_JUMP)  ; LAB_0045f560
    CMP dword ptr [0x005b7624],0x20     ; 0045f59a | DAT_005b7624
        ;   Label: LAB_0045f59a
    JNZ 0x0045f5c6                      ; 0045f5a1
        ;   XREF to: 0045f5c6 (CONDITIONAL_JUMP)  ; LAB_0045f5c6
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045f5a3 | DAT_01c00c7c
    MOV EDI,0x6                         ; 0045f5ad
        ;   Label: LAB_0045f5ad
    MOV EAX,dword ptr [ESP + 0x20]      ; 0045f5b2
    MOV dword ptr [0x01c039a4],EDI      ; 0045f5b6 | DAT_01c039a4
    MOV [0x01c039a0],EAX                ; 0045f5bc | DAT_01c039a0
    JMP 0x0045f4e1                      ; 0045f5c1
        ;   XREF to: 0045f4e1 (UNCONDITIONAL_JUMP)  ; LAB_0045f4e1
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045f5c6 | DAT_01c00c7c
        ;   Label: LAB_0045f5c6
    JMP 0x0045f5ad                      ; 0045f5d0
        ;   XREF to: 0045f5ad (UNCONDITIONAL_JUMP)  ; LAB_0045f5ad

