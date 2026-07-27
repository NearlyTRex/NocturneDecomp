; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045e370(void)
;
; Local Variables:
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x64]:1  local_64
;
; Referenced Globals:
;   TerminatedCString s_Hello_0057dac5
;   TerminatedCString s_Hello_0057dacb
;   TerminatedCString s_Hello_world_0057dad1
;   TerminatedCString s_anon_0057dae1
;   TerminatedCString s_anon_0057dae3
;   TerminatedCString s_Hello_0057dae5
;   TerminatedCString s_Hello_0057daeb
;   TerminatedCString s_Hello_0057daf1
;   TerminatedCString s_Hello_0057daf7
;   TerminatedCString s_Hello_0057dafd
;   TerminatedCString s_anon_0057db03
;   TerminatedCString s_anon_0057db05
;   TerminatedCString s_s_0057db07
;   TerminatedCString s_s_0057db0a
;   TerminatedCString s_s_0057db0d
;   ... and 18 more
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
;   cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0
;   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800
;   cockpit_drawsurf.cpp_FUN_0045be40
;   cockpit_drawsurf.cpp_FUN_0045be70
;   cockpit_drawsurf.cpp_FUN_0045bea0
;   cockpit_drawsurf.cpp_FUN_0045bed0
;   cockpit_drawsurf.cpp_FUN_0045bfb0
;   cockpit_drawsurf.cpp_FUN_0045cfd0
;   cockpit_drawsurf.cpp_FUN_0045d2b0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0045e370
        ;   Label: cockpit_drawsurf.cpp_FUN_0045e370
    PUSH EBP                            ; 0045e371
    SUB ESP,0xbc                        ; 0045e372
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0045e378
    MOV EDX,dword ptr [0x005b761c]      ; 0045e37f | DAT_005b761c
    CMP EDX,0x280                       ; 0045e385
    JL 0x0045e39b                       ; 0045e38b
        ;   XREF to: 0045e39b (CONDITIONAL_JUMP)  ; LAB_0045e39b
    MOV ECX,dword ptr [0x005b7620]      ; 0045e38d | DAT_005b7620
    CMP ECX,0x1e0                       ; 0045e393
    JGE 0x0045e3a4                      ; 0045e399
        ;   XREF to: 0045e3a4 (CONDITIONAL_JUMP)  ; LAB_0045e3a4
    ADD ESP,0xbc                        ; 0045e39b
        ;   Label: LAB_0045e39b
    POP EBP                             ; 0045e3a1
    POP ESI                             ; 0045e3a2
    RET                                 ; 0045e3a3
    PUSH EDI                            ; 0045e3a4
        ;   Label: LAB_0045e3a4
    PUSH EBX                            ; 0045e3a5
    MOV EAX,EDX                         ; 0045e3a6
    SAR EDX,0x1f                        ; 0045e3a8
    SUB EAX,EDX                         ; 0045e3ab
    SAR EAX,0x1                         ; 0045e3ad
    MOV EBX,EAX                         ; 0045e3af
    MOV EDX,ECX                         ; 0045e3b1
    MOV EAX,ECX                         ; 0045e3b3
    SAR EDX,0x1f                        ; 0045e3b5
    SUB EAX,EDX                         ; 0045e3b8
    SAR EAX,0x1                         ; 0045e3ba
    PUSH 0x0                            ; 0045e3bc
    PUSH 0x65                           ; 0045e3be
    PUSH 0xc9                           ; 0045e3c0
    PUSH EAX                            ; 0045e3c5
    PUSH EBX                            ; 0045e3c6
    LEA EAX,[ESP + 0x7c]                ; 0045e3c7
    PUSH EAX                            ; 0045e3cb
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480 ; 0045e3cc
        ;   XREF to: 0045b480 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480()
    ADD ESP,0x18                        ; 0045e3d1
    LEA EAX,[ESP + 0x68]                ; 0045e3d4
    PUSH EAX                            ; 0045e3d8
    PUSH 0xb                            ; 0045e3d9
    PUSH 0x15                           ; 0045e3db
    PUSH 0x8                            ; 0045e3dd
    PUSH 0xc                            ; 0045e3df
    LEA EAX,[ESP + 0x3c]                ; 0045e3e1
    PUSH EAX                            ; 0045e3e5
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480 ; 0045e3e6
        ;   XREF to: 0045b480 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480()
    ADD ESP,0x18                        ; 0045e3eb
    LEA EAX,[ESP + 0x68]                ; 0045e3ee
    PUSH EAX                            ; 0045e3f2
    PUSH 0xa                            ; 0045e3f3
    PUSH 0x14                           ; 0045e3f5
    PUSH 0x5f                           ; 0045e3f7
    PUSH 0xbe                           ; 0045e3f9
    LEA EAX,[ESP + 0x1c]                ; 0045e3fe
    PUSH EAX                            ; 0045e402
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480 ; 0045e403
        ;   XREF to: 0045b480 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480()
    ADD ESP,0x18                        ; 0045e408
    PUSH 0x80                           ; 0045e40b
    PUSH 0x80                           ; 0045e410
    PUSH 0x80                           ; 0045e415
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800 ; 0045e41a
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800()
    ADD ESP,0xc                         ; 0045e41f
    LEA EAX,[ESP + 0x68]                ; 0045e422
    PUSH EAX                            ; 0045e426
    CALL cockpit_drawsurf.cpp_FUN_0045d2b0 ; 0045e427
        ;   XREF to: 0045d2b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045d2b0()
    ADD ESP,0x4                         ; 0045e42c
    PUSH 0x7                            ; 0045e42f
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e431
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e436
    LEA EAX,[ESP + 0x68]                ; 0045e439
    PUSH EAX                            ; 0045e43d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70 ; 0045e43e
        ;   XREF to: 0045cb70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70()
    ADD ESP,0x4                         ; 0045e443
    PUSH 0x64                           ; 0045e446
    PUSH 0xc8                           ; 0045e448
    PUSH 0x0                            ; 0045e44d
    PUSH 0x0                            ; 0045e44f
    LEA EAX,[ESP + 0x78]                ; 0045e451
    PUSH EAX                            ; 0045e455
    CALL cockpit_drawsurf.cpp_FUN_0045bfb0 ; 0045e456
        ;   XREF to: 0045bfb0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045bfb0()
    ADD ESP,0x14                        ; 0045e45b
    PUSH 0x64                           ; 0045e45e
    PUSH 0x32                           ; 0045e460
    PUSH 0x64                           ; 0045e462
    LEA EAX,[ESP + 0x74]                ; 0045e464
    PUSH EAX                            ; 0045e468
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045e469
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50()
    ADD ESP,0x10                        ; 0045e46e
    PUSH 0x32                           ; 0045e471
    PUSH 0x32                           ; 0045e473
    PUSH 0x64                           ; 0045e475
    LEA EAX,[ESP + 0x74]                ; 0045e477
    PUSH EAX                            ; 0045e47b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045e47c
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50()
    ADD ESP,0x10                        ; 0045e481
    PUSH 0x32                           ; 0045e484
    PUSH 0x0                            ; 0045e486
    PUSH 0x0                            ; 0045e488
    LEA EAX,[ESP + 0x74]                ; 0045e48a
    PUSH EAX                            ; 0045e48e
    CALL cockpit_drawsurf.cpp_FUN_0045be40 ; 0045e48f
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045be40()
    ADD ESP,0x10                        ; 0045e494
    PUSH 0x32                           ; 0045e497
    PUSH 0x0                            ; 0045e499
    PUSH 0xc8                           ; 0045e49b
    LEA EAX,[ESP + 0x74]                ; 0045e4a0
    PUSH EAX                            ; 0045e4a4
    CALL cockpit_drawsurf.cpp_FUN_0045be70 ; 0045e4a5
        ;   XREF to: 0045be70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045be70()
    ADD ESP,0x10                        ; 0045e4aa
    PUSH 0x32                           ; 0045e4ad
    PUSH 0x64                           ; 0045e4af
    PUSH 0x0                            ; 0045e4b1
    LEA EAX,[ESP + 0x74]                ; 0045e4b3
    PUSH EAX                            ; 0045e4b7
    CALL cockpit_drawsurf.cpp_FUN_0045bea0 ; 0045e4b8
        ;   XREF to: 0045bea0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045bea0()
    ADD ESP,0x10                        ; 0045e4bd
    PUSH 0x32                           ; 0045e4c0
    PUSH 0x64                           ; 0045e4c2
    PUSH 0xc8                           ; 0045e4c4
    LEA EAX,[ESP + 0x74]                ; 0045e4c9
    PUSH EAX                            ; 0045e4cd
    CALL cockpit_drawsurf.cpp_FUN_0045bed0 ; 0045e4ce
        ;   XREF to: 0045bed0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045bed0()
    ADD ESP,0x10                        ; 0045e4d3
    PUSH 0xf9                           ; 0045e4d6
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e4db
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e4e0
    PUSH 0x0                            ; 0045e4e3
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0 ; 0045e4e5
        ;   XREF to: 0045baa0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0()
    ADD ESP,0x4                         ; 0045e4ea
    PUSH 0x57dac5                       ; 0045e4ed | = "Hello"
    PUSH 0x2                            ; 0045e4f2
    PUSH 0x5                            ; 0045e4f4
    LEA EAX,[ESP + 0x74]                ; 0045e4f6
    PUSH EAX                            ; 0045e4fa
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e4fb
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e500
    PUSH 0x57dacb                       ; 0045e503 | = "Hello"
    PUSH 0x11                           ; 0045e508
    PUSH -0x5                           ; 0045e50a
    LEA EAX,[ESP + 0x74]                ; 0045e50c
    PUSH EAX                            ; 0045e510
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e511
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e516
    PUSH 0x57dad1                       ; 0045e519 | = "Hello\nworld\n..."
    PUSH 0x11                           ; 0045e51e
    PUSH 0xb9                           ; 0045e520
    LEA EAX,[ESP + 0x74]                ; 0045e525
    PUSH EAX                            ; 0045e529
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e52a
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e52f
    PUSH 0x57dae1                       ; 0045e532 | = "+"
    PUSH 0x11                           ; 0045e537
    PUSH 0x64                           ; 0045e539
    LEA EAX,[ESP + 0x74]                ; 0045e53b
    PUSH EAX                            ; 0045e53f
    CALL cockpit_drawsurf.cpp_FUN_0045dc00 ; 0045e540
        ;   XREF to: 0045dc00 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dc00()
    ADD ESP,0x10                        ; 0045e545
    PUSH 0x57dae3                       ; 0045e548 | = "+"
    PUSH 0x20                           ; 0045e54d
    PUSH 0x6c                           ; 0045e54f
    PUSH 0x5c                           ; 0045e551
    LEA EAX,[ESP + 0x78]                ; 0045e553
    PUSH EAX                            ; 0045e557
    CALL cockpit_drawsurf.cpp_FUN_0045de70 ; 0045e558
        ;   XREF to: 0045de70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045de70()
    ADD ESP,0x14                        ; 0045e55d
    PUSH ESI                            ; 0045e560
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0 ; 0045e561
        ;   XREF to: 0045baa0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0()
    ADD ESP,0x4                         ; 0045e566
    PUSH 0x57dae5                       ; 0045e569 | = "Hello"
    PUSH 0x2a                           ; 0045e56e
    PUSH 0x5                            ; 0045e570
    LEA EAX,[ESP + 0x74]                ; 0045e572
    PUSH EAX                            ; 0045e576
    MOV dword ptr [ESI + 0x3184],0x0    ; 0045e577
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e581
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e586
    PUSH 0x57daeb                       ; 0045e589 | = "Hello"
    PUSH 0x39                           ; 0045e58e
    PUSH -0x5                           ; 0045e590
    LEA EAX,[ESP + 0x74]                ; 0045e592
    PUSH EAX                            ; 0045e596
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e597
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e59c
    PUSH 0x57daf1                       ; 0045e59f | = "Hello"
    PUSH 0x39                           ; 0045e5a4
    PUSH 0xb9                           ; 0045e5a6
    LEA EAX,[ESP + 0x74]                ; 0045e5ab
    PUSH EAX                            ; 0045e5af
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e5b0
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e5b5
    MOV dword ptr [ESI + 0x3184],0x1    ; 0045e5b8
    PUSH 0x57daf7                       ; 0045e5c2 | = "Hello"
    PUSH 0x48                           ; 0045e5c7
    PUSH -0x5                           ; 0045e5c9
    LEA EAX,[ESP + 0x74]                ; 0045e5cb
    PUSH EAX                            ; 0045e5cf
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e5d0
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e5d5
    PUSH 0x57dafd                       ; 0045e5d8 | = "Hello"
    PUSH 0x48                           ; 0045e5dd
    PUSH 0xb9                           ; 0045e5df
    LEA EAX,[ESP + 0x74]                ; 0045e5e4
    PUSH EAX                            ; 0045e5e8
    CALL cockpit_drawsurf.cpp_FUN_0045da60 ; 0045e5e9
        ;   XREF to: 0045da60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da60()
    ADD ESP,0x10                        ; 0045e5ee
    PUSH 0x57db03                       ; 0045e5f1 | = "+"
    PUSH 0x48                           ; 0045e5f6
    PUSH 0x64                           ; 0045e5f8
    LEA EAX,[ESP + 0x74]                ; 0045e5fa
    PUSH EAX                            ; 0045e5fe
    CALL cockpit_drawsurf.cpp_FUN_0045dc00 ; 0045e5ff
        ;   XREF to: 0045dc00 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dc00()
    ADD ESP,0x10                        ; 0045e604
    PUSH 0x57db05                       ; 0045e607 | = "+"
    PUSH 0x57                           ; 0045e60c
    PUSH 0x6c                           ; 0045e60e
    PUSH 0x5c                           ; 0045e610
    LEA EAX,[ESP + 0x78]                ; 0045e612
    PUSH EAX                            ; 0045e616
    CALL cockpit_drawsurf.cpp_FUN_0045de70 ; 0045e617
        ;   XREF to: 0045de70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045de70()
    ADD ESP,0x14                        ; 0045e61c
    PUSH 0xff                           ; 0045e61f
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e624
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e629
    PUSH 0x14                           ; 0045e62c
    PUSH 0x64                           ; 0045e62e
    LEA EAX,[ESP + 0x70]                ; 0045e630
    PUSH EAX                            ; 0045e634
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e635
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e63a
    PUSH 0x23                           ; 0045e63d
    PUSH 0x64                           ; 0045e63f
    LEA EAX,[ESP + 0x70]                ; 0045e641
    PUSH EAX                            ; 0045e645
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e646
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e64b
    PUSH 0x4f                           ; 0045e64e
    PUSH 0x64                           ; 0045e650
    LEA EAX,[ESP + 0x70]                ; 0045e652
    PUSH EAX                            ; 0045e656
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e657
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e65c
    PUSH 0x5e                           ; 0045e65f
    PUSH 0x64                           ; 0045e661
    LEA EAX,[ESP + 0x70]                ; 0045e663
    PUSH EAX                            ; 0045e667
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e668
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e66d
    PUSH 0x0                            ; 0045e670
    PUSH 0x0                            ; 0045e672
    PUSH 0xff                           ; 0045e674
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800 ; 0045e679
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800()
    ADD ESP,0xc                         ; 0045e67e
    LEA EAX,[ESP + 0x28]                ; 0045e681
    PUSH EAX                            ; 0045e685
    CALL cockpit_drawsurf.cpp_FUN_0045d2b0 ; 0045e686
        ;   XREF to: 0045d2b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045d2b0()
    ADD ESP,0x4                         ; 0045e68b
    PUSH 0xfb                           ; 0045e68e
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e693
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e698
    LEA EAX,[ESP + 0x28]                ; 0045e69b
    PUSH EAX                            ; 0045e69f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70 ; 0045e6a0
        ;   XREF to: 0045cb70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70()
    ADD ESP,0x4                         ; 0045e6a5
    PUSH 0x15                           ; 0045e6a8
    PUSH 0x29                           ; 0045e6aa
    PUSH -0xb                           ; 0045e6ac
    PUSH -0x15                          ; 0045e6ae
    LEA EAX,[ESP + 0x38]                ; 0045e6b0
    PUSH EAX                            ; 0045e6b4
    CALL cockpit_drawsurf.cpp_FUN_0045bfb0 ; 0045e6b5
        ;   XREF to: 0045bfb0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045bfb0()
    ADD ESP,0x14                        ; 0045e6ba
    PUSH 0x6                            ; 0045e6bd
    PUSH 0x5                            ; 0045e6bf
    PUSH 0xa                            ; 0045e6c1
    LEA EAX,[ESP + 0x34]                ; 0045e6c3
    PUSH EAX                            ; 0045e6c7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045e6c8
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50()
    ADD ESP,0x10                        ; 0045e6cd
    PUSH 0xff                           ; 0045e6d0
    PUSH 0x0                            ; 0045e6d5
    PUSH 0x0                            ; 0045e6d7
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800 ; 0045e6d9
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800()
    ADD ESP,0xc                         ; 0045e6de
    LEA EAX,[ESP + 0x8]                 ; 0045e6e1
    PUSH EAX                            ; 0045e6e5
    CALL cockpit_drawsurf.cpp_FUN_0045d2b0 ; 0045e6e6
        ;   XREF to: 0045d2b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045d2b0()
    ADD ESP,0x4                         ; 0045e6eb
    PUSH 0xfb                           ; 0045e6ee
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e6f3
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e6f8
    LEA EAX,[ESP + 0x8]                 ; 0045e6fb
    PUSH EAX                            ; 0045e6ff
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70 ; 0045e700
        ;   XREF to: 0045cb70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70()
    ADD ESP,0x4                         ; 0045e705
    PUSH 0x9                            ; 0045e708
    PUSH 0x13                           ; 0045e70a
    PUSH 0x0                            ; 0045e70c
    PUSH 0x0                            ; 0045e70e
    LEA EAX,[ESP + 0x18]                ; 0045e710
    PUSH EAX                            ; 0045e714
    CALL cockpit_drawsurf.cpp_FUN_0045bfb0 ; 0045e715
        ;   XREF to: 0045bfb0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045bfb0()
    MOV EAX,[0x005ae6fc]                ; 0045e71a | DAT_005ae6fc
    ADD ESP,0x14                        ; 0045e71f
    MOV dword ptr [ESP + 0xa8],EAX      ; 0045e722
    MOV EAX,[0x005b761c]                ; 0045e729 | DAT_005b761c
    MOV EDX,EAX                         ; 0045e72e
    SAR EDX,0x1f                        ; 0045e730
    SUB EAX,EDX                         ; 0045e733
    SAR EAX,0x1                         ; 0045e735
    MOV EBP,EAX                         ; 0045e737
    MOV EAX,[0x005b7620]                ; 0045e739 | DAT_005b7620
    MOV EDX,EAX                         ; 0045e73e
    SAR EDX,0x1f                        ; 0045e740
    SUB EAX,EDX                         ; 0045e743
    SAR EAX,0x1                         ; 0045e745
    MOV EDX,dword ptr [0x005b7620]      ; 0045e747 | DAT_005b7620
    ADD EAX,0x66                        ; 0045e74d
    DEC EDX                             ; 0045e750
    SUB EDX,EAX                         ; 0045e751
    PUSH 0x0                            ; 0045e753
    LEA EDI,[EDX + 0x1]                 ; 0045e755
    PUSH EDI                            ; 0045e758
    PUSH 0xc9                           ; 0045e759
    PUSH EAX                            ; 0045e75e
    PUSH EBP                            ; 0045e75f
    LEA EAX,[ESP + 0x9c]                ; 0045e760
    PUSH EAX                            ; 0045e767
    MOV EBX,dword ptr [ESI + 0x3170]    ; 0045e768
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480 ; 0045e76e
        ;   XREF to: 0045b480 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480()
    ADD ESP,0x18                        ; 0045e773
    PUSH 0x80                           ; 0045e776
    PUSH 0x80                           ; 0045e77b
    PUSH 0x80                           ; 0045e780
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800 ; 0045e785
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800()
    ADD ESP,0xc                         ; 0045e78a
    LEA EAX,[ESP + 0x88]                ; 0045e78d
    PUSH EAX                            ; 0045e794
    CALL cockpit_drawsurf.cpp_FUN_0045d2b0 ; 0045e795
        ;   XREF to: 0045d2b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045d2b0()
    ADD ESP,0x4                         ; 0045e79a
    PUSH 0x7                            ; 0045e79d
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e79f
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e7a4
    LEA EAX,[ESP + 0x88]                ; 0045e7a7
    PUSH EAX                            ; 0045e7ae
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70 ; 0045e7af
        ;   XREF to: 0045cb70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70()
    ADD ESP,0x4                         ; 0045e7b4
    PUSH 0xf9                           ; 0045e7b7
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e7bc
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e7c1
    PUSH ESI                            ; 0045e7c4
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0 ; 0045e7c5
        ;   XREF to: 0045baa0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0()
    ADD ESP,0x4                         ; 0045e7ca
    MOV dword ptr [ESI + 0x3184],0x1    ; 0045e7cd
    LEA EAX,[ESP + 0xa8]                ; 0045e7d7
    PUSH EAX                            ; 0045e7de
    PUSH 0x57db07                       ; 0045e7df | = "%s"
    PUSH 0x1                            ; 0045e7e4
    PUSH 0x1                            ; 0045e7e6
    LEA EAX,[ESP + 0x98]                ; 0045e7e8
    PUSH EAX                            ; 0045e7ef
    CALL cockpit_drawsurf.cpp_FUN_0045da90 ; 0045e7f0
        ;   XREF to: 0045da90 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da90()
    ADD ESP,0x14                        ; 0045e7f5
    LEA EAX,[ESP + 0xa8]                ; 0045e7f8
    PUSH EAX                            ; 0045e7ff
    PUSH 0x57db0a                       ; 0045e800 | = "%s"
    PUSH 0x1                            ; 0045e805
    PUSH 0xc7                           ; 0045e807
    LEA EAX,[ESP + 0x98]                ; 0045e80c
    PUSH EAX                            ; 0045e813
    CALL cockpit_drawsurf.cpp_FUN_0045db60 ; 0045e814
        ;   XREF to: 0045db60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045db60()
    ADD ESP,0x14                        ; 0045e819
    LEA EAX,[ESP + 0xa8]                ; 0045e81c
    PUSH EAX                            ; 0045e823
    PUSH 0x57db0d                       ; 0045e824 | = "%s"
    PUSH 0x1                            ; 0045e829
    PUSH 0x64                           ; 0045e82b
    LEA EAX,[ESP + 0x98]                ; 0045e82d
    PUSH EAX                            ; 0045e834
    CALL cockpit_drawsurf.cpp_FUN_0045dc30 ; 0045e835
        ;   XREF to: 0045dc30 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dc30()
    ADD ESP,0x14                        ; 0045e83a
    LEA EAX,[ESP + 0xa8]                ; 0045e83d
    PUSH EAX                            ; 0045e844
    PUSH 0x57db10                       ; 0045e845 | = "%s"
    LEA EBP,[EBX + 0x1]                 ; 0045e84a
    PUSH EBP                            ; 0045e84d
    PUSH 0x64                           ; 0045e84e
    LEA EAX,[ESP + 0x98]                ; 0045e850
    PUSH EAX                            ; 0045e857
    CALL cockpit_drawsurf.cpp_FUN_0045dd00 ; 0045e858
        ;   XREF to: 0045dd00 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dd00()
    ADD ESP,0x14                        ; 0045e85d
    LEA EAX,[ESP + 0xa8]                ; 0045e860
    PUSH EAX                            ; 0045e867
    LEA EAX,[EBX + EBX*0x1]             ; 0045e868
    PUSH 0x57db13                       ; 0045e86b | = "%s"
    MOV dword ptr [ESP + 0xc4],EAX      ; 0045e870
    INC EAX                             ; 0045e877
    PUSH EAX                            ; 0045e878
    PUSH 0x64                           ; 0045e879
    MOV dword ptr [ESP + 0xd0],EAX      ; 0045e87b
    LEA EAX,[ESP + 0x98]                ; 0045e882
    PUSH EAX                            ; 0045e889
    CALL cockpit_drawsurf.cpp_FUN_0045ddd0 ; 0045e88a
        ;   XREF to: 0045ddd0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045ddd0()
    ADD ESP,0x14                        ; 0045e88f
    LEA EAX,[ESP + 0xa8]                ; 0045e892
    PUSH EAX                            ; 0045e899
    LEA EAX,[EBX*0x4 + 0x0]             ; 0045e89a
    SUB EAX,EBX                         ; 0045e8a1
    MOV dword ptr [ESP + 0xb4],EAX      ; 0045e8a3
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0045e8aa
    MOV EAX,EDI                         ; 0045e8b1
    PUSH 0x57db16                       ; 0045e8b3 | = "%s"
    SUB EAX,EDX                         ; 0045e8b8
    PUSH EAX                            ; 0045e8ba
    PUSH 0x96                           ; 0045e8bb
    PUSH 0x32                           ; 0045e8c0
    MOV dword ptr [ESP + 0xc0],EAX      ; 0045e8c2
    LEA EAX,[ESP + 0x9c]                ; 0045e8c9
    PUSH EAX                            ; 0045e8d0
    CALL cockpit_drawsurf.cpp_FUN_0045dea0 ; 0045e8d1
        ;   XREF to: 0045dea0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dea0()
    ADD ESP,0x18                        ; 0045e8d6
    LEA EAX,[ESP + 0xa8]                ; 0045e8d9
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0045e8e0
    PUSH EAX                            ; 0045e8e7
    MOV EAX,EDI                         ; 0045e8e8
    SUB EAX,EDX                         ; 0045e8ea
    PUSH 0x57db19                       ; 0045e8ec | = "%s"
    MOV dword ptr [ESP + 0xc0],EAX      ; 0045e8f1
    ADD EAX,0x32                        ; 0045e8f8
    PUSH EAX                            ; 0045e8fb
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0045e8fc
    SUB EAX,0x32                        ; 0045e903
    PUSH EAX                            ; 0045e906
    PUSH 0x64                           ; 0045e907
    LEA EAX,[ESP + 0x9c]                ; 0045e909
    PUSH EAX                            ; 0045e910
    CALL cockpit_drawsurf.cpp_FUN_0045df80 ; 0045e911
        ;   XREF to: 0045df80 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045df80()
    ADD ESP,0x18                        ; 0045e916
    LEA EAX,[ESP + 0xa8]                ; 0045e919
    PUSH EAX                            ; 0045e920
    SUB EDI,EBX                         ; 0045e921
    PUSH 0x57db1c                       ; 0045e923 | = "%s"
    LEA EAX,[EDI + 0x32]                ; 0045e928
    PUSH EAX                            ; 0045e92b
    LEA EAX,[EDI + -0x32]               ; 0045e92c
    PUSH EAX                            ; 0045e92f
    PUSH 0x96                           ; 0045e930
    PUSH 0x32                           ; 0045e935
    LEA EAX,[ESP + 0xa0]                ; 0045e937
    PUSH EAX                            ; 0045e93e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070 ; 0045e93f
        ;   XREF to: 0045e070 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070()
    ADD ESP,0x1c                        ; 0045e944
    LEA EAX,[ESP + 0xa8]                ; 0045e947
    PUSH EAX                            ; 0045e94e
    PUSH 0x57db1f                       ; 0045e94f | = "%s"
    LEA EAX,[ESP + 0x90]                ; 0045e954
    PUSH EAX                            ; 0045e95b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280 ; 0045e95c
        ;   XREF to: 0045e280 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280()
    ADD ESP,0xc                         ; 0045e961
    PUSH 0xfb                           ; 0045e964
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045e969
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045e96e
    PUSH 0x1                            ; 0045e971
    PUSH 0x1                            ; 0045e973
    LEA EAX,[ESP + 0x90]                ; 0045e975
    PUSH EAX                            ; 0045e97c
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e97d
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e982
    PUSH 0x1                            ; 0045e985
    PUSH 0xc7                           ; 0045e987
    LEA EAX,[ESP + 0x90]                ; 0045e98c
    PUSH EAX                            ; 0045e993
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e994
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e999
    PUSH 0x1                            ; 0045e99c
    PUSH 0x64                           ; 0045e99e
    LEA EAX,[ESP + 0x90]                ; 0045e9a0
    PUSH EAX                            ; 0045e9a7
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e9a8
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e9ad
    PUSH EBP                            ; 0045e9b0
    PUSH 0x64                           ; 0045e9b1
    LEA EAX,[ESP + 0x90]                ; 0045e9b3
    PUSH EAX                            ; 0045e9ba
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e9bb
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e9c0
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0045e9c3
    PUSH ECX                            ; 0045e9ca
    PUSH 0x64                           ; 0045e9cb
    LEA EAX,[ESP + 0x90]                ; 0045e9cd
    PUSH EAX                            ; 0045e9d4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e9d5
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e9da
    MOV EAX,dword ptr [ESP + 0xac]      ; 0045e9dd
    PUSH EAX                            ; 0045e9e4
    PUSH 0x64                           ; 0045e9e5
    LEA EAX,[ESP + 0x90]                ; 0045e9e7
    PUSH EAX                            ; 0045e9ee
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045e9ef
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045e9f4
    MOV EDX,dword ptr [ESP + 0xb8]      ; 0045e9f7
    PUSH EDX                            ; 0045e9fe
    PUSH 0x64                           ; 0045e9ff
    LEA EAX,[ESP + 0x90]                ; 0045ea01
    PUSH EAX                            ; 0045ea08
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ea09
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ea0e
    PUSH EDI                            ; 0045ea11
    PUSH 0x64                           ; 0045ea12
    LEA EAX,[ESP + 0x90]                ; 0045ea14
    PUSH EAX                            ; 0045ea1b
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ea1c
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    MOV EAX,[0x005b761c]                ; 0045ea21 | DAT_005b761c
    MOV EDX,EAX                         ; 0045ea26
    SAR EDX,0x1f                        ; 0045ea28
    SUB EAX,EDX                         ; 0045ea2b
    SAR EAX,0x1                         ; 0045ea2d
    LEA ECX,[EAX + 0xffffff36]          ; 0045ea2f
    MOV EAX,[0x005b7620]                ; 0045ea35 | DAT_005b7620
    MOV EDX,EAX                         ; 0045ea3a
    SAR EDX,0x1f                        ; 0045ea3c
    SUB EAX,EDX                         ; 0045ea3f
    SAR EAX,0x1                         ; 0045ea41
    MOV EDX,dword ptr [0x005b7620]      ; 0045ea43 | DAT_005b7620
    ADD EAX,0x66                        ; 0045ea49
    DEC EDX                             ; 0045ea4c
    ADD ESP,0xc                         ; 0045ea4d
    SUB EDX,EAX                         ; 0045ea50
    PUSH 0x0                            ; 0045ea52
    LEA EDI,[EDX + 0x1]                 ; 0045ea54
    PUSH EDI                            ; 0045ea57
    PUSH 0xc9                           ; 0045ea58
    PUSH EAX                            ; 0045ea5d
    PUSH ECX                            ; 0045ea5e
    LEA EAX,[ESP + 0x5c]                ; 0045ea5f
    PUSH EAX                            ; 0045ea63
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480 ; 0045ea64
        ;   XREF to: 0045b480 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480()
    ADD ESP,0x18                        ; 0045ea69
    PUSH 0x80                           ; 0045ea6c
    PUSH 0x80                           ; 0045ea71
    PUSH 0x80                           ; 0045ea76
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800 ; 0045ea7b
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800()
    ADD ESP,0xc                         ; 0045ea80
    LEA EAX,[ESP + 0x48]                ; 0045ea83
    PUSH EAX                            ; 0045ea87
    CALL cockpit_drawsurf.cpp_FUN_0045d2b0 ; 0045ea88
        ;   XREF to: 0045d2b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045d2b0()
    ADD ESP,0x4                         ; 0045ea8d
    PUSH 0x7                            ; 0045ea90
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045ea92
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045ea97
    LEA EAX,[ESP + 0x48]                ; 0045ea9a
    PUSH EAX                            ; 0045ea9e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70 ; 0045ea9f
        ;   XREF to: 0045cb70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70()
    ADD ESP,0x4                         ; 0045eaa4
    PUSH 0xf9                           ; 0045eaa7
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045eaac
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045eab1
    PUSH 0x0                            ; 0045eab4
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0 ; 0045eab6
        ;   XREF to: 0045baa0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0()
    ADD ESP,0x4                         ; 0045eabb
    MOV dword ptr [ESI + 0x3184],0x1    ; 0045eabe
    LEA EAX,[ESP + 0xa8]                ; 0045eac8
    PUSH EAX                            ; 0045eacf
    PUSH 0x57db22                       ; 0045ead0 | = "%s"
    PUSH 0x1                            ; 0045ead5
    PUSH 0x1                            ; 0045ead7
    LEA EAX,[ESP + 0x58]                ; 0045ead9
    PUSH EAX                            ; 0045eadd
    CALL cockpit_drawsurf.cpp_FUN_0045da90 ; 0045eade
        ;   XREF to: 0045da90 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045da90()
    ADD ESP,0x14                        ; 0045eae3
    LEA EAX,[ESP + 0xa8]                ; 0045eae6
    PUSH EAX                            ; 0045eaed
    PUSH 0x57db25                       ; 0045eaee | = "%s"
    PUSH 0x1                            ; 0045eaf3
    PUSH 0xc7                           ; 0045eaf5
    LEA EAX,[ESP + 0x58]                ; 0045eafa
    PUSH EAX                            ; 0045eafe
    CALL cockpit_drawsurf.cpp_FUN_0045db60 ; 0045eaff
        ;   XREF to: 0045db60 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045db60()
    ADD ESP,0x14                        ; 0045eb04
    LEA EAX,[ESP + 0xa8]                ; 0045eb07
    PUSH EAX                            ; 0045eb0e
    PUSH 0x57db28                       ; 0045eb0f | = "%s"
    PUSH 0x1                            ; 0045eb14
    PUSH 0x64                           ; 0045eb16
    LEA EAX,[ESP + 0x58]                ; 0045eb18
    PUSH EAX                            ; 0045eb1c
    CALL cockpit_drawsurf.cpp_FUN_0045dc30 ; 0045eb1d
        ;   XREF to: 0045dc30 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dc30()
    ADD ESP,0x14                        ; 0045eb22
    LEA EAX,[ESP + 0xa8]                ; 0045eb25
    PUSH EAX                            ; 0045eb2c
    PUSH 0x57db2b                       ; 0045eb2d | = "%s"
    PUSH EBP                            ; 0045eb32
    PUSH 0x64                           ; 0045eb33
    LEA EAX,[ESP + 0x58]                ; 0045eb35
    PUSH EAX                            ; 0045eb39
    CALL cockpit_drawsurf.cpp_FUN_0045dd00 ; 0045eb3a
        ;   XREF to: 0045dd00 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dd00()
    ADD ESP,0x14                        ; 0045eb3f
    LEA EAX,[ESP + 0xa8]                ; 0045eb42
    PUSH EAX                            ; 0045eb49
    PUSH 0x57db2e                       ; 0045eb4a | = "%s"
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0045eb4f
    PUSH ECX                            ; 0045eb56
    PUSH 0x64                           ; 0045eb57
    LEA EAX,[ESP + 0x58]                ; 0045eb59
    PUSH EAX                            ; 0045eb5d
    CALL cockpit_drawsurf.cpp_FUN_0045ddd0 ; 0045eb5e
        ;   XREF to: 0045ddd0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045ddd0()
    ADD ESP,0x14                        ; 0045eb63
    LEA EAX,[ESP + 0xa8]                ; 0045eb66
    PUSH EAX                            ; 0045eb6d
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0045eb6e
    MOV EAX,EDI                         ; 0045eb75
    PUSH 0x57db31                       ; 0045eb77 | = "%s"
    SUB EAX,ESI                         ; 0045eb7c
    PUSH EAX                            ; 0045eb7e
    PUSH 0x96                           ; 0045eb7f
    PUSH 0x32                           ; 0045eb84
    MOV dword ptr [ESP + 0xc8],EAX      ; 0045eb86
    LEA EAX,[ESP + 0x5c]                ; 0045eb8d
    PUSH EAX                            ; 0045eb91
    MOV ESI,EDI                         ; 0045eb92
    CALL cockpit_drawsurf.cpp_FUN_0045dea0 ; 0045eb94
        ;   XREF to: 0045dea0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dea0()
    ADD ESP,0x18                        ; 0045eb99
    LEA EAX,[ESP + 0xa8]                ; 0045eb9c
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0045eba3
    PUSH EAX                            ; 0045ebaa
    SUB ESI,EDX                         ; 0045ebab
    PUSH 0x57db34                       ; 0045ebad | = "%s"
    LEA EAX,[ESI + 0x32]                ; 0045ebb2
    PUSH EAX                            ; 0045ebb5
    LEA EAX,[ESI + -0x32]               ; 0045ebb6
    PUSH EAX                            ; 0045ebb9
    PUSH 0x64                           ; 0045ebba
    LEA EAX,[ESP + 0x5c]                ; 0045ebbc
    PUSH EAX                            ; 0045ebc0
    CALL cockpit_drawsurf.cpp_FUN_0045df80 ; 0045ebc1
        ;   XREF to: 0045df80 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045df80()
    ADD ESP,0x18                        ; 0045ebc6
    LEA EAX,[ESP + 0xa8]                ; 0045ebc9
    PUSH EAX                            ; 0045ebd0
    SUB EDI,EBX                         ; 0045ebd1
    PUSH 0x57db37                       ; 0045ebd3 | = "%s"
    LEA EAX,[EDI + 0x32]                ; 0045ebd8
    PUSH EAX                            ; 0045ebdb
    LEA EAX,[EDI + -0x32]               ; 0045ebdc
    PUSH EAX                            ; 0045ebdf
    PUSH 0x96                           ; 0045ebe0
    PUSH 0x32                           ; 0045ebe5
    LEA EAX,[ESP + 0x60]                ; 0045ebe7
    PUSH EAX                            ; 0045ebeb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070 ; 0045ebec
        ;   XREF to: 0045e070 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070()
    ADD ESP,0x1c                        ; 0045ebf1
    LEA EAX,[ESP + 0xa8]                ; 0045ebf4
    PUSH EAX                            ; 0045ebfb
    PUSH 0x57db3a                       ; 0045ebfc | = "%s"
    LEA EAX,[ESP + 0x50]                ; 0045ec01
    PUSH EAX                            ; 0045ec05
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280 ; 0045ec06
        ;   XREF to: 0045e280 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280()
    ADD ESP,0xc                         ; 0045ec0b
    PUSH 0xfb                           ; 0045ec0e
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045ec13
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045ec18
    PUSH 0x1                            ; 0045ec1b
    PUSH 0x1                            ; 0045ec1d
    LEA EAX,[ESP + 0x50]                ; 0045ec1f
    PUSH EAX                            ; 0045ec23
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ec24
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ec29
    PUSH 0x1                            ; 0045ec2c
    PUSH 0xc7                           ; 0045ec2e
    LEA EAX,[ESP + 0x50]                ; 0045ec33
    PUSH EAX                            ; 0045ec37
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ec38
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ec3d
    PUSH 0x1                            ; 0045ec40
    PUSH 0x64                           ; 0045ec42
    LEA EAX,[ESP + 0x50]                ; 0045ec44
    PUSH EAX                            ; 0045ec48
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ec49
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ec4e
    PUSH EBP                            ; 0045ec51
    PUSH 0x64                           ; 0045ec52
    LEA EAX,[ESP + 0x50]                ; 0045ec54
    PUSH EAX                            ; 0045ec58
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ec59
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ec5e
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0045ec61
    PUSH ECX                            ; 0045ec68
    PUSH 0x64                           ; 0045ec69
    LEA EAX,[ESP + 0x50]                ; 0045ec6b
    PUSH EAX                            ; 0045ec6f
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ec70
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ec75
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0045ec78
    PUSH EBX                            ; 0045ec7f
    PUSH 0x64                           ; 0045ec80
    LEA EAX,[ESP + 0x50]                ; 0045ec82
    PUSH EAX                            ; 0045ec86
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ec87
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ec8c
    PUSH ESI                            ; 0045ec8f
    PUSH 0x64                           ; 0045ec90
    LEA EAX,[ESP + 0x50]                ; 0045ec92
    PUSH EAX                            ; 0045ec96
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045ec97
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ec9c
    PUSH EDI                            ; 0045ec9f
    PUSH 0x64                           ; 0045eca0
    LEA EAX,[ESP + 0x50]                ; 0045eca2
    PUSH EAX                            ; 0045eca6
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045eca7
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045ecac
    PUSH 0x4                            ; 0045ecaf
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0 ; 0045ecb1
        ;   XREF to: 0045b5f0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0()
    ADD ESP,0x4                         ; 0045ecb6
    LEA EAX,[ESP + 0x48]                ; 0045ecb9
    PUSH EAX                            ; 0045ecbd
    CALL cockpit_drawsurf.cpp_FUN_0045cfd0 ; 0045ecbe
        ;   XREF to: 0045cfd0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045cfd0()
    ADD ESP,0x4                         ; 0045ecc3
    POP EBX                             ; 0045ecc6
    POP EDI                             ; 0045ecc7
    ADD ESP,0xbc                        ; 0045ecc8
    POP EBP                             ; 0045ecce
    POP ESI                             ; 0045eccf
    RET                                 ; 0045ecd0

