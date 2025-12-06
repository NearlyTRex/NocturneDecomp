; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
;
; Parameters:
; typedef HWND HWND__ * Stack[0x4]:4   window_handle
;
; XREF[4]:
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00511245
;   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10 at 005ecd39
;   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 at 005b748a
;   wincore_windll.cpp_switchRenderer_FUN_005b8140 at 005b817a
;
; Referenced Globals:
;   TerminatedCString s_APIDLLInformation_0065293f
;   TerminatedCString s_APIDLLinit_00652951
;   TerminatedCString s_APIDLLkill_0065295c
;   TerminatedCString s_APIDLLtoggle_00652967
;   TerminatedCString s_APIDLLsetVideoMode_00652974
;   TerminatedCString s_APIDLLsetVideoMode2_00652987
;   TerminatedCString s_APIDLLrestoreVideoMode_0065299b
;   TerminatedCString s_APIDLLbeginScene_006529b2
;   TerminatedCString s_APIDLLendScene_006529c3
;   TerminatedCString s_APIDLLlockFrame_006529d2
;   TerminatedCString s_APIDLLunlockFrame_006529e2
;   TerminatedCString s_APIDLLselectTexture_006529f4
;   TerminatedCString s_APIDLLupdateTexture_00652a08
;   TerminatedCString s_APIDLLselectTextureBGRA_00652a1c
;   TerminatedCString s_APIDLLupdateTextureBGRA_00652a34
;   ... and 139 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
;   wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
;   wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
;   wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
;   wincore_windll.cpp_selectCard_FUN_005b7d90
;   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6750
        ;   Label: wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
    PUSH ESI                            ; 005b6751
    PUSH EDI                            ; 005b6752
    PUSH EBP                            ; 005b6753
    SUB ESP,0x3c1c                      ; 005b6754
    MOV EBX,dword ptr [ESP + 0x3c30]    ; 005b675a
    TEST EBX,EBX                        ; 005b6761
    JNZ 0x005b6781                      ; 005b6763 | LAB_005b6781
        ;   XREF to: 005b6781 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x03f6b98c]      ; 005b6765 | HWND g_StoredWindowHandle
    CMP dword ptr [0x03f6b878],0x0      ; 005b676b | int g_FullscreenMode
        ;   Label: LAB_005b676b
    JNZ 0x005b6789                      ; 005b6772 | LAB_005b6789
        ;   XREF to: 005b6789 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b6774
    ADD ESP,0x3c1c                      ; 005b6776
    POP EBP                             ; 005b677c
    POP EDI                             ; 005b677d
    POP ESI                             ; 005b677e
    POP EBX                             ; 005b677f
    RET                                 ; 005b6780
    MOV dword ptr [0x03f6b98c],EBX      ; 005b6781 | HWND g_StoredWindowHandle
        ;   Label: LAB_005b6781
    JMP 0x005b676b                      ; 005b6787 | LAB_005b676b
        ;   XREF to: 005b676b (UNCONDITIONAL_JUMP)
    PUSH 0x684010                       ; 005b6789 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
        ;   Label: LAB_005b6789
    CALL wincore_wddvmem.cpp_loadLibrary_FUN_005ede10 ; 005b678e | HMODULE wincore_wddvmem.cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName)
        ;   XREF to: 005ede10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b6793
    MOV [0x03f6b97c],EAX                ; 005b6796 | HMODULE g_RendererDLLHandle
    TEST EAX,EAX                        ; 005b679b
    JNZ 0x005b67b1                      ; 005b679d | LAB_005b67b1
        ;   XREF to: 005b67b1 (CONDITIONAL_JUMP)
    MOV [0x03f6b878],EAX                ; 005b679f | int g_FullscreenMode
    XOR EAX,EAX                         ; 005b67a4
    ADD ESP,0x3c1c                      ; 005b67a6
    POP EBP                             ; 005b67ac
    POP EDI                             ; 005b67ad
    POP ESI                             ; 005b67ae
    POP EBX                             ; 005b67af
    RET                                 ; 005b67b0
    PUSH 0x65293f                       ; 005b67b1 | = "APIDLLInformation" | s_APIDLLInformation_0065293f = APIDLLInformation
        ;   Label: LAB_005b67b1
    PUSH EAX                            ; 005b67b6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b67b7 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b67bc
    MOV EDX,EAX                         ; 005b67bf
    TEST EAX,EAX                        ; 005b67c1
    JZ 0x005b6fb9                       ; 005b67c3 | LAB_005b6fb9
        ;   XREF to: 005b6fb9 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 005b67c9
    PUSH EAX                            ; 005b67cb
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b67cc | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b67d2
    CALL EDX                            ; 005b67d3
    ADD ESP,0x8                         ; 005b67d5
    LEA EAX,[ESP + 0x1dc8]              ; 005b67d8
    PUSH EAX                            ; 005b67df
    CALL wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90 ; 005b67e0 | void wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer * this_ptr)
        ;   XREF to: 005b7f90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b67e5
    LEA EAX,[ESP + 0x1dc8]              ; 005b67e8
    PUSH EAX                            ; 005b67ef
    LEA EAX,[ESP + 0x4]                 ; 005b67f0
    PUSH EAX                            ; 005b67f4
    CALL wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0 ; 005b67f5 | bool wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
        ;   XREF to: 005b7fe0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b67fa
    TEST EAX,EAX                        ; 005b67fd
    JZ 0x005b6f9f                       ; 005b67ff | LAB_005b6f9f
        ;   XREF to: 005b6f9f (CONDITIONAL_JUMP)
    PUSH 0x652951                       ; 005b6805 | = "APIDLLinit" | s_APIDLLinit_00652951 = APIDLLinit
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b680a | HMODULE g_RendererDLLHandle
    XOR ESI,ESI                         ; 005b6810
    PUSH EDI                            ; 005b6812
    MOV dword ptr [0x03f6b994],ESI      ; 005b6813 | int g_DLLFunctionsMissing
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6819 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b681e
    MOV [0x03f6b88c],EAX                ; 005b6821 | APIDLL_init * g_APIDLL_init
    TEST EAX,EAX                        ; 005b6826
    JNZ 0x005b6834                      ; 005b6828 | LAB_005b6834
        ;   XREF to: 005b6834 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b682a | int g_DLLFunctionsMissing
    PUSH 0x65295c                       ; 005b6834 | = "APIDLLkill" | s_APIDLLkill_0065295c = APIDLLkill
        ;   Label: LAB_005b6834
    MOV EAX,[0x03f6b97c]                ; 005b6839 | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b683e
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b683f | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6844
    MOV [0x03f6b890],EAX                ; 005b6847 | APIDLL_kill * g_APIDLL_kill
    TEST EAX,EAX                        ; 005b684c
    JNZ 0x005b685a                      ; 005b684e | LAB_005b685a
        ;   XREF to: 005b685a (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6850 | int g_DLLFunctionsMissing
    PUSH 0x652967                       ; 005b685a | = "APIDLLtoggle" | s_APIDLLtoggle_00652967 = APIDLLtoggle
        ;   Label: LAB_005b685a
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b685f | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b6865
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6866 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b686b
    MOV [0x03f6b894],EAX                ; 005b686e | APIDLL_toggle * g_APIDLL_toggle
    TEST EAX,EAX                        ; 005b6873
    JNZ 0x005b6881                      ; 005b6875 | LAB_005b6881
        ;   XREF to: 005b6881 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6877 | int g_DLLFunctionsMissing
    PUSH 0x652974                       ; 005b6881 | = "APIDLLsetVideoMode" | s_APIDLLsetVideoMode_00652974 = APIDLLsetVideoMode
        ;   Label: LAB_005b6881
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6886 | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b688c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b688d | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6892
    MOV [0x03f6b898],EAX                ; 005b6895 | void * g_APIDLL_setVideoMode
    TEST EAX,EAX                        ; 005b689a
    JNZ 0x005b68a8                      ; 005b689c | LAB_005b68a8
        ;   XREF to: 005b68a8 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b689e | int g_DLLFunctionsMissing
    PUSH 0x652987                       ; 005b68a8 | = "APIDLLsetVideoMode2" | s_APIDLLsetVideoMode2_00652987 = APIDLLsetVideoMode2
        ;   Label: LAB_005b68a8
    MOV EAX,[0x03f6b97c]                ; 005b68ad | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b68b2
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b68b3 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b68b8
    MOV [0x03f6b89c],EAX                ; 005b68bb | APIDLL_setVideoMode2 * g_APIDLL_setVideoMode2
    TEST EAX,EAX                        ; 005b68c0
    JNZ 0x005b68ce                      ; 005b68c2 | LAB_005b68ce
        ;   XREF to: 005b68ce (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b68c4 | int g_DLLFunctionsMissing
    PUSH 0x65299b                       ; 005b68ce | = "APIDLLrestoreVideoMode" | s_APIDLLrestoreVideoMode_0065299b = APIDLLrestoreVideoMode
        ;   Label: LAB_005b68ce
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b68d3 | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b68d9
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b68da | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b68df
    MOV [0x03f6b8a0],EAX                ; 005b68e2 | APIDLL_restoreVideoMode * g_APIDLL_restoreVideoMode
    TEST EAX,EAX                        ; 005b68e7
    JNZ 0x005b68f5                      ; 005b68e9 | LAB_005b68f5
        ;   XREF to: 005b68f5 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b68eb | int g_DLLFunctionsMissing
    PUSH 0x6529b2                       ; 005b68f5 | = "APIDLLbeginScene" | s_APIDLLbeginScene_006529b2 = APIDLLbeginScene
        ;   Label: LAB_005b68f5
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b68fa | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b6900
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6901 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6906
    MOV [0x03f6b8a4],EAX                ; 005b6909 | APIDLL_beginScene * g_APIDLL_beginScene
    TEST EAX,EAX                        ; 005b690e
    JNZ 0x005b691c                      ; 005b6910 | LAB_005b691c
        ;   XREF to: 005b691c (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6912 | int g_DLLFunctionsMissing
    PUSH 0x6529c3                       ; 005b691c | = "APIDLLendScene" | s_APIDLLendScene_006529c3 = APIDLLendScene
        ;   Label: LAB_005b691c
    MOV EAX,[0x03f6b97c]                ; 005b6921 | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b6926
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6927 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b692c
    MOV [0x03f6b8a8],EAX                ; 005b692f | APIDLL_endScene * g_APIDLL_endScene
    TEST EAX,EAX                        ; 005b6934
    JNZ 0x005b6942                      ; 005b6936 | LAB_005b6942
        ;   XREF to: 005b6942 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6938 | int g_DLLFunctionsMissing
    PUSH 0x6529d2                       ; 005b6942 | = "APIDLLlockFrame" | s_APIDLLlockFrame_006529d2 = APIDLLlockFrame
        ;   Label: LAB_005b6942
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6947 | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b694d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b694e | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6953
    MOV [0x03f6b8ac],EAX                ; 005b6956 | APIDLL_lockFrame * g_APIDLL_lockFrame
    TEST EAX,EAX                        ; 005b695b
    JNZ 0x005b6969                      ; 005b695d | LAB_005b6969
        ;   XREF to: 005b6969 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b695f | int g_DLLFunctionsMissing
    PUSH 0x6529e2                       ; 005b6969 | = "APIDLLunlockFrame" | s_APIDLLunlockFrame_006529e2 = APIDLLunlockFrame
        ;   Label: LAB_005b6969
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b696e | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b6974
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6975 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b697a
    MOV [0x03f6b8b0],EAX                ; 005b697d | APIDLL_unlockFrame * g_APIDLL_unlockFrame
    TEST EAX,EAX                        ; 005b6982
    JNZ 0x005b6990                      ; 005b6984 | LAB_005b6990
        ;   XREF to: 005b6990 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6986 | int g_DLLFunctionsMissing
    PUSH 0x6529f4                       ; 005b6990 | = "APIDLLselectTexture" | s_APIDLLselectTexture_006529f4 = APIDLLselectTexture
        ;   Label: LAB_005b6990
    MOV EAX,[0x03f6b97c]                ; 005b6995 | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b699a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b699b | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b69a0
    MOV [0x03f6b8b4],EAX                ; 005b69a3 | APIDLL_selectTexture * g_APIDLL_selectTexture
    TEST EAX,EAX                        ; 005b69a8
    JNZ 0x005b69b6                      ; 005b69aa | LAB_005b69b6
        ;   XREF to: 005b69b6 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b69ac | int g_DLLFunctionsMissing
    PUSH 0x652a08                       ; 005b69b6 | = "APIDLLupdateTexture" | s_APIDLLupdateTexture_00652a08 = APIDLLupdateTexture
        ;   Label: LAB_005b69b6
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b69bb | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b69c1
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b69c2 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b69c7
    MOV [0x03f6b8b8],EAX                ; 005b69ca | APIDLL_updateTexture * g_APIDLL_updateTexture
    TEST EAX,EAX                        ; 005b69cf
    JNZ 0x005b69dd                      ; 005b69d1 | LAB_005b69dd
        ;   XREF to: 005b69dd (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b69d3 | int g_DLLFunctionsMissing
    PUSH 0x652a1c                       ; 005b69dd | = "APIDLLselectTextureBGRA" | s_APIDLLselectTextureBGRA_00652a1c = APIDLLselectTextureBGRA
        ;   Label: LAB_005b69dd
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b69e2 | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b69e8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b69e9 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b69ee
    PUSH 0x652a34                       ; 005b69f1 | = "APIDLLupdateTextureBGRA" | s_APIDLLupdateTextureBGRA_00652a34 = APIDLLupdateTextureBGRA
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b69f6 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b69fc
    MOV [0x03f6b8bc],EAX                ; 005b69fd | APIDLL_selectTextureBGRA * g_APIDLL_selectTextureBGRA
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6a02 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6a07
    PUSH 0x652a4c                       ; 005b6a0a | = "APIDLLsetMipMapLevel" | s_APIDLLsetMipMapLevel_00652a4c = APIDLLsetMipMapLevel
    MOV [0x03f6b8c0],EAX                ; 005b6a0f | APIDLL_updateTextureBGRA * g_APIDLL_updateTextureBGRA
    MOV EAX,[0x03f6b97c]                ; 005b6a14 | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b6a19
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6a1a | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6a1f
    MOV [0x03f6b8c4],EAX                ; 005b6a22 | APIDLL_setMipMapLevel * g_APIDLL_setMipMapLevel
    TEST EAX,EAX                        ; 005b6a27
    JNZ 0x005b6a35                      ; 005b6a29 | LAB_005b6a35
        ;   XREF to: 005b6a35 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6a2b | int g_DLLFunctionsMissing
    PUSH 0x652a61                       ; 005b6a35 | = "APIDLLdrawPolygon" | s_APIDLLdrawPolygon_00652a61 = APIDLLdrawPolygon
        ;   Label: LAB_005b6a35
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6a3a | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b6a40
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6a41 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6a46
    MOV [0x03f6b8c8],EAX                ; 005b6a49 | APIDLL_drawPolygon * g_APIDLL_drawPolygon
    TEST EAX,EAX                        ; 005b6a4e
    JNZ 0x005b6a5c                      ; 005b6a50 | LAB_005b6a5c
        ;   XREF to: 005b6a5c (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6a52 | int g_DLLFunctionsMissing
    PUSH 0x652a73                       ; 005b6a5c | = "APIDLLdrawPolygon2" | s_APIDLLdrawPolygon2_00652a73 = APIDLLdrawPolygon2
        ;   Label: LAB_005b6a5c
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6a61 | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b6a67
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6a68 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6a6d
    MOV [0x03f6b8cc],EAX                ; 005b6a70 | APIDLL_drawPolygon2 * g_APIDLL_drawPolygon2
    TEST EAX,EAX                        ; 005b6a75
    JNZ 0x005b6a83                      ; 005b6a77 | LAB_005b6a83
        ;   XREF to: 005b6a83 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6a79 | int g_DLLFunctionsMissing
    PUSH 0x652a86                       ; 005b6a83 | = "APIDLLdrawPolyList" | s_APIDLLdrawPolyList_00652a86 = APIDLLdrawPolyList
        ;   Label: LAB_005b6a83
    MOV EAX,[0x03f6b97c]                ; 005b6a88 | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b6a8d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6a8e | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6a93
    PUSH 0x652a99                       ; 005b6a96 | = "APIDLLdrawPolyList2" | s_APIDLLdrawPolyList2_00652a99 = APIDLLdrawPolyList2
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6a9b | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6aa1
    MOV [0x03f6b8d0],EAX                ; 005b6aa2 | APIDLL_drawPolyList * g_APIDLL_drawPolyList
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6aa7 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6aac
    PUSH 0x652aad                       ; 005b6aaf | = "APIDLLdrawPolyList3" | s_APIDLLdrawPolyList3_00652aad = APIDLLdrawPolyList3
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6ab4 | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b6aba
    MOV [0x03f6b8d4],EAX                ; 005b6abb | APIDLL_drawPolyList2 * g_APIDLL_drawPolyList2
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6ac0 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6ac5
    PUSH 0x652ac1                       ; 005b6ac8 | = "APIDLLaddParticle" | s_APIDLLaddParticle_00652ac1 = APIDLLaddParticle
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6acd | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6ad3
    MOV [0x03f6b8d8],EAX                ; 005b6ad4 | APIDLL_drawPolyList3 * g_APIDLL_drawPolyList3
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6ad9 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6ade
    MOV [0x03f6b8dc],EAX                ; 005b6ae1 | APIDLL_addParticle * g_APIDLL_addParticle
    TEST EAX,EAX                        ; 005b6ae6
    JNZ 0x005b6af4                      ; 005b6ae8 | LAB_005b6af4
        ;   XREF to: 005b6af4 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6aea | int g_DLLFunctionsMissing
    PUSH 0x652ad3                       ; 005b6af4 | = "APIDLLflushParticleList" | s_APIDLLflushParticleList_00652ad3 = APIDLLflushParticleList
        ;   Label: LAB_005b6af4
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6af9 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6aff
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6b00 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6b05
    MOV [0x03f6b8e0],EAX                ; 005b6b08 | APIDLL_flushParticleList * g_APIDLL_flushParticleList
    TEST EAX,EAX                        ; 005b6b0d
    JNZ 0x005b6b1b                      ; 005b6b0f | LAB_005b6b1b
        ;   XREF to: 005b6b1b (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6b11 | int g_DLLFunctionsMissing
    PUSH 0x652aeb                       ; 005b6b1b | = "APIDLLadd3dLine" | s_APIDLLadd3dLine_00652aeb = APIDLLadd3dLine
        ;   Label: LAB_005b6b1b
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6b20 | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6b26
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6b27 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6b2c
    MOV [0x03f6b8e4],EAX                ; 005b6b2f | APIDLL_add3dLine * g_APIDLL_add3dLine
    TEST EAX,EAX                        ; 005b6b34
    JNZ 0x005b6b42                      ; 005b6b36 | LAB_005b6b42
        ;   XREF to: 005b6b42 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6b38 | int g_DLLFunctionsMissing
    PUSH 0x652afb                       ; 005b6b42 | = "APIDLLflushLineList" | s_APIDLLflushLineList_00652afb = APIDLLflushLineList
        ;   Label: LAB_005b6b42
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6b47 | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6b4d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6b4e | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6b53
    MOV [0x03f6b8e8],EAX                ; 005b6b56 | APIDLL_flushLineList * g_APIDLL_flushLineList
    TEST EAX,EAX                        ; 005b6b5b
    JNZ 0x005b6b69                      ; 005b6b5d | LAB_005b6b69
        ;   XREF to: 005b6b69 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6b5f | int g_DLLFunctionsMissing
    PUSH 0x652b0f                       ; 005b6b69 | = "APIDLLclear" | s_APIDLLclear_00652b0f = APIDLLclear
        ;   Label: LAB_005b6b69
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6b6e | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6b74
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6b75 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6b7a
    MOV [0x03f6b8ec],EAX                ; 005b6b7d | APIDLL_clear * g_APIDLL_clear
    TEST EAX,EAX                        ; 005b6b82
    JNZ 0x005b6b90                      ; 005b6b84 | LAB_005b6b90
        ;   XREF to: 005b6b90 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6b86 | int g_DLLFunctionsMissing
    PUSH 0x652b1b                       ; 005b6b90 | = "APIDLLsetFogColor" | s_APIDLLsetFogColor_00652b1b = APIDLLsetFogColor
        ;   Label: LAB_005b6b90
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6b95 | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6b9b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6b9c | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6ba1
    MOV [0x03f6b8f0],EAX                ; 005b6ba4 | APIDLL_setFogColor * g_APIDLL_setFogColor
    TEST EAX,EAX                        ; 005b6ba9
    JNZ 0x005b6bb7                      ; 005b6bab | LAB_005b6bb7
        ;   XREF to: 005b6bb7 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6bad | int g_DLLFunctionsMissing
    PUSH 0x652b2d                       ; 005b6bb7 | = "APIDLLsync" | s_APIDLLsync_00652b2d = APIDLLsync
        ;   Label: LAB_005b6bb7
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6bbc | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6bc2
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6bc3 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6bc8
    MOV [0x03f6b8f4],EAX                ; 005b6bcb | APIDLL_sync * g_APIDLL_sync
    TEST EAX,EAX                        ; 005b6bd0
    JNZ 0x005b6bde                      ; 005b6bd2 | LAB_005b6bde
        ;   XREF to: 005b6bde (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6bd4 | int g_DLLFunctionsMissing
    PUSH 0x652b38                       ; 005b6bde | = "APIDLLclearZBuffer" | s_APIDLLclearZBuffer_00652b38 = APIDLLclearZBuffer
        ;   Label: LAB_005b6bde
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6be3 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6be9
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6bea | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6bef
    MOV [0x03f6b8f8],EAX                ; 005b6bf2 | APIDLL_clearZBuffer * g_APIDLL_clearZBuffer
    TEST EAX,EAX                        ; 005b6bf7
    JNZ 0x005b6c05                      ; 005b6bf9 | LAB_005b6c05
        ;   XREF to: 005b6c05 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6bfb | int g_DLLFunctionsMissing
    PUSH 0x652b4b                       ; 005b6c05 | = "APIDLLclearZBox" | s_APIDLLclearZBox_00652b4b = APIDLLclearZBox
        ;   Label: LAB_005b6c05
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6c0a | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6c10
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6c11 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6c16
    MOV [0x03f6b8fc],EAX                ; 005b6c19 | APIDLL_clearZBox * g_APIDLL_clearZBox
    TEST EAX,EAX                        ; 005b6c1e
    JNZ 0x005b6c2c                      ; 005b6c20 | LAB_005b6c2c
        ;   XREF to: 005b6c2c (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6c22 | int g_DLLFunctionsMissing
    PUSH 0x652b5b                       ; 005b6c2c | = "APIDLLsetColorTable16" | s_APIDLLsetColorTable16_00652b5b = APIDLLsetColorTable16
        ;   Label: LAB_005b6c2c
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6c31 | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6c37
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6c38 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6c3d
    MOV [0x03f6b900],EAX                ; 005b6c40 | APIDLL_setColorTable16 * g_APIDLL_setColorTable16
    TEST EAX,EAX                        ; 005b6c45
    JNZ 0x005b6c53                      ; 005b6c47 | LAB_005b6c53
        ;   XREF to: 005b6c53 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6c49 | int g_DLLFunctionsMissing
    PUSH 0x652b71                       ; 005b6c53 | = "APIDLLGetDisplayContext" | s_APIDLLGetDisplayContext_00652b71 = APIDLLGetDisplayContext
        ;   Label: LAB_005b6c53
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6c58 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6c5e
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6c5f | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6c64
    MOV [0x03f6b904],EAX                ; 005b6c67 | void * g_APIDLL_GetDisplayContext
    TEST EAX,EAX                        ; 005b6c6c
    JNZ 0x005b6c7a                      ; 005b6c6e | LAB_005b6c7a
        ;   XREF to: 005b6c7a (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6c70 | int g_DLLFunctionsMissing
    PUSH 0x652b89                       ; 005b6c7a | = "APIDLLReleaseDisplayContext" | s_APIDLLReleaseDisplayCont_00652b89 = APIDLLReleaseDisplayContext
        ;   Label: LAB_005b6c7a
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6c7f | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6c85
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6c86 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6c8b
    MOV [0x03f6b908],EAX                ; 005b6c8e | void * g_APIDLL_ReleaseDisplayContext
    TEST EAX,EAX                        ; 005b6c93
    JNZ 0x005b6ca1                      ; 005b6c95 | LAB_005b6ca1
        ;   XREF to: 005b6ca1 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6c97 | int g_DLLFunctionsMissing
    PUSH 0x652ba5                       ; 005b6ca1 | = "APIDLLmasterZBuffer" | s_APIDLLmasterZBuffer_00652ba5 = APIDLLmasterZBuffer
        ;   Label: LAB_005b6ca1
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6ca6 | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6cac
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6cad | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6cb2
    MOV [0x03f6b90c],EAX                ; 005b6cb5 | APIDLL_masterZBuffer * g_APIDLL_masterZBuffer
    TEST EAX,EAX                        ; 005b6cba
    JNZ 0x005b6cc8                      ; 005b6cbc | LAB_005b6cc8
        ;   XREF to: 005b6cc8 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6cbe | int g_DLLFunctionsMissing
    PUSH 0x652bb9                       ; 005b6cc8 | = "APIDLLrestoreZBuffer" | s_APIDLLrestoreZBuffer_00652bb9 = APIDLLrestoreZBuffer
        ;   Label: LAB_005b6cc8
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6ccd | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6cd3
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6cd4 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6cd9
    MOV [0x03f6b910],EAX                ; 005b6cdc | APIDLL_restoreZBuffer * g_APIDLL_restoreZBuffer
    TEST EAX,EAX                        ; 005b6ce1
    JNZ 0x005b6cef                      ; 005b6ce3 | LAB_005b6cef
        ;   XREF to: 005b6cef (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6ce5 | int g_DLLFunctionsMissing
    PUSH 0x652bce                       ; 005b6cef | = "APIDLLgetVideoMemory" | s_APIDLLgetVideoMemory_00652bce = APIDLLgetVideoMemory
        ;   Label: LAB_005b6cef
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6cf4 | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6cfa
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6cfb | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6d00
    MOV [0x03f6b914],EAX                ; 005b6d03 | APIDLL_getVideoMemory * g_APIDLL_getVideoMemory
    TEST EAX,EAX                        ; 005b6d08
    JNZ 0x005b6d16                      ; 005b6d0a | LAB_005b6d16
        ;   XREF to: 005b6d16 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6d0c | int g_DLLFunctionsMissing
    PUSH 0x652be3                       ; 005b6d16 | = "APIDLLselectCard" | s_APIDLLselectCard_00652be3 = APIDLLselectCard
        ;   Label: LAB_005b6d16
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6d1b | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6d21
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6d22 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6d27
    MOV [0x03f6b918],EAX                ; 005b6d2a | APIDLL_selectCard * g_APIDLL_selectCard
    TEST EAX,EAX                        ; 005b6d2f
    JNZ 0x005b6d3d                      ; 005b6d31 | LAB_005b6d3d
        ;   XREF to: 005b6d3d (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6d33 | int g_DLLFunctionsMissing
    PUSH 0x652bf4                       ; 005b6d3d | = "APIDLLbuildCardList" | s_APIDLLbuildCardList_00652bf4 = APIDLLbuildCardList
        ;   Label: LAB_005b6d3d
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6d42 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6d48
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6d49 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6d4e
    MOV [0x03f6b91c],EAX                ; 005b6d51 | APIDLL_buildCardList * g_APIDLL_buildCardList
    TEST EAX,EAX                        ; 005b6d56
    JNZ 0x005b6d64                      ; 005b6d58 | LAB_005b6d64
        ;   XREF to: 005b6d64 (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6d5a | int g_DLLFunctionsMissing
    PUSH 0x652c08                       ; 005b6d64 | = "APIDLLlockHoldBuffer" | s_APIDLLlockHoldBuffer_00652c08 = APIDLLlockHoldBuffer
        ;   Label: LAB_005b6d64
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6d69 | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6d6f
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6d70 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6d75
    PUSH 0x652c1d                       ; 005b6d78 | = "APIDLLunlockHoldBuffer" | s_APIDLLunlockHoldBuffer_00652c1d = APIDLLunlockHoldBuffer
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6d7d | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b6d83
    MOV [0x03f6b920],EAX                ; 005b6d84 | APIDLL_lockHoldBuffer * g_APIDLL_lockHoldBuffer
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6d89 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6d8e
    PUSH 0x652c34                       ; 005b6d91 | = "APIDLLlockTexture" | s_APIDLLlockTexture_00652c34 = APIDLLlockTexture
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6d96 | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6d9c
    MOV [0x03f6b924],EAX                ; 005b6d9d | APIDLL_unlockHoldBuffer * g_APIDLL_unlockHoldBuffer
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6da2 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6da7
    PUSH 0x652c46                       ; 005b6daa | = "APIDLLunlockTexture" | s_APIDLLunlockTexture_00652c46 = APIDLLunlockTexture
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6daf | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b6db5
    MOV [0x03f6b928],EAX                ; 005b6db6 | APIDLL_lockTexture * g_APIDLL_lockTexture
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6dbb | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6dc0
    PUSH 0x652c5a                       ; 005b6dc3 | = "APIDLLgetTextureInfo" | s_APIDLLgetTextureInfo_00652c5a = APIDLLgetTextureInfo
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6dc8 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6dce
    MOV [0x03f6b92c],EAX                ; 005b6dcf | APIDLL_unlockTexture * g_APIDLL_unlockTexture
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6dd4 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6dd9
    MOV [0x03f6b930],EAX                ; 005b6ddc | APIDLL_getTextureInfo * g_APIDLL_getTextureInfo
    TEST EAX,EAX                        ; 005b6de1
    JNZ 0x005b6def                      ; 005b6de3 | LAB_005b6def
        ;   XREF to: 005b6def (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f6b994],0x1      ; 005b6de5 | int g_DLLFunctionsMissing
    PUSH 0x652c6f                       ; 005b6def | = "APIDLLsetVideoModeX" | s_APIDLLsetVideoModeX_00652c6f = APIDLLsetVideoModeX
        ;   Label: LAB_005b6def
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6df4 | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6dfa
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6dfb | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6e00
    PUSH 0x652c83                       ; 005b6e03 | = "APIDLLrestoreVideoModeX" | s_APIDLLrestoreVideoModeX_00652c83 = APIDLLrestoreVideoModeX
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6e08 | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b6e0e
    MOV [0x03f6b934],EAX                ; 005b6e0f | APIDLL_setVideoModeX * g_APIDLL_setVideoModeX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6e14 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6e19
    PUSH 0x652c9b                       ; 005b6e1c | = "APIDLLlockFrameX" | s_APIDLLlockFrameX_00652c9b = APIDLLlockFrameX
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6e21 | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6e27
    MOV [0x03f6b938],EAX                ; 005b6e28 | APIDLL_restoreVideoModeX * g_APIDLL_restoreVideoModeX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6e2d | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6e32
    PUSH 0x652cac                       ; 005b6e35 | = "APIDLLunlockFrameX" | s_APIDLLunlockFrameX_00652cac = APIDLLunlockFrameX
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6e3a | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b6e40
    MOV [0x03f6b93c],EAX                ; 005b6e41 | APIDLL_lockFrameX * g_APIDLL_lockFrameX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6e46 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6e4b
    PUSH 0x652cbf                       ; 005b6e4e | = "APIDLLtoggleX" | s_APIDLLtoggleX_00652cbf = APIDLLtoggleX
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6e53 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6e59
    MOV [0x03f6b940],EAX                ; 005b6e5a | APIDLL_unlockFrameX * g_APIDLL_unlockFrameX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6e5f | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6e64
    PUSH 0x652ccd                       ; 005b6e67 | = "APIDLLsetViewport" | s_APIDLLsetViewport_00652ccd = APIDLLsetViewport
    MOV [0x03f6b944],EAX                ; 005b6e6c | APIDLL_toggleX * g_APIDLL_toggleX
    MOV EAX,[0x03f6b97c]                ; 005b6e71 | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b6e76
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6e77 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6e7c
    PUSH 0x652cdf                       ; 005b6e7f | = "APIDLLsetLightConstants" | s_APIDLLsetLightConstants_00652cdf = APIDLLsetLightConstants
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6e84 | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6e8a
    MOV [0x03f6b948],EAX                ; 005b6e8b | void * g_APIDLL_setViewport
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6e90 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6e95
    PUSH 0x652cf7                       ; 005b6e98 | = "APIDLLsetLightVector" | s_APIDLLsetLightVector_00652cf7 = APIDLLsetLightVector
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6e9d | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b6ea3
    MOV [0x03f6b94c],EAX                ; 005b6ea4 | void * g_APIDLL_setLightConstants
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6ea9 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6eae
    PUSH 0x652d0c                       ; 005b6eb1 | = "APIDLLsetAmbientLight" | s_APIDLLsetAmbientLight_00652d0c = APIDLLsetAmbientLight
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6eb6 | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6ebc
    MOV [0x03f6b950],EAX                ; 005b6ebd | void * g_APIDLL_setLightVector
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6ec2 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6ec7
    PUSH 0x652d22                       ; 005b6eca | = "APIDLLsetTransform" | s_APIDLLsetTransform_00652d22 = APIDLLsetTransform
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6ecf | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b6ed5
    MOV [0x03f6b954],EAX                ; 005b6ed6 | void * g_APIDLL_setAmbientLight
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6edb | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6ee0
    PUSH 0x652d35                       ; 005b6ee3 | = "APIDLLpolyList" | s_APIDLLpolyList_00652d35 = APIDLLpolyList
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6ee8 | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6eee
    MOV [0x03f6b958],EAX                ; 005b6eef | void * g_APIDLL_setTransform
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6ef4 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6ef9
    PUSH 0x652d44                       ; 005b6efc | = "APIDLLgetTextureHandle" | s_APIDLLgetTextureHandle_00652d44 = APIDLLgetTextureHandle
    MOV [0x03f6b95c],EAX                ; 005b6f01 | void * g_APIDLL_polyList
    MOV EAX,[0x03f6b97c]                ; 005b6f06 | HMODULE g_RendererDLLHandle
    PUSH EAX                            ; 005b6f0b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6f0c | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6f11
    PUSH 0x652d5b                       ; 005b6f14 | = "APIDLLselectTextureByHandle" | s_APIDLLselectTextureByHan_00652d5b = APIDLLselectTextureByHandle
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6f19 | HMODULE g_RendererDLLHandle
    PUSH EDX                            ; 005b6f1f
    MOV [0x03f6b960],EAX                ; 005b6f20 | void * g_APIDLL_getTextureHandle
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6f25 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6f2a
    PUSH 0x652d77                       ; 005b6f2d | = "APIDLLenableCulling" | s_APIDLLenableCulling_00652d77 = APIDLLenableCulling
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6f32 | HMODULE g_RendererDLLHandle
    PUSH ECX                            ; 005b6f38
    MOV [0x03f6b964],EAX                ; 005b6f39 | void * g_APIDLL_selectTextureByHandle
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6f3e | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6f43
    PUSH 0x652d8b                       ; 005b6f46 | = "APIDLLenableClipping" | s_APIDLLenableClipping_00652d8b = APIDLLenableClipping
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6f4b | HMODULE g_RendererDLLHandle
    PUSH ESI                            ; 005b6f51
    MOV [0x03f6b968],EAX                ; 005b6f52 | void * g_APIDLL_enableCulling
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6f57 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6f5c
    PUSH 0x652da0                       ; 005b6f5f | = "APIDLLsetTextureClamp" | s_APIDLLsetTextureClamp_00652da0 = APIDLLsetTextureClamp
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6f64 | HMODULE g_RendererDLLHandle
    PUSH EDI                            ; 005b6f6a
    MOV [0x03f6b96c],EAX                ; 005b6f6b | void * g_APIDLL_enableClipping
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6f70 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b6f75
    PUSH 0x652db6                       ; 005b6f78 | = "APIDLLsetFog" | s_APIDLLsetFog_00652db6 = APIDLLsetFog
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6f7d | HMODULE g_RendererDLLHandle
    PUSH EBP                            ; 005b6f83
    MOV [0x03f6b970],EAX                ; 005b6f84 | void * g_APIDLL_setTextureClamp
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6f89 | FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)
    MOV [0x03f6b974],EAX                ; 005b6f8e | void * g_APIDLL_setFog
    MOV EAX,[0x03f6b994]                ; 005b6f93 | int g_DLLFunctionsMissing
    ADD ESP,0x8                         ; 005b6f98
    TEST EAX,EAX                        ; 005b6f9b
    JZ 0x005b6fd3                       ; 005b6f9d | LAB_005b6fd3
        ;   XREF to: 005b6fd3 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005b6f9f
        ;   Label: LAB_005b6f9f
    CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 ; 005b6fa1 | void wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20()
        ;   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
    MOV dword ptr [0x03f6b878],EBX      ; 005b6fa6 | int g_FullscreenMode
    XOR EAX,EAX                         ; 005b6fac
    ADD ESP,0x3c1c                      ; 005b6fae
    POP EBP                             ; 005b6fb4
    POP EDI                             ; 005b6fb5
    POP ESI                             ; 005b6fb6
    POP EBX                             ; 005b6fb7
    RET                                 ; 005b6fb8
    XOR ESI,ESI                         ; 005b6fb9
        ;   Label: LAB_005b6fb9
    CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 ; 005b6fbb | void wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20()
        ;   XREF to: 005b5d20 (UNCONDITIONAL_CALL)
    MOV dword ptr [0x03f6b878],ESI      ; 005b6fc0 | int g_FullscreenMode
    XOR EAX,EAX                         ; 005b6fc6
    ADD ESP,0x3c1c                      ; 005b6fc8
    POP EBP                             ; 005b6fce
    POP EDI                             ; 005b6fcf
    POP ESI                             ; 005b6fd0
    POP EBX                             ; 005b6fd1
    RET                                 ; 005b6fd2
    PUSH 0x8c                           ; 005b6fd3
        ;   Label: LAB_005b6fd3
    MOV EDX,0x1                         ; 005b6fd8
    MOV ESI,0x2d01f28                   ; 005b6fdd | int g_RedScaleFactor
    PUSH EAX                            ; 005b6fe2
    LEA EAX,[ESP + 0x3b98]              ; 005b6fe3
    MOV EDI,0x2d01f2c                   ; 005b6fea | int g_RedBitCount
    PUSH EAX                            ; 005b6fef
    MOV EBP,0x2d01f30                   ; 005b6ff0 | int g_GreenBitPosition
    MOV dword ptr [0x03f6b978],EDX      ; 005b6ff5 | int g_ExternalRendererActive
    CALL crt_memory.c_memset_FUN_005fde40 ; 005b6ffb | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV ECX,0x2d01f24                   ; 005b7000 | int g_RedBitPosition
    MOV EAX,0x2d01f34                   ; 005b7005 | int g_GreenScaleFactor
    ADD ESP,0xc                         ; 005b700a
    MOV EDX,0x2d01f38                   ; 005b700d | int g_GreenBitCount
    MOV dword ptr [ESP + 0x3b90],ECX    ; 005b7012 | int g_RedBitPosition
    MOV dword ptr [ESP + 0x3b94],ESI    ; 005b7019 | int g_RedScaleFactor
    MOV dword ptr [ESP + 0x3b98],EDI    ; 005b7020 | int g_RedBitCount
    MOV dword ptr [ESP + 0x3b9c],EBP    ; 005b7027 | int g_GreenBitPosition
    MOV dword ptr [ESP + 0x3ba0],EAX    ; 005b702e | int g_GreenScaleFactor
    MOV dword ptr [ESP + 0x3ba4],EDX    ; 005b7035 | int g_GreenBitCount
    MOV ECX,0x2d01f3c                   ; 005b703c | int g_BlueBitPosition
    MOV ESI,0x2d01f40                   ; 005b7041 | int g_BlueScaleFactor
    MOV EDI,0x2d01f44                   ; 005b7046 | int g_BlueBitCount
    MOV EBP,0x2d05298                   ; 005b704b | int g_BlendMode
    MOV EAX,0x2d02574                   ; 005b7050 | int g_CurrentLightingValue
    MOV EDX,0x6793b4                    ; 005b7055 | int g_CurrentAlphaValue
    MOV dword ptr [ESP + 0x3ba8],ECX    ; 005b705a | int g_BlueBitPosition
    MOV dword ptr [ESP + 0x3bac],ESI    ; 005b7061 | int g_BlueScaleFactor
    MOV dword ptr [ESP + 0x3bb0],EDI    ; 005b7068 | int g_BlueBitCount
    MOV dword ptr [ESP + 0x3bb4],EBP    ; 005b706f | int g_BlendMode
    MOV dword ptr [ESP + 0x3bb8],EAX    ; 005b7076 | int g_CurrentLightingValue
    MOV dword ptr [ESP + 0x3bbc],EDX    ; 005b707d | int g_CurrentAlphaValue
    MOV ECX,0x2d02570                   ; 005b7084 | int g_ActiveRenderColor
    MOV ESI,0x2d02558                   ; 005b7089 | int g_ClipLeft
    MOV EDI,0x2d0255c                   ; 005b708e | int g_ClipTop
    MOV EBP,0x2d02560                   ; 005b7093 | int g_ClipRight
    MOV EAX,0x2d02564                   ; 005b7098 | int g_ClipBottom
    MOV EDX,0x6793a0                    ; 005b709d | int g_TextureFilteringEnabled
    MOV dword ptr [ESP + 0x3bc0],ECX    ; 005b70a2 | int g_ActiveRenderColor
    MOV dword ptr [ESP + 0x3bc4],ESI    ; 005b70a9 | int g_ClipLeft
    MOV dword ptr [ESP + 0x3bc8],EDI    ; 005b70b0 | int g_ClipTop
    MOV dword ptr [ESP + 0x3bcc],EBP    ; 005b70b7 | int g_ClipRight
    MOV dword ptr [ESP + 0x3bd0],EAX    ; 005b70be | int g_ClipBottom
    MOV dword ptr [ESP + 0x3bd4],EDX    ; 005b70c5 | int g_TextureFilteringEnabled
    MOV ECX,0x6793a4                    ; 005b70cc | int g_CurrentTextureDimension
    MOV ESI,0x2d03e90                   ; 005b70d1 | int g_TextureBits
    MOV EDI,0x68411c                    ; 005b70d6 | int g_SystemMemorySize
    MOV EBP,0x684114                    ; 005b70db | int g_VideoMemorySize
    MOV EAX,0x684118                    ; 005b70e0 | int g_MaxTextureSize
    MOV EDX,0x3f6b880                   ; 005b70e5 | void * g_FrameBufferPtr
    MOV dword ptr [ESP + 0x3bd8],ECX    ; 005b70ea | int g_CurrentTextureDimension
    MOV dword ptr [ESP + 0x3bdc],ESI    ; 005b70f1 | int g_TextureBits
    MOV dword ptr [ESP + 0x3be0],EDI    ; 005b70f8 | int g_SystemMemorySize
    MOV dword ptr [ESP + 0x3be4],EBP    ; 005b70ff | int g_VideoMemorySize
    MOV dword ptr [ESP + 0x3be8],EAX    ; 005b7106 | int g_MaxTextureSize
    MOV dword ptr [ESP + 0x3bec],EDX    ; 005b710d | void * g_FrameBufferPtr
    MOV ECX,0x684110                    ; 005b7114 | int g_SystemInitialized
    MOV ESI,0x3f6b884                   ; 005b7119 | int g_PodSystemVersion
    MOV EDI,0x2d0529c                   ; 005b711e | int g_ProcessorType
    MOV EBP,0x6793b8                    ; 005b7123 | int g_RenderingQuality
    MOV EAX,0x30                        ; 005b7128
    MOV EDX,0x2c                        ; 005b712d
    MOV dword ptr [ESP + 0x3bf0],ECX    ; 005b7132 | int g_SystemInitialized
    MOV dword ptr [ESP + 0x3bf4],ESI    ; 005b7139 | int g_PodSystemVersion
    MOV dword ptr [ESP + 0x3bf8],EDI    ; 005b7140 | int g_ProcessorType
    MOV dword ptr [ESP + 0x3bfc],EBP    ; 005b7147 | int g_RenderingQuality
    MOV dword ptr [ESP + 0x3c00],EAX    ; 005b714e
    MOV dword ptr [ESP + 0x3c04],EDX    ; 005b7155
    MOV dword ptr [ESP + 0x3c18],EDX    ; 005b715c
    MOV ECX,0xc                         ; 005b7163
    MOV ESI,0x20                        ; 005b7168
    MOV EDI,0x24                        ; 005b716d
    LEA EAX,[ESP + 0x3b90]              ; 005b7172
    MOV EBP,0x28                        ; 005b7179
    PUSH EAX                            ; 005b717e
    MOV dword ptr [ESP + 0x3c0c],ECX    ; 005b717f
    MOV dword ptr [ESP + 0x3c10],ESI    ; 005b7186
    PUSH EBX                            ; 005b718d
    MOV dword ptr [ESP + 0x3c1c],EDI    ; 005b718e
    MOV dword ptr [ESP + 0x3c18],EBP    ; 005b7195
    CALL dword ptr [0x03f6b88c]         ; 005b719c | APIDLL_init * g_APIDLL_init
    ADD ESP,0x8                         ; 005b71a2
    TEST EAX,EAX                        ; 005b71a5
    JNZ 0x005b71b9                      ; 005b71a7 | LAB_005b71b9
        ;   XREF to: 005b71b9 (CONDITIONAL_JUMP)
    MOV [0x03f6b878],EAX                ; 005b71a9 | int g_FullscreenMode
    ADD ESP,0x3c1c                      ; 005b71ae
    POP EBP                             ; 005b71b4
    POP EDI                             ; 005b71b5
    POP ESI                             ; 005b71b6
    POP EBX                             ; 005b71b7
    RET                                 ; 005b71b8
    MOV EDX,dword ptr [0x03f6b87c]      ; 005b71b9 | int g_RendererHandle
        ;   Label: LAB_005b71b9
    PUSH EDX                            ; 005b71bf
    CALL wincore_windll.cpp_selectCard_FUN_005b7d90 ; 005b71c0 | int wincore_windll.cpp_selectCard_FUN_005b7d90(int card_index)
        ;   XREF to: 005b7d90 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 005b71c5
    ADD ESP,0x4                         ; 005b71ca
    ADD ESP,0x3c1c                      ; 005b71cd
    POP EBP                             ; 005b71d3
    POP EDI                             ; 005b71d4
    POP ESI                             ; 005b71d5
    POP EBX                             ; 005b71d6
    RET                                 ; 005b71d7

