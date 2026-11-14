; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_0048a4b4(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 004540c0
;
; Referenced Globals:
;   undefined8 DAT_006185f8
;   undefined8 DAT_00618600
;   undefined4 DAT_00619b60
;   undefined4 DAT_0061a358
;   undefined4 DAT_00623f38
;   undefined4 DAT_00623f58
;   undefined4 DAT_00623f78
;   undefined4 DAT_00623f80
;   undefined4 DAT_00623fa0
;   undefined4 DAT_00623fc0
;   undefined4 DAT_00b8189c
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048a4b4
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_0048a4b4
    MOV EBP,ESP                         ; 0048a4b5
    PUSH ESI                            ; 0048a4b7
    PUSH EDI                            ; 0048a4b8
    PUSH EBP                            ; 0048a4b9
    MOV ECX,dword ptr [EBP + 0x18]      ; 0048a4ba
    MOV EDI,dword ptr [EBP + 0x8]       ; 0048a4bd
    MOV ESI,dword ptr [EBP + 0xc]       ; 0048a4c0
    MOV EBX,dword ptr [EBP + 0x10]      ; 0048a4c3
    MOV EBP,dword ptr [EBP + 0x14]      ; 0048a4c6
    PXOR MM7,MM7                        ; 0048a4c9
    MOVD MM5,dword ptr [0x01c51d1c]     ; 0048a4cc | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 0048a4d3
    PSLLW MM5,0x6                       ; 0048a4d6
    MOV EAX,dword ptr [ESI]             ; 0048a4da
    MOV EAX,dword ptr [ESI + 0x20]      ; 0048a4dc
    MOV EAX,dword ptr [ESI + 0x40]      ; 0048a4df
    MOV EAX,dword ptr [ESI + 0x60]      ; 0048a4e2
    MOV EAX,dword ptr [ESI + 0x80]      ; 0048a4e5
    MOV EAX,dword ptr [ESI + 0xa0]      ; 0048a4eb
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0048a4f1
    MOV EAX,dword ptr [ESI + 0xe0]      ; 0048a4f7
    MOV EAX,dword ptr [ESI + 0x100]     ; 0048a4fd
    MOV EAX,dword ptr [ESI + 0x120]     ; 0048a503
    MOV EAX,dword ptr [ESI + 0x140]     ; 0048a509
    MOV EAX,dword ptr [ESI + 0x160]     ; 0048a50f
    MOV EAX,dword ptr [ESI + 0x180]     ; 0048a515
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0048a51b
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0048a521
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 0048a527
    MOV EAX,dword ptr [ESI + 0x200]     ; 0048a52d
    MOV EAX,dword ptr [ESI + 0x220]     ; 0048a533
    MOV EAX,dword ptr [ESI + 0x240]     ; 0048a539
    MOV EAX,dword ptr [ESI + 0x260]     ; 0048a53f
    MOV EAX,dword ptr [ESI + 0x280]     ; 0048a545
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 0048a54b
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 0048a551
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 0048a557
    MOV EAX,dword ptr [ESI + 0x300]     ; 0048a55d
    MOV EAX,dword ptr [ESI + 0x320]     ; 0048a563
    MOV EAX,dword ptr [ESI + 0x340]     ; 0048a569
    MOV EAX,dword ptr [ESI + 0x360]     ; 0048a56f
    MOV EAX,dword ptr [ESI + 0x380]     ; 0048a575
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 0048a57b
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0048a581
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 0048a587
    MOV EAX,dword ptr [ESI + 0x400]     ; 0048a58d
    MOV EAX,dword ptr [ESI + 0x420]     ; 0048a593
    MOV EAX,dword ptr [ESI + 0x440]     ; 0048a599
    MOV EAX,dword ptr [ESI + 0x460]     ; 0048a59f
    MOV EAX,dword ptr [ESI + 0x480]     ; 0048a5a5
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 0048a5ab
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0048a5b1
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0048a5b7
    MOV EAX,dword ptr [ESI + 0x500]     ; 0048a5bd
    MOV EAX,dword ptr [ESI + 0x520]     ; 0048a5c3
    MOV EAX,dword ptr [ESI + 0x540]     ; 0048a5c9
    MOV EAX,dword ptr [ESI + 0x560]     ; 0048a5cf
    MOV EAX,dword ptr [ESI + 0x580]     ; 0048a5d5
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 0048a5db
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0048a5e1
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0048a5e7
    MOV EAX,dword ptr [ESI + 0x600]     ; 0048a5ed
    MOV EAX,dword ptr [ESI + 0x620]     ; 0048a5f3
    MOV EAX,dword ptr [ESI + 0x640]     ; 0048a5f9
    MOV EAX,dword ptr [ESI + 0x660]     ; 0048a5ff
    MOV EAX,dword ptr [ESI + 0x680]     ; 0048a605
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0048a60b
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0048a611
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0048a617
    MOV EAX,dword ptr [ESI + 0x700]     ; 0048a61d
    MOV EAX,dword ptr [ESI + 0x720]     ; 0048a623
    MOV EAX,dword ptr [ESI + 0x740]     ; 0048a629
    MOV EAX,dword ptr [ESI + 0x760]     ; 0048a62f
    MOV EAX,dword ptr [ESI + 0x780]     ; 0048a635
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 0048a63b
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 0048a641
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0048a647
    MOV EAX,dword ptr [ESI + 0x800]     ; 0048a64d
    MOV EAX,dword ptr [ESI + 0x820]     ; 0048a653
    MOV EAX,dword ptr [ESI + 0x840]     ; 0048a659
    MOV EAX,dword ptr [ESI + 0x860]     ; 0048a65f
    MOV EAX,dword ptr [ESI + 0x880]     ; 0048a665
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 0048a66b
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0048a671
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 0048a677
    MOV EAX,dword ptr [ESI + 0x900]     ; 0048a67d
    MOV EAX,dword ptr [ESI + 0x920]     ; 0048a683
    MOV EAX,dword ptr [ESI + 0x940]     ; 0048a689
    MOV EAX,dword ptr [ESI + 0x960]     ; 0048a68f
    MOV EAX,dword ptr [ESI + 0x980]     ; 0048a695
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 0048a69b
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0048a6a1
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 0048a6a7
    MOVZX EDX,byte ptr [EBX]            ; 0048a6ad
        ;   Label: LAB_0048a6ad
    MOVQ MM0,qword ptr [ESI]            ; 0048a6b0
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 0048a6b3 | DAT_00b8189c
    MOVZX EAX,byte ptr [EBP]            ; 0048a6bb
    PUNPCKLBW MM0,MM7                   ; 0048a6bf
    SHR EDX,0x1                         ; 0048a6c2
    PUNPCKLBW MM2,MM7                   ; 0048a6c4
    ADD EAX,EDX                         ; 0048a6c7
    PMULLW MM0,MM2                      ; 0048a6c9
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 0048a6cc | DAT_00619b60
    MOVQ MM2,MM3                        ; 0048a6d4
    MOVQ MM4,MM5                        ; 0048a6d7
    PXOR MM2,qword ptr [0x0061a358]     ; 0048a6da | DAT_0061a358
    PMULHW MM0,MM2                      ; 0048a6e1
    PMULHW MM4,MM3                      ; 0048a6e4
    PADDW MM0,MM4                       ; 0048a6e7
    PADDW MM0,qword ptr [0x006185f8]    ; 0048a6ea | DAT_006185f8
    PSRLW MM0,0x4                       ; 0048a6f1
    PACKUSWB MM0,MM7                    ; 0048a6f5
    MOVQ MM2,MM0                        ; 0048a6f8
    MOVQ MM3,MM0                        ; 0048a6fb
    PAND MM0,qword ptr [0x00623f78]     ; 0048a6fe | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 0048a705 | DAT_00623f58
    PAND MM3,qword ptr [0x00623f38]     ; 0048a70c | DAT_00623f38
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0048a713 | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0048a71a | DAT_00623fa0
    PSRLQ MM3,qword ptr [0x00623f80]    ; 0048a721 | DAT_00623f80
    POR MM0,MM2                         ; 0048a728
    POR MM0,MM3                         ; 0048a72b
    MOVQ MM6,MM0                        ; 0048a72e
    ADD ESI,0x4                         ; 0048a731
    INC EBX                             ; 0048a734
    INC EBP                             ; 0048a735
    MOVZX EDX,byte ptr [EBX]            ; 0048a736
    MOVQ MM0,qword ptr [ESI]            ; 0048a739
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 0048a73c | DAT_00b8189c
    MOVZX EAX,byte ptr [EBP]            ; 0048a744
    PUNPCKLBW MM0,MM7                   ; 0048a748
    SHR EDX,0x1                         ; 0048a74b
    PUNPCKLBW MM2,MM7                   ; 0048a74d
    ADD EAX,EDX                         ; 0048a750
    PMULLW MM0,MM2                      ; 0048a752
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 0048a755 | DAT_00619b60
    MOVQ MM2,MM3                        ; 0048a75d
    MOVQ MM4,MM5                        ; 0048a760
    PXOR MM2,qword ptr [0x0061a358]     ; 0048a763 | DAT_0061a358
    PMULHW MM0,MM2                      ; 0048a76a
    PMULHW MM4,MM3                      ; 0048a76d
    PADDW MM0,MM4                       ; 0048a770
    PADDW MM0,qword ptr [0x00618600]    ; 0048a773 | DAT_00618600
    PSRLW MM0,0x4                       ; 0048a77a
    PACKUSWB MM0,MM7                    ; 0048a77e
    MOVQ MM2,MM0                        ; 0048a781
    MOVQ MM3,MM0                        ; 0048a784
    PAND MM0,qword ptr [0x00623f78]     ; 0048a787 | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 0048a78e | DAT_00623f58
    PAND MM3,qword ptr [0x00623f38]     ; 0048a795 | DAT_00623f38
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0048a79c | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0048a7a3 | DAT_00623fa0
    PSRLQ MM3,qword ptr [0x00623f80]    ; 0048a7aa | DAT_00623f80
    POR MM0,MM2                         ; 0048a7b1
    POR MM0,MM3                         ; 0048a7b4
    PSLLQ MM0,0x10                      ; 0048a7b7
    POR MM0,MM6                         ; 0048a7bb
    MOVD dword ptr [EDI],MM0            ; 0048a7be
    ADD ESI,0x4                         ; 0048a7c1
    INC EBX                             ; 0048a7c4
    INC EBP                             ; 0048a7c5
    ADD EDI,0x4                         ; 0048a7c6
    SUB ECX,0x2                         ; 0048a7c9
    JG 0x0048a6ad                       ; 0048a7cc
        ;   XREF to: 0048a6ad (CONDITIONAL_JUMP)  ; LAB_0048a6ad
    POP EBP                             ; 0048a7d2
    EMMS                                ; 0048a7d3
    POP EDI                             ; 0048a7d5
    POP ESI                             ; 0048a7d6
    LEAVE                               ; 0048a7d7
    RET                                 ; 0048a7d8

