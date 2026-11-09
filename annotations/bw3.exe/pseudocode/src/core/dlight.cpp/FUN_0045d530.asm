; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_FUN_0045d530(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
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
; undefined        Stack[-0x7c]:1  local_7c
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 005364d2
;
; Referenced Globals:
;   undefined4 DAT_005bb49c
;   undefined4 DAT_005bb4a4
;   undefined4 DAT_005de4f0
;   undefined4 DAT_005f2858
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;
; Called Functions:
;   core_dlight.cpp_FUN_0045dea0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_matrix.c_FUN_0046d1a0
;   engine_matrix.c_FUN_0046d250
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d530
        ;   Label: core_dlight.cpp_FUN_0045d530
    PUSH ESI                            ; 0045d531
    PUSH EDI                            ; 0045d532
    PUSH EBP                            ; 0045d533
    MOV EBP,ESP                         ; 0045d534
    SUB ESP,0xe4                        ; 0045d536
    AND ESP,0xfffffff8                  ; 0045d53c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d53f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0045d542
    JNZ 0x0045d561                      ; 0045d549
        ;   XREF to: 0045d561 (CONDITIONAL_JUMP)  ; LAB_0045d561
    MOV ESP,EBP                         ; 0045d54b
    POP EBP                             ; 0045d54d
    POP EDI                             ; 0045d54e
    POP ESI                             ; 0045d54f
    POP EBX                             ; 0045d550
    LEA EAX,[EAX]                       ; 0045d551
    LEA EDX,[EDX]                       ; 0045d557
    LEA EAX,[EAX]                       ; 0045d55d
    LEA EBX,[EAX + 0x4]                 ; 0045d561
        ;   Label: LAB_0045d561
    PUSH EBX                            ; 0045d564
    MOV ECX,dword ptr [0x005f2afc]      ; 0045d565 | DAT_005f2afc
    PUSH ECX                            ; 0045d56b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045d56c
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045d571
    MOV ESI,dword ptr [0x005f2afc]      ; 0045d574 | DAT_005f2afc
    PUSH ESI                            ; 0045d57a | DAT_01bdd7e4
    LEA ESI,[ESP + 0x8c]                ; 0045d57b
    LEA EDI,[ESP + 0x50]                ; 0045d582
    CALL engine_matrix.c_FUN_0046d250   ; 0045d586
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d250()
    ADD ESP,0x4                         ; 0045d58b
    LEA ESI,[ESP + 0x88]                ; 0045d58e
    LEA EAX,[ESP + 0x4c]                ; 0045d595
    PUSH 0x0                            ; 0045d599
    MOVSD ES:EDI,ESI                    ; 0045d59b
    MOVSD ES:EDI,ESI                    ; 0045d59c
    MOVSD ES:EDI,ESI                    ; 0045d59d
    PUSH EAX                            ; 0045d59e
    MOV EDI,dword ptr [0x005f2afc]      ; 0045d59f | DAT_005f2afc
    PUSH EDI                            ; 0045d5a5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0045d5a6
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0045d5ab
    MOV EAX,[0x005f2afc]                ; 0045d5ae | DAT_005f2afc
    PUSH EAX                            ; 0045d5b3 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x80]                ; 0045d5b4
    LEA EDI,[ESP + 0x98]                ; 0045d5bb
    CALL engine_matrix.c_FUN_0046d1a0   ; 0045d5c2
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d1a0()
    LEA ESI,[ESP + 0x80]                ; 0045d5c7
    ADD ESP,0x4                         ; 0045d5ce
    MOVSD ES:EDI,ESI                    ; 0045d5d1
    MOVSD ES:EDI,ESI                    ; 0045d5d2
    MOVSD ES:EDI,ESI                    ; 0045d5d3
    MOV EAX,dword ptr [ESP + 0x94]      ; 0045d5d4
    MOV dword ptr [ESP + 0xe0],EAX      ; 0045d5db
    FILD dword ptr [ESP + 0xe0]         ; 0045d5e2
    MOV EAX,dword ptr [ESP + 0x98]      ; 0045d5e9
    FLD double ptr [0x005bb49c]         ; 0045d5f0 | DAT_005bb49c
    FXCH                                ; 0045d5f6
    FMUL ST1                            ; 0045d5f8
    MOV dword ptr [ESP + 0xe0],EAX      ; 0045d5fa
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0045d601
    FILD dword ptr [ESP + 0xe0]         ; 0045d608
    MOV dword ptr [ESP + 0xe0],EAX      ; 0045d60f
    FMUL ST2                            ; 0045d616
    FILD dword ptr [ESP + 0xe0]         ; 0045d618
    FMULP ST3                           ; 0045d61f
    LEA EDX,[ESP + 0x58]                ; 0045d621
    FLD float ptr [EBX]                 ; 0045d625
    FLD float ptr [EBX + 0x4]           ; 0045d627
    FLD float ptr [EBX + 0x8]           ; 0045d62a
    LEA EDI,[ESP + 0xb8]                ; 0045d62d
    LEA ESI,[ESP + 0x64]                ; 0045d634
    FXCH ST4                            ; 0045d638
    FSTP float ptr [ESP + 0x70]         ; 0045d63a
    FXCH                                ; 0045d63e
    FSUB float ptr [ESP + 0x70]         ; 0045d640
    FXCH ST2                            ; 0045d644
    FSTP float ptr [ESP + 0x74]         ; 0045d646
    FXCH                                ; 0045d64a
    FSTP float ptr [ESP + 0x64]         ; 0045d64c
    LEA EAX,[ESP + 0xb8]                ; 0045d650
    FSUB float ptr [ESP + 0x74]         ; 0045d657
    FXCH ST2                            ; 0045d65b
    FSTP float ptr [ESP + 0x78]         ; 0045d65d
    FSUB float ptr [ESP + 0x78]         ; 0045d661
    FXCH                                ; 0045d665
    FSTP float ptr [ESP + 0x68]         ; 0045d667
    FSTP float ptr [ESP + 0x6c]         ; 0045d66b
    MOVSD ES:EDI,ESI                    ; 0045d66f
    MOVSD ES:EDI,ESI                    ; 0045d670
    MOVSD ES:EDI,ESI                    ; 0045d671
    CMP EDX,EAX                         ; 0045d672
    JZ 0x0045d697                       ; 0045d674
        ;   XREF to: 0045d697 (CONDITIONAL_JUMP)  ; LAB_0045d697
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0045d676
    MOV dword ptr [ESP + 0x58],EAX      ; 0045d67d
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0045d681
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045d688
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0045d68c
    MOV dword ptr [ESP + 0x60],EAX      ; 0045d693
    FLD float ptr [ESP + 0x5c]          ; 0045d697
        ;   Label: LAB_0045d697
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d69b
    FMUL float ptr [ESP + 0x5c]         ; 0045d69e
    MOV EAX,dword ptr [EAX + 0x18]      ; 0045d6a2
    FLD float ptr [ESP + 0x58]          ; 0045d6a5
    FMUL ST0                            ; 0045d6a9
    MOV dword ptr [ESP + 0xac],EAX      ; 0045d6ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d6b2
    FADDP                               ; 0045d6b5
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045d6b7
    FLD float ptr [ESP + 0x60]          ; 0045d6ba
    MOV dword ptr [ESP + 0xb0],EAX      ; 0045d6be
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d6c5
    FMUL float ptr [ESP + 0x60]         ; 0045d6c8
    MOV EAX,dword ptr [EAX + 0x30]      ; 0045d6cc
    FADDP                               ; 0045d6cf
    MOV dword ptr [ESP + 0xb4],EAX      ; 0045d6d1
    FSQRT                               ; 0045d6d8
    FLDZ                                ; 0045d6da
    FXCH                                ; 0045d6dc
    FSTP float ptr [ESP + 0xdc]         ; 0045d6de
    FCOMP float ptr [ESP + 0xdc]        ; 0045d6e5
    FNSTSW AX                           ; 0045d6ec
    SAHF                                ; 0045d6ee
    JNC 0x0045dada                      ; 0045d6ef
        ;   XREF to: 0045dada (CONDITIONAL_JUMP)  ; LAB_0045dada
    FLD1                                ; 0045d6f5
    FLD float ptr [ESP + 0x58]          ; 0045d6f7
    FXCH                                ; 0045d6fb
    FDIV float ptr [ESP + 0xdc]         ; 0045d6fd
    FXCH                                ; 0045d704
    FMUL ST1                            ; 0045d706
    FLD float ptr [ESP + 0x5c]          ; 0045d708
    FMUL ST2                            ; 0045d70c
    FLD float ptr [ESP + 0x60]          ; 0045d70e
    FMULP ST3                           ; 0045d712
    FXCH                                ; 0045d714
    FSTP float ptr [ESP + 0x58]         ; 0045d716
    FSTP float ptr [ESP + 0x5c]         ; 0045d71a
    FSTP float ptr [ESP + 0x60]         ; 0045d71e
    MOV EAX,[0x01c6e24c]                ; 0045d722 | DAT_01c6e24c
        ;   Label: LAB_0045d722
    MOV EDX,EAX                         ; 0045d727
    SAR EDX,0x1f                        ; 0045d729
    SUB EAX,EDX                         ; 0045d72c
    SAR EAX,0x1                         ; 0045d72e
    FLD float ptr [ESP + 0x5c]          ; 0045d730
    FMUL float ptr [ESP + 0xb0]         ; 0045d734
    FLD float ptr [ESP + 0x58]          ; 0045d73b
    FMUL float ptr [ESP + 0xac]         ; 0045d73f
    FADDP                               ; 0045d746
    FLD float ptr [ESP + 0x60]          ; 0045d748
    FMUL float ptr [ESP + 0xb4]         ; 0045d74c
    FADDP                               ; 0045d753
    FCHS                                ; 0045d755
    FST float ptr [ESP + 0xd0]          ; 0045d757
    FMUL float ptr [ESP + 0xd0]         ; 0045d75e
    FMUL float ptr [ESP + 0xd0]         ; 0045d765
    FMUL float ptr [ESP + 0xd0]         ; 0045d76c
    FMUL double ptr [0x005bb4a4]        ; 0045d773 | DAT_005bb4a4
    MOV EDX,0xffff                      ; 0045d779
    CALL crt_math.c_round_FUN_005a3120  ; 0045d77e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    SUB EDX,EAX                         ; 0045d783
    FISTP dword ptr [ESP + 0xd8]        ; 0045d785
    MOV EAX,EDX                         ; 0045d78c
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0045d78e
    IMUL EDX                            ; 0045d795
    SHRD EAX,EDX,0x10                   ; 0045d797
    FLDZ                                ; 0045d79b
    MOV ESI,EAX                         ; 0045d79d
    FCOMP float ptr [ESP + 0xd0]        ; 0045d79f
    FNSTSW AX                           ; 0045d7a6
    SAHF                                ; 0045d7a8
    JNC 0x0045daa8                      ; 0045d7a9
        ;   XREF to: 0045daa8 (CONDITIONAL_JUMP)  ; LAB_0045daa8
    MOV EDI,0x40000000                  ; 0045d7af
    MOV EDX,0xbf000000                  ; 0045d7b4
    LEA EBX,[ESP + 0x28]                ; 0045d7b9
    LEA EAX,[ESP + 0xa0]                ; 0045d7bd
    MOV dword ptr [ESP + 0xa0],EDI      ; 0045d7c4
    MOV dword ptr [ESP + 0xa4],EDI      ; 0045d7cb
    MOV dword ptr [ESP + 0xa8],EDX      ; 0045d7d2
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d7d9 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0045d7df
    FMUL float ptr [0x005de4f0]         ; 0045d7e1 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045d7e7
    FLD float ptr [EAX + 0x4]           ; 0045d7e9
    FMUL float ptr [0x005de4f0]         ; 0045d7ec | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045d7f2
    FLD float ptr [EAX + 0x8]           ; 0045d7f5
    FMUL float ptr [0x005de4f0]         ; 0045d7f8 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045d7fe
    LEA EAX,[ESP + 0x28]                ; 0045d801
    PUSH EAX                            ; 0045d805
    MOV EAX,dword ptr [EDX]             ; 0045d806 | DAT_01bdd7e4
    PUSH EAX                            ; 0045d808
    CALL engine_special.cpp_FUN_005632a3 ; 0045d809
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xc0000000                  ; 0045d80e
    LEA EBX,[ESP + 0x48]                ; 0045d813
    LEA EAX,[ESP + 0xa8]                ; 0045d817
    ADD ESP,0x8                         ; 0045d81e
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d821 | DAT_005f2afc
    MOV dword ptr [ESP + 0xa4],EDI      ; 0045d827
    MOV EDI,0xbf000000                  ; 0045d82e
    MOV dword ptr [ESP + 0xa0],ECX      ; 0045d833
    MOV dword ptr [ESP + 0xa8],EDI      ; 0045d83a
    FLD float ptr [EAX]                 ; 0045d841
    FMUL float ptr [0x005de4f0]         ; 0045d843 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045d849
    FLD float ptr [EAX + 0x4]           ; 0045d84b
    FMUL float ptr [0x005de4f0]         ; 0045d84e | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045d854
    FLD float ptr [EAX + 0x8]           ; 0045d857
    FMUL float ptr [0x005de4f0]         ; 0045d85a | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045d860
    LEA EAX,[ESP + 0x40]                ; 0045d863
    PUSH EAX                            ; 0045d867
    MOV EAX,dword ptr [EDX]             ; 0045d868 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0045d86a
    PUSH EAX                            ; 0045d86d
    CALL engine_special.cpp_FUN_005632a3 ; 0045d86e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xc0000000                  ; 0045d873
    LEA EBX,[ESP + 0x3c]                ; 0045d878
    ADD ESP,0x8                         ; 0045d87c
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d87f | DAT_005f2afc
    MOV dword ptr [ESP + 0xa0],EAX      ; 0045d885
    MOV dword ptr [ESP + 0xa4],EAX      ; 0045d88c
    LEA EAX,[ESP + 0xa0]                ; 0045d893
    MOV dword ptr [ESP + 0xa8],EDI      ; 0045d89a
    FLD float ptr [EAX]                 ; 0045d8a1
    FMUL float ptr [0x005de4f0]         ; 0045d8a3 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045d8a9
    FLD float ptr [EAX + 0x4]           ; 0045d8ab
    FMUL float ptr [0x005de4f0]         ; 0045d8ae | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045d8b4
    FLD float ptr [EAX + 0x8]           ; 0045d8b7
    FMUL float ptr [0x005de4f0]         ; 0045d8ba | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045d8c0
    LEA EAX,[ESP + 0x34]                ; 0045d8c3
    PUSH EAX                            ; 0045d8c7
    MOV EAX,dword ptr [EDX]             ; 0045d8c8 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0045d8ca
    PUSH EAX                            ; 0045d8cd
    MOV EDI,0xc0000000                  ; 0045d8ce
    CALL engine_special.cpp_FUN_005632a3 ; 0045d8d3
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x40000000                  ; 0045d8d8
    MOV EAX,0xbf000000                  ; 0045d8dd
    ADD ESP,0x8                         ; 0045d8e2
    MOV EDX,dword ptr [0x005f2afc]      ; 0045d8e5 | DAT_005f2afc
    MOV dword ptr [ESP + 0xa0],EBX      ; 0045d8eb
    MOV dword ptr [ESP + 0xa8],EAX      ; 0045d8f2
    LEA EBX,[ESP + 0xc4]                ; 0045d8f9
    LEA EAX,[ESP + 0xa0]                ; 0045d900
    MOV dword ptr [ESP + 0xa4],EDI      ; 0045d907
    FLD float ptr [EAX]                 ; 0045d90e
    FMUL float ptr [0x005de4f0]         ; 0045d910 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045d916
    FLD float ptr [EAX + 0x4]           ; 0045d918
    FMUL float ptr [0x005de4f0]         ; 0045d91b | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045d921
    FLD float ptr [EAX + 0x8]           ; 0045d924
    FMUL float ptr [0x005de4f0]         ; 0045d927 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045d92d
    LEA EAX,[ESP + 0xc4]                ; 0045d930
    PUSH EAX                            ; 0045d937
    MOV EAX,dword ptr [EDX]             ; 0045d938 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0045d93a
    PUSH EAX                            ; 0045d93f
    CALL engine_special.cpp_FUN_005632a3 ; 0045d940
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045d945
    MOV EAX,[0x005f2afc]                ; 0045d948 | DAT_005f2afc
    MOV EBX,dword ptr [EAX]             ; 0045d94d | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x18],0xf80000 ; 0045d94f
    MOV EBX,dword ptr [EAX]             ; 0045d956 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 0045d958
    MOV EBX,dword ptr [EAX]             ; 0045d95f | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x2c],ESI      ; 0045d961
    MOV EBX,dword ptr [EAX]             ; 0045d964 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x48],0x80000  ; 0045d966
    MOV EDX,dword ptr [EAX]             ; 0045d96d | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0045d96f
    MOV EDX,dword ptr [EAX]             ; 0045d976 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x5c],ESI      ; 0045d978
    MOV EBX,dword ptr [EAX]             ; 0045d97b | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x78],0x80000  ; 0045d97d
    MOV EBX,dword ptr [EAX]             ; 0045d984 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0045d986
    MOV EBX,dword ptr [EAX]             ; 0045d98d | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x8c],ESI      ; 0045d98f
    MOV EBX,dword ptr [EAX]             ; 0045d995 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xa8],0xf80000 ; 0045d997
    MOV EDX,dword ptr [EAX]             ; 0045d9a1 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xac],0x80000  ; 0045d9a3
    MOV EDX,dword ptr [EAX]             ; 0045d9ad | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xbc],ESI      ; 0045d9af
    MOV EBX,dword ptr [EAX]             ; 0045d9b5 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x20],0xffff   ; 0045d9b7
    MOV EDX,dword ptr [EAX]             ; 0045d9be | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x24],0xffff   ; 0045d9c0
    MOV EDX,dword ptr [EAX]             ; 0045d9c7 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x28],0xffff   ; 0045d9c9
    MOV EBX,dword ptr [EAX]             ; 0045d9d0 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x50],0xffff   ; 0045d9d2
    MOV EDX,dword ptr [EAX]             ; 0045d9d9 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x54],0xffff   ; 0045d9db
    MOV EDX,dword ptr [EAX]             ; 0045d9e2 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x58],0xffff   ; 0045d9e4
    MOV EDX,dword ptr [EAX]             ; 0045d9eb | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x80],0xffff   ; 0045d9ed
    MOV EDX,dword ptr [EAX]             ; 0045d9f7 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x84],0xffff   ; 0045d9f9
    MOV EDX,dword ptr [EAX]             ; 0045da03 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x88],0xffff   ; 0045da05
    MOV EBX,dword ptr [EAX]             ; 0045da0f | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0045da11
    MOV EDX,dword ptr [EAX]             ; 0045da1b | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xb4],0xffff   ; 0045da1d
    PUSH 0x5f2858                       ; 0045da27 | DAT_005f2858
    MOV EDX,dword ptr [EAX]             ; 0045da2c | DAT_01bdd7e4
    PUSH EAX                            ; 0045da2e | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xb8],0xffff   ; 0045da2f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0045da39
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0045da3e
    PUSH 0x1                            ; 0045da41
    MOV EDX,dword ptr [0x005f2afc]      ; 0045da43 | DAT_005f2afc
    MOV EDI,0xffff0001                  ; 0045da49
    PUSH EDX                            ; 0045da4e | DAT_01bdd7e4
    MOV ESI,0x3                         ; 0045da4f
    XOR EBX,EBX                         ; 0045da54
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045da56
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    MOV ECX,0x4                         ; 0045da5b
    ADD ESP,0x8                         ; 0045da60
    MOV EAX,0xfffe0002                  ; 0045da63
    MOV dword ptr [ESP + 0x4],ECX       ; 0045da68
    MOV dword ptr [ESP + 0x8],EBX       ; 0045da6c
    MOV dword ptr [ESP + 0xc],EBX       ; 0045da70
    MOV dword ptr [ESP + 0x10],EDI      ; 0045da74
    MOV dword ptr [ESP + 0x14],EAX      ; 0045da78
    MOV dword ptr [ESP + 0x18],EBX      ; 0045da7c
    MOV dword ptr [ESP + 0x24],ESI      ; 0045da80
    MOV EAX,ESP                         ; 0045da84
    MOV ECX,0x1                         ; 0045da86
    PUSH EAX                            ; 0045da8b
    MOV EDI,dword ptr [0x005f2afc]      ; 0045da8c | DAT_005f2afc
    MOV EBX,0x2                         ; 0045da92
    PUSH EDI                            ; 0045da97 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x24],ECX      ; 0045da98
    MOV dword ptr [ESP + 0x28],EBX      ; 0045da9c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0045daa0
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045daa5
    PUSH 0x0                            ; 0045daa8
        ;   Label: LAB_0045daa8
    MOV EAX,[0x005f2afc]                ; 0045daaa | DAT_005f2afc
    PUSH EAX                            ; 0045daaf | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045dab0
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0045dab5
    MOV EDX,dword ptr [0x005f2afc]      ; 0045dab8 | DAT_005f2afc
    PUSH EDX                            ; 0045dabe | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0045dabf
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0045dac4
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045dac7
    PUSH ECX                            ; 0045daca
    CALL core_dlight.cpp_FUN_0045dea0   ; 0045dacb
        ;   XREF to: 0045dea0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_FUN_0045dea0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0045dad0
    MOV ESP,EBP                         ; 0045dad3
    POP EBP                             ; 0045dad5
    POP EDI                             ; 0045dad6
    POP ESI                             ; 0045dad7
    POP EBX                             ; 0045dad8
    RET                                 ; 0045dad9
    XOR EDX,EDX                         ; 0045dada
        ;   Label: LAB_0045dada
    MOV dword ptr [ESP + 0x5c],EDX      ; 0045dadc
    MOV dword ptr [ESP + 0x58],EDX      ; 0045dae0
    MOV dword ptr [ESP + 0x60],EDX      ; 0045dae4
    JMP 0x0045d722                      ; 0045dae8
        ;   XREF to: 0045d722 (UNCONDITIONAL_JUMP)  ; LAB_0045d722

