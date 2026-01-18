; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void core_setedit.cpp_FUN_005817d0(void * unk)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x54]:1  local_54
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_FUN_00581aa0 at 00581d54
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00583514
;
; Referenced Globals:
;   undefined4 DAT_00648b39
;   double DOUBLE_00648b3d = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic DAT_006816c0
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005817d0
        ;   Label: core_setedit.cpp_FUN_005817d0
    PUSH ESI                            ; 005817d1
    PUSH EDI                            ; 005817d2
    PUSH EBP                            ; 005817d3
    MOV EBP,ESP                         ; 005817d4
    SUB ESP,0x50                        ; 005817d6
    AND ESP,0xfffffff8                  ; 005817d9
    FLD float ptr [EBP + 0x1c]          ; 005817dc
    FMUL float ptr [0x00648b39]         ; 005817df | DAT_00648b39
    CALL crt_math.c_round_FUN_005fe6b0  ; 005817e5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4c]        ; 005817ea
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005817ee
    TEST EDX,EDX                        ; 005817f2
    JL 0x0058190f                       ; 005817f4
        ;   XREF to: 0058190f (CONDITIONAL_JUMP)  ; LAB_0058190f
    CMP EDX,0xffff                      ; 005817fa
    JG 0x0058191a                       ; 00581800
        ;   XREF to: 0058191a (CONDITIONAL_JUMP)  ; LAB_0058191a
    MOV EAX,dword ptr [EBP + 0x20]      ; 00581806
        ;   Label: LAB_00581806
    SHL EAX,0x8                         ; 00581809
    MOV dword ptr [ESP + 0x40],EAX      ; 0058180c
    MOV EAX,dword ptr [EBP + 0x24]      ; 00581810
    SHL EAX,0x8                         ; 00581813
    MOV dword ptr [ESP + 0x44],EAX      ; 00581816
    MOV EAX,dword ptr [EBP + 0x28]      ; 0058181a
    SHL EAX,0x8                         ; 0058181d
    XOR EDI,EDI                         ; 00581820
    MOV dword ptr [ESP + 0x48],EAX      ; 00581822
    MOV EAX,dword ptr [EBP + 0x18]      ; 00581826
        ;   Label: LAB_00581826
    MOV EAX,dword ptr [EAX]             ; 00581829
    MOV dword ptr [ESP],EAX             ; 0058182b
    IMUL ESI,EDI,0x30                   ; 0058182e
    FLD float ptr [ESP]                 ; 00581831
        ;   Label: LAB_00581831
    FMUL double ptr [0x00648b3d]        ; 00581834 | DOUBLE_00648b3d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0058183a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x34]        ; 0058183f
    TEST DI,0x2                         ; 00581843
    JZ 0x00581927                       ; 00581848
        ;   XREF to: 00581927 (CONDITIONAL_JUMP)  ; LAB_00581927
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058184e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00581851
        ;   Label: LAB_00581851
    MOV dword ptr [ESP + 0x4],EAX       ; 00581854
    FLD float ptr [ESP + 0x4]           ; 00581858
    FMUL double ptr [0x00648b3d]        ; 0058185c | DOUBLE_00648b3d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00581862
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x38]        ; 00581867
    TEST DI,0x4                         ; 0058186b
    JZ 0x0058192f                       ; 00581870
        ;   XREF to: 0058192f (CONDITIONAL_JUMP)  ; LAB_0058192f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00581876
    MOV EAX,dword ptr [EAX + 0x8]       ; 00581879
        ;   Label: LAB_00581879
    MOV dword ptr [ESP + 0x8],EAX       ; 0058187c
    FLD float ptr [ESP + 0x8]           ; 00581880
    FMUL double ptr [0x00648b3d]        ; 00581884 | DOUBLE_00648b3d
    LEA EDX,[ESP + 0x34]                ; 0058188a
    MOV EAX,[0x006703ec]                ; 0058188e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    CALL crt_math.c_round_FUN_005fe6b0  ; 00581893
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 00581898
    MOV EAX,dword ptr [EAX]             ; 0058189c | g_CDemonRendererInstance
    PUSH EDX                            ; 0058189e
    ADD EAX,ESI                         ; 0058189f
    PUSH EAX                            ; 005818a1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005818a2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x006703ec]      ; 005818a7 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EDX]             ; 005818ad | g_CDemonRendererInstance
    MOV dword ptr [ESI + EAX*0x1 + 0x18],0x80000 ; 005818af
    MOV EAX,dword ptr [EDX]             ; 005818b7 | g_CDemonRendererInstance
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x80000 ; 005818b9
    ADD ESP,0x8                         ; 005818c1
    MOV EAX,dword ptr [EDX]             ; 005818c4 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x40]      ; 005818c6
    MOV dword ptr [ESI + EAX*0x1 + 0x20],ECX ; 005818ca
    MOV EAX,dword ptr [EDX]             ; 005818ce | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x44]      ; 005818d0
    MOV dword ptr [ESI + EAX*0x1 + 0x24],ECX ; 005818d4
    MOV EAX,dword ptr [EDX]             ; 005818d8 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x48]      ; 005818da
    MOV dword ptr [ESI + EAX*0x1 + 0x28],ECX ; 005818de
    MOV EAX,dword ptr [EDX]             ; 005818e2 | g_CDemonRendererInstance
    LEA ECX,[EAX + ESI*0x1]             ; 005818e4
    INC EDI                             ; 005818e7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005818e8
    ADD ESI,0x30                        ; 005818ec
    MOV dword ptr [ECX + 0x2c],EAX      ; 005818ef
    CMP EDI,0x8                         ; 005818f2
    JGE 0x00581937                      ; 005818f5
        ;   XREF to: 00581937 (CONDITIONAL_JUMP)  ; LAB_00581937
    TEST DI,0x1                         ; 005818f7
    JZ 0x00581826                       ; 005818fc
        ;   XREF to: 00581826 (CONDITIONAL_JUMP)  ; LAB_00581826
    MOV EAX,dword ptr [EBP + 0x14]      ; 00581902
    MOV EAX,dword ptr [EAX]             ; 00581905
    MOV dword ptr [ESP],EAX             ; 00581907
    JMP 0x00581831                      ; 0058190a
        ;   XREF to: 00581831 (UNCONDITIONAL_JUMP)  ; LAB_00581831
    XOR ESI,ESI                         ; 0058190f
        ;   Label: LAB_0058190f
    MOV dword ptr [ESP + 0x4c],ESI      ; 00581911
    JMP 0x00581806                      ; 00581915
        ;   XREF to: 00581806 (UNCONDITIONAL_JUMP)  ; LAB_00581806
    MOV dword ptr [ESP + 0x4c],0xffff   ; 0058191a
        ;   Label: LAB_0058191a
    JMP 0x00581806                      ; 00581922
        ;   XREF to: 00581806 (UNCONDITIONAL_JUMP)  ; LAB_00581806
    MOV EAX,dword ptr [EBP + 0x18]      ; 00581927
        ;   Label: LAB_00581927
    JMP 0x00581851                      ; 0058192a
        ;   XREF to: 00581851 (UNCONDITIONAL_JUMP)  ; LAB_00581851
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058192f
        ;   Label: LAB_0058192f
    JMP 0x00581879                      ; 00581932
        ;   XREF to: 00581879 (UNCONDITIONAL_JUMP)  ; LAB_00581879
    PUSH 0x6816c0                       ; 00581937 | DAT_006816c0
        ;   Label: LAB_00581937
    PUSH EDX                            ; 0058193c | g_CDemonRendererInstance
    MOV EDI,0x4                         ; 0058193d
    MOV EBX,0x1                         ; 00581942
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00581947
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0058194c
    XOR EAX,EAX                         ; 0058194f
    MOV ESI,0x3                         ; 00581951
    MOV dword ptr [ESP + 0x20],EAX      ; 00581956
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058195a
    MOV dword ptr [ESP + 0x18],EAX      ; 0058195e
    MOV dword ptr [ESP + 0x14],EAX      ; 00581962
    MOV dword ptr [ESP + 0x24],EAX      ; 00581966
    MOV EAX,0x6                         ; 0058196a
    MOV EDX,0x4                         ; 0058196f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00581974
    LEA EAX,[ESP + 0xc]                 ; 00581978
    MOV ECX,dword ptr [0x006703ec]      ; 0058197c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00581982
    MOV dword ptr [ESP + 0x14],EDI      ; 00581983
    MOV EDI,0x2                         ; 00581987
    PUSH ECX                            ; 0058198c | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x38],EDX      ; 0058198d
    MOV dword ptr [ESP + 0x30],EDI      ; 00581991
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00581995
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x5                         ; 0058199a
    ADD ESP,0x8                         ; 0058199f
    MOV EDI,0x7                         ; 005819a2
    MOV dword ptr [ESP + 0x30],EAX      ; 005819a7
    LEA EAX,[ESP + 0xc]                 ; 005819ab
    MOV EDX,dword ptr [0x006703ec]      ; 005819af | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 005819b5
    MOV dword ptr [ESP + 0x28],EBX      ; 005819b6
    MOV dword ptr [ESP + 0x2c],ESI      ; 005819ba
    PUSH EDX                            ; 005819be | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x34],EDI      ; 005819bf
    MOV EDI,0x2                         ; 005819c3
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 005819c8
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 005819cd
    XOR ECX,ECX                         ; 005819d0
    LEA EAX,[ESP + 0xc]                 ; 005819d2
    MOV dword ptr [ESP + 0x24],ECX      ; 005819d6
    MOV dword ptr [ESP + 0x28],EBX      ; 005819da
    MOV dword ptr [ESP + 0x2c],ESI      ; 005819de
    PUSH EAX                            ; 005819e2
    MOV EAX,[0x006703ec]                ; 005819e3 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x34],EDI      ; 005819e8
    PUSH EAX                            ; 005819ec | g_CDemonRendererInstance
    MOV EBX,0x7                         ; 005819ed
    MOV ESI,0x6                         ; 005819f2
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 005819f7
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EDX,0x4                         ; 005819fc
    MOV ECX,0x5                         ; 00581a01
    ADD ESP,0x8                         ; 00581a06
    LEA EAX,[ESP + 0xc]                 ; 00581a09
    MOV EDI,dword ptr [0x006703ec]      ; 00581a0d | g_CDemonRendererPtr2
    PUSH EAX                            ; 00581a13
    MOV dword ptr [ESP + 0x28],EDX      ; 00581a14
    MOV dword ptr [ESP + 0x2c],ECX      ; 00581a18
    PUSH EDI                            ; 00581a1c | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x34],EBX      ; 00581a1d
    MOV dword ptr [ESP + 0x38],ESI      ; 00581a21
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00581a25
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x2                         ; 00581a2a
    ADD ESP,0x8                         ; 00581a2f
    MOV EDX,0x3                         ; 00581a32
    MOV dword ptr [ESP + 0x24],EAX      ; 00581a37
    LEA EAX,[ESP + 0xc]                 ; 00581a3b
    MOV dword ptr [ESP + 0x30],ESI      ; 00581a3f
    PUSH EAX                            ; 00581a43
    MOV ESI,dword ptr [0x006703ec]      ; 00581a44 | g_CDemonRendererPtr2
    XOR EDI,EDI                         ; 00581a4a
    PUSH ESI                            ; 00581a4c | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x30],EDX      ; 00581a4d
    MOV dword ptr [ESP + 0x34],EBX      ; 00581a51
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00581a55
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x1                         ; 00581a5a
    ADD ESP,0x8                         ; 00581a5f
    MOV EDX,0x5                         ; 00581a62
    MOV dword ptr [ESP + 0x28],EAX      ; 00581a67
    LEA EAX,[ESP + 0xc]                 ; 00581a6b
    MOV ECX,0x4                         ; 00581a6f
    PUSH EAX                            ; 00581a74
    MOV EBX,dword ptr [0x006703ec]      ; 00581a75 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x28],EDI      ; 00581a7b
    PUSH EBX                            ; 00581a7f | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x34],EDX      ; 00581a80
    MOV dword ptr [ESP + 0x38],ECX      ; 00581a84
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00581a88
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 00581a8d
    MOV ESP,EBP                         ; 00581a90
    POP EBP                             ; 00581a92
    POP EDI                             ; 00581a93
    POP ESI                             ; 00581a94
    POP EBX                             ; 00581a95
    RET                                 ; 00581a96

