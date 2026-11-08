; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f9bc(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00442820 at 00442b50
;
; Referenced Globals:
;   undefined8 DAT_00611308
;   undefined8 DAT_00611310
;   undefined4 DAT_00612880
;   undefined4 DAT_006128a0
;   undefined4 DAT_006128c0
;   undefined4 DAT_006128e0
;   undefined4 DAT_00612900
;   undefined4 DAT_00612920
;   undefined4 DAT_00612940
;   undefined4 DAT_00612960
;   undefined4 DAT_00612980
;   undefined4 DAT_006129a0
;   undefined4 DAT_006129c0
;   undefined4 DAT_006129e0
;   undefined4 DAT_00612a00
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046f9bc
        ;   Label: FUN_0046f9bc
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
    MOVD MM5,dword ptr [0x01c38b5c]     ; 0046f9d4 | DAT_01c38b5c
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
    MOV EAX,[0x00b6639c]                ; 0046fc14 | DAT_00b6639c
    MOV EAX,[0x00b663bc]                ; 0046fc19 | DAT_00b663bc
    MOV EAX,[0x00b663dc]                ; 0046fc1e | DAT_00b663dc
    MOV EAX,[0x00b663fc]                ; 0046fc23 | DAT_00b663fc
    MOV EAX,[0x00b6641c]                ; 0046fc28 | DAT_00b6641c
    MOV EAX,[0x00b6643c]                ; 0046fc2d | DAT_00b6643c
    MOV EAX,[0x00b6645c]                ; 0046fc32 | DAT_00b6645c
    MOV EAX,[0x00b6647c]                ; 0046fc37 | DAT_00b6647c
    MOV EAX,[0x00b6649c]                ; 0046fc3c | DAT_00b6649c
    MOV EAX,[0x00b664bc]                ; 0046fc41 | DAT_00b664bc
    MOV EAX,[0x00b664dc]                ; 0046fc46 | DAT_00b664dc
    MOV EAX,[0x00b664fc]                ; 0046fc4b | DAT_00b664fc
    MOV EAX,[0x00b6651c]                ; 0046fc50 | DAT_00b6651c
    MOV EAX,[0x00b6653c]                ; 0046fc55 | DAT_00b6653c
    MOV EAX,[0x00b6655c]                ; 0046fc5a | DAT_00b6655c
    MOV EAX,[0x00b6657c]                ; 0046fc5f | DAT_00b6657c
    MOV EAX,[0x00b6659c]                ; 0046fc64 | DAT_00b6659c
    MOV EAX,[0x00b665bc]                ; 0046fc69 | DAT_00b665bc
    MOV EAX,[0x00b665dc]                ; 0046fc6e | DAT_00b665dc
    MOV EAX,[0x00b665fc]                ; 0046fc73 | DAT_00b665fc
    MOV EAX,[0x00b6661c]                ; 0046fc78 | DAT_00b6661c
    MOV EAX,[0x00b6663c]                ; 0046fc7d | DAT_00b6663c
    MOV EAX,[0x00b6665c]                ; 0046fc82 | DAT_00b6665c
    MOV EAX,[0x00b6667c]                ; 0046fc87 | DAT_00b6667c
    MOV EAX,[0x00b6669c]                ; 0046fc8c | DAT_00b6669c
    MOV EAX,[0x00b666bc]                ; 0046fc91 | DAT_00b666bc
    MOV EAX,[0x00b666dc]                ; 0046fc96 | DAT_00b666dc
    MOV EAX,[0x00b666fc]                ; 0046fc9b | DAT_00b666fc
    MOV EAX,[0x00b6671c]                ; 0046fca0 | DAT_00b6671c
    MOV EAX,[0x00b6673c]                ; 0046fca5 | DAT_00b6673c
    MOV EAX,[0x00b6675c]                ; 0046fcaa | DAT_00b6675c
    MOV EAX,[0x00b6677c]                ; 0046fcaf | DAT_00b6677c
    MOV EAX,[0x00612880]                ; 0046fcb4 | DAT_00612880
    MOV EAX,[0x006128a0]                ; 0046fcb9 | DAT_006128a0
    MOV EAX,[0x006128c0]                ; 0046fcbe | DAT_006128c0
    MOV EAX,[0x006128e0]                ; 0046fcc3 | DAT_006128e0
    MOV EAX,[0x00612900]                ; 0046fcc8 | DAT_00612900
    MOV EAX,[0x00612920]                ; 0046fccd | DAT_00612920
    MOV EAX,[0x00612940]                ; 0046fcd2 | DAT_00612940
    MOV EAX,[0x00612960]                ; 0046fcd7 | DAT_00612960
    MOV EAX,[0x00612980]                ; 0046fcdc | DAT_00612980
    MOV EAX,[0x006129a0]                ; 0046fce1 | DAT_006129a0
    MOV EAX,[0x006129c0]                ; 0046fce6 | DAT_006129c0
    MOV EAX,[0x006129e0]                ; 0046fceb | DAT_006129e0
    MOV EAX,[0x00612a00]                ; 0046fcf0 | DAT_00612a00
    MOV EAX,[0x00612a20]                ; 0046fcf5 | DAT_00612a20
    MOV EAX,[0x00612a40]                ; 0046fcfa | DAT_00612a40
    MOV EAX,[0x00612a60]                ; 0046fcff | DAT_00612a60
    MOV EAX,[0x00612a80]                ; 0046fd04 | DAT_00612a80
    MOV EAX,[0x00612aa0]                ; 0046fd09 | DAT_00612aa0
    MOV EAX,[0x00612ac0]                ; 0046fd0e | DAT_00612ac0
    MOV EAX,[0x00612ae0]                ; 0046fd13 | DAT_00612ae0
    MOV EAX,[0x00612b00]                ; 0046fd18 | DAT_00612b00
    MOV EAX,[0x00612b20]                ; 0046fd1d | DAT_00612b20
    MOV EAX,[0x00612b40]                ; 0046fd22 | DAT_00612b40
    MOV EAX,[0x00612b60]                ; 0046fd27 | DAT_00612b60
    MOV EAX,[0x00612b80]                ; 0046fd2c | DAT_00612b80
    MOV EAX,[0x00612ba0]                ; 0046fd31 | DAT_00612ba0
    MOV EAX,[0x00612bc0]                ; 0046fd36 | DAT_00612bc0
    MOV EAX,[0x00612be0]                ; 0046fd3b | DAT_00612be0
    MOV EAX,[0x00612c00]                ; 0046fd40 | DAT_00612c00
    MOV EAX,[0x00612c20]                ; 0046fd45 | DAT_00612c20
    MOV EAX,[0x00612c40]                ; 0046fd4a | DAT_00612c40
    MOV EAX,[0x00612c60]                ; 0046fd4f | DAT_00612c60
    MOV EAX,[0x00612c80]                ; 0046fd54 | DAT_00612c80
    MOV EAX,[0x00612ca0]                ; 0046fd59 | DAT_00612ca0
    MOV EAX,[0x00612cc0]                ; 0046fd5e | DAT_00612cc0
    MOV EAX,[0x00612ce0]                ; 0046fd63 | DAT_00612ce0
    MOV EAX,[0x00612d00]                ; 0046fd68 | DAT_00612d00
    MOV EAX,[0x00612d20]                ; 0046fd6d | DAT_00612d20
    MOV EAX,[0x00612d40]                ; 0046fd72 | DAT_00612d40
    MOV EAX,[0x00612d60]                ; 0046fd77 | DAT_00612d60
    MOV EAX,[0x00612d80]                ; 0046fd7c | DAT_00612d80
    MOV EAX,[0x00612da0]                ; 0046fd81 | DAT_00612da0
    MOV EAX,[0x00612dc0]                ; 0046fd86 | DAT_00612dc0
    MOV EAX,[0x00612de0]                ; 0046fd8b | DAT_00612de0
    MOV EAX,[0x00612e00]                ; 0046fd90 | DAT_00612e00
    MOV EAX,[0x00612e20]                ; 0046fd95 | DAT_00612e20
    MOV EAX,[0x00612e40]                ; 0046fd9a | DAT_00612e40
    MOV EAX,[0x00612e60]                ; 0046fd9f | DAT_00612e60
    MOV EAX,[0x00612e80]                ; 0046fda4 | DAT_00612e80
    MOV EAX,[0x00612ea0]                ; 0046fda9 | DAT_00612ea0
    MOV EAX,[0x00612ec0]                ; 0046fdae | DAT_00612ec0
    MOV EAX,[0x00612ee0]                ; 0046fdb3 | DAT_00612ee0
    MOV EAX,[0x00612f00]                ; 0046fdb8 | DAT_00612f00
    MOV EAX,[0x00612f20]                ; 0046fdbd | DAT_00612f20
    MOV EAX,[0x00612f40]                ; 0046fdc2 | DAT_00612f40
    MOV EAX,[0x00612f60]                ; 0046fdc7 | DAT_00612f60
    MOV EAX,[0x00612f80]                ; 0046fdcc | DAT_00612f80
    MOV EAX,[0x00612fa0]                ; 0046fdd1 | DAT_00612fa0
    MOV EAX,[0x00612fc0]                ; 0046fdd6 | DAT_00612fc0
    MOV EAX,[0x00612fe0]                ; 0046fddb | DAT_00612fe0
    MOV EAX,[0x00613000]                ; 0046fde0 | DAT_00613000
    MOV EAX,[0x00613020]                ; 0046fde5 | DAT_00613020
    MOV EAX,[0x00613040]                ; 0046fdea | DAT_00613040
    MOV EAX,[0x00613060]                ; 0046fdef | DAT_00613060
    JMP 0x0046fe00                      ; 0046fdf4
        ;   XREF to: 0046fe00 (UNCONDITIONAL_JUMP)  ; LAB_0046fe00
    MOVZX EDX,byte ptr [EBX]            ; 0046fe00
        ;   Label: LAB_0046fe00
    MOVQ MM0,qword ptr [ESI]            ; 0046fe03
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 0046fe06 | DAT_00b6639c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 0046fe0e
    MOVZX EAX,byte ptr [EBP]            ; 0046fe12
    MOVD MM6,dword ptr [EDX*0x4 + 0xb6639c] ; 0046fe16 | DAT_00b6639c
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
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 0046fe3f | DAT_00612880
    PMULLW MM1,MM6                      ; 0046fe47
    MOVQ MM2,MM3                        ; 0046fe4a
    MOVQ MM4,MM5                        ; 0046fe4d
    PXOR MM2,qword ptr [0x00613078]     ; 0046fe50 | DAT_00613078
    PMULHW MM0,MM2                      ; 0046fe57
    PMULHW MM1,MM2                      ; 0046fe5a
    PMULHW MM4,MM3                      ; 0046fe5d
    PADDW MM0,MM4                       ; 0046fe60
    PADDW MM1,MM4                       ; 0046fe63
    PADDW MM0,qword ptr [0x00611308]    ; 0046fe66 | DAT_00611308
    PADDW MM1,qword ptr [0x00611310]    ; 0046fe6d | DAT_00611310
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

