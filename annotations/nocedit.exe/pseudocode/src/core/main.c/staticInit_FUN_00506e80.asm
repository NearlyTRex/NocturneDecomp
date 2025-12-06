; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_main.c_staticInit_FUN_00506e80(void)
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
;   crt_stdlib.c_atexit_FUN_005ff060
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
;
; *****************************************************************************

section .text

    PUSH 0x2dd4130                      ; 00506e80 | CDemonFileManager g_CDemonFileManagerInstance
        ;   Label: core_main.c_staticInit_FUN_00506e80
    CALL engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0 ; 00506e85 | CFileManager * engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0(CFileManager * this_ptr)
        ;   XREF to: 004b53a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506e8a
    MOV EDX,0x660d24                    ; 00506e8d | CFileManager_vtable g_CDemonFileManagerVTable
    PUSH 0x67d010                       ; 00506e92 | WatcomStaticDestructorNode g_CDemonFileManagerDestructorNode
    MOV dword ptr [0x02f0c940],EDX      ; 00506e97 | DAT_02f0c940
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00506e9d | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506ea2
    PUSH 0x2f0ca54                      ; 00506ea5 | CAlphaBitmap g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506eaa | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506eaf
    PUSH 0x67d020                       ; 00506eb2 | WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00506eb7 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506ebc
    PUSH 0x2f0ca68                      ; 00506ebf | CAlphaBitmap g_LoadingScreenBitmap2
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506ec4 | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506ec9
    PUSH 0x67d030                       ; 00506ecc | WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00506ed1 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506ed6
    PUSH 0x2f0ca7c                      ; 00506ed9 | CAlphaBitmap g_LoadingScreenBitmap3
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506ede | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506ee3
    PUSH 0x67d040                       ; 00506ee6 | WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00506eeb | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506ef0
    PUSH 0x2f0ca90                      ; 00506ef3 | CAlphaBitmap g_LoadingScreenBitmap4
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 00506ef8 | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506efd
    PUSH 0x67d050                       ; 00506f00 | WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00506f05 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00506f0a
    RET                                 ; 00506f0d

