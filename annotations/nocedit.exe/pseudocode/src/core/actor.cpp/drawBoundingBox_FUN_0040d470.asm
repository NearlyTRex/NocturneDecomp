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
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
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
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d58f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
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
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d5d2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040d5d7
    MOV EAX,[0x006703e8]                ; 0040d5da | g_CDemonRendererPtr1
    JMP 0x0060d1a5                      ; 0040d5df
        ;   XREF to: 0060d1a5 (UNCONDITIONAL_JUMP)  ; CAVE_cave_005fde92
    MOVSD.REP ES:EDI,ESI                ; 0040d5ee
        ;   Label: LAB_0040d5ee
    JMP 0x0060d1ff                      ; 0040d5f0
        ;   XREF to: 0060d1ff (UNCONDITIONAL_JUMP)  ; LAB_0060d1ff
    MOVSD.REP ES:EDI,ESI                ; 0040d5fc
        ;   Label: LAB_0040d5fc
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
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d716
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
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
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d75f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040d764
    MOV EAX,[0x006703e8]                ; 0040d767 | g_CDemonRendererPtr1
    JMP 0x0060d256                      ; 0040d76c
        ;   XREF to: 0060d256 (UNCONDITIONAL_JUMP)  ; LAB_0060d256
    MOVSD.REP ES:EDI,ESI                ; 0040d77b
        ;   Label: LAB_0040d77b
    JMP 0x0060d2b0                      ; 0040d77d
        ;   XREF to: 0060d2b0 (UNCONDITIONAL_JUMP)  ; LAB_0060d2b0
    MOVSD.REP ES:EDI,ESI                ; 0040d789
        ;   Label: LAB_0040d789
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
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d8ab
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
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
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d8ee
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040d8f3
    MOV EAX,[0x006703e8]                ; 0040d8f6 | g_CDemonRendererPtr1
    JMP 0x0060d307                      ; 0040d8fb
        ;   XREF to: 0060d307 (UNCONDITIONAL_JUMP)  ; LAB_0060d307
    MOVSD.REP ES:EDI,ESI                ; 0040d90a
        ;   Label: LAB_0040d90a
    JMP 0x0060d361                      ; 0040d90c
        ;   XREF to: 0060d361 (UNCONDITIONAL_JUMP)  ; LAB_0060d361
    MOVSD.REP ES:EDI,ESI                ; 0040d919
        ;   Label: LAB_0040d919
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
    SUB ESP,0x30                        ; 0060d1a5
        ;   Label: CAVE_cave_005fde92
    MOV EAX,dword ptr [EAX]             ; 0060d1a8
    MOV ECX,0xc                         ; 0060d1aa
    MOV EDI,ESP                         ; 0060d1af
    LEA ESI,[EAX + 0x30]                ; 0060d1b1
    MOV ECX,dword ptr [ESI]             ; 0060d1b4
    MOV dword ptr [EDI],ECX             ; 0060d1b6
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060d1b8
    MOV dword ptr [EDI + 0x4],ECX       ; 0060d1bb
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060d1be
    MOV dword ptr [EDI + 0x8],ECX       ; 0060d1c1
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060d1c4
    MOV dword ptr [EDI + 0xc],ECX       ; 0060d1c7
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060d1ca
    MOV dword ptr [EDI + 0x10],ECX      ; 0060d1cd
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060d1d0
    MOV dword ptr [EDI + 0x14],ECX      ; 0060d1d3
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060d1d6
    MOV dword ptr [EDI + 0x18],ECX      ; 0060d1d9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060d1dc
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060d1df
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060d1e2
    MOV dword ptr [EDI + 0x20],ECX      ; 0060d1e5
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060d1e8
    MOV dword ptr [EDI + 0x24],ECX      ; 0060d1eb
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060d1ee
    MOV dword ptr [EDI + 0x28],ECX      ; 0060d1f1
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060d1f4
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060d1f7
    JMP 0x0040d5ee                      ; 0060d1fa
        ;   XREF to: 0040d5ee (UNCONDITIONAL_JUMP)  ; LAB_0040d5ee
    SUB ESP,0x30                        ; 0060d1ff
        ;   Label: LAB_0060d1ff
    MOV ECX,0xc                         ; 0060d202
    MOV EDI,ESP                         ; 0060d207
    MOV ESI,EAX                         ; 0060d209
    MOV ECX,dword ptr [ESI]             ; 0060d20b
    MOV dword ptr [EDI],ECX             ; 0060d20d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060d20f
    MOV dword ptr [EDI + 0x4],ECX       ; 0060d212
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060d215
    MOV dword ptr [EDI + 0x8],ECX       ; 0060d218
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060d21b
    MOV dword ptr [EDI + 0xc],ECX       ; 0060d21e
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060d221
    MOV dword ptr [EDI + 0x10],ECX      ; 0060d224
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060d227
    MOV dword ptr [EDI + 0x14],ECX      ; 0060d22a
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060d22d
    MOV dword ptr [EDI + 0x18],ECX      ; 0060d230
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060d233
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060d236
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060d239
    MOV dword ptr [EDI + 0x20],ECX      ; 0060d23c
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060d23f
    MOV dword ptr [EDI + 0x24],ECX      ; 0060d242
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060d245
    MOV dword ptr [EDI + 0x28],ECX      ; 0060d248
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060d24b
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060d24e
    JMP 0x0040d5fc                      ; 0060d251
        ;   XREF to: 0040d5fc (UNCONDITIONAL_JUMP)  ; LAB_0040d5fc
    SUB ESP,0x30                        ; 0060d256
        ;   Label: LAB_0060d256
    MOV EAX,dword ptr [EAX]             ; 0060d259
    MOV ECX,0xc                         ; 0060d25b
    MOV EDI,ESP                         ; 0060d260
    LEA ESI,[EAX + 0x30]                ; 0060d262
    MOV ECX,dword ptr [ESI]             ; 0060d265
    MOV dword ptr [EDI],ECX             ; 0060d267
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060d269
    MOV dword ptr [EDI + 0x4],ECX       ; 0060d26c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060d26f
    MOV dword ptr [EDI + 0x8],ECX       ; 0060d272
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060d275
    MOV dword ptr [EDI + 0xc],ECX       ; 0060d278
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060d27b
    MOV dword ptr [EDI + 0x10],ECX      ; 0060d27e
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060d281
    MOV dword ptr [EDI + 0x14],ECX      ; 0060d284
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060d287
    MOV dword ptr [EDI + 0x18],ECX      ; 0060d28a
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060d28d
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060d290
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060d293
    MOV dword ptr [EDI + 0x20],ECX      ; 0060d296
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060d299
    MOV dword ptr [EDI + 0x24],ECX      ; 0060d29c
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060d29f
    MOV dword ptr [EDI + 0x28],ECX      ; 0060d2a2
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060d2a5
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060d2a8
    JMP 0x0040d77b                      ; 0060d2ab
        ;   XREF to: 0040d77b (UNCONDITIONAL_JUMP)  ; LAB_0040d77b
    SUB ESP,0x30                        ; 0060d2b0
        ;   Label: LAB_0060d2b0
    MOV ECX,0xc                         ; 0060d2b3
    MOV EDI,ESP                         ; 0060d2b8
    MOV ESI,EAX                         ; 0060d2ba
    MOV ECX,dword ptr [ESI]             ; 0060d2bc
    MOV dword ptr [EDI],ECX             ; 0060d2be
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060d2c0
    MOV dword ptr [EDI + 0x4],ECX       ; 0060d2c3
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060d2c6
    MOV dword ptr [EDI + 0x8],ECX       ; 0060d2c9
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060d2cc
    MOV dword ptr [EDI + 0xc],ECX       ; 0060d2cf
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060d2d2
    MOV dword ptr [EDI + 0x10],ECX      ; 0060d2d5
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060d2d8
    MOV dword ptr [EDI + 0x14],ECX      ; 0060d2db
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060d2de
    MOV dword ptr [EDI + 0x18],ECX      ; 0060d2e1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060d2e4
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060d2e7
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060d2ea
    MOV dword ptr [EDI + 0x20],ECX      ; 0060d2ed
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060d2f0
    MOV dword ptr [EDI + 0x24],ECX      ; 0060d2f3
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060d2f6
    MOV dword ptr [EDI + 0x28],ECX      ; 0060d2f9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060d2fc
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060d2ff
    JMP 0x0040d789                      ; 0060d302
        ;   XREF to: 0040d789 (UNCONDITIONAL_JUMP)  ; LAB_0040d789
    SUB ESP,0x30                        ; 0060d307
        ;   Label: LAB_0060d307
    MOV EAX,dword ptr [EAX]             ; 0060d30a
    MOV ECX,0xc                         ; 0060d30c
    MOV EDI,ESP                         ; 0060d311
    LEA ESI,[EAX + 0x30]                ; 0060d313
    MOV ECX,dword ptr [ESI]             ; 0060d316
    MOV dword ptr [EDI],ECX             ; 0060d318
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060d31a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060d31d
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060d320
    MOV dword ptr [EDI + 0x8],ECX       ; 0060d323
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060d326
    MOV dword ptr [EDI + 0xc],ECX       ; 0060d329
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060d32c
    MOV dword ptr [EDI + 0x10],ECX      ; 0060d32f
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060d332
    MOV dword ptr [EDI + 0x14],ECX      ; 0060d335
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060d338
    MOV dword ptr [EDI + 0x18],ECX      ; 0060d33b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060d33e
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060d341
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060d344
    MOV dword ptr [EDI + 0x20],ECX      ; 0060d347
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060d34a
    MOV dword ptr [EDI + 0x24],ECX      ; 0060d34d
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060d350
    MOV dword ptr [EDI + 0x28],ECX      ; 0060d353
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060d356
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060d359
    JMP 0x0040d90a                      ; 0060d35c
        ;   XREF to: 0040d90a (UNCONDITIONAL_JUMP)  ; LAB_0040d90a
    SUB ESP,0x30                        ; 0060d361
        ;   Label: LAB_0060d361
    MOV ECX,0xc                         ; 0060d364
    MOV EDI,ESP                         ; 0060d369
    MOV ESI,EAX                         ; 0060d36b
    INC EBP                             ; 0060d36d
    MOV ECX,dword ptr [ESI]             ; 0060d36e
    MOV dword ptr [EDI],ECX             ; 0060d370
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060d372
    MOV dword ptr [EDI + 0x4],ECX       ; 0060d375
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060d378
    MOV dword ptr [EDI + 0x8],ECX       ; 0060d37b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060d37e
    MOV dword ptr [EDI + 0xc],ECX       ; 0060d381
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060d384
    MOV dword ptr [EDI + 0x10],ECX      ; 0060d387
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060d38a
    MOV dword ptr [EDI + 0x14],ECX      ; 0060d38d
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060d390
    MOV dword ptr [EDI + 0x18],ECX      ; 0060d393
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060d396
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060d399
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060d39c
    MOV dword ptr [EDI + 0x20],ECX      ; 0060d39f
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060d3a2
    MOV dword ptr [EDI + 0x24],ECX      ; 0060d3a5
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060d3a8
    MOV dword ptr [EDI + 0x28],ECX      ; 0060d3ab
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060d3ae
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060d3b1
    JMP 0x0040d919                      ; 0060d3b4
        ;   XREF to: 0040d919 (UNCONDITIONAL_JUMP)  ; LAB_0040d919

