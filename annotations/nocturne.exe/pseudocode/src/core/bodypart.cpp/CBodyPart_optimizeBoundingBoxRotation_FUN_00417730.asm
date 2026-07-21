; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 00416dcf
;
; Referenced Globals:
;   undefined4 DAT_005790ca
;   undefined4 DAT_005790d2
;   undefined4 DAT_005790da
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417730
        ;   Label: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730
    PUSH ESI                            ; 00417731
    PUSH EDI                            ; 00417732
    PUSH EBP                            ; 00417733
    MOV EBP,ESP                         ; 00417734
    SUB ESP,0xac                        ; 00417736
    AND ESP,0xfffffff8                  ; 0041773c
    MOV EDX,0x7fffffff                  ; 0041773f
    XOR ECX,ECX                         ; 00417744
    MOV dword ptr [ESP + 0x7c],EDX      ; 00417746
    MOV dword ptr [ESP + 0x78],ECX      ; 0041774a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0041774e
        ;   Label: LAB_0041774e
    XOR EBX,EBX                         ; 00417752
    MOV dword ptr [ESP + 0x4],EAX       ; 00417754
    MOV dword ptr [ESP],EBX             ; 00417758
    MOV EAX,dword ptr [ESP]             ; 0041775b
        ;   Label: LAB_0041775b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0041775e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00417765
    FILD dword ptr [ESP + 0xa8]         ; 00417769
    MOV dword ptr [ESP + 0xa8],EAX      ; 00417770
    FLD double ptr [0x005790ca]         ; 00417777 | DAT_005790ca
    FXCH                                ; 0041777d
    FMUL ST1                            ; 0041777f
    FILD dword ptr [ESP + 0xa8]         ; 00417781
    FMULP ST2                           ; 00417788
    FLD double ptr [0x005790d2]         ; 0041778a | DAT_005790d2
    FXCH                                ; 00417790
    FMUL ST1                            ; 00417792
    FXCH ST2                            ; 00417794
    FMULP                               ; 00417796
    XOR ESI,ESI                         ; 00417798
    LEA EAX,[ESP + 0x6c]                ; 0041779a
    MOV dword ptr [ESP + 0x74],ESI      ; 0041779e
    PUSH EAX                            ; 004177a2
    LEA EAX,[ESP + 0xc]                 ; 004177a3
    FXCH                                ; 004177a7
    FSTP float ptr [ESP + 0x70]         ; 004177a9
    PUSH EAX                            ; 004177ad
    FSTP float ptr [ESP + 0x78]         ; 004177ae
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004177b2
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 004177b7
    FLD float ptr [ESP + 0x8]           ; 004177ba
    FMUL float ptr [0x005790da]         ; 004177be | DAT_005790da
    FLD float ptr [ESP + 0xc]           ; 004177c4
    FMUL float ptr [0x005790da]         ; 004177c8 | DAT_005790da
    FLD float ptr [ESP + 0x10]          ; 004177ce
    FMUL float ptr [0x005790da]         ; 004177d2 | DAT_005790da
    FLD float ptr [ESP + 0x14]          ; 004177d8
    FMUL float ptr [0x005790da]         ; 004177dc | DAT_005790da
    FLD float ptr [ESP + 0x18]          ; 004177e2
    FMUL float ptr [0x005790da]         ; 004177e6 | DAT_005790da
    FLD float ptr [ESP + 0x1c]          ; 004177ec
    FMUL float ptr [0x005790da]         ; 004177f0 | DAT_005790da
    FLD float ptr [ESP + 0x20]          ; 004177f6
    FMUL float ptr [0x005790da]         ; 004177fa | DAT_005790da
    FXCH ST6                            ; 00417800
    CALL crt_math.c_round_FUN_00563a30  ; 00417802
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x98]        ; 00417807
    FLD float ptr [ESP + 0x24]          ; 0041780e
    FMUL float ptr [0x005790da]         ; 00417812 | DAT_005790da
    FXCH ST5                            ; 00417818
    CALL crt_math.c_round_FUN_00563a30  ; 0041781a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x9c]        ; 0041781f
    FLD float ptr [ESP + 0x28]          ; 00417826
    FMUL float ptr [0x005790da]         ; 0041782a | DAT_005790da
    MOV EDI,0x7fffffff                  ; 00417830
    MOV ECX,0x80000001                  ; 00417835
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041783a
    MOV dword ptr [ESP + 0x68],EDI      ; 0041783d
    MOV dword ptr [ESP + 0x64],EDI      ; 00417841
    MOV dword ptr [ESP + 0x60],EDI      ; 00417845
    MOV dword ptr [ESP + 0x50],ECX      ; 00417849
    MOV dword ptr [ESP + 0x4c],ECX      ; 0041784d
    MOV dword ptr [ESP + 0x48],ECX      ; 00417851
    MOV EDX,dword ptr [EAX + 0x16c]     ; 00417855
    XOR EDI,EDI                         ; 0041785b
    FXCH ST4                            ; 0041785d
    CALL crt_math.c_round_FUN_00563a30  ; 0041785f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 00417864
    CALL crt_math.c_round_FUN_00563a30  ; 00417866
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 0041786b
    CALL crt_math.c_round_FUN_00563a30  ; 0041786d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00417872
    CALL crt_math.c_round_FUN_00563a30  ; 00417874
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST6                            ; 00417879
    CALL crt_math.c_round_FUN_00563a30  ; 0041787b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST5                            ; 00417880
    CALL crt_math.c_round_FUN_00563a30  ; 00417882
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST4                            ; 00417887
    CALL crt_math.c_round_FUN_00563a30  ; 00417889
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST3                            ; 0041788e
    FISTP dword ptr [ESP + 0x84]        ; 00417890
    FXCH                                ; 00417897
    FISTP dword ptr [ESP + 0xa0]        ; 00417899
    FISTP dword ptr [ESP + 0x8c]        ; 004178a0
    FXCH ST3                            ; 004178a7
    FISTP dword ptr [ESP + 0x94]        ; 004178a9
    FXCH                                ; 004178b0
    FISTP dword ptr [ESP + 0x90]        ; 004178b2
    FISTP dword ptr [ESP + 0x88]        ; 004178b9
    FISTP dword ptr [ESP + 0x80]        ; 004178c0
    TEST EDX,EDX                        ; 004178c7
    JLE 0x00417a02                      ; 004178c9
        ;   XREF to: 00417a02 (CONDITIONAL_JUMP)  ; LAB_00417a02
    MOV dword ptr [ESP + 0xa4],ESI      ; 004178cf
    MOV ECX,dword ptr [EBP + 0x14]      ; 004178d6
        ;   Label: LAB_004178d6
    MOV EDX,dword ptr [ESP + 0xa4]      ; 004178d9
    MOV ECX,dword ptr [ECX + 0x170]     ; 004178e0
    ADD ECX,EDX                         ; 004178e6
    MOV EAX,dword ptr [ESP + 0x98]      ; 004178e8
    MOV EDX,dword ptr [ECX]             ; 004178ef
    IMUL EDX                            ; 004178f1
    SHRD EAX,EDX,0x10                   ; 004178f3
    MOV EBX,EAX                         ; 004178f7
    MOV EDX,dword ptr [ECX + 0x4]       ; 004178f9
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004178fc
    IMUL EDX                            ; 00417903
    SHRD EAX,EDX,0x10                   ; 00417905
    MOV EDX,dword ptr [ECX + 0x8]       ; 00417909
    ADD EBX,EAX                         ; 0041790c
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041790e
    IMUL EDX                            ; 00417915
    SHRD EAX,EDX,0x10                   ; 00417917
    MOV EDX,dword ptr [ECX]             ; 0041791b
    ADD EBX,EAX                         ; 0041791d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0041791f
    IMUL EDX                            ; 00417926
    SHRD EAX,EDX,0x10                   ; 00417928
    MOV ESI,EAX                         ; 0041792c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041792e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00417931
    IMUL EDX                            ; 00417938
    SHRD EAX,EDX,0x10                   ; 0041793a
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041793e
    ADD ESI,EAX                         ; 00417941
    MOV EAX,dword ptr [ESP + 0x88]      ; 00417943
    IMUL EDX                            ; 0041794a
    SHRD EAX,EDX,0x10                   ; 0041794c
    MOV EDX,dword ptr [ECX]             ; 00417950
    ADD ESI,EAX                         ; 00417952
    MOV EAX,dword ptr [ESP + 0x84]      ; 00417954
    IMUL EDX                            ; 0041795b
    SHRD EAX,EDX,0x10                   ; 0041795d
    MOV dword ptr [ESP + 0xa8],EAX      ; 00417961
    MOV EDX,dword ptr [ECX + 0x4]       ; 00417968
    MOV EAX,dword ptr [ESP + 0x94]      ; 0041796b
    IMUL EDX                            ; 00417972
    SHRD EAX,EDX,0x10                   ; 00417974
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00417978
    ADD EDX,EAX                         ; 0041797f
    MOV EAX,dword ptr [ESP + 0x80]      ; 00417981
    MOV dword ptr [ESP + 0xa8],EDX      ; 00417988
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041798f
    IMUL EDX                            ; 00417992
    SHRD EAX,EDX,0x10                   ; 00417994
    MOV ECX,dword ptr [ESP + 0xa8]      ; 00417998
    MOV EDX,dword ptr [ESP + 0x60]      ; 0041799f
    ADD EAX,ECX                         ; 004179a3
    CMP EBX,EDX                         ; 004179a5
    JL 0x00417ab3                       ; 004179a7
        ;   XREF to: 00417ab3 (CONDITIONAL_JUMP)  ; LAB_00417ab3
    CMP EBX,dword ptr [ESP + 0x48]      ; 004179ad
        ;   Label: LAB_004179ad
    JLE 0x004179b7                      ; 004179b1
        ;   XREF to: 004179b7 (CONDITIONAL_JUMP)  ; LAB_004179b7
    MOV dword ptr [ESP + 0x48],EBX      ; 004179b3
    CMP ESI,dword ptr [ESP + 0x64]      ; 004179b7
        ;   Label: LAB_004179b7
    JGE 0x004179c1                      ; 004179bb
        ;   XREF to: 004179c1 (CONDITIONAL_JUMP)  ; LAB_004179c1
    MOV dword ptr [ESP + 0x64],ESI      ; 004179bd
    CMP ESI,dword ptr [ESP + 0x4c]      ; 004179c1
        ;   Label: LAB_004179c1
    JLE 0x004179cb                      ; 004179c5
        ;   XREF to: 004179cb (CONDITIONAL_JUMP)  ; LAB_004179cb
    MOV dword ptr [ESP + 0x4c],ESI      ; 004179c7
    CMP EAX,dword ptr [ESP + 0x68]      ; 004179cb
        ;   Label: LAB_004179cb
    JGE 0x004179d5                      ; 004179cf
        ;   XREF to: 004179d5 (CONDITIONAL_JUMP)  ; LAB_004179d5
    MOV dword ptr [ESP + 0x68],EAX      ; 004179d1
    CMP EAX,dword ptr [ESP + 0x50]      ; 004179d5
        ;   Label: LAB_004179d5
    JLE 0x004179df                      ; 004179d9
        ;   XREF to: 004179df (CONDITIONAL_JUMP)  ; LAB_004179df
    MOV dword ptr [ESP + 0x50],EAX      ; 004179db
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004179df
        ;   Label: LAB_004179df
    MOV EAX,dword ptr [EBP + 0x14]      ; 004179e6
    INC EDI                             ; 004179e9
    ADD ECX,0xc                         ; 004179ea
    MOV EBX,dword ptr [EAX + 0x16c]     ; 004179ed
    MOV dword ptr [ESP + 0xa4],ECX      ; 004179f3
    CMP EDI,EBX                         ; 004179fa
    JL 0x004178d6                       ; 004179fc
        ;   XREF to: 004178d6 (CONDITIONAL_JUMP)  ; LAB_004178d6
    MOV EDX,dword ptr [ESP + 0x48]      ; 00417a02
        ;   Label: LAB_00417a02
    MOV ESI,dword ptr [ESP + 0x60]      ; 00417a06
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00417a0a
    MOV EDI,dword ptr [ESP + 0x64]      ; 00417a0e
    SUB EDX,ESI                         ; 00417a12
    SUB ECX,EDI                         ; 00417a14
    MOV EAX,EDX                         ; 00417a16
    CMP ECX,EDX                         ; 00417a18
    JLE 0x00417a1e                      ; 00417a1a
        ;   XREF to: 00417a1e (CONDITIONAL_JUMP)  ; LAB_00417a1e
    MOV EAX,ECX                         ; 00417a1c
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00417a1e
        ;   Label: LAB_00417a1e
    JGE 0x00417a62                      ; 00417a22
        ;   XREF to: 00417a62 (CONDITIONAL_JUMP)  ; LAB_00417a62
    LEA EDI,[ESP + 0x3c]                ; 00417a24
    LEA ESI,[ESP + 0x60]                ; 00417a28
    MOVSD ES:EDI,ESI                    ; 00417a2c
    MOVSD ES:EDI,ESI                    ; 00417a2d
    MOVSD ES:EDI,ESI                    ; 00417a2e
    LEA EDX,[ESP + 0x30]                ; 00417a2f
    LEA EDI,[ESP + 0x54]                ; 00417a33
    LEA ESI,[ESP + 0x48]                ; 00417a37
    MOV dword ptr [ESP + 0x7c],EAX      ; 00417a3b
    LEA EAX,[ESP + 0x6c]                ; 00417a3f
    MOVSD ES:EDI,ESI                    ; 00417a43
    MOVSD ES:EDI,ESI                    ; 00417a44
    MOVSD ES:EDI,ESI                    ; 00417a45
    CMP EDX,EAX                         ; 00417a46
    JZ 0x00417a62                       ; 00417a48
        ;   XREF to: 00417a62 (CONDITIONAL_JUMP)  ; LAB_00417a62
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00417a4a
    MOV dword ptr [ESP + 0x30],EAX      ; 00417a4e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00417a52
    MOV dword ptr [ESP + 0x34],EAX      ; 00417a56
    MOV EAX,dword ptr [ESP + 0x74]      ; 00417a5a
    MOV dword ptr [ESP + 0x38],EAX      ; 00417a5e
    MOV ECX,dword ptr [ESP]             ; 00417a62
        ;   Label: LAB_00417a62
    ADD ECX,0x2                         ; 00417a65
    MOV dword ptr [ESP],ECX             ; 00417a68
    CMP ECX,0x18                        ; 00417a6b
    JNZ 0x0041775b                      ; 00417a6e
        ;   XREF to: 0041775b (CONDITIONAL_JUMP)  ; LAB_0041775b
    MOV ESI,dword ptr [ESP + 0x78]      ; 00417a74
    ADD ESI,0x2                         ; 00417a78
    MOV dword ptr [ESP + 0x78],ESI      ; 00417a7b
    CMP ESI,ECX                         ; 00417a7f
    JNZ 0x0041774e                      ; 00417a81
        ;   XREF to: 0041774e (CONDITIONAL_JUMP)  ; LAB_0041774e
    MOV EDI,dword ptr [EBP + 0x18]      ; 00417a87
    LEA ESI,[ESP + 0x3c]                ; 00417a8a
    MOVSD ES:EDI,ESI                    ; 00417a8e
    MOVSD ES:EDI,ESI                    ; 00417a8f
    MOVSD ES:EDI,ESI                    ; 00417a90
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00417a91
    LEA ESI,[ESP + 0x54]                ; 00417a94
    LEA EAX,[ESP + 0x30]                ; 00417a98
    MOVSD ES:EDI,ESI                    ; 00417a9c
    MOVSD ES:EDI,ESI                    ; 00417a9d
    MOVSD ES:EDI,ESI                    ; 00417a9e
    PUSH EAX                            ; 00417a9f
    MOV ESI,dword ptr [EBP + 0x14]      ; 00417aa0
    PUSH ESI                            ; 00417aa3
    CALL core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 ; 00417aa4
        ;   XREF to: 00417320 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320()
    ADD ESP,0x8                         ; 00417aa9
    MOV ESP,EBP                         ; 00417aac
    POP EBP                             ; 00417aae
    POP EDI                             ; 00417aaf
    POP ESI                             ; 00417ab0
    POP EBX                             ; 00417ab1
    RET                                 ; 00417ab2
    MOV dword ptr [ESP + 0x60],EBX      ; 00417ab3
        ;   Label: LAB_00417ab3
    JMP 0x004179ad                      ; 00417ab7
        ;   XREF to: 004179ad (UNCONDITIONAL_JUMP)  ; LAB_004179ad

