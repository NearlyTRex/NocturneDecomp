; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_staticInit_FUN_00506e80(void)
;
;
; Referenced Globals:
;   CFileManager_vtable g_CDemonFileManagerVTable
;   WatcomStaticDestructorNode g_CDemonFileManagerDestructorNode
;   WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode
;   WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode
;   WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode
;   WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode
;   CDemonFileManager g_CDemonFileManagerInstance
;   undefined4 DAT_02f0c940
;   CAlphaBitmap g_LoadingScreenBitmap1
;   CAlphaBitmap g_LoadingScreenBitmap2
;   CAlphaBitmap g_LoadingScreenBitmap3
;   CAlphaBitmap g_LoadingScreenBitmap4
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005ff060
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
;
; *****************************************************************************

section .text

    PUSH 0x2dd4130                      ; 00506e80 | g_CDemonFileManagerInstance
        ;   Label: core_main.c_staticInit_FUN_00506e80
    CALL engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0 ; 00506e85
        ;   XREF to: 004b53a0 (UNCONDITIONAL_CALL)  ; CFileManager * engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 00506e8a
    MOV EDX,0x660d24                    ; 00506e8d | g_CDemonFileManagerVTable
    PUSH 0x67d010                       ; 00506e92 | g_CDemonFileManagerDestructorNode
    MOV dword ptr [0x02f0c940],EDX      ; 00506e97 | DAT_02f0c940
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00506e9d
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506ea2
    PUSH 0x2f0ca54                      ; 00506ea5 | g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506eaa
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00506eaf
    PUSH 0x67d020                       ; 00506eb2 | g_LoadingScreenBitmap1DestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00506eb7
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506ebc
    PUSH 0x2f0ca68                      ; 00506ebf | g_LoadingScreenBitmap2
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506ec4
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00506ec9
    PUSH 0x67d030                       ; 00506ecc | g_LoadingScreenBitmap2DestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00506ed1
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506ed6
    PUSH 0x2f0ca7c                      ; 00506ed9 | g_LoadingScreenBitmap3
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506ede
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00506ee3
    PUSH 0x67d040                       ; 00506ee6 | g_LoadingScreenBitmap3DestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00506eeb
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506ef0
    PUSH 0x2f0ca90                      ; 00506ef3 | g_LoadingScreenBitmap4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506ef8
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00506efd
    PUSH 0x67d050                       ; 00506f00 | g_LoadingScreenBitmap4DestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00506f05
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506f0a
    RET                                 ; 00506f0d

