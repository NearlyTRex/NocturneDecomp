; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_init_FUN_00529ae0(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 005131c6
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512ea5
;
; Referenced Globals:
;   TerminatedCString s_taylor_head_kfm_00639f11
;   TerminatedCString s_moon_kfm_00639f21
;   TerminatedCString s_menubat_kfm_00639f2a
;   TerminatedCString s_menucld2_00639f36
;   TerminatedCString s_menu1_pth_00639f3f
;   TerminatedCString s_menu2_pth_00639f49
;   TerminatedCString s_menu3_pth_00639f53
;   TerminatedCString s_noc00000_00639fd1
;   TerminatedCString s_noc00001_00639fda
;   CGame* g_CGamePtr = 02d81a9c
;   char*[30] PTR_s_noc00000_0067d758
;   undefined4 PTR_s_noc00001_0067d75c
;   undefined4 DAT_02d81cb0
;   CAlphaBitmap g_MoonCloudTexture
;   CAlphaBitmap[30] g_MoonAnimTextures
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529ae0
        ;   Label: core_moon.cpp_CMoon_init_FUN_00529ae0
    PUSH ESI                            ; 00529ae1
    PUSH EDI                            ; 00529ae2
    PUSH EBP                            ; 00529ae3
    SUB ESP,0x4                         ; 00529ae4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00529ae7
    CMP dword ptr [EDI],0x0             ; 00529aeb
    JZ 0x00529bf0                       ; 00529aee
        ;   XREF to: 00529bf0 (CONDITIONAL_JUMP)  ; LAB_00529bf0
    MOV ESI,0x3                         ; 00529af4
        ;   Label: LAB_00529af4
    MOV dword ptr [EDI + 0x4],0x3e800000 ; 00529af9
    XOR EBX,EBX                         ; 00529b00
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00529b02
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_00529b02
    MOV EDX,EAX                         ; 00529b07
    SAR EDX,0x1f                        ; 00529b09
    IDIV ESI                            ; 00529b0c
    MOV dword ptr [EBX + 0x2f3820c],EDX ; 00529b0e | g_MoonBats | DAT_02f38224
    IMUL EDX,EDX,0xc                    ; 00529b14
    ADD EDX,0x2f381e8                   ; 00529b17 | g_MoonBatCourses
    MOV EDX,dword ptr [EDX]             ; 00529b1d | g_MoonBatCourses
    MOV dword ptr [ESP],EDX             ; 00529b1f
    FILD dword ptr [ESP]                ; 00529b22
    SUB ESP,0x4                         ; 00529b25
    FSTP float ptr [ESP]                ; 00529b28
    PUSH 0x0                            ; 00529b2b
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00529b2d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EDX,dword ptr [0x0067b654]      ; 00529bf0 | g_CGamePtr
        ;   Label: LAB_00529bf0
    MOV ECX,dword ptr [EDX + 0x214]     ; 00529bf6 | DAT_02d81cb0
    LEA EAX,[EDI + 0x8]                 ; 00529bfc
    CMP ECX,0x29a                       ; 00529bff
    JNZ 0x00529cc3                      ; 00529c05
        ;   XREF to: 00529cc3 (CONDITIONAL_JUMP)  ; LAB_00529cc3
    PUSH 0x639f11                       ; 00529c0b | = "taylor_head.kfm"
    PUSH EAX                            ; 00529c10
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 00529c11
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    MOV EAX,[0x0067b654]                ; 00529c16 | g_CGamePtr
    ADD ESP,0x8                         ; 00529c1b
    MOV dword ptr [EAX + 0x214],0x0     ; 00529c1e | DAT_02d81cb0
    PUSH 0x639f2a                       ; 00529c28 | = "menubat.kfm"
        ;   Label: LAB_00529c28
    PUSH 0x2f384dc                      ; 00529c2d | g_MoonBatModel
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 00529c32
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00529c37
    PUSH 0x100                          ; 00529c3a
    PUSH 0x100                          ; 00529c3f
    PUSH 0x639f36                       ; 00529c44 | = "menucld2"
    PUSH 0x2f37f70                      ; 00529c49 | g_MoonCloudTexture
    MOV ESI,0x2f37f84                   ; 00529c4e | g_MoonAnimTextures
    XOR EBX,EBX                         ; 00529c53
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00529c55
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00529c5a
    PUSH 0x116                          ; 00529c5d
        ;   Label: LAB_00529c5d
    PUSH 0x280                          ; 00529c62
    MOV EBP,dword ptr [EBX + 0x67d758]  ; 00529c67 | PTR_s_noc00000_0067d758 | PTR_s_noc00001_0067d75c
    PUSH EBP                            ; 00529c6d | = "noc00000" | s_noc00001_00639fda
    PUSH ESI                            ; 00529c6e | g_MoonAnimTextures | DAT_02f37f98
    ADD EBX,0x4                         ; 00529c6f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00529c72
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00529c77
    ADD ESI,0x14                        ; 00529c7a
    CMP EBX,0x78                        ; 00529c7d
    JNZ 0x00529c5d                      ; 00529c80
        ;   XREF to: 00529c5d (CONDITIONAL_JUMP)  ; LAB_00529c5d
    PUSH 0x639f3f                       ; 00529c82 | = "menu1.pth"
    PUSH 0x2f381e8                      ; 00529c87 | g_MoonBatCourses
    MOV dword ptr [EDI],0x1             ; 00529c8c
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 00529c92
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00529c97
    PUSH 0x639f49                       ; 00529c9a | = "menu2.pth"
    PUSH 0x2f381f4                      ; 00529c9f | DAT_02f381f4
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 00529ca4
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00529ca9
    PUSH 0x639f53                       ; 00529cac | = "menu3.pth"
    PUSH 0x2f38200                      ; 00529cb1 | DAT_02f38200
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 00529cb6
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00529cbb
    JMP 0x00529af4                      ; 00529cbe
        ;   XREF to: 00529af4 (UNCONDITIONAL_JUMP)  ; LAB_00529af4
    PUSH 0x639f21                       ; 00529cc3 | = "moon.kfm"
        ;   Label: LAB_00529cc3
    PUSH EAX                            ; 00529cc8
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 00529cc9
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00529cce
    JMP 0x00529c28                      ; 00529cd1
        ;   XREF to: 00529c28 (UNCONDITIONAL_JUMP)  ; LAB_00529c28

