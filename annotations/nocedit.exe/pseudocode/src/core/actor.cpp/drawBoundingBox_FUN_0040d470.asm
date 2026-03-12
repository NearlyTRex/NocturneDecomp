; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   bbox
; int              Stack[0x8]:4   line_color
; Local Variables:
; CVector3f        Stack[-0x130]:12  local_130
; CVector3i        Stack[-0x124]:12  local_124
; CVector3i        Stack[-0x118]:12  local_118
; float            Stack[-0x10c]:4  local_10c
; float            Stack[-0x108]:4  local_108
; float            Stack[-0x104]:4  local_104
; float            Stack[-0x100]:4  local_100
; float            Stack[-0xfc]:4  local_fc
; float            Stack[-0xf8]:4  local_f8
; float            Stack[-0xf4]:4  local_f4
; float            Stack[-0xf0]:4  local_f0
; float            Stack[-0xec]:4  local_ec
; float            Stack[-0xe8]:4  local_e8
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; CVector3f        Stack[-0xdc]:12  local_dc
; CVector3f        Stack[-0xd0]:12  local_d0
; CVector3f        Stack[-0xc4]:12  local_c4
; CVector3i        Stack[-0xb8]:12  local_b8
; CVector3f        Stack[-0xac]:12  local_ac
; CVector3f        Stack[-0xa0]:12  local_a0
; CVector3i        Stack[-0x94]:12  local_94
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   float FLOAT_00614454 = 0.2000000
;   float FLOAT_00614458 = 0.8000000
;   float FLOAT_006597b0 = 256
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d470
        ;   Label: core_actor.cpp_drawBoundingBox_FUN_0040d470
    PUSH ESI                            ; 0040d471
    PUSH EDI                            ; 0040d472
    PUSH EBP                            ; 0040d473
    SUB ESP,0x120                       ; 0040d474
    MOV EAX,dword ptr [ESP + 0x138]     ; 0040d47a
    XOR EBP,EBP                         ; 0040d481
    MOV [0x02d02570],EAX                ; 0040d483 | g_ActiveRenderColor
    MOV EAX,EBP                         ; 0040d488
        ;   Label: LAB_0040d488
    XOR AL,0x1                          ; 0040d48a
    PUSH EAX                            ; 0040d48c
    LEA EAX,[ESP + 0x64]                ; 0040d48d
    PUSH EAX                            ; 0040d491
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0040d492
    PUSH EDX                            ; 0040d499
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d49a
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040d49f
    PUSH EBP                            ; 0040d4a2
    MOV EBX,EAX                         ; 0040d4a3
    LEA EAX,[ESP + 0x58]                ; 0040d4a5
    PUSH EAX                            ; 0040d4a9
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0040d4aa
    PUSH ECX                            ; 0040d4b1
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d4b2
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    MOV EDX,EAX                         ; 0040d4b7
    ADD ESP,0xc                         ; 0040d4b9
    MOV EAX,dword ptr [EAX]             ; 0040d4bc
    MOV dword ptr [ESP + 0xcc],EAX      ; 0040d4be
    LEA EAX,[EDX + 0x4]                 ; 0040d4c5
    MOV EAX,dword ptr [EAX]             ; 0040d4c8
    MOV dword ptr [ESP + 0xd0],EAX      ; 0040d4ca
    LEA EAX,[EDX + 0x8]                 ; 0040d4d1
    MOV EAX,dword ptr [EAX]             ; 0040d4d4
    MOV dword ptr [ESP + 0xd4],EAX      ; 0040d4d6
    FLD float ptr [0x00614454]          ; 0040d4dd | FLOAT_00614454
    FLD float ptr [EBX]                 ; 0040d4e3
    FMUL ST1                            ; 0040d4e5
    FSTP float ptr [ESP + 0x24]         ; 0040d4e7
    FLD float ptr [EBX + 0x4]           ; 0040d4eb
    FMUL ST1                            ; 0040d4ee
    FSTP float ptr [ESP + 0x28]         ; 0040d4f0
    FMUL float ptr [EBX + 0x8]          ; 0040d4f4
    FSTP float ptr [ESP + 0x2c]         ; 0040d4f7
    FLD float ptr [0x00614458]          ; 0040d4fb | FLOAT_00614458
    FLD float ptr [EDX]                 ; 0040d501
    FMUL ST1                            ; 0040d503
    FSTP float ptr [ESP + 0xe4]         ; 0040d505
    FLD float ptr [EDX + 0x4]           ; 0040d50c
    FMUL ST1                            ; 0040d50f
    FSTP float ptr [ESP + 0xe8]         ; 0040d511
    FMUL float ptr [EDX + 0x8]          ; 0040d518
    LEA EAX,[ESP + 0xcc]                ; 0040d51b
    LEA EBX,[ESP + 0x114]               ; 0040d522
    FLD float ptr [ESP + 0xe4]          ; 0040d529
    FADD float ptr [ESP + 0x24]         ; 0040d530
    FLD float ptr [ESP + 0xe8]          ; 0040d534
    FXCH                                ; 0040d53b
    FSTP float ptr [ESP + 0x48]         ; 0040d53d
    MOV EDX,dword ptr [0x006703e8]      ; 0040d541 | g_CDemonRendererPtr1
    FADD float ptr [ESP + 0x28]         ; 0040d547
    FXCH                                ; 0040d54b
    FST float ptr [ESP + 0xec]          ; 0040d54d
    FADD float ptr [ESP + 0x2c]         ; 0040d554
    FXCH                                ; 0040d558
    FSTP float ptr [ESP + 0x4c]         ; 0040d55a
    FSTP float ptr [ESP + 0x50]         ; 0040d55e
    FLD float ptr [EAX]                 ; 0040d562
    FMUL float ptr [0x006597b0]         ; 0040d564 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d56a
    FLD float ptr [EAX + 0x4]           ; 0040d56c
    FMUL float ptr [0x006597b0]         ; 0040d56f | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d575
    FLD float ptr [EAX + 0x8]           ; 0040d578
    FMUL float ptr [0x006597b0]         ; 0040d57b | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d581
    LEA EAX,[ESP + 0x114]               ; 0040d584
    PUSH EAX                            ; 0040d58b
    MOV EAX,dword ptr [EDX]             ; 0040d58c | g_CDemonRendererInstance
    PUSH EAX                            ; 0040d58e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d58f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x14]                ; 0040d594
    ADD ESP,0x8                         ; 0040d598
    LEA EAX,[ESP + 0x48]                ; 0040d59b
    MOV EDX,dword ptr [0x006703e8]      ; 0040d59f | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 0040d5a5
    FMUL float ptr [0x006597b0]         ; 0040d5a7 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d5ad
    FLD float ptr [EAX + 0x4]           ; 0040d5af
    FMUL float ptr [0x006597b0]         ; 0040d5b2 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d5b8
    FLD float ptr [EAX + 0x8]           ; 0040d5bb
    FMUL float ptr [0x006597b0]         ; 0040d5be | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d5c4
    LEA EAX,[ESP + 0xc]                 ; 0040d5c7
    PUSH EAX                            ; 0040d5cb
    MOV EAX,dword ptr [EDX]             ; 0040d5cc | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 0040d5ce
    PUSH EAX                            ; 0040d5d1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d5d2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040d5d7
    MOV EAX,[0x006703e8]                ; 0040d5da | g_CDemonRendererPtr1
    SUB ESP,0x30                        ; 0040d5df
    MOV EAX,dword ptr [EAX]             ; 0040d5e2 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0040d5e4
    MOV EDI,ESP                         ; 0040d5e9
    LEA ESI,[EAX + 0x30]                ; 0040d5eb
    MOVSD.REP ES:EDI,ESI                ; 0040d5ee
    SUB ESP,0x30                        ; 0040d5f0
    MOV ECX,0xc                         ; 0040d5f3
    MOV EDI,ESP                         ; 0040d5f8
    MOV ESI,EAX                         ; 0040d5fa
    MOVSD.REP ES:EDI,ESI                ; 0040d5fc
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040d5fe
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,EBP                         ; 0040d603
    ADD ESP,0x60                        ; 0040d605
    XOR AL,0x2                          ; 0040d608
    PUSH EAX                            ; 0040d60a
    LEA EAX,[ESP + 0x4]                 ; 0040d60b
    PUSH EAX                            ; 0040d60f
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0040d610
    PUSH EBX                            ; 0040d617
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d618
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040d61d
    PUSH EBP                            ; 0040d620
    MOV EBX,EAX                         ; 0040d621
    LEA EAX,[ESP + 0x70]                ; 0040d623
    PUSH EAX                            ; 0040d627
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0040d628
    PUSH ESI                            ; 0040d62f
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d630
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    MOV EDX,EAX                         ; 0040d635
    ADD ESP,0xc                         ; 0040d637
    MOV EAX,dword ptr [EAX]             ; 0040d63a
    MOV dword ptr [ESP + 0xb4],EAX      ; 0040d63c
    LEA EAX,[EDX + 0x4]                 ; 0040d643
    MOV EAX,dword ptr [EAX]             ; 0040d646
    MOV dword ptr [ESP + 0xb8],EAX      ; 0040d648
    LEA EAX,[EDX + 0x8]                 ; 0040d64f
    MOV EAX,dword ptr [EAX]             ; 0040d652
    MOV dword ptr [ESP + 0xbc],EAX      ; 0040d654
    FLD float ptr [0x00614454]          ; 0040d65b | FLOAT_00614454
    FLD float ptr [EBX]                 ; 0040d661
    FMUL ST1                            ; 0040d663
    FSTP float ptr [ESP + 0x30]         ; 0040d665
    FLD float ptr [EBX + 0x4]           ; 0040d669
    FMUL ST1                            ; 0040d66c
    FSTP float ptr [ESP + 0x34]         ; 0040d66e
    FMUL float ptr [EBX + 0x8]          ; 0040d672
    FSTP float ptr [ESP + 0x38]         ; 0040d675
    FLD float ptr [0x00614458]          ; 0040d679 | FLOAT_00614458
    FLD float ptr [EDX]                 ; 0040d67f
    FMUL ST1                            ; 0040d681
    FSTP float ptr [ESP + 0xf0]         ; 0040d683
    FLD float ptr [EDX + 0x4]           ; 0040d68a
    FMUL ST1                            ; 0040d68d
    FSTP float ptr [ESP + 0xf4]         ; 0040d68f
    FMUL float ptr [EDX + 0x8]          ; 0040d696
    LEA EAX,[ESP + 0xb4]                ; 0040d699
    LEA EBX,[ESP + 0x108]               ; 0040d6a0
    FLD float ptr [ESP + 0xf0]          ; 0040d6a7
    FADD float ptr [ESP + 0x30]         ; 0040d6ae
    FLD float ptr [ESP + 0xf4]          ; 0040d6b2
    FXCH                                ; 0040d6b9
    FSTP float ptr [ESP + 0xc0]         ; 0040d6bb
    MOV EDX,dword ptr [0x006703e8]      ; 0040d6c2 | g_CDemonRendererPtr1
    FADD float ptr [ESP + 0x34]         ; 0040d6c8
    FXCH                                ; 0040d6cc
    FST float ptr [ESP + 0xf8]          ; 0040d6ce
    FADD float ptr [ESP + 0x38]         ; 0040d6d5
    FXCH                                ; 0040d6d9
    FSTP float ptr [ESP + 0xc4]         ; 0040d6db
    FSTP float ptr [ESP + 0xc8]         ; 0040d6e2
    FLD float ptr [EAX]                 ; 0040d6e9
    FMUL float ptr [0x006597b0]         ; 0040d6eb | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d6f1
    FLD float ptr [EAX + 0x4]           ; 0040d6f3
    FMUL float ptr [0x006597b0]         ; 0040d6f6 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d6fc
    FLD float ptr [EAX + 0x8]           ; 0040d6ff
    FMUL float ptr [0x006597b0]         ; 0040d702 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d708
    LEA EAX,[ESP + 0x108]               ; 0040d70b
    PUSH EAX                            ; 0040d712
    MOV EAX,dword ptr [EDX]             ; 0040d713 | g_CDemonRendererInstance
    PUSH EAX                            ; 0040d715
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d716
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x80]                ; 0040d71b
    ADD ESP,0x8                         ; 0040d722
    LEA EAX,[ESP + 0xc0]                ; 0040d725
    MOV EDX,dword ptr [0x006703e8]      ; 0040d72c | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 0040d732
    FMUL float ptr [0x006597b0]         ; 0040d734 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d73a
    FLD float ptr [EAX + 0x4]           ; 0040d73c
    FMUL float ptr [0x006597b0]         ; 0040d73f | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d745
    FLD float ptr [EAX + 0x8]           ; 0040d748
    FMUL float ptr [0x006597b0]         ; 0040d74b | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d751
    LEA EAX,[ESP + 0x78]                ; 0040d754
    PUSH EAX                            ; 0040d758
    MOV EAX,dword ptr [EDX]             ; 0040d759 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 0040d75b
    PUSH EAX                            ; 0040d75e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d75f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040d764
    MOV EAX,[0x006703e8]                ; 0040d767 | g_CDemonRendererPtr1
    SUB ESP,0x30                        ; 0040d76c
    MOV EAX,dword ptr [EAX]             ; 0040d76f | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0040d771
    MOV EDI,ESP                         ; 0040d776
    LEA ESI,[EAX + 0x30]                ; 0040d778
    MOVSD.REP ES:EDI,ESI                ; 0040d77b
    SUB ESP,0x30                        ; 0040d77d
    MOV ECX,0xc                         ; 0040d780
    MOV EDI,ESP                         ; 0040d785
    MOV ESI,EAX                         ; 0040d787
    MOVSD.REP ES:EDI,ESI                ; 0040d789
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040d78b
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,EBP                         ; 0040d790
    ADD ESP,0x60                        ; 0040d792
    XOR AL,0x4                          ; 0040d795
    PUSH EAX                            ; 0040d797
    LEA EAX,[ESP + 0x94]                ; 0040d798
    PUSH EAX                            ; 0040d79f
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0040d7a0
    PUSH EDI                            ; 0040d7a7
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d7a8
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040d7ad
    PUSH EBP                            ; 0040d7b0
    MOV EBX,EAX                         ; 0040d7b1
    LEA EAX,[ESP + 0x88]                ; 0040d7b3
    PUSH EAX                            ; 0040d7ba
    PUSH EDI                            ; 0040d7bb
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d7bc
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    MOV EDX,EAX                         ; 0040d7c1
    ADD ESP,0xc                         ; 0040d7c3
    MOV EAX,dword ptr [EAX]             ; 0040d7c6
    MOV dword ptr [ESP + 0xd8],EAX      ; 0040d7c8
    LEA EAX,[EDX + 0x4]                 ; 0040d7cf
    MOV EAX,dword ptr [EAX]             ; 0040d7d2
    MOV dword ptr [ESP + 0xdc],EAX      ; 0040d7d4
    LEA EAX,[EDX + 0x8]                 ; 0040d7db
    MOV EAX,dword ptr [EAX]             ; 0040d7de
    MOV dword ptr [ESP + 0xe0],EAX      ; 0040d7e0
    FLD float ptr [0x00614454]          ; 0040d7e7 | FLOAT_00614454
    FLD float ptr [EBX]                 ; 0040d7ed
    FMUL ST1                            ; 0040d7ef
    FSTP float ptr [ESP + 0xa8]         ; 0040d7f1
    FLD float ptr [EBX + 0x4]           ; 0040d7f8
    FMUL ST1                            ; 0040d7fb
    FSTP float ptr [ESP + 0xac]         ; 0040d7fd
    FMUL float ptr [EBX + 0x8]          ; 0040d804
    FSTP float ptr [ESP + 0xb0]         ; 0040d807
    FLD float ptr [0x00614458]          ; 0040d80e | FLOAT_00614458
    FLD float ptr [EDX]                 ; 0040d814
    FMUL ST1                            ; 0040d816
    FSTP float ptr [ESP + 0xfc]         ; 0040d818
    FLD float ptr [EDX + 0x4]           ; 0040d81f
    FMUL ST1                            ; 0040d822
    FSTP float ptr [ESP + 0x100]        ; 0040d824
    FMUL float ptr [EDX + 0x8]          ; 0040d82b
    LEA EAX,[ESP + 0xd8]                ; 0040d82e
    LEA EBX,[ESP + 0x9c]                ; 0040d835
    FLD float ptr [ESP + 0xfc]          ; 0040d83c
    FADD float ptr [ESP + 0xa8]         ; 0040d843
    FLD float ptr [ESP + 0x100]         ; 0040d84a
    FXCH                                ; 0040d851
    FSTP float ptr [ESP + 0x3c]         ; 0040d853
    MOV EDX,dword ptr [0x006703e8]      ; 0040d857 | g_CDemonRendererPtr1
    FADD float ptr [ESP + 0xac]         ; 0040d85d
    FXCH                                ; 0040d864
    FST float ptr [ESP + 0x104]         ; 0040d866
    FADD float ptr [ESP + 0xb0]         ; 0040d86d
    FXCH                                ; 0040d874
    FSTP float ptr [ESP + 0x40]         ; 0040d876
    FSTP float ptr [ESP + 0x44]         ; 0040d87a
    FLD float ptr [EAX]                 ; 0040d87e
    FMUL float ptr [0x006597b0]         ; 0040d880 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d886
    FLD float ptr [EAX + 0x4]           ; 0040d888
    FMUL float ptr [0x006597b0]         ; 0040d88b | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d891
    FLD float ptr [EAX + 0x8]           ; 0040d894
    FMUL float ptr [0x006597b0]         ; 0040d897 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d89d
    LEA EAX,[ESP + 0x9c]                ; 0040d8a0
    PUSH EAX                            ; 0040d8a7
    MOV EAX,dword ptr [EDX]             ; 0040d8a8 | g_CDemonRendererInstance
    PUSH EAX                            ; 0040d8aa
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d8ab
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x20]                ; 0040d8b0
    ADD ESP,0x8                         ; 0040d8b4
    LEA EAX,[ESP + 0x3c]                ; 0040d8b7
    MOV EDX,dword ptr [0x006703e8]      ; 0040d8bb | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 0040d8c1
    FMUL float ptr [0x006597b0]         ; 0040d8c3 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d8c9
    FLD float ptr [EAX + 0x4]           ; 0040d8cb
    FMUL float ptr [0x006597b0]         ; 0040d8ce | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d8d4
    FLD float ptr [EAX + 0x8]           ; 0040d8d7
    FMUL float ptr [0x006597b0]         ; 0040d8da | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d8e0
    LEA EAX,[ESP + 0x18]                ; 0040d8e3
    PUSH EAX                            ; 0040d8e7
    MOV EAX,dword ptr [EDX]             ; 0040d8e8 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 0040d8ea
    PUSH EAX                            ; 0040d8ed
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d8ee
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040d8f3
    MOV EAX,[0x006703e8]                ; 0040d8f6 | g_CDemonRendererPtr1
    SUB ESP,0x30                        ; 0040d8fb
    MOV EAX,dword ptr [EAX]             ; 0040d8fe | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0040d900
    MOV EDI,ESP                         ; 0040d905
    LEA ESI,[EAX + 0x30]                ; 0040d907
    MOVSD.REP ES:EDI,ESI                ; 0040d90a
    SUB ESP,0x30                        ; 0040d90c
    MOV ECX,0xc                         ; 0040d90f
    MOV EDI,ESP                         ; 0040d914
    MOV ESI,EAX                         ; 0040d916
    INC EBP                             ; 0040d918
    MOVSD.REP ES:EDI,ESI                ; 0040d919
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040d91b
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040d920
    CMP EBP,0x8                         ; 0040d923
    JL 0x0040d488                       ; 0040d926
        ;   XREF to: 0040d488 (CONDITIONAL_JUMP)  ; LAB_0040d488
    ADD ESP,0x120                       ; 0040d92c
    POP EBP                             ; 0040d932
    POP EDI                             ; 0040d933
    POP ESI                             ; 0040d934
    POP EBX                             ; 0040d935
    RET                                 ; 0040d936

