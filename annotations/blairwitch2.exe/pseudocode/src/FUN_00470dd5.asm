; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00470dd5(undefined4 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00442820 at 00442b76
;
; Referenced Globals:
;   undefined8 DAT_00611318
;   undefined8 DAT_00611320
;   undefined4 DAT_00612880
;   undefined4 DAT_00613078
;   undefined4 DAT_00b6639c
;   undefined4 DAT_01c38b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00470dd5
        ;   Label: FUN_00470dd5
    MOV EBP,ESP                         ; 00470dd6
    PUSH ESI                            ; 00470dd8
    PUSH EDI                            ; 00470dd9
    PUSH EBP                            ; 00470dda
    MOV ECX,dword ptr [EBP + 0x18]      ; 00470ddb
    MOV EDI,dword ptr [EBP + 0x8]       ; 00470dde
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470de1
    MOV EBX,dword ptr [EBP + 0x10]      ; 00470de4
    MOV EBP,dword ptr [EBP + 0x14]      ; 00470de7
    PXOR MM7,MM7                        ; 00470dea
    MOVD MM5,dword ptr [0x01c38b5c]     ; 00470ded | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 00470df4
    PSLLW MM5,0x6                       ; 00470df7
    MOV EAX,dword ptr [ESI]             ; 00470dfb
    MOV EAX,dword ptr [ESI + 0x20]      ; 00470dfd
    MOV EAX,dword ptr [ESI + 0x40]      ; 00470e00
    MOV EAX,dword ptr [ESI + 0x60]      ; 00470e03
    MOV EAX,dword ptr [ESI + 0x80]      ; 00470e06
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00470e0c
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00470e12
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00470e18
    MOV EAX,dword ptr [ESI + 0x100]     ; 00470e1e
    MOV EAX,dword ptr [ESI + 0x120]     ; 00470e24
    MOV EAX,dword ptr [ESI + 0x140]     ; 00470e2a
    MOV EAX,dword ptr [ESI + 0x160]     ; 00470e30
    MOV EAX,dword ptr [ESI + 0x180]     ; 00470e36
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00470e3c
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00470e42
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00470e48
    MOV EAX,dword ptr [ESI + 0x200]     ; 00470e4e
    MOV EAX,dword ptr [ESI + 0x220]     ; 00470e54
    MOV EAX,dword ptr [ESI + 0x240]     ; 00470e5a
    MOV EAX,dword ptr [ESI + 0x260]     ; 00470e60
    MOV EAX,dword ptr [ESI + 0x280]     ; 00470e66
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00470e6c
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00470e72
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00470e78
    MOV EAX,dword ptr [ESI + 0x300]     ; 00470e7e
    MOV EAX,dword ptr [ESI + 0x320]     ; 00470e84
    MOV EAX,dword ptr [ESI + 0x340]     ; 00470e8a
    MOV EAX,dword ptr [ESI + 0x360]     ; 00470e90
    MOV EAX,dword ptr [ESI + 0x380]     ; 00470e96
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00470e9c
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00470ea2
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00470ea8
    MOV EAX,dword ptr [ESI + 0x400]     ; 00470eae
    MOV EAX,dword ptr [ESI + 0x420]     ; 00470eb4
    MOV EAX,dword ptr [ESI + 0x440]     ; 00470eba
    MOV EAX,dword ptr [ESI + 0x460]     ; 00470ec0
    MOV EAX,dword ptr [ESI + 0x480]     ; 00470ec6
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00470ecc
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00470ed2
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00470ed8
    MOV EAX,dword ptr [ESI + 0x500]     ; 00470ede
    MOV EAX,dword ptr [ESI + 0x520]     ; 00470ee4
    MOV EAX,dword ptr [ESI + 0x540]     ; 00470eea
    MOV EAX,dword ptr [ESI + 0x560]     ; 00470ef0
    MOV EAX,dword ptr [ESI + 0x580]     ; 00470ef6
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00470efc
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00470f02
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00470f08
    MOV EAX,dword ptr [ESI + 0x600]     ; 00470f0e
    MOV EAX,dword ptr [ESI + 0x620]     ; 00470f14
    MOV EAX,dword ptr [ESI + 0x640]     ; 00470f1a
    MOV EAX,dword ptr [ESI + 0x660]     ; 00470f20
    MOV EAX,dword ptr [ESI + 0x680]     ; 00470f26
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00470f2c
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00470f32
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00470f38
    MOV EAX,dword ptr [ESI + 0x700]     ; 00470f3e
    MOV EAX,dword ptr [ESI + 0x720]     ; 00470f44
    MOV EAX,dword ptr [ESI + 0x740]     ; 00470f4a
    MOV EAX,dword ptr [ESI + 0x760]     ; 00470f50
    MOV EAX,dword ptr [ESI + 0x780]     ; 00470f56
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00470f5c
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00470f62
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00470f68
    MOV EAX,dword ptr [ESI + 0x800]     ; 00470f6e
    MOV EAX,dword ptr [ESI + 0x820]     ; 00470f74
    MOV EAX,dword ptr [ESI + 0x840]     ; 00470f7a
    MOV EAX,dword ptr [ESI + 0x860]     ; 00470f80
    MOV EAX,dword ptr [ESI + 0x880]     ; 00470f86
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00470f8c
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00470f92
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00470f98
    MOV EAX,dword ptr [ESI + 0x900]     ; 00470f9e
    MOV EAX,dword ptr [ESI + 0x920]     ; 00470fa4
    MOV EAX,dword ptr [ESI + 0x940]     ; 00470faa
    MOV EAX,dword ptr [ESI + 0x960]     ; 00470fb0
    MOV EAX,dword ptr [ESI + 0x980]     ; 00470fb6
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00470fbc
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00470fc2
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00470fc8
    MOVZX EDX,byte ptr [EBX]            ; 00470fce
        ;   Label: LAB_00470fce
    MOVQ MM0,qword ptr [ESI]            ; 00470fd1
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00470fd4 | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 00470fdc
    PUNPCKLBW MM0,MM7                   ; 00470fe0
    SHR EDX,0x1                         ; 00470fe3
    PUNPCKLBW MM2,MM7                   ; 00470fe5
    ADD EAX,EDX                         ; 00470fe8
    PMULLW MM0,MM2                      ; 00470fea
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00470fed | DAT_00612880
    MOVQ MM2,MM3                        ; 00470ff5
    MOVQ MM4,MM5                        ; 00470ff8
    PXOR MM2,qword ptr [0x00613078]     ; 00470ffb | DAT_00613078
    PMULHW MM0,MM2                      ; 00471002
    PMULHW MM4,MM3                      ; 00471005
    PADDW MM0,MM4                       ; 00471008
    PADDW MM0,qword ptr [0x00611318]    ; 0047100b | DAT_00611318
    PSRLW MM0,0x4                       ; 00471012
    PACKUSWB MM0,MM7                    ; 00471016
    MOVD dword ptr [EDI],MM0            ; 00471019
    ADD ESI,0x4                         ; 0047101c
    INC EBX                             ; 0047101f
    INC EBP                             ; 00471020
    ADD EDI,0x4                         ; 00471021
    MOVZX EDX,byte ptr [EBX]            ; 00471024
    MOVQ MM0,qword ptr [ESI]            ; 00471027
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 0047102a | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 00471032
    PUNPCKLBW MM0,MM7                   ; 00471036
    SHR EDX,0x1                         ; 00471039
    PUNPCKLBW MM2,MM7                   ; 0047103b
    ADD EAX,EDX                         ; 0047103e
    PMULLW MM0,MM2                      ; 00471040
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00471043 | DAT_00612880
    MOVQ MM2,MM3                        ; 0047104b
    MOVQ MM4,MM5                        ; 0047104e
    PXOR MM2,qword ptr [0x00613078]     ; 00471051 | DAT_00613078
    PMULHW MM0,MM2                      ; 00471058
    PMULHW MM4,MM3                      ; 0047105b
    PADDW MM0,MM4                       ; 0047105e
    PADDW MM0,qword ptr [0x00611320]    ; 00471061 | DAT_00611320
    PSRLW MM0,0x4                       ; 00471068
    PACKUSWB MM0,MM7                    ; 0047106c
    MOVD dword ptr [EDI],MM0            ; 0047106f
    ADD ESI,0x4                         ; 00471072
    INC EBX                             ; 00471075
    INC EBP                             ; 00471076
    ADD EDI,0x4                         ; 00471077
    SUB ECX,0x2                         ; 0047107a
    JG 0x00470fce                       ; 0047107d
        ;   XREF to: 00470fce (CONDITIONAL_JUMP)  ; LAB_00470fce
    POP EBP                             ; 00471083
    EMMS                                ; 00471084
    POP EDI                             ; 00471086
    POP ESI                             ; 00471087
    LEAVE                               ; 00471088
    RET                                 ; 00471089

