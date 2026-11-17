; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_0046f9bc(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 00442b50
;
; Referenced Globals:
;   qword g_QWORD_00611308 = 0x0
;   qword g_QWORD_00611310 = 0x8000800080008
;   ushort[2048] g_USHORT_ARRAY_00612880
;   undefined4 g_USHORT_ARRAY_00612880[16]
;   undefined4 g_USHORT_ARRAY_00612880[32]
;   undefined4 g_USHORT_ARRAY_00612880[48]
;   undefined4 g_USHORT_ARRAY_00612880[64]
;   undefined4 g_USHORT_ARRAY_00612880[80]
;   undefined4 g_USHORT_ARRAY_00612880[96]
;   undefined4 g_USHORT_ARRAY_00612880[112]
;   undefined4 g_USHORT_ARRAY_00612880[128]
;   undefined4 g_USHORT_ARRAY_00612880[144]
;   undefined4 g_USHORT_ARRAY_00612880[160]
;   undefined4 g_USHORT_ARRAY_00612880[176]
;   undefined4 g_USHORT_ARRAY_00612880[192]
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046f9bc
        ;   Label: core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_0046f9bc
    MOV EBP,ESP                         ; 0046f9bd
    PUSH ESI                            ; 0046f9bf
    PUSH EDI                            ; 0046f9c0
    PUSH EBP                            ; 0046f9c1
    MOV ECX,dword ptr [EBP + 0x18]      ; 0046f9c2
    MOV EDI,dword ptr [EBP + 0x8]       ; 0046f9c5
    MOV ESI,dword ptr [EBP + 0xc]       ; 0046f9c8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046f9cb
    MOV EBP,dword ptr [EBP + 0x14]      ; 0046f9ce
    PXOR MM7,MM7                        ; 0046f9d1
    MOVD MM5,dword ptr [0x01c38b5c]     ; 0046f9d4 | g_ULONG_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 0046f9db
    PSLLW MM5,0x6                       ; 0046f9de
    MOV EAX,dword ptr [EBX]             ; 0046f9e2
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046f9e4
    MOV EAX,dword ptr [EBX + 0x40]      ; 0046f9e7
    MOV EAX,dword ptr [EBX + 0x60]      ; 0046f9ea
    MOV EAX,dword ptr [EBX + 0x80]      ; 0046f9ed
    MOV EAX,dword ptr [EBX + 0xa0]      ; 0046f9f3
    MOV EAX,dword ptr [EBX + 0xc0]      ; 0046f9f9
    MOV EAX,dword ptr [EBX + 0xe0]      ; 0046f9ff
    MOV EAX,dword ptr [EBX + 0x100]     ; 0046fa05
    MOV EAX,dword ptr [EBX + 0x120]     ; 0046fa0b
    MOV EDX,dword ptr [EBP]             ; 0046fa11
    MOV EDX,dword ptr [EBP + 0x20]      ; 0046fa14
    MOV EDX,dword ptr [EBP + 0x40]      ; 0046fa17
    MOV EDX,dword ptr [EBP + 0x60]      ; 0046fa1a
    MOV EDX,dword ptr [EBP + 0x80]      ; 0046fa1d
    MOV EDX,dword ptr [EBP + 0xa0]      ; 0046fa23
    MOV EDX,dword ptr [EBP + 0xc0]      ; 0046fa29
    MOV EDX,dword ptr [EBP + 0xe0]      ; 0046fa2f
    MOV EDX,dword ptr [EBP + 0x100]     ; 0046fa35
    MOV EDX,dword ptr [EBP + 0x120]     ; 0046fa3b
    MOV EAX,dword ptr [ESI]             ; 0046fa41
    MOV EAX,dword ptr [ESI + 0x20]      ; 0046fa43
    MOV EAX,dword ptr [ESI + 0x40]      ; 0046fa46
    MOV EAX,dword ptr [ESI + 0x60]      ; 0046fa49
    MOV EAX,dword ptr [ESI + 0x80]      ; 0046fa4c
    MOV EAX,dword ptr [ESI + 0xa0]      ; 0046fa52
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0046fa58
    MOV EAX,dword ptr [ESI + 0xe0]      ; 0046fa5e
    MOV EAX,dword ptr [ESI + 0x100]     ; 0046fa64
    MOV EAX,dword ptr [ESI + 0x120]     ; 0046fa6a
    MOV EAX,dword ptr [ESI + 0x140]     ; 0046fa70
    MOV EAX,dword ptr [ESI + 0x160]     ; 0046fa76
    MOV EAX,dword ptr [ESI + 0x180]     ; 0046fa7c
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0046fa82
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0046fa88
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 0046fa8e
    MOV EAX,dword ptr [ESI + 0x200]     ; 0046fa94
    MOV EAX,dword ptr [ESI + 0x220]     ; 0046fa9a
    MOV EAX,dword ptr [ESI + 0x240]     ; 0046faa0
    MOV EAX,dword ptr [ESI + 0x260]     ; 0046faa6
    MOV EAX,dword ptr [ESI + 0x280]     ; 0046faac
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 0046fab2
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 0046fab8
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 0046fabe
    MOV EAX,dword ptr [ESI + 0x300]     ; 0046fac4
    MOV EAX,dword ptr [ESI + 0x320]     ; 0046faca
    MOV EAX,dword ptr [ESI + 0x340]     ; 0046fad0
    MOV EAX,dword ptr [ESI + 0x360]     ; 0046fad6
    MOV EAX,dword ptr [ESI + 0x380]     ; 0046fadc
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 0046fae2
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0046fae8
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 0046faee
    MOV EAX,dword ptr [ESI + 0x400]     ; 0046faf4
    MOV EAX,dword ptr [ESI + 0x420]     ; 0046fafa
    MOV EAX,dword ptr [ESI + 0x440]     ; 0046fb00
    MOV EAX,dword ptr [ESI + 0x460]     ; 0046fb06
    MOV EAX,dword ptr [ESI + 0x480]     ; 0046fb0c
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 0046fb12
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0046fb18
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0046fb1e
    MOV EAX,dword ptr [ESI + 0x500]     ; 0046fb24
    MOV EAX,dword ptr [ESI + 0x520]     ; 0046fb2a
    MOV EAX,dword ptr [ESI + 0x540]     ; 0046fb30
    MOV EAX,dword ptr [ESI + 0x560]     ; 0046fb36
    MOV EAX,dword ptr [ESI + 0x580]     ; 0046fb3c
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 0046fb42
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0046fb48
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0046fb4e
    MOV EAX,dword ptr [ESI + 0x600]     ; 0046fb54
    MOV EAX,dword ptr [ESI + 0x620]     ; 0046fb5a
    MOV EAX,dword ptr [ESI + 0x640]     ; 0046fb60
    MOV EAX,dword ptr [ESI + 0x660]     ; 0046fb66
    MOV EAX,dword ptr [ESI + 0x680]     ; 0046fb6c
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0046fb72
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0046fb78
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0046fb7e
    MOV EAX,dword ptr [ESI + 0x700]     ; 0046fb84
    MOV EAX,dword ptr [ESI + 0x720]     ; 0046fb8a
    MOV EAX,dword ptr [ESI + 0x740]     ; 0046fb90
    MOV EAX,dword ptr [ESI + 0x760]     ; 0046fb96
    MOV EAX,dword ptr [ESI + 0x780]     ; 0046fb9c
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 0046fba2
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 0046fba8
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0046fbae
    MOV EAX,dword ptr [ESI + 0x800]     ; 0046fbb4
    MOV EAX,dword ptr [ESI + 0x820]     ; 0046fbba
    MOV EAX,dword ptr [ESI + 0x840]     ; 0046fbc0
    MOV EAX,dword ptr [ESI + 0x860]     ; 0046fbc6
    MOV EAX,dword ptr [ESI + 0x880]     ; 0046fbcc
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 0046fbd2
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0046fbd8
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 0046fbde
    MOV EAX,dword ptr [ESI + 0x900]     ; 0046fbe4
    MOV EAX,dword ptr [ESI + 0x920]     ; 0046fbea
    MOV EAX,dword ptr [ESI + 0x940]     ; 0046fbf0
    MOV EAX,dword ptr [ESI + 0x960]     ; 0046fbf6
    MOV EAX,dword ptr [ESI + 0x980]     ; 0046fbfc
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 0046fc02
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0046fc08
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 0046fc0e
    MOV EAX,[0x00b6639c]                ; 0046fc14 | g_UINT_ARRAY_00b6639c
    MOV EAX,[0x00b663bc]                ; 0046fc19 | g_UINT_ARRAY_00b6639c[8]
    MOV EAX,[0x00b663dc]                ; 0046fc1e | g_UINT_ARRAY_00b6639c[16]
    MOV EAX,[0x00b663fc]                ; 0046fc23 | g_UINT_ARRAY_00b6639c[24]
    MOV EAX,[0x00b6641c]                ; 0046fc28 | g_UINT_ARRAY_00b6639c[32]
    MOV EAX,[0x00b6643c]                ; 0046fc2d | g_UINT_ARRAY_00b6639c[40]
    MOV EAX,[0x00b6645c]                ; 0046fc32 | g_UINT_ARRAY_00b6639c[48]
    MOV EAX,[0x00b6647c]                ; 0046fc37 | g_UINT_ARRAY_00b6639c[56]
    MOV EAX,[0x00b6649c]                ; 0046fc3c | g_UINT_ARRAY_00b6639c[64]
    MOV EAX,[0x00b664bc]                ; 0046fc41 | g_UINT_ARRAY_00b6639c[72]
    MOV EAX,[0x00b664dc]                ; 0046fc46 | g_UINT_ARRAY_00b6639c[80]
    MOV EAX,[0x00b664fc]                ; 0046fc4b | g_UINT_ARRAY_00b6639c[88]
    MOV EAX,[0x00b6651c]                ; 0046fc50 | g_UINT_ARRAY_00b6639c[96]
    MOV EAX,[0x00b6653c]                ; 0046fc55 | g_UINT_ARRAY_00b6639c[104]
    MOV EAX,[0x00b6655c]                ; 0046fc5a | g_UINT_ARRAY_00b6639c[112]
    MOV EAX,[0x00b6657c]                ; 0046fc5f | g_UINT_ARRAY_00b6639c[120]
    MOV EAX,[0x00b6659c]                ; 0046fc64 | g_UINT_ARRAY_00b6639c[128]
    MOV EAX,[0x00b665bc]                ; 0046fc69 | g_UINT_ARRAY_00b6639c[136]
    MOV EAX,[0x00b665dc]                ; 0046fc6e | g_UINT_ARRAY_00b6639c[144]
    MOV EAX,[0x00b665fc]                ; 0046fc73 | g_UINT_ARRAY_00b6639c[152]
    MOV EAX,[0x00b6661c]                ; 0046fc78 | g_UINT_ARRAY_00b6639c[160]
    MOV EAX,[0x00b6663c]                ; 0046fc7d | g_UINT_ARRAY_00b6639c[168]
    MOV EAX,[0x00b6665c]                ; 0046fc82 | g_UINT_ARRAY_00b6639c[176]
    MOV EAX,[0x00b6667c]                ; 0046fc87 | g_UINT_ARRAY_00b6639c[184]
    MOV EAX,[0x00b6669c]                ; 0046fc8c | g_UINT_ARRAY_00b6639c[192]
    MOV EAX,[0x00b666bc]                ; 0046fc91 | g_UINT_ARRAY_00b6639c[200]
    MOV EAX,[0x00b666dc]                ; 0046fc96 | g_UINT_ARRAY_00b6639c[208]
    MOV EAX,[0x00b666fc]                ; 0046fc9b | g_UINT_ARRAY_00b6639c[216]
    MOV EAX,[0x00b6671c]                ; 0046fca0 | g_UINT_ARRAY_00b6639c[224]
    MOV EAX,[0x00b6673c]                ; 0046fca5 | g_UINT_ARRAY_00b6639c[232]
    MOV EAX,[0x00b6675c]                ; 0046fcaa | g_UINT_ARRAY_00b6639c[240]
    MOV EAX,[0x00b6677c]                ; 0046fcaf | g_UINT_ARRAY_00b6639c[248]
    MOV EAX,[0x00612880]                ; 0046fcb4 | g_USHORT_ARRAY_00612880
    MOV EAX,[0x006128a0]                ; 0046fcb9 | g_USHORT_ARRAY_00612880[16]
    MOV EAX,[0x006128c0]                ; 0046fcbe | g_USHORT_ARRAY_00612880[32]
    MOV EAX,[0x006128e0]                ; 0046fcc3 | g_USHORT_ARRAY_00612880[48]
    MOV EAX,[0x00612900]                ; 0046fcc8 | g_USHORT_ARRAY_00612880[64]
    MOV EAX,[0x00612920]                ; 0046fccd | g_USHORT_ARRAY_00612880[80]
    MOV EAX,[0x00612940]                ; 0046fcd2 | g_USHORT_ARRAY_00612880[96]
    MOV EAX,[0x00612960]                ; 0046fcd7 | g_USHORT_ARRAY_00612880[112]
    MOV EAX,[0x00612980]                ; 0046fcdc | g_USHORT_ARRAY_00612880[128]
    MOV EAX,[0x006129a0]                ; 0046fce1 | g_USHORT_ARRAY_00612880[144]
    MOV EAX,[0x006129c0]                ; 0046fce6 | g_USHORT_ARRAY_00612880[160]
    MOV EAX,[0x006129e0]                ; 0046fceb | g_USHORT_ARRAY_00612880[176]
    MOV EAX,[0x00612a00]                ; 0046fcf0 | g_USHORT_ARRAY_00612880[192]
    MOV EAX,[0x00612a20]                ; 0046fcf5 | g_USHORT_ARRAY_00612880[208]
    MOV EAX,[0x00612a40]                ; 0046fcfa | g_USHORT_ARRAY_00612880[224]
    MOV EAX,[0x00612a60]                ; 0046fcff | g_USHORT_ARRAY_00612880[240]
    MOV EAX,[0x00612a80]                ; 0046fd04 | g_USHORT_ARRAY_00612880[256]
    MOV EAX,[0x00612aa0]                ; 0046fd09 | g_USHORT_ARRAY_00612880[272]
    MOV EAX,[0x00612ac0]                ; 0046fd0e | g_USHORT_ARRAY_00612880[288]
    MOV EAX,[0x00612ae0]                ; 0046fd13 | g_USHORT_ARRAY_00612880[304]
    MOV EAX,[0x00612b00]                ; 0046fd18 | g_USHORT_ARRAY_00612880[320]
    MOV EAX,[0x00612b20]                ; 0046fd1d | g_USHORT_ARRAY_00612880[336]
    MOV EAX,[0x00612b40]                ; 0046fd22 | g_USHORT_ARRAY_00612880[352]
    MOV EAX,[0x00612b60]                ; 0046fd27 | g_USHORT_ARRAY_00612880[368]
    MOV EAX,[0x00612b80]                ; 0046fd2c | g_USHORT_ARRAY_00612880[384]
    MOV EAX,[0x00612ba0]                ; 0046fd31 | g_USHORT_ARRAY_00612880[400]
    MOV EAX,[0x00612bc0]                ; 0046fd36 | g_USHORT_ARRAY_00612880[416]
    MOV EAX,[0x00612be0]                ; 0046fd3b | g_USHORT_ARRAY_00612880[432]
    MOV EAX,[0x00612c00]                ; 0046fd40 | g_USHORT_ARRAY_00612880[448]
    MOV EAX,[0x00612c20]                ; 0046fd45 | g_USHORT_ARRAY_00612880[464]
    MOV EAX,[0x00612c40]                ; 0046fd4a | g_USHORT_ARRAY_00612880[480]
    MOV EAX,[0x00612c60]                ; 0046fd4f | g_USHORT_ARRAY_00612880[496]
    MOV EAX,[0x00612c80]                ; 0046fd54 | g_USHORT_ARRAY_00612880[512]
    MOV EAX,[0x00612ca0]                ; 0046fd59 | g_USHORT_ARRAY_00612880[528]
    MOV EAX,[0x00612cc0]                ; 0046fd5e | g_USHORT_ARRAY_00612880[544]
    MOV EAX,[0x00612ce0]                ; 0046fd63 | g_USHORT_ARRAY_00612880[560]
    MOV EAX,[0x00612d00]                ; 0046fd68 | g_USHORT_ARRAY_00612880[576]
    MOV EAX,[0x00612d20]                ; 0046fd6d | g_USHORT_ARRAY_00612880[592]
    MOV EAX,[0x00612d40]                ; 0046fd72 | g_USHORT_ARRAY_00612880[608]
    MOV EAX,[0x00612d60]                ; 0046fd77 | g_USHORT_ARRAY_00612880[624]
    MOV EAX,[0x00612d80]                ; 0046fd7c | g_USHORT_ARRAY_00612880[640]
    MOV EAX,[0x00612da0]                ; 0046fd81 | g_USHORT_ARRAY_00612880[656]
    MOV EAX,[0x00612dc0]                ; 0046fd86 | g_USHORT_ARRAY_00612880[672]
    MOV EAX,[0x00612de0]                ; 0046fd8b | g_USHORT_ARRAY_00612880[688]
    MOV EAX,[0x00612e00]                ; 0046fd90 | g_USHORT_ARRAY_00612880[704]
    MOV EAX,[0x00612e20]                ; 0046fd95 | g_USHORT_ARRAY_00612880[720]
    MOV EAX,[0x00612e40]                ; 0046fd9a | g_USHORT_ARRAY_00612880[736]
    MOV EAX,[0x00612e60]                ; 0046fd9f | g_USHORT_ARRAY_00612880[752]
    MOV EAX,[0x00612e80]                ; 0046fda4 | g_USHORT_ARRAY_00612880[768]
    MOV EAX,[0x00612ea0]                ; 0046fda9 | g_USHORT_ARRAY_00612880[784]
    MOV EAX,[0x00612ec0]                ; 0046fdae | g_USHORT_ARRAY_00612880[800]
    MOV EAX,[0x00612ee0]                ; 0046fdb3 | g_USHORT_ARRAY_00612880[816]
    MOV EAX,[0x00612f00]                ; 0046fdb8 | g_USHORT_ARRAY_00612880[832]
    MOV EAX,[0x00612f20]                ; 0046fdbd | g_USHORT_ARRAY_00612880[848]
    MOV EAX,[0x00612f40]                ; 0046fdc2 | g_USHORT_ARRAY_00612880[864]
    MOV EAX,[0x00612f60]                ; 0046fdc7 | g_USHORT_ARRAY_00612880[880]
    MOV EAX,[0x00612f80]                ; 0046fdcc | g_USHORT_ARRAY_00612880[896]
    MOV EAX,[0x00612fa0]                ; 0046fdd1 | g_USHORT_ARRAY_00612880[912]
    MOV EAX,[0x00612fc0]                ; 0046fdd6 | g_USHORT_ARRAY_00612880[928]
    MOV EAX,[0x00612fe0]                ; 0046fddb | g_USHORT_ARRAY_00612880[944]
    MOV EAX,[0x00613000]                ; 0046fde0 | g_USHORT_ARRAY_00612880[960]
    MOV EAX,[0x00613020]                ; 0046fde5 | g_USHORT_ARRAY_00612880[976]
    MOV EAX,[0x00613040]                ; 0046fdea | g_USHORT_ARRAY_00612880[992]
    MOV EAX,[0x00613060]                ; 0046fdef | g_USHORT_ARRAY_00612880[1008]
    JMP 0x0046fe00                      ; 0046fdf4
        ;   XREF to: 0046fe00 (UNCONDITIONAL_JUMP)  ; LAB_0046fe00
    MOVZX EDX,byte ptr [EBX]            ; 0046fe00
        ;   Label: LAB_0046fe00
    MOVQ MM0,qword ptr [ESI]            ; 0046fe03
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 0046fe06 | g_UINT_ARRAY_00b6639c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 0046fe0e
    MOVZX EAX,byte ptr [EBP]            ; 0046fe12
    MOVD MM6,dword ptr [EDX*0x4 + 0xb6639c] ; 0046fe16 | g_UINT_ARRAY_00b6639c
    MOVQ MM1,MM0                        ; 0046fe1e
    PUNPCKLBW MM6,MM7                   ; 0046fe21
    PUNPCKLBW MM0,MM7                   ; 0046fe24
    SHR EDX,0x1                         ; 0046fe27
    PSRLQ MM1,0x20                      ; 0046fe29
    PUNPCKLBW MM2,MM7                   ; 0046fe2d
    ADD EAX,EDX                         ; 0046fe30
    PADDW MM6,MM2                       ; 0046fe32
    PUNPCKLBW MM1,MM7                   ; 0046fe35
    PMULLW MM0,MM2                      ; 0046fe38
    PSRLW MM6,0x1                       ; 0046fe3b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 0046fe3f | g_USHORT_ARRAY_00612880
    PMULLW MM1,MM6                      ; 0046fe47
    MOVQ MM2,MM3                        ; 0046fe4a
    MOVQ MM4,MM5                        ; 0046fe4d
    PXOR MM2,qword ptr [0x00613078]     ; 0046fe50 | g_USHORT_ARRAY_00612880[1020]
    PMULHW MM0,MM2                      ; 0046fe57
    PMULHW MM1,MM2                      ; 0046fe5a
    PMULHW MM4,MM3                      ; 0046fe5d
    PADDW MM0,MM4                       ; 0046fe60
    PADDW MM1,MM4                       ; 0046fe63
    PADDW MM0,qword ptr [0x00611308]    ; 0046fe66 | g_QWORD_00611308
    PADDW MM1,qword ptr [0x00611310]    ; 0046fe6d | g_QWORD_00611310
    PSRLW MM0,0x4                       ; 0046fe74
    PSRLW MM1,0x4                       ; 0046fe78
    PACKUSWB MM0,MM1                    ; 0046fe7c
    ADD ESI,0x8                         ; 0046fe7f
    INC EBX                             ; 0046fe82
    INC EBP                             ; 0046fe83
    MOVQ qword ptr [EDI],MM0            ; 0046fe84
    ADD EDI,0x8                         ; 0046fe87
    SUB ECX,0x2                         ; 0046fe8a
    JG 0x0046fe00                       ; 0046fe8d
        ;   XREF to: 0046fe00 (CONDITIONAL_JUMP)  ; LAB_0046fe00
    POP EBP                             ; 0046fe93
    EMMS                                ; 0046fe94
    POP EDI                             ; 0046fe96
    POP ESI                             ; 0046fe97
    LEAVE                               ; 0046fe98
    RET                                 ; 0046fe99

