; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dcube_cpp_FUN_004570de(undefined4 *param_1,float *param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0045707c = 004576c6
;   undefined1* PTR_caseD_3_00457084 = 0045736c
;   undefined1* PTR_caseD_1_0045708c = 0045777a
;   undefined1* PTR_caseD_3_00457094 = 0045740e
;   undefined1* PTR_caseD_1_0045709c = 00457828
;   undefined1* PTR_caseD_3_004570a4 = 004574b1
;   undefined1* PTR_caseD_1_004570ac = 004578dc
;   undefined1* PTR_caseD_3_004570b4 = 00457554
;   undefined1* PTR_caseD_1_004570bc = 0045798c
;   undefined1* PTR_caseD_3_004570c4 = 004575fa
;   undefined1* PTR_caseD_1_004570cc = 00457a3c
;   undefined1* PTR_caseD_3_004570d4 = 004576a0
;   undefined4 DAT_0152bd4c
;   undefined4 DAT_0152bd50
;   undefined4 DAT_0152bd54
;   ... and 47 more
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00455460
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004570de
        ;   Label: core_dcube.cpp_FUN_004570de
    PUSH EBX                            ; 004570e0
    PUSH ESI                            ; 004570e1
    PUSH EDI                            ; 004570e2
    PUSH EBP                            ; 004570e3
    MOV EBP,ESP                         ; 004570e4
    SUB ESP,0x1c                        ; 004570e6
    AND ESP,0xfffffff8                  ; 004570e9
    MOV dword ptr [0x0152bd4c],0x3      ; 004570ec | DAT_0152bd4c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004570f6
    MOV EDX,dword ptr [EDX]             ; 004570f9
    CMP EDX,0x152bd50                   ; 004570fb
    JNZ 0x00457293                      ; 00457101
        ;   XREF to: 00457293 (CONDITIONAL_JUMP)  ; LAB_00457293
    MOV EDX,dword ptr [EBP + 0x14]      ; 00457107
        ;   Label: LAB_00457107
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045710a
    CMP EDX,0x152bd5c                   ; 0045710d
    JZ 0x0045712e                       ; 00457113
        ;   XREF to: 0045712e (CONDITIONAL_JUMP)  ; LAB_0045712e
    FLD float ptr [EDX]                 ; 00457115
    FLD float ptr [EDX + 0x8]           ; 00457117
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045711a
    MOV [0x0152bd60],EAX                ; 0045711d | DAT_0152bd60
    FSTP float ptr [0x0152bd64]         ; 00457122 | DAT_0152bd64
    FSTP float ptr [0x0152bd5c]         ; 00457128 | DAT_0152bd5c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045712e
        ;   Label: LAB_0045712e
    MOV EDX,dword ptr [EDX + 0x8]       ; 00457131
    CMP EDX,0x152bd68                   ; 00457134
    JZ 0x00457155                       ; 0045713a
        ;   XREF to: 00457155 (CONDITIONAL_JUMP)  ; LAB_00457155
    FLD float ptr [EDX]                 ; 0045713c
    FLD float ptr [EDX + 0x8]           ; 0045713e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457141
    MOV [0x0152bd6c],EAX                ; 00457144 | DAT_0152bd6c
    FSTP float ptr [0x0152bd70]         ; 00457149 | DAT_0152bd70
    FSTP float ptr [0x0152bd68]         ; 0045714f | DAT_0152bd68
    MOV EDI,0xffffffff                  ; 00457155
        ;   Label: LAB_00457155
    MOV ESI,dword ptr [0x0152bd4c]      ; 0045715a | DAT_0152bd4c
    XOR ECX,ECX                         ; 00457160
    XOR EBX,EBX                         ; 00457162
    MOV dword ptr [ESP + 0x10],ECX      ; 00457164
    TEST ESI,ESI                        ; 00457168
    JLE 0x004571fb                      ; 0045716a
        ;   XREF to: 004571fb (CONDITIONAL_JUMP)  ; LAB_004571fb
    MOV ESI,0x152bd50                   ; 00457170
    FLD float ptr [ESI]                 ; 00457175
        ;   Label: LAB_00457175
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00457177
    MOV ECX,ESI                         ; 0045717a
    XOR EDX,EDX                         ; 0045717c
    FCOMP float ptr [EAX]               ; 0045717e
    FNSTSW AX                           ; 00457180
    SAHF                                ; 00457182
    JBE 0x0045718a                      ; 00457183
        ;   XREF to: 0045718a (CONDITIONAL_JUMP)  ; LAB_0045718a
    MOV EDX,0x1                         ; 00457185
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045718a
        ;   Label: LAB_0045718a
    FLD float ptr [ECX + 0x4]           ; 0045718d
    FCOMP float ptr [EAX + 0x4]         ; 00457190
    FNSTSW AX                           ; 00457193
    SAHF                                ; 00457195
    JBE 0x0045719b                      ; 00457196
        ;   XREF to: 0045719b (CONDITIONAL_JUMP)  ; LAB_0045719b
    OR DL,0x2                           ; 00457198
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045719b
        ;   Label: LAB_0045719b
    FLD float ptr [ECX + 0x8]           ; 0045719e
    FCOMP float ptr [EAX + 0x8]         ; 004571a1
    FNSTSW AX                           ; 004571a4
    SAHF                                ; 004571a6
    JBE 0x004571ac                      ; 004571a7
        ;   XREF to: 004571ac (CONDITIONAL_JUMP)  ; LAB_004571ac
    OR DL,0x4                           ; 004571a9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004571ac
        ;   Label: LAB_004571ac
    FLD float ptr [ECX]                 ; 004571af
    FCOMP float ptr [EAX]               ; 004571b1
    FNSTSW AX                           ; 004571b3
    SAHF                                ; 004571b5
    JNC 0x004571bb                      ; 004571b6
        ;   XREF to: 004571bb (CONDITIONAL_JUMP)  ; LAB_004571bb
    OR DL,0x8                           ; 004571b8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004571bb
        ;   Label: LAB_004571bb
    FLD float ptr [ECX + 0x4]           ; 004571be
    FCOMP float ptr [EAX + 0x4]         ; 004571c1
    FNSTSW AX                           ; 004571c4
    SAHF                                ; 004571c6
    JNC 0x004571cc                      ; 004571c7
        ;   XREF to: 004571cc (CONDITIONAL_JUMP)  ; LAB_004571cc
    OR DL,0x10                          ; 004571c9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004571cc
        ;   Label: LAB_004571cc
    FLD float ptr [ECX + 0x8]           ; 004571cf
    FCOMP float ptr [EAX + 0x8]         ; 004571d2
    FNSTSW AX                           ; 004571d5
    SAHF                                ; 004571d7
    JNC 0x004571dd                      ; 004571d8
        ;   XREF to: 004571dd (CONDITIONAL_JUMP)  ; LAB_004571dd
    OR DL,0x20                          ; 004571da
    MOV EAX,dword ptr [ESP + 0x10]      ; 004571dd
        ;   Label: LAB_004571dd
    ADD ESI,0xc                         ; 004571e1
    INC EBX                             ; 004571e4
    AND EDI,EDX                         ; 004571e5
    OR EAX,EDX                          ; 004571e7
    MOV EDX,dword ptr [0x0152bd4c]      ; 004571e9 | DAT_0152bd4c
    MOV dword ptr [ESP + 0x10],EAX      ; 004571ef
    CMP EBX,EDX                         ; 004571f3
    JL 0x00457175                       ; 004571f5
        ;   XREF to: 00457175 (CONDITIONAL_JUMP)  ; LAB_00457175
    CMP dword ptr [ESP + 0x10],0x0      ; 004571fb
        ;   Label: LAB_004571fb
    JNZ 0x004572b1                      ; 00457200
        ;   XREF to: 004572b1 (CONDITIONAL_JUMP)  ; LAB_004572b1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00457206
    MOV ESI,0x3                         ; 00457209
    MOV EDX,dword ptr [EDX]             ; 0045720e
    MOV dword ptr [0x0152c1e4],ESI      ; 00457210 | DAT_0152c1e4
    CMP EDX,0x152c1e8                   ; 00457216
    JZ 0x00457237                       ; 0045721c
        ;   XREF to: 00457237 (CONDITIONAL_JUMP)  ; LAB_00457237
    FLD float ptr [EDX]                 ; 0045721e
    FLD float ptr [EDX + 0x8]           ; 00457220
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457223
    MOV [0x0152c1ec],EAX                ; 00457226 | DAT_0152c1ec
    FSTP float ptr [0x0152c1f0]         ; 0045722b | DAT_0152c1f0
    FSTP float ptr [0x0152c1e8]         ; 00457231 | DAT_0152c1e8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00457237
        ;   Label: LAB_00457237
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045723a
    CMP EDX,0x152c1f4                   ; 0045723d
    JZ 0x0045725e                       ; 00457243
        ;   XREF to: 0045725e (CONDITIONAL_JUMP)  ; LAB_0045725e
    FLD float ptr [EDX]                 ; 00457245
    FLD float ptr [EDX + 0x8]           ; 00457247
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045724a
    MOV [0x0152c1f8],EAX                ; 0045724d | DAT_0152c1f8
    FSTP float ptr [0x0152c1fc]         ; 00457252 | DAT_0152c1fc
    FSTP float ptr [0x0152c1f4]         ; 00457258 | DAT_0152c1f4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045725e
        ;   Label: LAB_0045725e
    MOV EDX,dword ptr [EDX + 0x8]       ; 00457261
    CMP EDX,0x152c200                   ; 00457264
    JZ 0x00457285                       ; 0045726a
        ;   XREF to: 00457285 (CONDITIONAL_JUMP)  ; LAB_00457285
    FLD float ptr [EDX]                 ; 0045726c
    FLD float ptr [EDX + 0x8]           ; 0045726e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457271
    MOV [0x0152c204],EAX                ; 00457274 | DAT_0152c204
    FSTP float ptr [0x0152c208]         ; 00457279 | DAT_0152c208
    FSTP float ptr [0x0152c200]         ; 0045727f | DAT_0152c200
    MOV ECX,0x1                         ; 00457285
        ;   Label: LAB_00457285
    MOV EAX,ECX                         ; 0045728a
    MOV ESP,EBP                         ; 0045728c
    POP EBP                             ; 0045728e
    POP EDI                             ; 0045728f
    POP ESI                             ; 00457290
    POP EBX                             ; 00457291
    RET                                 ; 00457292
    FLD float ptr [EDX]                 ; 00457293
        ;   Label: LAB_00457293
    FLD float ptr [EDX + 0x8]           ; 00457295
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457298
    MOV [0x0152bd54],EAX                ; 0045729b | DAT_0152bd54
    FSTP float ptr [0x0152bd58]         ; 004572a0 | DAT_0152bd58
    FSTP float ptr [0x0152bd50]         ; 004572a6 | DAT_0152bd50
    JMP 0x00457107                      ; 004572ac
        ;   XREF to: 00457107 (UNCONDITIONAL_JUMP)  ; LAB_00457107
    TEST EDI,EDI                        ; 004572b1
        ;   Label: LAB_004572b1
    JNZ 0x004576bb                      ; 004572b3
        ;   XREF to: 004576bb (CONDITIONAL_JUMP)  ; LAB_004576bb
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004572b9
    MOV EBX,dword ptr [0x0152bd4c]      ; 004572bc | DAT_0152bd4c
    MOV dword ptr [0x0152bed4],EDI      ; 004572c2 | DAT_0152bed4
    MOV dword ptr [0x0152bf98],EDI      ; 004572c8 | DAT_0152bf98
    MOV dword ptr [0x0152c05c],EDI      ; 004572ce | DAT_0152c05c
    MOV dword ptr [0x0152c120],EDI      ; 004572d4 | DAT_0152c120
    MOV dword ptr [0x0152c1e4],EDI      ; 004572da | DAT_0152c1e4
    MOV dword ptr [0x0152be10],EDI      ; 004572e0 | DAT_0152be10
    MOV EDX,dword ptr [EDX + 0x4]       ; 004572e6
    XOR ESI,ESI                         ; 004572e9
    MOV dword ptr [ESP + 0x14],EDX      ; 004572eb
    TEST EBX,EBX                        ; 004572ef
    JLE 0x0045737a                      ; 004572f1
        ;   XREF to: 0045737a (CONDITIONAL_JUMP)  ; LAB_0045737a
    MOV EBX,0x152bd50                   ; 004572f7
    MOV EDI,dword ptr [0x0152bd4c]      ; 004572fc | DAT_0152bd4c
        ;   Label: LAB_004572fc
    LEA ECX,[ESI + 0x1]                 ; 00457302
    CMP ECX,EDI                         ; 00457305
    JNZ 0x0045730b                      ; 00457307
        ;   XREF to: 0045730b (CONDITIONAL_JUMP)  ; LAB_0045730b
    XOR ECX,EDI                         ; 00457309
    IMUL ECX,ECX,0xc                    ; 0045730b
        ;   Label: LAB_0045730b
    FLD float ptr [EBX + 0x4]           ; 0045730e
    MOV EDI,0x152bd50                   ; 00457311
    MOV EDX,EBX                         ; 00457316
    ADD EDI,ECX                         ; 00457318
    XOR ECX,ECX                         ; 0045731a
    FCOMP float ptr [ESP + 0x14]        ; 0045731c
    FNSTSW AX                           ; 00457320
    SAHF                                ; 00457322
    JBE 0x0045732a                      ; 00457323
        ;   XREF to: 0045732a (CONDITIONAL_JUMP)  ; LAB_0045732a
    MOV ECX,0x1                         ; 00457325
    FLD float ptr [EDI + 0x4]           ; 0045732a
        ;   Label: LAB_0045732a
    FCOMP float ptr [ESP + 0x14]        ; 0045732d
    FNSTSW AX                           ; 00457331
    SAHF                                ; 00457333
    JBE 0x00457339                      ; 00457334
        ;   XREF to: 00457339 (CONDITIONAL_JUMP)  ; LAB_00457339
    OR CL,0x2                           ; 00457336
    CMP ECX,0x3                         ; 00457339
        ;   Label: LAB_00457339
    JA 0x0045736c                       ; 0045733c
        ;   XREF to: 0045736c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x457078]  ; 0045733e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x0152be10],0xc ; 00457345 | DAT_0152be10
        ;   Label: caseD_0
    ADD ECX,0x152be14                   ; 0045734c
    CMP ECX,EDX                         ; 00457352
    JZ 0x00457366                       ; 00457354
        ;   XREF to: 00457366 (CONDITIONAL_JUMP)  ; LAB_00457366
    MOV EAX,dword ptr [EDX]             ; 00457356
    MOV dword ptr [ECX],EAX             ; 00457358 | DAT_0152be14
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045735a
    MOV dword ptr [ECX + 0x4],EAX       ; 0045735d | DAT_0152be18
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457360
    MOV dword ptr [ECX + 0x8],EAX       ; 00457363 | DAT_0152be1c
    INC dword ptr [0x0152be10]          ; 00457366 | DAT_0152be10
        ;   Label: LAB_00457366
    MOV EDI,dword ptr [0x0152bd4c]      ; 0045736c | DAT_0152bd4c
        ;   Label: caseD_3
    INC ESI                             ; 00457372
    ADD EBX,0xc                         ; 00457373
    CMP ESI,EDI                         ; 00457376
    JL 0x004572fc                       ; 00457378
        ;   XREF to: 004572fc (CONDITIONAL_JUMP)  ; LAB_004572fc
    MOV EAX,[0x0152be10]                ; 0045737a | DAT_0152be10
        ;   Label: LAB_0045737a
    CMP EAX,0x3                         ; 0045737f
    JL 0x004576bb                       ; 00457382
        ;   XREF to: 004576bb (CONDITIONAL_JUMP)  ; LAB_004576bb
    MOV EDX,dword ptr [EBP + 0x18]      ; 00457388
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045738b
    XOR ESI,ESI                         ; 0045738e
    MOV dword ptr [ESP],EDX             ; 00457390
    TEST EAX,EAX                        ; 00457393
    JLE 0x0045741c                      ; 00457395
        ;   XREF to: 0045741c (CONDITIONAL_JUMP)  ; LAB_0045741c
    MOV EBX,0x152be14                   ; 0045739b
    MOV EDI,dword ptr [0x0152be10]      ; 004573a0 | DAT_0152be10
        ;   Label: LAB_004573a0
    LEA ECX,[ESI + 0x1]                 ; 004573a6
    CMP ECX,EDI                         ; 004573a9
    JNZ 0x004573af                      ; 004573ab
        ;   XREF to: 004573af (CONDITIONAL_JUMP)  ; LAB_004573af
    XOR ECX,EDI                         ; 004573ad
    IMUL ECX,ECX,0xc                    ; 004573af
        ;   Label: LAB_004573af
    FLD float ptr [EBX + 0x4]           ; 004573b2 | DAT_0152be18 | DAT_0152be24
    MOV EDI,0x152be14                   ; 004573b5
    MOV EDX,EBX                         ; 004573ba
    ADD EDI,ECX                         ; 004573bc
    XOR ECX,ECX                         ; 004573be
    FCOMP float ptr [ESP]               ; 004573c0
    FNSTSW AX                           ; 004573c3
    SAHF                                ; 004573c5
    JNC 0x004573cd                      ; 004573c6
        ;   XREF to: 004573cd (CONDITIONAL_JUMP)  ; LAB_004573cd
    MOV ECX,0x1                         ; 004573c8
    FLD float ptr [EDI + 0x4]           ; 004573cd | DAT_0152be18 | DAT_0152be30
        ;   Label: LAB_004573cd
    FCOMP float ptr [ESP]               ; 004573d0
    FNSTSW AX                           ; 004573d3
    SAHF                                ; 004573d5
    JNC 0x004573db                      ; 004573d6
        ;   XREF to: 004573db (CONDITIONAL_JUMP)  ; LAB_004573db
    OR CL,0x2                           ; 004573d8
    CMP ECX,0x3                         ; 004573db
        ;   Label: LAB_004573db
    JA 0x0045740e                       ; 004573de
        ;   XREF to: 0045740e (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x457088]  ; 004573e0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x0152bed4],0xc ; 004573e7 | DAT_0152bed4
        ;   Label: caseD_0
    ADD ECX,0x152bed8                   ; 004573ee
    CMP ECX,EDX                         ; 004573f4
    JZ 0x00457408                       ; 004573f6
        ;   XREF to: 00457408 (CONDITIONAL_JUMP)  ; LAB_00457408
    MOV EAX,dword ptr [EDX]             ; 004573f8 | DAT_0152be14
    MOV dword ptr [ECX],EAX             ; 004573fa | DAT_0152bed8
    MOV EAX,dword ptr [EDX + 0x4]       ; 004573fc | DAT_0152be18
    MOV dword ptr [ECX + 0x4],EAX       ; 004573ff | DAT_0152bedc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457402 | DAT_0152be1c
    MOV dword ptr [ECX + 0x8],EAX       ; 00457405 | DAT_0152bee0
    INC dword ptr [0x0152bed4]          ; 00457408 | DAT_0152bed4
        ;   Label: LAB_00457408
    MOV EDX,dword ptr [0x0152be10]      ; 0045740e | DAT_0152be10
        ;   Label: caseD_3
    INC ESI                             ; 00457414
    ADD EBX,0xc                         ; 00457415
    CMP ESI,EDX                         ; 00457418
    JL 0x004573a0                       ; 0045741a
        ;   XREF to: 004573a0 (CONDITIONAL_JUMP)  ; LAB_004573a0
    MOV ECX,dword ptr [0x0152bed4]      ; 0045741c | DAT_0152bed4
        ;   Label: LAB_0045741c
    CMP ECX,0x3                         ; 00457422
    JL 0x004576bb                       ; 00457425
        ;   XREF to: 004576bb (CONDITIONAL_JUMP)  ; LAB_004576bb
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0045742b
    MOV EDX,dword ptr [EDX]             ; 0045742e
    XOR EBX,EBX                         ; 00457430
    MOV dword ptr [ESP + 0x18],EDX      ; 00457432
    TEST ECX,ECX                        ; 00457436
    JLE 0x004574bf                      ; 00457438
        ;   XREF to: 004574bf (CONDITIONAL_JUMP)  ; LAB_004574bf
    MOV ESI,0x152bed8                   ; 0045743e
    MOV EDI,dword ptr [0x0152bed4]      ; 00457443 | DAT_0152bed4
        ;   Label: LAB_00457443
    LEA ECX,[EBX + 0x1]                 ; 00457449
    CMP ECX,EDI                         ; 0045744c
    JNZ 0x00457452                      ; 0045744e
        ;   XREF to: 00457452 (CONDITIONAL_JUMP)  ; LAB_00457452
    XOR ECX,EDI                         ; 00457450
    IMUL ECX,ECX,0xc                    ; 00457452
        ;   Label: LAB_00457452
    FLD float ptr [ESI]                 ; 00457455 | DAT_0152bed8 | DAT_0152bee4
    MOV EDI,0x152bed8                   ; 00457457
    MOV EDX,ESI                         ; 0045745c
    ADD EDI,ECX                         ; 0045745e
    XOR ECX,ECX                         ; 00457460
    FCOMP float ptr [ESP + 0x18]        ; 00457462
    FNSTSW AX                           ; 00457466
    SAHF                                ; 00457468
    JBE 0x00457470                      ; 00457469
        ;   XREF to: 00457470 (CONDITIONAL_JUMP)  ; LAB_00457470
    MOV ECX,0x1                         ; 0045746b
    FLD float ptr [EDI]                 ; 00457470 | DAT_0152bed8 | DAT_0152bef0
        ;   Label: LAB_00457470
    FCOMP float ptr [ESP + 0x18]        ; 00457472
    FNSTSW AX                           ; 00457476
    SAHF                                ; 00457478
    JBE 0x0045747e                      ; 00457479
        ;   XREF to: 0045747e (CONDITIONAL_JUMP)  ; LAB_0045747e
    OR CL,0x2                           ; 0045747b
    CMP ECX,0x3                         ; 0045747e
        ;   Label: LAB_0045747e
    JA 0x004574b1                       ; 00457481
        ;   XREF to: 004574b1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x457098]  ; 00457483 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x0152bf98],0xc ; 0045748a | DAT_0152bf98
        ;   Label: caseD_0
    ADD ECX,0x152bf9c                   ; 00457491
    CMP ECX,EDX                         ; 00457497
    JZ 0x004574ab                       ; 00457499
        ;   XREF to: 004574ab (CONDITIONAL_JUMP)  ; LAB_004574ab
    MOV EAX,dword ptr [EDX]             ; 0045749b | DAT_0152bed8
    MOV dword ptr [ECX],EAX             ; 0045749d | DAT_0152bf9c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045749f | DAT_0152bedc
    MOV dword ptr [ECX + 0x4],EAX       ; 004574a2 | DAT_0152bfa0
    MOV EAX,dword ptr [EDX + 0x8]       ; 004574a5 | DAT_0152bee0
    MOV dword ptr [ECX + 0x8],EAX       ; 004574a8 | DAT_0152bfa4
    INC dword ptr [0x0152bf98]          ; 004574ab | DAT_0152bf98
        ;   Label: LAB_004574ab
    MOV EDX,dword ptr [0x0152bed4]      ; 004574b1 | DAT_0152bed4
        ;   Label: caseD_3
    INC EBX                             ; 004574b7
    ADD ESI,0xc                         ; 004574b8
    CMP EBX,EDX                         ; 004574bb
    JL 0x00457443                       ; 004574bd
        ;   XREF to: 00457443 (CONDITIONAL_JUMP)  ; LAB_00457443
    MOV ECX,dword ptr [0x0152bf98]      ; 004574bf | DAT_0152bf98
        ;   Label: LAB_004574bf
    CMP ECX,0x3                         ; 004574c5
    JL 0x004576bb                       ; 004574c8
        ;   XREF to: 004576bb (CONDITIONAL_JUMP)  ; LAB_004576bb
    MOV EDX,dword ptr [EBP + 0x18]      ; 004574ce
    MOV EDX,dword ptr [EDX]             ; 004574d1
    XOR EBX,EBX                         ; 004574d3
    MOV dword ptr [ESP + 0x4],EDX       ; 004574d5
    TEST ECX,ECX                        ; 004574d9
    JLE 0x00457562                      ; 004574db
        ;   XREF to: 00457562 (CONDITIONAL_JUMP)  ; LAB_00457562
    MOV ESI,0x152bf9c                   ; 004574e1
    MOV EDI,dword ptr [0x0152bf98]      ; 004574e6 | DAT_0152bf98
        ;   Label: LAB_004574e6
    LEA ECX,[EBX + 0x1]                 ; 004574ec
    CMP ECX,EDI                         ; 004574ef
    JNZ 0x004574f5                      ; 004574f1
        ;   XREF to: 004574f5 (CONDITIONAL_JUMP)  ; LAB_004574f5
    XOR ECX,EDI                         ; 004574f3
    IMUL ECX,ECX,0xc                    ; 004574f5
        ;   Label: LAB_004574f5
    FLD float ptr [ESI]                 ; 004574f8 | DAT_0152bf9c | DAT_0152bfa8
    MOV EDI,0x152bf9c                   ; 004574fa
    MOV EDX,ESI                         ; 004574ff
    ADD EDI,ECX                         ; 00457501
    XOR ECX,ECX                         ; 00457503
    FCOMP float ptr [ESP + 0x4]         ; 00457505
    FNSTSW AX                           ; 00457509
    SAHF                                ; 0045750b
    JNC 0x00457513                      ; 0045750c
        ;   XREF to: 00457513 (CONDITIONAL_JUMP)  ; LAB_00457513
    MOV ECX,0x1                         ; 0045750e
    FLD float ptr [EDI]                 ; 00457513 | DAT_0152bf9c | DAT_0152bfb4
        ;   Label: LAB_00457513
    FCOMP float ptr [ESP + 0x4]         ; 00457515
    FNSTSW AX                           ; 00457519
    SAHF                                ; 0045751b
    JNC 0x00457521                      ; 0045751c
        ;   XREF to: 00457521 (CONDITIONAL_JUMP)  ; LAB_00457521
    OR CL,0x2                           ; 0045751e
    CMP ECX,0x3                         ; 00457521
        ;   Label: LAB_00457521
    JA 0x00457554                       ; 00457524
        ;   XREF to: 00457554 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4570a8]  ; 00457526 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x0152c05c],0xc ; 0045752d | DAT_0152c05c
        ;   Label: caseD_0
    ADD ECX,0x152c060                   ; 00457534
    CMP ECX,EDX                         ; 0045753a
    JZ 0x0045754e                       ; 0045753c
        ;   XREF to: 0045754e (CONDITIONAL_JUMP)  ; LAB_0045754e
    MOV EAX,dword ptr [EDX]             ; 0045753e | DAT_0152bf9c
    MOV dword ptr [ECX],EAX             ; 00457540 | DAT_0152c060
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457542 | DAT_0152bfa0
    MOV dword ptr [ECX + 0x4],EAX       ; 00457545 | DAT_0152c064
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457548 | DAT_0152bfa4
    MOV dword ptr [ECX + 0x8],EAX       ; 0045754b | DAT_0152c068
    INC dword ptr [0x0152c05c]          ; 0045754e | DAT_0152c05c
        ;   Label: LAB_0045754e
    MOV EDX,dword ptr [0x0152bf98]      ; 00457554 | DAT_0152bf98
        ;   Label: caseD_3
    INC EBX                             ; 0045755a
    ADD ESI,0xc                         ; 0045755b
    CMP EBX,EDX                         ; 0045755e
    JL 0x004574e6                       ; 00457560
        ;   XREF to: 004574e6 (CONDITIONAL_JUMP)  ; LAB_004574e6
    MOV ECX,dword ptr [0x0152c05c]      ; 00457562 | DAT_0152c05c
        ;   Label: LAB_00457562
    CMP ECX,0x3                         ; 00457568
    JL 0x004576bb                       ; 0045756b
        ;   XREF to: 004576bb (CONDITIONAL_JUMP)  ; LAB_004576bb
    MOV EDX,dword ptr [EBP + 0x18]      ; 00457571
    MOV EDX,dword ptr [EDX + 0x8]       ; 00457574
    XOR EBX,EBX                         ; 00457577
    MOV dword ptr [ESP + 0x8],EDX       ; 00457579
    TEST ECX,ECX                        ; 0045757d
    JLE 0x00457608                      ; 0045757f
        ;   XREF to: 00457608 (CONDITIONAL_JUMP)  ; LAB_00457608
    MOV ESI,0x152c060                   ; 00457585
    MOV EDI,dword ptr [0x0152c05c]      ; 0045758a | DAT_0152c05c
        ;   Label: LAB_0045758a
    LEA ECX,[EBX + 0x1]                 ; 00457590
    CMP ECX,EDI                         ; 00457593
    JNZ 0x00457599                      ; 00457595
        ;   XREF to: 00457599 (CONDITIONAL_JUMP)  ; LAB_00457599
    XOR ECX,EDI                         ; 00457597
    IMUL ECX,ECX,0xc                    ; 00457599
        ;   Label: LAB_00457599
    FLD float ptr [ESI + 0x8]           ; 0045759c | DAT_0152c068 | DAT_0152c074
    MOV EDI,0x152c060                   ; 0045759f
    MOV EDX,ESI                         ; 004575a4
    ADD EDI,ECX                         ; 004575a6
    XOR ECX,ECX                         ; 004575a8
    FCOMP float ptr [ESP + 0x8]         ; 004575aa
    FNSTSW AX                           ; 004575ae
    SAHF                                ; 004575b0
    JNC 0x004575b8                      ; 004575b1
        ;   XREF to: 004575b8 (CONDITIONAL_JUMP)  ; LAB_004575b8
    MOV ECX,0x1                         ; 004575b3
    FLD float ptr [EDI + 0x8]           ; 004575b8 | DAT_0152c068 | DAT_0152c080
        ;   Label: LAB_004575b8
    FCOMP float ptr [ESP + 0x8]         ; 004575bb
    FNSTSW AX                           ; 004575bf
    SAHF                                ; 004575c1
    JNC 0x004575c7                      ; 004575c2
        ;   XREF to: 004575c7 (CONDITIONAL_JUMP)  ; LAB_004575c7
    OR CL,0x2                           ; 004575c4
    CMP ECX,0x3                         ; 004575c7
        ;   Label: LAB_004575c7
    JA 0x004575fa                       ; 004575ca
        ;   XREF to: 004575fa (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4570b8]  ; 004575cc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x0152c120],0xc ; 004575d3 | DAT_0152c120
        ;   Label: caseD_0
    ADD ECX,0x152c124                   ; 004575da
    CMP ECX,EDX                         ; 004575e0
    JZ 0x004575f4                       ; 004575e2
        ;   XREF to: 004575f4 (CONDITIONAL_JUMP)  ; LAB_004575f4
    MOV EAX,dword ptr [EDX]             ; 004575e4 | DAT_0152c060
    MOV dword ptr [ECX],EAX             ; 004575e6 | DAT_0152c124
    MOV EAX,dword ptr [EDX + 0x4]       ; 004575e8 | DAT_0152c064
    MOV dword ptr [ECX + 0x4],EAX       ; 004575eb | DAT_0152c128
    MOV EAX,dword ptr [EDX + 0x8]       ; 004575ee | DAT_0152c068
    MOV dword ptr [ECX + 0x8],EAX       ; 004575f1 | DAT_0152c12c
    INC dword ptr [0x0152c120]          ; 004575f4 | DAT_0152c120
        ;   Label: LAB_004575f4
    MOV EDX,dword ptr [0x0152c05c]      ; 004575fa | DAT_0152c05c
        ;   Label: caseD_3
    INC EBX                             ; 00457600
    ADD ESI,0xc                         ; 00457601
    CMP EBX,EDX                         ; 00457604
    JL 0x0045758a                       ; 00457606
        ;   XREF to: 0045758a (CONDITIONAL_JUMP)  ; LAB_0045758a
    MOV ECX,dword ptr [0x0152c120]      ; 00457608 | DAT_0152c120
        ;   Label: LAB_00457608
    CMP ECX,0x3                         ; 0045760e
    JL 0x004576bb                       ; 00457611
        ;   XREF to: 004576bb (CONDITIONAL_JUMP)  ; LAB_004576bb
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00457617
    MOV EDX,dword ptr [EDX + 0x8]       ; 0045761a
    XOR ESI,ESI                         ; 0045761d
    MOV dword ptr [ESP + 0xc],EDX       ; 0045761f
    TEST ECX,ECX                        ; 00457623
    JLE 0x004576ae                      ; 00457625
        ;   XREF to: 004576ae (CONDITIONAL_JUMP)  ; LAB_004576ae
    MOV EBX,0x152c124                   ; 0045762b
    MOV EDI,dword ptr [0x0152c120]      ; 00457630 | DAT_0152c120
        ;   Label: LAB_00457630
    LEA ECX,[ESI + 0x1]                 ; 00457636
    CMP ECX,EDI                         ; 00457639
    JNZ 0x0045763f                      ; 0045763b
        ;   XREF to: 0045763f (CONDITIONAL_JUMP)  ; LAB_0045763f
    XOR ECX,EDI                         ; 0045763d
    IMUL ECX,ECX,0xc                    ; 0045763f
        ;   Label: LAB_0045763f
    FLD float ptr [EBX + 0x8]           ; 00457642 | DAT_0152c12c | DAT_0152c138
    MOV EDI,0x152c124                   ; 00457645
    MOV EDX,EBX                         ; 0045764a
    ADD EDI,ECX                         ; 0045764c
    XOR ECX,ECX                         ; 0045764e
    FCOMP float ptr [ESP + 0xc]         ; 00457650
    FNSTSW AX                           ; 00457654
    SAHF                                ; 00457656
    JBE 0x0045765e                      ; 00457657
        ;   XREF to: 0045765e (CONDITIONAL_JUMP)  ; LAB_0045765e
    MOV ECX,0x1                         ; 00457659
    FLD float ptr [EDI + 0x8]           ; 0045765e | DAT_0152c12c | DAT_0152c144
        ;   Label: LAB_0045765e
    FCOMP float ptr [ESP + 0xc]         ; 00457661
    FNSTSW AX                           ; 00457665
    SAHF                                ; 00457667
    JBE 0x0045766d                      ; 00457668
        ;   XREF to: 0045766d (CONDITIONAL_JUMP)  ; LAB_0045766d
    OR CL,0x2                           ; 0045766a
    CMP ECX,0x3                         ; 0045766d
        ;   Label: LAB_0045766d
    JA 0x004576a0                       ; 00457670
        ;   XREF to: 004576a0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4570c8]  ; 00457672 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x0152c1e4],0xc ; 00457679 | DAT_0152c1e4
        ;   Label: caseD_0
    ADD ECX,0x152c1e8                   ; 00457680
    CMP ECX,EDX                         ; 00457686
    JZ 0x0045769a                       ; 00457688
        ;   XREF to: 0045769a (CONDITIONAL_JUMP)  ; LAB_0045769a
    MOV EAX,dword ptr [EDX]             ; 0045768a | DAT_0152c124
    MOV dword ptr [ECX],EAX             ; 0045768c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045768e | DAT_0152c128
    MOV dword ptr [ECX + 0x4],EAX       ; 00457691
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457694 | DAT_0152c12c
    MOV dword ptr [ECX + 0x8],EAX       ; 00457697
    INC dword ptr [0x0152c1e4]          ; 0045769a | DAT_0152c1e4
        ;   Label: LAB_0045769a
    MOV EDX,dword ptr [0x0152c120]      ; 004576a0 | DAT_0152c120
        ;   Label: caseD_3
    INC ESI                             ; 004576a6
    ADD EBX,0xc                         ; 004576a7
    CMP ESI,EDX                         ; 004576aa
    JL 0x00457630                       ; 004576ac
        ;   XREF to: 00457630 (CONDITIONAL_JUMP)  ; LAB_00457630
    CMP dword ptr [0x0152c1e4],0x3      ; 004576ae | DAT_0152c1e4
        ;   Label: LAB_004576ae
    JGE 0x00457285                      ; 004576b5
        ;   XREF to: 00457285 (CONDITIONAL_JUMP)  ; LAB_00457285
    XOR ECX,ECX                         ; 004576bb
        ;   Label: LAB_004576bb
    MOV EAX,ECX                         ; 004576bd
    MOV ESP,EBP                         ; 004576bf
    POP EBP                             ; 004576c1
    POP EDI                             ; 004576c2
    POP ESI                             ; 004576c3
    POP EBX                             ; 004576c4
    RET                                 ; 004576c5
    IMUL ECX,dword ptr [0x0152be10],0xc ; 004576c6 | DAT_0152be10
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 004576cd
    SUB ESP,0x8                         ; 004576d1
    FCHS                                ; 004576d4
    FSTP double ptr [ESP]               ; 004576d6
    PUSH 0x0                            ; 004576d9
    PUSH 0x0                            ; 004576db
    PUSH 0x3ff00000                     ; 004576dd
    PUSH 0x0                            ; 004576e2
    PUSH 0x0                            ; 004576e4
    PUSH 0x0                            ; 004576e6
    ADD ECX,0x152be14                   ; 004576e8
    PUSH ECX                            ; 004576ee
    PUSH EDX                            ; 004576ef
    PUSH EDI                            ; 004576f0
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 004576f1
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152be10]      ; 004576f6 | DAT_0152be10
    INC EDX                             ; 004576fc
    ADD ESP,0x2c                        ; 004576fd
    MOV dword ptr [0x0152be10],EDX      ; 00457700 | DAT_0152be10
    JMP 0x0045736c                      ; 00457706
        ;   XREF to: 0045736c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152be10],0xc ; 0045770b | DAT_0152be10
        ;   Label: caseD_2
    ADD ECX,0x152be14                   ; 00457712
    CMP ECX,EDX                         ; 00457718
    JZ 0x0045772c                       ; 0045771a
        ;   XREF to: 0045772c (CONDITIONAL_JUMP)  ; LAB_0045772c
    MOV EAX,dword ptr [EDX]             ; 0045771c
    MOV dword ptr [ECX],EAX             ; 0045771e | DAT_0152be14
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457720
    MOV dword ptr [ECX + 0x4],EAX       ; 00457723 | DAT_0152be18
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457726
    MOV dword ptr [ECX + 0x8],EAX       ; 00457729 | DAT_0152be1c
    MOV ECX,dword ptr [0x0152be10]      ; 0045772c | DAT_0152be10
        ;   Label: LAB_0045772c
    INC ECX                             ; 00457732
    MOV dword ptr [0x0152be10],ECX      ; 00457733 | DAT_0152be10
    IMUL ECX,ECX,0xc                    ; 00457739
    FLD float ptr [ESP + 0x14]          ; 0045773c
    SUB ESP,0x8                         ; 00457740
    FCHS                                ; 00457743
    FSTP double ptr [ESP]               ; 00457745
    PUSH 0x0                            ; 00457748
    PUSH 0x0                            ; 0045774a
    PUSH 0x3ff00000                     ; 0045774c
    PUSH 0x0                            ; 00457751
    PUSH 0x0                            ; 00457753
    PUSH 0x0                            ; 00457755
    ADD ECX,0x152be14                   ; 00457757
    PUSH ECX                            ; 0045775d
    PUSH EDI                            ; 0045775e
    PUSH EDX                            ; 0045775f
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00457760
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152be10]      ; 00457765 | DAT_0152be10
    INC EDX                             ; 0045776b
    ADD ESP,0x2c                        ; 0045776c
    MOV dword ptr [0x0152be10],EDX      ; 0045776f | DAT_0152be10
    JMP 0x0045736c                      ; 00457775
        ;   XREF to: 0045736c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152bed4],0xc ; 0045777a | DAT_0152bed4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00457781
    SUB ESP,0x8                         ; 00457784
    FSTP double ptr [ESP]               ; 00457787
    PUSH 0x0                            ; 0045778a
    PUSH 0x0                            ; 0045778c
    PUSH 0xbff00000                     ; 0045778e
    PUSH 0x0                            ; 00457793
    PUSH 0x0                            ; 00457795
    PUSH 0x0                            ; 00457797
    ADD ECX,0x152bed8                   ; 00457799
    PUSH ECX                            ; 0045779f
    PUSH EDX                            ; 004577a0 | DAT_0152be14
    PUSH EDI                            ; 004577a1
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 004577a2
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152bed4]      ; 004577a7 | DAT_0152bed4
    INC EDX                             ; 004577ad
    ADD ESP,0x2c                        ; 004577ae
    MOV dword ptr [0x0152bed4],EDX      ; 004577b1 | DAT_0152bed4
    JMP 0x0045740e                      ; 004577b7
        ;   XREF to: 0045740e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152bed4],0xc ; 004577bc | DAT_0152bed4
        ;   Label: caseD_2
    ADD ECX,0x152bed8                   ; 004577c3
    CMP ECX,EDX                         ; 004577c9
    JZ 0x004577dd                       ; 004577cb
        ;   XREF to: 004577dd (CONDITIONAL_JUMP)  ; LAB_004577dd
    MOV EAX,dword ptr [EDX]             ; 004577cd | DAT_0152be14
    MOV dword ptr [ECX],EAX             ; 004577cf | DAT_0152bed8
    MOV EAX,dword ptr [EDX + 0x4]       ; 004577d1 | DAT_0152be18
    MOV dword ptr [ECX + 0x4],EAX       ; 004577d4 | DAT_0152bedc
    MOV EAX,dword ptr [EDX + 0x8]       ; 004577d7 | DAT_0152be1c
    MOV dword ptr [ECX + 0x8],EAX       ; 004577da | DAT_0152bee0
    MOV ECX,dword ptr [0x0152bed4]      ; 004577dd | DAT_0152bed4
        ;   Label: LAB_004577dd
    INC ECX                             ; 004577e3
    MOV dword ptr [0x0152bed4],ECX      ; 004577e4 | DAT_0152bed4
    IMUL ECX,ECX,0xc                    ; 004577ea
    FLD float ptr [ESP]                 ; 004577ed
    SUB ESP,0x8                         ; 004577f0
    FSTP double ptr [ESP]               ; 004577f3
    PUSH 0x0                            ; 004577f6
    PUSH 0x0                            ; 004577f8
    PUSH 0xbff00000                     ; 004577fa
    PUSH 0x0                            ; 004577ff
    PUSH 0x0                            ; 00457801
    PUSH 0x0                            ; 00457803
    ADD ECX,0x152bed8                   ; 00457805
    PUSH ECX                            ; 0045780b
    PUSH EDI                            ; 0045780c
    PUSH EDX                            ; 0045780d | DAT_0152be14
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 0045780e
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152bed4]      ; 00457813 | DAT_0152bed4
    INC EDX                             ; 00457819
    ADD ESP,0x2c                        ; 0045781a
    MOV dword ptr [0x0152bed4],EDX      ; 0045781d | DAT_0152bed4
    JMP 0x0045740e                      ; 00457823
        ;   XREF to: 0045740e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152bf98],0xc ; 00457828 | DAT_0152bf98
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0045782f
    SUB ESP,0x8                         ; 00457833
    FCHS                                ; 00457836
    FSTP double ptr [ESP]               ; 00457838
    PUSH 0x0                            ; 0045783b
    PUSH 0x0                            ; 0045783d
    PUSH 0x0                            ; 0045783f
    PUSH 0x0                            ; 00457841
    PUSH 0x3ff00000                     ; 00457843
    PUSH 0x0                            ; 00457848
    ADD ECX,0x152bf9c                   ; 0045784a
    PUSH ECX                            ; 00457850
    PUSH EDX                            ; 00457851 | DAT_0152bed8
    PUSH EDI                            ; 00457852
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00457853
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152bf98]      ; 00457858 | DAT_0152bf98
    INC EDX                             ; 0045785e
    ADD ESP,0x2c                        ; 0045785f
    MOV dword ptr [0x0152bf98],EDX      ; 00457862 | DAT_0152bf98
    JMP 0x004574b1                      ; 00457868
        ;   XREF to: 004574b1 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152bf98],0xc ; 0045786d | DAT_0152bf98
        ;   Label: caseD_2
    ADD ECX,0x152bf9c                   ; 00457874
    CMP ECX,EDX                         ; 0045787a
    JZ 0x0045788e                       ; 0045787c
        ;   XREF to: 0045788e (CONDITIONAL_JUMP)  ; LAB_0045788e
    MOV EAX,dword ptr [EDX]             ; 0045787e | DAT_0152bed8
    MOV dword ptr [ECX],EAX             ; 00457880 | DAT_0152bf9c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457882 | DAT_0152bedc
    MOV dword ptr [ECX + 0x4],EAX       ; 00457885 | DAT_0152bfa0
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457888 | DAT_0152bee0
    MOV dword ptr [ECX + 0x8],EAX       ; 0045788b | DAT_0152bfa4
    MOV ECX,dword ptr [0x0152bf98]      ; 0045788e | DAT_0152bf98
        ;   Label: LAB_0045788e
    INC ECX                             ; 00457894
    MOV dword ptr [0x0152bf98],ECX      ; 00457895 | DAT_0152bf98
    IMUL ECX,ECX,0xc                    ; 0045789b
    FLD float ptr [ESP + 0x18]          ; 0045789e
    SUB ESP,0x8                         ; 004578a2
    FCHS                                ; 004578a5
    FSTP double ptr [ESP]               ; 004578a7
    PUSH 0x0                            ; 004578aa
    PUSH 0x0                            ; 004578ac
    PUSH 0x0                            ; 004578ae
    PUSH 0x0                            ; 004578b0
    PUSH 0x3ff00000                     ; 004578b2
    PUSH 0x0                            ; 004578b7
    ADD ECX,0x152bf9c                   ; 004578b9
    PUSH ECX                            ; 004578bf
    PUSH EDI                            ; 004578c0
    PUSH EDX                            ; 004578c1 | DAT_0152bed8
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 004578c2
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152bf98]      ; 004578c7 | DAT_0152bf98
    INC EDX                             ; 004578cd
    ADD ESP,0x2c                        ; 004578ce
    MOV dword ptr [0x0152bf98],EDX      ; 004578d1 | DAT_0152bf98
    JMP 0x004574b1                      ; 004578d7
        ;   XREF to: 004574b1 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152c05c],0xc ; 004578dc | DAT_0152c05c
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 004578e3
    SUB ESP,0x8                         ; 004578e7
    FSTP double ptr [ESP]               ; 004578ea
    PUSH 0x0                            ; 004578ed
    PUSH 0x0                            ; 004578ef
    PUSH 0x0                            ; 004578f1
    PUSH 0x0                            ; 004578f3
    PUSH 0xbff00000                     ; 004578f5
    PUSH 0x0                            ; 004578fa
    ADD ECX,0x152c060                   ; 004578fc
    PUSH ECX                            ; 00457902
    PUSH EDX                            ; 00457903 | DAT_0152bf9c
    PUSH EDI                            ; 00457904
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00457905
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152c05c]      ; 0045790a | DAT_0152c05c
    INC EDX                             ; 00457910
    ADD ESP,0x2c                        ; 00457911
    MOV dword ptr [0x0152c05c],EDX      ; 00457914 | DAT_0152c05c
    JMP 0x00457554                      ; 0045791a
        ;   XREF to: 00457554 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152c05c],0xc ; 0045791f | DAT_0152c05c
        ;   Label: caseD_2
    ADD ECX,0x152c060                   ; 00457926
    CMP ECX,EDX                         ; 0045792c
    JZ 0x00457940                       ; 0045792e
        ;   XREF to: 00457940 (CONDITIONAL_JUMP)  ; LAB_00457940
    MOV EAX,dword ptr [EDX]             ; 00457930 | DAT_0152bf9c
    MOV dword ptr [ECX],EAX             ; 00457932 | DAT_0152c060
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457934 | DAT_0152bfa0
    MOV dword ptr [ECX + 0x4],EAX       ; 00457937 | DAT_0152c064
    MOV EAX,dword ptr [EDX + 0x8]       ; 0045793a | DAT_0152bfa4
    MOV dword ptr [ECX + 0x8],EAX       ; 0045793d | DAT_0152c068
    MOV ECX,dword ptr [0x0152c05c]      ; 00457940 | DAT_0152c05c
        ;   Label: LAB_00457940
    INC ECX                             ; 00457946
    MOV dword ptr [0x0152c05c],ECX      ; 00457947 | DAT_0152c05c
    IMUL ECX,ECX,0xc                    ; 0045794d
    FLD float ptr [ESP + 0x4]           ; 00457950
    SUB ESP,0x8                         ; 00457954
    FSTP double ptr [ESP]               ; 00457957
    PUSH 0x0                            ; 0045795a
    PUSH 0x0                            ; 0045795c
    PUSH 0x0                            ; 0045795e
    PUSH 0x0                            ; 00457960
    PUSH 0xbff00000                     ; 00457962
    PUSH 0x0                            ; 00457967
    ADD ECX,0x152c060                   ; 00457969
    PUSH ECX                            ; 0045796f
    PUSH EDI                            ; 00457970
    PUSH EDX                            ; 00457971 | DAT_0152bf9c
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00457972
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152c05c]      ; 00457977 | DAT_0152c05c
    INC EDX                             ; 0045797d
    ADD ESP,0x2c                        ; 0045797e
    MOV dword ptr [0x0152c05c],EDX      ; 00457981 | DAT_0152c05c
    JMP 0x00457554                      ; 00457987
        ;   XREF to: 00457554 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152c120],0xc ; 0045798c | DAT_0152c120
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 00457993
    SUB ESP,0x8                         ; 00457997
    FSTP double ptr [ESP]               ; 0045799a
    PUSH 0xbff00000                     ; 0045799d
    PUSH 0x0                            ; 004579a2
    PUSH 0x0                            ; 004579a4
    PUSH 0x0                            ; 004579a6
    PUSH 0x0                            ; 004579a8
    PUSH 0x0                            ; 004579aa
    ADD ECX,0x152c124                   ; 004579ac
    PUSH ECX                            ; 004579b2
    PUSH EDX                            ; 004579b3 | DAT_0152c060
    PUSH EDI                            ; 004579b4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 004579b5
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152c120]      ; 004579ba | DAT_0152c120
    INC EDX                             ; 004579c0
    ADD ESP,0x2c                        ; 004579c1
    MOV dword ptr [0x0152c120],EDX      ; 004579c4 | DAT_0152c120
    JMP 0x004575fa                      ; 004579ca
        ;   XREF to: 004575fa (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152c120],0xc ; 004579cf | DAT_0152c120
        ;   Label: caseD_2
    ADD ECX,0x152c124                   ; 004579d6
    CMP ECX,EDX                         ; 004579dc
    JZ 0x004579f0                       ; 004579de
        ;   XREF to: 004579f0 (CONDITIONAL_JUMP)  ; LAB_004579f0
    MOV EAX,dword ptr [EDX]             ; 004579e0 | DAT_0152c060
    MOV dword ptr [ECX],EAX             ; 004579e2 | DAT_0152c124
    MOV EAX,dword ptr [EDX + 0x4]       ; 004579e4 | DAT_0152c064
    MOV dword ptr [ECX + 0x4],EAX       ; 004579e7 | DAT_0152c128
    MOV EAX,dword ptr [EDX + 0x8]       ; 004579ea | DAT_0152c068
    MOV dword ptr [ECX + 0x8],EAX       ; 004579ed | DAT_0152c12c
    MOV ECX,dword ptr [0x0152c120]      ; 004579f0 | DAT_0152c120
        ;   Label: LAB_004579f0
    INC ECX                             ; 004579f6
    MOV dword ptr [0x0152c120],ECX      ; 004579f7 | DAT_0152c120
    IMUL ECX,ECX,0xc                    ; 004579fd
    FLD float ptr [ESP + 0x8]           ; 00457a00
    SUB ESP,0x8                         ; 00457a04
    FSTP double ptr [ESP]               ; 00457a07
    PUSH 0xbff00000                     ; 00457a0a
    PUSH 0x0                            ; 00457a0f
    PUSH 0x0                            ; 00457a11
    PUSH 0x0                            ; 00457a13
    PUSH 0x0                            ; 00457a15
    PUSH 0x0                            ; 00457a17
    ADD ECX,0x152c124                   ; 00457a19
    PUSH ECX                            ; 00457a1f
    PUSH EDI                            ; 00457a20
    PUSH EDX                            ; 00457a21 | DAT_0152c060
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00457a22
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152c120]      ; 00457a27 | DAT_0152c120
    INC EDX                             ; 00457a2d
    ADD ESP,0x2c                        ; 00457a2e
    MOV dword ptr [0x0152c120],EDX      ; 00457a31 | DAT_0152c120
    JMP 0x004575fa                      ; 00457a37
        ;   XREF to: 004575fa (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152c1e4],0xc ; 00457a3c | DAT_0152c1e4
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 00457a43
    SUB ESP,0x8                         ; 00457a47
    FSTP double ptr [ESP]               ; 00457a4a
    PUSH 0xbff00000                     ; 00457a4d
    PUSH 0x0                            ; 00457a52
    PUSH 0x0                            ; 00457a54
    PUSH 0x0                            ; 00457a56
    PUSH 0x0                            ; 00457a58
    PUSH 0x0                            ; 00457a5a
    ADD ECX,0x152c1e8                   ; 00457a5c
    PUSH ECX                            ; 00457a62
    PUSH EDX                            ; 00457a63 | DAT_0152c124
    PUSH EDI                            ; 00457a64
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00457a65
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152c1e4]      ; 00457a6a | DAT_0152c1e4
    INC EDX                             ; 00457a70
    ADD ESP,0x2c                        ; 00457a71
    MOV dword ptr [0x0152c1e4],EDX      ; 00457a74 | DAT_0152c1e4
    JMP 0x004576a0                      ; 00457a7a
        ;   XREF to: 004576a0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x0152c1e4],0xc ; 00457a7f | DAT_0152c1e4
        ;   Label: caseD_2
    ADD ECX,0x152c1e8                   ; 00457a86
    CMP ECX,EDX                         ; 00457a8c
    JZ 0x00457aa0                       ; 00457a8e
        ;   XREF to: 00457aa0 (CONDITIONAL_JUMP)  ; LAB_00457aa0
    MOV EAX,dword ptr [EDX]             ; 00457a90 | DAT_0152c124
    MOV dword ptr [ECX],EAX             ; 00457a92
    MOV EAX,dword ptr [EDX + 0x4]       ; 00457a94 | DAT_0152c128
    MOV dword ptr [ECX + 0x4],EAX       ; 00457a97
    MOV EAX,dword ptr [EDX + 0x8]       ; 00457a9a | DAT_0152c12c
    MOV dword ptr [ECX + 0x8],EAX       ; 00457a9d
    MOV ECX,dword ptr [0x0152c1e4]      ; 00457aa0 | DAT_0152c1e4
        ;   Label: LAB_00457aa0
    INC ECX                             ; 00457aa6
    MOV dword ptr [0x0152c1e4],ECX      ; 00457aa7 | DAT_0152c1e4
    IMUL ECX,ECX,0xc                    ; 00457aad
    FLD float ptr [ESP + 0xc]           ; 00457ab0
    SUB ESP,0x8                         ; 00457ab4
    FSTP double ptr [ESP]               ; 00457ab7
    PUSH 0xbff00000                     ; 00457aba
    PUSH 0x0                            ; 00457abf
    PUSH 0x0                            ; 00457ac1
    PUSH 0x0                            ; 00457ac3
    PUSH 0x0                            ; 00457ac5
    PUSH 0x0                            ; 00457ac7
    ADD ECX,0x152c1e8                   ; 00457ac9
    PUSH ECX                            ; 00457acf
    PUSH EDI                            ; 00457ad0
    PUSH EDX                            ; 00457ad1 | DAT_0152c124
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00455460 ; 00457ad2
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00455460()
    MOV EDX,dword ptr [0x0152c1e4]      ; 00457ad7 | DAT_0152c1e4
    INC EDX                             ; 00457add
    ADD ESP,0x2c                        ; 00457ade
    MOV dword ptr [0x0152c1e4],EDX      ; 00457ae1 | DAT_0152c1e4
    JMP 0x004576a0                      ; 00457ae7
        ;   XREF to: 004576a0 (UNCONDITIONAL_JUMP)  ; caseD_3

