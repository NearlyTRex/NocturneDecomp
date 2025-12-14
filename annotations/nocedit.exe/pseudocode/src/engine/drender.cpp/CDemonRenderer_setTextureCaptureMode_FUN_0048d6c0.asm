; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_advanced_mode
;
; XREF[7]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413c32
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 00417506
;   core_boneguy.cpp_FUN_0041d1b0 at 0041d1ff
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485d45
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004ff151
;   core_morph.cpp_FUN_0052b160 at 0052b174
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005971ac
;
; Referenced Globals:
;   int g_CaptureFaceCount
;   int g_CaptureTextureCount
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048d6c0
        ;   Label: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048d6c4
    TEST ECX,ECX                        ; 0048d6c7
    JZ 0x0048d6d3                       ; 0048d6c9
        ;   XREF to: 0048d6d3 (CONDITIONAL_JUMP)  ; LAB_0048d6d3
    MOV dword ptr [EDX + 0x1c],0x0      ; 0048d6cb
    RET                                 ; 0048d6d2
    PUSH EDI                            ; 0048d6d3
        ;   Label: LAB_0048d6d3
    CMP dword ptr [ESP + 0xc],0x0       ; 0048d6d4
    SETNZ AL                            ; 0048d6d9
    MOV EDI,0xffffffff                  ; 0048d6dc
    AND EAX,0xff                        ; 0048d6e1
    MOV dword ptr [0x02c6d5ec],ECX      ; 0048d6e6 | g_CaptureFaceCount
    INC EAX                             ; 0048d6ec
    MOV dword ptr [0x02c6d5f0],EDI      ; 0048d6ed | g_CaptureTextureCount
    MOV dword ptr [EDX + 0x1c],EAX      ; 0048d6f3
    POP EDI                             ; 0048d6f6
    RET                                 ; 0048d6f7

