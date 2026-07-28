; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0 at 00447319
;
; Referenced Globals:
;   undefined8 DAT_005b47b8
;   undefined8 DAT_005b47c0
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b64f8
;   undefined4 DAT_005bf5d0
;   undefined4 DAT_005bf5f0
;   undefined4 DAT_005bf610
;   undefined4 DAT_005bf618
;   undefined4 DAT_005bf638
;   undefined4 DAT_005bf658
;   undefined4 DAT_00b0e1fc
;   undefined4 DAT_01c039a8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00466520
        ;   Label: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520
    MOV EBP,ESP                         ; 00466521
    PUSH ESI                            ; 00466523
    PUSH EDI                            ; 00466524
    PUSH EBP                            ; 00466525
    MOV ECX,dword ptr [EBP + 0x18]      ; 00466526
    MOV EDI,dword ptr [EBP + 0x8]       ; 00466529
    MOV ESI,dword ptr [EBP + 0xc]       ; 0046652c
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046652f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00466532
    PXOR MM7,MM7                        ; 00466535
    MOVD MM5,dword ptr [0x01c039a8]     ; 00466538 | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 0046653f
    PSLLW MM5,0x6                       ; 00466542
    MOV EAX,dword ptr [ESI]             ; 00466546
    MOV EAX,dword ptr [ESI + 0x20]      ; 00466548
    MOV EAX,dword ptr [ESI + 0x40]      ; 0046654b
    MOV EAX,dword ptr [ESI + 0x60]      ; 0046654e
    MOV EAX,dword ptr [ESI + 0x80]      ; 00466551
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00466557
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0046655d
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00466563
    MOV EAX,dword ptr [ESI + 0x100]     ; 00466569
    MOV EAX,dword ptr [ESI + 0x120]     ; 0046656f
    MOV EAX,dword ptr [ESI + 0x140]     ; 00466575
    MOV EAX,dword ptr [ESI + 0x160]     ; 0046657b
    MOV EAX,dword ptr [ESI + 0x180]     ; 00466581
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00466587
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0046658d
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00466593
    MOV EAX,dword ptr [ESI + 0x200]     ; 00466599
    MOV EAX,dword ptr [ESI + 0x220]     ; 0046659f
    MOV EAX,dword ptr [ESI + 0x240]     ; 004665a5
    MOV EAX,dword ptr [ESI + 0x260]     ; 004665ab
    MOV EAX,dword ptr [ESI + 0x280]     ; 004665b1
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004665b7
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004665bd
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004665c3
    MOV EAX,dword ptr [ESI + 0x300]     ; 004665c9
    MOV EAX,dword ptr [ESI + 0x320]     ; 004665cf
    MOV EAX,dword ptr [ESI + 0x340]     ; 004665d5
    MOV EAX,dword ptr [ESI + 0x360]     ; 004665db
    MOV EAX,dword ptr [ESI + 0x380]     ; 004665e1
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 004665e7
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 004665ed
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 004665f3
    MOV EAX,dword ptr [ESI + 0x400]     ; 004665f9
    MOV EAX,dword ptr [ESI + 0x420]     ; 004665ff
    MOV EAX,dword ptr [ESI + 0x440]     ; 00466605
    MOV EAX,dword ptr [ESI + 0x460]     ; 0046660b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00466611
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00466617
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0046661d
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00466623
    MOV EAX,dword ptr [ESI + 0x500]     ; 00466629
    MOV EAX,dword ptr [ESI + 0x520]     ; 0046662f
    MOV EAX,dword ptr [ESI + 0x540]     ; 00466635
    MOV EAX,dword ptr [ESI + 0x560]     ; 0046663b
    MOV EAX,dword ptr [ESI + 0x580]     ; 00466641
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00466647
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0046664d
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00466653
    MOV EAX,dword ptr [ESI + 0x600]     ; 00466659
    MOV EAX,dword ptr [ESI + 0x620]     ; 0046665f
    MOV EAX,dword ptr [ESI + 0x640]     ; 00466665
    MOV EAX,dword ptr [ESI + 0x660]     ; 0046666b
    MOV EAX,dword ptr [ESI + 0x680]     ; 00466671
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00466677
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0046667d
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00466683
    MOV EAX,dword ptr [ESI + 0x700]     ; 00466689
    MOV EAX,dword ptr [ESI + 0x720]     ; 0046668f
    MOV EAX,dword ptr [ESI + 0x740]     ; 00466695
    MOV EAX,dword ptr [ESI + 0x760]     ; 0046669b
    MOV EAX,dword ptr [ESI + 0x780]     ; 004666a1
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004666a7
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004666ad
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004666b3
    MOV EAX,dword ptr [ESI + 0x800]     ; 004666b9
    MOV EAX,dword ptr [ESI + 0x820]     ; 004666bf
    MOV EAX,dword ptr [ESI + 0x840]     ; 004666c5
    MOV EAX,dword ptr [ESI + 0x860]     ; 004666cb
    MOV EAX,dword ptr [ESI + 0x880]     ; 004666d1
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004666d7
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004666dd
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 004666e3
    MOV EAX,dword ptr [ESI + 0x900]     ; 004666e9
    MOV EAX,dword ptr [ESI + 0x920]     ; 004666ef
    MOV EAX,dword ptr [ESI + 0x940]     ; 004666f5
    MOV EAX,dword ptr [ESI + 0x960]     ; 004666fb
    MOV EAX,dword ptr [ESI + 0x980]     ; 00466701
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00466707
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0046670d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00466713
    MOV EAX,dword ptr [EBX + 0x140]     ; 00466719
    MOV EAX,dword ptr [EBX + 0x160]     ; 0046671f
    MOV EAX,dword ptr [EBX + 0x180]     ; 00466725
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0046672b
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 00466731
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 00466737
    MOV EAX,dword ptr [EBX + 0x200]     ; 0046673d
    MOV EAX,dword ptr [EBX + 0x220]     ; 00466743
    MOV EAX,dword ptr [EBX + 0x240]     ; 00466749
    MOV EAX,dword ptr [EBX + 0x260]     ; 0046674f
    JMP 0x00466760                      ; 00466755
        ;   XREF to: 00466760 (UNCONDITIONAL_JUMP)  ; LAB_00466760
    MOVZX EDX,byte ptr [EBX]            ; 00466760
        ;   Label: LAB_00466760
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00466763
    ADD EDX,EAX                         ; 0046676a
    MOVQ MM0,qword ptr [ESI]            ; 0046676c
    SHR EDX,0x1                         ; 0046676f
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 00466771
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00466778 | DAT_00b0e1fc
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00466780
    MOVQ MM1,MM0                        ; 00466784
    ADD EDX,EAX                         ; 00466787
    MOVZX EAX,byte ptr [EBP]            ; 00466789
    SHR EDX,0x1                         ; 0046678d
    PUNPCKLBW MM0,MM7                   ; 0046678f
    MOVD MM6,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00466792 | DAT_00b0e1fc
    PSRLQ MM1,0x20                      ; 0046679a
    SHR EDX,0x1                         ; 0046679e
    PUNPCKLBW MM6,MM7                   ; 004667a0
    PUNPCKLBW MM2,MM7                   ; 004667a3
    ADD EAX,EDX                         ; 004667a6
    PADDW MM6,MM2                       ; 004667a8
    PUNPCKLBW MM1,MM7                   ; 004667ab
    PMULLW MM0,MM2                      ; 004667ae
    PSRLW MM6,0x1                       ; 004667b1
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 004667b5 | DAT_005b5d00
    PMULLW MM1,MM6                      ; 004667bd
    MOVQ MM2,MM3                        ; 004667c0
    MOVQ MM4,MM5                        ; 004667c3
    PXOR MM2,qword ptr [0x005b64f8]     ; 004667c6 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 004667cd
    PMULHW MM1,MM2                      ; 004667d0
    PMULHW MM4,MM3                      ; 004667d3
    PADDW MM0,MM4                       ; 004667d6
    PADDW MM1,MM4                       ; 004667d9
    PADDW MM0,qword ptr [0x005b47b8]    ; 004667dc | DAT_005b47b8
    PADDW MM1,qword ptr [0x005b47c0]    ; 004667e3 | DAT_005b47c0
    PSRLW MM0,0x4                       ; 004667ea
    PSRLW MM1,0x4                       ; 004667ee
    PACKUSWB MM0,MM7                    ; 004667f2
    PACKUSWB MM1,MM7                    ; 004667f5
    MOVQ MM2,MM0                        ; 004667f8
    MOVQ MM3,MM0                        ; 004667fb
    PAND MM0,qword ptr [0x005bf610]     ; 004667fe | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 00466805 | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 0046680c | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 00466813 | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 0046681a | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 00466821 | DAT_005bf618
    POR MM0,MM2                         ; 00466828
    POR MM0,MM3                         ; 0046682b
    MOVQ MM2,MM1                        ; 0046682e
    MOVQ MM3,MM1                        ; 00466831
    PAND MM1,qword ptr [0x005bf610]     ; 00466834 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 0046683b | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 00466842 | DAT_005bf5d0
    PSRLQ MM1,qword ptr [0x005bf658]    ; 00466849 | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 00466850 | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 00466857 | DAT_005bf618
    POR MM1,MM2                         ; 0046685e
    POR MM1,MM3                         ; 00466861
    PSLLQ MM1,0x10                      ; 00466864
    POR MM0,MM1                         ; 00466868
    ADD ESI,0x8                         ; 0046686b
    INC EBX                             ; 0046686e
    INC EBP                             ; 0046686f
    MOVD dword ptr [EDI],MM0            ; 00466870
    ADD EDI,0x4                         ; 00466873
    SUB ECX,0x2                         ; 00466876
    JG 0x00466760                       ; 00466879
        ;   XREF to: 00466760 (CONDITIONAL_JUMP)  ; LAB_00466760
    POP EBP                             ; 0046687f
    EMMS                                ; 00466880
    POP EDI                             ; 00466882
    POP ESI                             ; 00466883
    LEAVE                               ; 00466884
    RET                                 ; 00466885

