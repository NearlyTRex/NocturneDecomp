; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex *vertex0,SRenderVertex *vertex1)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex0
; SRenderVertex *  Stack[0x8]:4   vertex1
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_ProcessorType
;   int g_VertexPreprocessMode
;   int g_ActiveEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeTable
;   undefined4 g_SoftwareEdgeTable[0].base.y_max
;   undefined4 g_SoftwareEdgeTable[0].base.x_current
;   undefined4 g_SoftwareEdgeTable[0].base.x_gradient
;   undefined4 g_SoftwareEdgeTable[0].base.red_current
;   undefined4 g_SoftwareEdgeTable[0].base.red_gradient
;   undefined4 g_SoftwareEdgeTable[0].base.u_current
;   undefined4 g_SoftwareEdgeTable[0].base.u_gradient
;   undefined4 g_SoftwareEdgeTable[0].base.v_current
;   undefined4 g_SoftwareEdgeTable[0].base.v_gradient
;   undefined4 g_SoftwareEdgeTable[0].base.depth_current
;   undefined4 g_SoftwareEdgeTable[0].base.depth_gradient
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553190
        ;   Label: engine_prim.c_setupColoredSoftwareEdge_FUN_00553190
    PUSH ESI                            ; 00553191
    PUSH EDI                            ; 00553192
    PUSH EBP                            ; 00553193
    SUB ESP,0x8                         ; 00553194
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00553197
    MOV EBP,dword ptr [ESP + 0x20]      ; 0055319b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0055319f
    MOV EBX,dword ptr [ESI + 0x14]      ; 005531a2
    SAR EDI,0x10                        ; 005531a5
    SAR EBX,0x10                        ; 005531a8
    CMP EBX,EDI                         ; 005531ab
    JZ 0x005533b3                       ; 005531ad
        ;   XREF to: 005533b3 (CONDITIONAL_JUMP)  ; LAB_005533b3
    MOV EDX,dword ptr [EBP + 0x14]      ; 005531b3
    CMP EDX,dword ptr [ESI + 0x14]      ; 005531b6
    JGE 0x005531c7                      ; 005531b9
        ;   XREF to: 005531c7 (CONDITIONAL_JUMP)  ; LAB_005531c7
    MOV EAX,ESI                         ; 005531bb
    MOV ESI,EBP                         ; 005531bd
    MOV EBP,EAX                         ; 005531bf
    MOV EAX,EBX                         ; 005531c1
    MOV EBX,EDI                         ; 005531c3
    MOV EDI,EAX                         ; 005531c5
    MOV EAX,[0x030e56bc]                ; 005531c7 | g_ActiveEdgeCount
        ;   Label: LAB_005531c7
    LEA ECX,[EAX*0x8 + 0x0]             ; 005531cc
    ADD ECX,EAX                         ; 005531d3
    SHL ECX,0x3                         ; 005531d5
    ADD ECX,0x30e56c0                   ; 005531d8 | g_SoftwareEdgeTable
    MOV dword ptr [ECX],EBX             ; 005531de | g_SoftwareEdgeTable
    MOV EAX,[0x030e5b40]                ; 005531e0 | g_MinScanline
    MOV dword ptr [ECX + 0x4],EDI       ; 005531e5 | g_SoftwareEdgeTable[0].base.y_max
    CMP EBX,EAX                         ; 005531e8
    JGE 0x005531f2                      ; 005531ea
        ;   XREF to: 005531f2 (CONDITIONAL_JUMP)  ; LAB_005531f2
    MOV dword ptr [0x030e5b40],EBX      ; 005531ec | g_MinScanline
    CMP EDI,dword ptr [0x030e5b44]      ; 005531f2 | g_MaxScanline
        ;   Label: LAB_005531f2
    JLE 0x00553200                      ; 005531f8
        ;   XREF to: 00553200 (CONDITIONAL_JUMP)  ; LAB_00553200
    MOV dword ptr [0x030e5b44],EDI      ; 005531fa | g_MaxScanline
    MOV EDI,dword ptr [ESI + 0x14]      ; 00553200
        ;   Label: LAB_00553200
    MOV EBX,dword ptr [EBP + 0x14]      ; 00553203
    SUB EBX,EDI                         ; 00553206
    CMP EBX,0x10000                     ; 00553208
    JNC 0x005533bb                      ; 0055320e
        ;   XREF to: 005533bb (CONDITIONAL_JUMP)  ; LAB_005533bb
    XOR EBX,EBX                         ; 00553214
    MOV EAX,dword ptr [EBP + 0x10]      ; 00553216
        ;   Label: LAB_00553216
    MOV EDX,dword ptr [ESI + 0x10]      ; 00553219
    MOV EDI,dword ptr [ESI + 0x14]      ; 0055321c
    SUB EAX,EDX                         ; 0055321f
    AND EDI,0xffff                      ; 00553221
    MOV EDX,EAX                         ; 00553227
    MOV EAX,EBX                         ; 00553229
    XOR DI,0xffff                       ; 0055322b
    IMUL EDX                            ; 0055322f
    SHRD EAX,EDX,0x10                   ; 00553231
    MOV EDX,EAX                         ; 00553235
    MOV dword ptr [ECX + 0xc],EAX       ; 00553237 | g_SoftwareEdgeTable[0].base.x_gradient
    MOV EAX,EDI                         ; 0055323a
    IMUL EDX                            ; 0055323c
    SHRD EAX,EDX,0x10                   ; 0055323e
    MOV dword ptr [ESP],EAX             ; 00553242
    MOV EDX,dword ptr [ESP]             ; 00553245
    MOV EAX,dword ptr [ESI + 0x10]      ; 00553248
    ADD EAX,EDX                         ; 0055324b
    MOV dword ptr [ECX + 0x8],EAX       ; 0055324d | g_SoftwareEdgeTable[0].base.x_current
    MOV EAX,dword ptr [EBP + 0x18]      ; 00553250
    MOV EDX,dword ptr [ESI + 0x18]      ; 00553253
    SUB EAX,EDX                         ; 00553256
    MOV EDX,EAX                         ; 00553258
    MOV EAX,EBX                         ; 0055325a
    IMUL EDX                            ; 0055325c
    SHRD EAX,EDX,0x10                   ; 0055325e
    MOV EDX,EAX                         ; 00553262
    MOV dword ptr [ECX + 0x1c],EAX      ; 00553264 | g_SoftwareEdgeTable[0].base.u_gradient
    MOV EAX,EDI                         ; 00553267
    IMUL EDX                            ; 00553269
    SHRD EAX,EDX,0x10                   ; 0055326b
    MOV dword ptr [ESP],EAX             ; 0055326f
    MOV EDX,dword ptr [ESP]             ; 00553272
    MOV EAX,dword ptr [ESI + 0x18]      ; 00553275
    ADD EAX,EDX                         ; 00553278
    MOV dword ptr [ECX + 0x18],EAX      ; 0055327a | g_SoftwareEdgeTable[0].base.u_current
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055327d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00553280
    SUB EAX,EDX                         ; 00553283
    MOV EDX,EAX                         ; 00553285
    MOV EAX,EBX                         ; 00553287
    IMUL EDX                            ; 00553289
    SHRD EAX,EDX,0x10                   ; 0055328b
    MOV EDX,EAX                         ; 0055328f
    MOV dword ptr [ECX + 0x24],EAX      ; 00553291 | g_SoftwareEdgeTable[0].base.v_gradient
    MOV EAX,EDI                         ; 00553294
    IMUL EDX                            ; 00553296
    SHRD EAX,EDX,0x10                   ; 00553298
    MOV dword ptr [ESP],EAX             ; 0055329c
    MOV EDX,dword ptr [ESP]             ; 0055329f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 005532a2
    ADD EAX,EDX                         ; 005532a5
    MOV dword ptr [ECX + 0x20],EAX      ; 005532a7 | g_SoftwareEdgeTable[0].base.v_current
    MOV EAX,dword ptr [EBP + 0x20]      ; 005532aa
    MOV EDX,dword ptr [ESI + 0x20]      ; 005532ad
    SUB EAX,EDX                         ; 005532b0
    MOV EDX,EAX                         ; 005532b2
    MOV EAX,EBX                         ; 005532b4
    IMUL EDX                            ; 005532b6
    SHRD EAX,EDX,0x10                   ; 005532b8
    MOV EDX,EAX                         ; 005532bc
    MOV dword ptr [ECX + 0x14],EAX      ; 005532be | g_SoftwareEdgeTable[0].base.red_gradient
    MOV EAX,EDI                         ; 005532c1
    IMUL EDX                            ; 005532c3
    SHRD EAX,EDX,0x10                   ; 005532c5
    MOV dword ptr [ESP],EAX             ; 005532c9
    MOV EDX,dword ptr [ESP]             ; 005532cc
    MOV EAX,dword ptr [ESI + 0x20]      ; 005532cf
    ADD EAX,EDX                         ; 005532d2
    MOV dword ptr [ECX + 0x10],EAX      ; 005532d4 | g_SoftwareEdgeTable[0].base.red_current
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005532d7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 005532da
    SUB EAX,EDX                         ; 005532dd
    MOV EDX,EAX                         ; 005532df
    MOV EAX,EBX                         ; 005532e1
    IMUL EDX                            ; 005532e3
    SHRD EAX,EDX,0x10                   ; 005532e5
    MOV EDX,EAX                         ; 005532e9
    MOV dword ptr [ECX + 0x34],EAX      ; 005532eb | g_SoftwareEdgeTable[0].base.alpha_gradient
    MOV EAX,EDI                         ; 005532ee
    IMUL EDX                            ; 005532f0
    SHRD EAX,EDX,0x10                   ; 005532f2
    MOV dword ptr [ESP],EAX             ; 005532f6
    MOV EDX,dword ptr [ESP]             ; 005532f9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 005532fc
    ADD EAX,EDX                         ; 005532ff
    MOV dword ptr [ECX + 0x30],EAX      ; 00553301 | g_SoftwareEdgeTable[0].base.alpha_current
    CMP dword ptr [0x02d052a4],0x1      ; 00553304 | g_VertexPreprocessMode
    JNZ 0x005533da                      ; 0055330b
        ;   XREF to: 005533da (CONDITIONAL_JUMP)  ; LAB_005533da
    CMP dword ptr [0x02d0529c],0x0      ; 00553311 | g_ProcessorType
    JZ 0x005533cb                       ; 00553318
        ;   XREF to: 005533cb (CONDITIONAL_JUMP)  ; LAB_005533cb
    MOV EAX,0x7fffffff                  ; 0055331e
    SUB EAX,dword ptr [ESI + 0x8]       ; 00553323
    MOV EDX,0x7fffffff                  ; 00553326
    MOV dword ptr [ESP + 0x4],EAX       ; 0055332b
    SUB EDX,dword ptr [EBP + 0x8]       ; 0055332f
    SUB EDX,dword ptr [ESP + 0x4]       ; 00553332
        ;   Label: LAB_00553332
    MOV EAX,EBX                         ; 00553336
    IMUL EDX                            ; 00553338
    SHRD EAX,EDX,0x10                   ; 0055333a
    MOV EDX,EAX                         ; 0055333e
    MOV dword ptr [ECX + 0x2c],EAX      ; 00553340 | g_SoftwareEdgeTable[0].base.depth_gradient
    MOV EAX,EDI                         ; 00553343
    IMUL EDX                            ; 00553345
    SHRD EAX,EDX,0x10                   ; 00553347
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055334b
    ADD EDX,EAX                         ; 0055334f
    MOV dword ptr [ECX + 0x28],EDX      ; 00553351 | g_SoftwareEdgeTable[0].base.depth_current
    MOV EAX,dword ptr [EBP + 0x24]      ; 00553354
        ;   Label: LAB_00553354
    MOV EDX,dword ptr [ESI + 0x24]      ; 00553357
    SUB EAX,EDX                         ; 0055335a
    MOV EDX,EAX                         ; 0055335c
    MOV EAX,EBX                         ; 0055335e
    IMUL EDX                            ; 00553360
    SHRD EAX,EDX,0x10                   ; 00553362
    MOV EDX,EAX                         ; 00553366
    MOV dword ptr [ECX + 0x3c],EAX      ; 00553368 | g_SoftwareEdgeTable[0].green_gradient
    MOV EAX,EDI                         ; 0055336b
    IMUL EDX                            ; 0055336d
    SHRD EAX,EDX,0x10                   ; 0055336f
    MOV dword ptr [ESP],EAX             ; 00553373
    MOV EDX,dword ptr [ESP]             ; 00553376
    MOV EAX,dword ptr [ESI + 0x24]      ; 00553379
    ADD EAX,EDX                         ; 0055337c
    MOV dword ptr [ECX + 0x38],EAX      ; 0055337e | g_SoftwareEdgeTable[0].green_current
    MOV EDX,dword ptr [EBP + 0x28]      ; 00553381
    SUB EDX,dword ptr [ESI + 0x28]      ; 00553384
    MOV EAX,EBX                         ; 00553387
    IMUL EDX                            ; 00553389
    SHRD EAX,EDX,0x10                   ; 0055338b
    MOV EDX,EAX                         ; 0055338f
    MOV dword ptr [ECX + 0x44],EAX      ; 00553391 | g_SoftwareEdgeTable[0].blue_gradient
    MOV EAX,EDI                         ; 00553394
    IMUL EDX                            ; 00553396
    SHRD EAX,EDX,0x10                   ; 00553398
    MOV EDX,EAX                         ; 0055339c
    MOV EAX,dword ptr [ESI + 0x28]      ; 0055339e
    ADD EAX,EDX                         ; 005533a1
    MOV EDX,dword ptr [0x030e56bc]      ; 005533a3 | g_ActiveEdgeCount
    INC EDX                             ; 005533a9
    MOV dword ptr [ECX + 0x40],EAX      ; 005533aa | g_SoftwareEdgeTable[0].blue_current
    MOV dword ptr [0x030e56bc],EDX      ; 005533ad | g_ActiveEdgeCount
    ADD ESP,0x8                         ; 005533b3
        ;   Label: LAB_005533b3
    POP EBP                             ; 005533b6
    POP EDI                             ; 005533b7
    POP ESI                             ; 005533b8
    POP EBX                             ; 005533b9
    RET                                 ; 005533ba
    MOV EAX,0xffffffff                  ; 005533bb
        ;   Label: LAB_005533bb
    XOR EDX,EDX                         ; 005533c0
    DIV EBX                             ; 005533c2
    MOV EBX,EAX                         ; 005533c4
    JMP 0x00553216                      ; 005533c6
        ;   XREF to: 00553216 (UNCONDITIONAL_JUMP)  ; LAB_00553216
    MOV EAX,dword ptr [ESI + 0xc]       ; 005533cb
        ;   Label: LAB_005533cb
    MOV EDX,dword ptr [EBP + 0xc]       ; 005533ce
    MOV dword ptr [ESP + 0x4],EAX       ; 005533d1
    JMP 0x00553332                      ; 005533d5
        ;   XREF to: 00553332 (UNCONDITIONAL_JUMP)  ; LAB_00553332
    MOV EAX,dword ptr [EBP + 0x8]       ; 005533da
        ;   Label: LAB_005533da
    MOV EDX,dword ptr [ESI + 0x8]       ; 005533dd
    SUB EAX,EDX                         ; 005533e0
    MOV EDX,EAX                         ; 005533e2
    MOV EAX,EBX                         ; 005533e4
    IMUL EDX                            ; 005533e6
    SHRD EAX,EDX,0x10                   ; 005533e8
    MOV EDX,EAX                         ; 005533ec
    MOV dword ptr [ECX + 0x2c],EAX      ; 005533ee | g_SoftwareEdgeTable[0].base.depth_gradient
    MOV EAX,EDI                         ; 005533f1
    IMUL EDX                            ; 005533f3
    SHRD EAX,EDX,0x10                   ; 005533f5
    MOV dword ptr [ESP],EAX             ; 005533f9
    MOV EDX,dword ptr [ESP]             ; 005533fc
    MOV EAX,dword ptr [ESI + 0x8]       ; 005533ff
    ADD EAX,EDX                         ; 00553402
    MOV dword ptr [ECX + 0x28],EAX      ; 00553404 | g_SoftwareEdgeTable[0].base.depth_current
    JMP 0x00553354                      ; 00553407
        ;   XREF to: 00553354 (UNCONDITIONAL_JUMP)  ; LAB_00553354

