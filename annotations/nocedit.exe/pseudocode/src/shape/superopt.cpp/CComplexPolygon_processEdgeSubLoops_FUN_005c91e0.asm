; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; SExpandedEdge *  Stack[0x8]:4   edges
; int *            Stack[0xc]:4   edge_count_ptr
;
; XREF[1]:
;   shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0 at 005c8729
;
; Referenced Globals:
;   double DOUBLE_0065422a = 1.00000000000000E-10
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0
;   shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
;   shape_superopt.cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340
;   shape_superopt.cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20
;   shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c91e0
        ;   Label: shape_superopt.cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
    PUSH ESI                            ; 005c91e1
    PUSH EDI                            ; 005c91e2
    PUSH EBP                            ; 005c91e3
    MOV EBP,ESP                         ; 005c91e4
    SUB ESP,0x20                        ; 005c91e6
    AND ESP,0xfffffff8                  ; 005c91e9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005c91ec
    MOV EDX,dword ptr [ESI]             ; 005c91ef
    PUSH EDX                            ; 005c91f1
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c91f2
    PUSH ECX                            ; 005c91f5
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c91f6
    PUSH EBX                            ; 005c91f9
    CALL shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280 ; 005c91fa
        ;   XREF to: 005c8280 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon * this_ptr, SExpandedEdge * edges, int edge_count)
    ADD ESP,0xc                         ; 005c91ff
    TEST EAX,EAX                        ; 005c9202
    JNZ 0x005c9211                      ; 005c9204
        ;   XREF to: 005c9211 (CONDITIONAL_JUMP)  ; LAB_005c9211
    XOR ECX,ECX                         ; 005c9206
        ;   Label: LAB_005c9206
    MOV EAX,ECX                         ; 005c9208
    MOV ESP,EBP                         ; 005c920a
    POP EBP                             ; 005c920c
    POP EDI                             ; 005c920d
    POP ESI                             ; 005c920e
    POP EBX                             ; 005c920f
    RET                                 ; 005c9210
    PUSH ESI                            ; 005c9211
        ;   Label: LAB_005c9211
    MOV EDI,dword ptr [EBP + 0x18]      ; 005c9212
    PUSH EDI                            ; 005c9215
    PUSH EBX                            ; 005c9216
    CALL shape_superopt.cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340 ; 005c9217
        ;   XREF to: 005c9340 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340(CComplexPolygon * this_ptr, SExpandedEdge * edges, int * edge_count_ptr)
    MOV EDX,dword ptr [ESI]             ; 005c921c
    ADD ESP,0xc                         ; 005c921e
    TEST EDX,EDX                        ; 005c9221
    JZ 0x005c9283                       ; 005c9223
        ;   XREF to: 005c9283 (CONDITIONAL_JUMP)  ; LAB_005c9283
    LEA EAX,[EBX + 0x14]                ; 005c9225
    XOR EDI,EDI                         ; 005c9228
    MOV dword ptr [ESP + 0x18],EAX      ; 005c922a
    IMUL EAX,EDI,0x60                   ; 005c922e
        ;   Label: LAB_005c922e
    ADD EAX,dword ptr [EBP + 0x18]      ; 005c9231
    LEA EBX,[EAX + 0x10]                ; 005c9234
    LEA ECX,[EDI + 0x1]                 ; 005c9237
    CMP ECX,dword ptr [ESI]             ; 005c923a
    JNC 0x005c9272                      ; 005c923c
        ;   XREF to: 005c9272 (CONDITIONAL_JUMP)  ; LAB_005c9272
    IMUL EDX,ECX,0x60                   ; 005c923e
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c9241
    ADD EDX,0x28                        ; 005c9244
    ADD EDX,EAX                         ; 005c9247
    FLD double ptr [EBX]                ; 005c9249
        ;   Label: LAB_005c9249
    FSUB double ptr [EDX]               ; 005c924b
    FMUL ST0                            ; 005c924d
    FLD double ptr [EBX + 0x8]          ; 005c924f
    FSUB double ptr [EDX + 0x8]         ; 005c9252
    FMUL ST0                            ; 005c9255
    FLD double ptr [EBX + 0x10]         ; 005c9257
    FXCH                                ; 005c925a
    FADDP ST2,ST0                       ; 005c925c
    FSUB double ptr [EDX + 0x10]        ; 005c925e
    FMUL ST0                            ; 005c9261
    FADDP                               ; 005c9263
    FSQRT                               ; 005c9265
    FCOMP double ptr [0x0065422a]       ; 005c9267 | DOUBLE_0065422a
    FNSTSW AX                           ; 005c926d
    SAHF                                ; 005c926f
    JNC 0x005c9291                      ; 005c9270
        ;   XREF to: 005c9291 (CONDITIONAL_JUMP)  ; LAB_005c9291
    MOV EDX,dword ptr [ESI]             ; 005c9272
        ;   Label: LAB_005c9272
    CMP ECX,EDX                         ; 005c9274
    JNZ 0x005c929d                      ; 005c9276
        ;   XREF to: 005c929d (CONDITIONAL_JUMP)  ; LAB_005c929d
    XOR ECX,EDX                         ; 005c9278
    MOV EAX,ECX                         ; 005c927a
    MOV ESP,EBP                         ; 005c927c
    POP EBP                             ; 005c927e
    POP EDI                             ; 005c927f
    POP ESI                             ; 005c9280
    POP EBX                             ; 005c9281
    RET                                 ; 005c9282
    MOV ECX,0x1                         ; 005c9283
        ;   Label: LAB_005c9283
    MOV EAX,ECX                         ; 005c9288
    MOV ESP,EBP                         ; 005c928a
    POP EBP                             ; 005c928c
    POP EDI                             ; 005c928d
    POP ESI                             ; 005c928e
    POP EBX                             ; 005c928f
    RET                                 ; 005c9290
    INC ECX                             ; 005c9291
        ;   Label: LAB_005c9291
    MOV EAX,dword ptr [ESI]             ; 005c9292
    ADD EDX,0x60                        ; 005c9294
    CMP ECX,EAX                         ; 005c9297
    JC 0x005c9249                       ; 005c9299
        ;   XREF to: 005c9249 (CONDITIONAL_JUMP)  ; LAB_005c9249
    JMP 0x005c9272                      ; 005c929b
        ;   XREF to: 005c9272 (UNCONDITIONAL_JUMP)  ; LAB_005c9272
    IMUL EAX,EDI,0x60                   ; 005c929d
        ;   Label: LAB_005c929d
    SUB ECX,EDI                         ; 005c92a0
    LEA EBX,[ECX + 0x1]                 ; 005c92a2
    MOV EDX,dword ptr [EBP + 0x18]      ; 005c92a5
    PUSH EBX                            ; 005c92a8
    ADD EDX,EAX                         ; 005c92a9
    PUSH EDX                            ; 005c92ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c92ac
    PUSH EAX                            ; 005c92af
    MOV dword ptr [ESP + 0x28],EDX      ; 005c92b0
    CALL shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0 ; 005c92b4
        ;   XREF to: 005cb3a0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon * this_ptr, SExpandedEdge * edges, int edge_count)
    ADD ESP,0xc                         ; 005c92b9
    TEST EAX,EAX                        ; 005c92bc
    JZ 0x005c92e2                       ; 005c92be
        ;   XREF to: 005c92e2 (CONDITIONAL_JUMP)  ; LAB_005c92e2
    MOV EDX,dword ptr [ESI]             ; 005c92c0
    PUSH EDX                            ; 005c92c2
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c92c3
    PUSH ECX                            ; 005c92c6
    PUSH EBX                            ; 005c92c7
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c92c8
    PUSH EAX                            ; 005c92cc
    MOV EDX,dword ptr [ESP + 0x28]      ; 005c92cd
    PUSH EDX                            ; 005c92d1
    MOV ECX,dword ptr [EBP + 0x14]      ; 005c92d2
    PUSH ECX                            ; 005c92d5
    CALL shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90 ; 005c92d6
        ;   XREF to: 005cbf90 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon * this_ptr, CVector3d * normal, SExpandedEdge * sub_chain, int sub_chain_count, ...)
    ADD ESP,0x18                        ; 005c92db
    TEST EAX,EAX                        ; 005c92de
    JZ 0x005c92fa                       ; 005c92e0
        ;   XREF to: 005c92fa (CONDITIONAL_JUMP)  ; LAB_005c92fa
    ADD EDI,EBX                         ; 005c92e2
        ;   Label: LAB_005c92e2
    CMP EDI,dword ptr [ESI]             ; 005c92e4
        ;   Label: LAB_005c92e4
    JC 0x005c922e                       ; 005c92e6
        ;   XREF to: 005c922e (CONDITIONAL_JUMP)  ; LAB_005c922e
    MOV ECX,0x1                         ; 005c92ec
    MOV EAX,ECX                         ; 005c92f1
    MOV ESP,EBP                         ; 005c92f3
    POP EBP                             ; 005c92f5
    POP EDI                             ; 005c92f6
    POP ESI                             ; 005c92f7
    POP EBX                             ; 005c92f8
    RET                                 ; 005c92f9
    PUSH EBX                            ; 005c92fa
        ;   Label: LAB_005c92fa
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c92fb
    PUSH EAX                            ; 005c92ff
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c9300
    PUSH EDX                            ; 005c9303
    CALL shape_superopt.cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20 ; 005c9304
        ;   XREF to: 005cbe20 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20(CComplexPolygon * this_ptr, SExpandedEdge * edges, int edge_count)
    ADD ESP,0xc                         ; 005c9309
    TEST EAX,EAX                        ; 005c930c
    JZ 0x005c9206                       ; 005c930e
        ;   XREF to: 005c9206 (CONDITIONAL_JUMP)  ; LAB_005c9206
    MOV EDX,dword ptr [ESI]             ; 005c9314
    LEA EAX,[EDI + EBX*0x1]             ; 005c9316
    SUB EDX,EAX                         ; 005c9319
    IMUL EAX,EDX,0x60                   ; 005c931b
    PUSH EAX                            ; 005c931e
    IMUL EAX,EBX,0x60                   ; 005c931f
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c9322
    ADD EAX,ECX                         ; 005c9326
    PUSH EAX                            ; 005c9328
    PUSH ECX                            ; 005c9329
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005c932a
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [ESI]             ; 005c932f
    SUB EDX,EBX                         ; 005c9331
    ADD ESP,0xc                         ; 005c9333
    MOV dword ptr [ESI],EDX             ; 005c9336
    JMP 0x005c92e4                      ; 005c9338
        ;   XREF to: 005c92e4 (UNCONDITIONAL_JUMP)  ; LAB_005c92e4

