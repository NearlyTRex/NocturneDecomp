; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 at 00453488
;
; Referenced Globals:
;   ulonglong g_LightmapBlendBias3 = 0x20002000200020
;   ulonglong g_LightmapBlendBias4 = 0x60006000600060
;   ushort[384] g_LightmapData
;   double g_LightmapXorMask = 0.126945525291829
;   ulonglong g_RedMask32 = 0xf80000
;   ulonglong g_GreenMask32 = 0xfc00
;   ulonglong g_BlueMask32 = 0xf8
;   ulonglong g_TotalColorBits = 0x8
;   ulonglong g_GreenBlueBits = 0x5
;   ulonglong g_BlueBitShift = 0x3
;   uint[256] g_LightmapTexturePalette
;   int g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00493450
        ;   Label: core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
    MOV EBP,ESP                         ; 00493451
    PUSH ESI                            ; 00493453
    PUSH EDI                            ; 00493454
    PUSH EBP                            ; 00493455
    MOV ECX,dword ptr [EBP + 0x18]      ; 00493456
    MOV EDI,dword ptr [EBP + 0x8]       ; 00493459
    MOV ESI,dword ptr [EBP + 0xc]       ; 0049345c
    MOV EBX,dword ptr [EBP + 0x10]      ; 0049345f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00493462
    PXOR MM7,MM7                        ; 00493465
    MOVD MM5,dword ptr [0x02d052a8]     ; 00493468 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 0049346f
    PSLLW MM5,0x6                       ; 00493472
    MOV EAX,dword ptr [ESI]             ; 00493476
    MOV EAX,dword ptr [ESI + 0x20]      ; 00493478
    MOV EAX,dword ptr [ESI + 0x40]      ; 0049347b
    MOV EAX,dword ptr [ESI + 0x60]      ; 0049347e
    MOV EAX,dword ptr [ESI + 0x80]      ; 00493481
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00493487
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0049348d
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00493493
    MOV EAX,dword ptr [ESI + 0x100]     ; 00493499
    MOV EAX,dword ptr [ESI + 0x120]     ; 0049349f
    MOV EAX,dword ptr [ESI + 0x140]     ; 004934a5
    MOV EAX,dword ptr [ESI + 0x160]     ; 004934ab
    MOV EAX,dword ptr [ESI + 0x180]     ; 004934b1
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004934b7
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004934bd
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004934c3
    MOV EAX,dword ptr [ESI + 0x200]     ; 004934c9
    MOV EAX,dword ptr [ESI + 0x220]     ; 004934cf
    MOV EAX,dword ptr [ESI + 0x240]     ; 004934d5
    MOV EAX,dword ptr [ESI + 0x260]     ; 004934db
    MOV EAX,dword ptr [ESI + 0x280]     ; 004934e1
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004934e7
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004934ed
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004934f3
    MOV EAX,dword ptr [ESI + 0x300]     ; 004934f9
    MOV EAX,dword ptr [ESI + 0x320]     ; 004934ff
    MOV EAX,dword ptr [ESI + 0x340]     ; 00493505
    MOV EAX,dword ptr [ESI + 0x360]     ; 0049350b
    MOV EAX,dword ptr [ESI + 0x380]     ; 00493511
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00493517
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0049351d
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00493523
    MOV EAX,dword ptr [ESI + 0x400]     ; 00493529
    MOV EAX,dword ptr [ESI + 0x420]     ; 0049352f
    MOV EAX,dword ptr [ESI + 0x440]     ; 00493535
    MOV EAX,dword ptr [ESI + 0x460]     ; 0049353b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00493541
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00493547
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0049354d
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00493553
    MOV EAX,dword ptr [ESI + 0x500]     ; 00493559
    MOV EAX,dword ptr [ESI + 0x520]     ; 0049355f
    MOV EAX,dword ptr [ESI + 0x540]     ; 00493565
    MOV EAX,dword ptr [ESI + 0x560]     ; 0049356b
    MOV EAX,dword ptr [ESI + 0x580]     ; 00493571
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00493577
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0049357d
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00493583
    MOV EAX,dword ptr [ESI + 0x600]     ; 00493589
    MOV EAX,dword ptr [ESI + 0x620]     ; 0049358f
    MOV EAX,dword ptr [ESI + 0x640]     ; 00493595
    MOV EAX,dword ptr [ESI + 0x660]     ; 0049359b
    MOV EAX,dword ptr [ESI + 0x680]     ; 004935a1
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 004935a7
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 004935ad
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 004935b3
    MOV EAX,dword ptr [ESI + 0x700]     ; 004935b9
    MOV EAX,dword ptr [ESI + 0x720]     ; 004935bf
    MOV EAX,dword ptr [ESI + 0x740]     ; 004935c5
    MOV EAX,dword ptr [ESI + 0x760]     ; 004935cb
    MOV EAX,dword ptr [ESI + 0x780]     ; 004935d1
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004935d7
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004935dd
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004935e3
    MOV EAX,dword ptr [ESI + 0x800]     ; 004935e9
    MOV EAX,dword ptr [ESI + 0x820]     ; 004935ef
    MOV EAX,dword ptr [ESI + 0x840]     ; 004935f5
    MOV EAX,dword ptr [ESI + 0x860]     ; 004935fb
    MOV EAX,dword ptr [ESI + 0x880]     ; 00493601
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00493607
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0049360d
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00493613
    MOV EAX,dword ptr [ESI + 0x900]     ; 00493619
    MOV EAX,dword ptr [ESI + 0x920]     ; 0049361f
    MOV EAX,dword ptr [ESI + 0x940]     ; 00493625
    MOV EAX,dword ptr [ESI + 0x960]     ; 0049362b
    MOV EAX,dword ptr [ESI + 0x980]     ; 00493631
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00493637
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0049363d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00493643
    MOV EAX,dword ptr [EBX + 0x140]     ; 00493649
    MOV EAX,dword ptr [EBX + 0x160]     ; 0049364f
    MOV EAX,dword ptr [EBX + 0x180]     ; 00493655
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0049365b
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 00493661
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 00493667
    MOV EAX,dword ptr [EBX + 0x200]     ; 0049366d
    MOV EAX,dword ptr [EBX + 0x220]     ; 00493673
    MOV EAX,dword ptr [EBX + 0x240]     ; 00493679
    MOV EAX,dword ptr [EBX + 0x260]     ; 0049367f
    JMP 0x00493690                      ; 00493685
        ;   XREF to: 00493690 (UNCONDITIONAL_JUMP)  ; LAB_00493690
    MOVZX EDX,byte ptr [EBX]            ; 00493690
        ;   Label: LAB_00493690
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00493693
    ADD EDX,EAX                         ; 0049369a
    MOVQ MM0,qword ptr [ESI]            ; 0049369c
    SHR EDX,0x1                         ; 0049369f
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 004936a1
    MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc] ; 004936a8 | g_LightmapTexturePalette
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 004936b0
    MOVQ MM1,MM0                        ; 004936b4
    ADD EDX,EAX                         ; 004936b7
    MOVZX EAX,byte ptr [EBP]            ; 004936b9
    SHR EDX,0x1                         ; 004936bd
    PUNPCKLBW MM0,MM7                   ; 004936bf
    MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc] ; 004936c2 | g_LightmapTexturePalette
    PSRLQ MM1,0x20                      ; 004936ca
    SHR EDX,0x1                         ; 004936ce
    PUNPCKLBW MM6,MM7                   ; 004936d0
    PUNPCKLBW MM2,MM7                   ; 004936d3
    ADD EAX,EDX                         ; 004936d6
    PADDW MM6,MM2                       ; 004936d8
    PUNPCKLBW MM1,MM7                   ; 004936db
    PMULLW MM0,MM2                      ; 004936de
    PSRLW MM6,0x1                       ; 004936e1
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0] ; 004936e5 | g_LightmapData
    PMULLW MM1,MM6                      ; 004936ed
    MOVQ MM2,MM3                        ; 004936f0
    MOVQ MM4,MM5                        ; 004936f3
    PXOR MM2,qword ptr [0x006781e8]     ; 004936f6 | g_LightmapXorMask
    PMULHW MM0,MM2                      ; 004936fd
    PMULHW MM1,MM2                      ; 00493700
    PMULHW MM4,MM3                      ; 00493703
    PADDW MM0,MM4                       ; 00493706
    PADDW MM1,MM4                       ; 00493709
    PADDW MM0,qword ptr [0x006764a8]    ; 0049370c | g_LightmapBlendBias3
    PADDW MM1,qword ptr [0x006764b0]    ; 00493713 | g_LightmapBlendBias4
    PSRLW MM0,0x4                       ; 0049371a
    PSRLW MM1,0x4                       ; 0049371e
    PACKUSWB MM0,MM7                    ; 00493722
    PACKUSWB MM1,MM7                    ; 00493725
    MOVQ MM2,MM0                        ; 00493728
    MOVQ MM3,MM0                        ; 0049372b
    PAND MM0,qword ptr [0x006827a0]     ; 0049372e | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 00493735 | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 0049373c | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 00493743 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 0049374a | g_GreenBlueBits
    PSRLQ MM3,qword ptr [0x006827a8]    ; 00493751 | g_TotalColorBits
    POR MM0,MM2                         ; 00493758
    POR MM0,MM3                         ; 0049375b
    MOVQ MM2,MM1                        ; 0049375e
    MOVQ MM3,MM1                        ; 00493761
    PAND MM1,qword ptr [0x006827a0]     ; 00493764 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 0049376b | g_GreenMask32
    PAND MM3,qword ptr [0x00682760]     ; 00493772 | g_RedMask32
    PSRLQ MM1,qword ptr [0x006827e8]    ; 00493779 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 00493780 | g_GreenBlueBits
    PSRLQ MM3,qword ptr [0x006827a8]    ; 00493787 | g_TotalColorBits
    POR MM1,MM2                         ; 0049378e
    POR MM1,MM3                         ; 00493791
    PSLLQ MM1,0x10                      ; 00493794
    POR MM0,MM1                         ; 00493798
    ADD ESI,0x8                         ; 0049379b
    INC EBX                             ; 0049379e
    INC EBP                             ; 0049379f
    MOVD dword ptr [EDI],MM0            ; 004937a0
    ADD EDI,0x4                         ; 004937a3
    SUB ECX,0x2                         ; 004937a6
    JG 0x00493690                       ; 004937a9
        ;   XREF to: 00493690 (CONDITIONAL_JUMP)  ; LAB_00493690
    POP EBP                             ; 004937af
    EMMS                                ; 004937b0
    POP EDI                             ; 004937b2
    POP ESI                             ; 004937b3
    LEAVE                               ; 004937b4
    RET                                 ; 004937b5

