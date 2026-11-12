; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_loadExternalRenderer_FUN_0055e8c0(HWND window_handle)
;
; Parameters:
; HWND             Stack[0x4]:4   window_handle
;
; XREF[4]:
;   core_menu.cpp_FUN_004ebf10 at 004ec856
;   engine_special.cpp_setResolutionAndColorTable_FUN_0055f770 at 0055f79a
;   engine_special.cpp_switchRenderer_FUN_0056046e at 005604aa
;   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_00588790 at 005888a5
;
; Referenced Globals:
;   TerminatedCString s_APIDLLInformation_005eaa4b
;   TerminatedCString s_APIDLLinit_005eaa5d
;   TerminatedCString s_APIDLLkill_005eaa68
;   TerminatedCString s_APIDLLtoggle_005eaa73
;   TerminatedCString s_APIDLLsetVideoMode_005eaa80
;   TerminatedCString s_APIDLLsetVideoMode2_005eaa93
;   TerminatedCString s_APIDLLrestoreVideoMode_005eaaa7
;   TerminatedCString s_APIDLLbeginScene_005eaabe
;   TerminatedCString s_APIDLLendScene_005eaacf
;   TerminatedCString s_APIDLLlockFrame_005eaade
;   TerminatedCString s_APIDLLunlockFrame_005eaaee
;   TerminatedCString s_APIDLLselectTexture_005eab00
;   TerminatedCString s_APIDLLupdateTexture_005eab14
;   TerminatedCString s_APIDLLselectTextureBGRA_005eab28
;   TerminatedCString s_APIDLLupdateTextureBGRA_005eab40
;   ... and 166 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   engine_special.cpp_CExternalRenderer_ctor_FUN_005602c0
;   engine_special.cpp_CExternalRenderer_validate_FUN_00560310
;   engine_special.cpp_selectCard_FUN_005600c0
;   engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0
;   wincore_wddvmem.cpp_getProcAddress_FUN_00589980
;   wincore_wddvmem.cpp_loadLibrary_FUN_00589970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055e8c0
        ;   Label: engine_special.cpp_loadExternalRenderer_FUN_0055e8c0
    PUSH ESI                            ; 0055e8c1
    PUSH EDI                            ; 0055e8c2
    PUSH EBP                            ; 0055e8c3
    SUB ESP,0x3c20                      ; 0055e8c4
    MOV EBX,dword ptr [ESP + 0x3c34]    ; 0055e8ca
    TEST EBX,EBX                        ; 0055e8d1
    JNZ 0x0055e8f1                      ; 0055e8d3
        ;   XREF to: 0055e8f1 (CONDITIONAL_JUMP)  ; LAB_0055e8f1
    MOV EBX,dword ptr [0x0264bcf0]      ; 0055e8d5 | DAT_0264bcf0
    CMP dword ptr [0x0264bba0],0x0      ; 0055e8db | DAT_0264bba0
        ;   Label: LAB_0055e8db
    JNZ 0x0055e8f9                      ; 0055e8e2
        ;   XREF to: 0055e8f9 (CONDITIONAL_JUMP)  ; LAB_0055e8f9
    XOR EAX,EAX                         ; 0055e8e4
    ADD ESP,0x3c20                      ; 0055e8e6
    POP EBP                             ; 0055e8ec
    POP EDI                             ; 0055e8ed
    POP ESI                             ; 0055e8ee
    POP EBX                             ; 0055e8ef
    RET                                 ; 0055e8f0
    MOV dword ptr [0x0264bcf0],EBX      ; 0055e8f1 | DAT_0264bcf0
        ;   Label: LAB_0055e8f1
    JMP 0x0055e8db                      ; 0055e8f7
        ;   XREF to: 0055e8db (UNCONDITIONAL_JUMP)  ; LAB_0055e8db
    PUSH 0x61e180                       ; 0055e8f9 | DAT_0061e180
        ;   Label: LAB_0055e8f9
    CALL wincore_wddvmem.cpp_loadLibrary_FUN_00589970 ; 0055e8fe
        ;   XREF to: 00589970 (UNCONDITIONAL_CALL)  ; HMODULE wincore_wddvmem.cpp_loadLibrary_FUN_00589970(LPCSTR lpLibFileName)
    ADD ESP,0x4                         ; 0055e903
    MOV [0x0264bce0],EAX                ; 0055e906 | DAT_0264bce0
    TEST EAX,EAX                        ; 0055e90b
    JNZ 0x0055e921                      ; 0055e90d
        ;   XREF to: 0055e921 (CONDITIONAL_JUMP)  ; LAB_0055e921
    MOV [0x0264bba0],EAX                ; 0055e90f | DAT_0264bba0
    XOR EAX,EAX                         ; 0055e914
    ADD ESP,0x3c20                      ; 0055e916
    POP EBP                             ; 0055e91c
    POP EDI                             ; 0055e91d
    POP ESI                             ; 0055e91e
    POP EBX                             ; 0055e91f
    RET                                 ; 0055e920
    PUSH 0x5eaa4b                       ; 0055e921 | = "APIDLLInformation"
        ;   Label: LAB_0055e921
    PUSH EAX                            ; 0055e926
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055e927
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055e92c
    MOV EDX,EAX                         ; 0055e92f
    TEST EAX,EAX                        ; 0055e931
    JZ 0x0055f285                       ; 0055e933
        ;   XREF to: 0055f285 (CONDITIONAL_JUMP)  ; LAB_0055f285
    MOV EAX,ESP                         ; 0055e939
    PUSH EAX                            ; 0055e93b
    MOV ECX,dword ptr [0x0264bce0]      ; 0055e93c | DAT_0264bce0
    PUSH ECX                            ; 0055e942
    CALL EDX                            ; 0055e943
    ADD ESP,0x8                         ; 0055e945
    LEA EAX,[ESP + 0x1dc8]              ; 0055e948
    PUSH EAX                            ; 0055e94f
    CALL engine_special.cpp_CExternalRenderer_ctor_FUN_005602c0 ; 0055e950
        ;   XREF to: 005602c0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_CExternalRenderer_ctor_FUN_005602c0(CExternalRenderer * this_ptr)
    ADD ESP,0x4                         ; 0055e955
    LEA EAX,[ESP + 0x1dc8]              ; 0055e958
    PUSH EAX                            ; 0055e95f
    LEA EAX,[ESP + 0x4]                 ; 0055e960
    PUSH EAX                            ; 0055e964
    CALL engine_special.cpp_CExternalRenderer_validate_FUN_00560310 ; 0055e965
        ;   XREF to: 00560310 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_CExternalRenderer_validate_FUN_00560310(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
    ADD ESP,0x8                         ; 0055e96a
    TEST EAX,EAX                        ; 0055e96d
    JZ 0x0055f29f                       ; 0055e96f
        ;   XREF to: 0055f29f (CONDITIONAL_JUMP)  ; LAB_0055f29f
    PUSH 0x5eaa5d                       ; 0055e975 | = "APIDLLinit"
    MOV EDI,dword ptr [0x0264bce0]      ; 0055e97a | DAT_0264bce0
    XOR ESI,ESI                         ; 0055e980
    PUSH EDI                            ; 0055e982
    MOV dword ptr [0x0264bcf8],ESI      ; 0055e983 | DAT_0264bcf8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055e989
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055e98e
    MOV [0x0264bbb8],EAX                ; 0055e991 | DAT_0264bbb8
    TEST EAX,EAX                        ; 0055e996
    JNZ 0x0055e9a4                      ; 0055e998
        ;   XREF to: 0055e9a4 (CONDITIONAL_JUMP)  ; LAB_0055e9a4
    MOV dword ptr [0x0264bcf8],0x1      ; 0055e99a | DAT_0264bcf8
    PUSH 0x5eaa68                       ; 0055e9a4 | = "APIDLLkill"
        ;   Label: LAB_0055e9a4
    MOV EAX,[0x0264bce0]                ; 0055e9a9 | DAT_0264bce0
    PUSH EAX                            ; 0055e9ae
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055e9af
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055e9b4
    MOV [0x0264bbbc],EAX                ; 0055e9b7 | DAT_0264bbbc
    TEST EAX,EAX                        ; 0055e9bc
    JNZ 0x0055e9ca                      ; 0055e9be
        ;   XREF to: 0055e9ca (CONDITIONAL_JUMP)  ; LAB_0055e9ca
    MOV dword ptr [0x0264bcf8],0x1      ; 0055e9c0 | DAT_0264bcf8
    PUSH 0x5eaa73                       ; 0055e9ca | = "APIDLLtoggle"
        ;   Label: LAB_0055e9ca
    MOV ECX,dword ptr [0x0264bce0]      ; 0055e9cf | DAT_0264bce0
    PUSH ECX                            ; 0055e9d5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055e9d6
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055e9db
    MOV [0x0264bbc0],EAX                ; 0055e9de | DAT_0264bbc0
    TEST EAX,EAX                        ; 0055e9e3
    JNZ 0x0055e9f1                      ; 0055e9e5
        ;   XREF to: 0055e9f1 (CONDITIONAL_JUMP)  ; LAB_0055e9f1
    MOV dword ptr [0x0264bcf8],0x1      ; 0055e9e7 | DAT_0264bcf8
    PUSH 0x5eaa80                       ; 0055e9f1 | = "APIDLLsetVideoMode"
        ;   Label: LAB_0055e9f1
    MOV EDI,dword ptr [0x0264bce0]      ; 0055e9f6 | DAT_0264bce0
    PUSH EDI                            ; 0055e9fc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055e9fd
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ea02
    MOV [0x0264bbc4],EAX                ; 0055ea05 | DAT_0264bbc4
    TEST EAX,EAX                        ; 0055ea0a
    JNZ 0x0055ea18                      ; 0055ea0c
        ;   XREF to: 0055ea18 (CONDITIONAL_JUMP)  ; LAB_0055ea18
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ea0e | DAT_0264bcf8
    PUSH 0x5eaa93                       ; 0055ea18 | = "APIDLLsetVideoMode2"
        ;   Label: LAB_0055ea18
    MOV EAX,[0x0264bce0]                ; 0055ea1d | DAT_0264bce0
    PUSH EAX                            ; 0055ea22
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ea23
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ea28
    MOV [0x0264bbc8],EAX                ; 0055ea2b | DAT_0264bbc8
    TEST EAX,EAX                        ; 0055ea30
    JNZ 0x0055ea3e                      ; 0055ea32
        ;   XREF to: 0055ea3e (CONDITIONAL_JUMP)  ; LAB_0055ea3e
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ea34 | DAT_0264bcf8
    PUSH 0x5eaaa7                       ; 0055ea3e | = "APIDLLrestoreVideoMode"
        ;   Label: LAB_0055ea3e
    MOV ECX,dword ptr [0x0264bce0]      ; 0055ea43 | DAT_0264bce0
    PUSH ECX                            ; 0055ea49
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ea4a
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ea4f
    MOV [0x0264bbcc],EAX                ; 0055ea52 | DAT_0264bbcc
    TEST EAX,EAX                        ; 0055ea57
    JNZ 0x0055ea65                      ; 0055ea59
        ;   XREF to: 0055ea65 (CONDITIONAL_JUMP)  ; LAB_0055ea65
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ea5b | DAT_0264bcf8
    PUSH 0x5eaabe                       ; 0055ea65 | = "APIDLLbeginScene"
        ;   Label: LAB_0055ea65
    MOV EDI,dword ptr [0x0264bce0]      ; 0055ea6a | DAT_0264bce0
    PUSH EDI                            ; 0055ea70
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ea71
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ea76
    MOV [0x0264bbd0],EAX                ; 0055ea79 | DAT_0264bbd0
    TEST EAX,EAX                        ; 0055ea7e
    JNZ 0x0055ea8c                      ; 0055ea80
        ;   XREF to: 0055ea8c (CONDITIONAL_JUMP)  ; LAB_0055ea8c
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ea82 | DAT_0264bcf8
    PUSH 0x5eaacf                       ; 0055ea8c | = "APIDLLendScene"
        ;   Label: LAB_0055ea8c
    MOV EAX,[0x0264bce0]                ; 0055ea91 | DAT_0264bce0
    PUSH EAX                            ; 0055ea96
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ea97
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ea9c
    MOV [0x0264bbd4],EAX                ; 0055ea9f | DAT_0264bbd4
    TEST EAX,EAX                        ; 0055eaa4
    JNZ 0x0055eab2                      ; 0055eaa6
        ;   XREF to: 0055eab2 (CONDITIONAL_JUMP)  ; LAB_0055eab2
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eaa8 | DAT_0264bcf8
    PUSH 0x5eaade                       ; 0055eab2 | = "APIDLLlockFrame"
        ;   Label: LAB_0055eab2
    MOV ECX,dword ptr [0x0264bce0]      ; 0055eab7 | DAT_0264bce0
    PUSH ECX                            ; 0055eabd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eabe
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eac3
    MOV [0x0264bbd8],EAX                ; 0055eac6 | DAT_0264bbd8
    TEST EAX,EAX                        ; 0055eacb
    JNZ 0x0055ead9                      ; 0055eacd
        ;   XREF to: 0055ead9 (CONDITIONAL_JUMP)  ; LAB_0055ead9
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eacf | DAT_0264bcf8
    PUSH 0x5eaaee                       ; 0055ead9 | = "APIDLLunlockFrame"
        ;   Label: LAB_0055ead9
    MOV EDI,dword ptr [0x0264bce0]      ; 0055eade | DAT_0264bce0
    PUSH EDI                            ; 0055eae4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eae5
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eaea
    MOV [0x0264bbdc],EAX                ; 0055eaed | DAT_0264bbdc
    TEST EAX,EAX                        ; 0055eaf2
    JNZ 0x0055eb00                      ; 0055eaf4
        ;   XREF to: 0055eb00 (CONDITIONAL_JUMP)  ; LAB_0055eb00
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eaf6 | DAT_0264bcf8
    PUSH 0x5eab00                       ; 0055eb00 | = "APIDLLselectTexture"
        ;   Label: LAB_0055eb00
    MOV EAX,[0x0264bce0]                ; 0055eb05 | DAT_0264bce0
    PUSH EAX                            ; 0055eb0a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eb0b
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eb10
    MOV [0x0264bbe0],EAX                ; 0055eb13 | DAT_0264bbe0
    TEST EAX,EAX                        ; 0055eb18
    JNZ 0x0055eb26                      ; 0055eb1a
        ;   XREF to: 0055eb26 (CONDITIONAL_JUMP)  ; LAB_0055eb26
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eb1c | DAT_0264bcf8
    PUSH 0x5eab14                       ; 0055eb26 | = "APIDLLupdateTexture"
        ;   Label: LAB_0055eb26
    MOV ECX,dword ptr [0x0264bce0]      ; 0055eb2b | DAT_0264bce0
    PUSH ECX                            ; 0055eb31
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eb32
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eb37
    MOV [0x0264bbe4],EAX                ; 0055eb3a | DAT_0264bbe4
    TEST EAX,EAX                        ; 0055eb3f
    JNZ 0x0055eb4d                      ; 0055eb41
        ;   XREF to: 0055eb4d (CONDITIONAL_JUMP)  ; LAB_0055eb4d
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eb43 | DAT_0264bcf8
    PUSH 0x5eab28                       ; 0055eb4d | = "APIDLLselectTextureBGRA"
        ;   Label: LAB_0055eb4d
    MOV EDI,dword ptr [0x0264bce0]      ; 0055eb52 | DAT_0264bce0
    PUSH EDI                            ; 0055eb58
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eb59
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eb5e
    PUSH 0x5eab40                       ; 0055eb61 | = "APIDLLupdateTextureBGRA"
    MOV EBP,dword ptr [0x0264bce0]      ; 0055eb66 | DAT_0264bce0
    PUSH EBP                            ; 0055eb6c
    MOV [0x0264bbe8],EAX                ; 0055eb6d | DAT_0264bbe8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eb72
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eb77
    PUSH 0x5eab58                       ; 0055eb7a | = "APIDLLsetMipMapLevel"
    MOV [0x0264bbec],EAX                ; 0055eb7f | DAT_0264bbec
    MOV EAX,[0x0264bce0]                ; 0055eb84 | DAT_0264bce0
    PUSH EAX                            ; 0055eb89
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eb8a
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eb8f
    MOV [0x0264bbf0],EAX                ; 0055eb92 | DAT_0264bbf0
    TEST EAX,EAX                        ; 0055eb97
    JNZ 0x0055eba5                      ; 0055eb99
        ;   XREF to: 0055eba5 (CONDITIONAL_JUMP)  ; LAB_0055eba5
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eb9b | DAT_0264bcf8
    PUSH 0x5eab6d                       ; 0055eba5 | = "APIDLLdrawPolygon"
        ;   Label: LAB_0055eba5
    MOV ECX,dword ptr [0x0264bce0]      ; 0055ebaa | DAT_0264bce0
    PUSH ECX                            ; 0055ebb0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ebb1
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ebb6
    MOV [0x0264bbf4],EAX                ; 0055ebb9 | DAT_0264bbf4
    TEST EAX,EAX                        ; 0055ebbe
    JNZ 0x0055ebcc                      ; 0055ebc0
        ;   XREF to: 0055ebcc (CONDITIONAL_JUMP)  ; LAB_0055ebcc
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ebc2 | DAT_0264bcf8
    PUSH 0x5eab7f                       ; 0055ebcc | = "APIDLLdrawPolygon2"
        ;   Label: LAB_0055ebcc
    MOV EDI,dword ptr [0x0264bce0]      ; 0055ebd1 | DAT_0264bce0
    PUSH EDI                            ; 0055ebd7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ebd8
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ebdd
    MOV [0x0264bbf8],EAX                ; 0055ebe0 | DAT_0264bbf8
    TEST EAX,EAX                        ; 0055ebe5
    JNZ 0x0055ebf3                      ; 0055ebe7
        ;   XREF to: 0055ebf3 (CONDITIONAL_JUMP)  ; LAB_0055ebf3
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ebe9 | DAT_0264bcf8
    PUSH 0x5eab92                       ; 0055ebf3 | = "APIDLLdrawPolyList"
        ;   Label: LAB_0055ebf3
    MOV EAX,[0x0264bce0]                ; 0055ebf8 | DAT_0264bce0
    PUSH EAX                            ; 0055ebfd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ebfe
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ec03
    PUSH 0x5eaba5                       ; 0055ec06 | = "APIDLLdrawPolyList2"
    MOV EDX,dword ptr [0x0264bce0]      ; 0055ec0b | DAT_0264bce0
    PUSH EDX                            ; 0055ec11
    MOV [0x0264bbfc],EAX                ; 0055ec12 | DAT_0264bbfc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ec17
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ec1c
    PUSH 0x5eabb9                       ; 0055ec1f | = "APIDLLdrawPolyList3"
    MOV ECX,dword ptr [0x0264bce0]      ; 0055ec24 | DAT_0264bce0
    PUSH ECX                            ; 0055ec2a
    MOV [0x0264bc00],EAX                ; 0055ec2b | DAT_0264bc00
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ec30
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ec35
    PUSH 0x5eabcd                       ; 0055ec38 | = "APIDLLaddParticle"
    MOV ESI,dword ptr [0x0264bce0]      ; 0055ec3d | DAT_0264bce0
    PUSH ESI                            ; 0055ec43
    MOV [0x0264bc04],EAX                ; 0055ec44 | DAT_0264bc04
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ec49
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ec4e
    MOV [0x0264bc08],EAX                ; 0055ec51 | DAT_0264bc08
    TEST EAX,EAX                        ; 0055ec56
    JNZ 0x0055ec64                      ; 0055ec58
        ;   XREF to: 0055ec64 (CONDITIONAL_JUMP)  ; LAB_0055ec64
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ec5a | DAT_0264bcf8
    PUSH 0x5eabdf                       ; 0055ec64 | = "APIDLLflushParticleList"
        ;   Label: LAB_0055ec64
    MOV EBP,dword ptr [0x0264bce0]      ; 0055ec69 | DAT_0264bce0
    PUSH EBP                            ; 0055ec6f
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ec70
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ec75
    MOV [0x0264bc0c],EAX                ; 0055ec78 | DAT_0264bc0c
    TEST EAX,EAX                        ; 0055ec7d
    JNZ 0x0055ec8b                      ; 0055ec7f
        ;   XREF to: 0055ec8b (CONDITIONAL_JUMP)  ; LAB_0055ec8b
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ec81 | DAT_0264bcf8
    PUSH 0x5eabf7                       ; 0055ec8b | = "APIDLLadd3dLine"
        ;   Label: LAB_0055ec8b
    MOV EDX,dword ptr [0x0264bce0]      ; 0055ec90 | DAT_0264bce0
    PUSH EDX                            ; 0055ec96
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ec97
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ec9c
    MOV [0x0264bc10],EAX                ; 0055ec9f | DAT_0264bc10
    TEST EAX,EAX                        ; 0055eca4
    JNZ 0x0055ecb2                      ; 0055eca6
        ;   XREF to: 0055ecb2 (CONDITIONAL_JUMP)  ; LAB_0055ecb2
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eca8 | DAT_0264bcf8
    PUSH 0x5eac07                       ; 0055ecb2 | = "APIDLLflushLineList"
        ;   Label: LAB_0055ecb2
    MOV ESI,dword ptr [0x0264bce0]      ; 0055ecb7 | DAT_0264bce0
    PUSH ESI                            ; 0055ecbd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ecbe
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ecc3
    MOV [0x0264bc14],EAX                ; 0055ecc6 | DAT_0264bc14
    TEST EAX,EAX                        ; 0055eccb
    JNZ 0x0055ecd9                      ; 0055eccd
        ;   XREF to: 0055ecd9 (CONDITIONAL_JUMP)  ; LAB_0055ecd9
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eccf | DAT_0264bcf8
    PUSH 0x5eac1b                       ; 0055ecd9 | = "APIDLLclear"
        ;   Label: LAB_0055ecd9
    MOV EBP,dword ptr [0x0264bce0]      ; 0055ecde | DAT_0264bce0
    PUSH EBP                            ; 0055ece4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ece5
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ecea
    MOV [0x0264bc18],EAX                ; 0055eced | DAT_0264bc18
    TEST EAX,EAX                        ; 0055ecf2
    JNZ 0x0055ed00                      ; 0055ecf4
        ;   XREF to: 0055ed00 (CONDITIONAL_JUMP)  ; LAB_0055ed00
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ecf6 | DAT_0264bcf8
    PUSH 0x5eac27                       ; 0055ed00 | = "APIDLLsetFogColor"
        ;   Label: LAB_0055ed00
    MOV EDX,dword ptr [0x0264bce0]      ; 0055ed05 | DAT_0264bce0
    PUSH EDX                            ; 0055ed0b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ed0c
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ed11
    MOV [0x0264bc1c],EAX                ; 0055ed14 | DAT_0264bc1c
    TEST EAX,EAX                        ; 0055ed19
    JNZ 0x0055ed27                      ; 0055ed1b
        ;   XREF to: 0055ed27 (CONDITIONAL_JUMP)  ; LAB_0055ed27
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ed1d | DAT_0264bcf8
    PUSH 0x5eac39                       ; 0055ed27 | = "APIDLLsync"
        ;   Label: LAB_0055ed27
    MOV ESI,dword ptr [0x0264bce0]      ; 0055ed2c | DAT_0264bce0
    PUSH ESI                            ; 0055ed32
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ed33
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ed38
    MOV [0x0264bc20],EAX                ; 0055ed3b | DAT_0264bc20
    TEST EAX,EAX                        ; 0055ed40
    JNZ 0x0055ed4e                      ; 0055ed42
        ;   XREF to: 0055ed4e (CONDITIONAL_JUMP)  ; LAB_0055ed4e
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ed44 | DAT_0264bcf8
    PUSH 0x5eac44                       ; 0055ed4e | = "APIDLLclearZBuffer"
        ;   Label: LAB_0055ed4e
    MOV EBP,dword ptr [0x0264bce0]      ; 0055ed53 | DAT_0264bce0
    PUSH EBP                            ; 0055ed59
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ed5a
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ed5f
    MOV [0x0264bc24],EAX                ; 0055ed62 | DAT_0264bc24
    TEST EAX,EAX                        ; 0055ed67
    JNZ 0x0055ed75                      ; 0055ed69
        ;   XREF to: 0055ed75 (CONDITIONAL_JUMP)  ; LAB_0055ed75
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ed6b | DAT_0264bcf8
    PUSH 0x5eac57                       ; 0055ed75 | = "APIDLLclearZBox"
        ;   Label: LAB_0055ed75
    MOV EDX,dword ptr [0x0264bce0]      ; 0055ed7a | DAT_0264bce0
    PUSH EDX                            ; 0055ed80
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ed81
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ed86
    MOV [0x0264bc28],EAX                ; 0055ed89 | DAT_0264bc28
    TEST EAX,EAX                        ; 0055ed8e
    JNZ 0x0055ed9c                      ; 0055ed90
        ;   XREF to: 0055ed9c (CONDITIONAL_JUMP)  ; LAB_0055ed9c
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ed92 | DAT_0264bcf8
    PUSH 0x5eac67                       ; 0055ed9c | = "APIDLLsetColorTable16"
        ;   Label: LAB_0055ed9c
    MOV ESI,dword ptr [0x0264bce0]      ; 0055eda1 | DAT_0264bce0
    PUSH ESI                            ; 0055eda7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eda8
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055edad
    MOV [0x0264bc2c],EAX                ; 0055edb0 | DAT_0264bc2c
    TEST EAX,EAX                        ; 0055edb5
    JNZ 0x0055edc3                      ; 0055edb7
        ;   XREF to: 0055edc3 (CONDITIONAL_JUMP)  ; LAB_0055edc3
    MOV dword ptr [0x0264bcf8],0x1      ; 0055edb9 | DAT_0264bcf8
    PUSH 0x5eac7d                       ; 0055edc3 | = "APIDLLGetDisplayContext"
        ;   Label: LAB_0055edc3
    MOV EBP,dword ptr [0x0264bce0]      ; 0055edc8 | DAT_0264bce0
    PUSH EBP                            ; 0055edce
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055edcf
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055edd4
    MOV [0x0264bc30],EAX                ; 0055edd7 | DAT_0264bc30
    TEST EAX,EAX                        ; 0055eddc
    JNZ 0x0055edea                      ; 0055edde
        ;   XREF to: 0055edea (CONDITIONAL_JUMP)  ; LAB_0055edea
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ede0 | DAT_0264bcf8
    PUSH 0x5eac95                       ; 0055edea | = "APIDLLReleaseDisplayContext"
        ;   Label: LAB_0055edea
    MOV EDX,dword ptr [0x0264bce0]      ; 0055edef | DAT_0264bce0
    PUSH EDX                            ; 0055edf5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055edf6
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055edfb
    MOV [0x0264bc34],EAX                ; 0055edfe | DAT_0264bc34
    TEST EAX,EAX                        ; 0055ee03
    JNZ 0x0055ee11                      ; 0055ee05
        ;   XREF to: 0055ee11 (CONDITIONAL_JUMP)  ; LAB_0055ee11
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ee07 | DAT_0264bcf8
    PUSH 0x5eacb1                       ; 0055ee11 | = "APIDLLmasterZBuffer"
        ;   Label: LAB_0055ee11
    MOV ESI,dword ptr [0x0264bce0]      ; 0055ee16 | DAT_0264bce0
    PUSH ESI                            ; 0055ee1c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ee1d
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ee22
    MOV [0x0264bc38],EAX                ; 0055ee25 | DAT_0264bc38
    TEST EAX,EAX                        ; 0055ee2a
    JNZ 0x0055ee38                      ; 0055ee2c
        ;   XREF to: 0055ee38 (CONDITIONAL_JUMP)  ; LAB_0055ee38
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ee2e | DAT_0264bcf8
    PUSH 0x5eacc5                       ; 0055ee38 | = "APIDLLrestoreZBuffer"
        ;   Label: LAB_0055ee38
    MOV EBP,dword ptr [0x0264bce0]      ; 0055ee3d | DAT_0264bce0
    PUSH EBP                            ; 0055ee43
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ee44
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ee49
    MOV [0x0264bc3c],EAX                ; 0055ee4c | DAT_0264bc3c
    TEST EAX,EAX                        ; 0055ee51
    JNZ 0x0055ee5f                      ; 0055ee53
        ;   XREF to: 0055ee5f (CONDITIONAL_JUMP)  ; LAB_0055ee5f
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ee55 | DAT_0264bcf8
    PUSH 0x5eacda                       ; 0055ee5f | = "APIDLLgetVideoMemory"
        ;   Label: LAB_0055ee5f
    MOV EDX,dword ptr [0x0264bce0]      ; 0055ee64 | DAT_0264bce0
    PUSH EDX                            ; 0055ee6a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ee6b
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ee70
    MOV [0x0264bc40],EAX                ; 0055ee73 | DAT_0264bc40
    TEST EAX,EAX                        ; 0055ee78
    JNZ 0x0055ee86                      ; 0055ee7a
        ;   XREF to: 0055ee86 (CONDITIONAL_JUMP)  ; LAB_0055ee86
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ee7c | DAT_0264bcf8
    PUSH 0x5eacef                       ; 0055ee86 | = "APIDLLselectCard"
        ;   Label: LAB_0055ee86
    MOV ESI,dword ptr [0x0264bce0]      ; 0055ee8b | DAT_0264bce0
    PUSH ESI                            ; 0055ee91
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ee92
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ee97
    MOV [0x0264bc44],EAX                ; 0055ee9a | DAT_0264bc44
    TEST EAX,EAX                        ; 0055ee9f
    JNZ 0x0055eead                      ; 0055eea1
        ;   XREF to: 0055eead (CONDITIONAL_JUMP)  ; LAB_0055eead
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eea3 | DAT_0264bcf8
    PUSH 0x5ead00                       ; 0055eead | = "APIDLLbuildCardList"
        ;   Label: LAB_0055eead
    MOV EBP,dword ptr [0x0264bce0]      ; 0055eeb2 | DAT_0264bce0
    PUSH EBP                            ; 0055eeb8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eeb9
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eebe
    MOV [0x0264bc48],EAX                ; 0055eec1 | DAT_0264bc48
    TEST EAX,EAX                        ; 0055eec6
    JNZ 0x0055eed4                      ; 0055eec8
        ;   XREF to: 0055eed4 (CONDITIONAL_JUMP)  ; LAB_0055eed4
    MOV dword ptr [0x0264bcf8],0x1      ; 0055eeca | DAT_0264bcf8
    PUSH 0x5ead14                       ; 0055eed4 | = "APIDLLlockHoldBuffer"
        ;   Label: LAB_0055eed4
    MOV EDX,dword ptr [0x0264bce0]      ; 0055eed9 | DAT_0264bce0
    PUSH EDX                            ; 0055eedf
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eee0
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eee5
    PUSH 0x5ead29                       ; 0055eee8 | = "APIDLLunlockHoldBuffer"
    MOV ECX,dword ptr [0x0264bce0]      ; 0055eeed | DAT_0264bce0
    PUSH ECX                            ; 0055eef3
    MOV [0x0264bc4c],EAX                ; 0055eef4 | DAT_0264bc4c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055eef9
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055eefe
    PUSH 0x5ead40                       ; 0055ef01 | = "APIDLLlockTexture"
    MOV ESI,dword ptr [0x0264bce0]      ; 0055ef06 | DAT_0264bce0
    PUSH ESI                            ; 0055ef0c
    MOV [0x0264bc50],EAX                ; 0055ef0d | DAT_0264bc50
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ef12
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ef17
    PUSH 0x5ead52                       ; 0055ef1a | = "APIDLLunlockTexture"
    MOV EDI,dword ptr [0x0264bce0]      ; 0055ef1f | DAT_0264bce0
    PUSH EDI                            ; 0055ef25
    MOV [0x0264bc54],EAX                ; 0055ef26 | DAT_0264bc54
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ef2b
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ef30
    PUSH 0x5ead66                       ; 0055ef33 | = "APIDLLgetTextureInfo"
    MOV EBP,dword ptr [0x0264bce0]      ; 0055ef38 | DAT_0264bce0
    PUSH EBP                            ; 0055ef3e
    MOV [0x0264bc58],EAX                ; 0055ef3f | DAT_0264bc58
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ef44
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ef49
    MOV [0x0264bc5c],EAX                ; 0055ef4c | DAT_0264bc5c
    TEST EAX,EAX                        ; 0055ef51
    JNZ 0x0055ef5f                      ; 0055ef53
        ;   XREF to: 0055ef5f (CONDITIONAL_JUMP)  ; LAB_0055ef5f
    MOV dword ptr [0x0264bcf8],0x1      ; 0055ef55 | DAT_0264bcf8
    PUSH 0x5ead7b                       ; 0055ef5f | = "APIDLLsetVideoModeX"
        ;   Label: LAB_0055ef5f
    MOV EDX,dword ptr [0x0264bce0]      ; 0055ef64 | DAT_0264bce0
    PUSH EDX                            ; 0055ef6a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ef6b
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ef70
    PUSH 0x5ead8f                       ; 0055ef73 | = "APIDLLrestoreVideoModeX"
    MOV ECX,dword ptr [0x0264bce0]      ; 0055ef78 | DAT_0264bce0
    PUSH ECX                            ; 0055ef7e
    MOV [0x0264bc60],EAX                ; 0055ef7f | DAT_0264bc60
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ef84
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055ef89
    PUSH 0x5eada7                       ; 0055ef8c | = "APIDLLlockFrameX"
    MOV ESI,dword ptr [0x0264bce0]      ; 0055ef91 | DAT_0264bce0
    PUSH ESI                            ; 0055ef97
    MOV [0x0264bc64],EAX                ; 0055ef98 | DAT_0264bc64
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055ef9d
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055efa2
    PUSH 0x5eadb8                       ; 0055efa5 | = "APIDLLunlockFrameX"
    MOV EDI,dword ptr [0x0264bce0]      ; 0055efaa | DAT_0264bce0
    PUSH EDI                            ; 0055efb0
    MOV [0x0264bc68],EAX                ; 0055efb1 | DAT_0264bc68
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055efb6
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055efbb
    PUSH 0x5eadcb                       ; 0055efbe | = "APIDLLtoggleX"
    MOV EBP,dword ptr [0x0264bce0]      ; 0055efc3 | DAT_0264bce0
    PUSH EBP                            ; 0055efc9
    MOV [0x0264bc6c],EAX                ; 0055efca | DAT_0264bc6c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055efcf
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055efd4
    PUSH 0x5eadd9                       ; 0055efd7 | = "APIDLLsetViewport"
    MOV [0x0264bc70],EAX                ; 0055efdc | DAT_0264bc70
    MOV EAX,[0x0264bce0]                ; 0055efe1 | DAT_0264bce0
    PUSH EAX                            ; 0055efe6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055efe7
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055efec
    PUSH 0x5eadeb                       ; 0055efef | = "APIDLLsetLightConstants"
    MOV EDX,dword ptr [0x0264bce0]      ; 0055eff4 | DAT_0264bce0
    PUSH EDX                            ; 0055effa
    MOV [0x0264bc74],EAX                ; 0055effb | DAT_0264bc74
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f000
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f005
    PUSH 0x5eae03                       ; 0055f008 | = "APIDLLsetLightVector"
    MOV ECX,dword ptr [0x0264bce0]      ; 0055f00d | DAT_0264bce0
    PUSH ECX                            ; 0055f013
    MOV [0x0264bc78],EAX                ; 0055f014 | DAT_0264bc78
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f019
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f01e
    PUSH 0x5eae18                       ; 0055f021 | = "APIDLLsetAmbientLight"
    MOV ESI,dword ptr [0x0264bce0]      ; 0055f026 | DAT_0264bce0
    PUSH ESI                            ; 0055f02c
    MOV [0x0264bc7c],EAX                ; 0055f02d | DAT_0264bc7c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f032
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f037
    PUSH 0x5eae2e                       ; 0055f03a | = "APIDLLsetTransform"
    MOV EDI,dword ptr [0x0264bce0]      ; 0055f03f | DAT_0264bce0
    PUSH EDI                            ; 0055f045
    MOV [0x0264bc80],EAX                ; 0055f046 | DAT_0264bc80
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f04b
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f050
    PUSH 0x5eae41                       ; 0055f053 | = "APIDLLpolyList"
    MOV EBP,dword ptr [0x0264bce0]      ; 0055f058 | DAT_0264bce0
    PUSH EBP                            ; 0055f05e
    MOV [0x0264bc84],EAX                ; 0055f05f | DAT_0264bc84
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f064
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f069
    PUSH 0x5eae50                       ; 0055f06c | = "APIDLLpolyList2"
    MOV [0x0264bc88],EAX                ; 0055f071 | DAT_0264bc88
    MOV EAX,[0x0264bce0]                ; 0055f076 | DAT_0264bce0
    PUSH EAX                            ; 0055f07b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f07c
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f081
    PUSH 0x5eae60                       ; 0055f084 | = "APIDLLpolyListL"
    MOV EDX,dword ptr [0x0264bce0]      ; 0055f089 | DAT_0264bce0
    PUSH EDX                            ; 0055f08f
    MOV [0x0264bc8c],EAX                ; 0055f090 | DAT_0264bc8c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f095
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f09a
    MOV [0x0264bc90],EAX                ; 0055f09d | DAT_0264bc90
    PUSH 0x5eae70                       ; 0055f0a2 | = "APIDLLpolyListD3DL"
    MOV ECX,dword ptr [0x0264bce0]      ; 0055f0a7 | DAT_0264bce0
    PUSH ECX                            ; 0055f0ad
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f0ae
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f0b3
    PUSH 0x5eae83                       ; 0055f0b6 | = "APIDLLpolyListD3DL2"
    MOV ESI,dword ptr [0x0264bce0]      ; 0055f0bb | DAT_0264bce0
    PUSH ESI                            ; 0055f0c1
    MOV [0x0264bc94],EAX                ; 0055f0c2 | DAT_0264bc94
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f0c7
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f0cc
    PUSH 0x5eae97                       ; 0055f0cf | = "APIDLLpolyListD3DTL"
    MOV EDI,dword ptr [0x0264bce0]      ; 0055f0d4 | DAT_0264bce0
    PUSH EDI                            ; 0055f0da
    MOV [0x0264bc98],EAX                ; 0055f0db | DAT_0264bc98
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f0e0
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f0e5
    PUSH 0x5eaeab                       ; 0055f0e8 | = "APIDLLpolyListTL"
    MOV EBP,dword ptr [0x0264bce0]      ; 0055f0ed | DAT_0264bce0
    PUSH EBP                            ; 0055f0f3
    MOV [0x0264bc9c],EAX                ; 0055f0f4 | DAT_0264bc9c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f0f9
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f0fe
    PUSH 0x5eaebc                       ; 0055f101 | = "APIDLLdotListD3DL"
    MOV [0x0264bca0],EAX                ; 0055f106 | DAT_0264bca0
    MOV EAX,[0x0264bce0]                ; 0055f10b | DAT_0264bce0
    PUSH EAX                            ; 0055f110
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f111
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f116
    PUSH 0x5eaece                       ; 0055f119 | = "APIDLLdotListD3DTL"
    MOV EDX,dword ptr [0x0264bce0]      ; 0055f11e | DAT_0264bce0
    PUSH EDX                            ; 0055f124
    MOV [0x0264bca4],EAX                ; 0055f125 | DAT_0264bca4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f12a
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f12f
    PUSH 0x5eaee1                       ; 0055f132 | = "APIDLLlineListD3DL"
    MOV ECX,dword ptr [0x0264bce0]      ; 0055f137 | DAT_0264bce0
    PUSH ECX                            ; 0055f13d
    MOV [0x0264bca8],EAX                ; 0055f13e | DAT_0264bca8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f143
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f148
    PUSH 0x5eaef4                       ; 0055f14b | = "APIDLLlineListD3DTL"
    MOV ESI,dword ptr [0x0264bce0]      ; 0055f150 | DAT_0264bce0
    PUSH ESI                            ; 0055f156
    MOV [0x0264bcac],EAX                ; 0055f157 | DAT_0264bcac
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f15c
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f161
    PUSH 0x5eaf08                       ; 0055f164 | = "APIDLLgetTextureHandle"
    MOV EDI,dword ptr [0x0264bce0]      ; 0055f169 | DAT_0264bce0
    PUSH EDI                            ; 0055f16f
    MOV [0x0264bcb0],EAX                ; 0055f170 | DAT_0264bcb0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f175
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f17a
    PUSH 0x5eaf1f                       ; 0055f17d | = "APIDLLselectTextureByHandle"
    MOV EBP,dword ptr [0x0264bce0]      ; 0055f182 | DAT_0264bce0
    PUSH EBP                            ; 0055f188
    MOV [0x0264bcb4],EAX                ; 0055f189 | DAT_0264bcb4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f18e
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f193
    PUSH 0x5eaf3b                       ; 0055f196 | = "APIDLLresetTextureCache"
    MOV [0x0264bcb8],EAX                ; 0055f19b | DAT_0264bcb8
    MOV EAX,[0x0264bce0]                ; 0055f1a0 | DAT_0264bce0
    PUSH EAX                            ; 0055f1a5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f1a6
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f1ab
    PUSH 0x5eaf53                       ; 0055f1ae | = "APIDLLenableCulling"
    MOV EDX,dword ptr [0x0264bce0]      ; 0055f1b3 | DAT_0264bce0
    PUSH EDX                            ; 0055f1b9
    MOV [0x0264bcbc],EAX                ; 0055f1ba | DAT_0264bcbc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f1bf
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f1c4
    PUSH 0x5eaf67                       ; 0055f1c7 | = "APIDLLenableClipping"
    MOV ECX,dword ptr [0x0264bce0]      ; 0055f1cc | DAT_0264bce0
    PUSH ECX                            ; 0055f1d2
    MOV [0x0264bcc0],EAX                ; 0055f1d3 | DAT_0264bcc0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f1d8
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f1dd
    PUSH 0x5eaf7c                       ; 0055f1e0 | = "APIDLLsetTextureClamp"
    MOV ESI,dword ptr [0x0264bce0]      ; 0055f1e5 | DAT_0264bce0
    PUSH ESI                            ; 0055f1eb
    MOV [0x0264bcc4],EAX                ; 0055f1ec | DAT_0264bcc4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f1f1
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f1f6
    PUSH 0x5eaf92                       ; 0055f1f9 | = "APIDLLsetFog"
    MOV EDI,dword ptr [0x0264bce0]      ; 0055f1fe | DAT_0264bce0
    PUSH EDI                            ; 0055f204
    MOV [0x0264bcc8],EAX                ; 0055f205 | DAT_0264bcc8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f20a
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f20f
    PUSH 0x5eaf9f                       ; 0055f212 | = "APIDLLresetDynamicLight"
    MOV EBP,dword ptr [0x0264bce0]      ; 0055f217 | DAT_0264bce0
    PUSH EBP                            ; 0055f21d
    MOV [0x0264bccc],EAX                ; 0055f21e | DAT_0264bccc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f223
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f228
    PUSH 0x5eafb7                       ; 0055f22b | = "APIDLLaddDynamicLight"
    MOV [0x0264bcd0],EAX                ; 0055f230 | DAT_0264bcd0
    MOV EAX,[0x0264bce0]                ; 0055f235 | DAT_0264bce0
    PUSH EAX                            ; 0055f23a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f23b
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0055f240
    PUSH 0x5eafcd                       ; 0055f243 | = "APIDLLdynamicLightHint"
    MOV EDX,dword ptr [0x0264bce0]      ; 0055f248 | DAT_0264bce0
    PUSH EDX                            ; 0055f24e
    MOV [0x0264bcd4],EAX                ; 0055f24f | DAT_0264bcd4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00589980 ; 0055f254
        ;   XREF to: 00589980 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00589980(HMODULE hModule, LPCSTR lpProcName)
    MOV ECX,dword ptr [0x0264bcf8]      ; 0055f259 | DAT_0264bcf8
    ADD ESP,0x8                         ; 0055f25f
    MOV [0x0264bcd8],EAX                ; 0055f262 | DAT_0264bcd8
    TEST ECX,ECX                        ; 0055f267
    JZ 0x0055f2b9                       ; 0055f269
        ;   XREF to: 0055f2b9 (CONDITIONAL_JUMP)  ; LAB_0055f2b9
    XOR EDI,EDI                         ; 0055f26b
    CALL engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0 ; 0055f26d
        ;   XREF to: 0055dcf0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0()
    MOV dword ptr [0x0264bba0],EDI      ; 0055f272 | DAT_0264bba0
    XOR EAX,EAX                         ; 0055f278
    ADD ESP,0x3c20                      ; 0055f27a
    POP EBP                             ; 0055f280
    POP EDI                             ; 0055f281
    POP ESI                             ; 0055f282
    POP EBX                             ; 0055f283
    RET                                 ; 0055f284
    XOR EBP,EBP                         ; 0055f285
        ;   Label: LAB_0055f285
    CALL engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0 ; 0055f287
        ;   XREF to: 0055dcf0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0()
    MOV dword ptr [0x0264bba0],EBP      ; 0055f28c | DAT_0264bba0
    XOR EAX,EAX                         ; 0055f292
    ADD ESP,0x3c20                      ; 0055f294
    POP EBP                             ; 0055f29a
    POP EDI                             ; 0055f29b
    POP ESI                             ; 0055f29c
    POP EBX                             ; 0055f29d
    RET                                 ; 0055f29e
    XOR EBX,EBX                         ; 0055f29f
        ;   Label: LAB_0055f29f
    CALL engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0 ; 0055f2a1
        ;   XREF to: 0055dcf0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_shutdownExternalRenderer_FUN_0055dcf0()
    MOV dword ptr [0x0264bba0],EBX      ; 0055f2a6 | DAT_0264bba0
    XOR EAX,EAX                         ; 0055f2ac
    ADD ESP,0x3c20                      ; 0055f2ae
    POP EBP                             ; 0055f2b4
    POP EDI                             ; 0055f2b5
    POP ESI                             ; 0055f2b6
    POP EBX                             ; 0055f2b7
    RET                                 ; 0055f2b8
    PUSH 0x90                           ; 0055f2b9
        ;   Label: LAB_0055f2b9
    MOV ESI,0x1                         ; 0055f2be
    LEA EAX,[ESP + 0x3b94]              ; 0055f2c3
    PUSH ECX                            ; 0055f2ca
    MOV EDI,0x1c35814                   ; 0055f2cb
    MOV EBP,0x1c35818                   ; 0055f2d0
    PUSH EAX                            ; 0055f2d5
    MOV dword ptr [0x0264bcdc],ESI      ; 0055f2d6 | DAT_0264bcdc
    MOV ESI,0x1c35828                   ; 0055f2dc
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0055f2e1
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EAX,0x1c3581c                   ; 0055f2e6
    MOV EDX,0x1c35820                   ; 0055f2eb
    ADD ESP,0xc                         ; 0055f2f0
    MOV ECX,0x1c35824                   ; 0055f2f3
    MOV dword ptr [ESP + 0x3b90],EDI    ; 0055f2f8 | DAT_01c35814
    MOV dword ptr [ESP + 0x3b94],EBP    ; 0055f2ff | DAT_01c35818
    MOV dword ptr [ESP + 0x3b98],EAX    ; 0055f306 | DAT_01c3581c
    MOV dword ptr [ESP + 0x3b9c],EDX    ; 0055f30d | DAT_01c35820
    MOV dword ptr [ESP + 0x3ba0],ECX    ; 0055f314 | DAT_01c35824
    MOV dword ptr [ESP + 0x3ba4],ESI    ; 0055f31b | DAT_01c35828
    MOV EDI,0x1c3582c                   ; 0055f322
    MOV EBP,0x1c35830                   ; 0055f327
    MOV EAX,0x1c35834                   ; 0055f32c
    MOV EDX,0x1c38b4c                   ; 0055f331
    MOV ECX,0x1c35e64                   ; 0055f336
    MOV ESI,0x6141d8                    ; 0055f33b | DAT_006141d8
    MOV dword ptr [ESP + 0x3ba8],EDI    ; 0055f340 | DAT_01c3582c
    MOV dword ptr [ESP + 0x3bac],EBP    ; 0055f347 | DAT_01c35830
    MOV dword ptr [ESP + 0x3bb0],EAX    ; 0055f34e | DAT_01c35834
    MOV dword ptr [ESP + 0x3bb4],EDX    ; 0055f355 | DAT_01c38b4c
    MOV dword ptr [ESP + 0x3bb8],ECX    ; 0055f35c
    MOV dword ptr [ESP + 0x3bbc],ESI    ; 0055f363 | DAT_006141d8
    MOV EDI,0x1c35e60                   ; 0055f36a
    MOV EBP,0x1c35e48                   ; 0055f36f
    MOV EAX,0x1c35e4c                   ; 0055f374
    MOV EDX,0x1c35e50                   ; 0055f379
    MOV ECX,0x1c35e54                   ; 0055f37e
    MOV ESI,0x6141c4                    ; 0055f383 | DAT_006141c4
    MOV dword ptr [ESP + 0x3bc0],EDI    ; 0055f388 | DAT_01c35e60
    MOV dword ptr [ESP + 0x3bc4],EBP    ; 0055f38f | DAT_01c35e48
    MOV dword ptr [ESP + 0x3bc8],EAX    ; 0055f396 | DAT_01c35e4c
    MOV dword ptr [ESP + 0x3bcc],EDX    ; 0055f39d | DAT_01c35e50
    MOV dword ptr [ESP + 0x3bd0],ECX    ; 0055f3a4 | DAT_01c35e54
    MOV dword ptr [ESP + 0x3bd4],ESI    ; 0055f3ab | DAT_006141c4
    MOV EDI,0x6141c8                    ; 0055f3b2 | DAT_006141c8
    MOV EBP,0x1c37780                   ; 0055f3b7
    MOV EAX,0x61e28c                    ; 0055f3bc | DAT_0061e28c
    MOV EDX,0x61e284                    ; 0055f3c1 | DAT_0061e284
    MOV ECX,0x61e288                    ; 0055f3c6 | DAT_0061e288
    MOV ESI,0x264bba8                   ; 0055f3cb
    MOV dword ptr [ESP + 0x3bd8],EDI    ; 0055f3d0 | DAT_006141c8
    MOV dword ptr [ESP + 0x3bdc],EBP    ; 0055f3d7 | DAT_01c37780
    MOV dword ptr [ESP + 0x3be0],EAX    ; 0055f3de | DAT_0061e28c
    MOV dword ptr [ESP + 0x3be4],EDX    ; 0055f3e5 | DAT_0061e284
    MOV dword ptr [ESP + 0x3be8],ECX    ; 0055f3ec | DAT_0061e288
    MOV dword ptr [ESP + 0x3bec],ESI    ; 0055f3f3
    MOV EDI,0x61e280                    ; 0055f3fa | DAT_0061e280
    MOV EBP,0x264bbac                   ; 0055f3ff
    MOV EAX,0x1c38b50                   ; 0055f404
    MOV EDX,0x6141dc                    ; 0055f409 | DAT_006141dc
    MOV ECX,0x30                        ; 0055f40e
    MOV ESI,0x2c                        ; 0055f413
    MOV dword ptr [ESP + 0x3bf0],EDI    ; 0055f418 | DAT_0061e280
    MOV dword ptr [ESP + 0x3bf4],EBP    ; 0055f41f | DAT_0264bbac
    MOV dword ptr [ESP + 0x3bf8],EAX    ; 0055f426 | DAT_01c38b50
    MOV dword ptr [ESP + 0x3bfc],EDX    ; 0055f42d | DAT_006141dc
    MOV dword ptr [ESP + 0x3c00],ECX    ; 0055f434
    MOV dword ptr [ESP + 0x3c04],ESI    ; 0055f43b
    MOV EAX,0x24                        ; 0055f442
    MOV dword ptr [ESP + 0x3c18],ESI    ; 0055f447
    MOV dword ptr [ESP + 0x3c14],EAX    ; 0055f44e
    MOV EAX,[0x0061e290]                ; 0055f455 | DAT_0061e290
    MOV EDI,0xc                         ; 0055f45a
    MOV dword ptr [ESP + 0x3c1c],EAX    ; 0055f45f
    LEA EAX,[ESP + 0x3b90]              ; 0055f466
    MOV EBP,0x20                        ; 0055f46d
    PUSH EAX                            ; 0055f472
    MOV EDX,0x28                        ; 0055f473
    MOV dword ptr [ESP + 0x3c0c],EDI    ; 0055f478
    PUSH EBX                            ; 0055f47f
    MOV dword ptr [ESP + 0x3c14],EBP    ; 0055f480
    MOV dword ptr [ESP + 0x3c18],EDX    ; 0055f487
    CALL dword ptr [0x0264bbb8]         ; 0055f48e | DAT_0264bbb8
    ADD ESP,0x8                         ; 0055f494
    TEST EAX,EAX                        ; 0055f497
    JNZ 0x0055f4ab                      ; 0055f499
        ;   XREF to: 0055f4ab (CONDITIONAL_JUMP)  ; LAB_0055f4ab
    MOV [0x0264bba0],EAX                ; 0055f49b | DAT_0264bba0
    ADD ESP,0x3c20                      ; 0055f4a0
    POP EBP                             ; 0055f4a6
    POP EDI                             ; 0055f4a7
    POP ESI                             ; 0055f4a8
    POP EBX                             ; 0055f4a9
    RET                                 ; 0055f4aa
    MOV EBX,dword ptr [0x0264bba4]      ; 0055f4ab | DAT_0264bba4
        ;   Label: LAB_0055f4ab
    PUSH EBX                            ; 0055f4b1
    CALL engine_special.cpp_selectCard_FUN_005600c0 ; 0055f4b2
        ;   XREF to: 005600c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_005600c0(int card_index)
    MOV EAX,0x1                         ; 0055f4b7
    ADD ESP,0x4                         ; 0055f4bc
    ADD ESP,0x3c20                      ; 0055f4bf
    POP EBP                             ; 0055f4c5
    POP EDI                             ; 0055f4c6
    POP ESI                             ; 0055f4c7
    POP EBX                             ; 0055f4c8
    RET                                 ; 0055f4c9

