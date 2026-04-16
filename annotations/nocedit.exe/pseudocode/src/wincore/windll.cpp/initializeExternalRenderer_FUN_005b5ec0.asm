; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_initializeExternalRenderer_FUN_005b5ec0(void)
;
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
;   ... and 109 more
;
; Called Functions:
;   wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
;   wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
;   wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
;   wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
;   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5ec0
        ;   Label: wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0
    PUSH ESI                            ; 005b5ec1
    PUSH EDI                            ; 005b5ec2
    PUSH EBP                            ; 005b5ec3
    SUB ESP,0x3b90                      ; 005b5ec4
    PUSH 0x684010                       ; 005b5eca | g_RendererDllName
    CALL wincore_wddvmem.cpp_loadLibrary_FUN_005ede10 ; 005b5ecf
        ;   XREF to: 005ede10 (UNCONDITIONAL_CALL)  ; HMODULE wincore_wddvmem.cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName)
    ADD ESP,0x4                         ; 005b5ed4
    MOV [0x03f6b97c],EAX                ; 005b5ed7 | g_RendererDLLHandle
    TEST EAX,EAX                        ; 005b5edc
    JNZ 0x005b5ef0                      ; 005b5ede
        ;   XREF to: 005b5ef0 (CONDITIONAL_JUMP)  ; LAB_005b5ef0
    MOV [0x03f6b878],EAX                ; 005b5ee0 | g_ExternalRendererActive
    ADD ESP,0x3b90                      ; 005b5ee5
    POP EBP                             ; 005b5eeb
    POP EDI                             ; 005b5eec
    POP ESI                             ; 005b5eed
    POP EBX                             ; 005b5eee
    RET                                 ; 005b5eef
    PUSH 0x65293f                       ; 005b5ef0 | = "APIDLLInformation"
        ;   Label: LAB_005b5ef0
    PUSH EAX                            ; 005b5ef5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b5ef6
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b5efb
    MOV EDX,EAX                         ; 005b5efe
    TEST EAX,EAX                        ; 005b5f00
    JZ 0x005b66f3                       ; 005b5f02
        ;   XREF to: 005b66f3 (CONDITIONAL_JUMP)  ; LAB_005b66f3
    MOV EAX,ESP                         ; 005b5f08
    PUSH EAX                            ; 005b5f0a
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b5f0b | g_RendererDLLHandle
    PUSH ECX                            ; 005b5f11
    CALL EDX                            ; 005b5f12
    ADD ESP,0x8                         ; 005b5f14
    LEA EAX,[ESP + 0x1dc8]              ; 005b5f17
    PUSH EAX                            ; 005b5f1e
    CALL wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90 ; 005b5f1f
        ;   XREF to: 005b7f90 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer * this_ptr)
    ADD ESP,0x4                         ; 005b5f24
    LEA EAX,[ESP + 0x1dc8]              ; 005b5f27
    PUSH EAX                            ; 005b5f2e
    LEA EAX,[ESP + 0x4]                 ; 005b5f2f
    PUSH EAX                            ; 005b5f33
    CALL wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0 ; 005b5f34
        ;   XREF to: 005b7fe0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
    ADD ESP,0x8                         ; 005b5f39
    TEST EAX,EAX                        ; 005b5f3c
    JZ 0x005b670d                       ; 005b5f3e
        ;   XREF to: 005b670d (CONDITIONAL_JUMP)  ; LAB_005b670d
    PUSH 0x652951                       ; 005b5f44 | = "APIDLLinit"
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b5f49 | g_RendererDLLHandle
    XOR ESI,ESI                         ; 005b5f4f
    PUSH EDI                            ; 005b5f51
    MOV dword ptr [0x03f6b994],ESI      ; 005b5f52 | g_DLLFunctionsMissing
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b5f58
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b5f5d
    MOV [0x03f6b88c],EAX                ; 005b5f60 | g_APIDLL_init
    TEST EAX,EAX                        ; 005b5f65
    JNZ 0x005b5f73                      ; 005b5f67
        ;   XREF to: 005b5f73 (CONDITIONAL_JUMP)  ; LAB_005b5f73
    MOV dword ptr [0x03f6b994],0x1      ; 005b5f69 | g_DLLFunctionsMissing
    PUSH 0x65295c                       ; 005b5f73 | = "APIDLLkill"
        ;   Label: LAB_005b5f73
    MOV EAX,[0x03f6b97c]                ; 005b5f78 | g_RendererDLLHandle
    PUSH EAX                            ; 005b5f7d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b5f7e
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b5f83
    MOV [0x03f6b890],EAX                ; 005b5f86 | g_APIDLL_kill
    TEST EAX,EAX                        ; 005b5f8b
    JNZ 0x005b5f99                      ; 005b5f8d
        ;   XREF to: 005b5f99 (CONDITIONAL_JUMP)  ; LAB_005b5f99
    MOV dword ptr [0x03f6b994],0x1      ; 005b5f8f | g_DLLFunctionsMissing
    PUSH 0x652967                       ; 005b5f99 | = "APIDLLtoggle"
        ;   Label: LAB_005b5f99
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b5f9e | g_RendererDLLHandle
    PUSH ECX                            ; 005b5fa4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b5fa5
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b5faa
    MOV [0x03f6b894],EAX                ; 005b5fad | g_APIDLL_toggle
    TEST EAX,EAX                        ; 005b5fb2
    JNZ 0x005b5fc0                      ; 005b5fb4
        ;   XREF to: 005b5fc0 (CONDITIONAL_JUMP)  ; LAB_005b5fc0
    MOV dword ptr [0x03f6b994],0x1      ; 005b5fb6 | g_DLLFunctionsMissing
    PUSH 0x652974                       ; 005b5fc0 | = "APIDLLsetVideoMode"
        ;   Label: LAB_005b5fc0
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b5fc5 | g_RendererDLLHandle
    PUSH ESI                            ; 005b5fcb
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b5fcc
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b5fd1
    MOV [0x03f6b898],EAX                ; 005b5fd4 | g_APIDLL_setVideoMode
    TEST EAX,EAX                        ; 005b5fd9
    JNZ 0x005b5fe7                      ; 005b5fdb
        ;   XREF to: 005b5fe7 (CONDITIONAL_JUMP)  ; LAB_005b5fe7
    MOV dword ptr [0x03f6b994],0x1      ; 005b5fdd | g_DLLFunctionsMissing
    PUSH 0x652987                       ; 005b5fe7 | = "APIDLLsetVideoMode2"
        ;   Label: LAB_005b5fe7
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b5fec | g_RendererDLLHandle
    PUSH EBP                            ; 005b5ff2
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b5ff3
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b5ff8
    MOV [0x03f6b89c],EAX                ; 005b5ffb | g_APIDLL_setVideoMode2
    TEST EAX,EAX                        ; 005b6000
    JNZ 0x005b600e                      ; 005b6002
        ;   XREF to: 005b600e (CONDITIONAL_JUMP)  ; LAB_005b600e
    MOV dword ptr [0x03f6b994],0x1      ; 005b6004 | g_DLLFunctionsMissing
    PUSH 0x65299b                       ; 005b600e | = "APIDLLrestoreVideoMode"
        ;   Label: LAB_005b600e
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6013 | g_RendererDLLHandle
    PUSH EDX                            ; 005b6019
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b601a
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b601f
    MOV [0x03f6b8a0],EAX                ; 005b6022 | g_APIDLL_restoreVideoMode
    TEST EAX,EAX                        ; 005b6027
    JNZ 0x005b6035                      ; 005b6029
        ;   XREF to: 005b6035 (CONDITIONAL_JUMP)  ; LAB_005b6035
    MOV dword ptr [0x03f6b994],0x1      ; 005b602b | g_DLLFunctionsMissing
    PUSH 0x6529b2                       ; 005b6035 | = "APIDLLbeginScene"
        ;   Label: LAB_005b6035
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b603a | g_RendererDLLHandle
    PUSH EBX                            ; 005b6040
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6041
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6046
    MOV [0x03f6b8a4],EAX                ; 005b6049 | g_APIDLL_beginScene
    TEST EAX,EAX                        ; 005b604e
    JNZ 0x005b605c                      ; 005b6050
        ;   XREF to: 005b605c (CONDITIONAL_JUMP)  ; LAB_005b605c
    MOV dword ptr [0x03f6b994],0x1      ; 005b6052 | g_DLLFunctionsMissing
    PUSH 0x6529c3                       ; 005b605c | = "APIDLLendScene"
        ;   Label: LAB_005b605c
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6061 | g_RendererDLLHandle
    PUSH EDI                            ; 005b6067
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6068
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b606d
    MOV [0x03f6b8a8],EAX                ; 005b6070 | g_APIDLL_endScene
    TEST EAX,EAX                        ; 005b6075
    JNZ 0x005b6083                      ; 005b6077
        ;   XREF to: 005b6083 (CONDITIONAL_JUMP)  ; LAB_005b6083
    MOV dword ptr [0x03f6b994],0x1      ; 005b6079 | g_DLLFunctionsMissing
    PUSH 0x6529d2                       ; 005b6083 | = "APIDLLlockFrame"
        ;   Label: LAB_005b6083
    MOV EAX,[0x03f6b97c]                ; 005b6088 | g_RendererDLLHandle
    PUSH EAX                            ; 005b608d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b608e
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6093
    MOV [0x03f6b8ac],EAX                ; 005b6096 | g_APIDLL_lockFrame
    TEST EAX,EAX                        ; 005b609b
    JNZ 0x005b60a9                      ; 005b609d
        ;   XREF to: 005b60a9 (CONDITIONAL_JUMP)  ; LAB_005b60a9
    MOV dword ptr [0x03f6b994],0x1      ; 005b609f | g_DLLFunctionsMissing
    PUSH 0x6529e2                       ; 005b60a9 | = "APIDLLunlockFrame"
        ;   Label: LAB_005b60a9
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b60ae | g_RendererDLLHandle
    PUSH ECX                            ; 005b60b4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b60b5
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b60ba
    MOV [0x03f6b8b0],EAX                ; 005b60bd | g_APIDLL_unlockFrame
    TEST EAX,EAX                        ; 005b60c2
    JNZ 0x005b60d0                      ; 005b60c4
        ;   XREF to: 005b60d0 (CONDITIONAL_JUMP)  ; LAB_005b60d0
    MOV dword ptr [0x03f6b994],0x1      ; 005b60c6 | g_DLLFunctionsMissing
    PUSH 0x6529f4                       ; 005b60d0 | = "APIDLLselectTexture"
        ;   Label: LAB_005b60d0
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b60d5 | g_RendererDLLHandle
    PUSH ESI                            ; 005b60db
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b60dc
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b60e1
    MOV [0x03f6b8b4],EAX                ; 005b60e4 | g_APIDLL_selectTexture
    TEST EAX,EAX                        ; 005b60e9
    JNZ 0x005b60f7                      ; 005b60eb
        ;   XREF to: 005b60f7 (CONDITIONAL_JUMP)  ; LAB_005b60f7
    MOV dword ptr [0x03f6b994],0x1      ; 005b60ed | g_DLLFunctionsMissing
    PUSH 0x652a08                       ; 005b60f7 | = "APIDLLupdateTexture"
        ;   Label: LAB_005b60f7
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b60fc | g_RendererDLLHandle
    PUSH EBP                            ; 005b6102
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6103
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6108
    MOV [0x03f6b8b8],EAX                ; 005b610b | g_APIDLL_updateTexture
    TEST EAX,EAX                        ; 005b6110
    JNZ 0x005b611e                      ; 005b6112
        ;   XREF to: 005b611e (CONDITIONAL_JUMP)  ; LAB_005b611e
    MOV dword ptr [0x03f6b994],0x1      ; 005b6114 | g_DLLFunctionsMissing
    PUSH 0x652a1c                       ; 005b611e | = "APIDLLselectTextureBGRA"
        ;   Label: LAB_005b611e
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6123 | g_RendererDLLHandle
    PUSH EDX                            ; 005b6129
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b612a
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b612f
    PUSH 0x652a34                       ; 005b6132 | = "APIDLLupdateTextureBGRA"
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6137 | g_RendererDLLHandle
    PUSH ECX                            ; 005b613d
    MOV [0x03f6b8bc],EAX                ; 005b613e | g_APIDLL_selectTextureBGRA
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6143
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6148
    PUSH 0x652a4c                       ; 005b614b | = "APIDLLsetMipMapLevel"
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b6150 | g_RendererDLLHandle
    PUSH EBX                            ; 005b6156
    MOV [0x03f6b8c0],EAX                ; 005b6157 | g_APIDLL_updateTextureBGRA
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b615c
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6161
    MOV [0x03f6b8c4],EAX                ; 005b6164 | g_APIDLL_setMipMapLevel
    TEST EAX,EAX                        ; 005b6169
    JNZ 0x005b6177                      ; 005b616b
        ;   XREF to: 005b6177 (CONDITIONAL_JUMP)  ; LAB_005b6177
    MOV dword ptr [0x03f6b994],0x1      ; 005b616d | g_DLLFunctionsMissing
    PUSH 0x652a61                       ; 005b6177 | = "APIDLLdrawPolygon"
        ;   Label: LAB_005b6177
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b617c | g_RendererDLLHandle
    PUSH EDI                            ; 005b6182
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6183
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6188
    MOV [0x03f6b8c8],EAX                ; 005b618b | g_APIDLL_drawPolygon
    TEST EAX,EAX                        ; 005b6190
    JNZ 0x005b619e                      ; 005b6192
        ;   XREF to: 005b619e (CONDITIONAL_JUMP)  ; LAB_005b619e
    MOV dword ptr [0x03f6b994],0x1      ; 005b6194 | g_DLLFunctionsMissing
    PUSH 0x652a73                       ; 005b619e | = "APIDLLdrawPolygon2"
        ;   Label: LAB_005b619e
    MOV EAX,[0x03f6b97c]                ; 005b61a3 | g_RendererDLLHandle
    PUSH EAX                            ; 005b61a8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b61a9
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b61ae
    MOV [0x03f6b8cc],EAX                ; 005b61b1 | g_APIDLL_drawPolygon2
    TEST EAX,EAX                        ; 005b61b6
    JNZ 0x005b61c4                      ; 005b61b8
        ;   XREF to: 005b61c4 (CONDITIONAL_JUMP)  ; LAB_005b61c4
    MOV dword ptr [0x03f6b994],0x1      ; 005b61ba | g_DLLFunctionsMissing
    PUSH 0x652a86                       ; 005b61c4 | = "APIDLLdrawPolyList"
        ;   Label: LAB_005b61c4
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b61c9 | g_RendererDLLHandle
    PUSH ECX                            ; 005b61cf
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b61d0
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b61d5
    PUSH 0x652a99                       ; 005b61d8 | = "APIDLLdrawPolyList2"
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b61dd | g_RendererDLLHandle
    PUSH EBX                            ; 005b61e3
    MOV [0x03f6b8d0],EAX                ; 005b61e4 | g_APIDLL_drawPolyList
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b61e9
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b61ee
    PUSH 0x652aad                       ; 005b61f1 | = "APIDLLdrawPolyList3"
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b61f6 | g_RendererDLLHandle
    PUSH ESI                            ; 005b61fc
    MOV [0x03f6b8d4],EAX                ; 005b61fd | g_APIDLL_drawPolyList2
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6202
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6207
    PUSH 0x652ac1                       ; 005b620a | = "APIDLLaddParticle"
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b620f | g_RendererDLLHandle
    PUSH EDI                            ; 005b6215
    MOV [0x03f6b8d8],EAX                ; 005b6216 | g_APIDLL_drawPolyList3
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b621b
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6220
    MOV [0x03f6b8dc],EAX                ; 005b6223 | g_APIDLL_addParticle
    TEST EAX,EAX                        ; 005b6228
    JNZ 0x005b6236                      ; 005b622a
        ;   XREF to: 005b6236 (CONDITIONAL_JUMP)  ; LAB_005b6236
    MOV dword ptr [0x03f6b994],0x1      ; 005b622c | g_DLLFunctionsMissing
    PUSH 0x652ad3                       ; 005b6236 | = "APIDLLflushParticleList"
        ;   Label: LAB_005b6236
    MOV EAX,[0x03f6b97c]                ; 005b623b | g_RendererDLLHandle
    PUSH EAX                            ; 005b6240
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6241
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6246
    MOV [0x03f6b8e0],EAX                ; 005b6249 | g_APIDLL_flushParticleList
    TEST EAX,EAX                        ; 005b624e
    JNZ 0x005b625c                      ; 005b6250
        ;   XREF to: 005b625c (CONDITIONAL_JUMP)  ; LAB_005b625c
    MOV dword ptr [0x03f6b994],0x1      ; 005b6252 | g_DLLFunctionsMissing
    PUSH 0x652aeb                       ; 005b625c | = "APIDLLadd3dLine"
        ;   Label: LAB_005b625c
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6261 | g_RendererDLLHandle
    PUSH ECX                            ; 005b6267
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6268
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b626d
    MOV [0x03f6b8e4],EAX                ; 005b6270 | g_APIDLL_add3dLine
    TEST EAX,EAX                        ; 005b6275
    JNZ 0x005b6283                      ; 005b6277
        ;   XREF to: 005b6283 (CONDITIONAL_JUMP)  ; LAB_005b6283
    MOV dword ptr [0x03f6b994],0x1      ; 005b6279 | g_DLLFunctionsMissing
    PUSH 0x652afb                       ; 005b6283 | = "APIDLLflushLineList"
        ;   Label: LAB_005b6283
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6288 | g_RendererDLLHandle
    PUSH ESI                            ; 005b628e
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b628f
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6294
    MOV [0x03f6b8e8],EAX                ; 005b6297 | g_APIDLL_flushLineList
    TEST EAX,EAX                        ; 005b629c
    JNZ 0x005b62aa                      ; 005b629e
        ;   XREF to: 005b62aa (CONDITIONAL_JUMP)  ; LAB_005b62aa
    MOV dword ptr [0x03f6b994],0x1      ; 005b62a0 | g_DLLFunctionsMissing
    PUSH 0x652b0f                       ; 005b62aa | = "APIDLLclear"
        ;   Label: LAB_005b62aa
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b62af | g_RendererDLLHandle
    PUSH EBP                            ; 005b62b5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b62b6
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b62bb
    MOV [0x03f6b8ec],EAX                ; 005b62be | g_APIDLL_clear
    TEST EAX,EAX                        ; 005b62c3
    JNZ 0x005b62d1                      ; 005b62c5
        ;   XREF to: 005b62d1 (CONDITIONAL_JUMP)  ; LAB_005b62d1
    MOV dword ptr [0x03f6b994],0x1      ; 005b62c7 | g_DLLFunctionsMissing
    PUSH 0x652b1b                       ; 005b62d1 | = "APIDLLsetFogColor"
        ;   Label: LAB_005b62d1
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b62d6 | g_RendererDLLHandle
    PUSH EDX                            ; 005b62dc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b62dd
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b62e2
    MOV [0x03f6b8f0],EAX                ; 005b62e5 | g_APIDLL_setFogColor
    TEST EAX,EAX                        ; 005b62ea
    JNZ 0x005b62f8                      ; 005b62ec
        ;   XREF to: 005b62f8 (CONDITIONAL_JUMP)  ; LAB_005b62f8
    MOV dword ptr [0x03f6b994],0x1      ; 005b62ee | g_DLLFunctionsMissing
    PUSH 0x652b2d                       ; 005b62f8 | = "APIDLLsync"
        ;   Label: LAB_005b62f8
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b62fd | g_RendererDLLHandle
    PUSH EBX                            ; 005b6303
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6304
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6309
    MOV [0x03f6b8f4],EAX                ; 005b630c | g_APIDLL_sync
    TEST EAX,EAX                        ; 005b6311
    JNZ 0x005b631f                      ; 005b6313
        ;   XREF to: 005b631f (CONDITIONAL_JUMP)  ; LAB_005b631f
    MOV dword ptr [0x03f6b994],0x1      ; 005b6315 | g_DLLFunctionsMissing
    PUSH 0x652b38                       ; 005b631f | = "APIDLLclearZBuffer"
        ;   Label: LAB_005b631f
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6324 | g_RendererDLLHandle
    PUSH EDI                            ; 005b632a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b632b
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6330
    MOV [0x03f6b8f8],EAX                ; 005b6333 | g_APIDLL_clearZBuffer
    TEST EAX,EAX                        ; 005b6338
    JNZ 0x005b6346                      ; 005b633a
        ;   XREF to: 005b6346 (CONDITIONAL_JUMP)  ; LAB_005b6346
    MOV dword ptr [0x03f6b994],0x1      ; 005b633c | g_DLLFunctionsMissing
    PUSH 0x652b4b                       ; 005b6346 | = "APIDLLclearZBox"
        ;   Label: LAB_005b6346
    MOV EAX,[0x03f6b97c]                ; 005b634b | g_RendererDLLHandle
    PUSH EAX                            ; 005b6350
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6351
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6356
    MOV [0x03f6b8fc],EAX                ; 005b6359 | g_APIDLL_clearZBox
    TEST EAX,EAX                        ; 005b635e
    JNZ 0x005b636c                      ; 005b6360
        ;   XREF to: 005b636c (CONDITIONAL_JUMP)  ; LAB_005b636c
    MOV dword ptr [0x03f6b994],0x1      ; 005b6362 | g_DLLFunctionsMissing
    PUSH 0x652b5b                       ; 005b636c | = "APIDLLsetColorTable16"
        ;   Label: LAB_005b636c
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6371 | g_RendererDLLHandle
    PUSH ECX                            ; 005b6377
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6378
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b637d
    MOV [0x03f6b900],EAX                ; 005b6380 | g_APIDLL_setColorTable16
    TEST EAX,EAX                        ; 005b6385
    JNZ 0x005b6393                      ; 005b6387
        ;   XREF to: 005b6393 (CONDITIONAL_JUMP)  ; LAB_005b6393
    MOV dword ptr [0x03f6b994],0x1      ; 005b6389 | g_DLLFunctionsMissing
    PUSH 0x652b71                       ; 005b6393 | = "APIDLLGetDisplayContext"
        ;   Label: LAB_005b6393
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6398 | g_RendererDLLHandle
    PUSH ESI                            ; 005b639e
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b639f
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b63a4
    MOV [0x03f6b904],EAX                ; 005b63a7 | g_APIDLL_GetDisplayContext
    TEST EAX,EAX                        ; 005b63ac
    JNZ 0x005b63ba                      ; 005b63ae
        ;   XREF to: 005b63ba (CONDITIONAL_JUMP)  ; LAB_005b63ba
    MOV dword ptr [0x03f6b994],0x1      ; 005b63b0 | g_DLLFunctionsMissing
    PUSH 0x652b89                       ; 005b63ba | = "APIDLLReleaseDisplayContext"
        ;   Label: LAB_005b63ba
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b63bf | g_RendererDLLHandle
    PUSH EBP                            ; 005b63c5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b63c6
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b63cb
    MOV [0x03f6b908],EAX                ; 005b63ce | g_APIDLL_ReleaseDisplayContext
    TEST EAX,EAX                        ; 005b63d3
    JNZ 0x005b63e1                      ; 005b63d5
        ;   XREF to: 005b63e1 (CONDITIONAL_JUMP)  ; LAB_005b63e1
    MOV dword ptr [0x03f6b994],0x1      ; 005b63d7 | g_DLLFunctionsMissing
    PUSH 0x652ba5                       ; 005b63e1 | = "APIDLLmasterZBuffer"
        ;   Label: LAB_005b63e1
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b63e6 | g_RendererDLLHandle
    PUSH EDX                            ; 005b63ec
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b63ed
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b63f2
    MOV [0x03f6b90c],EAX                ; 005b63f5 | g_APIDLL_masterZBuffer
    TEST EAX,EAX                        ; 005b63fa
    JNZ 0x005b6408                      ; 005b63fc
        ;   XREF to: 005b6408 (CONDITIONAL_JUMP)  ; LAB_005b6408
    MOV dword ptr [0x03f6b994],0x1      ; 005b63fe | g_DLLFunctionsMissing
    PUSH 0x652bb9                       ; 005b6408 | = "APIDLLrestoreZBuffer"
        ;   Label: LAB_005b6408
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b640d | g_RendererDLLHandle
    PUSH EBX                            ; 005b6413
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6414
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6419
    MOV [0x03f6b910],EAX                ; 005b641c | g_APIDLL_restoreZBuffer
    TEST EAX,EAX                        ; 005b6421
    JNZ 0x005b642f                      ; 005b6423
        ;   XREF to: 005b642f (CONDITIONAL_JUMP)  ; LAB_005b642f
    MOV dword ptr [0x03f6b994],0x1      ; 005b6425 | g_DLLFunctionsMissing
    PUSH 0x652bce                       ; 005b642f | = "APIDLLgetVideoMemory"
        ;   Label: LAB_005b642f
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b6434 | g_RendererDLLHandle
    PUSH EDI                            ; 005b643a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b643b
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6440
    MOV [0x03f6b914],EAX                ; 005b6443 | g_APIDLL_getVideoMemory
    TEST EAX,EAX                        ; 005b6448
    JNZ 0x005b6456                      ; 005b644a
        ;   XREF to: 005b6456 (CONDITIONAL_JUMP)  ; LAB_005b6456
    MOV dword ptr [0x03f6b994],0x1      ; 005b644c | g_DLLFunctionsMissing
    PUSH 0x652be3                       ; 005b6456 | = "APIDLLselectCard"
        ;   Label: LAB_005b6456
    MOV EAX,[0x03f6b97c]                ; 005b645b | g_RendererDLLHandle
    PUSH EAX                            ; 005b6460
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6461
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6466
    MOV [0x03f6b918],EAX                ; 005b6469 | g_APIDLL_selectCard
    TEST EAX,EAX                        ; 005b646e
    JNZ 0x005b647c                      ; 005b6470
        ;   XREF to: 005b647c (CONDITIONAL_JUMP)  ; LAB_005b647c
    MOV dword ptr [0x03f6b994],0x1      ; 005b6472 | g_DLLFunctionsMissing
    PUSH 0x652bf4                       ; 005b647c | = "APIDLLbuildCardList"
        ;   Label: LAB_005b647c
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6481 | g_RendererDLLHandle
    PUSH ECX                            ; 005b6487
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6488
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b648d
    MOV [0x03f6b91c],EAX                ; 005b6490 | g_APIDLL_buildCardList
    TEST EAX,EAX                        ; 005b6495
    JNZ 0x005b64a3                      ; 005b6497
        ;   XREF to: 005b64a3 (CONDITIONAL_JUMP)  ; LAB_005b64a3
    MOV dword ptr [0x03f6b994],0x1      ; 005b6499 | g_DLLFunctionsMissing
    PUSH 0x652c08                       ; 005b64a3 | = "APIDLLlockHoldBuffer"
        ;   Label: LAB_005b64a3
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b64a8 | g_RendererDLLHandle
    PUSH ESI                            ; 005b64ae
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b64af
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b64b4
    PUSH 0x652c1d                       ; 005b64b7 | = "APIDLLunlockHoldBuffer"
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b64bc | g_RendererDLLHandle
    PUSH EDI                            ; 005b64c2
    MOV [0x03f6b920],EAX                ; 005b64c3 | g_APIDLL_lockHoldBuffer
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b64c8
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b64cd
    PUSH 0x652c34                       ; 005b64d0 | = "APIDLLlockTexture"
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b64d5 | g_RendererDLLHandle
    PUSH EBP                            ; 005b64db
    MOV [0x03f6b924],EAX                ; 005b64dc | g_APIDLL_unlockHoldBuffer
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b64e1
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b64e6
    PUSH 0x652c46                       ; 005b64e9 | = "APIDLLunlockTexture"
    MOV [0x03f6b928],EAX                ; 005b64ee | g_APIDLL_lockTexture
    MOV EAX,[0x03f6b97c]                ; 005b64f3 | g_RendererDLLHandle
    PUSH EAX                            ; 005b64f8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b64f9
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b64fe
    PUSH 0x652c5a                       ; 005b6501 | = "APIDLLgetTextureInfo"
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6506 | g_RendererDLLHandle
    PUSH EDX                            ; 005b650c
    MOV [0x03f6b92c],EAX                ; 005b650d | g_APIDLL_unlockTexture
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6512
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6517
    MOV [0x03f6b930],EAX                ; 005b651a | g_APIDLL_getTextureInfo
    TEST EAX,EAX                        ; 005b651f
    JNZ 0x005b652d                      ; 005b6521
        ;   XREF to: 005b652d (CONDITIONAL_JUMP)  ; LAB_005b652d
    MOV dword ptr [0x03f6b994],0x1      ; 005b6523 | g_DLLFunctionsMissing
    PUSH 0x652c6f                       ; 005b652d | = "APIDLLsetVideoModeX"
        ;   Label: LAB_005b652d
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b6532 | g_RendererDLLHandle
    PUSH EBX                            ; 005b6538
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6539
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b653e
    PUSH 0x652c83                       ; 005b6541 | = "APIDLLrestoreVideoModeX"
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b6546 | g_RendererDLLHandle
    PUSH ESI                            ; 005b654c
    MOV [0x03f6b934],EAX                ; 005b654d | g_APIDLL_setVideoModeX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6552
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6557
    PUSH 0x652c9b                       ; 005b655a | = "APIDLLlockFrameX"
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b655f | g_RendererDLLHandle
    PUSH EDI                            ; 005b6565
    MOV [0x03f6b938],EAX                ; 005b6566 | g_APIDLL_restoreVideoModeX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b656b
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6570
    PUSH 0x652cac                       ; 005b6573 | = "APIDLLunlockFrameX"
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6578 | g_RendererDLLHandle
    PUSH EBP                            ; 005b657e
    MOV [0x03f6b93c],EAX                ; 005b657f | g_APIDLL_lockFrameX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6584
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6589
    PUSH 0x652cbf                       ; 005b658c | = "APIDLLtoggleX"
    MOV [0x03f6b940],EAX                ; 005b6591 | g_APIDLL_unlockFrameX
    MOV EAX,[0x03f6b97c]                ; 005b6596 | g_RendererDLLHandle
    PUSH EAX                            ; 005b659b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b659c
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b65a1
    PUSH 0x652ccd                       ; 005b65a4 | = "APIDLLsetViewport"
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b65a9 | g_RendererDLLHandle
    PUSH EDX                            ; 005b65af
    MOV [0x03f6b944],EAX                ; 005b65b0 | g_APIDLL_toggleX
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b65b5
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b65ba
    PUSH 0x652cdf                       ; 005b65bd | = "APIDLLsetLightConstants"
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b65c2 | g_RendererDLLHandle
    PUSH ECX                            ; 005b65c8
    MOV [0x03f6b948],EAX                ; 005b65c9 | g_APIDLL_setViewport
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b65ce
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b65d3
    PUSH 0x652cf7                       ; 005b65d6 | = "APIDLLsetLightVector"
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b65db | g_RendererDLLHandle
    PUSH EBX                            ; 005b65e1
    MOV [0x03f6b94c],EAX                ; 005b65e2 | g_APIDLL_setLightConstants
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b65e7
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b65ec
    PUSH 0x652d0c                       ; 005b65ef | = "APIDLLsetAmbientLight"
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b65f4 | g_RendererDLLHandle
    PUSH ESI                            ; 005b65fa
    MOV [0x03f6b950],EAX                ; 005b65fb | g_APIDLL_setLightVector
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6600
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6605
    PUSH 0x652d22                       ; 005b6608 | = "APIDLLsetTransform"
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b660d | g_RendererDLLHandle
    PUSH EDI                            ; 005b6613
    MOV [0x03f6b954],EAX                ; 005b6614 | g_APIDLL_setAmbientLight
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6619
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b661e
    PUSH 0x652d35                       ; 005b6621 | = "APIDLLpolyList"
    MOV EBP,dword ptr [0x03f6b97c]      ; 005b6626 | g_RendererDLLHandle
    PUSH EBP                            ; 005b662c
    MOV [0x03f6b958],EAX                ; 005b662d | g_APIDLL_setTransform
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6632
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6637
    PUSH 0x652d44                       ; 005b663a | = "APIDLLgetTextureHandle"
    MOV [0x03f6b95c],EAX                ; 005b663f | g_APIDLL_polyList
    MOV EAX,[0x03f6b97c]                ; 005b6644 | g_RendererDLLHandle
    PUSH EAX                            ; 005b6649
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b664a
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b664f
    PUSH 0x652d5b                       ; 005b6652 | = "APIDLLselectTextureByHandle"
    MOV EDX,dword ptr [0x03f6b97c]      ; 005b6657 | g_RendererDLLHandle
    PUSH EDX                            ; 005b665d
    MOV [0x03f6b960],EAX                ; 005b665e | g_APIDLL_getTextureHandle
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6663
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6668
    PUSH 0x652d77                       ; 005b666b | = "APIDLLenableCulling"
    MOV ECX,dword ptr [0x03f6b97c]      ; 005b6670 | g_RendererDLLHandle
    PUSH ECX                            ; 005b6676
    MOV [0x03f6b964],EAX                ; 005b6677 | g_APIDLL_selectTextureByHandle
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b667c
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b6681
    PUSH 0x652d8b                       ; 005b6684 | = "APIDLLenableClipping"
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b6689 | g_RendererDLLHandle
    PUSH EBX                            ; 005b668f
    MOV [0x03f6b968],EAX                ; 005b6690 | g_APIDLL_enableCulling
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b6695
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b669a
    PUSH 0x652da0                       ; 005b669d | = "APIDLLsetTextureClamp"
    MOV ESI,dword ptr [0x03f6b97c]      ; 005b66a2 | g_RendererDLLHandle
    PUSH ESI                            ; 005b66a8
    MOV [0x03f6b96c],EAX                ; 005b66a9 | g_APIDLL_enableClipping
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b66ae
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005b66b3
    PUSH 0x652db6                       ; 005b66b6 | = "APIDLLsetFog"
    MOV EDI,dword ptr [0x03f6b97c]      ; 005b66bb | g_RendererDLLHandle
    PUSH EDI                            ; 005b66c1
    MOV [0x03f6b970],EAX                ; 005b66c2 | g_APIDLL_setTextureClamp
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_005ede20 ; 005b66c7
        ;   XREF to: 005ede20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_005ede20(HMODULE hModule, LPCSTR lpProcName)
    MOV EBP,dword ptr [0x03f6b994]      ; 005b66cc | g_DLLFunctionsMissing
    ADD ESP,0x8                         ; 005b66d2
    MOV [0x03f6b974],EAX                ; 005b66d5 | g_APIDLL_setFog
    TEST EBP,EBP                        ; 005b66da
    JNZ 0x005b6727                      ; 005b66dc
        ;   XREF to: 005b6727 (CONDITIONAL_JUMP)  ; LAB_005b6727
    MOV EAX,0x1                         ; 005b66de
    MOV [0x03f6b978],EAX                ; 005b66e3 | g_LoadedExternalDLLRenderer
    ADD ESP,0x3b90                      ; 005b66e8
    POP EBP                             ; 005b66ee
    POP EDI                             ; 005b66ef
    POP ESI                             ; 005b66f0
    POP EBX                             ; 005b66f1
    RET                                 ; 005b66f2
    CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 ; 005b66f3
        ;   XREF to: 005b5d20 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20()
        ;   Label: LAB_005b66f3
    XOR ECX,ECX                         ; 005b66f8
    XOR EAX,EAX                         ; 005b66fa
    MOV dword ptr [0x03f6b878],ECX      ; 005b66fc | g_ExternalRendererActive
    ADD ESP,0x3b90                      ; 005b6702
    POP EBP                             ; 005b6708
    POP EDI                             ; 005b6709
    POP ESI                             ; 005b670a
    POP EBX                             ; 005b670b
    RET                                 ; 005b670c
    CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 ; 005b670d
        ;   XREF to: 005b5d20 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20()
        ;   Label: LAB_005b670d
    XOR EBX,EBX                         ; 005b6712
    XOR EAX,EAX                         ; 005b6714
    MOV dword ptr [0x03f6b878],EBX      ; 005b6716 | g_ExternalRendererActive
    ADD ESP,0x3b90                      ; 005b671c
    POP EBP                             ; 005b6722
    POP EDI                             ; 005b6723
    POP ESI                             ; 005b6724
    POP EBX                             ; 005b6725
    RET                                 ; 005b6726
    CALL wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 ; 005b6727
        ;   XREF to: 005b5d20 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20()
        ;   Label: LAB_005b6727
    XOR EDX,EDX                         ; 005b672c
    XOR EAX,EAX                         ; 005b672e
    MOV dword ptr [0x03f6b878],EDX      ; 005b6730 | g_ExternalRendererActive
    ADD ESP,0x3b90                      ; 005b6736
    POP EBP                             ; 005b673c
    POP EDI                             ; 005b673d
    POP ESI                             ; 005b673e
    POP EBX                             ; 005b673f
    RET                                 ; 005b6740

