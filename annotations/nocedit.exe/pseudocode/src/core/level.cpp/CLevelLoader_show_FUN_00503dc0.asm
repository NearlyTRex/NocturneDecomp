; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_level_cpp_CLevelLoader_show_FUN_00503dc0 (CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   total_frames
; int              Stack[0xc]:4   use_custom_viewport
; int              Stack[0x10]:4   image_variant
; Local Variables:
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e140d
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e200d
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 0052455c
;
; Referenced Globals:
;   TerminatedCString s_moon_kfm_00631017
;   TerminatedCString s_load1_00631020
;   TerminatedCString s_load2_00631026
;   TerminatedCString s_load3_0063102c
;   TerminatedCString s_load4_00631032
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_LoadingMoonGlowTexture
;   CDemonRenderer g_CDemonRendererInstance
;   CKeyFramedModel g_LoadingMoonModel
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00503dc0
        ;   Label: core_level.cpp_CLevelLoader_show_FUN_00503dc0
    PUSH EDI                            ; 00503dc1
    SUB ESP,0x50                        ; 00503dc2
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00503dc5
    MOV EDX,dword ptr [ESP + 0x64]      ; 00503dc9
    MOV EDI,dword ptr [ESP + 0x68]      ; 00503dcd
    MOV dword ptr [ESI + 0x8],0x0       ; 00503dd1
    MOV dword ptr [ESI + 0xc],0x1       ; 00503dd8
    MOV dword ptr [ESI],0x0             ; 00503ddf
    MOV EAX,dword ptr [ESP + 0x60]      ; 00503de5
    MOV dword ptr [ESI + 0x110],EDX     ; 00503de9
    MOV dword ptr [ESI + 0x4],EAX       ; 00503def
    TEST EDX,EDX                        ; 00503df2
    JZ 0x0050407f                       ; 00503df4
        ;   XREF to: 0050407f (CONDITIONAL_JUMP)  ; LAB_0050407f
    MOV dword ptr [ESI + 0x118],0x0     ; 00503dfa
    MOV dword ptr [ESI + 0x11c],0xc0    ; 00503e04
    MOV dword ptr [ESI + 0x120],0xc0    ; 00503e0e
    MOV dword ptr [ESI + 0x114],0x1bf   ; 00503e18
    MOV dword ptr [ESI + 0x124],0xff    ; 00503e22
        ;   Label: LAB_00503e22
    PUSH 0x631017                       ; 00503e2c | = "moon.kfm"
    MOV dword ptr [ESI + 0x128],0xff    ; 00503e31
    PUSH 0x2dcd980                      ; 00503e3b | g_LoadingMoonModel
    MOV dword ptr [ESI + 0x12c],0xff    ; 00503e40
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 00503e4a
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00503e4f
    PUSH 0x67cf84                       ; 00503e52 | g_LoadingMoonGlowTexture
    MOV EDX,dword ptr [0x006703ec]      ; 00503e57 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00503e5d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00503e5e
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00503e63
    CMP EDI,-0x1                        ; 00503e66
    JNZ 0x00503e87                      ; 00503e69
        ;   XREF to: 00503e87 (CONDITIONAL_JUMP)  ; LAB_00503e87
    CMP dword ptr [ESI + 0x110],0x0     ; 00503e6b
    JNZ 0x00503e87                      ; 00503e72
        ;   XREF to: 00503e87 (CONDITIONAL_JUMP)  ; LAB_00503e87
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00503e74
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 00503e79
    MOV EDI,0x3                         ; 00503e7b
    SAR EDX,0x1f                        ; 00503e80
    IDIV EDI                            ; 00503e83
    MOV EDI,EDX                         ; 00503e85
    TEST EDI,EDI                        ; 00503e87
        ;   Label: LAB_00503e87
    JNZ 0x00503f2a                      ; 00503e89
        ;   XREF to: 00503f2a (CONDITIONAL_JUMP)  ; LAB_00503f2a
    LEA EDX,[ESP + 0x14]                ; 00503e8f
    PUSH EDX                            ; 00503e93
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00503e94
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00503e99
    PUSH 0x1e0                          ; 00503e9c
    PUSH 0x280                          ; 00503ea1
    PUSH 0x631020                       ; 00503ea6 | = "load1"
    LEA EDX,[ESP + 0x20]                ; 00503eab
    PUSH EDX                            ; 00503eaf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00503eb0
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00503eb5
    PUSH 0xffff                         ; 00503eb8
    PUSH EDI                            ; 00503ebd
    PUSH EDI                            ; 00503ebe
    LEA EDX,[ESP + 0x20]                ; 00503ebf
    PUSH EDX                            ; 00503ec3
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 00503ec4
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x78    ; 00503ec9
    MOV dword ptr [ESI + 0x118],0x82    ; 00503ed3
    MOV dword ptr [ESI + 0x11c],0x5a    ; 00503edd
    MOV dword ptr [ESI + 0x120],0x5a    ; 00503ee7
    MOV dword ptr [ESI + 0x110],0x1     ; 00503ef1
    ADD ESP,0x10                        ; 00503efb
    MOV dword ptr [ESI + 0x124],0x82    ; 00503efe
    PUSH EDI                            ; 00503f08
    LEA EDX,[ESP + 0x18]                ; 00503f09
    MOV dword ptr [ESI + 0x128],0xc8    ; 00503f0d
    PUSH EDX                            ; 00503f17
    MOV dword ptr [ESI + 0x12c],0xf4    ; 00503f18
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 00503f22
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr)
    ADD ESP,0x8                         ; 00503f27
    CMP EDI,0x1                         ; 00503f2a
        ;   Label: LAB_00503f2a
    JNZ 0x00503fcd                      ; 00503f2d
        ;   XREF to: 00503fcd (CONDITIONAL_JUMP)  ; LAB_00503fcd
    LEA EDX,[ESP + 0x28]                ; 00503f33
    PUSH EDX                            ; 00503f37
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00503f38
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00503f3d
    PUSH 0x1e0                          ; 00503f40
    PUSH 0x280                          ; 00503f45
    PUSH 0x631026                       ; 00503f4a | = "load2"
    LEA EDX,[ESP + 0x34]                ; 00503f4f
    PUSH EDX                            ; 00503f53
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00503f54
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00503f59
    PUSH 0xffff                         ; 00503f5c
    PUSH 0x0                            ; 00503f61
    PUSH 0x0                            ; 00503f63
    LEA EDX,[ESP + 0x34]                ; 00503f65
    PUSH EDX                            ; 00503f69
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 00503f6a
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x1e4   ; 00503f6f
    MOV dword ptr [ESI + 0x118],0x42    ; 00503f79
    MOV dword ptr [ESI + 0x11c],0x5a    ; 00503f83
    MOV dword ptr [ESI + 0x120],0x5a    ; 00503f8d
    MOV dword ptr [ESI + 0x124],0x82    ; 00503f97
    ADD ESP,0x10                        ; 00503fa1
    MOV dword ptr [ESI + 0x128],0xbd    ; 00503fa4
    PUSH 0x0                            ; 00503fae
    LEA EDX,[ESP + 0x2c]                ; 00503fb0
    MOV dword ptr [ESI + 0x12c],0xff    ; 00503fb4
    PUSH EDX                            ; 00503fbe
    MOV dword ptr [ESI + 0x110],EDI     ; 00503fbf
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 00503fc5
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr)
    ADD ESP,0x8                         ; 00503fca
    CMP EDI,0x2                         ; 00503fcd
        ;   Label: LAB_00503fcd
    JNZ 0x00504074                      ; 00503fd0
        ;   XREF to: 00504074 (CONDITIONAL_JUMP)  ; LAB_00504074
    LEA EDX,[ESP + 0x3c]                ; 00503fd6
    PUSH EDX                            ; 00503fda
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00503fdb
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00503fe0
    PUSH 0x1e0                          ; 00503fe3
    PUSH 0x280                          ; 00503fe8
    PUSH 0x63102c                       ; 00503fed | = "load3"
    LEA EDX,[ESP + 0x48]                ; 00503ff2
    PUSH EDX                            ; 00503ff6
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00503ff7
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00503ffc
    PUSH 0xffff                         ; 00503fff
    PUSH 0x0                            ; 00504004
    PUSH 0x0                            ; 00504006
    LEA EDX,[ESP + 0x48]                ; 00504008
    PUSH EDX                            ; 0050400c
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 0050400d
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x9f    ; 00504012
    MOV dword ptr [ESI + 0x118],0x1     ; 0050401c
    MOV dword ptr [ESI + 0x11c],0x5a    ; 00504026
    MOV dword ptr [ESI + 0x120],0x5a    ; 00504030
    MOV dword ptr [ESI + 0x110],0x1     ; 0050403a
    ADD ESP,0x10                        ; 00504044
    MOV dword ptr [ESI + 0x124],0x9e    ; 00504047
    PUSH 0x0                            ; 00504051
    LEA EDX,[ESP + 0x40]                ; 00504053
    MOV dword ptr [ESI + 0x128],0xe1    ; 00504057
    PUSH EDX                            ; 00504061
    MOV dword ptr [ESI + 0x12c],0xff    ; 00504062
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 0050406c
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr)
    ADD ESP,0x8                         ; 00504071
    CMP EDI,0x3                         ; 00504074
        ;   Label: LAB_00504074
    JZ 0x005040b3                       ; 00504077
        ;   XREF to: 005040b3 (CONDITIONAL_JUMP)  ; LAB_005040b3
    ADD ESP,0x50                        ; 00504079
    POP EDI                             ; 0050407c
    POP ESI                             ; 0050407d
    RET                                 ; 0050407e
    PUSH EBX                            ; 0050407f
        ;   Label: LAB_0050407f
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00504080
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV dword ptr [ESI + 0x114],0x0     ; 00504085
    MOV dword ptr [ESI + 0x118],0x0     ; 0050408f
    MOV dword ptr [ESI + 0x11c],0x280   ; 00504099
    MOV dword ptr [ESI + 0x120],0x1e0   ; 005040a3
    POP EBX                             ; 005040ad
    JMP 0x00503e22                      ; 005040ae
        ;   XREF to: 00503e22 (UNCONDITIONAL_JUMP)  ; LAB_00503e22
    MOV EDX,ESP                         ; 005040b3
        ;   Label: LAB_005040b3
    PUSH EDX                            ; 005040b5
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 005040b6
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 005040bb
    PUSH 0x1e0                          ; 005040be
    PUSH 0x280                          ; 005040c3
    PUSH 0x631032                       ; 005040c8 | = "load4"
    LEA EDX,[ESP + 0xc]                 ; 005040cd
    PUSH EDX                            ; 005040d1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 005040d2
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 005040d7
    PUSH 0xffff                         ; 005040da
    PUSH 0x0                            ; 005040df
    PUSH 0x0                            ; 005040e1
    LEA EDX,[ESP + 0xc]                 ; 005040e3
    PUSH EDX                            ; 005040e7
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 005040e8
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV dword ptr [ESI + 0x114],0x17b   ; 005040ed
    MOV dword ptr [ESI + 0x118],0x44    ; 005040f7
    MOV dword ptr [ESI + 0x11c],0x5a    ; 00504101
    MOV dword ptr [ESI + 0x120],0x5a    ; 0050410b
    MOV dword ptr [ESI + 0x110],0x1     ; 00504115
    ADD ESP,0x10                        ; 0050411f
    MOV dword ptr [ESI + 0x124],0x6b    ; 00504122
    PUSH 0x0                            ; 0050412c
    LEA EDX,[ESP + 0x4]                 ; 0050412e
    MOV dword ptr [ESI + 0x128],0x9a    ; 00504132
    PUSH EDX                            ; 0050413c
    MOV dword ptr [ESI + 0x12c],0xff    ; 0050413d
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 00504147
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr)
    ADD ESP,0x8                         ; 0050414c
    ADD ESP,0x50                        ; 0050414f
    POP EDI                             ; 00504152
    POP ESI                             ; 00504153
    RET                                 ; 00504154

