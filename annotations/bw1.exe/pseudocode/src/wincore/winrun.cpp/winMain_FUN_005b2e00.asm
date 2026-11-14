; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __stdcall wincore_winrun_cpp_winMain_FUN_005b2e00(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
;
; Parameters:
; HINSTANCE        Stack[0x4]:4   hInstance
; HINSTANCE        Stack[0x8]:4   hPrevInstance
; LPSTR            Stack[0xc]:4   lpCmdLine
; int              Stack[0x10]:4   nCmdShow
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005ca370 at 005ca40d
;
; Referenced Globals:
;   undefined4 DAT_00000065
;   undefined4 DAT_00007f00
;   void* PTR_GetStockObject_005d0418 = 001d083e
;   void* PTR_timeGetTime_005d0458 = 001d0934
;   void* PTR_BringWindowToTop_005d049c = 001d0a54
;   void* PTR_FindWindowA_005d04b8 = 001d0ad4
;   void* PTR_GetLastActivePopup_005d04c8 = 001d0b18
;   void* PTR_IsIconic_005d04d0 = 001d0b40
;   void* PTR_LoadCursorA_005d04d4 = 001d0b4c
;   void* PTR_LoadIconA_005d04d8 = 001d0b5a
;   void* PTR_RegisterClassA_005d04f0 = 001d0bb4
;   void* PTR_SetForegroundWindow_005d0504 = 001d0c02
;   void* PTR_ShowWindow_005d050c = 001d0c28
;   void* PTR_UpdateWindow_005d0514 = 001d0c4a
;   void* PTR_ExitProcess_005d0544 = 001d0d10
;   ... and 22 more
;
; Called Functions:
;   BringWindowToTop
;   core_main.c_enterMainGameMenu_FUN_00503290
;   core_main.c_FUN_00503a30
;   core_main.c_initializeGameSystems_FUN_005032a0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_stdlib.c_srand_FUN_005c0870
;   ExitProcess
;   FindWindowA
;   GetCommandLineA
;   GetCurrentDirectoryA
;   GetCurrentProcess
;   GetLastActivePopup
;   GetModuleFileNameA
;   GetStockObject
;   GlobalMemoryStatus
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2e00
        ;   Label: wincore_winrun.cpp_winMain_FUN_005b2e00
    PUSH ESI                            ; 005b2e01
    PUSH EDI                            ; 005b2e02
    PUSH EBP                            ; 005b2e03
    SUB ESP,0x48                        ; 005b2e04
    MOV EBP,dword ptr [ESP + 0x5c]      ; 005b2e07
    PUSH 0x0                            ; 005b2e0b
    MOV EDX,dword ptr [0x006260dc]      ; 005b2e0d | PTR_s_Nocturne_006260dc
    PUSH EDX                            ; 005b2e13 | = "Nocturne"
    CALL dword ptr CS:[0x5d04b8]        ; 005b2e14 | PTR_FindWindowA_005d04b8
    MOV EDI,EAX                         ; 005b2e1b
    TEST EAX,EAX                        ; 005b2e1d
    JNZ 0x005b2e95                      ; 005b2e1f
        ;   XREF to: 005b2e95 (CONDITIONAL_JUMP)  ; LAB_005b2e95
    MOV EBX,ESP                         ; 005b2e21
    MOV EAX,ESP                         ; 005b2e23
    SUB EAX,0x40000                     ; 005b2e25
    MOV EAX,dword ptr [EBX]             ; 005b2e2a
        ;   Label: LAB_005b2e2a
    SUB EBX,0x80                        ; 005b2e2c
    CMP EBX,EAX                         ; 005b2e32
    JG 0x005b2e2a                       ; 005b2e34
        ;   XREF to: 005b2e2a (CONDITIONAL_JUMP)  ; LAB_005b2e2a
    CALL dword ptr CS:[0x5d0458]        ; 005b2e36 | PTR_timeGetTime_005d0458
    PUSH EAX                            ; 005b2e3d
    CALL crt_stdlib.c_srand_FUN_005c0870 ; 005b2e3e
        ;   XREF to: 005c0870 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005c0870(uint seed)
    ADD ESP,0x4                         ; 005b2e43
    MOV EDI,0x2c9ca08                   ; 005b2e46
    CALL dword ptr CS:[0x5d0574]        ; 005b2e4b | PTR_GetCommandLineA_005d0574
    MOV ESI,EAX                         ; 005b2e52
    PUSH EDI                            ; 005b2e54 | DAT_02c9ca08
    MOV AL,byte ptr [ESI]               ; 005b2e55
        ;   Label: LAB_005b2e55
    MOV byte ptr [EDI],AL               ; 005b2e57 | DAT_02c9ca08 | DAT_02c9ca0a
    CMP AL,0x0                          ; 005b2e59
    JZ 0x005b2e6d                       ; 005b2e5b
        ;   XREF to: 005b2e6d (CONDITIONAL_JUMP)  ; LAB_005b2e6d
    MOV AL,byte ptr [ESI + 0x1]         ; 005b2e5d
    ADD ESI,0x2                         ; 005b2e60
    MOV byte ptr [EDI + 0x1],AL         ; 005b2e63 | DAT_02c9ca09 | DAT_02c9ca0b
    ADD EDI,0x2                         ; 005b2e66
    CMP AL,0x0                          ; 005b2e69
    JNZ 0x005b2e55                      ; 005b2e6b
        ;   XREF to: 005b2e55 (CONDITIONAL_JUMP)  ; LAB_005b2e55
    POP EDI                             ; 005b2e6d
        ;   Label: LAB_005b2e6d
    MOV DL,byte ptr [0x02c9ca08]        ; 005b2e6e | DAT_02c9ca08
    MOV EAX,EDI                         ; 005b2e74
    TEST DL,DL                          ; 005b2e76
    JZ 0x005b2f0e                       ; 005b2e78
        ;   XREF to: 005b2f0e (CONDITIONAL_JUMP)  ; LAB_005b2f0e
    MOV ECX,dword ptr [0x02c9cb08]      ; 005b2e7e | DAT_02c9cb08
    SHL ECX,0x2                         ; 005b2e84
    MOV BL,byte ptr [EAX]               ; 005b2e87 | DAT_02c9ca08 | DAT_02c9ca09 | DAT_02c9ca0b
        ;   Label: LAB_005b2e87
    LEA EDX,[EAX + 0x1]                 ; 005b2e89
    CMP BL,0x20                         ; 005b2e8c
    JBE 0x005b2ed7                      ; 005b2e8f
        ;   XREF to: 005b2ed7 (CONDITIONAL_JUMP)  ; LAB_005b2ed7
    MOV EAX,EDX                         ; 005b2e91
    JMP 0x005b2e87                      ; 005b2e93
        ;   XREF to: 005b2e87 (UNCONDITIONAL_JUMP)  ; LAB_005b2e87
    PUSH EAX                            ; 005b2e95
        ;   Label: LAB_005b2e95
    CALL dword ptr CS:[0x5d04c8]        ; 005b2e96 | PTR_GetLastActivePopup_005d04c8
    TEST EAX,EAX                        ; 005b2e9d
    JZ 0x005b2ea3                       ; 005b2e9f
        ;   XREF to: 005b2ea3 (CONDITIONAL_JUMP)  ; LAB_005b2ea3
    MOV EDI,EAX                         ; 005b2ea1
    PUSH EDI                            ; 005b2ea3
        ;   Label: LAB_005b2ea3
    CALL dword ptr CS:[0x5d049c]        ; 005b2ea4 | PTR_BringWindowToTop_005d049c
    PUSH EDI                            ; 005b2eab
    CALL dword ptr CS:[0x5d04d0]        ; 005b2eac | PTR_IsIconic_005d04d0
    TEST EAX,EAX                        ; 005b2eb3
    JZ 0x005b2ec1                       ; 005b2eb5
        ;   XREF to: 005b2ec1 (CONDITIONAL_JUMP)  ; LAB_005b2ec1
    PUSH 0x9                            ; 005b2eb7
    PUSH EDI                            ; 005b2eb9
    CALL dword ptr CS:[0x5d050c]        ; 005b2eba | PTR_ShowWindow_005d050c
    PUSH EDI                            ; 005b2ec1
        ;   Label: LAB_005b2ec1
    CALL dword ptr CS:[0x5d0504]        ; 005b2ec2 | PTR_SetForegroundWindow_005d0504
    PUSH 0x1                            ; 005b2ec9
    CALL dword ptr CS:[0x5d0544]        ; 005b2ecb | PTR_ExitProcess_005d0544
    MOV EBX,dword ptr [0x02c9cb08]      ; 005b2ed7 | DAT_02c9cb08
        ;   Label: LAB_005b2ed7
    ADD ECX,0x4                         ; 005b2edd
    MOV byte ptr [EAX],0x0              ; 005b2ee0 | DAT_02c9ca09
    INC EBX                             ; 005b2ee3
    MOV dword ptr [ECX + 0x2c9cb08],EDI ; 005b2ee4 | DAT_02c9ca08
    MOV dword ptr [0x02c9cb08],EBX      ; 005b2eea | DAT_02c9cb08
    MOV BH,byte ptr [EDX]               ; 005b2ef0 | DAT_02c9ca0a
    MOV EAX,EDX                         ; 005b2ef2
    CMP BH,0x20                         ; 005b2ef4
    JNZ 0x005b2f02                      ; 005b2ef7
        ;   XREF to: 005b2f02 (CONDITIONAL_JUMP)  ; LAB_005b2f02
    MOV DL,byte ptr [EAX + 0x1]         ; 005b2ef9 | DAT_02c9ca0b | DAT_02c9ca0c
        ;   Label: LAB_005b2ef9
    INC EAX                             ; 005b2efc
    CMP DL,0x20                         ; 005b2efd
    JZ 0x005b2ef9                       ; 005b2f00
        ;   XREF to: 005b2ef9 (CONDITIONAL_JUMP)  ; LAB_005b2ef9
    MOV DH,byte ptr [EAX]               ; 005b2f02 | DAT_02c9ca0b | DAT_02c9ca0c | DAT_02c9ca0a
        ;   Label: LAB_005b2f02
    MOV EDI,EAX                         ; 005b2f04
    TEST DH,DH                          ; 005b2f06
    JNZ 0x005b2e87                      ; 005b2f08
        ;   XREF to: 005b2e87 (CONDITIONAL_JUMP)  ; LAB_005b2e87
    PUSH 0x2c9c908                      ; 005b2f0e | DAT_02c9c908
        ;   Label: LAB_005b2f0e
    PUSH 0x100                          ; 005b2f13
    CALL dword ptr CS:[0x5d0584]        ; 005b2f18 | PTR_GetCurrentDirectoryA_005d0584
    PUSH 0x100                          ; 005b2f1f
    PUSH 0x2c9c808                      ; 005b2f24 | DAT_02c9c808
    PUSH EBP                            ; 005b2f29
    MOV EDI,0x2c9c808                   ; 005b2f2a
    CALL dword ptr CS:[0x5d05b8]        ; 005b2f2f | PTR_GetModuleFileNameA_005d05b8
    SUB ECX,ECX                         ; 005b2f36
    DEC ECX                             ; 005b2f38
    XOR EAX,EAX                         ; 005b2f39
    SCASB.REPNE ES:EDI                  ; 005b2f3b | DAT_02c9c808 | DAT_02c9c809
    NOT ECX                             ; 005b2f3d
    DEC ECX                             ; 005b2f3f
    MOV EAX,ECX                         ; 005b2f40
    TEST ECX,ECX                        ; 005b2f42
    JLE 0x005b2f58                      ; 005b2f44
        ;   XREF to: 005b2f58 (CONDITIONAL_JUMP)  ; LAB_005b2f58
    CMP byte ptr [EAX + 0x2c9c808],0x5c ; 005b2f46 | DAT_02c9c808 | DAT_02c9c809
        ;   Label: LAB_005b2f46
    JZ 0x005b3071                       ; 005b2f4d
        ;   XREF to: 005b3071 (CONDITIONAL_JUMP)  ; LAB_005b3071
    DEC EAX                             ; 005b2f53
    TEST EAX,EAX                        ; 005b2f54
    JG 0x005b2f46                       ; 005b2f56
        ;   XREF to: 005b2f46 (CONDITIONAL_JUMP)  ; LAB_005b2f46
    PUSH 0x2c9c808                      ; 005b2f58 | DAT_02c9c808
        ;   Label: LAB_005b2f58
    MOV ESI,0x3                         ; 005b2f5d
    MOV EDI,0x5b27d0                    ; 005b2f62
    CALL dword ptr CS:[0x5d0628]        ; 005b2f67 | PTR_SetCurrentDirectoryA_005d0628
    PUSH 0x65                           ; 005b2f6e | DAT_00000065
    MOV dword ptr [ESP + 0x4],ESI       ; 005b2f70
    MOV dword ptr [ESP + 0x8],EDI       ; 005b2f74
    MOV dword ptr [ESP + 0x14],EBP      ; 005b2f78
    XOR EAX,EAX                         ; 005b2f7c
    PUSH EBP                            ; 005b2f7e
    MOV dword ptr [ESP + 0x10],EAX      ; 005b2f7f
    MOV dword ptr [ESP + 0x14],EAX      ; 005b2f83
    CALL dword ptr CS:[0x5d04d8]        ; 005b2f87 | PTR_LoadIconA_005d04d8
    PUSH 0x7f00                         ; 005b2f8e | DAT_00007f00
    PUSH 0x0                            ; 005b2f93
    MOV dword ptr [ESP + 0x1c],EAX      ; 005b2f95
    CALL dword ptr CS:[0x5d04d4]        ; 005b2f99 | PTR_LoadCursorA_005d04d4
    PUSH 0x4                            ; 005b2fa0
    MOV dword ptr [ESP + 0x1c],EAX      ; 005b2fa2
    CALL dword ptr CS:[0x5d0418]        ; 005b2fa6 | PTR_GetStockObject_005d0418
    MOV dword ptr [ESP + 0x1c],EAX      ; 005b2fad
    MOV EAX,[0x006260dc]                ; 005b2fb1 | PTR_s_Nocturne_006260dc
    MOV dword ptr [ESP + 0x24],EAX      ; 005b2fb6 | = "Nocturne"
    MOV EAX,ESP                         ; 005b2fba
    XOR ECX,ECX                         ; 005b2fbc
    PUSH EAX                            ; 005b2fbe
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005b2fbf
    MOV dword ptr [ESP + 0x24],ECX      ; 005b2fc3
    CALL dword ptr CS:[0x5d04f0]        ; 005b2fc7 | PTR_RegisterClassA_005d04f0
    MOV dword ptr [0x02c9be6c],EBP      ; 005b2fce | DAT_02c9be6c
    CALL wincore_winrun.cpp_FUN_005b2d90 ; 005b2fd4
        ;   XREF to: 005b2d90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2d90()
    PUSH EBX                            ; 005b2fd9
    MOV ESI,dword ptr [0x02c9be68]      ; 005b2fda | DAT_02c9be68
    PUSH ESI                            ; 005b2fe0
    CALL dword ptr CS:[0x5d050c]        ; 005b2fe1 | PTR_ShowWindow_005d050c
    MOV EDI,dword ptr [0x02c9be68]      ; 005b2fe8 | DAT_02c9be68
    PUSH EDI                            ; 005b2fee
    CALL dword ptr CS:[0x5d0514]        ; 005b2fef | PTR_UpdateWindow_005d0514
    CALL dword ptr CS:[0x5d0588]        ; 005b2ff6 | PTR_GetCurrentProcess_005d0588
    PUSH 0x2                            ; 005b2ffd
    PUSH EAX                            ; 005b2fff
    CALL dword ptr CS:[0x5d0650]        ; 005b3000 | PTR_SetThreadPriority_005d0650
    PUSH 0x20                           ; 005b3007
    PUSH 0x0                            ; 005b3009
    LEA EAX,[ESP + 0x30]                ; 005b300b
    PUSH EAX                            ; 005b300f
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005b3010
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b3015
    LEA EAX,[ESP + 0x28]                ; 005b3018
    MOV EBP,0x20                        ; 005b301c
    PUSH EAX                            ; 005b3021
    MOV dword ptr [ESP + 0x2c],EBP      ; 005b3022
    CALL dword ptr CS:[0x5d05e8]        ; 005b3026 | PTR_GlobalMemoryStatus_005d05e8
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b302d
    MOV [0x02c9be78],EAX                ; 005b3031 | DAT_02c9be78
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b3036
    PUSH 0x2c9cb0c                      ; 005b303a
    MOV [0x02c9be7c],EAX                ; 005b303f | DAT_02c9be7c
    MOV EAX,[0x02c9cb08]                ; 005b3044 | DAT_02c9cb08
    PUSH EAX                            ; 005b3049
    CALL core_main.c_initializeGameSystems_FUN_005032a0 ; 005b304a
        ;   XREF to: 005032a0 (UNCONDITIONAL_CALL)  ; void core_main.c_initializeGameSystems_FUN_005032a0(int argc, char * * argv)
    ADD ESP,0x8                         ; 005b304f
    CALL core_main.c_enterMainGameMenu_FUN_00503290 ; 005b3052
        ;   XREF to: 00503290 (UNCONDITIONAL_CALL)  ; int core_main.c_enterMainGameMenu_FUN_00503290()
    CALL core_main.c_FUN_00503a30       ; 005b3057
        ;   XREF to: 00503a30 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_00503a30()
    PUSH 0x0                            ; 005b305c
    CALL dword ptr CS:[0x5d0544]        ; 005b305e | PTR_ExitProcess_005d0544
    XOR BH,BH                           ; 005b3071
        ;   Label: LAB_005b3071
    MOV byte ptr [EAX + 0x2c9c808],BH   ; 005b3073
    JMP 0x005b2f58                      ; 005b3079
        ;   XREF to: 005b2f58 (UNCONDITIONAL_JUMP)  ; LAB_005b2f58

