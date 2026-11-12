; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_004726c0(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 00450238
;
; Referenced Globals:
;   undefined8 DAT_005f8b98
;   undefined8 DAT_005f8ba0
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_00604e78
;   undefined4 DAT_00604e98
;   undefined4 DAT_00604eb8
;   undefined4 DAT_00604ec0
;   undefined4 DAT_00604ee0
;   undefined4 DAT_00604f00
;   undefined4 DAT_00b9e14c
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004726c0
        ;   Label: core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_004726c0
    MOV EBP,ESP                         ; 004726c1
    PUSH ESI                            ; 004726c3
    PUSH EDI                            ; 004726c4
    PUSH EBP                            ; 004726c5
    MOV ECX,dword ptr [EBP + 0x18]      ; 004726c6
    MOV EDI,dword ptr [EBP + 0x8]       ; 004726c9
    MOV ESI,dword ptr [EBP + 0xc]       ; 004726cc
    MOV EBX,dword ptr [EBP + 0x10]      ; 004726cf
    MOV EBP,dword ptr [EBP + 0x14]      ; 004726d2
    PXOR MM7,MM7                        ; 004726d5
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 004726d8 | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 004726df
    PSLLW MM5,0x6                       ; 004726e2
    MOV EAX,dword ptr [ESI]             ; 004726e6
    MOV EAX,dword ptr [ESI + 0x20]      ; 004726e8
    MOV EAX,dword ptr [ESI + 0x40]      ; 004726eb
    MOV EAX,dword ptr [ESI + 0x60]      ; 004726ee
    MOV EAX,dword ptr [ESI + 0x80]      ; 004726f1
    MOV EAX,dword ptr [ESI + 0xa0]      ; 004726f7
    MOV EAX,dword ptr [ESI + 0xc0]      ; 004726fd
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00472703
    MOV EAX,dword ptr [ESI + 0x100]     ; 00472709
    MOV EAX,dword ptr [ESI + 0x120]     ; 0047270f
    MOV EAX,dword ptr [ESI + 0x140]     ; 00472715
    MOV EAX,dword ptr [ESI + 0x160]     ; 0047271b
    MOV EAX,dword ptr [ESI + 0x180]     ; 00472721
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00472727
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0047272d
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00472733
    MOV EAX,dword ptr [ESI + 0x200]     ; 00472739
    MOV EAX,dword ptr [ESI + 0x220]     ; 0047273f
    MOV EAX,dword ptr [ESI + 0x240]     ; 00472745
    MOV EAX,dword ptr [ESI + 0x260]     ; 0047274b
    MOV EAX,dword ptr [ESI + 0x280]     ; 00472751
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00472757
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 0047275d
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00472763
    MOV EAX,dword ptr [ESI + 0x300]     ; 00472769
    MOV EAX,dword ptr [ESI + 0x320]     ; 0047276f
    MOV EAX,dword ptr [ESI + 0x340]     ; 00472775
    MOV EAX,dword ptr [ESI + 0x360]     ; 0047277b
    MOV EAX,dword ptr [ESI + 0x380]     ; 00472781
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00472787
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0047278d
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00472793
    MOV EAX,dword ptr [ESI + 0x400]     ; 00472799
    MOV EAX,dword ptr [ESI + 0x420]     ; 0047279f
    MOV EAX,dword ptr [ESI + 0x440]     ; 004727a5
    MOV EAX,dword ptr [ESI + 0x460]     ; 004727ab
    MOV EAX,dword ptr [ESI + 0x480]     ; 004727b1
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 004727b7
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 004727bd
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 004727c3
    MOV EAX,dword ptr [ESI + 0x500]     ; 004727c9
    MOV EAX,dword ptr [ESI + 0x520]     ; 004727cf
    MOV EAX,dword ptr [ESI + 0x540]     ; 004727d5
    MOV EAX,dword ptr [ESI + 0x560]     ; 004727db
    MOV EAX,dword ptr [ESI + 0x580]     ; 004727e1
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 004727e7
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 004727ed
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 004727f3
    MOV EAX,dword ptr [ESI + 0x600]     ; 004727f9
    MOV EAX,dword ptr [ESI + 0x620]     ; 004727ff
    MOV EAX,dword ptr [ESI + 0x640]     ; 00472805
    MOV EAX,dword ptr [ESI + 0x660]     ; 0047280b
    MOV EAX,dword ptr [ESI + 0x680]     ; 00472811
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00472817
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0047281d
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00472823
    MOV EAX,dword ptr [ESI + 0x700]     ; 00472829
    MOV EAX,dword ptr [ESI + 0x720]     ; 0047282f
    MOV EAX,dword ptr [ESI + 0x740]     ; 00472835
    MOV EAX,dword ptr [ESI + 0x760]     ; 0047283b
    MOV EAX,dword ptr [ESI + 0x780]     ; 00472841
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00472847
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 0047284d
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00472853
    MOV EAX,dword ptr [ESI + 0x800]     ; 00472859
    MOV EAX,dword ptr [ESI + 0x820]     ; 0047285f
    MOV EAX,dword ptr [ESI + 0x840]     ; 00472865
    MOV EAX,dword ptr [ESI + 0x860]     ; 0047286b
    MOV EAX,dword ptr [ESI + 0x880]     ; 00472871
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00472877
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0047287d
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00472883
    MOV EAX,dword ptr [ESI + 0x900]     ; 00472889
    MOV EAX,dword ptr [ESI + 0x920]     ; 0047288f
    MOV EAX,dword ptr [ESI + 0x940]     ; 00472895
    MOV EAX,dword ptr [ESI + 0x960]     ; 0047289b
    MOV EAX,dword ptr [ESI + 0x980]     ; 004728a1
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004728a7
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004728ad
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004728b3
    MOV EAX,dword ptr [EBX + 0x140]     ; 004728b9
    MOV EAX,dword ptr [EBX + 0x160]     ; 004728bf
    MOV EAX,dword ptr [EBX + 0x180]     ; 004728c5
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 004728cb
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 004728d1
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 004728d7
    MOV EAX,dword ptr [EBX + 0x200]     ; 004728dd
    MOV EAX,dword ptr [EBX + 0x220]     ; 004728e3
    MOV EAX,dword ptr [EBX + 0x240]     ; 004728e9
    MOV EAX,dword ptr [EBX + 0x260]     ; 004728ef
    JMP 0x00472900                      ; 004728f5
        ;   XREF to: 00472900 (UNCONDITIONAL_JUMP)  ; LAB_00472900
    MOVZX EDX,byte ptr [EBX]            ; 00472900
        ;   Label: LAB_00472900
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00472903
    ADD EDX,EAX                         ; 0047290a
    MOVQ MM0,qword ptr [ESI]            ; 0047290c
    SHR EDX,0x1                         ; 0047290f
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 00472911
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00472918 | DAT_00b9e14c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00472920
    MOVQ MM1,MM0                        ; 00472924
    ADD EDX,EAX                         ; 00472927
    MOVZX EAX,byte ptr [EBP]            ; 00472929
    SHR EDX,0x1                         ; 0047292d
    PUNPCKLBW MM0,MM7                   ; 0047292f
    MOVD MM6,dword ptr [EDX*0x4 + 0xb9e14c] ; 00472932 | DAT_00b9e14c
    PSRLQ MM1,0x20                      ; 0047293a
    SHR EDX,0x1                         ; 0047293e
    PUNPCKLBW MM6,MM7                   ; 00472940
    PUNPCKLBW MM2,MM7                   ; 00472943
    ADD EAX,EDX                         ; 00472946
    PADDW MM6,MM2                       ; 00472948
    PUNPCKLBW MM1,MM7                   ; 0047294b
    PMULLW MM0,MM2                      ; 0047294e
    PSRLW MM6,0x1                       ; 00472951
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00472955 | DAT_005fa0e0
    PMULLW MM1,MM6                      ; 0047295d
    MOVQ MM2,MM3                        ; 00472960
    MOVQ MM4,MM5                        ; 00472963
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00472966 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 0047296d
    PMULHW MM1,MM2                      ; 00472970
    PMULHW MM4,MM3                      ; 00472973
    PADDW MM0,MM4                       ; 00472976
    PADDW MM1,MM4                       ; 00472979
    PADDW MM0,qword ptr [0x005f8b98]    ; 0047297c | DAT_005f8b98
    PADDW MM1,qword ptr [0x005f8ba0]    ; 00472983 | DAT_005f8ba0
    PSRLW MM0,0x4                       ; 0047298a
    PSRLW MM1,0x4                       ; 0047298e
    PACKUSWB MM0,MM7                    ; 00472992
    PACKUSWB MM1,MM7                    ; 00472995
    MOVQ MM2,MM0                        ; 00472998
    MOVQ MM3,MM0                        ; 0047299b
    PAND MM0,qword ptr [0x00604eb8]     ; 0047299e | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 004729a5 | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 004729ac | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 004729b3 | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 004729ba | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 004729c1 | DAT_00604ec0
    POR MM0,MM2                         ; 004729c8
    POR MM0,MM3                         ; 004729cb
    MOVQ MM2,MM1                        ; 004729ce
    MOVQ MM3,MM1                        ; 004729d1
    PAND MM1,qword ptr [0x00604eb8]     ; 004729d4 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 004729db | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 004729e2 | DAT_00604e78
    PSRLQ MM1,qword ptr [0x00604f00]    ; 004729e9 | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 004729f0 | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 004729f7 | DAT_00604ec0
    POR MM1,MM2                         ; 004729fe
    POR MM1,MM3                         ; 00472a01
    PSLLQ MM1,0x10                      ; 00472a04
    POR MM0,MM1                         ; 00472a08
    ADD ESI,0x8                         ; 00472a0b
    INC EBX                             ; 00472a0e
    INC EBP                             ; 00472a0f
    MOVD dword ptr [EDI],MM0            ; 00472a10
    ADD EDI,0x4                         ; 00472a13
    SUB ECX,0x2                         ; 00472a16
    JG 0x00472900                       ; 00472a19
        ;   XREF to: 00472900 (CONDITIONAL_JUMP)  ; LAB_00472900
    POP EBP                             ; 00472a1f
    EMMS                                ; 00472a20
    POP EDI                             ; 00472a22
    POP ESI                             ; 00472a23
    LEAVE                               ; 00472a24
    RET                                 ; 00472a25

