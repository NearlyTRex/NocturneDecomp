; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00402040(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   FUN_004024e0 at 00402536
;   FUN_00402570 at 004025bf
;   FUN_004026b0 at 004026ec
;
; Referenced Globals:
;   undefined4 DAT_005a4b80
;   undefined4 DAT_005a4b81
;   undefined4 DAT_005a4b82
;   undefined4 DAT_005a4b83
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402040
        ;   Label: FUN_00402040
    PUSH EDI                            ; 00402041
    PUSH EBP                            ; 00402042
    SUB ESP,0x10                        ; 00402043
    MOV EBP,dword ptr [ESP + 0x28]      ; 00402046
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040204a
    SUB EDX,0x20                        ; 0040204e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00402051
    ADD EAX,EDX                         ; 00402058
    SHL EAX,0x4                         ; 0040205a
    ADD EAX,EDX                         ; 0040205d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0040205f
    ADD EAX,0x5a4b80                    ; 00402063 | DAT_005a4b80
    XOR EDX,EDX                         ; 00402068
    MOV EBX,dword ptr [0x01c00c58]      ; 0040206a | DAT_01c00c58
    MOV DL,byte ptr [EAX]               ; 00402070 | DAT_005a4b80
    CMP ECX,EBX                         ; 00402072
    JL 0x004020f2                       ; 00402074
        ;   XREF to: 004020f2 (CONDITIONAL_JUMP)  ; LAB_004020f2
    CMP EBP,dword ptr [0x01c00c5c]      ; 0040207a | DAT_01c00c5c
    JL 0x004020f2                       ; 00402080
        ;   XREF to: 004020f2 (CONDITIONAL_JUMP)  ; LAB_004020f2
    MOV ECX,dword ptr [0x01c00c60]      ; 00402086 | DAT_01c00c60
    INC ECX                             ; 0040208c
    MOV EDI,dword ptr [ESP + 0x24]      ; 0040208d
    SUB ECX,EDX                         ; 00402091
    CMP ECX,EDI                         ; 00402093
    JL 0x004020f2                       ; 00402095
        ;   XREF to: 004020f2 (CONDITIONAL_JUMP)  ; LAB_004020f2
    MOV ECX,dword ptr [0x01c00c64]      ; 00402097 | DAT_01c00c64
    SUB ECX,0xa                         ; 0040209d
    CMP EBP,ECX                         ; 004020a0
    JG 0x004020f2                       ; 004020a2
        ;   XREF to: 004020f2 (CONDITIONAL_JUMP)  ; LAB_004020f2
    PUSH ESI                            ; 004020a4
    MOV EBX,dword ptr [0x005b7624]      ; 004020a5 | DAT_005b7624
    SHL EBP,0x2                         ; 004020ab
    INC EAX                             ; 004020ae
    LEA ECX,[EBP + 0x2c]                ; 004020af
    CMP EBX,0x8                         ; 004020b2
    JNZ 0x004020f6                      ; 004020b5
        ;   XREF to: 004020f6 (CONDITIONAL_JUMP)  ; LAB_004020f6
    MOV EDI,ECX                         ; 004020b7
    MOV ECX,dword ptr [ESP + 0x28]      ; 004020b9
        ;   Label: LAB_004020b9
    MOV ESI,dword ptr [EBP + 0x1bd2fa0] ; 004020bd | DAT_01bd2fa0 | DAT_01bd2fa4
    ADD ESI,ECX                         ; 004020c3
    XOR ECX,ECX                         ; 004020c5
    TEST EDX,EDX                        ; 004020c7
    JLE 0x004020de                      ; 004020c9
        ;   XREF to: 004020de (CONDITIONAL_JUMP)  ; LAB_004020de
    MOV BL,byte ptr [EAX]               ; 004020cb | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
        ;   Label: LAB_004020cb
    TEST BL,BL                          ; 004020cd
    JZ 0x004020d7                       ; 004020cf
        ;   XREF to: 004020d7 (CONDITIONAL_JUMP)  ; LAB_004020d7
    MOV BL,byte ptr [ESP + 0x30]        ; 004020d1
    MOV byte ptr [ESI],BL               ; 004020d5
    INC EAX                             ; 004020d7
        ;   Label: LAB_004020d7
    INC ECX                             ; 004020d8
    INC ESI                             ; 004020d9
    CMP ECX,EDX                         ; 004020da
    JL 0x004020cb                       ; 004020dc
        ;   XREF to: 004020cb (CONDITIONAL_JUMP)  ; LAB_004020cb
    ADD EBP,0x4                         ; 004020de
        ;   Label: LAB_004020de
    CMP EBP,EDI                         ; 004020e1
    JNZ 0x004020b9                      ; 004020e3
        ;   XREF to: 004020b9 (CONDITIONAL_JUMP)  ; LAB_004020b9
    LEA ECX,[EDX + 0x1]                 ; 004020e5
        ;   Label: LAB_004020e5
    POP ESI                             ; 004020e8
    MOV EAX,ECX                         ; 004020e9
        ;   Label: LAB_004020e9
    ADD ESP,0x10                        ; 004020eb
    POP EBP                             ; 004020ee
    POP EDI                             ; 004020ef
    POP EBX                             ; 004020f0
    RET                                 ; 004020f1
    XOR ECX,ECX                         ; 004020f2
        ;   Label: LAB_004020f2
    JMP 0x004020e9                      ; 004020f4
        ;   XREF to: 004020e9 (UNCONDITIONAL_JUMP)  ; LAB_004020e9
    CMP EBX,0x10                        ; 004020f6
        ;   Label: LAB_004020f6
    JNZ 0x00402147                      ; 004020f9
        ;   XREF to: 00402147 (CONDITIONAL_JUMP)  ; LAB_00402147
    MOV EBX,dword ptr [ESP + 0x28]      ; 004020fb
    MOV EDI,dword ptr [ESP + 0x30]      ; 004020ff
    MOV dword ptr [ESP + 0x10],ECX      ; 00402103
    ADD EBX,EBX                         ; 00402107
    ADD EDI,EDI                         ; 00402109
    MOV dword ptr [ESP + 0x4],EBX       ; 0040210b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040210f
        ;   Label: LAB_0040210f
    MOV ESI,dword ptr [EBP + 0x1bd2fa0] ; 00402113 | DAT_01bd2fa0 | DAT_01bd2fa4
    ADD ESI,ECX                         ; 00402119
    XOR ECX,ECX                         ; 0040211b
    TEST EDX,EDX                        ; 0040211d
    JLE 0x0040213a                      ; 0040211f
        ;   XREF to: 0040213a (CONDITIONAL_JUMP)  ; LAB_0040213a
    MOV BL,byte ptr [EAX]               ; 00402121 | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
        ;   Label: LAB_00402121
    TEST BL,BL                          ; 00402123
    JZ 0x00402131                       ; 00402125
        ;   XREF to: 00402131 (CONDITIONAL_JUMP)  ; LAB_00402131
    MOV BX,word ptr [EDI + 0x1bff720]   ; 00402127
    MOV word ptr [ESI],BX               ; 0040212e
    INC EAX                             ; 00402131
        ;   Label: LAB_00402131
    INC ECX                             ; 00402132
    ADD ESI,0x2                         ; 00402133
    CMP ECX,EDX                         ; 00402136
    JL 0x00402121                       ; 00402138
        ;   XREF to: 00402121 (CONDITIONAL_JUMP)  ; LAB_00402121
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040213a
        ;   Label: LAB_0040213a
    ADD EBP,0x4                         ; 0040213e
    CMP EBP,EBX                         ; 00402141
    JZ 0x004020e5                       ; 00402143
        ;   XREF to: 004020e5 (CONDITIONAL_JUMP)  ; LAB_004020e5
    JMP 0x0040210f                      ; 00402145
        ;   XREF to: 0040210f (UNCONDITIONAL_JUMP)  ; LAB_0040210f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00402147
        ;   Label: LAB_00402147
    MOV EDI,dword ptr [ESP + 0x30]      ; 0040214b
    MOV dword ptr [ESP + 0x8],ECX       ; 0040214f
    SHL EBX,0x2                         ; 00402153
    SHL EDI,0x2                         ; 00402156
    MOV dword ptr [ESP + 0xc],EBX       ; 00402159
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040215d
        ;   Label: LAB_0040215d
    MOV ECX,dword ptr [EBP + 0x1bd2fa0] ; 00402161 | DAT_01bd2fa0 | DAT_01bd2fa4
    XOR ESI,ESI                         ; 00402167
    ADD ECX,EBX                         ; 00402169
    TEST EDX,EDX                        ; 0040216b
    JLE 0x00402186                      ; 0040216d
        ;   XREF to: 00402186 (CONDITIONAL_JUMP)  ; LAB_00402186
    MOV BL,byte ptr [EAX]               ; 0040216f | DAT_005a4b81 | DAT_005a4b82 | DAT_005a4b83
        ;   Label: LAB_0040216f
    TEST BL,BL                          ; 00402171
    JZ 0x0040217d                       ; 00402173
        ;   XREF to: 0040217d (CONDITIONAL_JUMP)  ; LAB_0040217d
    MOV EBX,dword ptr [EDI + 0x1bff920] ; 00402175
    MOV dword ptr [ECX],EBX             ; 0040217b
    INC EAX                             ; 0040217d
        ;   Label: LAB_0040217d
    INC ESI                             ; 0040217e
    ADD ECX,0x4                         ; 0040217f
    CMP ESI,EDX                         ; 00402182
    JL 0x0040216f                       ; 00402184
        ;   XREF to: 0040216f (CONDITIONAL_JUMP)  ; LAB_0040216f
    MOV ESI,dword ptr [ESP + 0x8]       ; 00402186
        ;   Label: LAB_00402186
    ADD EBP,0x4                         ; 0040218a
    CMP EBP,ESI                         ; 0040218d
    JZ 0x004020e5                       ; 0040218f
        ;   XREF to: 004020e5 (CONDITIONAL_JUMP)  ; LAB_004020e5
    JMP 0x0040215d                      ; 00402195
        ;   XREF to: 0040215d (UNCONDITIONAL_JUMP)  ; LAB_0040215d

