; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0046fe9a(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 00442b9e
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

    PUSH EBP                            ; 0046fe9a
        ;   Label: core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0046fe9a
    MOV EBP,ESP                         ; 0046fe9b
    PUSH ESI                            ; 0046fe9d
    PUSH EDI                            ; 0046fe9e
    PUSH EBP                            ; 0046fe9f
    MOV ECX,dword ptr [EBP + 0x18]      ; 0046fea0
    MOV EDI,dword ptr [EBP + 0x8]       ; 0046fea3
    MOV ESI,dword ptr [EBP + 0xc]       ; 0046fea6
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046fea9
    MOV EBP,dword ptr [EBP + 0x14]      ; 0046feac
    PXOR MM7,MM7                        ; 0046feaf
    MOVD MM5,dword ptr [0x01c38b5c]     ; 0046feb2 | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 0046feb9
    PSLLW MM5,0x6                       ; 0046febc
    MOV EAX,dword ptr [ESI]             ; 0046fec0
    MOV EAX,dword ptr [ESI + 0x20]      ; 0046fec2
    MOV EAX,dword ptr [ESI + 0x40]      ; 0046fec5
    MOV EAX,dword ptr [ESI + 0x60]      ; 0046fec8
    MOV EAX,dword ptr [ESI + 0x80]      ; 0046fecb
    MOV EAX,dword ptr [ESI + 0xa0]      ; 0046fed1
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0046fed7
    MOV EAX,dword ptr [ESI + 0xe0]      ; 0046fedd
    MOV EAX,dword ptr [ESI + 0x100]     ; 0046fee3
    MOV EAX,dword ptr [ESI + 0x120]     ; 0046fee9
    MOV EAX,dword ptr [ESI + 0x140]     ; 0046feef
    MOV EAX,dword ptr [ESI + 0x160]     ; 0046fef5
    MOV EAX,dword ptr [ESI + 0x180]     ; 0046fefb
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0046ff01
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0046ff07
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 0046ff0d
    MOV EAX,dword ptr [ESI + 0x200]     ; 0046ff13
    MOV EAX,dword ptr [ESI + 0x220]     ; 0046ff19
    MOV EAX,dword ptr [ESI + 0x240]     ; 0046ff1f
    MOV EAX,dword ptr [ESI + 0x260]     ; 0046ff25
    MOV EAX,dword ptr [ESI + 0x280]     ; 0046ff2b
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 0046ff31
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 0046ff37
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 0046ff3d
    MOV EAX,dword ptr [ESI + 0x300]     ; 0046ff43
    MOV EAX,dword ptr [ESI + 0x320]     ; 0046ff49
    MOV EAX,dword ptr [ESI + 0x340]     ; 0046ff4f
    MOV EAX,dword ptr [ESI + 0x360]     ; 0046ff55
    MOV EAX,dword ptr [ESI + 0x380]     ; 0046ff5b
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 0046ff61
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0046ff67
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 0046ff6d
    MOV EAX,dword ptr [ESI + 0x400]     ; 0046ff73
    MOV EAX,dword ptr [ESI + 0x420]     ; 0046ff79
    MOV EAX,dword ptr [ESI + 0x440]     ; 0046ff7f
    MOV EAX,dword ptr [ESI + 0x460]     ; 0046ff85
    MOV EAX,dword ptr [ESI + 0x480]     ; 0046ff8b
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 0046ff91
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0046ff97
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0046ff9d
    MOV EAX,dword ptr [ESI + 0x500]     ; 0046ffa3
    MOV EAX,dword ptr [ESI + 0x520]     ; 0046ffa9
    MOV EAX,dword ptr [ESI + 0x540]     ; 0046ffaf
    MOV EAX,dword ptr [ESI + 0x560]     ; 0046ffb5
    MOV EAX,dword ptr [ESI + 0x580]     ; 0046ffbb
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 0046ffc1
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0046ffc7
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0046ffcd
    MOV EAX,dword ptr [ESI + 0x600]     ; 0046ffd3
    MOV EAX,dword ptr [ESI + 0x620]     ; 0046ffd9
    MOV EAX,dword ptr [ESI + 0x640]     ; 0046ffdf
    MOV EAX,dword ptr [ESI + 0x660]     ; 0046ffe5
    MOV EAX,dword ptr [ESI + 0x680]     ; 0046ffeb
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0046fff1
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0046fff7
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0046fffd
    MOV EAX,dword ptr [ESI + 0x700]     ; 00470003
    MOV EAX,dword ptr [ESI + 0x720]     ; 00470009
    MOV EAX,dword ptr [ESI + 0x740]     ; 0047000f
    MOV EAX,dword ptr [ESI + 0x760]     ; 00470015
    MOV EAX,dword ptr [ESI + 0x780]     ; 0047001b
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00470021
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00470027
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0047002d
    MOV EAX,dword ptr [ESI + 0x800]     ; 00470033
    MOV EAX,dword ptr [ESI + 0x820]     ; 00470039
    MOV EAX,dword ptr [ESI + 0x840]     ; 0047003f
    MOV EAX,dword ptr [ESI + 0x860]     ; 00470045
    MOV EAX,dword ptr [ESI + 0x880]     ; 0047004b
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00470051
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00470057
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 0047005d
    MOV EAX,dword ptr [ESI + 0x900]     ; 00470063
    MOV EAX,dword ptr [ESI + 0x920]     ; 00470069
    MOV EAX,dword ptr [ESI + 0x940]     ; 0047006f
    MOV EAX,dword ptr [ESI + 0x960]     ; 00470075
    MOV EAX,dword ptr [ESI + 0x980]     ; 0047007b
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00470081
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00470087
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 0047008d
    MOV EAX,dword ptr [EBX + 0x140]     ; 00470093
    MOV EAX,dword ptr [EBX + 0x160]     ; 00470099
    MOV EAX,dword ptr [EBX + 0x180]     ; 0047009f
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 004700a5
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 004700ab
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 004700b1
    MOV EAX,dword ptr [EBX + 0x200]     ; 004700b7
    MOV EAX,dword ptr [EBX + 0x220]     ; 004700bd
    MOV EAX,dword ptr [EBX + 0x240]     ; 004700c3
    MOV EAX,dword ptr [EBX + 0x260]     ; 004700c9
    JMP 0x004700e0                      ; 004700cf
        ;   XREF to: 004700e0 (UNCONDITIONAL_JUMP)  ; LAB_004700e0
    MOVZX EDX,byte ptr [EBX]            ; 004700e0
        ;   Label: LAB_004700e0
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 004700e3
    ADD EDX,EAX                         ; 004700ea
    MOVQ MM0,qword ptr [ESI]            ; 004700ec
    SHR EDX,0x1                         ; 004700ef
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 004700f1
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004700f8 | DAT_00b6639c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00470100
    MOVQ MM1,MM0                        ; 00470104
    ADD EDX,EAX                         ; 00470107
    MOVZX EAX,byte ptr [EBP]            ; 00470109
    SHR EDX,0x1                         ; 0047010d
    PUNPCKLBW MM0,MM7                   ; 0047010f
    MOVD MM6,dword ptr [EDX*0x4 + 0xb6639c] ; 00470112 | DAT_00b6639c
    PSRLQ MM1,0x20                      ; 0047011a
    SHR EDX,0x1                         ; 0047011e
    PUNPCKLBW MM6,MM7                   ; 00470120
    PUNPCKLBW MM2,MM7                   ; 00470123
    ADD EAX,EDX                         ; 00470126
    PADDW MM6,MM2                       ; 00470128
    PUNPCKLBW MM1,MM7                   ; 0047012b
    PMULLW MM0,MM2                      ; 0047012e
    PSRLW MM6,0x1                       ; 00470131
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00470135 | DAT_00612880
    PMULLW MM1,MM6                      ; 0047013d
    MOVQ MM2,MM3                        ; 00470140
    MOVQ MM4,MM5                        ; 00470143
    PXOR MM2,qword ptr [0x00613078]     ; 00470146 | DAT_00613078
    PMULHW MM0,MM2                      ; 0047014d
    PMULHW MM1,MM2                      ; 00470150
    PMULHW MM4,MM3                      ; 00470153
    PADDW MM0,MM4                       ; 00470156
    PADDW MM1,MM4                       ; 00470159
    PADDW MM0,qword ptr [0x00611318]    ; 0047015c | DAT_00611318
    PADDW MM1,qword ptr [0x00611320]    ; 00470163 | DAT_00611320
    PSRLW MM0,0x4                       ; 0047016a
    PSRLW MM1,0x4                       ; 0047016e
    PACKUSWB MM0,MM1                    ; 00470172
    ADD ESI,0x8                         ; 00470175
    INC EBX                             ; 00470178
    INC EBP                             ; 00470179
    MOVQ qword ptr [EDI],MM0            ; 0047017a
    ADD EDI,0x8                         ; 0047017d
    SUB ECX,0x2                         ; 00470180
    JG 0x004700e0                       ; 00470183
        ;   XREF to: 004700e0 (CONDITIONAL_JUMP)  ; LAB_004700e0
    POP EBP                             ; 00470189
    EMMS                                ; 0047018a
    POP EDI                             ; 0047018c
    POP ESI                             ; 0047018d
    LEAVE                               ; 0047018e
    RET                                 ; 0047018f

