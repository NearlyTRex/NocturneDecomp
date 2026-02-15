; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_removeDegeneratePolygons_FUN_00465310(void)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 00465780
;   shape_design.c_optimizePolygonMesh_FUN_004658e0 at 00465aaf
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d77af
;
; Referenced Globals:
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465310
        ;   Label: shape_design.c_removeDegeneratePolygons_FUN_00465310
    PUSH ESI                            ; 00465311
    PUSH EDI                            ; 00465312
    PUSH EBP                            ; 00465313
    MOV EBP,ESP                         ; 00465314
    SUB ESP,0x14                        ; 00465316
    MOV dword ptr [EBP + -0x14],0x0     ; 0046531c
        ;   Label: LAB_0046531c
    JMP 0x0046532b                      ; 00465323
        ;   XREF to: 0046532b (UNCONDITIONAL_JUMP)  ; LAB_0046532b
    MOV EAX,dword ptr [EBP + -0x14]     ; 00465325
        ;   Label: LAB_00465325
    INC dword ptr [EBP + -0x14]         ; 00465328
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046532b
        ;   Label: LAB_0046532b
    CMP EAX,dword ptr [0x016e990c]      ; 0046532e | g_PolygonCount
    JGE 0x004654cf                      ; 00465334
        ;   XREF to: 004654cf (CONDITIONAL_JUMP)  ; LAB_004654cf
    IMUL EAX,dword ptr [EBP + -0x14],0x184 ; 0046533a
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 00465341 | DAT_016e99b4
    MOV dword ptr [EBP + -0x8],EAX      ; 00465347
    MOV dword ptr [EBP + -0x4],0xffffffff ; 0046534a
    MOV dword ptr [EBP + -0x10],0x0     ; 00465351
    JMP 0x00465360                      ; 00465358
        ;   XREF to: 00465360 (UNCONDITIONAL_JUMP)  ; LAB_00465360
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046535a
        ;   Label: LAB_0046535a
    INC dword ptr [EBP + -0x10]         ; 0046535d
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465360
        ;   Label: LAB_00465360
    DEC EAX                             ; 00465363
    CMP EAX,dword ptr [EBP + -0x10]     ; 00465364
    JLE 0x004653c9                      ; 00465367
        ;   XREF to: 004653c9 (CONDITIONAL_JUMP)  ; LAB_004653c9
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465369
    INC EAX                             ; 0046536c
    MOV dword ptr [EBP + -0xc],EAX      ; 0046536d
    JMP 0x00465378                      ; 00465370
        ;   XREF to: 00465378 (UNCONDITIONAL_JUMP)  ; LAB_00465378
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465372
        ;   Label: LAB_00465372
    INC dword ptr [EBP + -0xc]          ; 00465375
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465378
        ;   Label: LAB_00465378
    CMP EAX,dword ptr [EBP + -0x8]      ; 0046537b
    JGE 0x004653c7                      ; 0046537e
        ;   XREF to: 004653c7 (CONDITIONAL_JUMP)  ; LAB_004653c7
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465380
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465387
    SHL EAX,0x2                         ; 0046538a
    LEA ECX,[EDX + EAX*0x1]             ; 0046538d
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465390
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465397
    SHL EAX,0x2                         ; 0046539a
    ADD EDX,EAX                         ; 0046539d
    MOV EAX,dword ptr [ECX + 0x16e99c8] ; 0046539f | DAT_016e99c8
    CMP EAX,dword ptr [EDX + 0x16e99c8] ; 004653a5 | DAT_016e99c8
    JNZ 0x004653c5                      ; 004653ab
        ;   XREF to: 004653c5 (CONDITIONAL_JUMP)  ; LAB_004653c5
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 004653ad
    MOV EAX,dword ptr [EBP + -0x10]     ; 004653b4
    SHL EAX,0x2                         ; 004653b7
    ADD EAX,EDX                         ; 004653ba
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 004653bc | DAT_016e99c8
    MOV dword ptr [EBP + -0x4],EAX      ; 004653c2
    JMP 0x00465372                      ; 004653c5
        ;   XREF to: 00465372 (UNCONDITIONAL_JUMP)  ; LAB_00465372
        ;   Label: LAB_004653c5
    JMP 0x0046535a                      ; 004653c7
        ;   XREF to: 0046535a (UNCONDITIONAL_JUMP)  ; LAB_0046535a
        ;   Label: LAB_004653c7
    CMP dword ptr [EBP + -0x4],-0x1     ; 004653c9
        ;   Label: LAB_004653c9
    JZ 0x004654ca                       ; 004653cd
        ;   XREF to: 004654ca (CONDITIONAL_JUMP)  ; LAB_004654ca
    MOV dword ptr [EBP + -0x10],0x0     ; 004653d3
    JMP 0x004653e2                      ; 004653da
        ;   XREF to: 004653e2 (UNCONDITIONAL_JUMP)  ; LAB_004653e2
    MOV EAX,dword ptr [EBP + -0x10]     ; 004653dc
        ;   Label: LAB_004653dc
    INC dword ptr [EBP + -0x10]         ; 004653df
    MOV EAX,dword ptr [EBP + -0x10]     ; 004653e2
        ;   Label: LAB_004653e2
    CMP EAX,dword ptr [EBP + -0x8]      ; 004653e5
    JGE 0x004654ca                      ; 004653e8
        ;   XREF to: 004654ca (CONDITIONAL_JUMP)  ; LAB_004654ca
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 004653ee
    MOV EAX,dword ptr [EBP + -0x10]     ; 004653f5
    SHL EAX,0x2                         ; 004653f8
    ADD EAX,EDX                         ; 004653fb
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 004653fd | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x4]      ; 00465403
    JNZ 0x004654c5                      ; 00465406
        ;   XREF to: 004654c5 (CONDITIONAL_JUMP)  ; LAB_004654c5
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046540c
    MOV dword ptr [EBP + -0xc],EAX      ; 0046540f
    JMP 0x0046541a                      ; 00465412
        ;   XREF to: 0046541a (UNCONDITIONAL_JUMP)  ; LAB_0046541a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465414
        ;   Label: LAB_00465414
    INC dword ptr [EBP + -0xc]          ; 00465417
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046541a
        ;   Label: LAB_0046541a
    DEC EAX                             ; 0046541d
    CMP EAX,dword ptr [EBP + -0xc]      ; 0046541e
    JLE 0x00465450                      ; 00465421
        ;   XREF to: 00465450 (CONDITIONAL_JUMP)  ; LAB_00465450
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465423
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046542a
    SHL EAX,0x2                         ; 0046542d
    LEA ECX,[EDX + EAX*0x1]             ; 00465430
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465433
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046543a
    SHL EAX,0x2                         ; 0046543d
    ADD EDX,EAX                         ; 00465440
    MOV EAX,dword ptr [ECX + 0x16e99cc] ; 00465442 | DAT_016e99cc
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 00465448 | DAT_016e99c8
    JMP 0x00465414                      ; 0046544e
        ;   XREF to: 00465414 (UNCONDITIONAL_JUMP)  ; LAB_00465414
    IMUL EAX,dword ptr [EBP + -0x14],0x184 ; 00465450
        ;   Label: LAB_00465450
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 00465457 | DAT_016e99b4
    DEC EAX                             ; 0046545d
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 0046545e
    MOV dword ptr [EDX + 0x16e99b4],EAX ; 00465465 | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + -0x14],0x184 ; 0046546b
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 00465472 | DAT_016e99b4
    JGE 0x004654c0                      ; 00465479
        ;   XREF to: 004654c0 (CONDITIONAL_JUMP)  ; LAB_004654c0
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046547b
    MOV dword ptr [EBP + -0x10],EAX     ; 0046547e
    JMP 0x00465489                      ; 00465481
        ;   XREF to: 00465489 (UNCONDITIONAL_JUMP)  ; LAB_00465489
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465483
        ;   Label: LAB_00465483
    INC dword ptr [EBP + -0x10]         ; 00465486
    MOV EAX,[0x016e990c]                ; 00465489 | g_PolygonCount
        ;   Label: LAB_00465489
    DEC EAX                             ; 0046548e
    CMP EAX,dword ptr [EBP + -0x10]     ; 0046548f
    JLE 0x004654ba                      ; 00465492
        ;   XREF to: 004654ba (CONDITIONAL_JUMP)  ; LAB_004654ba
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465494
    INC EAX                             ; 00465497
    IMUL EAX,EAX,0x184                  ; 00465498
    IMUL ESI,dword ptr [EBP + -0x10],0x184 ; 0046549e
    MOV ECX,0x61                        ; 004654a5
    LEA EDI,[ESI + 0x16e9910]           ; 004654aa | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 004654b0 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 004654b6 | g_ModelPolygonData | DAT_016e9914
    JMP 0x00465483                      ; 004654b8
        ;   XREF to: 00465483 (UNCONDITIONAL_JUMP)  ; LAB_00465483
    DEC dword ptr [0x016e990c]          ; 004654ba | g_PolygonCount
        ;   Label: LAB_004654ba
    JMP 0x0046531c                      ; 004654c0
        ;   XREF to: 0046531c (UNCONDITIONAL_JUMP)  ; LAB_0046531c
        ;   Label: LAB_004654c0
    JMP 0x004653dc                      ; 004654c5
        ;   XREF to: 004653dc (UNCONDITIONAL_JUMP)  ; LAB_004653dc
        ;   Label: LAB_004654c5
    JMP 0x00465325                      ; 004654ca
        ;   XREF to: 00465325 (UNCONDITIONAL_JUMP)  ; LAB_00465325
        ;   Label: LAB_004654ca
    MOV ESP,EBP                         ; 004654cf
        ;   Label: LAB_004654cf
    POP EBP                             ; 004654d1
    POP EDI                             ; 004654d2
    POP ESI                             ; 004654d3
    POP EBX                             ; 004654d4
    RET                                 ; 004654d5

