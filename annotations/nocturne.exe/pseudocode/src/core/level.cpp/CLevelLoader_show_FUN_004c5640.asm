; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_show_FUN_004c5640(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   total_frames
; int              Stack[0xc]:4   use_custom_viewport
; int              Stack[0x10]:4   image_variant
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_game.cpp_CGame_FUN_004a4170 at 004a42d7
;   core_game.cpp_CGame_FUN_004a4b50 at 004a4e83
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d957c
;
; Referenced Globals:
;   TerminatedCString s_moon_kfm_005878ac
;   TerminatedCString s_load1_005878b5
;   TerminatedCString s_load2_005878bb
;   TerminatedCString s_load3_005878c1
;   TerminatedCString s_load4_005878c7
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005baca4
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_special.cpp_clearScreen_FUN_0052ee70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c5640
        ;   Label: core_level.cpp_CLevelLoader_show_FUN_004c5640
    PUSH EDI                            ; 004c5641
    SUB ESP,0x50                        ; 004c5642
    MOV ESI,dword ptr [ESP + 0x5c]      ; 004c5645
    MOV EDX,dword ptr [ESP + 0x64]      ; 004c5649
    MOV EDI,dword ptr [ESP + 0x68]      ; 004c564d
    MOV dword ptr [ESI + 0x8],0x0       ; 004c5651
    MOV dword ptr [ESI + 0xc],0x1       ; 004c5658
    MOV dword ptr [ESI],0x0             ; 004c565f
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c5665
    MOV dword ptr [ESI + 0x110],EDX     ; 004c5669
    MOV dword ptr [ESI + 0x4],EAX       ; 004c566f
    TEST EDX,EDX                        ; 004c5672
    JZ 0x004c58ff                       ; 004c5674
        ;   XREF to: 004c58ff (CONDITIONAL_JUMP)  ; LAB_004c58ff
    MOV dword ptr [ESI + 0x118],0x0     ; 004c567a
    MOV dword ptr [ESI + 0x11c],0xc0    ; 004c5684
    MOV dword ptr [ESI + 0x120],0xc0    ; 004c568e
    MOV dword ptr [ESI + 0x114],0x1bf   ; 004c5698
    MOV dword ptr [ESI + 0x124],0xff    ; 004c56a2
        ;   Label: LAB_004c56a2
    PUSH 0x5878ac                       ; 004c56ac | = "moon.kfm"
    MOV dword ptr [ESI + 0x128],0xff    ; 004c56b1
    PUSH 0x1cc3290                      ; 004c56bb
    MOV dword ptr [ESI + 0x12c],0xff    ; 004c56c0
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 ; 004c56ca
        ;   XREF to: 00452650 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c56cf
    PUSH 0x5baca4                       ; 004c56d2 | DAT_005baca4
    MOV EDX,dword ptr [0x005ae704]      ; 004c56d7 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004c56dd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004c56de
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c56e3
    CMP EDI,-0x1                        ; 004c56e6
    JNZ 0x004c5707                      ; 004c56e9
        ;   XREF to: 004c5707 (CONDITIONAL_JUMP)  ; LAB_004c5707
    CMP dword ptr [ESI + 0x110],0x0     ; 004c56eb
    JNZ 0x004c5707                      ; 004c56f2
        ;   XREF to: 004c5707 (CONDITIONAL_JUMP)  ; LAB_004c5707
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004c56f4
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 004c56f9
    MOV EDI,0x3                         ; 004c56fb
    SAR EDX,0x1f                        ; 004c5700
    IDIV EDI                            ; 004c5703
    MOV EDI,EDX                         ; 004c5705
    TEST EDI,EDI                        ; 004c5707
        ;   Label: LAB_004c5707
    JNZ 0x004c57aa                      ; 004c5709
        ;   XREF to: 004c57aa (CONDITIONAL_JUMP)  ; LAB_004c57aa
    LEA EDX,[ESP + 0x14]                ; 004c570f
    PUSH EDX                            ; 004c5713
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c5714
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004c5719
    PUSH 0x1e0                          ; 004c571c
    PUSH 0x280                          ; 004c5721
    PUSH 0x5878b5                       ; 004c5726 | = "load1"
    LEA EDX,[ESP + 0x20]                ; 004c572b
    PUSH EDX                            ; 004c572f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004c5730
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004c5735
    PUSH 0xffff                         ; 004c5738
    PUSH EDI                            ; 004c573d
    PUSH EDI                            ; 004c573e
    LEA EDX,[ESP + 0x20]                ; 004c573f
    PUSH EDX                            ; 004c5743
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c5744
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x78    ; 004c5749
    MOV dword ptr [ESI + 0x118],0x82    ; 004c5753
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004c575d
    MOV dword ptr [ESI + 0x120],0x5a    ; 004c5767
    MOV dword ptr [ESI + 0x110],0x1     ; 004c5771
    ADD ESP,0x10                        ; 004c577b
    MOV dword ptr [ESI + 0x124],0x82    ; 004c577e
    PUSH EDI                            ; 004c5788
    LEA EDX,[ESP + 0x18]                ; 004c5789
    MOV dword ptr [ESI + 0x128],0xc8    ; 004c578d
    PUSH EDX                            ; 004c5797
    MOV dword ptr [ESI + 0x12c],0xf4    ; 004c5798
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 004c57a2
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c57a7
    CMP EDI,0x1                         ; 004c57aa
        ;   Label: LAB_004c57aa
    JNZ 0x004c584d                      ; 004c57ad
        ;   XREF to: 004c584d (CONDITIONAL_JUMP)  ; LAB_004c584d
    LEA EDX,[ESP + 0x28]                ; 004c57b3
    PUSH EDX                            ; 004c57b7
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c57b8
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004c57bd
    PUSH 0x1e0                          ; 004c57c0
    PUSH 0x280                          ; 004c57c5
    PUSH 0x5878bb                       ; 004c57ca | = "load2"
    LEA EDX,[ESP + 0x34]                ; 004c57cf
    PUSH EDX                            ; 004c57d3
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004c57d4
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004c57d9
    PUSH 0xffff                         ; 004c57dc
    PUSH 0x0                            ; 004c57e1
    PUSH 0x0                            ; 004c57e3
    LEA EDX,[ESP + 0x34]                ; 004c57e5
    PUSH EDX                            ; 004c57e9
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c57ea
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x1e4   ; 004c57ef
    MOV dword ptr [ESI + 0x118],0x42    ; 004c57f9
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004c5803
    MOV dword ptr [ESI + 0x120],0x5a    ; 004c580d
    MOV dword ptr [ESI + 0x124],0x82    ; 004c5817
    ADD ESP,0x10                        ; 004c5821
    MOV dword ptr [ESI + 0x128],0xbd    ; 004c5824
    PUSH 0x0                            ; 004c582e
    LEA EDX,[ESP + 0x2c]                ; 004c5830
    MOV dword ptr [ESI + 0x12c],0xff    ; 004c5834
    PUSH EDX                            ; 004c583e
    MOV dword ptr [ESI + 0x110],EDI     ; 004c583f
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 004c5845
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c584a
    CMP EDI,0x2                         ; 004c584d
        ;   Label: LAB_004c584d
    JNZ 0x004c58f4                      ; 004c5850
        ;   XREF to: 004c58f4 (CONDITIONAL_JUMP)  ; LAB_004c58f4
    LEA EDX,[ESP + 0x3c]                ; 004c5856
    PUSH EDX                            ; 004c585a
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c585b
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004c5860
    PUSH 0x1e0                          ; 004c5863
    PUSH 0x280                          ; 004c5868
    PUSH 0x5878c1                       ; 004c586d | = "load3"
    LEA EDX,[ESP + 0x48]                ; 004c5872
    PUSH EDX                            ; 004c5876
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004c5877
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004c587c
    PUSH 0xffff                         ; 004c587f
    PUSH 0x0                            ; 004c5884
    PUSH 0x0                            ; 004c5886
    LEA EDX,[ESP + 0x48]                ; 004c5888
    PUSH EDX                            ; 004c588c
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c588d
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x9f    ; 004c5892
    MOV dword ptr [ESI + 0x118],0x1     ; 004c589c
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004c58a6
    MOV dword ptr [ESI + 0x120],0x5a    ; 004c58b0
    MOV dword ptr [ESI + 0x110],0x1     ; 004c58ba
    ADD ESP,0x10                        ; 004c58c4
    MOV dword ptr [ESI + 0x124],0x9e    ; 004c58c7
    PUSH 0x0                            ; 004c58d1
    LEA EDX,[ESP + 0x40]                ; 004c58d3
    MOV dword ptr [ESI + 0x128],0xe1    ; 004c58d7
    PUSH EDX                            ; 004c58e1
    MOV dword ptr [ESI + 0x12c],0xff    ; 004c58e2
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 004c58ec
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c58f1
    CMP EDI,0x3                         ; 004c58f4
        ;   Label: LAB_004c58f4
    JZ 0x004c5933                       ; 004c58f7
        ;   XREF to: 004c5933 (CONDITIONAL_JUMP)  ; LAB_004c5933
    ADD ESP,0x50                        ; 004c58f9
    POP EDI                             ; 004c58fc
    POP ESI                             ; 004c58fd
    RET                                 ; 004c58fe
    PUSH EBX                            ; 004c58ff
        ;   Label: LAB_004c58ff
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004c5900
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    MOV dword ptr [ESI + 0x114],0x0     ; 004c5905
    MOV dword ptr [ESI + 0x118],0x0     ; 004c590f
    MOV dword ptr [ESI + 0x11c],0x280   ; 004c5919
    MOV dword ptr [ESI + 0x120],0x1e0   ; 004c5923
    POP EBX                             ; 004c592d
    JMP 0x004c56a2                      ; 004c592e
        ;   XREF to: 004c56a2 (UNCONDITIONAL_JUMP)  ; LAB_004c56a2
    MOV EDX,ESP                         ; 004c5933
        ;   Label: LAB_004c5933
    PUSH EDX                            ; 004c5935
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004c5936
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004c593b
    PUSH 0x1e0                          ; 004c593e
    PUSH 0x280                          ; 004c5943
    PUSH 0x5878c7                       ; 004c5948 | = "load4"
    LEA EDX,[ESP + 0xc]                 ; 004c594d
    PUSH EDX                            ; 004c5951
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004c5952
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004c5957
    PUSH 0xffff                         ; 004c595a
    PUSH 0x0                            ; 004c595f
    PUSH 0x0                            ; 004c5961
    LEA EDX,[ESP + 0xc]                 ; 004c5963
    PUSH EDX                            ; 004c5967
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c5968
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x17b   ; 004c596d
    MOV dword ptr [ESI + 0x118],0x44    ; 004c5977
    MOV dword ptr [ESI + 0x11c],0x5a    ; 004c5981
    MOV dword ptr [ESI + 0x120],0x5a    ; 004c598b
    MOV dword ptr [ESI + 0x110],0x1     ; 004c5995
    ADD ESP,0x10                        ; 004c599f
    MOV dword ptr [ESI + 0x124],0x6b    ; 004c59a2
    PUSH 0x0                            ; 004c59ac
    LEA EDX,[ESP + 0x4]                 ; 004c59ae
    MOV dword ptr [ESI + 0x128],0x9a    ; 004c59b2
    PUSH EDX                            ; 004c59bc
    MOV dword ptr [ESI + 0x12c],0xff    ; 004c59bd
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 004c59c7
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c59cc
    ADD ESP,0x50                        ; 004c59cf
    POP EDI                             ; 004c59d2
    POP ESI                             ; 004c59d3
    RET                                 ; 004c59d4

