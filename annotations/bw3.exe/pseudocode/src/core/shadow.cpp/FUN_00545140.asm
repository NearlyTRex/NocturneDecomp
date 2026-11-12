; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545140(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e3d30
;   undefined4 DAT_005e3d64
;   undefined4 DAT_005e3d68
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545140
        ;   Label: core_shadow.cpp_FUN_00545140
    PUSH ESI                            ; 00545141
    PUSH EDI                            ; 00545142
    PUSH EBP                            ; 00545143
    SUB ESP,0x134                       ; 00545144
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0054514a
    FLD float ptr [EBP]                 ; 00545151
    FLD float ptr [EBP + 0x4]           ; 00545154
    LEA EDI,[ESP + 0x10c]               ; 00545157
    MOV EAX,[0x005e3d64]                ; 0054515e | DAT_005e3d64
    LEA ESI,[ESP + 0xf4]                ; 00545163
    MOV dword ptr [ESP + 0x130],EAX     ; 0054516a
    MOV EAX,[0x005e3d68]                ; 00545171 | DAT_005e3d68
    FXCH                                ; 00545176
    FADD float ptr [ESP + 0x130]        ; 00545178
    MOV dword ptr [ESP + 0x128],EAX     ; 0054517f
    FSTP float ptr [ESP + 0xf4]         ; 00545186
    MOV EAX,dword ptr [EBP + 0x8]       ; 0054518d
    FADD float ptr [ESP + 0x128]        ; 00545190
    MOV dword ptr [ESP + 0xfc],EAX      ; 00545197
    FSTP float ptr [ESP + 0xf8]         ; 0054519e
    MOVSD ES:EDI,ESI                    ; 005451a5
    MOVSD ES:EDI,ESI                    ; 005451a6
    MOVSD ES:EDI,ESI                    ; 005451a7
    MOV EAX,dword ptr [ESP + 0x148]     ; 005451a8
    FLD float ptr [ESP + 0x10c]         ; 005451af
    FMUL float ptr [EAX + 0x27b8]       ; 005451b6
    FLD float ptr [ESP + 0x110]         ; 005451bc
    FMUL float ptr [EAX + 0x27b8]       ; 005451c3
    FLD float ptr [ESP + 0x114]         ; 005451c9
    FMUL float ptr [EAX + 0x27b8]       ; 005451d0
    LEA EDX,[ESP + 0x4c]                ; 005451d6
    LEA EDI,[ESP + 0x7c]                ; 005451da
    LEA ESI,[ESP + 0x70]                ; 005451de
    FXCH ST2                            ; 005451e2
    FSTP float ptr [ESP + 0x70]         ; 005451e4
    FSTP float ptr [ESP + 0x74]         ; 005451e8
    FSTP float ptr [ESP + 0x78]         ; 005451ec
    LEA EAX,[ESP + 0x7c]                ; 005451f0
    MOVSD ES:EDI,ESI                    ; 005451f4
    MOVSD ES:EDI,ESI                    ; 005451f5
    MOVSD ES:EDI,ESI                    ; 005451f6
    CMP EDX,EAX                         ; 005451f7
    JZ 0x00545219                       ; 005451f9
        ;   XREF to: 00545219 (CONDITIONAL_JUMP)  ; LAB_00545219
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005451fb
    MOV dword ptr [ESP + 0x4c],EAX      ; 005451ff
    MOV EAX,dword ptr [ESP + 0x80]      ; 00545203
    MOV dword ptr [ESP + 0x50],EAX      ; 0054520a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0054520e
    MOV dword ptr [ESP + 0x54],EAX      ; 00545215
    LEA EBX,[ESP + 0x34]                ; 00545219
        ;   Label: LAB_00545219
    LEA EAX,[ESP + 0x4c]                ; 0054521d
    MOV EDX,dword ptr [0x005f2afc]      ; 00545221 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00545227
    FMUL float ptr [0x005e3d30]         ; 00545229 | DAT_005e3d30
    FISTP dword ptr [EBX]               ; 0054522f
    FLD float ptr [EAX + 0x4]           ; 00545231
    FMUL float ptr [0x005e3d30]         ; 00545234 | DAT_005e3d30
    FISTP dword ptr [EBX + 0x4]         ; 0054523a
    FLD float ptr [EAX + 0x8]           ; 0054523d
    FMUL float ptr [0x005e3d30]         ; 00545240 | DAT_005e3d30
    FISTP dword ptr [EBX + 0x8]         ; 00545246
    LEA EAX,[ESP + 0x34]                ; 00545249
    PUSH EAX                            ; 0054524d
    MOV EAX,dword ptr [EDX]             ; 0054524e
    PUSH EAX                            ; 00545250
    LEA EDI,[ESP + 0x48]                ; 00545251
    LEA ESI,[ESP + 0x30]                ; 00545255
    CALL engine_special.cpp_FUN_005632a3 ; 00545259
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e3d64]          ; 0054525e | DAT_005e3d64
    FLD float ptr [EBP]                 ; 00545264
    FLD float ptr [EBP + 0x4]           ; 00545267
    MOV EAX,[0x005e3d68]                ; 0054526a | DAT_005e3d68
    ADD ESP,0x8                         ; 0054526f
    FXCH ST2                            ; 00545272
    FCHS                                ; 00545274
    MOV dword ptr [ESP + 0x12c],EAX     ; 00545276
    FADDP                               ; 0054527d
    MOV EAX,dword ptr [EBP + 0x8]       ; 0054527f
    FSTP float ptr [ESP + 0x28]         ; 00545282
    FADD float ptr [ESP + 0x12c]        ; 00545286
    MOV dword ptr [ESP + 0x30],EAX      ; 0054528d
    FSTP float ptr [ESP + 0x2c]         ; 00545291
    MOVSD ES:EDI,ESI                    ; 00545295
    MOVSD ES:EDI,ESI                    ; 00545296
    MOVSD ES:EDI,ESI                    ; 00545297
    MOV EAX,dword ptr [ESP + 0x148]     ; 00545298
    FLD float ptr [ESP + 0x40]          ; 0054529f
    FMUL float ptr [EAX + 0x27b8]       ; 005452a3
    FLD float ptr [ESP + 0x44]          ; 005452a9
    FMUL float ptr [EAX + 0x27b8]       ; 005452ad
    FLD float ptr [ESP + 0x48]          ; 005452b3
    FMUL float ptr [EAX + 0x27b8]       ; 005452b7
    LEA EDX,[ESP + 0x4c]                ; 005452bd
    LEA EDI,[ESP + 0xa0]                ; 005452c1
    LEA ESI,[ESP + 0xb8]                ; 005452c8
    FXCH ST2                            ; 005452cf
    FSTP float ptr [ESP + 0xb8]         ; 005452d1
    FSTP float ptr [ESP + 0xbc]         ; 005452d8
    FSTP float ptr [ESP + 0xc0]         ; 005452df
    LEA EAX,[ESP + 0xa0]                ; 005452e6
    MOVSD ES:EDI,ESI                    ; 005452ed
    MOVSD ES:EDI,ESI                    ; 005452ee
    MOVSD ES:EDI,ESI                    ; 005452ef
    CMP EDX,EAX                         ; 005452f0
    JZ 0x00545315                       ; 005452f2
        ;   XREF to: 00545315 (CONDITIONAL_JUMP)  ; LAB_00545315
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005452f4
    MOV dword ptr [ESP + 0x4c],EAX      ; 005452fb
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005452ff
    MOV dword ptr [ESP + 0x50],EAX      ; 00545306
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0054530a
    MOV dword ptr [ESP + 0x54],EAX      ; 00545311
    LEA EBX,[ESP + 0x118]               ; 00545315
        ;   Label: LAB_00545315
    LEA EAX,[ESP + 0x4c]                ; 0054531c
    MOV EDX,dword ptr [0x005f2afc]      ; 00545320 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00545326
    FMUL float ptr [0x005e3d30]         ; 00545328 | DAT_005e3d30
    FISTP dword ptr [EBX]               ; 0054532e
    FLD float ptr [EAX + 0x4]           ; 00545330
    FMUL float ptr [0x005e3d30]         ; 00545333 | DAT_005e3d30
    FISTP dword ptr [EBX + 0x4]         ; 00545339
    FLD float ptr [EAX + 0x8]           ; 0054533c
    FMUL float ptr [0x005e3d30]         ; 0054533f | DAT_005e3d30
    FISTP dword ptr [EBX + 0x8]         ; 00545345
    LEA EAX,[ESP + 0x118]               ; 00545348
    PUSH EAX                            ; 0054534f
    MOV EAX,dword ptr [EDX]             ; 00545350
    ADD EAX,0x30                        ; 00545352
    PUSH EAX                            ; 00545355
    LEA EDI,[ESP + 0xcc]                ; 00545356
    LEA ESI,[ESP + 0x9c]                ; 0054535d
    CALL engine_special.cpp_FUN_005632a3 ; 00545364
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e3d68]          ; 00545369 | DAT_005e3d68
    FLD float ptr [0x005e3d64]          ; 0054536f | DAT_005e3d64
    FLD float ptr [EBP + 0x4]           ; 00545375
    ADD ESP,0x8                         ; 00545378
    FXCH ST2                            ; 0054537b
    FCHS                                ; 0054537d
    MOV EAX,dword ptr [EBP + 0x8]       ; 0054537f
    FXCH                                ; 00545382
    FCHS                                ; 00545384
    MOV dword ptr [ESP + 0x9c],EAX      ; 00545386
    FADD float ptr [EBP]                ; 0054538d
    FXCH ST2                            ; 00545390
    FADDP                               ; 00545392
    FXCH                                ; 00545394
    FSTP float ptr [ESP + 0x94]         ; 00545396
    FSTP float ptr [ESP + 0x98]         ; 0054539d
    MOVSD ES:EDI,ESI                    ; 005453a4
    MOVSD ES:EDI,ESI                    ; 005453a5
    MOVSD ES:EDI,ESI                    ; 005453a6
    MOV EAX,dword ptr [ESP + 0x148]     ; 005453a7
    FLD float ptr [ESP + 0xc4]          ; 005453ae
    FMUL float ptr [EAX + 0x27b8]       ; 005453b5
    FLD float ptr [ESP + 0xc8]          ; 005453bb
    FMUL float ptr [EAX + 0x27b8]       ; 005453c2
    FLD float ptr [ESP + 0xcc]          ; 005453c8
    FMUL float ptr [EAX + 0x27b8]       ; 005453cf
    LEA EDX,[ESP + 0x4c]                ; 005453d5
    LEA EDI,[ESP + 0xe8]                ; 005453d9
    LEA ESI,[ESP + 0xdc]                ; 005453e0
    FXCH ST2                            ; 005453e7
    FSTP float ptr [ESP + 0xdc]         ; 005453e9
    FSTP float ptr [ESP + 0xe0]         ; 005453f0
    FSTP float ptr [ESP + 0xe4]         ; 005453f7
    LEA EAX,[ESP + 0xe8]                ; 005453fe
    MOVSD ES:EDI,ESI                    ; 00545405
    MOVSD ES:EDI,ESI                    ; 00545406
    MOVSD ES:EDI,ESI                    ; 00545407
    CMP EDX,EAX                         ; 00545408
    JZ 0x0054542d                       ; 0054540a
        ;   XREF to: 0054542d (CONDITIONAL_JUMP)  ; LAB_0054542d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0054540c
    MOV dword ptr [ESP + 0x4c],EAX      ; 00545413
    MOV EAX,dword ptr [ESP + 0xec]      ; 00545417
    MOV dword ptr [ESP + 0x50],EAX      ; 0054541e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00545422
    MOV dword ptr [ESP + 0x54],EAX      ; 00545429
    LEA EBX,[ESP + 0x58]                ; 0054542d
        ;   Label: LAB_0054542d
    LEA EAX,[ESP + 0x4c]                ; 00545431
    MOV EDX,dword ptr [0x005f2afc]      ; 00545435 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0054543b
    FMUL float ptr [0x005e3d30]         ; 0054543d | DAT_005e3d30
    FISTP dword ptr [EBX]               ; 00545443
    FLD float ptr [EAX + 0x4]           ; 00545445
    FMUL float ptr [0x005e3d30]         ; 00545448 | DAT_005e3d30
    FISTP dword ptr [EBX + 0x4]         ; 0054544e
    FLD float ptr [EAX + 0x8]           ; 00545451
    FMUL float ptr [0x005e3d30]         ; 00545454 | DAT_005e3d30
    FISTP dword ptr [EBX + 0x8]         ; 0054545a
    LEA EAX,[ESP + 0x58]                ; 0054545d
    PUSH EAX                            ; 00545461
    MOV EAX,dword ptr [EDX]             ; 00545462
    ADD EAX,0x60                        ; 00545464
    PUSH EAX                            ; 00545467
    LEA EDI,[ESP + 0x90]                ; 00545468
    LEA ESI,[ESP + 0x6c]                ; 0054546f
    CALL engine_special.cpp_FUN_005632a3 ; 00545473
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x005e3d68]          ; 00545478 | DAT_005e3d68
    FLD float ptr [0x005e3d64]          ; 0054547e | DAT_005e3d64
    FLD float ptr [EBP + 0x4]           ; 00545484
    ADD ESP,0x8                         ; 00545487
    MOV EAX,dword ptr [EBP + 0x8]       ; 0054548a
    FXCH ST2                            ; 0054548d
    FCHS                                ; 0054548f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00545491
    FXCH                                ; 00545495
    FADD float ptr [EBP]                ; 00545497
    FXCH ST2                            ; 0054549a
    FADDP                               ; 0054549c
    FXCH                                ; 0054549e
    FSTP float ptr [ESP + 0x64]         ; 005454a0
    FSTP float ptr [ESP + 0x68]         ; 005454a4
    MOVSD ES:EDI,ESI                    ; 005454a8
    MOVSD ES:EDI,ESI                    ; 005454a9
    MOVSD ES:EDI,ESI                    ; 005454aa
    MOV EAX,dword ptr [ESP + 0x148]     ; 005454ab
    FLD float ptr [ESP + 0x88]          ; 005454b2
    FMUL float ptr [EAX + 0x27b8]       ; 005454b9
    FLD float ptr [ESP + 0x8c]          ; 005454bf
    FMUL float ptr [EAX + 0x27b8]       ; 005454c6
    FLD float ptr [ESP + 0x90]          ; 005454cc
    FMUL float ptr [EAX + 0x27b8]       ; 005454d3
    LEA EBX,[ESP + 0x4c]                ; 005454d9
    LEA EDI,[ESP + 0x100]               ; 005454dd
    LEA ESI,[ESP + 0xd0]                ; 005454e4
    FXCH ST2                            ; 005454eb
    FSTP float ptr [ESP + 0xd0]         ; 005454ed
    FSTP float ptr [ESP + 0xd4]         ; 005454f4
    FSTP float ptr [ESP + 0xd8]         ; 005454fb
    LEA EAX,[ESP + 0x100]               ; 00545502
    MOVSD ES:EDI,ESI                    ; 00545509
    MOVSD ES:EDI,ESI                    ; 0054550a
    MOVSD ES:EDI,ESI                    ; 0054550b
    CMP EBX,EAX                         ; 0054550c
    JZ 0x00545531                       ; 0054550e
        ;   XREF to: 00545531 (CONDITIONAL_JUMP)  ; LAB_00545531
    MOV EAX,dword ptr [ESP + 0x100]     ; 00545510
    MOV dword ptr [ESP + 0x4c],EAX      ; 00545517
    MOV EAX,dword ptr [ESP + 0x104]     ; 0054551b
    MOV dword ptr [ESP + 0x50],EAX      ; 00545522
    MOV EAX,dword ptr [ESP + 0x108]     ; 00545526
    MOV dword ptr [ESP + 0x54],EAX      ; 0054552d
    LEA EBX,[ESP + 0xac]                ; 00545531
        ;   Label: LAB_00545531
    LEA EAX,[ESP + 0x4c]                ; 00545538
    MOV EBP,dword ptr [0x005f2afc]      ; 0054553c | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00545542
    FMUL float ptr [0x005e3d30]         ; 00545544 | DAT_005e3d30
    FISTP dword ptr [EBX]               ; 0054554a
    FLD float ptr [EAX + 0x4]           ; 0054554c
    FMUL float ptr [0x005e3d30]         ; 0054554f | DAT_005e3d30
    FISTP dword ptr [EBX + 0x4]         ; 00545555
    FLD float ptr [EAX + 0x8]           ; 00545558
    FMUL float ptr [0x005e3d30]         ; 0054555b | DAT_005e3d30
    FISTP dword ptr [EBX + 0x8]         ; 00545561
    LEA EAX,[ESP + 0xac]                ; 00545564
    PUSH EAX                            ; 0054556b
    MOV EAX,dword ptr [EBP]             ; 0054556c
    ADD EAX,0x90                        ; 0054556f
    PUSH EAX                            ; 00545574
    CALL engine_special.cpp_FUN_005632a3 ; 00545575
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0054557a | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0054557f
    MOV dword ptr [EDX + 0x20],0xffff   ; 00545581
    MOV EBX,dword ptr [EAX]             ; 00545588
    MOV dword ptr [EBX + 0x24],0x0      ; 0054558a
    MOV EBX,dword ptr [EAX]             ; 00545591
    MOV dword ptr [EBX + 0x28],0x0      ; 00545593
    MOV EDX,dword ptr [EAX]             ; 0054559a
    MOV dword ptr [EDX + 0x50],0xffff   ; 0054559c
    MOV EDX,dword ptr [EAX]             ; 005455a3
    MOV dword ptr [EDX + 0x54],0x0      ; 005455a5
    MOV EBX,dword ptr [EAX]             ; 005455ac
    MOV dword ptr [EBX + 0x58],0x0      ; 005455ae
    MOV EBX,dword ptr [EAX]             ; 005455b5
    MOV dword ptr [EBX + 0x80],0xffff   ; 005455b7
    MOV EBX,dword ptr [EAX]             ; 005455c1
    MOV dword ptr [EBX + 0x84],0x0      ; 005455c3
    MOV EBX,dword ptr [EAX]             ; 005455cd
    MOV dword ptr [EBX + 0x88],0x0      ; 005455cf
    MOV EBX,dword ptr [EAX]             ; 005455d9
    MOV dword ptr [EBX + 0xb0],0xffff   ; 005455db
    MOV EDX,dword ptr [EAX]             ; 005455e5
    MOV dword ptr [EDX + 0xb4],0x0      ; 005455e7
    MOV EBX,dword ptr [EAX]             ; 005455f1
    MOV dword ptr [EBX + 0xb8],0x0      ; 005455f3
    MOV EBX,dword ptr [EAX]             ; 005455fd
    MOV dword ptr [EBX + 0x2c],0x4000   ; 005455ff
    MOV EBX,dword ptr [EAX]             ; 00545606
    MOV dword ptr [EBX + 0x5c],0x4000   ; 00545608
    MOV EBX,dword ptr [EAX]             ; 0054560f
    MOV dword ptr [EBX + 0x8c],0x4000   ; 00545611
    MOV EDX,dword ptr [EAX]             ; 0054561b
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0054561d
    MOV EBX,dword ptr [EAX]             ; 00545627
    MOV dword ptr [EBX + 0x18],0x80000  ; 00545629
    MOV EDX,dword ptr [EAX]             ; 00545630
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 00545632
    MOV EBX,dword ptr [EAX]             ; 00545639
    ADD ESP,0x8                         ; 0054563b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0054563e
    MOV EBX,dword ptr [EAX]             ; 00545645
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 00545647
    MOV EBX,dword ptr [EAX]             ; 0054564e
    MOV dword ptr [EBX + 0x78],0xf80000 ; 00545650
    MOV EBX,dword ptr [EAX]             ; 00545657
    MOV dword ptr [EBX + 0x7c],0x80000  ; 00545659
    MOV EBX,dword ptr [EAX]             ; 00545660
    MOV EDX,0x4                         ; 00545662
    MOV dword ptr [EBX + 0xa8],0x80000  ; 00545667
    PUSH 0x6040b8                       ; 00545671
    MOV EBX,dword ptr [EAX]             ; 00545676
    XOR ECX,ECX                         ; 00545678
    PUSH EAX                            ; 0054567a
    MOV dword ptr [EBX + 0xac],0x80000  ; 0054567b
    MOV EBX,0x3                         ; 00545685
    MOV dword ptr [ESP + 0xc],EDX       ; 0054568a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0054568e
    MOV dword ptr [ESP + 0x18],ECX      ; 00545692
    MOV dword ptr [ESP + 0x14],ECX      ; 00545696
    MOV dword ptr [ESP + 0x10],ECX      ; 0054569a
    MOV dword ptr [ESP + 0x20],ECX      ; 0054569e
    MOV EDX,0x1                         ; 005456a2
    MOV ECX,0x2                         ; 005456a7
    MOV dword ptr [ESP + 0x2c],EBX      ; 005456ac
    MOV dword ptr [ESP + 0x24],EDX      ; 005456b0
    MOV dword ptr [ESP + 0x28],ECX      ; 005456b4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 005456b8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005456bd
    PUSH 0x1                            ; 005456c0
    MOV ESI,dword ptr [0x005f2afc]      ; 005456c2 | DAT_005f2afc
    PUSH ESI                            ; 005456c8
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 005456c9
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005456ce
    MOV EAX,ESP                         ; 005456d1
    PUSH EAX                            ; 005456d3
    MOV EDI,dword ptr [0x005f2afc]      ; 005456d4 | DAT_005f2afc
    PUSH EDI                            ; 005456da
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 005456db
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005456e0
    XOR EBP,EBP                         ; 005456e3
    PUSH EBP                            ; 005456e5
    MOV EBP,dword ptr [0x005f2afc]      ; 005456e6 | DAT_005f2afc
    PUSH EBP                            ; 005456ec
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 005456ed
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005456f2
    ADD ESP,0x134                       ; 005456f5
    POP EBP                             ; 005456fb
    POP EDI                             ; 005456fc
    POP ESI                             ; 005456fd
    POP EBX                             ; 005456fe
    RET                                 ; 005456ff

