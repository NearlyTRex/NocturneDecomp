; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_FUN_004470f0 at 004472f1
;
; Referenced Globals:
;   undefined8 DAT_005b4798
;   undefined8 DAT_005b47a0
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

    PUSH EBP                            ; 00466e94
        ;   Label: core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94
    MOV EBP,ESP                         ; 00466e95
    PUSH ESI                            ; 00466e97
    PUSH EDI                            ; 00466e98
    PUSH EBP                            ; 00466e99
    MOV ECX,dword ptr [EBP + 0x18]      ; 00466e9a
    MOV EDI,dword ptr [EBP + 0x8]       ; 00466e9d
    MOV ESI,dword ptr [EBP + 0xc]       ; 00466ea0
    MOV EBX,dword ptr [EBP + 0x10]      ; 00466ea3
    MOV EBP,dword ptr [EBP + 0x14]      ; 00466ea6
    PXOR MM7,MM7                        ; 00466ea9
    MOVD MM5,dword ptr [0x01c039a8]     ; 00466eac | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 00466eb3
    PSLLW MM5,0x6                       ; 00466eb6
    MOV EAX,dword ptr [ESI]             ; 00466eba
    MOV EAX,dword ptr [ESI + 0x20]      ; 00466ebc
    MOV EAX,dword ptr [ESI + 0x40]      ; 00466ebf
    MOV EAX,dword ptr [ESI + 0x60]      ; 00466ec2
    MOV EAX,dword ptr [ESI + 0x80]      ; 00466ec5
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00466ecb
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00466ed1
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00466ed7
    MOV EAX,dword ptr [ESI + 0x100]     ; 00466edd
    MOV EAX,dword ptr [ESI + 0x120]     ; 00466ee3
    MOV EAX,dword ptr [ESI + 0x140]     ; 00466ee9
    MOV EAX,dword ptr [ESI + 0x160]     ; 00466eef
    MOV EAX,dword ptr [ESI + 0x180]     ; 00466ef5
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00466efb
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00466f01
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00466f07
    MOV EAX,dword ptr [ESI + 0x200]     ; 00466f0d
    MOV EAX,dword ptr [ESI + 0x220]     ; 00466f13
    MOV EAX,dword ptr [ESI + 0x240]     ; 00466f19
    MOV EAX,dword ptr [ESI + 0x260]     ; 00466f1f
    MOV EAX,dword ptr [ESI + 0x280]     ; 00466f25
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00466f2b
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00466f31
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00466f37
    MOV EAX,dword ptr [ESI + 0x300]     ; 00466f3d
    MOV EAX,dword ptr [ESI + 0x320]     ; 00466f43
    MOV EAX,dword ptr [ESI + 0x340]     ; 00466f49
    MOV EAX,dword ptr [ESI + 0x360]     ; 00466f4f
    MOV EAX,dword ptr [ESI + 0x380]     ; 00466f55
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00466f5b
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00466f61
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00466f67
    MOV EAX,dword ptr [ESI + 0x400]     ; 00466f6d
    MOV EAX,dword ptr [ESI + 0x420]     ; 00466f73
    MOV EAX,dword ptr [ESI + 0x440]     ; 00466f79
    MOV EAX,dword ptr [ESI + 0x460]     ; 00466f7f
    MOV EAX,dword ptr [ESI + 0x480]     ; 00466f85
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00466f8b
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00466f91
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00466f97
    MOV EAX,dword ptr [ESI + 0x500]     ; 00466f9d
    MOV EAX,dword ptr [ESI + 0x520]     ; 00466fa3
    MOV EAX,dword ptr [ESI + 0x540]     ; 00466fa9
    MOV EAX,dword ptr [ESI + 0x560]     ; 00466faf
    MOV EAX,dword ptr [ESI + 0x580]     ; 00466fb5
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00466fbb
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00466fc1
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00466fc7
    MOV EAX,dword ptr [ESI + 0x600]     ; 00466fcd
    MOV EAX,dword ptr [ESI + 0x620]     ; 00466fd3
    MOV EAX,dword ptr [ESI + 0x640]     ; 00466fd9
    MOV EAX,dword ptr [ESI + 0x660]     ; 00466fdf
    MOV EAX,dword ptr [ESI + 0x680]     ; 00466fe5
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00466feb
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00466ff1
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00466ff7
    MOV EAX,dword ptr [ESI + 0x700]     ; 00466ffd
    MOV EAX,dword ptr [ESI + 0x720]     ; 00467003
    MOV EAX,dword ptr [ESI + 0x740]     ; 00467009
    MOV EAX,dword ptr [ESI + 0x760]     ; 0046700f
    MOV EAX,dword ptr [ESI + 0x780]     ; 00467015
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 0046701b
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00467021
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00467027
    MOV EAX,dword ptr [ESI + 0x800]     ; 0046702d
    MOV EAX,dword ptr [ESI + 0x820]     ; 00467033
    MOV EAX,dword ptr [ESI + 0x840]     ; 00467039
    MOV EAX,dword ptr [ESI + 0x860]     ; 0046703f
    MOV EAX,dword ptr [ESI + 0x880]     ; 00467045
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 0046704b
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00467051
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00467057
    MOV EAX,dword ptr [ESI + 0x900]     ; 0046705d
    MOV EAX,dword ptr [ESI + 0x920]     ; 00467063
    MOV EAX,dword ptr [ESI + 0x940]     ; 00467069
    MOV EAX,dword ptr [ESI + 0x960]     ; 0046706f
    MOV EAX,dword ptr [ESI + 0x980]     ; 00467075
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 0046707b
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00467081
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00467087
    MOVZX EDX,byte ptr [EBX]            ; 0046708d
        ;   Label: LAB_0046708d
    MOVQ MM0,qword ptr [ESI]            ; 00467090
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00467093 | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 0046709b
    PUNPCKLBW MM0,MM7                   ; 0046709f
    SHR EDX,0x1                         ; 004670a2
    PUNPCKLBW MM2,MM7                   ; 004670a4
    ADD EAX,EDX                         ; 004670a7
    PMULLW MM0,MM2                      ; 004670a9
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 004670ac | DAT_005b5d00
    MOVQ MM2,MM3                        ; 004670b4
    MOVQ MM4,MM5                        ; 004670b7
    PXOR MM2,qword ptr [0x005b64f8]     ; 004670ba | DAT_005b64f8
    PMULHW MM0,MM2                      ; 004670c1
    PMULHW MM4,MM3                      ; 004670c4
    PADDW MM0,MM4                       ; 004670c7
    PADDW MM0,qword ptr [0x005b4798]    ; 004670ca | DAT_005b4798
    PSRLW MM0,0x4                       ; 004670d1
    PACKUSWB MM0,MM7                    ; 004670d5
    MOVQ MM2,MM0                        ; 004670d8
    MOVQ MM3,MM0                        ; 004670db
    PAND MM0,qword ptr [0x005bf610]     ; 004670de | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 004670e5 | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 004670ec | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 004670f3 | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 004670fa | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 00467101 | DAT_005bf618
    POR MM0,MM2                         ; 00467108
    POR MM0,MM3                         ; 0046710b
    MOVQ MM6,MM0                        ; 0046710e
    ADD ESI,0x4                         ; 00467111
    INC EBX                             ; 00467114
    INC EBP                             ; 00467115
    MOVZX EDX,byte ptr [EBX]            ; 00467116
    MOVQ MM0,qword ptr [ESI]            ; 00467119
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 0046711c | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00467124
    PUNPCKLBW MM0,MM7                   ; 00467128
    SHR EDX,0x1                         ; 0046712b
    PUNPCKLBW MM2,MM7                   ; 0046712d
    ADD EAX,EDX                         ; 00467130
    PMULLW MM0,MM2                      ; 00467132
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00467135 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 0046713d
    MOVQ MM4,MM5                        ; 00467140
    PXOR MM2,qword ptr [0x005b64f8]     ; 00467143 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 0046714a
    PMULHW MM4,MM3                      ; 0046714d
    PADDW MM0,MM4                       ; 00467150
    PADDW MM0,qword ptr [0x005b47a0]    ; 00467153 | DAT_005b47a0
    PSRLW MM0,0x4                       ; 0046715a
    PACKUSWB MM0,MM7                    ; 0046715e
    MOVQ MM2,MM0                        ; 00467161
    MOVQ MM3,MM0                        ; 00467164
    PAND MM0,qword ptr [0x005bf610]     ; 00467167 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 0046716e | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 00467175 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 0046717c | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 00467183 | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 0046718a | DAT_005bf618
    POR MM0,MM2                         ; 00467191
    POR MM0,MM3                         ; 00467194
    PSLLQ MM0,0x10                      ; 00467197
    POR MM0,MM6                         ; 0046719b
    MOVD dword ptr [EDI],MM0            ; 0046719e
    ADD ESI,0x4                         ; 004671a1
    INC EBX                             ; 004671a4
    INC EBP                             ; 004671a5
    ADD EDI,0x4                         ; 004671a6
    SUB ECX,0x2                         ; 004671a9
    JG 0x0046708d                       ; 004671ac
        ;   XREF to: 0046708d (CONDITIONAL_JUMP)  ; LAB_0046708d
    POP EBP                             ; 004671b2
    EMMS                                ; 004671b3
    POP EDI                             ; 004671b5
    POP ESI                             ; 004671b6
    LEAVE                               ; 004671b7
    RET                                 ; 004671b8

