; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00470f0a(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 0045039e
;
; Referenced Globals:
;   undefined8 DAT_005f8b78
;   undefined8 DAT_005f8b80
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_00b9e14c
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00470f0a
        ;   Label: core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00470f0a
    MOV EBP,ESP                         ; 00470f0b
    PUSH ESI                            ; 00470f0d
    PUSH EDI                            ; 00470f0e
    PUSH EBP                            ; 00470f0f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00470f10
    MOV EDI,dword ptr [EBP + 0x8]       ; 00470f13
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470f16
    MOV EBX,dword ptr [EBP + 0x10]      ; 00470f19
    MOV EBP,dword ptr [EBP + 0x14]      ; 00470f1c
    PXOR MM7,MM7                        ; 00470f1f
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00470f22 | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00470f29
    PSLLW MM5,0x6                       ; 00470f2c
    MOV EAX,dword ptr [ESI]             ; 00470f30
    MOV EAX,dword ptr [ESI + 0x20]      ; 00470f32
    MOV EAX,dword ptr [ESI + 0x40]      ; 00470f35
    MOV EAX,dword ptr [ESI + 0x60]      ; 00470f38
    MOV EAX,dword ptr [ESI + 0x80]      ; 00470f3b
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00470f41
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00470f47
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00470f4d
    MOV EAX,dword ptr [ESI + 0x100]     ; 00470f53
    MOV EAX,dword ptr [ESI + 0x120]     ; 00470f59
    MOV EAX,dword ptr [ESI + 0x140]     ; 00470f5f
    MOV EAX,dword ptr [ESI + 0x160]     ; 00470f65
    MOV EAX,dword ptr [ESI + 0x180]     ; 00470f6b
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00470f71
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00470f77
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00470f7d
    MOV EAX,dword ptr [ESI + 0x200]     ; 00470f83
    MOV EAX,dword ptr [ESI + 0x220]     ; 00470f89
    MOV EAX,dword ptr [ESI + 0x240]     ; 00470f8f
    MOV EAX,dword ptr [ESI + 0x260]     ; 00470f95
    MOV EAX,dword ptr [ESI + 0x280]     ; 00470f9b
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00470fa1
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00470fa7
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00470fad
    MOV EAX,dword ptr [ESI + 0x300]     ; 00470fb3
    MOV EAX,dword ptr [ESI + 0x320]     ; 00470fb9
    MOV EAX,dword ptr [ESI + 0x340]     ; 00470fbf
    MOV EAX,dword ptr [ESI + 0x360]     ; 00470fc5
    MOV EAX,dword ptr [ESI + 0x380]     ; 00470fcb
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00470fd1
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00470fd7
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00470fdd
    MOV EAX,dword ptr [ESI + 0x400]     ; 00470fe3
    MOV EAX,dword ptr [ESI + 0x420]     ; 00470fe9
    MOV EAX,dword ptr [ESI + 0x440]     ; 00470fef
    MOV EAX,dword ptr [ESI + 0x460]     ; 00470ff5
    MOV EAX,dword ptr [ESI + 0x480]     ; 00470ffb
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00471001
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00471007
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0047100d
    MOV EAX,dword ptr [ESI + 0x500]     ; 00471013
    MOV EAX,dword ptr [ESI + 0x520]     ; 00471019
    MOV EAX,dword ptr [ESI + 0x540]     ; 0047101f
    MOV EAX,dword ptr [ESI + 0x560]     ; 00471025
    MOV EAX,dword ptr [ESI + 0x580]     ; 0047102b
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00471031
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00471037
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0047103d
    MOV EAX,dword ptr [ESI + 0x600]     ; 00471043
    MOV EAX,dword ptr [ESI + 0x620]     ; 00471049
    MOV EAX,dword ptr [ESI + 0x640]     ; 0047104f
    MOV EAX,dword ptr [ESI + 0x660]     ; 00471055
    MOV EAX,dword ptr [ESI + 0x680]     ; 0047105b
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00471061
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00471067
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0047106d
    MOV EAX,dword ptr [ESI + 0x700]     ; 00471073
    MOV EAX,dword ptr [ESI + 0x720]     ; 00471079
    MOV EAX,dword ptr [ESI + 0x740]     ; 0047107f
    MOV EAX,dword ptr [ESI + 0x760]     ; 00471085
    MOV EAX,dword ptr [ESI + 0x780]     ; 0047108b
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00471091
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00471097
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0047109d
    MOV EAX,dword ptr [ESI + 0x800]     ; 004710a3
    MOV EAX,dword ptr [ESI + 0x820]     ; 004710a9
    MOV EAX,dword ptr [ESI + 0x840]     ; 004710af
    MOV EAX,dword ptr [ESI + 0x860]     ; 004710b5
    MOV EAX,dword ptr [ESI + 0x880]     ; 004710bb
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004710c1
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004710c7
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 004710cd
    MOV EAX,dword ptr [ESI + 0x900]     ; 004710d3
    MOV EAX,dword ptr [ESI + 0x920]     ; 004710d9
    MOV EAX,dword ptr [ESI + 0x940]     ; 004710df
    MOV EAX,dword ptr [ESI + 0x960]     ; 004710e5
    MOV EAX,dword ptr [ESI + 0x980]     ; 004710eb
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004710f1
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004710f7
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004710fd
    MOV EAX,dword ptr [EBX + 0x140]     ; 00471103
    MOV EAX,dword ptr [EBX + 0x160]     ; 00471109
    MOV EAX,dword ptr [EBX + 0x180]     ; 0047110f
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00471115
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 0047111b
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 00471121
    MOV EAX,dword ptr [EBX + 0x200]     ; 00471127
    MOV EAX,dword ptr [EBX + 0x220]     ; 0047112d
    MOV EAX,dword ptr [EBX + 0x240]     ; 00471133
    MOV EAX,dword ptr [EBX + 0x260]     ; 00471139
    JMP 0x00471150                      ; 0047113f
        ;   XREF to: 00471150 (UNCONDITIONAL_JUMP)  ; LAB_00471150
    MOVZX EDX,byte ptr [EBX]            ; 00471150
        ;   Label: LAB_00471150
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00471153
    ADD EDX,EAX                         ; 0047115a
    MOVQ MM0,qword ptr [ESI]            ; 0047115c
    SHR EDX,0x1                         ; 0047115f
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 00471161
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471168 | DAT_00b9e14c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00471170
    MOVQ MM1,MM0                        ; 00471174
    ADD EDX,EAX                         ; 00471177
    MOVZX EAX,byte ptr [EBP]            ; 00471179
    SHR EDX,0x1                         ; 0047117d
    PUNPCKLBW MM0,MM7                   ; 0047117f
    MOVD MM6,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471182 | DAT_00b9e14c
    PSRLQ MM1,0x20                      ; 0047118a
    SHR EDX,0x1                         ; 0047118e
    PUNPCKLBW MM6,MM7                   ; 00471190
    PUNPCKLBW MM2,MM7                   ; 00471193
    ADD EAX,EDX                         ; 00471196
    PADDW MM6,MM2                       ; 00471198
    PUNPCKLBW MM1,MM7                   ; 0047119b
    PMULLW MM0,MM2                      ; 0047119e
    PSRLW MM6,0x1                       ; 004711a1
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 004711a5 | DAT_005fa0e0
    PMULLW MM1,MM6                      ; 004711ad
    MOVQ MM2,MM3                        ; 004711b0
    MOVQ MM4,MM5                        ; 004711b3
    PXOR MM2,qword ptr [0x005fa8d8]     ; 004711b6 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 004711bd
    PMULHW MM1,MM2                      ; 004711c0
    PMULHW MM4,MM3                      ; 004711c3
    PADDW MM0,MM4                       ; 004711c6
    PADDW MM1,MM4                       ; 004711c9
    PADDW MM0,qword ptr [0x005f8b78]    ; 004711cc | DAT_005f8b78
    PADDW MM1,qword ptr [0x005f8b80]    ; 004711d3 | DAT_005f8b80
    PSRLW MM0,0x4                       ; 004711da
    PSRLW MM1,0x4                       ; 004711de
    PACKUSWB MM0,MM1                    ; 004711e2
    ADD ESI,0x8                         ; 004711e5
    INC EBX                             ; 004711e8
    INC EBP                             ; 004711e9
    MOVQ qword ptr [EDI],MM0            ; 004711ea
    ADD EDI,0x8                         ; 004711ed
    SUB ECX,0x2                         ; 004711f0
    JG 0x00471150                       ; 004711f3
        ;   XREF to: 00471150 (CONDITIONAL_JUMP)  ; LAB_00471150
    POP EBP                             ; 004711f9
    EMMS                                ; 004711fa
    POP EDI                             ; 004711fc
    POP ESI                             ; 004711fd
    LEAVE                               ; 004711fe
    RET                                 ; 004711ff

