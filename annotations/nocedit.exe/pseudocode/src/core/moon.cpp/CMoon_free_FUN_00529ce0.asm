; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_free_FUN_00529ce0(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00513161
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512f04
;   core_moon.cpp_CMoon_dtor_FUN_00529ab0 at 00529ab6
;
; Referenced Globals:
;   CAlphaBitmap g_MoonCloudTexture
;   CAlphaBitmap[30] g_MoonAnimTextures
;   undefined4 g_MoonAnimTextures[1].raw
;   int g_MoonCloudScrollX
;   CCourse[3] g_MoonBatCourses
;   undefined4 g_MoonBatCourses[1].len
;   SBat[30] g_MoonBats
;   CKeyFramedModel g_MoonBatModel
;
; Called Functions:
;   core_course.cpp_CCourse_free_FUN_004426c0
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529ce0
        ;   Label: core_moon.cpp_CMoon_free_FUN_00529ce0
    PUSH ESI                            ; 00529ce1
    PUSH EDI                            ; 00529ce2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00529ce3
    CMP dword ptr [EDI],0x0             ; 00529ce7
    JNZ 0x00529d21                      ; 00529cea
        ;   XREF to: 00529d21 (CONDITIONAL_JUMP)  ; LAB_00529d21
    MOV EBX,0x2f381e8                   ; 00529cec | g_MoonBatCourses
        ;   Label: LAB_00529cec
    LEA ESI,[EBX + 0x24]                ; 00529cf1 | g_MoonBats
    PUSH EBX                            ; 00529cf4 | g_MoonBatCourses | g_MoonBatCourses[1].len
        ;   Label: LAB_00529cf4
    CALL core_course.cpp_CCourse_free_FUN_004426c0 ; 00529cf5
        ;   XREF to: 004426c0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)
    ADD EBX,0xc                         ; 00529cfa | g_MoonBatCourses[1].len
    ADD ESP,0x4                         ; 00529cfd
    CMP EBX,ESI                         ; 00529d00
    JNZ 0x00529cf4                      ; 00529d02
        ;   XREF to: 00529cf4 (CONDITIONAL_JUMP)  ; LAB_00529cf4
    LEA EBX,[EDI + 0x8]                 ; 00529d04
    PUSH EBX                            ; 00529d07
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00529d08
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00529d0d
    PUSH 0x2f384dc                      ; 00529d10 | g_MoonBatModel
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00529d15
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00529d1a
    POP EDI                             ; 00529d1d
    POP ESI                             ; 00529d1e
    POP EBX                             ; 00529d1f
    RET                                 ; 00529d20
    PUSH 0x2f37f70                      ; 00529d21 | g_MoonCloudTexture
        ;   Label: LAB_00529d21
    MOV EBX,0x2f37f84                   ; 00529d26 | g_MoonAnimTextures
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 00529d2b
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00529d30
    LEA ESI,[EBX + 0x258]               ; 00529d33 | g_MoonCloudScrollX
    PUSH EBX                            ; 00529d39 | g_MoonAnimTextures | g_MoonAnimTextures[1].raw
        ;   Label: LAB_00529d39
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 00529d3a
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 00529d3f
    ADD ESP,0x4                         ; 00529d42
    CMP EBX,ESI                         ; 00529d45
    JNZ 0x00529d39                      ; 00529d47
        ;   XREF to: 00529d39 (CONDITIONAL_JUMP)  ; LAB_00529d39
    MOV dword ptr [EDI],0x0             ; 00529d49
    JMP 0x00529cec                      ; 00529d4f
        ;   XREF to: 00529cec (UNCONDITIONAL_JUMP)  ; LAB_00529cec

