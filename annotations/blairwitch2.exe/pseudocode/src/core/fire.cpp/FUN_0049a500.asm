; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049a500(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
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
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_FUN_0049c780 at 0049ca7c
;
; Referenced Globals:
;   undefined4 DAT_005d56d2
;   undefined4 DAT_005d56da
;   undefined4 DAT_005d56e2
;   undefined4 DAT_005d56ea
;   undefined4 DAT_005d56f2
;   undefined4 DAT_005d56fa
;   undefined4 DAT_005d5702
;   undefined4 DAT_005d570a
;   undefined4 DAT_005d570e
;   undefined4 DAT_005d5712
;   undefined4 DAT_005d5716
;   undefined4 DAT_005d571a
;   undefined4 DAT_005d571e
;   undefined4 DAT_005d5722
;   undefined4 DAT_005f64e4
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_matrix.c_FUN_0046b5e0
;   engine_matrix.c_FUN_0046b670
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a500
        ;   Label: core_fire.cpp_FUN_0049a500
    PUSH ESI                            ; 0049a501
    PUSH EDI                            ; 0049a502
    PUSH EBP                            ; 0049a503
    MOV EBP,ESP                         ; 0049a504
    SUB ESP,0xec                        ; 0049a506
    AND ESP,0xfffffff8                  ; 0049a50c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049a50f
    FLD float ptr [EAX]                 ; 0049a512
    FLDZ                                ; 0049a514
    FCOMPP                              ; 0049a516
    FNSTSW AX                           ; 0049a518
    SAHF                                ; 0049a51a
    JC 0x0049a524                       ; 0049a51b
        ;   XREF to: 0049a524 (CONDITIONAL_JUMP)  ; LAB_0049a524
    MOV ESP,EBP                         ; 0049a51d
    POP EBP                             ; 0049a51f
    POP EDI                             ; 0049a520
    POP ESI                             ; 0049a521
    POP EBX                             ; 0049a522
    RET                                 ; 0049a523
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049a524
        ;   Label: LAB_0049a524
    FLD float ptr [EAX + 0x1c]          ; 0049a527
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049a52a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xd8]        ; 0049a52f
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0049a536
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049a53d
    SUB EAX,EDX                         ; 0049a544
    SHL EAX,0x3                         ; 0049a546
    ADD EAX,0x1c3f3c8                   ; 0049a549
    PUSH EAX                            ; 0049a54e
    MOV EDX,dword ptr [0x0060b280]      ; 0049a54f | DAT_0060b280
    PUSH EDX                            ; 0049a555 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049a556
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049a55b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049a55e
    ADD EBX,0x4                         ; 0049a561
    PUSH EBX                            ; 0049a564
    MOV ECX,dword ptr [0x0060b280]      ; 0049a565 | DAT_0060b280
    PUSH ECX                            ; 0049a56b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0049a56c
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049a571
    MOV ESI,dword ptr [0x0060b280]      ; 0049a574 | DAT_0060b280
    PUSH ESI                            ; 0049a57a | DAT_01ba5c50
    LEA ESI,[ESP + 0x8c]                ; 0049a57b
    LEA EDI,[ESP + 0x74]                ; 0049a582
    CALL engine_matrix.c_FUN_0046b670   ; 0049a586
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b670()
    ADD ESP,0x4                         ; 0049a58b
    LEA ESI,[ESP + 0x88]                ; 0049a58e
    LEA EAX,[ESP + 0x70]                ; 0049a595
    PUSH 0x0                            ; 0049a599
    MOVSD ES:EDI,ESI                    ; 0049a59b
    MOVSD ES:EDI,ESI                    ; 0049a59c
    MOVSD ES:EDI,ESI                    ; 0049a59d
    PUSH EAX                            ; 0049a59e
    MOV EDI,dword ptr [0x0060b280]      ; 0049a59f | DAT_0060b280
    PUSH EDI                            ; 0049a5a5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0049a5a6
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049a5ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049a5ae
    FLD float ptr [0x005f6500]          ; 0049a5b1 | DAT_005f6500
    FLD ST0                             ; 0049a5b7
    FSUB float ptr [EAX]                ; 0049a5b9
    FDIVRP                              ; 0049a5bb
    FST float ptr [ESP + 0x14]          ; 0049a5bd
    FST double ptr [ESP]                ; 0049a5c1
    FMUL double ptr [0x005d56d2]        ; 0049a5c4 | DAT_005d56d2
    FLD double ptr [0x005d56da]         ; 0049a5ca | DAT_005d56da
    FXCH                                ; 0049a5d0
    FADD ST0,ST1                        ; 0049a5d2
    FSTP float ptr [ESP + 0x10]         ; 0049a5d4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049a5d8
    FLD double ptr [ESP]                ; 0049a5dc
    MOV dword ptr [ESP + 0xc],EAX       ; 0049a5df
    FCOMPP                              ; 0049a5e3
    FNSTSW AX                           ; 0049a5e5
    SAHF                                ; 0049a5e7
    JNC 0x0049a6d8                      ; 0049a5e8
        ;   XREF to: 0049a6d8 (CONDITIONAL_JUMP)  ; LAB_0049a6d8
    MOV EAX,[0x0060b280]                ; 0049a5ee | DAT_0060b280
    PUSH EAX                            ; 0049a5f3 | DAT_01ba5c50
    LEA ESI,[ESP + 0x68]                ; 0049a5f4
    LEA EDI,[ESP + 0xb0]                ; 0049a5f8
    CALL engine_matrix.c_FUN_0046b5e0   ; 0049a5ff
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b5e0()
    LEA ESI,[ESP + 0x68]                ; 0049a604
    ADD ESP,0x4                         ; 0049a608
    MOVSD ES:EDI,ESI                    ; 0049a60b
    MOVSD ES:EDI,ESI                    ; 0049a60c
    MOVSD ES:EDI,ESI                    ; 0049a60d
    FLD float ptr [ESP + 0xac]          ; 0049a60e
    FLD float ptr [ESP + 0xb0]          ; 0049a615
    FLD float ptr [ESP + 0xb4]          ; 0049a61c
    LEA EDI,[ESP + 0x7c]                ; 0049a623
    LEA ESI,[ESP + 0x40]                ; 0049a627
    FXCH ST2                            ; 0049a62b
    FSUB float ptr [EBX]                ; 0049a62d
    FXCH                                ; 0049a62f
    FSUB float ptr [EBX + 0x4]          ; 0049a631
    FXCH ST2                            ; 0049a634
    FSUB float ptr [EBX + 0x8]          ; 0049a636
    FXCH                                ; 0049a639
    FSTP float ptr [ESP + 0x40]         ; 0049a63b
    FXCH                                ; 0049a63f
    FSTP float ptr [ESP + 0x44]         ; 0049a641
    FSTP float ptr [ESP + 0x48]         ; 0049a645
    MOVSD ES:EDI,ESI                    ; 0049a649
    MOVSD ES:EDI,ESI                    ; 0049a64a
    MOVSD ES:EDI,ESI                    ; 0049a64b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049a64c
    FLD float ptr [ESP + 0x80]          ; 0049a64f
    FMUL float ptr [EDX + 0x14]         ; 0049a656
    FLD float ptr [ESP + 0x7c]          ; 0049a659
    FMUL float ptr [EDX + 0x10]         ; 0049a65d
    FADDP                               ; 0049a660
    FLD float ptr [ESP + 0x84]          ; 0049a662
    FMUL float ptr [EDX + 0x18]         ; 0049a669
    FADDP                               ; 0049a66c
    FABS                                ; 0049a66e
    FLD float ptr [ESP + 0x80]          ; 0049a670
    FMUL ST0                            ; 0049a677
    FLD float ptr [ESP + 0x7c]          ; 0049a679
    FMUL ST0                            ; 0049a67d
    FADDP                               ; 0049a67f
    FLD float ptr [ESP + 0x84]          ; 0049a681
    FMUL ST0                            ; 0049a688
    FADDP                               ; 0049a68a
    FSQRT                               ; 0049a68c
    FLD float ptr [EDX + 0x14]          ; 0049a68e
    FMUL ST0                            ; 0049a691
    FLD float ptr [EDX + 0x10]          ; 0049a693
    FMUL ST0                            ; 0049a696
    FADDP                               ; 0049a698
    FLD float ptr [EDX + 0x18]          ; 0049a69a
    FMUL ST0                            ; 0049a69d
    FADDP                               ; 0049a69f
    FSQRT                               ; 0049a6a1
    FMULP                               ; 0049a6a3
    FXCH                                ; 0049a6a5
    FSTP float ptr [ESP + 0x8]          ; 0049a6a7
    FDIVR float ptr [ESP + 0x8]         ; 0049a6ab
    FLD double ptr [ESP]                ; 0049a6af
    FMUL double ptr [0x005d56e2]        ; 0049a6b2 | DAT_005d56e2
    FLD1                                ; 0049a6b8
    FLD1                                ; 0049a6ba
    FSUBRP ST3,ST0                      ; 0049a6bc
    FSUBRP                              ; 0049a6be
    FMULP                               ; 0049a6c0
    FST float ptr [ESP + 0x8]           ; 0049a6c2
    FMUL double ptr [0x005d56ea]        ; 0049a6c6 | DAT_005d56ea
    FLD1                                ; 0049a6cc
    FADDP                               ; 0049a6ce
    FMUL float ptr [ESP + 0x10]         ; 0049a6d0
    FSTP float ptr [ESP + 0xc]          ; 0049a6d4
    FLD float ptr [0x005d56f2]          ; 0049a6d8 | DAT_005d56f2
        ;   Label: LAB_0049a6d8
    FLD float ptr [ESP + 0x10]          ; 0049a6de
    FMUL ST1                            ; 0049a6e2
    FLD float ptr [ESP + 0xc]           ; 0049a6e4
    FCHS                                ; 0049a6e8
    FMULP ST2                           ; 0049a6ea
    FMUL double ptr [0x005d56fa]        ; 0049a6ec | DAT_005d56fa
    FXCH                                ; 0049a6f2
    FMUL double ptr [0x005d56fa]        ; 0049a6f4 | DAT_005d56fa
    XOR EDX,EDX                         ; 0049a6fa
    LEA EBX,[ESP + 0xb8]                ; 0049a6fc
    MOV dword ptr [ESP + 0x60],EDX      ; 0049a703
    FSTP float ptr [ESP + 0xd8]         ; 0049a707
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049a70e
    MOV EDX,dword ptr [0x0060b280]      ; 0049a715 | DAT_0060b280
    MOV dword ptr [ESP + 0x58],EAX      ; 0049a71b
    LEA EAX,[ESP + 0x58]                ; 0049a71f
    FSTP float ptr [ESP + 0x5c]         ; 0049a723
    FLD float ptr [EAX]                 ; 0049a727
    FMUL float ptr [0x005f64e4]         ; 0049a729 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049a72f
    FLD float ptr [EAX + 0x4]           ; 0049a731
    FMUL float ptr [0x005f64e4]         ; 0049a734 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049a73a
    FLD float ptr [EAX + 0x8]           ; 0049a73d
    FMUL float ptr [0x005f64e4]         ; 0049a740 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049a746
    LEA EAX,[ESP + 0xb8]                ; 0049a749
    PUSH EAX                            ; 0049a750
    MOV EAX,dword ptr [EDX]             ; 0049a751 | DAT_01ba5c50
    PUSH EAX                            ; 0049a753
    CALL engine_special.cpp_FUN_0055d723 ; 0049a754
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049a759
    FLD float ptr [ESP + 0xc]           ; 0049a75c
    FMUL double ptr [0x005d5702]        ; 0049a760 | DAT_005d5702
    FMUL double ptr [0x005d56fa]        ; 0049a766 | DAT_005d56fa
    LEA EBX,[ESP + 0x94]                ; 0049a76c
    LEA EAX,[ESP + 0x58]                ; 0049a773
    MOV EDX,dword ptr [0x0060b280]      ; 0049a777 | DAT_0060b280
    FSTP float ptr [ESP + 0x58]         ; 0049a77d
    FLD float ptr [EAX]                 ; 0049a781
    FMUL float ptr [0x005f64e4]         ; 0049a783 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049a789
    FLD float ptr [EAX + 0x4]           ; 0049a78b
    FMUL float ptr [0x005f64e4]         ; 0049a78e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049a794
    FLD float ptr [EAX + 0x8]           ; 0049a797
    FMUL float ptr [0x005f64e4]         ; 0049a79a | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049a7a0
    LEA EAX,[ESP + 0x94]                ; 0049a7a3
    PUSH EAX                            ; 0049a7aa
    MOV EAX,dword ptr [EDX]             ; 0049a7ab | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049a7ad
    PUSH EAX                            ; 0049a7b0
    CALL engine_special.cpp_FUN_0055d723 ; 0049a7b1
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049a7b6
    FLD float ptr [ESP + 0x10]          ; 0049a7b9
    FCHS                                ; 0049a7bd
    FMUL double ptr [0x005d5702]        ; 0049a7bf | DAT_005d5702
    FMUL double ptr [0x005d56fa]        ; 0049a7c5 | DAT_005d56fa
    LEA EBX,[ESP + 0x4c]                ; 0049a7cb
    LEA EAX,[ESP + 0x58]                ; 0049a7cf
    MOV EDX,dword ptr [0x0060b280]      ; 0049a7d3 | DAT_0060b280
    FSTP float ptr [ESP + 0x5c]         ; 0049a7d9
    FLD float ptr [EAX]                 ; 0049a7dd
    FMUL float ptr [0x005f64e4]         ; 0049a7df | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049a7e5
    FLD float ptr [EAX + 0x4]           ; 0049a7e7
    FMUL float ptr [0x005f64e4]         ; 0049a7ea | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049a7f0
    FLD float ptr [EAX + 0x8]           ; 0049a7f3
    FMUL float ptr [0x005f64e4]         ; 0049a7f6 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049a7fc
    LEA EAX,[ESP + 0x4c]                ; 0049a7ff
    PUSH EAX                            ; 0049a803
    MOV EAX,dword ptr [EDX]             ; 0049a804 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049a806
    PUSH EAX                            ; 0049a809
    CALL engine_special.cpp_FUN_0055d723 ; 0049a80a
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049a80f
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049a812
    LEA EBX,[ESP + 0xa0]                ; 0049a819
    MOV dword ptr [ESP + 0x58],EAX      ; 0049a820
    LEA EAX,[ESP + 0x58]                ; 0049a824
    MOV EDX,dword ptr [0x0060b280]      ; 0049a828 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049a82e
    FMUL float ptr [0x005f64e4]         ; 0049a830 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049a836
    FLD float ptr [EAX + 0x4]           ; 0049a838
    FMUL float ptr [0x005f64e4]         ; 0049a83b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049a841
    FLD float ptr [EAX + 0x8]           ; 0049a844
    FMUL float ptr [0x005f64e4]         ; 0049a847 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049a84d
    LEA EAX,[ESP + 0xa0]                ; 0049a850
    PUSH EAX                            ; 0049a857
    MOV EAX,dword ptr [EDX]             ; 0049a858 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0049a85a
    PUSH EAX                            ; 0049a85f
    CALL engine_special.cpp_FUN_0055d723 ; 0049a860
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049a865
    FLD1                                ; 0049a868
    FLD float ptr [ESP + 0x14]          ; 0049a86a
    FLD float ptr [0x005d570e]          ; 0049a86e | DAT_005d570e
    FSUB ST0,ST1                        ; 0049a874
    FXCH ST2                            ; 0049a876
    FSUB ST0,ST1                        ; 0049a878
    FXCH ST2                            ; 0049a87a
    FMULP                               ; 0049a87c
    FXCH                                ; 0049a87e
    FMUL float ptr [0x005d570a]         ; 0049a880 | DAT_005d570a
    FLD ST1                             ; 0049a886
    FMUL float ptr [0x005d5716]         ; 0049a888 | DAT_005d5716
    FLD ST2                             ; 0049a88e
    FMUL float ptr [0x005d571e]         ; 0049a890 | DAT_005d571e
    MOV EDX,dword ptr [0x0060b280]      ; 0049a896 | DAT_0060b280
    FLD ST3                             ; 0049a89c
    FMUL float ptr [0x005d5722]         ; 0049a89e | DAT_005d5722
    MOV EAX,dword ptr [EDX]             ; 0049a8a4 | DAT_01ba5c50
    FLD1                                ; 0049a8a6
    MOV dword ptr [EAX + 0x18],0x20000  ; 0049a8a8
    FSUBRP ST5,ST0                      ; 0049a8af
    MOV EAX,dword ptr [EDX]             ; 0049a8b1 | DAT_01ba5c50
    FXCH ST4                            ; 0049a8b3
    FMUL float ptr [0x005d5712]         ; 0049a8b5 | DAT_005d5712
    MOV dword ptr [EAX + 0x1c],0x20000  ; 0049a8bb
    FXCH ST2                            ; 0049a8c2
    FADD ST0,ST2                        ; 0049a8c4
    MOV EAX,dword ptr [EDX]             ; 0049a8c6 | DAT_01ba5c50
    FLD float ptr [0x005d571a]          ; 0049a8c8 | DAT_005d571a
    FXCH                                ; 0049a8ce
    FMUL ST1                            ; 0049a8d0
    MOV dword ptr [EAX + 0x48],0xfe0000 ; 0049a8d2
    FXCH ST2                            ; 0049a8d9
    FADD ST0,ST3                        ; 0049a8db
    MOV EAX,dword ptr [EDX]             ; 0049a8dd | DAT_01ba5c50
    FMUL ST1                            ; 0049a8df
    MOV dword ptr [EAX + 0x4c],0x20000  ; 0049a8e1
    FXCH ST5                            ; 0049a8e8
    FADDP ST3,ST0                       ; 0049a8ea
    MOV EAX,dword ptr [EDX]             ; 0049a8ec | DAT_01ba5c50
    FMULP ST2                           ; 0049a8ee
    MOV dword ptr [EAX + 0x78],0xfe0000 ; 0049a8f0
    MOV EAX,dword ptr [EDX]             ; 0049a8f7 | DAT_01ba5c50
    FXCH ST2                            ; 0049a8f9
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049a8fb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV dword ptr [EAX + 0x7c],0xfe0000 ; 0049a900
    FXCH ST2                            ; 0049a907
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049a909
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [EDX]             ; 0049a90e
    FXCH ST3                            ; 0049a910
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049a912
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV dword ptr [EAX + 0xa8],0x20000  ; 0049a917
    FXCH                                ; 0049a921
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049a923
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [EDX]             ; 0049a928
    FXCH ST3                            ; 0049a92a
    FISTP dword ptr [ESP + 0xe4]        ; 0049a92c
    MOV dword ptr [EAX + 0xac],0xfe0000 ; 0049a933
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0049a93d
    MOV EBX,dword ptr [EDX]             ; 0049a944
    FISTP dword ptr [ESP + 0xdc]        ; 0049a946
    MOV dword ptr [EBX + 0x20],EAX      ; 0049a94d
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0049a950
    MOV EBX,dword ptr [EDX]             ; 0049a957
    FXCH                                ; 0049a959
    FISTP dword ptr [ESP + 0xe8]        ; 0049a95b
    MOV dword ptr [EBX + 0x24],EAX      ; 0049a962
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049a965
    MOV EBX,dword ptr [EDX]             ; 0049a96c
    FISTP dword ptr [ESP + 0xe0]        ; 0049a96e
    MOV dword ptr [EBX + 0x28],EAX      ; 0049a975
    MOV EBX,dword ptr [EDX]             ; 0049a978
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0049a97a
    MOV dword ptr [EBX + 0x2c],EAX      ; 0049a981
    MOV EBX,dword ptr [EDX]             ; 0049a984
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0049a986
    MOV dword ptr [EBX + 0x50],EAX      ; 0049a98d
    MOV EBX,dword ptr [EDX]             ; 0049a990
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0049a992
    MOV dword ptr [EBX + 0x54],EAX      ; 0049a999
    MOV EBX,dword ptr [EDX]             ; 0049a99c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049a99e
    MOV dword ptr [EBX + 0x58],EAX      ; 0049a9a5
    MOV EBX,dword ptr [EDX]             ; 0049a9a8
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0049a9aa
    MOV dword ptr [EBX + 0x5c],EAX      ; 0049a9b1
    MOV EBX,dword ptr [EDX]             ; 0049a9b4
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0049a9b6
    MOV dword ptr [EBX + 0x80],EAX      ; 0049a9bd
    MOV EBX,dword ptr [EDX]             ; 0049a9c3
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0049a9c5
    MOV dword ptr [EBX + 0x84],EAX      ; 0049a9cc
    MOV EBX,dword ptr [EDX]             ; 0049a9d2
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049a9d4
    MOV dword ptr [EBX + 0x88],EAX      ; 0049a9db
    MOV EBX,dword ptr [EDX]             ; 0049a9e1
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0049a9e3
    MOV dword ptr [EBX + 0x8c],EAX      ; 0049a9ea
    MOV EBX,dword ptr [EDX]             ; 0049a9f0
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0049a9f2
    MOV dword ptr [EBX + 0xb0],EAX      ; 0049a9f9
    MOV EBX,dword ptr [EDX]             ; 0049a9ff
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0049aa01
    MOV dword ptr [EBX + 0xb4],EAX      ; 0049aa08
    MOV EBX,dword ptr [EDX]             ; 0049aa0e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049aa10
    MOV dword ptr [EBX + 0xb8],EAX      ; 0049aa17
    MOV EBX,dword ptr [EDX]             ; 0049aa1d
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0049aa1f
    MOV ECX,0x4                         ; 0049aa26
    MOV dword ptr [EBX + 0xbc],EAX      ; 0049aa2b
    XOR EBX,EBX                         ; 0049aa31
    MOV ESI,0x2                         ; 0049aa33
    MOV dword ptr [ESP + 0x2c],EBX      ; 0049aa38
    MOV dword ptr [ESP + 0x28],EBX      ; 0049aa3c
    MOV dword ptr [ESP + 0x24],EBX      ; 0049aa40
    MOV dword ptr [ESP + 0x20],EBX      ; 0049aa44
    MOV dword ptr [ESP + 0x30],EBX      ; 0049aa48
    MOV EBX,0x1                         ; 0049aa4c
    MOV EDI,0x3                         ; 0049aa51
    PUSH EBX                            ; 0049aa56
    MOV dword ptr [ESP + 0x20],ECX      ; 0049aa57
    MOV dword ptr [ESP + 0x3c],ESI      ; 0049aa5b
    PUSH EDX                            ; 0049aa5f
    MOV dword ptr [ESP + 0x44],EDI      ; 0049aa60
    MOV dword ptr [ESP + 0x3c],EBX      ; 0049aa64
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049aa68
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049aa6d
    LEA EAX,[ESP + 0x18]                ; 0049aa70
    PUSH EAX                            ; 0049aa74
    MOV EAX,[0x0060b280]                ; 0049aa75 | DAT_0060b280
    PUSH EAX                            ; 0049aa7a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0049aa7b
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049aa80
    PUSH 0x0                            ; 0049aa83
    MOV EDX,dword ptr [0x0060b280]      ; 0049aa85 | DAT_0060b280
    PUSH EDX                            ; 0049aa8b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049aa8c
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049aa91
    MOV ECX,dword ptr [0x0060b280]      ; 0049aa94 | DAT_0060b280
    PUSH ECX                            ; 0049aa9a | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0049aa9b
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049aaa0
    MOV ESP,EBP                         ; 0049aaa3
    POP EBP                             ; 0049aaa5
    POP EDI                             ; 0049aaa6
    POP ESI                             ; 0049aaa7
    POP EBX                             ; 0049aaa8
    RET                                 ; 0049aaa9

