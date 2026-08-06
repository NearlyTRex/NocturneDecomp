; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270 at 0045f39b
;
; Referenced Globals:
;   undefined4 DAT_005b0680
;   undefined4 DAT_005b0684
;   undefined4 DAT_005b0688
;   undefined4 DAT_005b068c
;   undefined4 DAT_005b0690
;   undefined4 DAT_005b0694
;   undefined4 DAT_005b0698
;   undefined4 DAT_005b069c
;   undefined4 DAT_005b06a0
;   undefined4 DAT_005b06a4
;   undefined4 DAT_005b06a8
;   undefined4 DAT_005b06ac
;   undefined4 DAT_005b06b0
;   undefined4 DAT_005b06b4
;   undefined4 DAT_005b06b8
;   ... and 41 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00464200
        ;   Label: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200
    PUSH EDI                            ; 00464201
    PUSH EBP                            ; 00464202
    MOV EAX,dword ptr [ESI + 0x8]       ; 00464203
    MOV ECX,dword ptr [EDI + 0x8]       ; 00464206
    CMP EAX,ECX                         ; 00464209
    JBE 0x00464210                      ; 0046420b
        ;   XREF to: 00464210 (CONDITIONAL_JUMP)  ; LAB_00464210
    XCHG EAX,ECX                        ; 0046420d
    XCHG EDI,ESI                        ; 0046420e
    SHR EAX,0x10                        ; 00464210
        ;   Label: LAB_00464210
    SHR ECX,0x10                        ; 00464213
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 00464216 | DAT_01bd4260
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 0046421d | DAT_01bd2fa0
    SUB ECX,EAX                         ; 00464224
    JLE 0x004649d9                      ; 00464226
        ;   XREF to: 004649d9 (CONDITIONAL_JUMP)  ; LAB_004649d9
    SHL EAX,0x2                         ; 0046422c
    ADD EBX,EAX                         ; 0046422f
    ADD EBP,EAX                         ; 00464231
    MOV dword ptr [0x005b06e0],EBX      ; 00464233 | DAT_005b06e0
    MOV dword ptr [0x005b06e4],ECX      ; 00464239 | DAT_005b06e4
    MOV dword ptr [0x005b06e8],EBP      ; 0046423f | DAT_005b06e8
    MOV EBX,dword ptr [ESI + 0x18]      ; 00464245
    MOV EAX,dword ptr [EDI + 0x18]      ; 00464248
    MOV dword ptr [0x005b0680],EBX      ; 0046424b | DAT_005b0680
    MOV [0x005b0698],EAX                ; 00464251 | DAT_005b0698
    SUB EAX,EBX                         ; 00464256
    IMUL dword ptr [ECX*0x4 + 0x1c00c84] ; 00464258 | g_ReciprocalLookupTable[1]
    SHL EDX,0x4                         ; 0046425f
    MOV dword ptr [0x005b06a4],EDX      ; 00464262 | DAT_005b06a4
    MOV EBX,dword ptr [ESI + 0x20]      ; 00464268
    MOV EAX,dword ptr [EDI + 0x20]      ; 0046426b
    MOV dword ptr [0x005b0684],EBX      ; 0046426e | DAT_005b0684
    MOV [0x005b069c],EAX                ; 00464274 | DAT_005b069c
    SUB EAX,EBX                         ; 00464279
    IMUL dword ptr [ECX*0x4 + 0x1c00c84] ; 0046427b | g_ReciprocalLookupTable[1]
    SHL EDX,0x4                         ; 00464282
    MOV dword ptr [0x005b06a8],EDX      ; 00464285 | DAT_005b06a8
    MOV EBX,dword ptr [ESI + 0x28]      ; 0046428b
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046428e
    MOV dword ptr [0x005b0688],EBX      ; 00464291 | DAT_005b0688
    MOV [0x005b06a0],EAX                ; 00464297 | DAT_005b06a0
    SUB EAX,EBX                         ; 0046429c
    IMUL dword ptr [ECX*0x4 + 0x1c00c84] ; 0046429e | g_ReciprocalLookupTable[1]
    SHL EDX,0x4                         ; 004642a5
    MOV dword ptr [0x005b06ac],EDX      ; 004642a8 | DAT_005b06ac
    MOV EAX,[0x005b0680]                ; 004642ae | DAT_005b0680
    MOV EBX,dword ptr [0x005b0688]      ; 004642b3 | DAT_005b0688
    CDQ                                 ; 004642b9
    SHLD EDX,EAX,0x18                   ; 004642ba
    SHL EAX,0x18                        ; 004642be
    IDIV EBX                            ; 004642c1
    MOV [0x005b06b0],EAX                ; 004642c3 | DAT_005b06b0
    MOV EAX,[0x005b0684]                ; 004642c8 | DAT_005b0684
    MOV EBX,dword ptr [0x005b0688]      ; 004642cd | DAT_005b0688
    CDQ                                 ; 004642d3
    SHLD EDX,EAX,0x18                   ; 004642d4
    SHL EAX,0x18                        ; 004642d8
    IDIV EBX                            ; 004642db
    MOV [0x005b06b4],EAX                ; 004642dd | DAT_005b06b4
    PUSH dword ptr [0x005b0688]         ; 004642e2 | DAT_005b0688
    MOV EDI,0x5b06ec                    ; 004642e8 | DAT_005b06ec
    SUB ECX,0x10                        ; 004642ed
        ;   Label: LAB_004642ed
    JS 0x004645cf                       ; 004642f0
        ;   XREF to: 004645cf (CONDITIONAL_JUMP)  ; LAB_004645cf
    MOV EAX,[0x005b0680]                ; 004642f6 | DAT_005b0680
    MOV EBX,dword ptr [0x005b0684]      ; 004642fb | DAT_005b0684
    MOV EDX,dword ptr [0x005b0688]      ; 00464301 | DAT_005b0688
    ADD EAX,dword ptr [0x005b06a4]      ; 00464307 | DAT_005b06a4
    ADD EBX,dword ptr [0x005b06a8]      ; 0046430d | DAT_005b06a8
    ADD EDX,dword ptr [0x005b06ac]      ; 00464313 | DAT_005b06ac
    MOV [0x005b068c],EAX                ; 00464319 | DAT_005b068c
    MOV dword ptr [0x005b0690],EBX      ; 0046431e | DAT_005b0690
    MOV dword ptr [0x005b0694],EDX      ; 00464324 | DAT_005b0694
    MOV EAX,[0x005b068c]                ; 0046432a | DAT_005b068c
    MOV EBX,dword ptr [0x005b0694]      ; 0046432f | DAT_005b0694
    CDQ                                 ; 00464335
    SHLD EDX,EAX,0x18                   ; 00464336
    SHL EAX,0x18                        ; 0046433a
    IDIV EBX                            ; 0046433d
    MOV [0x005b06b8],EAX                ; 0046433f | DAT_005b06b8
    MOV EAX,[0x005b0690]                ; 00464344 | DAT_005b0690
    MOV EBX,dword ptr [0x005b0694]      ; 00464349 | DAT_005b0694
    CDQ                                 ; 0046434f
    SHLD EDX,EAX,0x18                   ; 00464350
    SHL EAX,0x18                        ; 00464354
    IDIV EBX                            ; 00464357
    MOV [0x005b06bc],EAX                ; 00464359 | DAT_005b06bc
    PUSH ECX                            ; 0046435e
    MOV EBX,dword ptr [0x01c02580]      ; 0046435f | DAT_01c02580
    MOV ECX,dword ptr [0x005b06b0]      ; 00464365 | DAT_005b06b0
    MOV EDX,dword ptr [0x005b06b4]      ; 0046436b | DAT_005b06b4
    MOV ESI,dword ptr [0x005b06b8]      ; 00464371 | DAT_005b06b8
    MOV EBP,dword ptr [0x005b06bc]      ; 00464377 | DAT_005b06bc
    SUB ESI,ECX                         ; 0046437d
    SUB EBP,EDX                         ; 0046437f
    SAR ECX,0x8                         ; 00464381
    SAR EDX,0x8                         ; 00464384
    SAR ESI,0xc                         ; 00464387
    SAR EBP,0xc                         ; 0046438a
    MOV EBX,0x0                         ; 0046438d
    MOV BL,CH                           ; 00464392
    MOV BH,DH                           ; 00464394
    ADD EBX,dword ptr [0x01c02580]      ; 00464396 | DAT_01c02580
    ADD ECX,ESI                         ; 0046439c
    MOVZX EAX,byte ptr [EBX]            ; 0046439e
    ADD EDX,EBP                         ; 004643a1
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004643a3 | DAT_01c00024
    MOV dword ptr [EDI],EAX             ; 004643aa | DAT_005b06ec
    MOV EBX,0x0                         ; 004643ac
    MOV BL,CH                           ; 004643b1
    MOV BH,DH                           ; 004643b3
    ADD EBX,dword ptr [0x01c02580]      ; 004643b5 | DAT_01c02580
    ADD ECX,ESI                         ; 004643bb
    MOVZX EAX,byte ptr [EBX]            ; 004643bd
    ADD EDX,EBP                         ; 004643c0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004643c2 | DAT_01c00024
    MOV dword ptr [EDI + 0x4],EAX       ; 004643c9 | DAT_005b06f0
    MOV EBX,0x0                         ; 004643cc
    MOV BL,CH                           ; 004643d1
    MOV BH,DH                           ; 004643d3
    ADD EBX,dword ptr [0x01c02580]      ; 004643d5 | DAT_01c02580
    ADD ECX,ESI                         ; 004643db
    MOVZX EAX,byte ptr [EBX]            ; 004643dd
    ADD EDX,EBP                         ; 004643e0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004643e2 | DAT_01c00024
    MOV dword ptr [EDI + 0x8],EAX       ; 004643e9 | DAT_005b06f4
    MOV EBX,0x0                         ; 004643ec
    MOV BL,CH                           ; 004643f1
    MOV BH,DH                           ; 004643f3
    ADD EBX,dword ptr [0x01c02580]      ; 004643f5 | DAT_01c02580
    ADD ECX,ESI                         ; 004643fb
    MOVZX EAX,byte ptr [EBX]            ; 004643fd
    ADD EDX,EBP                         ; 00464400
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464402 | DAT_01c00024
    MOV dword ptr [EDI + 0xc],EAX       ; 00464409 | DAT_005b06f8
    MOV EBX,0x0                         ; 0046440c
    MOV BL,CH                           ; 00464411
    MOV BH,DH                           ; 00464413
    ADD EBX,dword ptr [0x01c02580]      ; 00464415 | DAT_01c02580
    ADD ECX,ESI                         ; 0046441b
    MOVZX EAX,byte ptr [EBX]            ; 0046441d
    ADD EDX,EBP                         ; 00464420
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464422 | DAT_01c00024
    MOV dword ptr [EDI + 0x10],EAX      ; 00464429 | DAT_005b06fc
    MOV EBX,0x0                         ; 0046442c
    MOV BL,CH                           ; 00464431
    MOV BH,DH                           ; 00464433
    ADD EBX,dword ptr [0x01c02580]      ; 00464435 | DAT_01c02580
    ADD ECX,ESI                         ; 0046443b
    MOVZX EAX,byte ptr [EBX]            ; 0046443d
    ADD EDX,EBP                         ; 00464440
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464442 | DAT_01c00024
    MOV dword ptr [EDI + 0x14],EAX      ; 00464449 | DAT_005b0700
    MOV EBX,0x0                         ; 0046444c
    MOV BL,CH                           ; 00464451
    MOV BH,DH                           ; 00464453
    ADD EBX,dword ptr [0x01c02580]      ; 00464455 | DAT_01c02580
    ADD ECX,ESI                         ; 0046445b
    MOVZX EAX,byte ptr [EBX]            ; 0046445d
    ADD EDX,EBP                         ; 00464460
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464462 | DAT_01c00024
    MOV dword ptr [EDI + 0x18],EAX      ; 00464469 | DAT_005b0704
    MOV EBX,0x0                         ; 0046446c
    MOV BL,CH                           ; 00464471
    MOV BH,DH                           ; 00464473
    ADD EBX,dword ptr [0x01c02580]      ; 00464475 | DAT_01c02580
    ADD ECX,ESI                         ; 0046447b
    MOVZX EAX,byte ptr [EBX]            ; 0046447d
    ADD EDX,EBP                         ; 00464480
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464482 | DAT_01c00024
    MOV dword ptr [EDI + 0x1c],EAX      ; 00464489 | DAT_005b0708
    MOV EBX,0x0                         ; 0046448c
    MOV BL,CH                           ; 00464491
    MOV BH,DH                           ; 00464493
    ADD EBX,dword ptr [0x01c02580]      ; 00464495 | DAT_01c02580
    ADD ECX,ESI                         ; 0046449b
    MOVZX EAX,byte ptr [EBX]            ; 0046449d
    ADD EDX,EBP                         ; 004644a0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004644a2 | DAT_01c00024
    MOV dword ptr [EDI + 0x20],EAX      ; 004644a9 | DAT_005b070c
    MOV EBX,0x0                         ; 004644ac
    MOV BL,CH                           ; 004644b1
    MOV BH,DH                           ; 004644b3
    ADD EBX,dword ptr [0x01c02580]      ; 004644b5 | DAT_01c02580
    ADD ECX,ESI                         ; 004644bb
    MOVZX EAX,byte ptr [EBX]            ; 004644bd
    ADD EDX,EBP                         ; 004644c0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004644c2 | DAT_01c00024
    MOV dword ptr [EDI + 0x24],EAX      ; 004644c9 | DAT_005b0710
    MOV EBX,0x0                         ; 004644cc
    MOV BL,CH                           ; 004644d1
    MOV BH,DH                           ; 004644d3
    ADD EBX,dword ptr [0x01c02580]      ; 004644d5 | DAT_01c02580
    ADD ECX,ESI                         ; 004644db
    MOVZX EAX,byte ptr [EBX]            ; 004644dd
    ADD EDX,EBP                         ; 004644e0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004644e2 | DAT_01c00024
    MOV dword ptr [EDI + 0x28],EAX      ; 004644e9 | DAT_005b0714
    MOV EBX,0x0                         ; 004644ec
    MOV BL,CH                           ; 004644f1
    MOV BH,DH                           ; 004644f3
    ADD EBX,dword ptr [0x01c02580]      ; 004644f5 | DAT_01c02580
    ADD ECX,ESI                         ; 004644fb
    MOVZX EAX,byte ptr [EBX]            ; 004644fd
    ADD EDX,EBP                         ; 00464500
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464502 | DAT_01c00024
    MOV dword ptr [EDI + 0x2c],EAX      ; 00464509 | DAT_005b0718
    MOV EBX,0x0                         ; 0046450c
    MOV BL,CH                           ; 00464511
    MOV BH,DH                           ; 00464513
    ADD EBX,dword ptr [0x01c02580]      ; 00464515 | DAT_01c02580
    ADD ECX,ESI                         ; 0046451b
    MOVZX EAX,byte ptr [EBX]            ; 0046451d
    ADD EDX,EBP                         ; 00464520
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464522 | DAT_01c00024
    MOV dword ptr [EDI + 0x30],EAX      ; 00464529 | DAT_005b071c
    MOV EBX,0x0                         ; 0046452c
    MOV BL,CH                           ; 00464531
    MOV BH,DH                           ; 00464533
    ADD EBX,dword ptr [0x01c02580]      ; 00464535 | DAT_01c02580
    ADD ECX,ESI                         ; 0046453b
    MOVZX EAX,byte ptr [EBX]            ; 0046453d
    ADD EDX,EBP                         ; 00464540
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464542 | DAT_01c00024
    MOV dword ptr [EDI + 0x34],EAX      ; 00464549 | DAT_005b0720
    MOV EBX,0x0                         ; 0046454c
    MOV BL,CH                           ; 00464551
    MOV BH,DH                           ; 00464553
    ADD EBX,dword ptr [0x01c02580]      ; 00464555 | DAT_01c02580
    ADD ECX,ESI                         ; 0046455b
    MOVZX EAX,byte ptr [EBX]            ; 0046455d
    ADD EDX,EBP                         ; 00464560
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464562 | DAT_01c00024
    MOV dword ptr [EDI + 0x38],EAX      ; 00464569 | DAT_005b0724
    MOV EBX,0x0                         ; 0046456c
    MOV BL,CH                           ; 00464571
    MOV BH,DH                           ; 00464573
    ADD EBX,dword ptr [0x01c02580]      ; 00464575 | DAT_01c02580
    ADD ECX,ESI                         ; 0046457b
    MOVZX EAX,byte ptr [EBX]            ; 0046457d
    ADD EDX,EBP                         ; 00464580
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464582 | DAT_01c00024
    MOV dword ptr [EDI + 0x3c],EAX      ; 00464589 | DAT_005b0728
    POP ECX                             ; 0046458c
    ADD EDI,0x40                        ; 0046458d
    MOV EAX,[0x005b068c]                ; 00464590 | DAT_005b068c
    MOV EBX,dword ptr [0x005b0690]      ; 00464595 | DAT_005b0690
    MOV EDX,dword ptr [0x005b0694]      ; 0046459b | DAT_005b0694
    MOV ESI,dword ptr [0x005b06b8]      ; 004645a1 | DAT_005b06b8
    MOV EBP,dword ptr [0x005b06bc]      ; 004645a7 | DAT_005b06bc
    MOV [0x005b0680],EAX                ; 004645ad | DAT_005b0680
    MOV dword ptr [0x005b0684],EBX      ; 004645b2 | DAT_005b0684
    MOV dword ptr [0x005b0688],EDX      ; 004645b8 | DAT_005b0688
    MOV dword ptr [0x005b06b0],ESI      ; 004645be | DAT_005b06b0
    MOV dword ptr [0x005b06b4],EBP      ; 004645c4 | DAT_005b06b4
    JMP 0x004642ed                      ; 004645ca
        ;   XREF to: 004642ed (UNCONDITIONAL_JUMP)  ; LAB_004642ed
    ADD ECX,0x10                        ; 004645cf
        ;   Label: LAB_004645cf
    JS 0x0046490c                       ; 004645d2
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EAX,[0x005b0698]                ; 004645d8 | DAT_005b0698
    MOV EBX,dword ptr [0x005b06a0]      ; 004645dd | DAT_005b06a0
    CDQ                                 ; 004645e3
    SHLD EDX,EAX,0x18                   ; 004645e4
    SHL EAX,0x18                        ; 004645e8
    IDIV EBX                            ; 004645eb
    MOV [0x005b06b8],EAX                ; 004645ed | DAT_005b06b8
    MOV EAX,[0x005b069c]                ; 004645f2 | DAT_005b069c
    MOV EBX,dword ptr [0x005b06a0]      ; 004645f7 | DAT_005b06a0
    CDQ                                 ; 004645fd
    SHLD EDX,EAX,0x18                   ; 004645fe
    SHL EAX,0x18                        ; 00464602
    IDIV EBX                            ; 00464605
    MOV [0x005b06bc],EAX                ; 00464607 | DAT_005b06bc
    MOV EAX,[0x005b06b8]                ; 0046460c | DAT_005b06b8
    SUB EAX,dword ptr [0x005b06b0]      ; 00464611 | DAT_005b06b0
    IMUL dword ptr [ECX*0x4 + 0x1c00c84] ; 00464617 | g_ReciprocalLookupTable[1]
    SAR EDX,0x8                         ; 0046461e
    MOV ESI,EDX                         ; 00464621
    MOV EAX,[0x005b06bc]                ; 00464623 | DAT_005b06bc
    SUB EAX,dword ptr [0x005b06b4]      ; 00464628 | DAT_005b06b4
    IMUL dword ptr [ECX*0x4 + 0x1c00c84] ; 0046462e | g_ReciprocalLookupTable[1]
    SAR EDX,0x8                         ; 00464635
    MOV EBP,EDX                         ; 00464638
    MOV EBX,dword ptr [0x01c02580]      ; 0046463a | DAT_01c02580
    SHL ECX,0x10                        ; 00464640
    AND ESI,0xffff                      ; 00464643
    MOV EDX,dword ptr [0x005b06b4]      ; 00464649 | DAT_005b06b4
    OR ESI,ECX                          ; 0046464f
    MOV ECX,dword ptr [0x005b06b0]      ; 00464651 | DAT_005b06b0
    SAR ECX,0x8                         ; 00464657
    SAR EDX,0x8                         ; 0046465a
    MOV EBX,0x0                         ; 0046465d
    MOV BL,CH                           ; 00464662
    MOV BH,DH                           ; 00464664
    ADD EBX,dword ptr [0x01c02580]      ; 00464666 | DAT_01c02580
    ADD ECX,ESI                         ; 0046466c
    MOVZX EAX,byte ptr [EBX]            ; 0046466e
    ADD EDX,EBP                         ; 00464671
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464673 | DAT_01c00024
    MOV dword ptr [EDI],EAX             ; 0046467a | DAT_005b072c
    SUB ESI,0x10000                     ; 0046467c
    JS 0x0046490c                       ; 00464682
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 00464688
    MOV BL,CH                           ; 0046468d
    MOV BH,DH                           ; 0046468f
    ADD EBX,dword ptr [0x01c02580]      ; 00464691 | DAT_01c02580
    ADD ECX,ESI                         ; 00464697
    MOVZX EAX,byte ptr [EBX]            ; 00464699
    ADD EDX,EBP                         ; 0046469c
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0046469e | DAT_01c00024
    MOV dword ptr [EDI + 0x4],EAX       ; 004646a5 | DAT_005b0730
    SUB ESI,0x10000                     ; 004646a8
    JS 0x0046490c                       ; 004646ae
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 004646b4
    MOV BL,CH                           ; 004646b9
    MOV BH,DH                           ; 004646bb
    ADD EBX,dword ptr [0x01c02580]      ; 004646bd | DAT_01c02580
    ADD ECX,ESI                         ; 004646c3
    MOVZX EAX,byte ptr [EBX]            ; 004646c5
    ADD EDX,EBP                         ; 004646c8
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004646ca | DAT_01c00024
    MOV dword ptr [EDI + 0x8],EAX       ; 004646d1 | DAT_005b0734
    SUB ESI,0x10000                     ; 004646d4
    JS 0x0046490c                       ; 004646da
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 004646e0
    MOV BL,CH                           ; 004646e5
    MOV BH,DH                           ; 004646e7
    ADD EBX,dword ptr [0x01c02580]      ; 004646e9 | DAT_01c02580
    ADD ECX,ESI                         ; 004646ef
    MOVZX EAX,byte ptr [EBX]            ; 004646f1
    ADD EDX,EBP                         ; 004646f4
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004646f6 | DAT_01c00024
    MOV dword ptr [EDI + 0xc],EAX       ; 004646fd | DAT_005b0738
    SUB ESI,0x10000                     ; 00464700
    JS 0x0046490c                       ; 00464706
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 0046470c
    MOV BL,CH                           ; 00464711
    MOV BH,DH                           ; 00464713
    ADD EBX,dword ptr [0x01c02580]      ; 00464715 | DAT_01c02580
    ADD ECX,ESI                         ; 0046471b
    MOVZX EAX,byte ptr [EBX]            ; 0046471d
    ADD EDX,EBP                         ; 00464720
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464722 | DAT_01c00024
    MOV dword ptr [EDI + 0x10],EAX      ; 00464729 | DAT_005b073c
    SUB ESI,0x10000                     ; 0046472c
    JS 0x0046490c                       ; 00464732
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 00464738
    MOV BL,CH                           ; 0046473d
    MOV BH,DH                           ; 0046473f
    ADD EBX,dword ptr [0x01c02580]      ; 00464741 | DAT_01c02580
    ADD ECX,ESI                         ; 00464747
    MOVZX EAX,byte ptr [EBX]            ; 00464749
    ADD EDX,EBP                         ; 0046474c
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0046474e | DAT_01c00024
    MOV dword ptr [EDI + 0x14],EAX      ; 00464755 | DAT_005b0740
    SUB ESI,0x10000                     ; 00464758
    JS 0x0046490c                       ; 0046475e
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 00464764
    MOV BL,CH                           ; 00464769
    MOV BH,DH                           ; 0046476b
    ADD EBX,dword ptr [0x01c02580]      ; 0046476d | DAT_01c02580
    ADD ECX,ESI                         ; 00464773
    MOVZX EAX,byte ptr [EBX]            ; 00464775
    ADD EDX,EBP                         ; 00464778
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0046477a | DAT_01c00024
    MOV dword ptr [EDI + 0x18],EAX      ; 00464781 | DAT_005b0744
    SUB ESI,0x10000                     ; 00464784
    JS 0x0046490c                       ; 0046478a
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 00464790
    MOV BL,CH                           ; 00464795
    MOV BH,DH                           ; 00464797
    ADD EBX,dword ptr [0x01c02580]      ; 00464799 | DAT_01c02580
    ADD ECX,ESI                         ; 0046479f
    MOVZX EAX,byte ptr [EBX]            ; 004647a1
    ADD EDX,EBP                         ; 004647a4
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004647a6 | DAT_01c00024
    MOV dword ptr [EDI + 0x1c],EAX      ; 004647ad | DAT_005b0748
    SUB ESI,0x10000                     ; 004647b0
    JS 0x0046490c                       ; 004647b6
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 004647bc
    MOV BL,CH                           ; 004647c1
    MOV BH,DH                           ; 004647c3
    ADD EBX,dword ptr [0x01c02580]      ; 004647c5 | DAT_01c02580
    ADD ECX,ESI                         ; 004647cb
    MOVZX EAX,byte ptr [EBX]            ; 004647cd
    ADD EDX,EBP                         ; 004647d0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004647d2 | DAT_01c00024
    MOV dword ptr [EDI + 0x20],EAX      ; 004647d9 | DAT_005b074c
    SUB ESI,0x10000                     ; 004647dc
    JS 0x0046490c                       ; 004647e2
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 004647e8
    MOV BL,CH                           ; 004647ed
    MOV BH,DH                           ; 004647ef
    ADD EBX,dword ptr [0x01c02580]      ; 004647f1 | DAT_01c02580
    ADD ECX,ESI                         ; 004647f7
    MOVZX EAX,byte ptr [EBX]            ; 004647f9
    ADD EDX,EBP                         ; 004647fc
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004647fe | DAT_01c00024
    MOV dword ptr [EDI + 0x24],EAX      ; 00464805 | DAT_005b0750
    SUB ESI,0x10000                     ; 00464808
    JS 0x0046490c                       ; 0046480e
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 00464814
    MOV BL,CH                           ; 00464819
    MOV BH,DH                           ; 0046481b
    ADD EBX,dword ptr [0x01c02580]      ; 0046481d | DAT_01c02580
    ADD ECX,ESI                         ; 00464823
    MOVZX EAX,byte ptr [EBX]            ; 00464825
    ADD EDX,EBP                         ; 00464828
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0046482a | DAT_01c00024
    MOV dword ptr [EDI + 0x28],EAX      ; 00464831 | DAT_005b0754
    SUB ESI,0x10000                     ; 00464834
    JS 0x0046490c                       ; 0046483a
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 00464840
    MOV BL,CH                           ; 00464845
    MOV BH,DH                           ; 00464847
    ADD EBX,dword ptr [0x01c02580]      ; 00464849 | DAT_01c02580
    ADD ECX,ESI                         ; 0046484f
    MOVZX EAX,byte ptr [EBX]            ; 00464851
    ADD EDX,EBP                         ; 00464854
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464856 | DAT_01c00024
    MOV dword ptr [EDI + 0x2c],EAX      ; 0046485d | DAT_005b0758
    SUB ESI,0x10000                     ; 00464860
    JS 0x0046490c                       ; 00464866
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 0046486c
    MOV BL,CH                           ; 00464871
    MOV BH,DH                           ; 00464873
    ADD EBX,dword ptr [0x01c02580]      ; 00464875 | DAT_01c02580
    ADD ECX,ESI                         ; 0046487b
    MOVZX EAX,byte ptr [EBX]            ; 0046487d
    ADD EDX,EBP                         ; 00464880
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00464882 | DAT_01c00024
    MOV dword ptr [EDI + 0x30],EAX      ; 00464889 | DAT_005b075c
    SUB ESI,0x10000                     ; 0046488c
    JS 0x0046490c                       ; 00464892
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 00464894
    MOV BL,CH                           ; 00464899
    MOV BH,DH                           ; 0046489b
    ADD EBX,dword ptr [0x01c02580]      ; 0046489d | DAT_01c02580
    ADD ECX,ESI                         ; 004648a3
    MOVZX EAX,byte ptr [EBX]            ; 004648a5
    ADD EDX,EBP                         ; 004648a8
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004648aa | DAT_01c00024
    MOV dword ptr [EDI + 0x34],EAX      ; 004648b1 | DAT_005b0760
    SUB ESI,0x10000                     ; 004648b4
    JS 0x0046490c                       ; 004648ba
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 004648bc
    MOV BL,CH                           ; 004648c1
    MOV BH,DH                           ; 004648c3
    ADD EBX,dword ptr [0x01c02580]      ; 004648c5 | DAT_01c02580
    ADD ECX,ESI                         ; 004648cb
    MOVZX EAX,byte ptr [EBX]            ; 004648cd
    ADD EDX,EBP                         ; 004648d0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004648d2 | DAT_01c00024
    MOV dword ptr [EDI + 0x38],EAX      ; 004648d9 | DAT_005b0764
    SUB ESI,0x10000                     ; 004648dc
    JS 0x0046490c                       ; 004648e2
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    MOV EBX,0x0                         ; 004648e4
    MOV BL,CH                           ; 004648e9
    MOV BH,DH                           ; 004648eb
    ADD EBX,dword ptr [0x01c02580]      ; 004648ed | DAT_01c02580
    ADD ECX,ESI                         ; 004648f3
    MOVZX EAX,byte ptr [EBX]            ; 004648f5
    ADD EDX,EBP                         ; 004648f8
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 004648fa | DAT_01c00024
    MOV dword ptr [EDI + 0x3c],EAX      ; 00464901 | DAT_005b0768
    SUB ESI,0x10000                     ; 00464904
    JS 0x0046490c                       ; 0046490a
        ;   XREF to: 0046490c (CONDITIONAL_JUMP)  ; LAB_0046490c
    POP dword ptr [0x005b0688]          ; 0046490c | DAT_005b0688
        ;   Label: LAB_0046490c
    MOV EBX,0x5b06ec                    ; 00464912 | DAT_005b06ec
    MOV ECX,dword ptr [0x005b06e4]      ; 00464917 | DAT_005b06e4
    MOV EDX,dword ptr [0x005b06ac]      ; 0046491d | DAT_005b06ac
    SAR EDX,0x8                         ; 00464923
    MOV ESI,dword ptr [0x005b0688]      ; 00464926 | DAT_005b0688
    SAR ESI,0x4                         ; 0046492c
    MOV EDI,dword ptr [0x005b06e0]      ; 0046492f | DAT_005b06e0
    MOV EBP,dword ptr [0x005b06e8]      ; 00464935 | DAT_005b06e8
    SUB ECX,0x4                         ; 0046493b
        ;   Label: LAB_0046493b
    JS 0x00464989                       ; 0046493e
        ;   XREF to: 00464989 (CONDITIONAL_JUMP)  ; LAB_00464989
    CMP ESI,dword ptr [EBP]             ; 00464940
    JL 0x0046494c                       ; 00464943
        ;   XREF to: 0046494c (CONDITIONAL_JUMP)  ; LAB_0046494c
    MOV EAX,dword ptr [EBX]             ; 00464945 | DAT_005b06ec | DAT_005b06fc
    MOV dword ptr [EBP],ESI             ; 00464947
    MOV dword ptr [EDI],EAX             ; 0046494a
    ADD ESI,EDX                         ; 0046494c
        ;   Label: LAB_0046494c
    CMP ESI,dword ptr [EBP + 0x4]       ; 0046494e
    JL 0x0046495c                       ; 00464951
        ;   XREF to: 0046495c (CONDITIONAL_JUMP)  ; LAB_0046495c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00464953 | DAT_005b06f0 | DAT_005b0700
    MOV dword ptr [EBP + 0x4],ESI       ; 00464956
    MOV dword ptr [EDI + 0x4],EAX       ; 00464959
    ADD ESI,EDX                         ; 0046495c
        ;   Label: LAB_0046495c
    CMP ESI,dword ptr [EBP + 0x8]       ; 0046495e
    JL 0x0046496c                       ; 00464961
        ;   XREF to: 0046496c (CONDITIONAL_JUMP)  ; LAB_0046496c
    MOV EAX,dword ptr [EBX + 0x8]       ; 00464963 | DAT_005b06f4 | DAT_005b0704
    MOV dword ptr [EBP + 0x8],ESI       ; 00464966
    MOV dword ptr [EDI + 0x8],EAX       ; 00464969
    ADD ESI,EDX                         ; 0046496c
        ;   Label: LAB_0046496c
    CMP ESI,dword ptr [EBP + 0xc]       ; 0046496e
    JL 0x0046497c                       ; 00464971
        ;   XREF to: 0046497c (CONDITIONAL_JUMP)  ; LAB_0046497c
    MOV EAX,dword ptr [EBX + 0xc]       ; 00464973 | DAT_005b06f8
    MOV dword ptr [EBP + 0xc],ESI       ; 00464976
    MOV dword ptr [EDI + 0xc],EAX       ; 00464979
    ADD ESI,EDX                         ; 0046497c
        ;   Label: LAB_0046497c
    ADD EBX,0x10                        ; 0046497e
    ADD EDI,0x10                        ; 00464981
    ADD EBP,0x10                        ; 00464984
    JMP 0x0046493b                      ; 00464987
        ;   XREF to: 0046493b (UNCONDITIONAL_JUMP)  ; LAB_0046493b
    ADD ECX,0x4                         ; 00464989
        ;   Label: LAB_00464989
    JS 0x004649d9                       ; 0046498c
        ;   XREF to: 004649d9 (CONDITIONAL_JUMP)  ; LAB_004649d9
    CMP ESI,dword ptr [EBP]             ; 0046498e
    JL 0x0046499a                       ; 00464991
        ;   XREF to: 0046499a (CONDITIONAL_JUMP)  ; LAB_0046499a
    MOV EAX,dword ptr [EBX]             ; 00464993 | DAT_005b06fc
    MOV dword ptr [EBP],ESI             ; 00464995
    MOV dword ptr [EDI],EAX             ; 00464998
    ADD ESI,EDX                         ; 0046499a
        ;   Label: LAB_0046499a
    SUB ECX,0x1                         ; 0046499c
    JS 0x004649d9                       ; 0046499f
        ;   XREF to: 004649d9 (CONDITIONAL_JUMP)  ; LAB_004649d9
    CMP ESI,dword ptr [EBP + 0x4]       ; 004649a1
    JL 0x004649af                       ; 004649a4
        ;   XREF to: 004649af (CONDITIONAL_JUMP)  ; LAB_004649af
    MOV EAX,dword ptr [EBX + 0x4]       ; 004649a6 | DAT_005b0700
    MOV dword ptr [EBP + 0x4],ESI       ; 004649a9
    MOV dword ptr [EDI + 0x4],EAX       ; 004649ac
    ADD ESI,EDX                         ; 004649af
        ;   Label: LAB_004649af
    SUB ECX,0x1                         ; 004649b1
    JS 0x004649d9                       ; 004649b4
        ;   XREF to: 004649d9 (CONDITIONAL_JUMP)  ; LAB_004649d9
    CMP ESI,dword ptr [EBP + 0x8]       ; 004649b6
    JL 0x004649c4                       ; 004649b9
        ;   XREF to: 004649c4 (CONDITIONAL_JUMP)  ; LAB_004649c4
    MOV EAX,dword ptr [EBX + 0x8]       ; 004649bb | DAT_005b0704
    MOV dword ptr [EBP + 0x8],ESI       ; 004649be
    MOV dword ptr [EDI + 0x8],EAX       ; 004649c1
    ADD ESI,EDX                         ; 004649c4
        ;   Label: LAB_004649c4
    SUB ECX,0x1                         ; 004649c6
    JS 0x004649d9                       ; 004649c9
        ;   XREF to: 004649d9 (CONDITIONAL_JUMP)  ; LAB_004649d9
    CMP ESI,dword ptr [EBP + 0xc]       ; 004649cb
    JL 0x004649d9                       ; 004649ce
        ;   XREF to: 004649d9 (CONDITIONAL_JUMP)  ; LAB_004649d9
    MOV EAX,dword ptr [EBX + 0xc]       ; 004649d0 | DAT_005b0708
    MOV dword ptr [EBP + 0xc],ESI       ; 004649d3
    MOV dword ptr [EDI + 0xc],EAX       ; 004649d6
    POP EBP                             ; 004649d9
        ;   Label: LAB_004649d9
    POP EDI                             ; 004649da
    POP ESI                             ; 004649db
    RET                                 ; 004649dc

