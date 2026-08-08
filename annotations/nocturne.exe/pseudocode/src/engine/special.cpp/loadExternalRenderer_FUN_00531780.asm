; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)
;
; Parameters:
; HWND             Stack[0x4]:4   window_handle
; Local Variables:
; undefined        Stack[-0x1e64]:1  local_1e64
;
; XREF[4]:
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0234
;   engine_special.cpp_setResolutionAndColorTable_FUN_005324a0 at 005324ca
;   engine_special.cpp_switchRenderer_FUN_00532f50 at 00532f8a
;   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_00552b40 at 00552c55
;
; Referenced Globals:
;   TerminatedCString s_engine_special_c_00594d27
;   TerminatedCString s_Unable_to_find_function_00594d3b
;   TerminatedCString s_APIDLLInformation_00594d54
;   TerminatedCString s_APIDLLinit_00594d66
;   TerminatedCString s_APIDLLkill_00594d71
;   TerminatedCString s_APIDLLtoggle_00594d7c
;   TerminatedCString s_APIDLLsetVideoMode_00594d89
;   TerminatedCString s_APIDLLsetVideoMode2_00594d9c
;   TerminatedCString s_APIDLLrestoreVideoMode_00594db0
;   TerminatedCString s_APIDLLbeginScene_00594dc7
;   TerminatedCString s_APIDLLendScene_00594dd8
;   TerminatedCString s_APIDLLlockFrame_00594de7
;   TerminatedCString s_APIDLLunlockFrame_00594df7
;   TerminatedCString s_APIDLLselectTexture_00594e09
;   TerminatedCString s_APIDLLupdateTexture_00594e1d
;   ... and 95 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   engine_special.cpp_CExternalRenderer_ctor_FUN_00532da0
;   engine_special.cpp_CExternalRenderer_validate_FUN_00532df0
;   engine_special.cpp_selectCard_FUN_00532d00
;   engine_special.cpp_shutdownExternalRenderer_FUN_00530d40
;   wincore_wddvmem.cpp_FUN_00553d30
;   wincore_wddvmem.cpp_getProcAddress_FUN_00553d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531780
        ;   Label: engine_special.cpp_loadExternalRenderer_FUN_00531780
    PUSH ESI                            ; 00531781
    PUSH EDI                            ; 00531782
    PUSH EBP                            ; 00531783
    SUB ESP,0x3c1c                      ; 00531784
    MOV EBX,dword ptr [ESP + 0x3c30]    ; 0053178a
    TEST EBX,EBX                        ; 00531791
    JNZ 0x005317b1                      ; 00531793
        ;   XREF to: 005317b1 (CONDITIONAL_JUMP)  ; LAB_005317b1
    MOV EBX,dword ptr [0x02dc9e18]      ; 00531795 | g_StoredWindowHandle
    CMP dword ptr [0x02dc9d60],0x0      ; 0053179b | g_UseDirect3D
        ;   Label: LAB_0053179b
    JNZ 0x005317b9                      ; 005317a2
        ;   XREF to: 005317b9 (CONDITIONAL_JUMP)  ; LAB_005317b9
    XOR EAX,EAX                         ; 005317a4
    ADD ESP,0x3c1c                      ; 005317a6
    POP EBP                             ; 005317ac
    POP EDI                             ; 005317ad
    POP ESI                             ; 005317ae
    POP EBX                             ; 005317af
    RET                                 ; 005317b0
    MOV dword ptr [0x02dc9e18],EBX      ; 005317b1 | g_StoredWindowHandle
        ;   Label: LAB_005317b1
    JMP 0x0053179b                      ; 005317b7
        ;   XREF to: 0053179b (UNCONDITIONAL_JUMP)  ; LAB_0053179b
    PUSH 0x5c0e80                       ; 005317b9 | g_RendererDllPath
        ;   Label: LAB_005317b9
    CALL wincore_wddvmem.cpp_FUN_00553d30 ; 005317be
        ;   XREF to: 00553d30 (UNCONDITIONAL_CALL)  ; HMODULE wincore_wddvmem.cpp_FUN_00553d30(LPCSTR lpLibFileName)
    ADD ESP,0x4                         ; 005317c3
    MOV [0x02dc9e08],EAX                ; 005317c6 | g_RendererDLLHandle
    TEST EAX,EAX                        ; 005317cb
    JNZ 0x005317e1                      ; 005317cd
        ;   XREF to: 005317e1 (CONDITIONAL_JUMP)  ; LAB_005317e1
    MOV [0x02dc9d60],EAX                ; 005317cf | g_UseDirect3D
    XOR EAX,EAX                         ; 005317d4
    ADD ESP,0x3c1c                      ; 005317d6
    POP EBP                             ; 005317dc
    POP EDI                             ; 005317dd
    POP ESI                             ; 005317de
    POP EBX                             ; 005317df
    RET                                 ; 005317e0
    PUSH 0x594d54                       ; 005317e1 | = "APIDLLInformation"
        ;   Label: LAB_005317e1
    PUSH EAX                            ; 005317e6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005317e7
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005317ec
    MOV EDX,EAX                         ; 005317ef
    TEST EAX,EAX                        ; 005317f1
    JZ 0x0053226d                       ; 005317f3
        ;   XREF to: 0053226d (CONDITIONAL_JUMP)  ; LAB_0053226d
    LEA EAX,[ESP + 0x1dc8]              ; 005317f9
    PUSH EAX                            ; 00531800
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531801 | g_RendererDLLHandle
    PUSH ECX                            ; 00531807
    CALL EDX                            ; 00531808
    ADD ESP,0x8                         ; 0053180a
    MOV EAX,ESP                         ; 0053180d
    PUSH EAX                            ; 0053180f
    CALL engine_special.cpp_CExternalRenderer_ctor_FUN_00532da0 ; 00531810
        ;   XREF to: 00532da0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_CExternalRenderer_ctor_FUN_00532da0(CExternalRenderer * this_ptr)
    ADD ESP,0x4                         ; 00531815
    MOV EAX,ESP                         ; 00531818
    PUSH EAX                            ; 0053181a
    LEA EAX,[ESP + 0x1dcc]              ; 0053181b
    PUSH EAX                            ; 00531822
    CALL engine_special.cpp_CExternalRenderer_validate_FUN_00532df0 ; 00531823
        ;   XREF to: 00532df0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_CExternalRenderer_validate_FUN_00532df0(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
    ADD ESP,0x8                         ; 00531828
    TEST EAX,EAX                        ; 0053182b
    JZ 0x0053226d                       ; 0053182d
        ;   XREF to: 0053226d (CONDITIONAL_JUMP)  ; LAB_0053226d
    PUSH 0x594d66                       ; 00531833 | = "APIDLLinit"
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531838 | g_RendererDLLHandle
    PUSH ESI                            ; 0053183e
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053183f
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531844
    MOV [0x02dc9d74],EAX                ; 00531847 | g_APIDLL_init
    TEST EAX,EAX                        ; 0053184c
    JNZ 0x00531873                      ; 0053184e
        ;   XREF to: 00531873 (CONDITIONAL_JUMP)  ; LAB_00531873
    MOV EDI,0x594d27                    ; 00531850 | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 00531855
    PUSH 0x594d3b                       ; 0053185a | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 0053185f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 00531865 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0053186b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531870
    PUSH 0x594d71                       ; 00531873 | = "APIDLLkill"
        ;   Label: LAB_00531873
    MOV EAX,[0x02dc9e08]                ; 00531878 | g_RendererDLLHandle
    PUSH EAX                            ; 0053187d
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053187e
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531883
    MOV [0x02dc9d78],EAX                ; 00531886 | g_APIDLL_kill
    TEST EAX,EAX                        ; 0053188b
    JNZ 0x005318b2                      ; 0053188d
        ;   XREF to: 005318b2 (CONDITIONAL_JUMP)  ; LAB_005318b2
    MOV EDX,0x594d27                    ; 0053188f | = "..\\engine\\special.c"
    MOV ECX,0x86                        ; 00531894
    PUSH 0x594d3b                       ; 00531899 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 0053189e | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 005318a4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005318aa
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005318af
    PUSH 0x594d7c                       ; 005318b2 | = "APIDLLtoggle"
        ;   Label: LAB_005318b2
    MOV ESI,dword ptr [0x02dc9e08]      ; 005318b7 | g_RendererDLLHandle
    PUSH ESI                            ; 005318bd
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005318be
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005318c3
    MOV [0x02dc9d7c],EAX                ; 005318c6 | g_APIDLL_toggle
    TEST EAX,EAX                        ; 005318cb
    JNZ 0x005318f2                      ; 005318cd
        ;   XREF to: 005318f2 (CONDITIONAL_JUMP)  ; LAB_005318f2
    MOV EDI,0x594d27                    ; 005318cf | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 005318d4
    PUSH 0x594d3b                       ; 005318d9 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 005318de | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 005318e4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005318ea
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005318ef
    PUSH 0x594d89                       ; 005318f2 | = "APIDLLsetVideoMode"
        ;   Label: LAB_005318f2
    MOV EAX,[0x02dc9e08]                ; 005318f7 | g_RendererDLLHandle
    PUSH EAX                            ; 005318fc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005318fd
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531902
    MOV [0x02dc9d80],EAX                ; 00531905 | g_APIDLL_setVideoMode
    TEST EAX,EAX                        ; 0053190a
    JNZ 0x00531931                      ; 0053190c
        ;   XREF to: 00531931 (CONDITIONAL_JUMP)  ; LAB_00531931
    MOV EDX,0x594d27                    ; 0053190e | = "..\\engine\\special.c"
    MOV ECX,0x86                        ; 00531913
    PUSH 0x594d3b                       ; 00531918 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 0053191d | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00531923 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531929
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0053192e
    PUSH 0x594d9c                       ; 00531931 | = "APIDLLsetVideoMode2"
        ;   Label: LAB_00531931
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531936 | g_RendererDLLHandle
    PUSH ESI                            ; 0053193c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053193d
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531942
    MOV [0x02dc9d84],EAX                ; 00531945 | g_APIDLL_setVideoMode2
    TEST EAX,EAX                        ; 0053194a
    JNZ 0x00531971                      ; 0053194c
        ;   XREF to: 00531971 (CONDITIONAL_JUMP)  ; LAB_00531971
    MOV EDI,0x594d27                    ; 0053194e | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 00531953
    PUSH 0x594d3b                       ; 00531958 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 0053195d | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 00531963 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531969
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0053196e
    PUSH 0x594db0                       ; 00531971 | = "APIDLLrestoreVideoMode"
        ;   Label: LAB_00531971
    MOV EAX,[0x02dc9e08]                ; 00531976 | g_RendererDLLHandle
    PUSH EAX                            ; 0053197b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053197c
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531981
    MOV [0x02dc9d88],EAX                ; 00531984 | g_APIDLL_restoreVideoMode
    TEST EAX,EAX                        ; 00531989
    JNZ 0x005319b0                      ; 0053198b
        ;   XREF to: 005319b0 (CONDITIONAL_JUMP)  ; LAB_005319b0
    MOV EDX,0x594d27                    ; 0053198d | = "..\\engine\\special.c"
    MOV ECX,0x86                        ; 00531992
    PUSH 0x594d3b                       ; 00531997 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 0053199c | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 005319a2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005319a8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005319ad
    PUSH 0x594dc7                       ; 005319b0 | = "APIDLLbeginScene"
        ;   Label: LAB_005319b0
    MOV ESI,dword ptr [0x02dc9e08]      ; 005319b5 | g_RendererDLLHandle
    PUSH ESI                            ; 005319bb
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005319bc
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 005319c1
    MOV [0x02dc9d8c],EAX                ; 005319c4 | g_APIDLL_beginScene
    TEST EAX,EAX                        ; 005319c9
    JNZ 0x005319f0                      ; 005319cb
        ;   XREF to: 005319f0 (CONDITIONAL_JUMP)  ; LAB_005319f0
    MOV EDI,0x594d27                    ; 005319cd | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 005319d2
    PUSH 0x594d3b                       ; 005319d7 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 005319dc | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 005319e2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005319e8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005319ed
    PUSH 0x594dd8                       ; 005319f0 | = "APIDLLendScene"
        ;   Label: LAB_005319f0
    MOV EAX,[0x02dc9e08]                ; 005319f5 | g_RendererDLLHandle
    PUSH EAX                            ; 005319fa
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005319fb
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531a00
    MOV [0x02dc9d90],EAX                ; 00531a03 | g_APIDLL_endScene
    TEST EAX,EAX                        ; 00531a08
    JNZ 0x00531a2f                      ; 00531a0a
        ;   XREF to: 00531a2f (CONDITIONAL_JUMP)  ; LAB_00531a2f
    MOV EDX,0x594d27                    ; 00531a0c | = "..\\engine\\special.c"
    MOV ECX,0x86                        ; 00531a11
    PUSH 0x594d3b                       ; 00531a16 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 00531a1b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00531a21 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531a27
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531a2c
    PUSH 0x594de7                       ; 00531a2f | = "APIDLLlockFrame"
        ;   Label: LAB_00531a2f
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531a34 | g_RendererDLLHandle
    PUSH ESI                            ; 00531a3a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531a3b
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531a40
    MOV [0x02dc9d94],EAX                ; 00531a43 | g_APIDLL_lockFrame
    TEST EAX,EAX                        ; 00531a48
    JNZ 0x00531a6f                      ; 00531a4a
        ;   XREF to: 00531a6f (CONDITIONAL_JUMP)  ; LAB_00531a6f
    MOV EDI,0x594d27                    ; 00531a4c | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 00531a51
    PUSH 0x594d3b                       ; 00531a56 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 00531a5b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 00531a61 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531a67
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531a6c
    PUSH 0x594df7                       ; 00531a6f | = "APIDLLunlockFrame"
        ;   Label: LAB_00531a6f
    MOV EAX,[0x02dc9e08]                ; 00531a74 | g_RendererDLLHandle
    PUSH EAX                            ; 00531a79
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531a7a
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531a7f
    MOV [0x02dc9d98],EAX                ; 00531a82 | g_APIDLL_unlockFrame
    TEST EAX,EAX                        ; 00531a87
    JNZ 0x00531aae                      ; 00531a89
        ;   XREF to: 00531aae (CONDITIONAL_JUMP)  ; LAB_00531aae
    MOV EDX,0x594d27                    ; 00531a8b | = "..\\engine\\special.c"
    MOV ECX,0x86                        ; 00531a90
    PUSH 0x594d3b                       ; 00531a95 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 00531a9a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00531aa0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531aa6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531aab
    PUSH 0x594e09                       ; 00531aae | = "APIDLLselectTexture"
        ;   Label: LAB_00531aae
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531ab3 | g_RendererDLLHandle
    PUSH ESI                            ; 00531ab9
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531aba
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531abf
    MOV [0x02dc9d9c],EAX                ; 00531ac2 | g_APIDLL_selectTexture
    TEST EAX,EAX                        ; 00531ac7
    JNZ 0x00531aee                      ; 00531ac9
        ;   XREF to: 00531aee (CONDITIONAL_JUMP)  ; LAB_00531aee
    MOV EDI,0x594d27                    ; 00531acb | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 00531ad0
    PUSH 0x594d3b                       ; 00531ad5 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 00531ada | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 00531ae0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531ae6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531aeb
    PUSH 0x594e1d                       ; 00531aee | = "APIDLLupdateTexture"
        ;   Label: LAB_00531aee
    MOV EAX,[0x02dc9e08]                ; 00531af3 | g_RendererDLLHandle
    PUSH EAX                            ; 00531af8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531af9
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531afe
    MOV [0x02dc9da0],EAX                ; 00531b01 | g_APIDLL_updateTexture
    TEST EAX,EAX                        ; 00531b06
    JNZ 0x00531b2d                      ; 00531b08
        ;   XREF to: 00531b2d (CONDITIONAL_JUMP)  ; LAB_00531b2d
    MOV EDX,0x594d27                    ; 00531b0a | = "..\\engine\\special.c"
    MOV ECX,0x86                        ; 00531b0f
    PUSH 0x594d3b                       ; 00531b14 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 00531b19 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00531b1f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531b25
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531b2a
    PUSH 0x594e31                       ; 00531b2d | = "APIDLLsetMipMapLevel"
        ;   Label: LAB_00531b2d
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531b32 | g_RendererDLLHandle
    PUSH ESI                            ; 00531b38
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531b39
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531b3e
    MOV [0x02dc9da4],EAX                ; 00531b41 | g_APIDLL_setMipMapLevel
    TEST EAX,EAX                        ; 00531b46
    JNZ 0x00531b6d                      ; 00531b48
        ;   XREF to: 00531b6d (CONDITIONAL_JUMP)  ; LAB_00531b6d
    MOV EDI,0x594d27                    ; 00531b4a | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 00531b4f
    PUSH 0x594d3b                       ; 00531b54 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 00531b59 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 00531b5f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531b65
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531b6a
    PUSH 0x594e46                       ; 00531b6d | = "APIDLLdrawPolygon"
        ;   Label: LAB_00531b6d
    MOV EAX,[0x02dc9e08]                ; 00531b72 | g_RendererDLLHandle
    PUSH EAX                            ; 00531b77
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531b78
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531b7d
    MOV [0x02dc9da8],EAX                ; 00531b80 | g_APIDLL_drawPolygon
    TEST EAX,EAX                        ; 00531b85
    JNZ 0x00531bac                      ; 00531b87
        ;   XREF to: 00531bac (CONDITIONAL_JUMP)  ; LAB_00531bac
    MOV EDX,0x594d27                    ; 00531b89 | = "..\\engine\\special.c"
    MOV ECX,0x86                        ; 00531b8e
    PUSH 0x594d3b                       ; 00531b93 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 00531b98 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00531b9e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531ba4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531ba9
    PUSH 0x594e58                       ; 00531bac | = "APIDLLdrawPolygon2"
        ;   Label: LAB_00531bac
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531bb1 | g_RendererDLLHandle
    PUSH ESI                            ; 00531bb7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531bb8
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531bbd
    MOV [0x02dc9dac],EAX                ; 00531bc0 | g_APIDLL_drawPolygon2
    TEST EAX,EAX                        ; 00531bc5
    JNZ 0x00531bec                      ; 00531bc7
        ;   XREF to: 00531bec (CONDITIONAL_JUMP)  ; LAB_00531bec
    MOV EDI,0x594d27                    ; 00531bc9 | = "..\\engine\\special.c"
    MOV EBP,0x86                        ; 00531bce
    PUSH 0x594d3b                       ; 00531bd3 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDI      ; 00531bd8 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 00531bde | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531be4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531be9
    PUSH 0x594e6b                       ; 00531bec | = "APIDLLdrawPolyList"
        ;   Label: LAB_00531bec
    MOV EAX,[0x02dc9e08]                ; 00531bf1 | g_RendererDLLHandle
    PUSH EAX                            ; 00531bf6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531bf7
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531bfc
    PUSH 0x594e7e                       ; 00531bff | = "APIDLLdrawPolyList2"
    MOV EDX,dword ptr [0x02dc9e08]      ; 00531c04 | g_RendererDLLHandle
    PUSH EDX                            ; 00531c0a
    MOV [0x02dc9db0],EAX                ; 00531c0b | g_APIDLL_drawPolyList
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531c10
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531c15
    PUSH 0x594e92                       ; 00531c18 | = "APIDLLaddParticle"
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531c1d | g_RendererDLLHandle
    PUSH ECX                            ; 00531c23
    MOV [0x02dc9db4],EAX                ; 00531c24 | g_APIDLL_drawPolyList2
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531c29
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531c2e
    MOV [0x02dc9db8],EAX                ; 00531c31 | g_APIDLL_addParticle
    TEST EAX,EAX                        ; 00531c36
    JNZ 0x00531c5d                      ; 00531c38
        ;   XREF to: 00531c5d (CONDITIONAL_JUMP)  ; LAB_00531c5d
    MOV ESI,0x594d27                    ; 00531c3a | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531c3f
    PUSH 0x594d3b                       ; 00531c44 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531c49 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531c4f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531c55
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531c5a
    PUSH 0x594ea4                       ; 00531c5d | = "APIDLLflushParticleList"
        ;   Label: LAB_00531c5d
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531c62 | g_RendererDLLHandle
    PUSH EBP                            ; 00531c68
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531c69
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531c6e
    MOV [0x02dc9dbc],EAX                ; 00531c71 | g_APIDLL_flushParticleList
    TEST EAX,EAX                        ; 00531c76
    JNZ 0x00531c9c                      ; 00531c78
        ;   XREF to: 00531c9c (CONDITIONAL_JUMP)  ; LAB_00531c9c
    MOV EAX,0x594d27                    ; 00531c7a | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531c7f
    PUSH 0x594d3b                       ; 00531c84 | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00531c89 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00531c8e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531c94
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531c99
    PUSH 0x594ebc                       ; 00531c9c | = "APIDLLadd3dLine"
        ;   Label: LAB_00531c9c
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531ca1 | g_RendererDLLHandle
    PUSH ECX                            ; 00531ca7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531ca8
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531cad
    MOV [0x02dc9dc0],EAX                ; 00531cb0 | g_APIDLL_add3dLine
    TEST EAX,EAX                        ; 00531cb5
    JNZ 0x00531cdc                      ; 00531cb7
        ;   XREF to: 00531cdc (CONDITIONAL_JUMP)  ; LAB_00531cdc
    MOV ESI,0x594d27                    ; 00531cb9 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531cbe
    PUSH 0x594d3b                       ; 00531cc3 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531cc8 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531cce | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531cd4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531cd9
    PUSH 0x594ecc                       ; 00531cdc | = "APIDLLflushLineList"
        ;   Label: LAB_00531cdc
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531ce1 | g_RendererDLLHandle
    PUSH EBP                            ; 00531ce7
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531ce8
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531ced
    MOV [0x02dc9dc4],EAX                ; 00531cf0 | g_APIDLL_flushLineList
    TEST EAX,EAX                        ; 00531cf5
    JNZ 0x00531d1b                      ; 00531cf7
        ;   XREF to: 00531d1b (CONDITIONAL_JUMP)  ; LAB_00531d1b
    MOV EAX,0x594d27                    ; 00531cf9 | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531cfe
    PUSH 0x594d3b                       ; 00531d03 | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00531d08 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00531d0d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531d13
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531d18
    PUSH 0x594ee0                       ; 00531d1b | = "APIDLLclear"
        ;   Label: LAB_00531d1b
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531d20 | g_RendererDLLHandle
    PUSH ECX                            ; 00531d26
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531d27
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531d2c
    MOV [0x02dc9dc8],EAX                ; 00531d2f | g_APIDLL_clear
    TEST EAX,EAX                        ; 00531d34
    JNZ 0x00531d5b                      ; 00531d36
        ;   XREF to: 00531d5b (CONDITIONAL_JUMP)  ; LAB_00531d5b
    MOV ESI,0x594d27                    ; 00531d38 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531d3d
    PUSH 0x594d3b                       ; 00531d42 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531d47 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531d4d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531d53
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531d58
    PUSH 0x594eec                       ; 00531d5b | = "APIDLLsetFogColor"
        ;   Label: LAB_00531d5b
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531d60 | g_RendererDLLHandle
    PUSH EBP                            ; 00531d66
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531d67
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531d6c
    MOV [0x02dc9dcc],EAX                ; 00531d6f | g_APIDLL_setFogColor
    TEST EAX,EAX                        ; 00531d74
    JNZ 0x00531d9a                      ; 00531d76
        ;   XREF to: 00531d9a (CONDITIONAL_JUMP)  ; LAB_00531d9a
    MOV EAX,0x594d27                    ; 00531d78 | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531d7d
    PUSH 0x594d3b                       ; 00531d82 | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00531d87 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00531d8c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531d92
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531d97
    PUSH 0x594efe                       ; 00531d9a | = "APIDLLsync"
        ;   Label: LAB_00531d9a
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531d9f | g_RendererDLLHandle
    PUSH ECX                            ; 00531da5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531da6
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531dab
    MOV [0x02dc9dd0],EAX                ; 00531dae | g_APIDLL_sync
    TEST EAX,EAX                        ; 00531db3
    JNZ 0x00531dda                      ; 00531db5
        ;   XREF to: 00531dda (CONDITIONAL_JUMP)  ; LAB_00531dda
    MOV ESI,0x594d27                    ; 00531db7 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531dbc
    PUSH 0x594d3b                       ; 00531dc1 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531dc6 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531dcc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531dd2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531dd7
    PUSH 0x594f09                       ; 00531dda | = "APIDLLclearZBuffer"
        ;   Label: LAB_00531dda
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531ddf | g_RendererDLLHandle
    PUSH EBP                            ; 00531de5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531de6
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531deb
    MOV [0x02dc9dd4],EAX                ; 00531dee | g_APIDLL_clearZBuffer
    TEST EAX,EAX                        ; 00531df3
    JNZ 0x00531e19                      ; 00531df5
        ;   XREF to: 00531e19 (CONDITIONAL_JUMP)  ; LAB_00531e19
    MOV EAX,0x594d27                    ; 00531df7 | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531dfc
    PUSH 0x594d3b                       ; 00531e01 | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00531e06 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00531e0b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531e11
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531e16
    PUSH 0x594f1c                       ; 00531e19 | = "APIDLLclearZBox"
        ;   Label: LAB_00531e19
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531e1e | g_RendererDLLHandle
    PUSH ECX                            ; 00531e24
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531e25
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531e2a
    MOV [0x02dc9dd8],EAX                ; 00531e2d | g_APIDLL_clearZBox
    TEST EAX,EAX                        ; 00531e32
    JNZ 0x00531e59                      ; 00531e34
        ;   XREF to: 00531e59 (CONDITIONAL_JUMP)  ; LAB_00531e59
    MOV ESI,0x594d27                    ; 00531e36 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531e3b
    PUSH 0x594d3b                       ; 00531e40 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531e45 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531e4b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531e51
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531e56
    PUSH 0x594f2c                       ; 00531e59 | = "APIDLLsetColorTable16"
        ;   Label: LAB_00531e59
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531e5e | g_RendererDLLHandle
    PUSH EBP                            ; 00531e64
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531e65
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531e6a
    MOV [0x02dc9ddc],EAX                ; 00531e6d | g_APIDLL_setColorTable16
    TEST EAX,EAX                        ; 00531e72
    JNZ 0x00531e98                      ; 00531e74
        ;   XREF to: 00531e98 (CONDITIONAL_JUMP)  ; LAB_00531e98
    MOV EAX,0x594d27                    ; 00531e76 | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531e7b
    PUSH 0x594d3b                       ; 00531e80 | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00531e85 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00531e8a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531e90
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531e95
    PUSH 0x594f42                       ; 00531e98 | = "APIDLLGetDisplayContext"
        ;   Label: LAB_00531e98
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531e9d | g_RendererDLLHandle
    PUSH ECX                            ; 00531ea3
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531ea4
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531ea9
    MOV [0x02dc9de0],EAX                ; 00531eac | g_APIDLL_getDisplayContext
    TEST EAX,EAX                        ; 00531eb1
    JNZ 0x00531ed8                      ; 00531eb3
        ;   XREF to: 00531ed8 (CONDITIONAL_JUMP)  ; LAB_00531ed8
    MOV ESI,0x594d27                    ; 00531eb5 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531eba
    PUSH 0x594d3b                       ; 00531ebf | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531ec4 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531eca | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531ed0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531ed5
    PUSH 0x594f5a                       ; 00531ed8 | = "APIDLLReleaseDisplayContext"
        ;   Label: LAB_00531ed8
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531edd | g_RendererDLLHandle
    PUSH EBP                            ; 00531ee3
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531ee4
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531ee9
    MOV [0x02dc9de4],EAX                ; 00531eec | g_APIDLL_releaseDisplayContext
    TEST EAX,EAX                        ; 00531ef1
    JNZ 0x00531f17                      ; 00531ef3
        ;   XREF to: 00531f17 (CONDITIONAL_JUMP)  ; LAB_00531f17
    MOV EAX,0x594d27                    ; 00531ef5 | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531efa
    PUSH 0x594d3b                       ; 00531eff | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00531f04 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00531f09 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531f0f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531f14
    PUSH 0x594f76                       ; 00531f17 | = "APIDLLmasterZBuffer"
        ;   Label: LAB_00531f17
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531f1c | g_RendererDLLHandle
    PUSH ECX                            ; 00531f22
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531f23
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531f28
    MOV [0x02dc9de8],EAX                ; 00531f2b | g_APIDLL_masterZBuffer
    TEST EAX,EAX                        ; 00531f30
    JNZ 0x00531f57                      ; 00531f32
        ;   XREF to: 00531f57 (CONDITIONAL_JUMP)  ; LAB_00531f57
    MOV ESI,0x594d27                    ; 00531f34 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531f39
    PUSH 0x594d3b                       ; 00531f3e | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531f43 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531f49 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531f4f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531f54
    PUSH 0x594f8a                       ; 00531f57 | = "APIDLLrestoreZBuffer"
        ;   Label: LAB_00531f57
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531f5c | g_RendererDLLHandle
    PUSH EBP                            ; 00531f62
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531f63
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531f68
    MOV [0x02dc9dec],EAX                ; 00531f6b | g_APIDLL_restoreZBuffer
    TEST EAX,EAX                        ; 00531f70
    JNZ 0x00531f96                      ; 00531f72
        ;   XREF to: 00531f96 (CONDITIONAL_JUMP)  ; LAB_00531f96
    MOV EAX,0x594d27                    ; 00531f74 | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531f79
    PUSH 0x594d3b                       ; 00531f7e | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00531f83 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00531f88 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531f8e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531f93
    PUSH 0x594f9f                       ; 00531f96 | = "APIDLLgetVideoMemory"
        ;   Label: LAB_00531f96
    MOV ECX,dword ptr [0x02dc9e08]      ; 00531f9b | g_RendererDLLHandle
    PUSH ECX                            ; 00531fa1
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531fa2
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531fa7
    MOV [0x02dc9df0],EAX                ; 00531faa | g_APIDLL_getVideoMemory
    TEST EAX,EAX                        ; 00531faf
    JNZ 0x00531fd6                      ; 00531fb1
        ;   XREF to: 00531fd6 (CONDITIONAL_JUMP)  ; LAB_00531fd6
    MOV ESI,0x594d27                    ; 00531fb3 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00531fb8
    PUSH 0x594d3b                       ; 00531fbd | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00531fc2 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00531fc8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00531fce
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00531fd3
    PUSH 0x594fb4                       ; 00531fd6 | = "APIDLLselectCard"
        ;   Label: LAB_00531fd6
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531fdb | g_RendererDLLHandle
    PUSH EBP                            ; 00531fe1
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531fe2
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00531fe7
    MOV [0x02dc9df4],EAX                ; 00531fea | g_APIDLL_selectCard
    TEST EAX,EAX                        ; 00531fef
    JNZ 0x00532015                      ; 00531ff1
        ;   XREF to: 00532015 (CONDITIONAL_JUMP)  ; LAB_00532015
    MOV EAX,0x594d27                    ; 00531ff3 | = "..\\engine\\special.c"
    MOV EDX,0x86                        ; 00531ff8
    PUSH 0x594d3b                       ; 00531ffd | = "Unable to find function!"
    MOV [0x01cc4800],EAX                ; 00532002 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00532007 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0053200d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00532012
    PUSH 0x594fc5                       ; 00532015 | = "APIDLLbuildCardList"
        ;   Label: LAB_00532015
    MOV ECX,dword ptr [0x02dc9e08]      ; 0053201a | g_RendererDLLHandle
    PUSH ECX                            ; 00532020
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00532021
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00532026
    MOV [0x02dc9df8],EAX                ; 00532029 | g_APIDLL_buildCardList
    TEST EAX,EAX                        ; 0053202e
    JNZ 0x00532055                      ; 00532030
        ;   XREF to: 00532055 (CONDITIONAL_JUMP)  ; LAB_00532055
    MOV ESI,0x594d27                    ; 00532032 | = "..\\engine\\special.c"
    MOV EDI,0x86                        ; 00532037
    PUSH 0x594d3b                       ; 0053203c | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],ESI      ; 00532041 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00532047 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0053204d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00532052
    PUSH 0x594fd9                       ; 00532055 | = "APIDLLlockHoldBuffer"
        ;   Label: LAB_00532055
    MOV EBP,dword ptr [0x02dc9e08]      ; 0053205a | g_RendererDLLHandle
    PUSH EBP                            ; 00532060
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00532061
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 00532066
    PUSH 0x594fee                       ; 00532069 | = "APIDLLunlockHoldBuffer"
    MOV [0x02dc9dfc],EAX                ; 0053206e | g_APIDLL_lockHoldBuffer
    MOV EAX,[0x02dc9e08]                ; 00532073 | g_RendererDLLHandle
    PUSH EAX                            ; 00532078
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00532079
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; FARPROC wincore_wddvmem.cpp_getProcAddress_FUN_00553d40(HMODULE hModule, LPCSTR lpProcName)
    ADD ESP,0x8                         ; 0053207e
    MOV ESI,0x1c00628                   ; 00532081
    PUSH 0x8c                           ; 00532086
    MOV EDI,0x1c0062c                   ; 0053208b
    MOV [0x02dc9e00],EAX                ; 00532090 | g_APIDLL_unlockHoldBuffer
    PUSH 0x0                            ; 00532095
    LEA EAX,[ESP + 0x3b98]              ; 00532097
    MOV EDX,0x1                         ; 0053209e
    PUSH EAX                            ; 005320a3
    MOV EBP,0x1c00630                   ; 005320a4
    MOV dword ptr [0x02dc9e04],EDX      ; 005320a9 | g_LoadedExternalDLLRenderer
    CALL crt_memory.c_memset_FUN_00563cc0 ; 005320af
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV ECX,0x1c00624                   ; 005320b4
    MOV EAX,0x1c00634                   ; 005320b9
    ADD ESP,0xc                         ; 005320be
    MOV EDX,0x1c00638                   ; 005320c1
    MOV dword ptr [ESP + 0x3b90],ECX    ; 005320c6 | g_RedBitPosition
    MOV dword ptr [ESP + 0x3b94],ESI    ; 005320cd | g_RedScaleFactor
    MOV dword ptr [ESP + 0x3b98],EDI    ; 005320d4 | g_RedDitherShift
    MOV dword ptr [ESP + 0x3b9c],EBP    ; 005320db | g_GreenBitPosition
    MOV dword ptr [ESP + 0x3ba0],EAX    ; 005320e2 | g_GreenScaleFactor
    MOV dword ptr [ESP + 0x3ba4],EDX    ; 005320e9 | g_GreenDitherShift
    MOV ECX,0x1c0063c                   ; 005320f0
    MOV ESI,0x1c00640                   ; 005320f5
    MOV EDI,0x1c00644                   ; 005320fa
    MOV EBP,0x1c03998                   ; 005320ff
    MOV EAX,0x1c00c74                   ; 00532104
    MOV EDX,0x5b763c                    ; 00532109 | g_CurrentAlphaValue
    MOV dword ptr [ESP + 0x3ba8],ECX    ; 0053210e | g_BlueBitPosition
    MOV dword ptr [ESP + 0x3bac],ESI    ; 00532115 | g_BlueScaleFactor
    MOV dword ptr [ESP + 0x3bb0],EDI    ; 0053211c | g_BlueDitherShift
    MOV dword ptr [ESP + 0x3bb4],EBP    ; 00532123 | g_BlendMode
    MOV dword ptr [ESP + 0x3bb8],EAX    ; 0053212a | g_CurrentLightingValue
    MOV dword ptr [ESP + 0x3bbc],EDX    ; 00532131 | g_CurrentAlphaValue
    MOV ECX,0x1c00c70                   ; 00532138
    MOV ESI,0x1c00c58                   ; 0053213d
    MOV EDI,0x1c00c5c                   ; 00532142
    MOV EBP,0x1c00c60                   ; 00532147
    MOV EAX,0x1c00c64                   ; 0053214c
    MOV EDX,0x5b7628                    ; 00532151 | g_TextureFilteringEnabled
    MOV dword ptr [ESP + 0x3bc0],ECX    ; 00532156 | g_ActiveRenderColor
    MOV dword ptr [ESP + 0x3bc4],ESI    ; 0053215d | g_ClipLeft
    MOV dword ptr [ESP + 0x3bc8],EDI    ; 00532164 | g_ClipTop
    MOV dword ptr [ESP + 0x3bcc],EBP    ; 0053216b | g_ClipRight
    MOV dword ptr [ESP + 0x3bd0],EAX    ; 00532172 | g_ClipBottom
    MOV dword ptr [ESP + 0x3bd4],EDX    ; 00532179 | g_TextureFilteringEnabled
    MOV ECX,0x5b762c                    ; 00532180 | g_CurrentTextureDimension
    MOV ESI,0x1c02590                   ; 00532185
    MOV EDI,0x5c0f8c                    ; 0053218a | g_FullScreenQuadDepth
    MOV EBP,0x5c0f84                    ; 0053218f | g_VideoMemorySize
    MOV EAX,0x5c0f88                    ; 00532194 | g_MaxTextureSize
    MOV EDX,0x2dc9d68                   ; 00532199
    MOV dword ptr [ESP + 0x3bd8],ECX    ; 0053219e | g_CurrentTextureDimension
    MOV dword ptr [ESP + 0x3bdc],ESI    ; 005321a5 | g_TextureBits
    MOV dword ptr [ESP + 0x3be0],EDI    ; 005321ac | g_FullScreenQuadDepth
    MOV dword ptr [ESP + 0x3be4],EBP    ; 005321b3 | g_VideoMemorySize
    MOV dword ptr [ESP + 0x3be8],EAX    ; 005321ba | g_MaxTextureSize
    MOV dword ptr [ESP + 0x3bec],EDX    ; 005321c1
    MOV ECX,0x5c0f80                    ; 005321c8 | g_SystemInitialized
    MOV ESI,0x2dc9d6c                   ; 005321cd
    MOV EDI,0x1c0399c                   ; 005321d2
    MOV EBP,0x5b7640                    ; 005321d7 | g_RenderingQuality
    MOV EAX,0x30                        ; 005321dc
    MOV EDX,0x2c                        ; 005321e1
    MOV dword ptr [ESP + 0x3bf0],ECX    ; 005321e6 | g_SystemInitialized
    MOV dword ptr [ESP + 0x3bf4],ESI    ; 005321ed | g_AGPTextureMode
    MOV dword ptr [ESP + 0x3bf8],EDI    ; 005321f4 | g_ProcessorType
    MOV dword ptr [ESP + 0x3bfc],EBP    ; 005321fb | g_RenderingQuality
    MOV dword ptr [ESP + 0x3c00],EAX    ; 00532202
    MOV dword ptr [ESP + 0x3c04],EDX    ; 00532209
    MOV dword ptr [ESP + 0x3c18],EDX    ; 00532210
    MOV ECX,0xc                         ; 00532217
    MOV ESI,0x20                        ; 0053221c
    MOV EDI,0x24                        ; 00532221
    LEA EAX,[ESP + 0x3b90]              ; 00532226
    MOV EBP,0x28                        ; 0053222d
    PUSH EAX                            ; 00532232
    MOV dword ptr [ESP + 0x3c0c],ECX    ; 00532233
    MOV dword ptr [ESP + 0x3c10],ESI    ; 0053223a
    PUSH EBX                            ; 00532241
    MOV dword ptr [ESP + 0x3c1c],EDI    ; 00532242
    MOV dword ptr [ESP + 0x3c18],EBP    ; 00532249
    CALL dword ptr [0x02dc9d74]         ; 00532250 | g_APIDLL_init
    ADD ESP,0x8                         ; 00532256
    TEST EAX,EAX                        ; 00532259
    JNZ 0x00532287                      ; 0053225b
        ;   XREF to: 00532287 (CONDITIONAL_JUMP)  ; LAB_00532287
    MOV [0x02dc9d60],EAX                ; 0053225d | g_UseDirect3D
    ADD ESP,0x3c1c                      ; 00532262
    POP EBP                             ; 00532268
    POP EDI                             ; 00532269
    POP ESI                             ; 0053226a
    POP EBX                             ; 0053226b
    RET                                 ; 0053226c
    XOR EBX,EBX                         ; 0053226d
        ;   Label: LAB_0053226d
    CALL engine_special.cpp_shutdownExternalRenderer_FUN_00530d40 ; 0053226f
        ;   XREF to: 00530d40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_shutdownExternalRenderer_FUN_00530d40()
    MOV dword ptr [0x02dc9d60],EBX      ; 00532274 | g_UseDirect3D
    XOR EAX,EAX                         ; 0053227a
    ADD ESP,0x3c1c                      ; 0053227c
    POP EBP                             ; 00532282
    POP EDI                             ; 00532283
    POP ESI                             ; 00532284
    POP EBX                             ; 00532285
    RET                                 ; 00532286
    MOV EDX,dword ptr [0x02dc9d64]      ; 00532287 | g_RendererCardIndex
        ;   Label: LAB_00532287
    PUSH EDX                            ; 0053228d
    CALL engine_special.cpp_selectCard_FUN_00532d00 ; 0053228e
        ;   XREF to: 00532d00 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_00532d00(int card_index)
    MOV EAX,0x1                         ; 00532293
    ADD ESP,0x4                         ; 00532298
    ADD ESP,0x3c1c                      ; 0053229b
    POP EBP                             ; 005322a1
    POP EDI                             ; 005322a2
    POP ESI                             ; 005322a3
    POP EBX                             ; 005322a4
    RET                                 ; 005322a5

