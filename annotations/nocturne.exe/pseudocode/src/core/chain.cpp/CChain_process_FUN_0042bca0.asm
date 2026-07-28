; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_chain_cpp_CChain_process_FUN_0042bca0(CChain *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   float FLOAT_0057a58a = -9900
;   double DOUBLE_0057a58e = 0.03125
;   double DOUBLE_0057a596 = 0.900000000000000
;   double DOUBLE_0057a59e = 0.100000000000000
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0
;   core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042bca0
        ;   Label: core_chain.cpp_CChain_process_FUN_0042bca0
    PUSH ESI                            ; 0042bca1
    PUSH EDI                            ; 0042bca2
    PUSH EBP                            ; 0042bca3
    MOV EBP,ESP                         ; 0042bca4
    SUB ESP,0xdc                        ; 0042bca6
    AND ESP,0xfffffff8                  ; 0042bcac
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042bcaf
    FLD float ptr [ESI + 0x564]         ; 0042bcb2
    FCOMP float ptr [0x0057a58a]        ; 0042bcb8 | FLOAT_0057a58a
    FNSTSW AX                           ; 0042bcbe
    SAHF                                ; 0042bcc0
    JC 0x0042bd2a                       ; 0042bcc1
        ;   XREF to: 0042bd2a (CONDITIONAL_JUMP)  ; LAB_0042bd2a
    CMP dword ptr [ESI + 0x56c],0x0     ; 0042bcc3
        ;   Label: LAB_0042bcc3
    JZ 0x0042bd57                       ; 0042bcca
        ;   XREF to: 0042bd57 (CONDITIONAL_JUMP)  ; LAB_0042bd57
    LEA EBX,[ESI + 0x2a8]               ; 0042bcd0
    XOR ECX,ECX                         ; 0042bcd6
    XOR EDI,EDI                         ; 0042bcd8
    MOV dword ptr [ESP + 0x4],ECX       ; 0042bcda
    MOV EAX,dword ptr [ESI + 0x150]     ; 0042bcde
        ;   Label: LAB_0042bcde
    DEC EAX                             ; 0042bce4
    CMP EDI,EAX                         ; 0042bce5
    JGE 0x0042bd57                      ; 0042bce7
        ;   XREF to: 0042bd57 (CONDITIONAL_JUMP)  ; LAB_0042bd57
    FLD float ptr [EBX + -0x24]         ; 0042bce9
    FSUB float ptr [EBX]                ; 0042bcec
    FSTP float ptr [ESP + 0x74]         ; 0042bcee
    FLD float ptr [EBX + -0x20]         ; 0042bcf2
    FSUB float ptr [EBX + 0x4]          ; 0042bcf5
    FST float ptr [ESP + 0x78]          ; 0042bcf8
    FMUL float ptr [ESP + 0x78]         ; 0042bcfc
    FLD float ptr [ESP + 0x74]          ; 0042bd00
    FMUL ST0                            ; 0042bd04
    FLD float ptr [EBX + -0x1c]         ; 0042bd06
    FSUB float ptr [EBX + 0x8]          ; 0042bd09
    FXCH                                ; 0042bd0c
    FADDP ST2,ST0                       ; 0042bd0e
    FST float ptr [ESP + 0x7c]          ; 0042bd10
    FMUL float ptr [ESP + 0x7c]         ; 0042bd14
    FADDP                               ; 0042bd18
    FSQRT                               ; 0042bd1a
    ADD EBX,0x24                        ; 0042bd1c
    FADD float ptr [ESP + 0x4]          ; 0042bd1f
    INC EDI                             ; 0042bd23
    FSTP float ptr [ESP + 0x4]          ; 0042bd24
    JMP 0x0042bcde                      ; 0042bd28
        ;   XREF to: 0042bcde (UNCONDITIONAL_JUMP)  ; LAB_0042bcde
    PUSH 0x0                            ; 0042bd2a
        ;   Label: LAB_0042bd2a
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0042bd2c
    PUSH 0x3dcccccd                     ; 0042bd32
    PUSH ESI                            ; 0042bd37
    CALL dword ptr [EAX + 0x38]         ; 0042bd38
    MOV dword ptr [ESP + 0xe4],EAX      ; 0042bd3b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0042bd42
    MOV dword ptr [ESI + 0x564],EAX     ; 0042bd49
    ADD ESP,0xc                         ; 0042bd4f
    JMP 0x0042bcc3                      ; 0042bd52
        ;   XREF to: 0042bcc3 (UNCONDITIONAL_JUMP)  ; LAB_0042bcc3
    FLD float ptr [EBP + 0x18]          ; 0042bd57
        ;   Label: LAB_0042bd57
    FLD1                                ; 0042bd5a
    FDIVRP                              ; 0042bd5c
    MOV EDX,dword ptr [ESI + 0x150]     ; 0042bd5e
    DEC EDX                             ; 0042bd64
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042bd65
    ADD EAX,EDX                         ; 0042bd6c
    LEA EDI,[ESI + 0x284]               ; 0042bd6e
    SHL EAX,0x2                         ; 0042bd74
    LEA EDX,[EDI + EAX*0x1]             ; 0042bd77
    FSTP float ptr [ESI + 0x568]        ; 0042bd7a
    MOV EAX,dword ptr [EDX]             ; 0042bd80
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042bd82
    LEA EAX,[EDX + 0x4]                 ; 0042bd89
    MOV EAX,dword ptr [EAX]             ; 0042bd8c
    MOV dword ptr [ESP + 0x90],EAX      ; 0042bd8e
    LEA EAX,[EDX + 0x8]                 ; 0042bd95
    MOV EAX,dword ptr [EAX]             ; 0042bd98
    MOV dword ptr [ESP + 0x94],EAX      ; 0042bd9a
    LEA EAX,[ESP + 0x44]                ; 0042bda1
    PUSH EAX                            ; 0042bda5
    PUSH ESI                            ; 0042bda6
    CALL core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890 ; 0042bda7
        ;   XREF to: 0042b890 (UNCONDITIONAL_CALL)  ; CVector3f * core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain * this_ptr, CVector3f * out_point)
    MOV EBX,dword ptr [ESI + 0x150]     ; 0042bdac
    DEC EBX                             ; 0042bdb2
    MOV EDX,EAX                         ; 0042bdb3
    LEA EAX,[EBX*0x8 + 0x0]             ; 0042bdb5
    ADD EAX,EBX                         ; 0042bdbc
    SHL EAX,0x2                         ; 0042bdbe
    ADD EAX,EDI                         ; 0042bdc1
    ADD ESP,0x8                         ; 0042bdc3
    CMP EAX,EDX                         ; 0042bdc6
    JZ 0x0042bdda                       ; 0042bdc8
        ;   XREF to: 0042bdda (CONDITIONAL_JUMP)  ; LAB_0042bdda
    MOV ECX,dword ptr [EDX]             ; 0042bdca
    MOV dword ptr [EAX],ECX             ; 0042bdcc
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042bdce
    MOV dword ptr [EAX + 0x4],ECX       ; 0042bdd1
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042bdd4
    MOV dword ptr [EAX + 0x8],ECX       ; 0042bdd7
    MOV EDX,dword ptr [ESI + 0x150]     ; 0042bdda
        ;   Label: LAB_0042bdda
    DEC EDX                             ; 0042bde0
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042bde1
    ADD EAX,EDX                         ; 0042bde8
    LEA EDX,[ESI + 0x284]               ; 0042bdea
    MOV dword ptr [EDX + EAX*0x4 + 0x14],0x0 ; 0042bdf0
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x14] ; 0042bdf8
    MOV dword ptr [EDX + EAX*0x4 + 0x10],ECX ; 0042bdfc
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x10] ; 0042be00
    MOV dword ptr [EDX + EAX*0x4 + 0xc],ECX ; 0042be04
    LEA EAX,[ESI + 0x20]                ; 0042be08
    CMP EDX,EAX                         ; 0042be0b
    JNZ 0x0042bfe6                      ; 0042be0d
        ;   XREF to: 0042bfe6 (CONDITIONAL_JUMP)  ; LAB_0042bfe6
    LEA EAX,[ESI + 0x290]               ; 0042be13
        ;   Label: LAB_0042be13
    MOV dword ptr [EAX + 0x8],0x0       ; 0042be19
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042be20
    MOV dword ptr [EAX + 0x4],EDX       ; 0042be23
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042be26
    MOV dword ptr [EAX],EDX             ; 0042be29
    LEA EAX,[ESI + 0x284]               ; 0042be2b
    MOV dword ptr [ESP + 0x98],EAX      ; 0042be31
    LEA EAX,[ESI + 0x560]               ; 0042be38
    MOV EBX,0x1                         ; 0042be3e
    MOV dword ptr [ESP + 0xb0],EAX      ; 0042be43
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042be4a
    MOV dword ptr [ESP + 0xc0],EBX      ; 0042be51
    ADD EAX,0x48                        ; 0042be58
    MOV EDI,dword ptr [ESP + 0x98]      ; 0042be5b
    MOV dword ptr [ESP + 0xbc],EAX      ; 0042be62
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042be69
    ADD EDI,0x30                        ; 0042be70
    MOV dword ptr [ESP + 0xb8],EAX      ; 0042be73
    MOV EAX,dword ptr [ESI + 0x150]     ; 0042be7a
        ;   Label: LAB_0042be7a
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0042be80
    DEC EAX                             ; 0042be87
    CMP EAX,EDX                         ; 0042be88
    JG 0x0042bffb                       ; 0042be8a
        ;   XREF to: 0042bffb (CONDITIONAL_JUMP)  ; LAB_0042bffb
    LEA EAX,[ESI + 0x290]               ; 0042be90
    MOV dword ptr [ESP + 0xc8],EAX      ; 0042be96
    LEA EAX,[ESI + 0x284]               ; 0042be9d
    MOV dword ptr [ESP + 0xcc],EAX      ; 0042bea3
    LEA EAX,[ESI + 0x20]                ; 0042beaa
    MOV dword ptr [ESP + 0xc4],EAX      ; 0042bead
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0042beb4
    ADD EAX,0x48                        ; 0042bebb
    MOV dword ptr [ESP + 0xa4],EAX      ; 0042bebe
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0042bec5
    XOR ECX,ECX                         ; 0042becc
    ADD EAX,0x24                        ; 0042bece
    MOV dword ptr [ESP + 0xb4],ECX      ; 0042bed1
    MOV dword ptr [ESP + 0xa8],EAX      ; 0042bed8
    LEA EAX,[ESP + 0x80]                ; 0042bedf
        ;   Label: LAB_0042bedf
    PUSH EAX                            ; 0042bee6
    PUSH ESI                            ; 0042bee7
    CALL core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890 ; 0042bee8
        ;   XREF to: 0042b890 (UNCONDITIONAL_CALL)  ; CVector3f * core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain * this_ptr, CVector3f * out_point)
    MOV EBX,dword ptr [ESI + 0x150]     ; 0042beed
    DEC EBX                             ; 0042bef3
    IMUL EBX,EBX,0x24                   ; 0042bef4
    ADD ESP,0x8                         ; 0042bef7
    ADD EBX,dword ptr [ESP + 0xcc]      ; 0042befa
    CMP EBX,EAX                         ; 0042bf01
    JZ 0x0042bf15                       ; 0042bf03
        ;   XREF to: 0042bf15 (CONDITIONAL_JUMP)  ; LAB_0042bf15
    MOV EDX,dword ptr [EAX]             ; 0042bf05
    MOV dword ptr [EBX],EDX             ; 0042bf07
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042bf09
    MOV dword ptr [EBX + 0x4],EDX       ; 0042bf0c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042bf0f
    MOV dword ptr [EBX + 0x8],EDX       ; 0042bf12
    MOV EAX,dword ptr [ESI + 0x150]     ; 0042bf15
        ;   Label: LAB_0042bf15
    DEC EAX                             ; 0042bf1b
    IMUL EAX,EAX,0x24                   ; 0042bf1c
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0042bf1f
    ADD EAX,EDX                         ; 0042bf26
    MOV dword ptr [EAX + 0x14],0x0      ; 0042bf28
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0042bf2f
    MOV EBX,dword ptr [EAX + 0x14]      ; 0042bf36
    MOV dword ptr [EAX + 0x10],EBX      ; 0042bf39
    MOV EBX,dword ptr [EAX + 0x10]      ; 0042bf3c
    MOV dword ptr [EAX + 0xc],EBX       ; 0042bf3f
    CMP EDX,ECX                         ; 0042bf42
    JNZ 0x0042c16f                      ; 0042bf44
        ;   XREF to: 0042c16f (CONDITIONAL_JUMP)  ; LAB_0042c16f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0042bf4a
        ;   Label: LAB_0042bf4a
    MOV EBX,0x1                         ; 0042bf51
    MOV EDI,dword ptr [ESP + 0xa4]      ; 0042bf56
    MOV dword ptr [EAX + 0x8],0x0       ; 0042bf5d
    MOV dword ptr [ESP + 0xd4],EBX      ; 0042bf64
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042bf6b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042bf6e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042bf71
    MOV dword ptr [EAX],EDX             ; 0042bf74
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0042bf76
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0042bf7d
    MOV dword ptr [ESP + 0xd0],EAX      ; 0042bf84
    MOV EAX,dword ptr [ESI + 0x150]     ; 0042bf8b
        ;   Label: LAB_0042bf8b
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0042bf91
    DEC EAX                             ; 0042bf98
    CMP EAX,EDX                         ; 0042bf99
    JLE 0x0042c186                      ; 0042bf9b
        ;   XREF to: 0042c186 (CONDITIONAL_JUMP)  ; LAB_0042c186
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0042bfa1
    PUSH EAX                            ; 0042bfa8
    PUSH EBX                            ; 0042bfa9
    PUSH ESI                            ; 0042bfaa
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0 ; 0042bfab
        ;   XREF to: 0042baa0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 0042bfb0
    PUSH EDI                            ; 0042bfb3
    PUSH EBX                            ; 0042bfb4
    PUSH ESI                            ; 0042bfb5
    ADD EDI,0x24                        ; 0042bfb6
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0 ; 0042bfb9
        ;   XREF to: 0042baa0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 0042bfbe
    ADD EBX,0x24                        ; 0042bfc1
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0042bfc4
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0042bfcb
    ADD EDX,0x24                        ; 0042bfd2
    INC ECX                             ; 0042bfd5
    MOV dword ptr [ESP + 0xd0],EDX      ; 0042bfd6
    MOV dword ptr [ESP + 0xd4],ECX      ; 0042bfdd
    JMP 0x0042bf8b                      ; 0042bfe4
        ;   XREF to: 0042bf8b (UNCONDITIONAL_JUMP)  ; LAB_0042bf8b
    MOV ECX,dword ptr [EAX]             ; 0042bfe6
        ;   Label: LAB_0042bfe6
    MOV dword ptr [EDX],ECX             ; 0042bfe8
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042bfea
    MOV dword ptr [EDX + 0x4],ECX       ; 0042bfed
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042bff0
    MOV dword ptr [EDX + 0x8],ECX       ; 0042bff3
    JMP 0x0042be13                      ; 0042bff6
        ;   XREF to: 0042be13 (UNCONDITIONAL_JUMP)  ; LAB_0042be13
    IMUL EBX,EDX,0x24                   ; 0042bffb
        ;   Label: LAB_0042bffb
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042bffe
    FLD float ptr [EAX]                 ; 0042c005
    FMUL float ptr [EDI]                ; 0042c007
    FSTP float ptr [EDI]                ; 0042c009
    FLD float ptr [EAX]                 ; 0042c00b
    FMUL float ptr [EDI + 0x4]          ; 0042c00d
    FSTP float ptr [EDI + 0x4]          ; 0042c010
    FLD float ptr [EAX]                 ; 0042c013
    FMUL float ptr [EDI + 0x8]          ; 0042c015
    XOR ECX,ECX                         ; 0042c018
    FSTP float ptr [EDI + 0x8]          ; 0042c01a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0042c01d
    MOV dword ptr [ESP + 0x18],ECX      ; 0042c021
    MOV dword ptr [ESP + 0x14],ECX      ; 0042c025
    FLD float ptr [ESI + 0x554]         ; 0042c029
    FMUL double ptr [0x0057a58e]        ; 0042c02f | DOUBLE_0057a58e
    FLD1                                ; 0042c035
    FLDZ                                ; 0042c037
    FXCH ST2                            ; 0042c039
    FSTP float ptr [ESP + 0xac]         ; 0042c03b
    FDIV float ptr [ESP + 0xac]         ; 0042c042
    FXCH                                ; 0042c049
    FMUL ST1                            ; 0042c04b
    FLDZ                                ; 0042c04d
    FSUB float ptr [ESI + 0x554]        ; 0042c04f
    MOV EDX,dword ptr [ESP + 0x98]      ; 0042c055
    FST float ptr [ESP + 0x18]          ; 0042c05c
    FMULP ST2                           ; 0042c060
    ADD EBX,EDX                         ; 0042c062
    FSTP float ptr [ESP + 0x38]         ; 0042c064
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042c068
    LEA EDX,[ESP + 0x38]                ; 0042c06c
    MOV dword ptr [ESP + 0x40],EAX      ; 0042c070
    LEA EAX,[ESP + 0x20]                ; 0042c074
    FSTP float ptr [ESP + 0x3c]         ; 0042c078
    CMP EAX,EDX                         ; 0042c07c
    JZ 0x0042c098                       ; 0042c07e
        ;   XREF to: 0042c098 (CONDITIONAL_JUMP)  ; LAB_0042c098
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042c080
    MOV dword ptr [ESP + 0x20],EAX      ; 0042c084
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042c088
    MOV dword ptr [ESP + 0x24],EAX      ; 0042c08c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042c090
    MOV dword ptr [ESP + 0x28],EAX      ; 0042c094
    FLD float ptr [EBP + 0x18]          ; 0042c098
        ;   Label: LAB_0042c098
    FLD float ptr [ESP + 0x20]          ; 0042c09b
    FMUL ST1                            ; 0042c09f
    FLD float ptr [ESP + 0x24]          ; 0042c0a1
    FMUL ST2                            ; 0042c0a5
    FLD float ptr [ESP + 0x28]          ; 0042c0a7
    FMUL ST3                            ; 0042c0ab
    LEA EAX,[EBX + 0xc]                 ; 0042c0ad
    FXCH ST2                            ; 0042c0b0
    FSTP float ptr [ESP + 0x68]         ; 0042c0b2
    FSTP float ptr [ESP + 0x6c]         ; 0042c0b6
    FSTP float ptr [ESP + 0x70]         ; 0042c0ba
    FLD float ptr [EAX]                 ; 0042c0be
    FADD float ptr [ESP + 0x68]         ; 0042c0c0
    FST float ptr [EAX]                 ; 0042c0c4
    FMUL ST1                            ; 0042c0c6
    FLD float ptr [EAX + 0x4]           ; 0042c0c8
    FADD float ptr [ESP + 0x6c]         ; 0042c0cb
    FLD float ptr [EAX + 0x8]           ; 0042c0cf
    FXCH                                ; 0042c0d2
    FSTP float ptr [EAX + 0x4]          ; 0042c0d4
    FADD float ptr [ESP + 0x70]         ; 0042c0d7
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0042c0db
    FSTP float ptr [EAX + 0x8]          ; 0042c0e2
    FSTP float ptr [ESP + 0x5c]         ; 0042c0e5
    FLD float ptr [EAX + 0x4]           ; 0042c0e9
    FMUL ST1                            ; 0042c0ec
    PUSH ECX                            ; 0042c0ee
    FSTP float ptr [ESP + 0x64]         ; 0042c0ef
    FMUL float ptr [EAX + 0x8]          ; 0042c0f3
    PUSH EBX                            ; 0042c0f6
    FSTP float ptr [ESP + 0x6c]         ; 0042c0f7
    FLD float ptr [EBX]                 ; 0042c0fb
    FADD float ptr [ESP + 0x64]         ; 0042c0fd
    FLD float ptr [EBX + 0x4]           ; 0042c101
    FXCH                                ; 0042c104
    FSTP float ptr [EBX]                ; 0042c106
    FADD float ptr [ESP + 0x68]         ; 0042c108
    FLD float ptr [EBX + 0x8]           ; 0042c10c
    FXCH                                ; 0042c10f
    FSTP float ptr [EBX + 0x4]          ; 0042c111
    FADD float ptr [ESP + 0x6c]         ; 0042c114
    PUSH ESI                            ; 0042c118
    FSTP float ptr [EBX + 0x8]          ; 0042c119
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0 ; 0042c11c
        ;   XREF to: 0042baa0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 0042c121
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042c124
    PUSH EAX                            ; 0042c12b
    PUSH EBX                            ; 0042c12c
    PUSH ESI                            ; 0042c12d
    CALL core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0 ; 0042c12e
        ;   XREF to: 0042baa0 (UNCONDITIONAL_CALL)  ; void core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0(CChain * this_ptr, SChainVertex * vertex_a, SChainVertex * vertex_b)
    ADD ESP,0xc                         ; 0042c133
    ADD EDI,0x24                        ; 0042c136
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0042c139
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0042c140
    MOV EBX,dword ptr [ESP + 0xc0]      ; 0042c147
    ADD EDX,0x24                        ; 0042c14e
    ADD ECX,0x24                        ; 0042c151
    INC EBX                             ; 0042c154
    MOV dword ptr [ESP + 0xbc],EDX      ; 0042c155
    MOV dword ptr [ESP + 0xb8],ECX      ; 0042c15c
    MOV dword ptr [ESP + 0xc0],EBX      ; 0042c163
    JMP 0x0042be7a                      ; 0042c16a
        ;   XREF to: 0042be7a (UNCONDITIONAL_JUMP)  ; LAB_0042be7a
    MOV EAX,ECX                         ; 0042c16f
        ;   Label: LAB_0042c16f
    MOV ECX,dword ptr [EAX]             ; 0042c171
    MOV dword ptr [EDX],ECX             ; 0042c173
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042c175
    MOV dword ptr [EDX + 0x4],ECX       ; 0042c178
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042c17b
    MOV dword ptr [EDX + 0x8],ECX       ; 0042c17e
    JMP 0x0042bf4a                      ; 0042c181
        ;   XREF to: 0042bf4a (UNCONDITIONAL_JUMP)  ; LAB_0042bf4a
    LEA EAX,[ESP + 0x8]                 ; 0042c186
        ;   Label: LAB_0042c186
    PUSH EAX                            ; 0042c18a
    PUSH ESI                            ; 0042c18b
    CALL core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890 ; 0042c18c
        ;   XREF to: 0042b890 (UNCONDITIONAL_CALL)  ; CVector3f * core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890(CChain * this_ptr, CVector3f * out_point)
    MOV EBX,dword ptr [ESI + 0x150]     ; 0042c191
    DEC EBX                             ; 0042c197
    IMUL EBX,EBX,0x24                   ; 0042c198
    ADD ESP,0x8                         ; 0042c19b
    ADD EBX,dword ptr [ESP + 0xcc]      ; 0042c19e
    CMP EBX,EAX                         ; 0042c1a5
    JZ 0x0042c1b9                       ; 0042c1a7
        ;   XREF to: 0042c1b9 (CONDITIONAL_JUMP)  ; LAB_0042c1b9
    MOV EDX,dword ptr [EAX]             ; 0042c1a9
    MOV dword ptr [EBX],EDX             ; 0042c1ab
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c1ad
    MOV dword ptr [EBX + 0x4],EDX       ; 0042c1b0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042c1b3
    MOV dword ptr [EBX + 0x8],EDX       ; 0042c1b6
    MOV EAX,dword ptr [ESI + 0x150]     ; 0042c1b9
        ;   Label: LAB_0042c1b9
    DEC EAX                             ; 0042c1bf
    IMUL EAX,EAX,0x24                   ; 0042c1c0
    MOV EBX,dword ptr [ESP + 0xcc]      ; 0042c1c3
    ADD EAX,EBX                         ; 0042c1ca
    MOV dword ptr [EAX + 0x14],0x0      ; 0042c1cc
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0042c1d3
    MOV EDX,dword ptr [EAX + 0x14]      ; 0042c1da
    MOV dword ptr [EAX + 0x10],EDX      ; 0042c1dd
    MOV EDX,dword ptr [EAX + 0x10]      ; 0042c1e0
    MOV dword ptr [EAX + 0xc],EDX       ; 0042c1e3
    CMP EBX,EDI                         ; 0042c1e6
    JZ 0x0042c1fc                       ; 0042c1e8
        ;   XREF to: 0042c1fc (CONDITIONAL_JUMP)  ; LAB_0042c1fc
    MOV EAX,EDI                         ; 0042c1ea
    MOV EDX,dword ptr [EAX]             ; 0042c1ec
    MOV dword ptr [EBX],EDX             ; 0042c1ee
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c1f0
    MOV dword ptr [EBX + 0x4],EDX       ; 0042c1f3
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042c1f6
    MOV dword ptr [EBX + 0x8],EDX       ; 0042c1f9
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0042c1fc
        ;   Label: LAB_0042c1fc
    MOV dword ptr [EAX + 0x8],0x0       ; 0042c203
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042c20a
    MOV dword ptr [EAX + 0x4],EDX       ; 0042c20d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c210
    MOV dword ptr [EAX],EDX             ; 0042c213
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0042c215
    INC EAX                             ; 0042c21c
    MOV dword ptr [ESP + 0xb4],EAX      ; 0042c21d
    CMP EAX,0x3                         ; 0042c224
    JL 0x0042bedf                       ; 0042c227
        ;   XREF to: 0042bedf (CONDITIONAL_JUMP)  ; LAB_0042bedf
    MOV ECX,dword ptr [ESI + 0x150]     ; 0042c22d
    XOR EDI,EDI                         ; 0042c233
    TEST ECX,ECX                        ; 0042c235
    JLE 0x0042c26c                      ; 0042c237
        ;   XREF to: 0042c26c (CONDITIONAL_JUMP)  ; LAB_0042c26c
    LEA EDX,[ESI + 0x284]               ; 0042c239
    LEA EBX,[ESI + 0x29c]               ; 0042c23f
    IMUL EAX,EDI,0x24                   ; 0042c245
        ;   Label: LAB_0042c245
    ADD EAX,EDX                         ; 0042c248
    CMP EBX,EAX                         ; 0042c24a
    JZ 0x0042c25e                       ; 0042c24c
        ;   XREF to: 0042c25e (CONDITIONAL_JUMP)  ; LAB_0042c25e
    MOV ECX,dword ptr [EAX]             ; 0042c24e
    MOV dword ptr [EBX],ECX             ; 0042c250
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042c252
    MOV dword ptr [EBX + 0x4],ECX       ; 0042c255
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042c258
    MOV dword ptr [EBX + 0x8],ECX       ; 0042c25b
    INC EDI                             ; 0042c25e
        ;   Label: LAB_0042c25e
    MOV EAX,dword ptr [ESI + 0x150]     ; 0042c25f
    ADD EBX,0x24                        ; 0042c265
    CMP EDI,EAX                         ; 0042c268
    JL 0x0042c245                       ; 0042c26a
        ;   XREF to: 0042c245 (CONDITIONAL_JUMP)  ; LAB_0042c245
    XOR EDX,EDX                         ; 0042c26c
        ;   Label: LAB_0042c26c
    MOV EBX,dword ptr [ESI + 0x56c]     ; 0042c26e
    MOV dword ptr [ESP + 0x9c],EDX      ; 0042c274
    MOV dword ptr [ESP + 0xa0],EDX      ; 0042c27b
    TEST EBX,EBX                        ; 0042c282
    JZ 0x0042c390                       ; 0042c284
        ;   XREF to: 0042c390 (CONDITIONAL_JUMP)  ; LAB_0042c390
    FLD float ptr [ESI + 0x154]         ; 0042c28a
    FMUL double ptr [0x0057a596]        ; 0042c290 | DOUBLE_0057a596
    FLD float ptr [ESP + 0x4]           ; 0042c296
    FCOMPP                              ; 0042c29a
    FNSTSW AX                           ; 0042c29c
    SAHF                                ; 0042c29e
    JNC 0x0042c31b                      ; 0042c29f
        ;   XREF to: 0042c31b (CONDITIONAL_JUMP)  ; LAB_0042c31b
    LEA EBX,[ESI + 0x2a8]               ; 0042c2a5
    MOV dword ptr [ESP],EDX             ; 0042c2ab
    XOR EDI,EDI                         ; 0042c2ae
    MOV EAX,dword ptr [ESI + 0x150]     ; 0042c2b0
        ;   Label: LAB_0042c2b0
    DEC EAX                             ; 0042c2b6
    CMP EDI,EAX                         ; 0042c2b7
    JGE 0x0042c2fa                      ; 0042c2b9
        ;   XREF to: 0042c2fa (CONDITIONAL_JUMP)  ; LAB_0042c2fa
    FLD float ptr [EBX + -0x24]         ; 0042c2bb
    FSUB float ptr [EBX]                ; 0042c2be
    FSTP float ptr [ESP + 0x2c]         ; 0042c2c0
    FLD float ptr [EBX + -0x20]         ; 0042c2c4
    FSUB float ptr [EBX + 0x4]          ; 0042c2c7
    FST float ptr [ESP + 0x30]          ; 0042c2ca
    FMUL float ptr [ESP + 0x30]         ; 0042c2ce
    FLD float ptr [ESP + 0x2c]          ; 0042c2d2
    FMUL ST0                            ; 0042c2d6
    FLD float ptr [EBX + -0x1c]         ; 0042c2d8
    FSUB float ptr [EBX + 0x8]          ; 0042c2db
    FXCH                                ; 0042c2de
    FADDP ST2,ST0                       ; 0042c2e0
    FST float ptr [ESP + 0x34]          ; 0042c2e2
    FMUL float ptr [ESP + 0x34]         ; 0042c2e6
    FADDP                               ; 0042c2ea
    FSQRT                               ; 0042c2ec
    ADD EBX,0x24                        ; 0042c2ee
    FADD float ptr [ESP]                ; 0042c2f1
    INC EDI                             ; 0042c2f4
    FSTP float ptr [ESP]                ; 0042c2f5
    JMP 0x0042c2b0                      ; 0042c2f8
        ;   XREF to: 0042c2b0 (UNCONDITIONAL_JUMP)  ; LAB_0042c2b0
    FLD float ptr [ESI + 0x154]         ; 0042c2fa
        ;   Label: LAB_0042c2fa
    FMUL double ptr [0x0057a596]        ; 0042c300 | DOUBLE_0057a596
    FLD float ptr [ESP]                 ; 0042c306
    FCOMPP                              ; 0042c309
    FNSTSW AX                           ; 0042c30b
    SAHF                                ; 0042c30d
    JBE 0x0042c31b                      ; 0042c30e
        ;   XREF to: 0042c31b (CONDITIONAL_JUMP)  ; LAB_0042c31b
    MOV dword ptr [ESP + 0xa0],0x1      ; 0042c310
    MOV EDX,dword ptr [ESI + 0x150]     ; 0042c31b
        ;   Label: LAB_0042c31b
    DEC EDX                             ; 0042c321
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042c322
    ADD EAX,EDX                         ; 0042c329
    LEA EDX,[ESI + 0x284]               ; 0042c32b
    FLD float ptr [ESP + 0x8c]          ; 0042c331
    FSUB float ptr [EDX + EAX*0x4]      ; 0042c338
    FLD float ptr [ESP + 0x90]          ; 0042c33b
    FXCH                                ; 0042c342
    FSTP float ptr [ESP + 0x50]         ; 0042c344
    FSUB float ptr [EDX + EAX*0x4 + 0x4] ; 0042c348
    FST float ptr [ESP + 0x54]          ; 0042c34c
    FMUL float ptr [ESP + 0x54]         ; 0042c350
    FLD float ptr [ESP + 0x50]          ; 0042c354
    FMUL ST0                            ; 0042c358
    FLD float ptr [ESP + 0x94]          ; 0042c35a
    FSUB float ptr [EDX + EAX*0x4 + 0x8] ; 0042c361
    FXCH                                ; 0042c365
    FADDP ST2,ST0                       ; 0042c367
    FST float ptr [ESP + 0x58]          ; 0042c369
    FMUL float ptr [ESP + 0x58]         ; 0042c36d
    FADDP                               ; 0042c371
    FSQRT                               ; 0042c373
    FLD float ptr [EBP + 0x18]          ; 0042c375
    FMUL double ptr [0x0057a59e]        ; 0042c378 | DOUBLE_0057a59e
    FCOMPP                              ; 0042c37e
    FNSTSW AX                           ; 0042c380
    SAHF                                ; 0042c382
    JNC 0x0042c390                      ; 0042c383
        ;   XREF to: 0042c390 (CONDITIONAL_JUMP)  ; LAB_0042c390
    MOV dword ptr [ESP + 0x9c],0x1      ; 0042c385
    CMP dword ptr [ESP + 0xa0],0x0      ; 0042c390
        ;   Label: LAB_0042c390
    JZ 0x0042c3c5                       ; 0042c398
        ;   XREF to: 0042c3c5 (CONDITIONAL_JUMP)  ; LAB_0042c3c5
    CMP byte ptr [ESI + 0x1ac],0x0      ; 0042c39a
    JZ 0x0042c3c5                       ; 0042c3a1
        ;   XREF to: 0042c3c5 (CONDITIONAL_JUMP)  ; LAB_0042c3c5
    MOV EBX,dword ptr [ESI + 0x278]     ; 0042c3a3
    PUSH EBX                            ; 0042c3a9
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0042c3aa
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0042c3af
    MOV EDI,dword ptr [ESI + 0x210]     ; 0042c3b2
    PUSH EDI                            ; 0042c3b8
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0042c3b9
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0042c3be
    TEST EAX,EAX                        ; 0042c3c1
    JZ 0x0042c3f9                       ; 0042c3c3
        ;   XREF to: 0042c3f9 (CONDITIONAL_JUMP)  ; LAB_0042c3f9
    FLD float ptr [ESI + 0x27c]         ; 0042c3c5
        ;   Label: LAB_0042c3c5
    FSUB float ptr [EBP + 0x18]         ; 0042c3cb
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0042c3ce
    FSTP float ptr [ESI + 0x27c]        ; 0042c3d5
    TEST EDX,EDX                        ; 0042c3db
    JNZ 0x0042c433                      ; 0042c3dd
        ;   XREF to: 0042c433 (CONDITIONAL_JUMP)  ; LAB_0042c433
    FLD float ptr [ESI + 0x27c]         ; 0042c3df
    FLDZ                                ; 0042c3e5
    FCOMPP                              ; 0042c3e7
    FNSTSW AX                           ; 0042c3e9
    SAHF                                ; 0042c3eb
    JA 0x0042c4a2                       ; 0042c3ec
        ;   XREF to: 0042c4a2 (CONDITIONAL_JUMP)  ; LAB_0042c4a2
    MOV ESP,EBP                         ; 0042c3f2
    POP EBP                             ; 0042c3f4
    POP EDI                             ; 0042c3f5
    POP ESI                             ; 0042c3f6
    POP EBX                             ; 0042c3f7
    RET                                 ; 0042c3f8
    MOV EDX,dword ptr [ESI + 0x150]     ; 0042c3f9
        ;   Label: LAB_0042c3f9
    DEC EDX                             ; 0042c3ff
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042c400
    ADD EAX,EDX                         ; 0042c407
    SHL EAX,0x2                         ; 0042c409
    LEA EDX,[ESI + 0x284]               ; 0042c40c
    ADD EAX,EDX                         ; 0042c412
    PUSH EAX                            ; 0042c414
    LEA EAX,[ESI + 0x1ac]               ; 0042c415
    PUSH EAX                            ; 0042c41b
    PUSH ESI                            ; 0042c41c
    MOV EAX,[0x005bed68]                ; 0042c41d | DAT_005bed68
    PUSH EAX                            ; 0042c422
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90 ; 0042c423
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0042c428
    MOV dword ptr [ESI + 0x278],EAX     ; 0042c42b
    JMP 0x0042c3c5                      ; 0042c431
        ;   XREF to: 0042c3c5 (UNCONDITIONAL_JUMP)  ; LAB_0042c3c5
    MOV EBX,dword ptr [ESI + 0x210]     ; 0042c433
        ;   Label: LAB_0042c433
    PUSH EBX                            ; 0042c439
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0042c43a
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0042c43f
    TEST EAX,EAX                        ; 0042c442
    JNZ 0x0042c491                      ; 0042c444
        ;   XREF to: 0042c491 (CONDITIONAL_JUMP)  ; LAB_0042c491
    MOV EDI,dword ptr [ESI + 0x278]     ; 0042c446
    PUSH EDI                            ; 0042c44c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0042c44d
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0042c452
    TEST EAX,EAX                        ; 0042c455
    JNZ 0x0042c491                      ; 0042c457
        ;   XREF to: 0042c491 (CONDITIONAL_JUMP)  ; LAB_0042c491
    MOV EDX,dword ptr [ESI + 0x150]     ; 0042c459
    DEC EDX                             ; 0042c45f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0042c460
    ADD EAX,EDX                         ; 0042c467
    SHL EAX,0x2                         ; 0042c469
    LEA EDX,[ESI + 0x284]               ; 0042c46c
    ADD EAX,EDX                         ; 0042c472
    PUSH EAX                            ; 0042c474
    LEA EAX,[ESI + 0x214]               ; 0042c475
    PUSH EAX                            ; 0042c47b
    PUSH ESI                            ; 0042c47c
    MOV EAX,[0x005bed68]                ; 0042c47d | DAT_005bed68
    PUSH EAX                            ; 0042c482
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90 ; 0042c483
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0042c488
    MOV dword ptr [ESI + 0x278],EAX     ; 0042c48b
    MOV dword ptr [ESI + 0x27c],0x3f000000 ; 0042c491
        ;   Label: LAB_0042c491
    MOV ESP,EBP                         ; 0042c49b
    POP EBP                             ; 0042c49d
    POP EDI                             ; 0042c49e
    POP ESI                             ; 0042c49f
    POP EBX                             ; 0042c4a0
    RET                                 ; 0042c4a1
    MOV ECX,dword ptr [ESI + 0x278]     ; 0042c4a2
        ;   Label: LAB_0042c4a2
    PUSH ECX                            ; 0042c4a8
    MOV dword ptr [ESI + 0x27c],EDX     ; 0042c4a9
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0042c4af
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0042c4b4
    MOV ESP,EBP                         ; 0042c4b7
    POP EBP                             ; 0042c4b9
    POP EDI                             ; 0042c4ba
    POP ESI                             ; 0042c4bb
    POP EBX                             ; 0042c4bc
    RET                                 ; 0042c4bd

