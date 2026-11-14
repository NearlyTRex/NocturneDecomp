; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_FUN_00580173(SProjectedVertex *output,CVector3i *input)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   output
; CVector3i *      Stack[0x8]:4   input
;
; XREF[65]:
;   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409940 at 004099cd
;   core_box.cpp_FUN_004207b0 at 004208e2
;   core_box.cpp_FUN_00420990 at 00420a0a
;   core_box.cpp_FUN_00420dc0 at 00420e6d
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425650 at 004256ff
;   core_charactr.cpp_CCharacter_renderCollision_FUN_0042ea10 at 0042ebf9
;   core_cloth.cpp_FUN_00441500 at 004415e6
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0 at 00452f5d
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70 at 0045800c
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045ec60 at 0045ecf9
;   ... and 55 more
;
; Referenced Globals:
;   undefined4 DAT_00623e28
;   undefined4 DAT_00623e2c
;   undefined4 DAT_00623e30
;   undefined4 DAT_00623e38
;   undefined4 DAT_00623e3c
;   undefined4 DAT_00623e40
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d5c
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c51d00],0xffffffff ; 00580173 | DAT_01c51d00
        ;   Label: engine_special.cpp_FUN_00580173
    JZ 0x005802c1                       ; 0058017d
        ;   XREF to: 005802c1 (CONDITIONAL_JUMP)  ; LAB_005802c1
    MOV EBX,dword ptr [ESP + 0x8]       ; 00580183
    MOV EAX,dword ptr [EBX]             ; 00580187
    MOV ECX,dword ptr [EBX + 0x4]       ; 00580189
    MOV EDX,dword ptr [EBX + 0x8]       ; 0058018c
    SUB EAX,dword ptr [0x01c51d2c]      ; 0058018f | DAT_01c51d2c
    SUB ECX,dword ptr [0x01c51d30]      ; 00580195 | DAT_01c51d30
    SUB EDX,dword ptr [0x01c51d34]      ; 0058019b | DAT_01c51d34
    MOVD MM0,EAX                        ; 005801a1
    MOVD MM1,ECX                        ; 005801a4
    MOVD MM2,EDX                        ; 005801a7
    IMUL dword ptr [0x01c51d5c]         ; 005801aa | DAT_01c51d5c
    MOV EBX,EAX                         ; 005801b0
    MOV ECX,EDX                         ; 005801b2
    MOVD EAX,MM1                        ; 005801b4
    IMUL dword ptr [0x01c51d68]         ; 005801b7 | DAT_01c51d68
    ADD EBX,EAX                         ; 005801bd
    ADC ECX,EDX                         ; 005801bf
    MOVD EAX,MM2                        ; 005801c1
    IMUL dword ptr [0x01c51d74]         ; 005801c4 | DAT_01c51d74
    ADD EAX,EBX                         ; 005801ca
    ADC EDX,ECX                         ; 005801cc
    SHRD EAX,EDX,0x10                   ; 005801ce
    MOVD MM4,EAX                        ; 005801d2
    MOVD EAX,MM0                        ; 005801d5
    IMUL dword ptr [0x01c51d60]         ; 005801d8 | DAT_01c51d60
    MOV EBX,EAX                         ; 005801de
    MOV ECX,EDX                         ; 005801e0
    MOVD EAX,MM1                        ; 005801e2
    IMUL dword ptr [0x01c51d6c]         ; 005801e5 | DAT_01c51d6c
    ADD EBX,EAX                         ; 005801eb
    ADC ECX,EDX                         ; 005801ed
    MOVD EAX,MM2                        ; 005801ef
    IMUL dword ptr [0x01c51d78]         ; 005801f2 | DAT_01c51d78
    ADD EAX,EBX                         ; 005801f8
    ADC EDX,ECX                         ; 005801fa
    SHRD EAX,EDX,0x10                   ; 005801fc
    MOVD MM5,EAX                        ; 00580200
    MOVD EAX,MM0                        ; 00580203
    IMUL dword ptr [0x01c51d64]         ; 00580206 | DAT_01c51d64
    MOV EBX,EAX                         ; 0058020c
    MOV ECX,EDX                         ; 0058020e
    MOVD EAX,MM1                        ; 00580210
    IMUL dword ptr [0x01c51d70]         ; 00580213 | DAT_01c51d70
    ADD EBX,EAX                         ; 00580219
    ADC ECX,EDX                         ; 0058021b
    MOVD EAX,MM2                        ; 0058021d
    IMUL dword ptr [0x01c51d7c]         ; 00580220 | DAT_01c51d7c
    ADD EAX,EBX                         ; 00580226
    ADC EDX,ECX                         ; 00580228
    SHRD EAX,EDX,0x10                   ; 0058022a
    MOVD MM6,EAX                        ; 0058022e
    NEG EAX                             ; 00580231
    MOV EDX,EAX                         ; 00580233
    XOR EAX,EAX                         ; 00580235
    MOVD EBX,MM4                        ; 00580237
    MOVD ECX,MM6                        ; 0058023a
    CMP EBX,ECX                         ; 0058023d
    JLE 0x00580246                      ; 0058023f
        ;   XREF to: 00580246 (CONDITIONAL_JUMP)  ; LAB_00580246
    OR EAX,0x80000001                   ; 00580241
    CMP EBX,EDX                         ; 00580246
        ;   Label: LAB_00580246
    JGE 0x0058024f                      ; 00580248
        ;   XREF to: 0058024f (CONDITIONAL_JUMP)  ; LAB_0058024f
    OR EAX,0x80000002                   ; 0058024a
    MOVD EBX,MM5                        ; 0058024f
        ;   Label: LAB_0058024f
    CMP EBX,ECX                         ; 00580252
    JLE 0x0058025b                      ; 00580254
        ;   XREF to: 0058025b (CONDITIONAL_JUMP)  ; LAB_0058025b
    OR EAX,0x80000004                   ; 00580256
    CMP EBX,EDX                         ; 0058025b
        ;   Label: LAB_0058025b
    JGE 0x00580264                      ; 0058025d
        ;   XREF to: 00580264 (CONDITIONAL_JUMP)  ; LAB_00580264
    OR EAX,0x80000008                   ; 0058025f
    CMP ECX,0x0                         ; 00580264
        ;   Label: LAB_00580264
    JG 0x0058026e                       ; 00580267
        ;   XREF to: 0058026e (CONDITIONAL_JUMP)  ; LAB_0058026e
    OR EAX,0x80000010                   ; 00580269
    MOV EBX,dword ptr [ESP + 0x4]       ; 0058026e
        ;   Label: LAB_0058026e
    MOVD dword ptr [EBX],MM4            ; 00580272
    MOVD dword ptr [EBX + 0x4],MM5      ; 00580275
    MOVD dword ptr [EBX + 0x8],MM6      ; 00580279
    TEST EAX,0xffffffff                 ; 0058027d
    JNZ 0x005802bb                      ; 00580282
        ;   XREF to: 005802bb (CONDITIONAL_JUMP)  ; LAB_005802bb
    MOV EAX,0x7fffffff                  ; 00580284
    XOR EDX,EDX                         ; 00580289
    IDIV ECX                            ; 0058028b
    MOV dword ptr [EBX + 0xc],EAX       ; 0058028d
    MOVD EAX,MM4                        ; 00580290
    IMUL dword ptr [0x01c4eff8]         ; 00580293 | DAT_01c4eff8
    IDIV ECX                            ; 00580299
    ADD EAX,dword ptr [0x01c4f000]      ; 0058029b | DAT_01c4f000
    MOV dword ptr [EBX + 0x10],EAX      ; 005802a1
    MOVD EAX,MM5                        ; 005802a4
    IMUL dword ptr [0x01c4effc]         ; 005802a7 | DAT_01c4effc
    IDIV ECX                            ; 005802ad
    ADD EAX,dword ptr [0x01c4f004]      ; 005802af | DAT_01c4f004
    MOV dword ptr [EBX + 0x14],EAX      ; 005802b5
    EMMS                                ; 005802b8
    RET                                 ; 005802ba
    MOV dword ptr [EBX + 0x10],EAX      ; 005802bb
        ;   Label: LAB_005802bb
    EMMS                                ; 005802be
    RET                                 ; 005802c0
    PUSH ESI                            ; 005802c1
        ;   Label: LAB_005802c1
    PUSH EDI                            ; 005802c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005802c3
    MOV EDI,dword ptr [ESP + 0xc]       ; 005802c7
    MOV EAX,dword ptr [ESI]             ; 005802cb
    MOV EBX,dword ptr [ESI + 0x4]       ; 005802cd
    MOV ECX,dword ptr [ESI + 0x8]       ; 005802d0
    SUB EAX,dword ptr [0x01c51d2c]      ; 005802d3 | DAT_01c51d2c
    SUB EBX,dword ptr [0x01c51d30]      ; 005802d9 | DAT_01c51d30
    SUB ECX,dword ptr [0x01c51d34]      ; 005802df | DAT_01c51d34
    MOV [0x00623e28],EAX                ; 005802e5 | DAT_00623e28
    MOV dword ptr [0x00623e2c],EBX      ; 005802ea | DAT_00623e2c
    MOV dword ptr [0x00623e30],ECX      ; 005802f0 | DAT_00623e30
    IMUL dword ptr [0x01c51d5c]         ; 005802f6 | DAT_01c51d5c
    MOV EBX,EAX                         ; 005802fc
    MOV ECX,EDX                         ; 005802fe
    MOV EAX,[0x00623e2c]                ; 00580300 | DAT_00623e2c
    IMUL dword ptr [0x01c51d68]         ; 00580305 | DAT_01c51d68
    ADD EBX,EAX                         ; 0058030b
    ADC ECX,EDX                         ; 0058030d
    MOV EAX,[0x00623e30]                ; 0058030f | DAT_00623e30
    IMUL dword ptr [0x01c51d74]         ; 00580314 | DAT_01c51d74
    ADD EAX,EBX                         ; 0058031a
    ADC EDX,ECX                         ; 0058031c
    SHRD EAX,EDX,0x10                   ; 0058031e
    MOV [0x00623e38],EAX                ; 00580322 | DAT_00623e38
    MOV EAX,[0x00623e28]                ; 00580327 | DAT_00623e28
    IMUL dword ptr [0x01c51d60]         ; 0058032c | DAT_01c51d60
    MOV EBX,EAX                         ; 00580332
    MOV ECX,EDX                         ; 00580334
    MOV EAX,[0x00623e2c]                ; 00580336 | DAT_00623e2c
    IMUL dword ptr [0x01c51d6c]         ; 0058033b | DAT_01c51d6c
    ADD EBX,EAX                         ; 00580341
    ADC ECX,EDX                         ; 00580343
    MOV EAX,[0x00623e30]                ; 00580345 | DAT_00623e30
    IMUL dword ptr [0x01c51d78]         ; 0058034a | DAT_01c51d78
    ADD EAX,EBX                         ; 00580350
    ADC EDX,ECX                         ; 00580352
    SHRD EAX,EDX,0x10                   ; 00580354
    MOV [0x00623e3c],EAX                ; 00580358 | DAT_00623e3c
    MOV EAX,[0x00623e28]                ; 0058035d | DAT_00623e28
    IMUL dword ptr [0x01c51d64]         ; 00580362 | DAT_01c51d64
    MOV EBX,EAX                         ; 00580368
    MOV ECX,EDX                         ; 0058036a
    MOV EAX,[0x00623e2c]                ; 0058036c | DAT_00623e2c
    IMUL dword ptr [0x01c51d70]         ; 00580371 | DAT_01c51d70
    ADD EBX,EAX                         ; 00580377
    ADC ECX,EDX                         ; 00580379
    MOV EAX,[0x00623e30]                ; 0058037b | DAT_00623e30
    IMUL dword ptr [0x01c51d7c]         ; 00580380 | DAT_01c51d7c
    ADD EAX,EBX                         ; 00580386
    ADC EDX,ECX                         ; 00580388
    SHRD EAX,EDX,0x10                   ; 0058038a
    MOV [0x00623e40],EAX                ; 0058038e | DAT_00623e40
    NEG EAX                             ; 00580393
    MOV EDX,EAX                         ; 00580395
    XOR EAX,EAX                         ; 00580397
    MOV EBX,dword ptr [0x00623e38]      ; 00580399 | DAT_00623e38
    MOV ECX,dword ptr [0x00623e40]      ; 0058039f | DAT_00623e40
    CMP EBX,ECX                         ; 005803a5
    JLE 0x005803ae                      ; 005803a7
        ;   XREF to: 005803ae (CONDITIONAL_JUMP)  ; LAB_005803ae
    OR EAX,0x80000001                   ; 005803a9
    CMP EBX,EDX                         ; 005803ae
        ;   Label: LAB_005803ae
    JGE 0x005803b7                      ; 005803b0
        ;   XREF to: 005803b7 (CONDITIONAL_JUMP)  ; LAB_005803b7
    OR EAX,0x80000002                   ; 005803b2
    MOV EBX,dword ptr [0x00623e3c]      ; 005803b7 | DAT_00623e3c
        ;   Label: LAB_005803b7
    CMP EBX,ECX                         ; 005803bd
    JLE 0x005803c6                      ; 005803bf
        ;   XREF to: 005803c6 (CONDITIONAL_JUMP)  ; LAB_005803c6
    OR EAX,0x80000004                   ; 005803c1
    CMP EBX,EDX                         ; 005803c6
        ;   Label: LAB_005803c6
    JGE 0x005803cf                      ; 005803c8
        ;   XREF to: 005803cf (CONDITIONAL_JUMP)  ; LAB_005803cf
    OR EAX,0x80000008                   ; 005803ca
    CMP ECX,0x0                         ; 005803cf
        ;   Label: LAB_005803cf
    JG 0x005803d9                       ; 005803d2
        ;   XREF to: 005803d9 (CONDITIONAL_JUMP)  ; LAB_005803d9
    OR EAX,0x80000010                   ; 005803d4
    TEST EAX,0xffffffff                 ; 005803d9
        ;   Label: LAB_005803d9
    JNZ 0x00580428                      ; 005803de
        ;   XREF to: 00580428 (CONDITIONAL_JUMP)  ; LAB_00580428
    MOV EAX,[0x00623e38]                ; 005803e0 | DAT_00623e38
    MOV dword ptr [EDI],EAX             ; 005803e5
    MOV dword ptr [EDI + 0x4],EBX       ; 005803e7
    MOV dword ptr [EDI + 0x8],ECX       ; 005803ea
    MOV EAX,0x7fffffff                  ; 005803ed
    XOR EDX,EDX                         ; 005803f2
    IDIV ECX                            ; 005803f4
    MOV dword ptr [EDI + 0xc],EAX       ; 005803f6
    MOV EAX,[0x00623e38]                ; 005803f9 | DAT_00623e38
    IMUL dword ptr [0x01c4eff8]         ; 005803fe | DAT_01c4eff8
    IDIV ECX                            ; 00580404
    ADD EAX,dword ptr [0x01c4f000]      ; 00580406 | DAT_01c4f000
    MOV dword ptr [EDI + 0x10],EAX      ; 0058040c
    MOV EAX,[0x00623e3c]                ; 0058040f | DAT_00623e3c
    IMUL dword ptr [0x01c4effc]         ; 00580414 | DAT_01c4effc
    IDIV ECX                            ; 0058041a
    ADD EAX,dword ptr [0x01c4f004]      ; 0058041c | DAT_01c4f004
    MOV dword ptr [EDI + 0x14],EAX      ; 00580422
    POP EDI                             ; 00580425
    POP ESI                             ; 00580426
    RET                                 ; 00580427
    MOV EDX,dword ptr [0x00623e38]      ; 00580428 | DAT_00623e38
        ;   Label: LAB_00580428
    MOV dword ptr [EDI],EDX             ; 0058042e
    MOV dword ptr [EDI + 0x4],EBX       ; 00580430
    MOV dword ptr [EDI + 0x8],ECX       ; 00580433
    MOV dword ptr [EDI + 0x10],EAX      ; 00580436
    POP EDI                             ; 00580439
    POP ESI                             ; 0058043a
    RET                                 ; 0058043b

