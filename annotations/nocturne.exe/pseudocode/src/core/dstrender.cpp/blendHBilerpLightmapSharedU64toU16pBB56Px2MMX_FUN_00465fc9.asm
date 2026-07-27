; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_FUN_004470f0 at 004472cb
;
; Referenced Globals:
;   undefined8 DAT_005b47a8
;   undefined8 DAT_005b47b0
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b5d20
;   undefined4 DAT_005b5d40
;   undefined4 DAT_005b5d60
;   undefined4 DAT_005b5d80
;   undefined4 DAT_005b5da0
;   undefined4 DAT_005b5dc0
;   undefined4 DAT_005b5de0
;   undefined4 DAT_005b5e00
;   undefined4 DAT_005b5e20
;   undefined4 DAT_005b5e40
;   undefined4 DAT_005b5e60
;   undefined4 DAT_005b5e80
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00465fc9
        ;   Label: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9
    MOV EBP,ESP                         ; 00465fca
    PUSH ESI                            ; 00465fcc
    PUSH EDI                            ; 00465fcd
    PUSH EBP                            ; 00465fce
    MOV ECX,dword ptr [EBP + 0x18]      ; 00465fcf
    MOV EDI,dword ptr [EBP + 0x8]       ; 00465fd2
    MOV ESI,dword ptr [EBP + 0xc]       ; 00465fd5
    MOV EBX,dword ptr [EBP + 0x10]      ; 00465fd8
    MOV EBP,dword ptr [EBP + 0x14]      ; 00465fdb
    PXOR MM7,MM7                        ; 00465fde
    MOVD MM5,dword ptr [0x01c039a8]     ; 00465fe1 | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 00465fe8
    PSLLW MM5,0x6                       ; 00465feb
    MOV EAX,dword ptr [EBX]             ; 00465fef
    MOV EAX,dword ptr [EBX + 0x20]      ; 00465ff1
    MOV EAX,dword ptr [EBX + 0x40]      ; 00465ff4
    MOV EAX,dword ptr [EBX + 0x60]      ; 00465ff7
    MOV EAX,dword ptr [EBX + 0x80]      ; 00465ffa
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00466000
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00466006
    MOV EAX,dword ptr [EBX + 0xe0]      ; 0046600c
    MOV EAX,dword ptr [EBX + 0x100]     ; 00466012
    MOV EAX,dword ptr [EBX + 0x120]     ; 00466018
    MOV EDX,dword ptr [EBP]             ; 0046601e
    MOV EDX,dword ptr [EBP + 0x20]      ; 00466021
    MOV EDX,dword ptr [EBP + 0x40]      ; 00466024
    MOV EDX,dword ptr [EBP + 0x60]      ; 00466027
    MOV EDX,dword ptr [EBP + 0x80]      ; 0046602a
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00466030
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00466036
    MOV EDX,dword ptr [EBP + 0xe0]      ; 0046603c
    MOV EDX,dword ptr [EBP + 0x100]     ; 00466042
    MOV EDX,dword ptr [EBP + 0x120]     ; 00466048
    MOV EAX,dword ptr [ESI]             ; 0046604e
    MOV EAX,dword ptr [ESI + 0x20]      ; 00466050
    MOV EAX,dword ptr [ESI + 0x40]      ; 00466053
    MOV EAX,dword ptr [ESI + 0x60]      ; 00466056
    MOV EAX,dword ptr [ESI + 0x80]      ; 00466059
    MOV EAX,dword ptr [ESI + 0xa0]      ; 0046605f
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00466065
    MOV EAX,dword ptr [ESI + 0xe0]      ; 0046606b
    MOV EAX,dword ptr [ESI + 0x100]     ; 00466071
    MOV EAX,dword ptr [ESI + 0x120]     ; 00466077
    MOV EAX,dword ptr [ESI + 0x140]     ; 0046607d
    MOV EAX,dword ptr [ESI + 0x160]     ; 00466083
    MOV EAX,dword ptr [ESI + 0x180]     ; 00466089
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0046608f
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00466095
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 0046609b
    MOV EAX,dword ptr [ESI + 0x200]     ; 004660a1
    MOV EAX,dword ptr [ESI + 0x220]     ; 004660a7
    MOV EAX,dword ptr [ESI + 0x240]     ; 004660ad
    MOV EAX,dword ptr [ESI + 0x260]     ; 004660b3
    MOV EAX,dword ptr [ESI + 0x280]     ; 004660b9
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004660bf
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004660c5
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004660cb
    MOV EAX,dword ptr [ESI + 0x300]     ; 004660d1
    MOV EAX,dword ptr [ESI + 0x320]     ; 004660d7
    MOV EAX,dword ptr [ESI + 0x340]     ; 004660dd
    MOV EAX,dword ptr [ESI + 0x360]     ; 004660e3
    MOV EAX,dword ptr [ESI + 0x380]     ; 004660e9
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 004660ef
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 004660f5
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 004660fb
    MOV EAX,dword ptr [ESI + 0x400]     ; 00466101
    MOV EAX,dword ptr [ESI + 0x420]     ; 00466107
    MOV EAX,dword ptr [ESI + 0x440]     ; 0046610d
    MOV EAX,dword ptr [ESI + 0x460]     ; 00466113
    MOV EAX,dword ptr [ESI + 0x480]     ; 00466119
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 0046611f
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00466125
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0046612b
    MOV EAX,dword ptr [ESI + 0x500]     ; 00466131
    MOV EAX,dword ptr [ESI + 0x520]     ; 00466137
    MOV EAX,dword ptr [ESI + 0x540]     ; 0046613d
    MOV EAX,dword ptr [ESI + 0x560]     ; 00466143
    MOV EAX,dword ptr [ESI + 0x580]     ; 00466149
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 0046614f
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00466155
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0046615b
    MOV EAX,dword ptr [ESI + 0x600]     ; 00466161
    MOV EAX,dword ptr [ESI + 0x620]     ; 00466167
    MOV EAX,dword ptr [ESI + 0x640]     ; 0046616d
    MOV EAX,dword ptr [ESI + 0x660]     ; 00466173
    MOV EAX,dword ptr [ESI + 0x680]     ; 00466179
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0046617f
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00466185
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0046618b
    MOV EAX,dword ptr [ESI + 0x700]     ; 00466191
    MOV EAX,dword ptr [ESI + 0x720]     ; 00466197
    MOV EAX,dword ptr [ESI + 0x740]     ; 0046619d
    MOV EAX,dword ptr [ESI + 0x760]     ; 004661a3
    MOV EAX,dword ptr [ESI + 0x780]     ; 004661a9
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004661af
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004661b5
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004661bb
    MOV EAX,dword ptr [ESI + 0x800]     ; 004661c1
    MOV EAX,dword ptr [ESI + 0x820]     ; 004661c7
    MOV EAX,dword ptr [ESI + 0x840]     ; 004661cd
    MOV EAX,dword ptr [ESI + 0x860]     ; 004661d3
    MOV EAX,dword ptr [ESI + 0x880]     ; 004661d9
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004661df
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004661e5
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 004661eb
    MOV EAX,dword ptr [ESI + 0x900]     ; 004661f1
    MOV EAX,dword ptr [ESI + 0x920]     ; 004661f7
    MOV EAX,dword ptr [ESI + 0x940]     ; 004661fd
    MOV EAX,dword ptr [ESI + 0x960]     ; 00466203
    MOV EAX,dword ptr [ESI + 0x980]     ; 00466209
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 0046620f
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00466215
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 0046621b
    MOV EAX,[0x00b0e1fc]                ; 00466221 | DAT_00b0e1fc
    MOV EAX,[0x00b0e21c]                ; 00466226 | DAT_00b0e21c
    MOV EAX,[0x00b0e23c]                ; 0046622b | DAT_00b0e23c
    MOV EAX,[0x00b0e25c]                ; 00466230 | DAT_00b0e25c
    MOV EAX,[0x00b0e27c]                ; 00466235 | DAT_00b0e27c
    MOV EAX,[0x00b0e29c]                ; 0046623a | DAT_00b0e29c
    MOV EAX,[0x00b0e2bc]                ; 0046623f | DAT_00b0e2bc
    MOV EAX,[0x00b0e2dc]                ; 00466244 | DAT_00b0e2dc
    MOV EAX,[0x00b0e2fc]                ; 00466249 | DAT_00b0e2fc
    MOV EAX,[0x00b0e31c]                ; 0046624e | DAT_00b0e31c
    MOV EAX,[0x00b0e33c]                ; 00466253 | DAT_00b0e33c
    MOV EAX,[0x00b0e35c]                ; 00466258 | DAT_00b0e35c
    MOV EAX,[0x00b0e37c]                ; 0046625d | DAT_00b0e37c
    MOV EAX,[0x00b0e39c]                ; 00466262 | DAT_00b0e39c
    MOV EAX,[0x00b0e3bc]                ; 00466267 | DAT_00b0e3bc
    MOV EAX,[0x00b0e3dc]                ; 0046626c | DAT_00b0e3dc
    MOV EAX,[0x00b0e3fc]                ; 00466271 | DAT_00b0e3fc
    MOV EAX,[0x00b0e41c]                ; 00466276 | DAT_00b0e41c
    MOV EAX,[0x00b0e43c]                ; 0046627b | DAT_00b0e43c
    MOV EAX,[0x00b0e45c]                ; 00466280 | DAT_00b0e45c
    MOV EAX,[0x00b0e47c]                ; 00466285 | DAT_00b0e47c
    MOV EAX,[0x00b0e49c]                ; 0046628a | DAT_00b0e49c
    MOV EAX,[0x00b0e4bc]                ; 0046628f | DAT_00b0e4bc
    MOV EAX,[0x00b0e4dc]                ; 00466294 | DAT_00b0e4dc
    MOV EAX,[0x00b0e4fc]                ; 00466299 | DAT_00b0e4fc
    MOV EAX,[0x00b0e51c]                ; 0046629e | DAT_00b0e51c
    MOV EAX,[0x00b0e53c]                ; 004662a3 | DAT_00b0e53c
    MOV EAX,[0x00b0e55c]                ; 004662a8 | DAT_00b0e55c
    MOV EAX,[0x00b0e57c]                ; 004662ad | DAT_00b0e57c
    MOV EAX,[0x00b0e59c]                ; 004662b2 | DAT_00b0e59c
    MOV EAX,[0x00b0e5bc]                ; 004662b7 | DAT_00b0e5bc
    MOV EAX,[0x00b0e5dc]                ; 004662bc | DAT_00b0e5dc
    MOV EAX,[0x005b5d00]                ; 004662c1 | DAT_005b5d00
    MOV EAX,[0x005b5d20]                ; 004662c6 | DAT_005b5d20
    MOV EAX,[0x005b5d40]                ; 004662cb | DAT_005b5d40
    MOV EAX,[0x005b5d60]                ; 004662d0 | DAT_005b5d60
    MOV EAX,[0x005b5d80]                ; 004662d5 | DAT_005b5d80
    MOV EAX,[0x005b5da0]                ; 004662da | DAT_005b5da0
    MOV EAX,[0x005b5dc0]                ; 004662df | DAT_005b5dc0
    MOV EAX,[0x005b5de0]                ; 004662e4 | DAT_005b5de0
    MOV EAX,[0x005b5e00]                ; 004662e9 | DAT_005b5e00
    MOV EAX,[0x005b5e20]                ; 004662ee | DAT_005b5e20
    MOV EAX,[0x005b5e40]                ; 004662f3 | DAT_005b5e40
    MOV EAX,[0x005b5e60]                ; 004662f8 | DAT_005b5e60
    MOV EAX,[0x005b5e80]                ; 004662fd | DAT_005b5e80
    MOV EAX,[0x005b5ea0]                ; 00466302 | DAT_005b5ea0
    MOV EAX,[0x005b5ec0]                ; 00466307 | DAT_005b5ec0
    MOV EAX,[0x005b5ee0]                ; 0046630c | DAT_005b5ee0
    MOV EAX,[0x005b5f00]                ; 00466311 | DAT_005b5f00
    MOV EAX,[0x005b5f20]                ; 00466316 | DAT_005b5f20
    MOV EAX,[0x005b5f40]                ; 0046631b | DAT_005b5f40
    MOV EAX,[0x005b5f60]                ; 00466320 | DAT_005b5f60
    MOV EAX,[0x005b5f80]                ; 00466325 | DAT_005b5f80
    MOV EAX,[0x005b5fa0]                ; 0046632a | DAT_005b5fa0
    MOV EAX,[0x005b5fc0]                ; 0046632f | DAT_005b5fc0
    MOV EAX,[0x005b5fe0]                ; 00466334 | DAT_005b5fe0
    MOV EAX,[0x005b6000]                ; 00466339 | DAT_005b6000
    MOV EAX,[0x005b6020]                ; 0046633e | DAT_005b6020
    MOV EAX,[0x005b6040]                ; 00466343 | DAT_005b6040
    MOV EAX,[0x005b6060]                ; 00466348 | DAT_005b6060
    MOV EAX,[0x005b6080]                ; 0046634d | DAT_005b6080
    MOV EAX,[0x005b60a0]                ; 00466352 | DAT_005b60a0
    MOV EAX,[0x005b60c0]                ; 00466357 | DAT_005b60c0
    MOV EAX,[0x005b60e0]                ; 0046635c | DAT_005b60e0
    MOV EAX,[0x005b6100]                ; 00466361 | DAT_005b6100
    MOV EAX,[0x005b6120]                ; 00466366 | DAT_005b6120
    MOV EAX,[0x005b6140]                ; 0046636b | DAT_005b6140
    MOV EAX,[0x005b6160]                ; 00466370 | DAT_005b6160
    MOV EAX,[0x005b6180]                ; 00466375 | DAT_005b6180
    MOV EAX,[0x005b61a0]                ; 0046637a | DAT_005b61a0
    MOV EAX,[0x005b61c0]                ; 0046637f | DAT_005b61c0
    MOV EAX,[0x005b61e0]                ; 00466384 | DAT_005b61e0
    MOV EAX,[0x005b6200]                ; 00466389 | DAT_005b6200
    MOV EAX,[0x005b6220]                ; 0046638e | DAT_005b6220
    MOV EAX,[0x005b6240]                ; 00466393 | DAT_005b6240
    MOV EAX,[0x005b6260]                ; 00466398 | DAT_005b6260
    MOV EAX,[0x005b6280]                ; 0046639d | DAT_005b6280
    MOV EAX,[0x005b62a0]                ; 004663a2 | DAT_005b62a0
    MOV EAX,[0x005b62c0]                ; 004663a7 | DAT_005b62c0
    MOV EAX,[0x005b62e0]                ; 004663ac | DAT_005b62e0
    MOV EAX,[0x005b6300]                ; 004663b1 | DAT_005b6300
    MOV EAX,[0x005b6320]                ; 004663b6 | DAT_005b6320
    MOV EAX,[0x005b6340]                ; 004663bb | DAT_005b6340
    MOV EAX,[0x005b6360]                ; 004663c0 | DAT_005b6360
    MOV EAX,[0x005b6380]                ; 004663c5 | DAT_005b6380
    MOV EAX,[0x005b63a0]                ; 004663ca | DAT_005b63a0
    MOV EAX,[0x005b63c0]                ; 004663cf | DAT_005b63c0
    MOV EAX,[0x005b63e0]                ; 004663d4 | DAT_005b63e0
    MOV EAX,[0x005b6400]                ; 004663d9 | DAT_005b6400
    MOV EAX,[0x005b6420]                ; 004663de | DAT_005b6420
    MOV EAX,[0x005b6440]                ; 004663e3 | DAT_005b6440
    MOV EAX,[0x005b6460]                ; 004663e8 | DAT_005b6460
    MOV EAX,[0x005b6480]                ; 004663ed | DAT_005b6480
    MOV EAX,[0x005b64a0]                ; 004663f2 | DAT_005b64a0
    MOV EAX,[0x005b64c0]                ; 004663f7 | DAT_005b64c0
    MOV EAX,[0x005b64e0]                ; 004663fc | DAT_005b64e0
    JMP 0x00466410                      ; 00466401
        ;   XREF to: 00466410 (UNCONDITIONAL_JUMP)  ; LAB_00466410
    MOVZX EDX,byte ptr [EBX]            ; 00466410
        ;   Label: LAB_00466410
    MOVQ MM0,qword ptr [ESI]            ; 00466413
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00466416 | DAT_00b0e1fc
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 0046641e
    MOVZX EAX,byte ptr [EBP]            ; 00466422
    MOVD MM6,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00466426 | DAT_00b0e1fc
    MOVQ MM1,MM0                        ; 0046642e
    PUNPCKLBW MM6,MM7                   ; 00466431
    PUNPCKLBW MM0,MM7                   ; 00466434
    SHR EDX,0x1                         ; 00466437
    PSRLQ MM1,0x20                      ; 00466439
    PUNPCKLBW MM2,MM7                   ; 0046643d
    ADD EAX,EDX                         ; 00466440
    PADDW MM6,MM2                       ; 00466442
    PUNPCKLBW MM1,MM7                   ; 00466445
    PMULLW MM0,MM2                      ; 00466448
    PSRLW MM6,0x1                       ; 0046644b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 0046644f | DAT_005b5d00
    PMULLW MM1,MM6                      ; 00466457
    MOVQ MM2,MM3                        ; 0046645a
    MOVQ MM4,MM5                        ; 0046645d
    PXOR MM2,qword ptr [0x005b64f8]     ; 00466460 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00466467
    PMULHW MM1,MM2                      ; 0046646a
    PMULHW MM4,MM3                      ; 0046646d
    PADDW MM0,MM4                       ; 00466470
    PADDW MM1,MM4                       ; 00466473
    PADDW MM0,qword ptr [0x005b47a8]    ; 00466476 | DAT_005b47a8
    PADDW MM1,qword ptr [0x005b47b0]    ; 0046647d | DAT_005b47b0
    PSRLW MM0,0x4                       ; 00466484
    PSRLW MM1,0x4                       ; 00466488
    PACKUSWB MM0,MM7                    ; 0046648c
    PACKUSWB MM1,MM7                    ; 0046648f
    MOVQ MM2,MM0                        ; 00466492
    MOVQ MM3,MM0                        ; 00466495
    PAND MM0,qword ptr [0x005bf610]     ; 00466498 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 0046649f | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 004664a6 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 004664ad | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 004664b4 | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 004664bb | DAT_005bf618
    POR MM0,MM2                         ; 004664c2
    POR MM0,MM3                         ; 004664c5
    MOVQ MM2,MM1                        ; 004664c8
    MOVQ MM3,MM1                        ; 004664cb
    PAND MM1,qword ptr [0x005bf610]     ; 004664ce | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 004664d5 | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 004664dc | DAT_005bf5d0
    PSRLQ MM1,qword ptr [0x005bf658]    ; 004664e3 | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 004664ea | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 004664f1 | DAT_005bf618
    POR MM1,MM2                         ; 004664f8
    POR MM1,MM3                         ; 004664fb
    PSLLQ MM1,0x10                      ; 004664fe
    POR MM0,MM1                         ; 00466502
    ADD ESI,0x8                         ; 00466505
    INC EBX                             ; 00466508
    INC EBP                             ; 00466509
    MOVD dword ptr [EDI],MM0            ; 0046650a
    ADD EDI,0x4                         ; 0046650d
    SUB ECX,0x2                         ; 00466510
    JG 0x00466410                       ; 00466513
        ;   XREF to: 00466410 (CONDITIONAL_JUMP)  ; LAB_00466410
    POP EBP                             ; 00466519
    EMMS                                ; 0046651a
    POP EDI                             ; 0046651c
    POP ESI                             ; 0046651d
    LEAVE                               ; 0046651e
    RET                                 ; 0046651f

