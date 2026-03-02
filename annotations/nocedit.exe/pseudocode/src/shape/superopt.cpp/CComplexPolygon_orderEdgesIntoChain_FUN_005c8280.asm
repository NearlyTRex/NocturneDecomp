; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; SExpandedEdge *  Stack[0x8]:4   edges
; int              Stack[0xc]:4   edge_count
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   shape_superopt.cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20 at 005c7d87
;   shape_superopt.cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0 at 005c91fa
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_005fe659
;   shape_memdbg.cpp_malloc_FUN_006021da
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c8280
        ;   Label: shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
    SUB ESP,0x8                         ; 005c8281
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c8284
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c8288
    SUB EAX,EDX                         ; 005c828f
    SHL EAX,0x5                         ; 005c8291
    PUSH EAX                            ; 005c8294
    CALL shape_memdbg.cpp_malloc_FUN_006021da ; 005c8295
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_006021da(SIZE_T size)
    ADD ESP,0x4                         ; 005c829a
    XOR EBP,EBP                         ; 005c829d
    MOV dword ptr [ESP + 0x4],EAX       ; 005c829f
    TEST EAX,EAX                        ; 005c82a3
    JZ 0x005c84b5                       ; 005c82a5
        ;   XREF to: 005c84b5 (CONDITIONAL_JUMP)  ; LAB_005c84b5
    PUSH EDI                            ; 005c82ab
    PUSH ESI                            ; 005c82ac
    PUSH EBX                            ; 005c82ad
    MOV ECX,dword ptr [ESP + 0x24]      ; 005c82ae
        ;   Label: LAB_005c82ae
    XOR EDX,EDX                         ; 005c82b2
    TEST ECX,ECX                        ; 005c82b4
    JBE 0x005c82ca                      ; 005c82b6
        ;   XREF to: 005c82ca (CONDITIONAL_JUMP)  ; LAB_005c82ca
    IMUL ECX,ECX,0x60                   ; 005c82b8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c82bb
    ADD ECX,EAX                         ; 005c82bf
    CMP dword ptr [EAX],-0x1            ; 005c82c1
        ;   Label: LAB_005c82c1
    JZ 0x005c83ce                       ; 005c82c4
        ;   XREF to: 005c83ce (CONDITIONAL_JUMP)  ; LAB_005c83ce
    MOV EAX,dword ptr [ESP + 0x24]      ; 005c82ca
        ;   Label: LAB_005c82ca
    CMP EDX,EAX                         ; 005c82ce
    JZ 0x005c847c                       ; 005c82d0
        ;   XREF to: 005c847c (CONDITIONAL_JUMP)  ; LAB_005c847c
    IMUL EAX,EDX,0x60                   ; 005c82d6
    ADD EAX,dword ptr [ESP + 0x20]      ; 005c82d9
    IMUL EDX,EBP,0x60                   ; 005c82dd
    ADD EDX,dword ptr [ESP + 0x10]      ; 005c82e0
    MOV ECX,dword ptr [EAX]             ; 005c82e4
    MOV dword ptr [EDX],ECX             ; 005c82e6
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c82e8
    MOV dword ptr [EDX + 0x4],ECX       ; 005c82eb
    MOV ECX,dword ptr [EAX + 0x8]       ; 005c82ee
    MOV dword ptr [EDX + 0x8],ECX       ; 005c82f1
    MOV ECX,dword ptr [EAX + 0xc]       ; 005c82f4
    LEA EBX,[EAX + 0x10]                ; 005c82f7
    MOV dword ptr [EDX + 0xc],ECX       ; 005c82fa
    LEA ECX,[EDX + 0x10]                ; 005c82fd
    MOV ESI,dword ptr [EBX]             ; 005c8300
    MOV dword ptr [ECX],ESI             ; 005c8302
    MOV ESI,dword ptr [EBX + 0x4]       ; 005c8304
    MOV dword ptr [ECX + 0x4],ESI       ; 005c8307
    MOV ESI,dword ptr [EBX + 0x8]       ; 005c830a
    MOV dword ptr [ECX + 0x8],ESI       ; 005c830d
    MOV ESI,dword ptr [EBX + 0xc]       ; 005c8310
    MOV dword ptr [ECX + 0xc],ESI       ; 005c8313
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c8316
    MOV dword ptr [ECX + 0x10],ESI      ; 005c8319
    MOV ESI,dword ptr [EBX + 0x14]      ; 005c831c
    MOV dword ptr [ECX + 0x14],ESI      ; 005c831f
    LEA ECX,[EAX + 0x28]                ; 005c8322
    LEA EBX,[EDX + 0x28]                ; 005c8325
    MOV ESI,dword ptr [ECX]             ; 005c8328
    MOV dword ptr [EBX],ESI             ; 005c832a
    MOV ESI,dword ptr [ECX + 0x4]       ; 005c832c
    MOV dword ptr [EBX + 0x4],ESI       ; 005c832f
    MOV ESI,dword ptr [ECX + 0x8]       ; 005c8332
    MOV dword ptr [EBX + 0x8],ESI       ; 005c8335
    MOV ESI,dword ptr [ECX + 0xc]       ; 005c8338
    MOV dword ptr [EBX + 0xc],ESI       ; 005c833b
    MOV ESI,dword ptr [ECX + 0x10]      ; 005c833e
    MOV dword ptr [EBX + 0x10],ESI      ; 005c8341
    MOV ESI,dword ptr [ECX + 0x14]      ; 005c8344
    MOV dword ptr [EBX + 0x14],ESI      ; 005c8347
    LEA EBX,[EAX + 0x40]                ; 005c834a
    LEA ECX,[EDX + 0x40]                ; 005c834d
    MOV ESI,dword ptr [EBX]             ; 005c8350
    MOV dword ptr [ECX],ESI             ; 005c8352
    MOV ESI,dword ptr [EBX + 0x4]       ; 005c8354
    MOV dword ptr [ECX + 0x4],ESI       ; 005c8357
    MOV ESI,dword ptr [EBX + 0x8]       ; 005c835a
    MOV dword ptr [ECX + 0x8],ESI       ; 005c835d
    MOV ESI,dword ptr [EBX + 0xc]       ; 005c8360
    MOV dword ptr [ECX + 0xc],ESI       ; 005c8363
    LEA ECX,[EAX + 0x50]                ; 005c8366
    INC EBP                             ; 005c8369
    MOV EBX,dword ptr [ECX]             ; 005c836a
    MOV dword ptr [EDX + 0x50],EBX      ; 005c836c
    MOV EBX,dword ptr [ECX + 0x4]       ; 005c836f
    MOV dword ptr [EDX + 0x54],EBX      ; 005c8372
    MOV EBX,dword ptr [ECX + 0x8]       ; 005c8375
    MOV dword ptr [EDX + 0x58],EBX      ; 005c8378
    MOV EBX,dword ptr [ECX + 0xc]       ; 005c837b
    MOV dword ptr [EDX + 0x5c],EBX      ; 005c837e
    MOV dword ptr [EAX],0xffffffff      ; 005c8381
    MOV EDI,dword ptr [ESP + 0x24]      ; 005c8387
        ;   Label: LAB_005c8387
    MOV ESI,0x1                         ; 005c838b
    TEST EDI,EDI                        ; 005c8390
    JBE 0x005c83c4                      ; 005c8392
        ;   XREF to: 005c83c4 (CONDITIONAL_JUMP)  ; LAB_005c83c4
    IMUL EDI,EBP,0x60                   ; 005c8394
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c8397
    LEA EBX,[EDI + -0x38]               ; 005c839b
    ADD EBX,ECX                         ; 005c839e
    IMUL EAX,dword ptr [ESP + 0x24],0x60 ; 005c83a0
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c83a5
    LEA ECX,[EDX + EAX*0x1]             ; 005c83a9
    MOV dword ptr [ESP + 0xc],ECX       ; 005c83ac
    TEST ESI,ESI                        ; 005c83b0
        ;   Label: LAB_005c83b0
    JZ 0x005c83c4                       ; 005c83b2
        ;   XREF to: 005c83c4 (CONDITIONAL_JUMP)  ; LAB_005c83c4
    CMP dword ptr [EDX],-0x1            ; 005c83b4
    JNZ 0x005c83df                      ; 005c83b7
        ;   XREF to: 005c83df (CONDITIONAL_JUMP)  ; LAB_005c83df
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c83b9
        ;   Label: LAB_005c83b9
    ADD EDX,0x60                        ; 005c83bd
    CMP EDX,EAX                         ; 005c83c0
    JC 0x005c83b0                       ; 005c83c2
        ;   XREF to: 005c83b0 (CONDITIONAL_JUMP)  ; LAB_005c83b0
    TEST ESI,ESI                        ; 005c83c4
        ;   Label: LAB_005c83c4
    JNZ 0x005c82ae                      ; 005c83c6
        ;   XREF to: 005c82ae (CONDITIONAL_JUMP)  ; LAB_005c82ae
    JMP 0x005c8387                      ; 005c83cc
        ;   XREF to: 005c8387 (UNCONDITIONAL_JUMP)  ; LAB_005c8387
    ADD EAX,0x60                        ; 005c83ce
        ;   Label: LAB_005c83ce
    INC EDX                             ; 005c83d1
    CMP EAX,ECX                         ; 005c83d2
    JC 0x005c82c1                       ; 005c83d4
        ;   XREF to: 005c82c1 (CONDITIONAL_JUMP)  ; LAB_005c82c1
    JMP 0x005c82ca                      ; 005c83da
        ;   XREF to: 005c82ca (UNCONDITIONAL_JUMP)  ; LAB_005c82ca
    LEA ECX,[EDX + 0x10]                ; 005c83df
        ;   Label: LAB_005c83df
    FLD double ptr [ECX]                ; 005c83e2
    FCOMP double ptr [EBX]              ; 005c83e4
    FNSTSW AX                           ; 005c83e6
    SAHF                                ; 005c83e8
    JNZ 0x005c83b9                      ; 005c83e9
        ;   XREF to: 005c83b9 (CONDITIONAL_JUMP)  ; LAB_005c83b9
    FLD double ptr [ECX + 0x8]          ; 005c83eb
    FCOMP double ptr [EBX + 0x8]        ; 005c83ee
    FNSTSW AX                           ; 005c83f1
    SAHF                                ; 005c83f3
    JNZ 0x005c83b9                      ; 005c83f4
        ;   XREF to: 005c83b9 (CONDITIONAL_JUMP)  ; LAB_005c83b9
    FLD double ptr [ECX + 0x10]         ; 005c83f6
    FCOMP double ptr [EBX + 0x10]       ; 005c83f9
    FNSTSW AX                           ; 005c83fc
    SAHF                                ; 005c83fe
    JNZ 0x005c83b9                      ; 005c83ff
        ;   XREF to: 005c83b9 (CONDITIONAL_JUMP)  ; LAB_005c83b9
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c8401
    MOV EAX,EDI                         ; 005c8405
    ADD EAX,ESI                         ; 005c8407
    MOV ESI,dword ptr [EDX]             ; 005c8409
    MOV dword ptr [EAX],ESI             ; 005c840b
    MOV ESI,dword ptr [EDX + 0x4]       ; 005c840d
    MOV dword ptr [EAX + 0x4],ESI       ; 005c8410
    MOV ESI,dword ptr [EDX + 0x8]       ; 005c8413
    MOV dword ptr [EAX + 0x8],ESI       ; 005c8416
    MOV ESI,dword ptr [EDX + 0xc]       ; 005c8419
    MOV dword ptr [EAX + 0xc],ESI       ; 005c841c
    LEA ESI,[EAX + 0x10]                ; 005c841f
    FLD double ptr [ECX]                ; 005c8422
    FSTP double ptr [ESI]               ; 005c8424
    FLD double ptr [ECX + 0x8]          ; 005c8426
    FSTP double ptr [ESI + 0x8]         ; 005c8429
    FLD double ptr [ECX + 0x10]         ; 005c842c
    FSTP double ptr [ESI + 0x10]        ; 005c842f
    LEA ESI,[EDX + 0x28]                ; 005c8432
    ADD EBX,0x60                        ; 005c8435
    LEA ECX,[EAX + 0x28]                ; 005c8438
    FLD double ptr [ESI]                ; 005c843b
    FSTP double ptr [ECX]               ; 005c843d
    FLD double ptr [ESI + 0x8]          ; 005c843f
    FSTP double ptr [ECX + 0x8]         ; 005c8442
    FLD double ptr [ESI + 0x10]         ; 005c8445
    LEA ESI,[EDX + 0x40]                ; 005c8448
    FSTP double ptr [ECX + 0x10]        ; 005c844b
    LEA ECX,[EAX + 0x40]                ; 005c844e
    FLD double ptr [ESI]                ; 005c8451
    FSTP double ptr [ECX]               ; 005c8453
    FLD double ptr [ESI + 0x8]          ; 005c8455
    FSTP double ptr [ECX + 0x8]         ; 005c8458
    LEA ECX,[EAX + 0x50]                ; 005c845b
    INC EBP                             ; 005c845e
    LEA EAX,[EDX + 0x50]                ; 005c845f
    ADD EDI,0x60                        ; 005c8462
    XOR ESI,ESI                         ; 005c8465
    FLD double ptr [EAX]                ; 005c8467
    FSTP double ptr [ECX]               ; 005c8469
    FLD double ptr [EAX + 0x8]          ; 005c846b
    FSTP double ptr [ECX + 0x8]         ; 005c846e
    MOV dword ptr [EDX],0xffffffff      ; 005c8471
    JMP 0x005c83b9                      ; 005c8477
        ;   XREF to: 005c83b9 (UNCONDITIONAL_JUMP)  ; LAB_005c83b9
    LEA ECX,[EAX*0x4 + 0x0]             ; 005c847c
        ;   Label: LAB_005c847c
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c8483
    SUB ECX,EAX                         ; 005c8487
    MOV EDI,dword ptr [ESP + 0x20]      ; 005c8489
    SHL ECX,0x5                         ; 005c848d
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c8490
    PUSH EDI                            ; 005c8494
    MOV EAX,ECX                         ; 005c8495
    SHR ECX,0x2                         ; 005c8497
    MOVSD.REP ES:EDI,ESI                ; 005c849a
    MOV CL,AL                           ; 005c849c
    AND CL,0x3                          ; 005c849e
    MOVSB.REP ES:EDI,ESI                ; 005c84a1
    POP EDI                             ; 005c84a3
    PUSH EBX                            ; 005c84a4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c84a5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    MOV EAX,0x1                         ; 005c84aa
    ADD ESP,0x4                         ; 005c84af
    POP EBX                             ; 005c84b2
    POP ESI                             ; 005c84b3
    POP EDI                             ; 005c84b4
    ADD ESP,0x8                         ; 005c84b5
        ;   Label: LAB_005c84b5
    POP EBP                             ; 005c84b8
    RET                                 ; 005c84b9

