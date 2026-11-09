; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00564be0(HWND window_handle)
;
; Parameters:
; HWND             Stack[0x4]:4   window_handle
;
; XREF[4]:
;   core_menu.cpp_FUN_004e85a0 at 004e8d9c
;   engine_special.cpp_FUN_00565a90 at 00565aba
;   engine_special.cpp_FUN_0056678e at 005667ca
;   wincore_wddvmem.cpp_FUN_005798f0 at 00579a05
;
; Referenced Globals:
;   TerminatedCString s_APIDLLInformation_005d5569
;   TerminatedCString s_APIDLLinit_005d557b
;   TerminatedCString s_APIDLLkill_005d5586
;   TerminatedCString s_APIDLLtoggle_005d5591
;   TerminatedCString s_APIDLLsetVideoMode_005d559e
;   TerminatedCString s_APIDLLsetVideoMode2_005d55b1
;   TerminatedCString s_APIDLLrestoreVideoMode_005d55c5
;   TerminatedCString s_APIDLLbeginScene_005d55dc
;   TerminatedCString s_APIDLLendScene_005d55ed
;   TerminatedCString s_APIDLLlockFrame_005d55fc
;   TerminatedCString s_APIDLLunlockFrame_005d560c
;   TerminatedCString s_APIDLLselectTexture_005d561e
;   TerminatedCString s_APIDLLupdateTexture_005d5632
;   TerminatedCString s_APIDLLselectTextureBGRA_005d5646
;   TerminatedCString s_APIDLLupdateTextureBGRA_005d565e
;   ... and 166 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   engine_special.cpp_CExternalRenderer_ctor_FUN_005665e0
;   engine_special.cpp_CExternalRenderer_validate_FUN_00566630
;   engine_special.cpp_FUN_00564010
;   engine_special.cpp_FUN_005663e0
;   wincore_wddvmem.cpp_FUN_0057ad10
;   wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564be0
        ;   Label: engine_special.cpp_FUN_00564be0
    PUSH ESI                            ; 00564be1
    PUSH EDI                            ; 00564be2
    PUSH EBP                            ; 00564be3
    SUB ESP,0x3c20                      ; 00564be4
    MOV EBX,dword ptr [ESP + 0x3c34]    ; 00564bea
    TEST EBX,EBX                        ; 00564bf1
    JNZ 0x00564c11                      ; 00564bf3
        ;   XREF to: 00564c11 (CONDITIONAL_JUMP)  ; LAB_00564c11
    MOV EBX,dword ptr [0x02cf611c]      ; 00564bf5 | DAT_02cf611c
    CMP dword ptr [0x02cf5fcc],0x0      ; 00564bfb | DAT_02cf5fcc
        ;   Label: LAB_00564bfb
    JNZ 0x00564c19                      ; 00564c02
        ;   XREF to: 00564c19 (CONDITIONAL_JUMP)  ; LAB_00564c19
    XOR EAX,EAX                         ; 00564c04
    ADD ESP,0x3c20                      ; 00564c06
    POP EBP                             ; 00564c0c
    POP EDI                             ; 00564c0d
    POP ESI                             ; 00564c0e
    POP EBX                             ; 00564c0f
    RET                                 ; 00564c10
    MOV dword ptr [0x02cf611c],EBX      ; 00564c11 | DAT_02cf611c
        ;   Label: LAB_00564c11
    JMP 0x00564bfb                      ; 00564c17
        ;   XREF to: 00564bfb (UNCONDITIONAL_JUMP)  ; LAB_00564bfb
    PUSH 0x606730                       ; 00564c19 | DAT_00606730
        ;   Label: LAB_00564c19
    CALL wincore_wddvmem.cpp_FUN_0057ad10 ; 00564c1e
        ;   XREF to: 0057ad10 (UNCONDITIONAL_CALL)  ; HMODULE wincore_wddvmem.cpp_FUN_0057ad10(LPCSTR lpLibFileName)
    ADD ESP,0x4                         ; 00564c23
    MOV [0x02cf610c],EAX                ; 00564c26 | DAT_02cf610c
    TEST EAX,EAX                        ; 00564c2b
    JNZ 0x00564c41                      ; 00564c2d
        ;   XREF to: 00564c41 (CONDITIONAL_JUMP)  ; LAB_00564c41
    MOV [0x02cf5fcc],EAX                ; 00564c2f | DAT_02cf5fcc
    XOR EAX,EAX                         ; 00564c34
    ADD ESP,0x3c20                      ; 00564c36
    POP EBP                             ; 00564c3c
    POP EDI                             ; 00564c3d
    POP ESI                             ; 00564c3e
    POP EBX                             ; 00564c3f
    RET                                 ; 00564c40
    PUSH 0x5d5569                       ; 00564c41 | = "APIDLLInformation"
        ;   Label: LAB_00564c41
    PUSH EAX                            ; 00564c46
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564c47
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564c4c
    MOV EDX,EAX                         ; 00564c4f
    TEST EAX,EAX                        ; 00564c51
    JZ 0x005655a5                       ; 00564c53
        ;   XREF to: 005655a5 (CONDITIONAL_JUMP)  ; LAB_005655a5
    MOV EAX,ESP                         ; 00564c59
    PUSH EAX                            ; 00564c5b
    MOV ECX,dword ptr [0x02cf610c]      ; 00564c5c | DAT_02cf610c
    PUSH ECX                            ; 00564c62
    CALL EDX                            ; 00564c63
    ADD ESP,0x8                         ; 00564c65
    LEA EAX,[ESP + 0x1dc8]              ; 00564c68
    PUSH EAX                            ; 00564c6f
    CALL engine_special.cpp_CExternalRenderer_ctor_FUN_005665e0 ; 00564c70
        ;   XREF to: 005665e0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_CExternalRenderer_ctor_FUN_005665e0(CExternalRenderer * this_ptr)
    ADD ESP,0x4                         ; 00564c75
    LEA EAX,[ESP + 0x1dc8]              ; 00564c78
    PUSH EAX                            ; 00564c7f
    LEA EAX,[ESP + 0x4]                 ; 00564c80
    PUSH EAX                            ; 00564c84
    CALL engine_special.cpp_CExternalRenderer_validate_FUN_00566630 ; 00564c85
        ;   XREF to: 00566630 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_CExternalRenderer_validate_FUN_00566630(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
    ADD ESP,0x8                         ; 00564c8a
    TEST EAX,EAX                        ; 00564c8d
    JZ 0x005655bf                       ; 00564c8f
        ;   XREF to: 005655bf (CONDITIONAL_JUMP)  ; LAB_005655bf
    PUSH 0x5d557b                       ; 00564c95 | = "APIDLLinit"
    MOV EDI,dword ptr [0x02cf610c]      ; 00564c9a | DAT_02cf610c
    XOR ESI,ESI                         ; 00564ca0
    PUSH EDI                            ; 00564ca2
    MOV dword ptr [0x02cf6124],ESI      ; 00564ca3 | DAT_02cf6124
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564ca9
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564cae
    MOV [0x02cf5fe4],EAX                ; 00564cb1 | DAT_02cf5fe4
    TEST EAX,EAX                        ; 00564cb6
    JNZ 0x00564cc4                      ; 00564cb8
        ;   XREF to: 00564cc4 (CONDITIONAL_JUMP)  ; LAB_00564cc4
    MOV dword ptr [0x02cf6124],0x1      ; 00564cba | DAT_02cf6124
    PUSH 0x5d5586                       ; 00564cc4 | = "APIDLLkill"
        ;   Label: LAB_00564cc4
    MOV EAX,[0x02cf610c]                ; 00564cc9 | DAT_02cf610c
    PUSH EAX                            ; 00564cce
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564ccf
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564cd4
    MOV [0x02cf5fe8],EAX                ; 00564cd7 | DAT_02cf5fe8
    TEST EAX,EAX                        ; 00564cdc
    JNZ 0x00564cea                      ; 00564cde
        ;   XREF to: 00564cea (CONDITIONAL_JUMP)  ; LAB_00564cea
    MOV dword ptr [0x02cf6124],0x1      ; 00564ce0 | DAT_02cf6124
    PUSH 0x5d5591                       ; 00564cea | = "APIDLLtoggle"
        ;   Label: LAB_00564cea
    MOV ECX,dword ptr [0x02cf610c]      ; 00564cef | DAT_02cf610c
    PUSH ECX                            ; 00564cf5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564cf6
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564cfb
    MOV [0x02cf5fec],EAX                ; 00564cfe | DAT_02cf5fec
    TEST EAX,EAX                        ; 00564d03
    JNZ 0x00564d11                      ; 00564d05
        ;   XREF to: 00564d11 (CONDITIONAL_JUMP)  ; LAB_00564d11
    MOV dword ptr [0x02cf6124],0x1      ; 00564d07 | DAT_02cf6124
    PUSH 0x5d559e                       ; 00564d11 | = "APIDLLsetVideoMode"
        ;   Label: LAB_00564d11
    MOV EDI,dword ptr [0x02cf610c]      ; 00564d16 | DAT_02cf610c
    PUSH EDI                            ; 00564d1c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564d1d
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564d22
    MOV [0x02cf5ff0],EAX                ; 00564d25 | DAT_02cf5ff0
    TEST EAX,EAX                        ; 00564d2a
    JNZ 0x00564d38                      ; 00564d2c
        ;   XREF to: 00564d38 (CONDITIONAL_JUMP)  ; LAB_00564d38
    MOV dword ptr [0x02cf6124],0x1      ; 00564d2e | DAT_02cf6124
    PUSH 0x5d55b1                       ; 00564d38 | = "APIDLLsetVideoMode2"
        ;   Label: LAB_00564d38
    MOV EAX,[0x02cf610c]                ; 00564d3d | DAT_02cf610c
    PUSH EAX                            ; 00564d42
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564d43
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564d48
    MOV [0x02cf5ff4],EAX                ; 00564d4b | DAT_02cf5ff4
    TEST EAX,EAX                        ; 00564d50
    JNZ 0x00564d5e                      ; 00564d52
        ;   XREF to: 00564d5e (CONDITIONAL_JUMP)  ; LAB_00564d5e
    MOV dword ptr [0x02cf6124],0x1      ; 00564d54 | DAT_02cf6124
    PUSH 0x5d55c5                       ; 00564d5e | = "APIDLLrestoreVideoMode"
        ;   Label: LAB_00564d5e
    MOV ECX,dword ptr [0x02cf610c]      ; 00564d63 | DAT_02cf610c
    PUSH ECX                            ; 00564d69
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564d6a
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564d6f
    MOV [0x02cf5ff8],EAX                ; 00564d72 | DAT_02cf5ff8
    TEST EAX,EAX                        ; 00564d77
    JNZ 0x00564d85                      ; 00564d79
        ;   XREF to: 00564d85 (CONDITIONAL_JUMP)  ; LAB_00564d85
    MOV dword ptr [0x02cf6124],0x1      ; 00564d7b | DAT_02cf6124
    PUSH 0x5d55dc                       ; 00564d85 | = "APIDLLbeginScene"
        ;   Label: LAB_00564d85
    MOV EDI,dword ptr [0x02cf610c]      ; 00564d8a | DAT_02cf610c
    PUSH EDI                            ; 00564d90
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564d91
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564d96
    MOV [0x02cf5ffc],EAX                ; 00564d99 | DAT_02cf5ffc
    TEST EAX,EAX                        ; 00564d9e
    JNZ 0x00564dac                      ; 00564da0
        ;   XREF to: 00564dac (CONDITIONAL_JUMP)  ; LAB_00564dac
    MOV dword ptr [0x02cf6124],0x1      ; 00564da2 | DAT_02cf6124
    PUSH 0x5d55ed                       ; 00564dac | = "APIDLLendScene"
        ;   Label: LAB_00564dac
    MOV EAX,[0x02cf610c]                ; 00564db1 | DAT_02cf610c
    PUSH EAX                            ; 00564db6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564db7
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564dbc
    MOV [0x02cf6000],EAX                ; 00564dbf | DAT_02cf6000
    TEST EAX,EAX                        ; 00564dc4
    JNZ 0x00564dd2                      ; 00564dc6
        ;   XREF to: 00564dd2 (CONDITIONAL_JUMP)  ; LAB_00564dd2
    MOV dword ptr [0x02cf6124],0x1      ; 00564dc8 | DAT_02cf6124
    PUSH 0x5d55fc                       ; 00564dd2 | = "APIDLLlockFrame"
        ;   Label: LAB_00564dd2
    MOV ECX,dword ptr [0x02cf610c]      ; 00564dd7 | DAT_02cf610c
    PUSH ECX                            ; 00564ddd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564dde
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564de3
    MOV [0x02cf6004],EAX                ; 00564de6 | DAT_02cf6004
    TEST EAX,EAX                        ; 00564deb
    JNZ 0x00564df9                      ; 00564ded
        ;   XREF to: 00564df9 (CONDITIONAL_JUMP)  ; LAB_00564df9
    MOV dword ptr [0x02cf6124],0x1      ; 00564def | DAT_02cf6124
    PUSH 0x5d560c                       ; 00564df9 | = "APIDLLunlockFrame"
        ;   Label: LAB_00564df9
    MOV EDI,dword ptr [0x02cf610c]      ; 00564dfe | DAT_02cf610c
    PUSH EDI                            ; 00564e04
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564e05
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564e0a
    MOV [0x02cf6008],EAX                ; 00564e0d | DAT_02cf6008
    TEST EAX,EAX                        ; 00564e12
    JNZ 0x00564e20                      ; 00564e14
        ;   XREF to: 00564e20 (CONDITIONAL_JUMP)  ; LAB_00564e20
    MOV dword ptr [0x02cf6124],0x1      ; 00564e16 | DAT_02cf6124
    PUSH 0x5d561e                       ; 00564e20 | = "APIDLLselectTexture"
        ;   Label: LAB_00564e20
    MOV EAX,[0x02cf610c]                ; 00564e25 | DAT_02cf610c
    PUSH EAX                            ; 00564e2a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564e2b
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564e30
    MOV [0x02cf600c],EAX                ; 00564e33 | DAT_02cf600c
    TEST EAX,EAX                        ; 00564e38
    JNZ 0x00564e46                      ; 00564e3a
        ;   XREF to: 00564e46 (CONDITIONAL_JUMP)  ; LAB_00564e46
    MOV dword ptr [0x02cf6124],0x1      ; 00564e3c | DAT_02cf6124
    PUSH 0x5d5632                       ; 00564e46 | = "APIDLLupdateTexture"
        ;   Label: LAB_00564e46
    MOV ECX,dword ptr [0x02cf610c]      ; 00564e4b | DAT_02cf610c
    PUSH ECX                            ; 00564e51
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564e52
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564e57
    MOV [0x02cf6010],EAX                ; 00564e5a | DAT_02cf6010
    TEST EAX,EAX                        ; 00564e5f
    JNZ 0x00564e6d                      ; 00564e61
        ;   XREF to: 00564e6d (CONDITIONAL_JUMP)  ; LAB_00564e6d
    MOV dword ptr [0x02cf6124],0x1      ; 00564e63 | DAT_02cf6124
    PUSH 0x5d5646                       ; 00564e6d | = "APIDLLselectTextureBGRA"
        ;   Label: LAB_00564e6d
    MOV EDI,dword ptr [0x02cf610c]      ; 00564e72 | DAT_02cf610c
    PUSH EDI                            ; 00564e78
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564e79
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564e7e
    PUSH 0x5d565e                       ; 00564e81 | = "APIDLLupdateTextureBGRA"
    MOV EBP,dword ptr [0x02cf610c]      ; 00564e86 | DAT_02cf610c
    PUSH EBP                            ; 00564e8c
    MOV [0x02cf6014],EAX                ; 00564e8d | DAT_02cf6014
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564e92
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564e97
    PUSH 0x5d5676                       ; 00564e9a | = "APIDLLsetMipMapLevel"
    MOV [0x02cf6018],EAX                ; 00564e9f | DAT_02cf6018
    MOV EAX,[0x02cf610c]                ; 00564ea4 | DAT_02cf610c
    PUSH EAX                            ; 00564ea9
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564eaa
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564eaf
    MOV [0x02cf601c],EAX                ; 00564eb2 | DAT_02cf601c
    TEST EAX,EAX                        ; 00564eb7
    JNZ 0x00564ec5                      ; 00564eb9
        ;   XREF to: 00564ec5 (CONDITIONAL_JUMP)  ; LAB_00564ec5
    MOV dword ptr [0x02cf6124],0x1      ; 00564ebb | DAT_02cf6124
    PUSH 0x5d568b                       ; 00564ec5 | = "APIDLLdrawPolygon"
        ;   Label: LAB_00564ec5
    MOV ECX,dword ptr [0x02cf610c]      ; 00564eca | DAT_02cf610c
    PUSH ECX                            ; 00564ed0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564ed1
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564ed6
    MOV [0x02cf6020],EAX                ; 00564ed9 | DAT_02cf6020
    TEST EAX,EAX                        ; 00564ede
    JNZ 0x00564eec                      ; 00564ee0
        ;   XREF to: 00564eec (CONDITIONAL_JUMP)  ; LAB_00564eec
    MOV dword ptr [0x02cf6124],0x1      ; 00564ee2 | DAT_02cf6124
    PUSH 0x5d569d                       ; 00564eec | = "APIDLLdrawPolygon2"
        ;   Label: LAB_00564eec
    MOV EDI,dword ptr [0x02cf610c]      ; 00564ef1 | DAT_02cf610c
    PUSH EDI                            ; 00564ef7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564ef8
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564efd
    MOV [0x02cf6024],EAX                ; 00564f00 | DAT_02cf6024
    TEST EAX,EAX                        ; 00564f05
    JNZ 0x00564f13                      ; 00564f07
        ;   XREF to: 00564f13 (CONDITIONAL_JUMP)  ; LAB_00564f13
    MOV dword ptr [0x02cf6124],0x1      ; 00564f09 | DAT_02cf6124
    PUSH 0x5d56b0                       ; 00564f13 | = "APIDLLdrawPolyList"
        ;   Label: LAB_00564f13
    MOV EAX,[0x02cf610c]                ; 00564f18 | DAT_02cf610c
    PUSH EAX                            ; 00564f1d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564f1e
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564f23
    PUSH 0x5d56c3                       ; 00564f26 | = "APIDLLdrawPolyList2"
    MOV EDX,dword ptr [0x02cf610c]      ; 00564f2b | DAT_02cf610c
    PUSH EDX                            ; 00564f31
    MOV [0x02cf6028],EAX                ; 00564f32 | DAT_02cf6028
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564f37
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564f3c
    PUSH 0x5d56d7                       ; 00564f3f | = "APIDLLdrawPolyList3"
    MOV ECX,dword ptr [0x02cf610c]      ; 00564f44 | DAT_02cf610c
    PUSH ECX                            ; 00564f4a
    MOV [0x02cf602c],EAX                ; 00564f4b | DAT_02cf602c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564f50
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564f55
    PUSH 0x5d56eb                       ; 00564f58 | = "APIDLLaddParticle"
    MOV ESI,dword ptr [0x02cf610c]      ; 00564f5d | DAT_02cf610c
    PUSH ESI                            ; 00564f63
    MOV [0x02cf6030],EAX                ; 00564f64 | DAT_02cf6030
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564f69
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564f6e
    MOV [0x02cf6034],EAX                ; 00564f71 | DAT_02cf6034
    TEST EAX,EAX                        ; 00564f76
    JNZ 0x00564f84                      ; 00564f78
        ;   XREF to: 00564f84 (CONDITIONAL_JUMP)  ; LAB_00564f84
    MOV dword ptr [0x02cf6124],0x1      ; 00564f7a | DAT_02cf6124
    PUSH 0x5d56fd                       ; 00564f84 | = "APIDLLflushParticleList"
        ;   Label: LAB_00564f84
    MOV EBP,dword ptr [0x02cf610c]      ; 00564f89 | DAT_02cf610c
    PUSH EBP                            ; 00564f8f
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564f90
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564f95
    MOV [0x02cf6038],EAX                ; 00564f98 | DAT_02cf6038
    TEST EAX,EAX                        ; 00564f9d
    JNZ 0x00564fab                      ; 00564f9f
        ;   XREF to: 00564fab (CONDITIONAL_JUMP)  ; LAB_00564fab
    MOV dword ptr [0x02cf6124],0x1      ; 00564fa1 | DAT_02cf6124
    PUSH 0x5d5715                       ; 00564fab | = "APIDLLadd3dLine"
        ;   Label: LAB_00564fab
    MOV EDX,dword ptr [0x02cf610c]      ; 00564fb0 | DAT_02cf610c
    PUSH EDX                            ; 00564fb6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564fb7
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564fbc
    MOV [0x02cf603c],EAX                ; 00564fbf | DAT_02cf603c
    TEST EAX,EAX                        ; 00564fc4
    JNZ 0x00564fd2                      ; 00564fc6
        ;   XREF to: 00564fd2 (CONDITIONAL_JUMP)  ; LAB_00564fd2
    MOV dword ptr [0x02cf6124],0x1      ; 00564fc8 | DAT_02cf6124
    PUSH 0x5d5725                       ; 00564fd2 | = "APIDLLflushLineList"
        ;   Label: LAB_00564fd2
    MOV ESI,dword ptr [0x02cf610c]      ; 00564fd7 | DAT_02cf610c
    PUSH ESI                            ; 00564fdd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00564fde
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00564fe3
    MOV [0x02cf6040],EAX                ; 00564fe6 | DAT_02cf6040
    TEST EAX,EAX                        ; 00564feb
    JNZ 0x00564ff9                      ; 00564fed
        ;   XREF to: 00564ff9 (CONDITIONAL_JUMP)  ; LAB_00564ff9
    MOV dword ptr [0x02cf6124],0x1      ; 00564fef | DAT_02cf6124
    PUSH 0x5d5739                       ; 00564ff9 | = "APIDLLclear"
        ;   Label: LAB_00564ff9
    MOV EBP,dword ptr [0x02cf610c]      ; 00564ffe | DAT_02cf610c
    PUSH EBP                            ; 00565004
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565005
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056500a
    MOV [0x02cf6044],EAX                ; 0056500d | DAT_02cf6044
    TEST EAX,EAX                        ; 00565012
    JNZ 0x00565020                      ; 00565014
        ;   XREF to: 00565020 (CONDITIONAL_JUMP)  ; LAB_00565020
    MOV dword ptr [0x02cf6124],0x1      ; 00565016 | DAT_02cf6124
    PUSH 0x5d5745                       ; 00565020 | = "APIDLLsetFogColor"
        ;   Label: LAB_00565020
    MOV EDX,dword ptr [0x02cf610c]      ; 00565025 | DAT_02cf610c
    PUSH EDX                            ; 0056502b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056502c
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565031
    MOV [0x02cf6048],EAX                ; 00565034 | DAT_02cf6048
    TEST EAX,EAX                        ; 00565039
    JNZ 0x00565047                      ; 0056503b
        ;   XREF to: 00565047 (CONDITIONAL_JUMP)  ; LAB_00565047
    MOV dword ptr [0x02cf6124],0x1      ; 0056503d | DAT_02cf6124
    PUSH 0x5d5757                       ; 00565047 | = "APIDLLsync"
        ;   Label: LAB_00565047
    MOV ESI,dword ptr [0x02cf610c]      ; 0056504c | DAT_02cf610c
    PUSH ESI                            ; 00565052
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565053
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565058
    MOV [0x02cf604c],EAX                ; 0056505b | DAT_02cf604c
    TEST EAX,EAX                        ; 00565060
    JNZ 0x0056506e                      ; 00565062
        ;   XREF to: 0056506e (CONDITIONAL_JUMP)  ; LAB_0056506e
    MOV dword ptr [0x02cf6124],0x1      ; 00565064 | DAT_02cf6124
    PUSH 0x5d5762                       ; 0056506e | = "APIDLLclearZBuffer"
        ;   Label: LAB_0056506e
    MOV EBP,dword ptr [0x02cf610c]      ; 00565073 | DAT_02cf610c
    PUSH EBP                            ; 00565079
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056507a
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056507f
    MOV [0x02cf6050],EAX                ; 00565082 | DAT_02cf6050
    TEST EAX,EAX                        ; 00565087
    JNZ 0x00565095                      ; 00565089
        ;   XREF to: 00565095 (CONDITIONAL_JUMP)  ; LAB_00565095
    MOV dword ptr [0x02cf6124],0x1      ; 0056508b | DAT_02cf6124
    PUSH 0x5d5775                       ; 00565095 | = "APIDLLclearZBox"
        ;   Label: LAB_00565095
    MOV EDX,dword ptr [0x02cf610c]      ; 0056509a | DAT_02cf610c
    PUSH EDX                            ; 005650a0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005650a1
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005650a6
    MOV [0x02cf6054],EAX                ; 005650a9 | DAT_02cf6054
    TEST EAX,EAX                        ; 005650ae
    JNZ 0x005650bc                      ; 005650b0
        ;   XREF to: 005650bc (CONDITIONAL_JUMP)  ; LAB_005650bc
    MOV dword ptr [0x02cf6124],0x1      ; 005650b2 | DAT_02cf6124
    PUSH 0x5d5785                       ; 005650bc | = "APIDLLsetColorTable16"
        ;   Label: LAB_005650bc
    MOV ESI,dword ptr [0x02cf610c]      ; 005650c1 | DAT_02cf610c
    PUSH ESI                            ; 005650c7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005650c8
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005650cd
    MOV [0x02cf6058],EAX                ; 005650d0 | DAT_02cf6058
    TEST EAX,EAX                        ; 005650d5
    JNZ 0x005650e3                      ; 005650d7
        ;   XREF to: 005650e3 (CONDITIONAL_JUMP)  ; LAB_005650e3
    MOV dword ptr [0x02cf6124],0x1      ; 005650d9 | DAT_02cf6124
    PUSH 0x5d579b                       ; 005650e3 | = "APIDLLGetDisplayContext"
        ;   Label: LAB_005650e3
    MOV EBP,dword ptr [0x02cf610c]      ; 005650e8 | DAT_02cf610c
    PUSH EBP                            ; 005650ee
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005650ef
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005650f4
    MOV [0x02cf605c],EAX                ; 005650f7 | DAT_02cf605c
    TEST EAX,EAX                        ; 005650fc
    JNZ 0x0056510a                      ; 005650fe
        ;   XREF to: 0056510a (CONDITIONAL_JUMP)  ; LAB_0056510a
    MOV dword ptr [0x02cf6124],0x1      ; 00565100 | DAT_02cf6124
    PUSH 0x5d57b3                       ; 0056510a | = "APIDLLReleaseDisplayContext"
        ;   Label: LAB_0056510a
    MOV EDX,dword ptr [0x02cf610c]      ; 0056510f | DAT_02cf610c
    PUSH EDX                            ; 00565115
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565116
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056511b
    MOV [0x02cf6060],EAX                ; 0056511e | DAT_02cf6060
    TEST EAX,EAX                        ; 00565123
    JNZ 0x00565131                      ; 00565125
        ;   XREF to: 00565131 (CONDITIONAL_JUMP)  ; LAB_00565131
    MOV dword ptr [0x02cf6124],0x1      ; 00565127 | DAT_02cf6124
    PUSH 0x5d57cf                       ; 00565131 | = "APIDLLmasterZBuffer"
        ;   Label: LAB_00565131
    MOV ESI,dword ptr [0x02cf610c]      ; 00565136 | DAT_02cf610c
    PUSH ESI                            ; 0056513c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056513d
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565142
    MOV [0x02cf6064],EAX                ; 00565145 | DAT_02cf6064
    TEST EAX,EAX                        ; 0056514a
    JNZ 0x00565158                      ; 0056514c
        ;   XREF to: 00565158 (CONDITIONAL_JUMP)  ; LAB_00565158
    MOV dword ptr [0x02cf6124],0x1      ; 0056514e | DAT_02cf6124
    PUSH 0x5d57e3                       ; 00565158 | = "APIDLLrestoreZBuffer"
        ;   Label: LAB_00565158
    MOV EBP,dword ptr [0x02cf610c]      ; 0056515d | DAT_02cf610c
    PUSH EBP                            ; 00565163
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565164
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565169
    MOV [0x02cf6068],EAX                ; 0056516c | DAT_02cf6068
    TEST EAX,EAX                        ; 00565171
    JNZ 0x0056517f                      ; 00565173
        ;   XREF to: 0056517f (CONDITIONAL_JUMP)  ; LAB_0056517f
    MOV dword ptr [0x02cf6124],0x1      ; 00565175 | DAT_02cf6124
    PUSH 0x5d57f8                       ; 0056517f | = "APIDLLgetVideoMemory"
        ;   Label: LAB_0056517f
    MOV EDX,dword ptr [0x02cf610c]      ; 00565184 | DAT_02cf610c
    PUSH EDX                            ; 0056518a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056518b
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565190
    MOV [0x02cf606c],EAX                ; 00565193 | DAT_02cf606c
    TEST EAX,EAX                        ; 00565198
    JNZ 0x005651a6                      ; 0056519a
        ;   XREF to: 005651a6 (CONDITIONAL_JUMP)  ; LAB_005651a6
    MOV dword ptr [0x02cf6124],0x1      ; 0056519c | DAT_02cf6124
    PUSH 0x5d580d                       ; 005651a6 | = "APIDLLselectCard"
        ;   Label: LAB_005651a6
    MOV ESI,dword ptr [0x02cf610c]      ; 005651ab | DAT_02cf610c
    PUSH ESI                            ; 005651b1
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005651b2
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005651b7
    MOV [0x02cf6070],EAX                ; 005651ba | DAT_02cf6070
    TEST EAX,EAX                        ; 005651bf
    JNZ 0x005651cd                      ; 005651c1
        ;   XREF to: 005651cd (CONDITIONAL_JUMP)  ; LAB_005651cd
    MOV dword ptr [0x02cf6124],0x1      ; 005651c3 | DAT_02cf6124
    PUSH 0x5d581e                       ; 005651cd | = "APIDLLbuildCardList"
        ;   Label: LAB_005651cd
    MOV EBP,dword ptr [0x02cf610c]      ; 005651d2 | DAT_02cf610c
    PUSH EBP                            ; 005651d8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005651d9
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005651de
    MOV [0x02cf6074],EAX                ; 005651e1 | DAT_02cf6074
    TEST EAX,EAX                        ; 005651e6
    JNZ 0x005651f4                      ; 005651e8
        ;   XREF to: 005651f4 (CONDITIONAL_JUMP)  ; LAB_005651f4
    MOV dword ptr [0x02cf6124],0x1      ; 005651ea | DAT_02cf6124
    PUSH 0x5d5832                       ; 005651f4 | = "APIDLLlockHoldBuffer"
        ;   Label: LAB_005651f4
    MOV EDX,dword ptr [0x02cf610c]      ; 005651f9 | DAT_02cf610c
    PUSH EDX                            ; 005651ff
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565200
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565205
    PUSH 0x5d5847                       ; 00565208 | = "APIDLLunlockHoldBuffer"
    MOV ECX,dword ptr [0x02cf610c]      ; 0056520d | DAT_02cf610c
    PUSH ECX                            ; 00565213
    MOV [0x02cf6078],EAX                ; 00565214 | DAT_02cf6078
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565219
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056521e
    PUSH 0x5d585e                       ; 00565221 | = "APIDLLlockTexture"
    MOV ESI,dword ptr [0x02cf610c]      ; 00565226 | DAT_02cf610c
    PUSH ESI                            ; 0056522c
    MOV [0x02cf607c],EAX                ; 0056522d | DAT_02cf607c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565232
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565237
    PUSH 0x5d5870                       ; 0056523a | = "APIDLLunlockTexture"
    MOV EDI,dword ptr [0x02cf610c]      ; 0056523f | DAT_02cf610c
    PUSH EDI                            ; 00565245
    MOV [0x02cf6080],EAX                ; 00565246 | DAT_02cf6080
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056524b
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565250
    PUSH 0x5d5884                       ; 00565253 | = "APIDLLgetTextureInfo"
    MOV EBP,dword ptr [0x02cf610c]      ; 00565258 | DAT_02cf610c
    PUSH EBP                            ; 0056525e
    MOV [0x02cf6084],EAX                ; 0056525f | DAT_02cf6084
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565264
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565269
    MOV [0x02cf6088],EAX                ; 0056526c | DAT_02cf6088
    TEST EAX,EAX                        ; 00565271
    JNZ 0x0056527f                      ; 00565273
        ;   XREF to: 0056527f (CONDITIONAL_JUMP)  ; LAB_0056527f
    MOV dword ptr [0x02cf6124],0x1      ; 00565275 | DAT_02cf6124
    PUSH 0x5d5899                       ; 0056527f | = "APIDLLsetVideoModeX"
        ;   Label: LAB_0056527f
    MOV EDX,dword ptr [0x02cf610c]      ; 00565284 | DAT_02cf610c
    PUSH EDX                            ; 0056528a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056528b
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565290
    PUSH 0x5d58ad                       ; 00565293 | = "APIDLLrestoreVideoModeX"
    MOV ECX,dword ptr [0x02cf610c]      ; 00565298 | DAT_02cf610c
    PUSH ECX                            ; 0056529e
    MOV [0x02cf608c],EAX                ; 0056529f | DAT_02cf608c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005652a4
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005652a9
    PUSH 0x5d58c5                       ; 005652ac | = "APIDLLlockFrameX"
    MOV ESI,dword ptr [0x02cf610c]      ; 005652b1 | DAT_02cf610c
    PUSH ESI                            ; 005652b7
    MOV [0x02cf6090],EAX                ; 005652b8 | DAT_02cf6090
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005652bd
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005652c2
    PUSH 0x5d58d6                       ; 005652c5 | = "APIDLLunlockFrameX"
    MOV EDI,dword ptr [0x02cf610c]      ; 005652ca | DAT_02cf610c
    PUSH EDI                            ; 005652d0
    MOV [0x02cf6094],EAX                ; 005652d1 | DAT_02cf6094
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005652d6
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005652db
    PUSH 0x5d58e9                       ; 005652de | = "APIDLLtoggleX"
    MOV EBP,dword ptr [0x02cf610c]      ; 005652e3 | DAT_02cf610c
    PUSH EBP                            ; 005652e9
    MOV [0x02cf6098],EAX                ; 005652ea | DAT_02cf6098
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005652ef
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005652f4
    PUSH 0x5d58f7                       ; 005652f7 | = "APIDLLsetViewport"
    MOV [0x02cf609c],EAX                ; 005652fc | DAT_02cf609c
    MOV EAX,[0x02cf610c]                ; 00565301 | DAT_02cf610c
    PUSH EAX                            ; 00565306
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565307
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056530c
    PUSH 0x5d5909                       ; 0056530f | = "APIDLLsetLightConstants"
    MOV EDX,dword ptr [0x02cf610c]      ; 00565314 | DAT_02cf610c
    PUSH EDX                            ; 0056531a
    MOV [0x02cf60a0],EAX                ; 0056531b | DAT_02cf60a0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565320
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565325
    PUSH 0x5d5921                       ; 00565328 | = "APIDLLsetLightVector"
    MOV ECX,dword ptr [0x02cf610c]      ; 0056532d | DAT_02cf610c
    PUSH ECX                            ; 00565333
    MOV [0x02cf60a4],EAX                ; 00565334 | DAT_02cf60a4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565339
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056533e
    PUSH 0x5d5936                       ; 00565341 | = "APIDLLsetAmbientLight"
    MOV ESI,dword ptr [0x02cf610c]      ; 00565346 | DAT_02cf610c
    PUSH ESI                            ; 0056534c
    MOV [0x02cf60a8],EAX                ; 0056534d | DAT_02cf60a8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565352
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565357
    PUSH 0x5d594c                       ; 0056535a | = "APIDLLsetTransform"
    MOV EDI,dword ptr [0x02cf610c]      ; 0056535f | DAT_02cf610c
    PUSH EDI                            ; 00565365
    MOV [0x02cf60ac],EAX                ; 00565366 | DAT_02cf60ac
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056536b
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565370
    PUSH 0x5d595f                       ; 00565373 | = "APIDLLpolyList"
    MOV EBP,dword ptr [0x02cf610c]      ; 00565378 | DAT_02cf610c
    PUSH EBP                            ; 0056537e
    MOV [0x02cf60b0],EAX                ; 0056537f | DAT_02cf60b0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565384
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565389
    PUSH 0x5d596e                       ; 0056538c | = "APIDLLpolyList2"
    MOV [0x02cf60b4],EAX                ; 00565391 | DAT_02cf60b4
    MOV EAX,[0x02cf610c]                ; 00565396 | DAT_02cf610c
    PUSH EAX                            ; 0056539b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056539c
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005653a1
    PUSH 0x5d597e                       ; 005653a4 | = "APIDLLpolyListL"
    MOV EDX,dword ptr [0x02cf610c]      ; 005653a9 | DAT_02cf610c
    PUSH EDX                            ; 005653af
    MOV [0x02cf60b8],EAX                ; 005653b0 | DAT_02cf60b8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005653b5
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005653ba
    MOV [0x02cf60bc],EAX                ; 005653bd | DAT_02cf60bc
    PUSH 0x5d598e                       ; 005653c2 | = "APIDLLpolyListD3DL"
    MOV ECX,dword ptr [0x02cf610c]      ; 005653c7 | DAT_02cf610c
    PUSH ECX                            ; 005653cd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005653ce
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005653d3
    PUSH 0x5d59a1                       ; 005653d6 | = "APIDLLpolyListD3DL2"
    MOV ESI,dword ptr [0x02cf610c]      ; 005653db | DAT_02cf610c
    PUSH ESI                            ; 005653e1
    MOV [0x02cf60c0],EAX                ; 005653e2 | DAT_02cf60c0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005653e7
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005653ec
    PUSH 0x5d59b5                       ; 005653ef | = "APIDLLpolyListD3DTL"
    MOV EDI,dword ptr [0x02cf610c]      ; 005653f4 | DAT_02cf610c
    PUSH EDI                            ; 005653fa
    MOV [0x02cf60c4],EAX                ; 005653fb | DAT_02cf60c4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565400
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565405
    PUSH 0x5d59c9                       ; 00565408 | = "APIDLLpolyListTL"
    MOV EBP,dword ptr [0x02cf610c]      ; 0056540d | DAT_02cf610c
    PUSH EBP                            ; 00565413
    MOV [0x02cf60c8],EAX                ; 00565414 | DAT_02cf60c8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565419
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056541e
    PUSH 0x5d59da                       ; 00565421 | = "APIDLLdotListD3DL"
    MOV [0x02cf60cc],EAX                ; 00565426 | DAT_02cf60cc
    MOV EAX,[0x02cf610c]                ; 0056542b | DAT_02cf610c
    PUSH EAX                            ; 00565430
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565431
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565436
    PUSH 0x5d59ec                       ; 00565439 | = "APIDLLdotListD3DTL"
    MOV EDX,dword ptr [0x02cf610c]      ; 0056543e | DAT_02cf610c
    PUSH EDX                            ; 00565444
    MOV [0x02cf60d0],EAX                ; 00565445 | DAT_02cf60d0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056544a
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056544f
    PUSH 0x5d59ff                       ; 00565452 | = "APIDLLlineListD3DL"
    MOV ECX,dword ptr [0x02cf610c]      ; 00565457 | DAT_02cf610c
    PUSH ECX                            ; 0056545d
    MOV [0x02cf60d4],EAX                ; 0056545e | DAT_02cf60d4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565463
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565468
    PUSH 0x5d5a12                       ; 0056546b | = "APIDLLlineListD3DTL"
    MOV ESI,dword ptr [0x02cf610c]      ; 00565470 | DAT_02cf610c
    PUSH ESI                            ; 00565476
    MOV [0x02cf60d8],EAX                ; 00565477 | DAT_02cf60d8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056547c
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565481
    PUSH 0x5d5a26                       ; 00565484 | = "APIDLLgetTextureHandle"
    MOV EDI,dword ptr [0x02cf610c]      ; 00565489 | DAT_02cf610c
    PUSH EDI                            ; 0056548f
    MOV [0x02cf60dc],EAX                ; 00565490 | DAT_02cf60dc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565495
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056549a
    PUSH 0x5d5a3d                       ; 0056549d | = "APIDLLselectTextureByHandle"
    MOV EBP,dword ptr [0x02cf610c]      ; 005654a2 | DAT_02cf610c
    PUSH EBP                            ; 005654a8
    MOV [0x02cf60e0],EAX                ; 005654a9 | DAT_02cf60e0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005654ae
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005654b3
    PUSH 0x5d5a59                       ; 005654b6 | = "APIDLLresetTextureCache"
    MOV [0x02cf60e4],EAX                ; 005654bb | DAT_02cf60e4
    MOV EAX,[0x02cf610c]                ; 005654c0 | DAT_02cf610c
    PUSH EAX                            ; 005654c5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005654c6
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005654cb
    PUSH 0x5d5a71                       ; 005654ce | = "APIDLLenableCulling"
    MOV EDX,dword ptr [0x02cf610c]      ; 005654d3 | DAT_02cf610c
    PUSH EDX                            ; 005654d9
    MOV [0x02cf60e8],EAX                ; 005654da | DAT_02cf60e8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005654df
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005654e4
    PUSH 0x5d5a85                       ; 005654e7 | = "APIDLLenableClipping"
    MOV ECX,dword ptr [0x02cf610c]      ; 005654ec | DAT_02cf610c
    PUSH ECX                            ; 005654f2
    MOV [0x02cf60ec],EAX                ; 005654f3 | DAT_02cf60ec
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 005654f8
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005654fd
    PUSH 0x5d5a9a                       ; 00565500 | = "APIDLLsetTextureClamp"
    MOV ESI,dword ptr [0x02cf610c]      ; 00565505 | DAT_02cf610c
    PUSH ESI                            ; 0056550b
    MOV [0x02cf60f0],EAX                ; 0056550c | DAT_02cf60f0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565511
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565516
    PUSH 0x5d5ab0                       ; 00565519 | = "APIDLLsetFog"
    MOV EDI,dword ptr [0x02cf610c]      ; 0056551e | DAT_02cf610c
    PUSH EDI                            ; 00565524
    MOV [0x02cf60f4],EAX                ; 00565525 | DAT_02cf60f4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056552a
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0056552f
    PUSH 0x5d5abd                       ; 00565532 | = "APIDLLresetDynamicLight"
    MOV EBP,dword ptr [0x02cf610c]      ; 00565537 | DAT_02cf610c
    PUSH EBP                            ; 0056553d
    MOV [0x02cf60f8],EAX                ; 0056553e | DAT_02cf60f8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565543
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565548
    PUSH 0x5d5ad5                       ; 0056554b | = "APIDLLaddDynamicLight"
    MOV [0x02cf60fc],EAX                ; 00565550 | DAT_02cf60fc
    MOV EAX,[0x02cf610c]                ; 00565555 | DAT_02cf610c
    PUSH EAX                            ; 0056555a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 0056555b
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00565560
    PUSH 0x5d5aeb                       ; 00565563 | = "APIDLLdynamicLightHint"
    MOV EDX,dword ptr [0x02cf610c]      ; 00565568 | DAT_02cf610c
    PUSH EDX                            ; 0056556e
    MOV [0x02cf6100],EAX                ; 0056556f | DAT_02cf6100
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20 ; 00565574
        ;   XREF to: 0057ad20 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20(HMODULE hModule, LPCSTR lpProcName)
    MOV ECX,dword ptr [0x02cf6124]      ; 00565579 | DAT_02cf6124
    ADD ESP,0x8                         ; 0056557f
    MOV [0x02cf6104],EAX                ; 00565582 | DAT_02cf6104
    TEST ECX,ECX                        ; 00565587
    JZ 0x005655d9                       ; 00565589
        ;   XREF to: 005655d9 (CONDITIONAL_JUMP)  ; LAB_005655d9
    XOR EDI,EDI                         ; 0056558b
    CALL engine_special.cpp_FUN_00564010 ; 0056558d
        ;   XREF to: 00564010 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00564010()
    MOV dword ptr [0x02cf5fcc],EDI      ; 00565592 | DAT_02cf5fcc
    XOR EAX,EAX                         ; 00565598
    ADD ESP,0x3c20                      ; 0056559a
    POP EBP                             ; 005655a0
    POP EDI                             ; 005655a1
    POP ESI                             ; 005655a2
    POP EBX                             ; 005655a3
    RET                                 ; 005655a4
    XOR EBP,EBP                         ; 005655a5
        ;   Label: LAB_005655a5
    CALL engine_special.cpp_FUN_00564010 ; 005655a7
        ;   XREF to: 00564010 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00564010()
    MOV dword ptr [0x02cf5fcc],EBP      ; 005655ac | DAT_02cf5fcc
    XOR EAX,EAX                         ; 005655b2
    ADD ESP,0x3c20                      ; 005655b4
    POP EBP                             ; 005655ba
    POP EDI                             ; 005655bb
    POP ESI                             ; 005655bc
    POP EBX                             ; 005655bd
    RET                                 ; 005655be
    XOR EBX,EBX                         ; 005655bf
        ;   Label: LAB_005655bf
    CALL engine_special.cpp_FUN_00564010 ; 005655c1
        ;   XREF to: 00564010 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00564010()
    MOV dword ptr [0x02cf5fcc],EBX      ; 005655c6 | DAT_02cf5fcc
    XOR EAX,EAX                         ; 005655cc
    ADD ESP,0x3c20                      ; 005655ce
    POP EBP                             ; 005655d4
    POP EDI                             ; 005655d5
    POP ESI                             ; 005655d6
    POP EBX                             ; 005655d7
    RET                                 ; 005655d8
    PUSH 0x90                           ; 005655d9
        ;   Label: LAB_005655d9
    MOV ESI,0x1                         ; 005655de
    LEA EAX,[ESP + 0x3b94]              ; 005655e3
    PUSH ECX                            ; 005655ea
    MOV EDI,0x1c6af74                   ; 005655eb
    MOV EBP,0x1c6af78                   ; 005655f0
    PUSH EAX                            ; 005655f5
    MOV dword ptr [0x02cf6108],ESI      ; 005655f6 | DAT_02cf6108
    MOV ESI,0x1c6af88                   ; 005655fc
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00565601
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EAX,0x1c6af7c                   ; 00565606
    MOV EDX,0x1c6af80                   ; 0056560b
    ADD ESP,0xc                         ; 00565610
    MOV ECX,0x1c6af84                   ; 00565613
    MOV dword ptr [ESP + 0x3b90],EDI    ; 00565618 | DAT_01c6af74
    MOV dword ptr [ESP + 0x3b94],EBP    ; 0056561f | DAT_01c6af78
    MOV dword ptr [ESP + 0x3b98],EAX    ; 00565626 | DAT_01c6af7c
    MOV dword ptr [ESP + 0x3b9c],EDX    ; 0056562d | DAT_01c6af80
    MOV dword ptr [ESP + 0x3ba0],ECX    ; 00565634 | DAT_01c6af84
    MOV dword ptr [ESP + 0x3ba4],ESI    ; 0056563b | DAT_01c6af88
    MOV EDI,0x1c6af8c                   ; 00565642
    MOV EBP,0x1c6af90                   ; 00565647
    MOV EAX,0x1c6af94                   ; 0056564c
    MOV EDX,0x1c6e2ac                   ; 00565651
    MOV ECX,0x1c6b5c4                   ; 00565656
    MOV ESI,0x5fba38                    ; 0056565b | DAT_005fba38
    MOV dword ptr [ESP + 0x3ba8],EDI    ; 00565660 | DAT_01c6af8c
    MOV dword ptr [ESP + 0x3bac],EBP    ; 00565667 | DAT_01c6af90
    MOV dword ptr [ESP + 0x3bb0],EAX    ; 0056566e | DAT_01c6af94
    MOV dword ptr [ESP + 0x3bb4],EDX    ; 00565675 | DAT_01c6e2ac
    MOV dword ptr [ESP + 0x3bb8],ECX    ; 0056567c
    MOV dword ptr [ESP + 0x3bbc],ESI    ; 00565683 | DAT_005fba38
    MOV EDI,0x1c6b5c0                   ; 0056568a
    MOV EBP,0x1c6b5a8                   ; 0056568f
    MOV EAX,0x1c6b5ac                   ; 00565694
    MOV EDX,0x1c6b5b0                   ; 00565699
    MOV ECX,0x1c6b5b4                   ; 0056569e
    MOV ESI,0x5fba24                    ; 005656a3 | DAT_005fba24
    MOV dword ptr [ESP + 0x3bc0],EDI    ; 005656a8 | DAT_01c6b5c0
    MOV dword ptr [ESP + 0x3bc4],EBP    ; 005656af | DAT_01c6b5a8
    MOV dword ptr [ESP + 0x3bc8],EAX    ; 005656b6 | DAT_01c6b5ac
    MOV dword ptr [ESP + 0x3bcc],EDX    ; 005656bd | DAT_01c6b5b0
    MOV dword ptr [ESP + 0x3bd0],ECX    ; 005656c4 | DAT_01c6b5b4
    MOV dword ptr [ESP + 0x3bd4],ESI    ; 005656cb | DAT_005fba24
    MOV EDI,0x5fba28                    ; 005656d2 | DAT_005fba28
    MOV EBP,0x1c6cee0                   ; 005656d7
    MOV EAX,0x60683c                    ; 005656dc | DAT_0060683c
    MOV EDX,0x606834                    ; 005656e1 | DAT_00606834
    MOV ECX,0x606838                    ; 005656e6 | DAT_00606838
    MOV ESI,0x2cf5fd4                   ; 005656eb
    MOV dword ptr [ESP + 0x3bd8],EDI    ; 005656f0 | DAT_005fba28
    MOV dword ptr [ESP + 0x3bdc],EBP    ; 005656f7 | DAT_01c6cee0
    MOV dword ptr [ESP + 0x3be0],EAX    ; 005656fe | DAT_0060683c
    MOV dword ptr [ESP + 0x3be4],EDX    ; 00565705 | DAT_00606834
    MOV dword ptr [ESP + 0x3be8],ECX    ; 0056570c | DAT_00606838
    MOV dword ptr [ESP + 0x3bec],ESI    ; 00565713
    MOV EDI,0x606830                    ; 0056571a | DAT_00606830
    MOV EBP,0x2cf5fd8                   ; 0056571f
    MOV EAX,0x1c6e2b0                   ; 00565724
    MOV EDX,0x5fba3c                    ; 00565729 | DAT_005fba3c
    MOV ECX,0x30                        ; 0056572e
    MOV ESI,0x2c                        ; 00565733
    MOV dword ptr [ESP + 0x3bf0],EDI    ; 00565738 | DAT_00606830
    MOV dword ptr [ESP + 0x3bf4],EBP    ; 0056573f | DAT_02cf5fd8
    MOV dword ptr [ESP + 0x3bf8],EAX    ; 00565746 | DAT_01c6e2b0
    MOV dword ptr [ESP + 0x3bfc],EDX    ; 0056574d | DAT_005fba3c
    MOV dword ptr [ESP + 0x3c00],ECX    ; 00565754
    MOV dword ptr [ESP + 0x3c04],ESI    ; 0056575b
    MOV EAX,0x24                        ; 00565762
    MOV dword ptr [ESP + 0x3c18],ESI    ; 00565767
    MOV dword ptr [ESP + 0x3c14],EAX    ; 0056576e
    MOV EAX,[0x00606840]                ; 00565775 | DAT_00606840
    MOV EDI,0xc                         ; 0056577a
    MOV dword ptr [ESP + 0x3c1c],EAX    ; 0056577f
    LEA EAX,[ESP + 0x3b90]              ; 00565786
    MOV EBP,0x20                        ; 0056578d
    PUSH EAX                            ; 00565792
    MOV EDX,0x28                        ; 00565793
    MOV dword ptr [ESP + 0x3c0c],EDI    ; 00565798
    PUSH EBX                            ; 0056579f
    MOV dword ptr [ESP + 0x3c14],EBP    ; 005657a0
    MOV dword ptr [ESP + 0x3c18],EDX    ; 005657a7
    CALL dword ptr [0x02cf5fe4]         ; 005657ae | DAT_02cf5fe4
    ADD ESP,0x8                         ; 005657b4
    TEST EAX,EAX                        ; 005657b7
    JNZ 0x005657cb                      ; 005657b9
        ;   XREF to: 005657cb (CONDITIONAL_JUMP)  ; LAB_005657cb
    MOV [0x02cf5fcc],EAX                ; 005657bb | DAT_02cf5fcc
    ADD ESP,0x3c20                      ; 005657c0
    POP EBP                             ; 005657c6
    POP EDI                             ; 005657c7
    POP ESI                             ; 005657c8
    POP EBX                             ; 005657c9
    RET                                 ; 005657ca
    MOV EBX,dword ptr [0x02cf5fd0]      ; 005657cb | DAT_02cf5fd0
        ;   Label: LAB_005657cb
    PUSH EBX                            ; 005657d1
    CALL engine_special.cpp_FUN_005663e0 ; 005657d2
        ;   XREF to: 005663e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_005663e0(int card_index)
    MOV EAX,0x1                         ; 005657d7
    ADD ESP,0x4                         ; 005657dc
    ADD ESP,0x3c20                      ; 005657df
    POP EBP                             ; 005657e5
    POP EDI                             ; 005657e6
    POP ESI                             ; 005657e7
    POP EBX                             ; 005657e8
    RET                                 ; 005657e9

