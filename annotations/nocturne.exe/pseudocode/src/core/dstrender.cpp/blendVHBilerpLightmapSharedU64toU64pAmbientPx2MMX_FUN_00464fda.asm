; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_FUN_004470f0 at 00447491
;
; Referenced Globals:
;   undefined8 DAT_005b4798
;   undefined8 DAT_005b47a0
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b64f8
;   undefined4 DAT_00b0e1fc
;   undefined4 DAT_01c039a8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00464fda
        ;   Label: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda
    MOV EBP,ESP                         ; 00464fdb
    PUSH ESI                            ; 00464fdd
    PUSH EDI                            ; 00464fde
    PUSH EBP                            ; 00464fdf
    MOV ECX,dword ptr [EBP + 0x18]      ; 00464fe0
    MOV EDI,dword ptr [EBP + 0x8]       ; 00464fe3
    MOV ESI,dword ptr [EBP + 0xc]       ; 00464fe6
    MOV EBX,dword ptr [EBP + 0x10]      ; 00464fe9
    MOV EBP,dword ptr [EBP + 0x14]      ; 00464fec
    PXOR MM7,MM7                        ; 00464fef
    MOVD MM5,dword ptr [0x01c039a8]     ; 00464ff2 | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 00464ff9
    PSLLW MM5,0x6                       ; 00464ffc
    MOV EAX,dword ptr [ESI]             ; 00465000
    MOV EAX,dword ptr [ESI + 0x20]      ; 00465002
    MOV EAX,dword ptr [ESI + 0x40]      ; 00465005
    MOV EAX,dword ptr [ESI + 0x60]      ; 00465008
    MOV EAX,dword ptr [ESI + 0x80]      ; 0046500b
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00465011
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00465017
    MOV EAX,dword ptr [ESI + 0xe0]      ; 0046501d
    MOV EAX,dword ptr [ESI + 0x100]     ; 00465023
    MOV EAX,dword ptr [ESI + 0x120]     ; 00465029
    MOV EAX,dword ptr [ESI + 0x140]     ; 0046502f
    MOV EAX,dword ptr [ESI + 0x160]     ; 00465035
    MOV EAX,dword ptr [ESI + 0x180]     ; 0046503b
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00465041
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00465047
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 0046504d
    MOV EAX,dword ptr [ESI + 0x200]     ; 00465053
    MOV EAX,dword ptr [ESI + 0x220]     ; 00465059
    MOV EAX,dword ptr [ESI + 0x240]     ; 0046505f
    MOV EAX,dword ptr [ESI + 0x260]     ; 00465065
    MOV EAX,dword ptr [ESI + 0x280]     ; 0046506b
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00465071
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00465077
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 0046507d
    MOV EAX,dword ptr [ESI + 0x300]     ; 00465083
    MOV EAX,dword ptr [ESI + 0x320]     ; 00465089
    MOV EAX,dword ptr [ESI + 0x340]     ; 0046508f
    MOV EAX,dword ptr [ESI + 0x360]     ; 00465095
    MOV EAX,dword ptr [ESI + 0x380]     ; 0046509b
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 004650a1
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 004650a7
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 004650ad
    MOV EAX,dword ptr [ESI + 0x400]     ; 004650b3
    MOV EAX,dword ptr [ESI + 0x420]     ; 004650b9
    MOV EAX,dword ptr [ESI + 0x440]     ; 004650bf
    MOV EAX,dword ptr [ESI + 0x460]     ; 004650c5
    MOV EAX,dword ptr [ESI + 0x480]     ; 004650cb
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 004650d1
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 004650d7
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 004650dd
    MOV EAX,dword ptr [ESI + 0x500]     ; 004650e3
    MOV EAX,dword ptr [ESI + 0x520]     ; 004650e9
    MOV EAX,dword ptr [ESI + 0x540]     ; 004650ef
    MOV EAX,dword ptr [ESI + 0x560]     ; 004650f5
    MOV EAX,dword ptr [ESI + 0x580]     ; 004650fb
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00465101
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00465107
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0046510d
    MOV EAX,dword ptr [ESI + 0x600]     ; 00465113
    MOV EAX,dword ptr [ESI + 0x620]     ; 00465119
    MOV EAX,dword ptr [ESI + 0x640]     ; 0046511f
    MOV EAX,dword ptr [ESI + 0x660]     ; 00465125
    MOV EAX,dword ptr [ESI + 0x680]     ; 0046512b
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00465131
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00465137
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0046513d
    MOV EAX,dword ptr [ESI + 0x700]     ; 00465143
    MOV EAX,dword ptr [ESI + 0x720]     ; 00465149
    MOV EAX,dword ptr [ESI + 0x740]     ; 0046514f
    MOV EAX,dword ptr [ESI + 0x760]     ; 00465155
    MOV EAX,dword ptr [ESI + 0x780]     ; 0046515b
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00465161
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00465167
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0046516d
    MOV EAX,dword ptr [ESI + 0x800]     ; 00465173
    MOV EAX,dword ptr [ESI + 0x820]     ; 00465179
    MOV EAX,dword ptr [ESI + 0x840]     ; 0046517f
    MOV EAX,dword ptr [ESI + 0x860]     ; 00465185
    MOV EAX,dword ptr [ESI + 0x880]     ; 0046518b
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00465191
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00465197
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 0046519d
    MOV EAX,dword ptr [ESI + 0x900]     ; 004651a3
    MOV EAX,dword ptr [ESI + 0x920]     ; 004651a9
    MOV EAX,dword ptr [ESI + 0x940]     ; 004651af
    MOV EAX,dword ptr [ESI + 0x960]     ; 004651b5
    MOV EAX,dword ptr [ESI + 0x980]     ; 004651bb
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004651c1
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004651c7
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004651cd
    MOV EAX,dword ptr [EBX + 0x140]     ; 004651d3
    MOV EAX,dword ptr [EBX + 0x160]     ; 004651d9
    MOV EAX,dword ptr [EBX + 0x180]     ; 004651df
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 004651e5
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 004651eb
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 004651f1
    MOV EAX,dword ptr [EBX + 0x200]     ; 004651f7
    MOV EAX,dword ptr [EBX + 0x220]     ; 004651fd
    MOV EAX,dword ptr [EBX + 0x240]     ; 00465203
    MOV EAX,dword ptr [EBX + 0x260]     ; 00465209
    JMP 0x00465220                      ; 0046520f
        ;   XREF to: 00465220 (UNCONDITIONAL_JUMP)  ; LAB_00465220
    MOVZX EDX,byte ptr [EBX]            ; 00465220
        ;   Label: LAB_00465220
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00465223
    ADD EDX,EAX                         ; 0046522a
    MOVQ MM0,qword ptr [ESI]            ; 0046522c
    SHR EDX,0x1                         ; 0046522f
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 00465231
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00465238 | DAT_00b0e1fc
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00465240
    MOVQ MM1,MM0                        ; 00465244
    ADD EDX,EAX                         ; 00465247
    MOVZX EAX,byte ptr [EBP]            ; 00465249
    SHR EDX,0x1                         ; 0046524d
    PUNPCKLBW MM0,MM7                   ; 0046524f
    MOVD MM6,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00465252 | DAT_00b0e1fc
    PSRLQ MM1,0x20                      ; 0046525a
    SHR EDX,0x1                         ; 0046525e
    PUNPCKLBW MM6,MM7                   ; 00465260
    PUNPCKLBW MM2,MM7                   ; 00465263
    ADD EAX,EDX                         ; 00465266
    PADDW MM6,MM2                       ; 00465268
    PUNPCKLBW MM1,MM7                   ; 0046526b
    PMULLW MM0,MM2                      ; 0046526e
    PSRLW MM6,0x1                       ; 00465271
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00465275 | DAT_005b5d00
    PMULLW MM1,MM6                      ; 0046527d
    MOVQ MM2,MM3                        ; 00465280
    MOVQ MM4,MM5                        ; 00465283
    PXOR MM2,qword ptr [0x005b64f8]     ; 00465286 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 0046528d
    PMULHW MM1,MM2                      ; 00465290
    PMULHW MM4,MM3                      ; 00465293
    PADDW MM0,MM4                       ; 00465296
    PADDW MM1,MM4                       ; 00465299
    PADDW MM0,qword ptr [0x005b4798]    ; 0046529c | DAT_005b4798
    PADDW MM1,qword ptr [0x005b47a0]    ; 004652a3 | DAT_005b47a0
    PSRLW MM0,0x4                       ; 004652aa
    PSRLW MM1,0x4                       ; 004652ae
    PACKUSWB MM0,MM1                    ; 004652b2
    ADD ESI,0x8                         ; 004652b5
    INC EBX                             ; 004652b8
    INC EBP                             ; 004652b9
    MOVQ qword ptr [EDI],MM0            ; 004652ba
    ADD EDI,0x8                         ; 004652bd
    SUB ECX,0x2                         ; 004652c0
    JG 0x00465220                       ; 004652c3
        ;   XREF to: 00465220 (CONDITIONAL_JUMP)  ; LAB_00465220
    POP EBP                             ; 004652c9
    EMMS                                ; 004652ca
    POP EDI                             ; 004652cc
    POP ESI                             ; 004652cd
    LEAVE                               ; 004652ce
    RET                                 ; 004652cf

