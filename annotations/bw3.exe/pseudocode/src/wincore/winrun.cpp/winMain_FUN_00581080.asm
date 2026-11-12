; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __stdcall wincore_winrun_cpp_winMain_FUN_00581080(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
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
;   crt_startup.cpp_WinMainBootstrap_FUN_005ad1e0 at 005ad27d
;
; Referenced Globals:
;   undefined4 DAT_00000065
;   undefined4 DAT_00007f00
;   void* PTR_GetStockObject_005b3418 = 001b383e
;   void* PTR_timeGetTime_005b3458 = 001b3934
;   void* PTR_BringWindowToTop_005b349c = 001b3a54
;   void* PTR_FindWindowA_005b34b8 = 001b3ad4
;   void* PTR_GetLastActivePopup_005b34c4 = 001b3b06
;   void* PTR_IsIconic_005b34cc = 001b3b2e
;   void* PTR_LoadCursorA_005b34d0 = 001b3b3a
;   void* PTR_LoadIconA_005b34d4 = 001b3b48
;   void* PTR_RegisterClassA_005b34ec = 001b3ba2
;   void* PTR_SetForegroundWindow_005b3500 = 001b3bf0
;   void* PTR_ShowWindow_005b3508 = 001b3c16
;   void* PTR_UpdateWindow_005b3510 = 001b3c38
;   void* PTR_ExitProcess_005b3540 = 001b3cfe
;   ... and 22 more
;
; Called Functions:
;   BringWindowToTop
;   core_main.c_enterMainGameMenu_FUN_004e44d0
;   core_main.c_FUN_004e44e0
;   core_main.c_FUN_004e4c70
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdlib.c_srand_FUN_005a35f0
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

    PUSH EBX                            ; 00581080
        ;   Label: wincore_winrun.cpp_winMain_FUN_00581080
    PUSH ESI                            ; 00581081
    PUSH EDI                            ; 00581082
    PUSH EBP                            ; 00581083
    SUB ESP,0x48                        ; 00581084
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00581087
    PUSH 0x0                            ; 0058108b
    MOV EDX,dword ptr [0x00607280]      ; 0058108d | PTR_s_Blair_Witch_3_00607280
    PUSH EDX                            ; 00581093 | = "Blair Witch 3"
    CALL dword ptr CS:[0x5b34b8]        ; 00581094 | PTR_FindWindowA_005b34b8
    MOV EDI,EAX                         ; 0058109b
    TEST EAX,EAX                        ; 0058109d
    JNZ 0x00581115                      ; 0058109f
        ;   XREF to: 00581115 (CONDITIONAL_JUMP)  ; LAB_00581115
    MOV EBX,ESP                         ; 005810a1
    MOV EAX,ESP                         ; 005810a3
    SUB EAX,0x40000                     ; 005810a5
    MOV EAX,dword ptr [EBX]             ; 005810aa
        ;   Label: LAB_005810aa
    SUB EBX,0x80                        ; 005810ac
    CMP EBX,EAX                         ; 005810b2
    JG 0x005810aa                       ; 005810b4
        ;   XREF to: 005810aa (CONDITIONAL_JUMP)  ; LAB_005810aa
    CALL dword ptr CS:[0x5b3458]        ; 005810b6 | PTR_timeGetTime_005b3458
    PUSH EAX                            ; 005810bd
    CALL crt_stdlib.c_srand_FUN_005a35f0 ; 005810be
        ;   XREF to: 005a35f0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005a35f0(uint seed)
    ADD ESP,0x4                         ; 005810c3
    MOV EDI,0x2d22718                   ; 005810c6
    CALL dword ptr CS:[0x5b3574]        ; 005810cb | PTR_GetCommandLineA_005b3574
    MOV ESI,EAX                         ; 005810d2
    PUSH EDI                            ; 005810d4 | DAT_02d22718
    MOV AL,byte ptr [ESI]               ; 005810d5
        ;   Label: LAB_005810d5
    MOV byte ptr [EDI],AL               ; 005810d7 | DAT_02d22718 | DAT_02d2271a
    CMP AL,0x0                          ; 005810d9
    JZ 0x005810ed                       ; 005810db
        ;   XREF to: 005810ed (CONDITIONAL_JUMP)  ; LAB_005810ed
    MOV AL,byte ptr [ESI + 0x1]         ; 005810dd
    ADD ESI,0x2                         ; 005810e0
    MOV byte ptr [EDI + 0x1],AL         ; 005810e3 | DAT_02d22719 | DAT_02d2271b
    ADD EDI,0x2                         ; 005810e6
    CMP AL,0x0                          ; 005810e9
    JNZ 0x005810d5                      ; 005810eb
        ;   XREF to: 005810d5 (CONDITIONAL_JUMP)  ; LAB_005810d5
    POP EDI                             ; 005810ed
        ;   Label: LAB_005810ed
    MOV DL,byte ptr [0x02d22718]        ; 005810ee | DAT_02d22718
    MOV EAX,EDI                         ; 005810f4
    TEST DL,DL                          ; 005810f6
    JZ 0x0058118e                       ; 005810f8
        ;   XREF to: 0058118e (CONDITIONAL_JUMP)  ; LAB_0058118e
    MOV ECX,dword ptr [0x02d22818]      ; 005810fe | DAT_02d22818
    SHL ECX,0x2                         ; 00581104
    MOV BL,byte ptr [EAX]               ; 00581107 | DAT_02d22718 | DAT_02d22719 | DAT_02d2271b
        ;   Label: LAB_00581107
    LEA EDX,[EAX + 0x1]                 ; 00581109
    CMP BL,0x20                         ; 0058110c
    JBE 0x00581157                      ; 0058110f
        ;   XREF to: 00581157 (CONDITIONAL_JUMP)  ; LAB_00581157
    MOV EAX,EDX                         ; 00581111
    JMP 0x00581107                      ; 00581113
        ;   XREF to: 00581107 (UNCONDITIONAL_JUMP)  ; LAB_00581107
    PUSH EAX                            ; 00581115
        ;   Label: LAB_00581115
    CALL dword ptr CS:[0x5b34c4]        ; 00581116 | PTR_GetLastActivePopup_005b34c4
    TEST EAX,EAX                        ; 0058111d
    JZ 0x00581123                       ; 0058111f
        ;   XREF to: 00581123 (CONDITIONAL_JUMP)  ; LAB_00581123
    MOV EDI,EAX                         ; 00581121
    PUSH EDI                            ; 00581123
        ;   Label: LAB_00581123
    CALL dword ptr CS:[0x5b349c]        ; 00581124 | PTR_BringWindowToTop_005b349c
    PUSH EDI                            ; 0058112b
    CALL dword ptr CS:[0x5b34cc]        ; 0058112c | PTR_IsIconic_005b34cc
    TEST EAX,EAX                        ; 00581133
    JZ 0x00581141                       ; 00581135
        ;   XREF to: 00581141 (CONDITIONAL_JUMP)  ; LAB_00581141
    PUSH 0x9                            ; 00581137
    PUSH EDI                            ; 00581139
    CALL dword ptr CS:[0x5b3508]        ; 0058113a | PTR_ShowWindow_005b3508
    PUSH EDI                            ; 00581141
        ;   Label: LAB_00581141
    CALL dword ptr CS:[0x5b3500]        ; 00581142 | PTR_SetForegroundWindow_005b3500
    PUSH 0x1                            ; 00581149
    CALL dword ptr CS:[0x5b3540]        ; 0058114b | PTR_ExitProcess_005b3540
    MOV EBX,dword ptr [0x02d22818]      ; 00581157 | DAT_02d22818
        ;   Label: LAB_00581157
    ADD ECX,0x4                         ; 0058115d
    MOV byte ptr [EAX],0x0              ; 00581160 | DAT_02d22719
    INC EBX                             ; 00581163
    MOV dword ptr [ECX + 0x2d22818],EDI ; 00581164 | DAT_02d22718
    MOV dword ptr [0x02d22818],EBX      ; 0058116a | DAT_02d22818
    MOV BH,byte ptr [EDX]               ; 00581170 | DAT_02d2271a
    MOV EAX,EDX                         ; 00581172
    CMP BH,0x20                         ; 00581174
    JNZ 0x00581182                      ; 00581177
        ;   XREF to: 00581182 (CONDITIONAL_JUMP)  ; LAB_00581182
    MOV DL,byte ptr [EAX + 0x1]         ; 00581179 | DAT_02d2271b | DAT_02d2271c
        ;   Label: LAB_00581179
    INC EAX                             ; 0058117c
    CMP DL,0x20                         ; 0058117d
    JZ 0x00581179                       ; 00581180
        ;   XREF to: 00581179 (CONDITIONAL_JUMP)  ; LAB_00581179
    MOV DH,byte ptr [EAX]               ; 00581182 | DAT_02d2271b | DAT_02d2271c | DAT_02d2271a
        ;   Label: LAB_00581182
    MOV EDI,EAX                         ; 00581184
    TEST DH,DH                          ; 00581186
    JNZ 0x00581107                      ; 00581188
        ;   XREF to: 00581107 (CONDITIONAL_JUMP)  ; LAB_00581107
    PUSH 0x2d22618                      ; 0058118e | DAT_02d22618
        ;   Label: LAB_0058118e
    PUSH 0x100                          ; 00581193
    CALL dword ptr CS:[0x5b3584]        ; 00581198 | PTR_GetCurrentDirectoryA_005b3584
    PUSH 0x100                          ; 0058119f
    PUSH 0x2d22518                      ; 005811a4 | DAT_02d22518
    PUSH EBP                            ; 005811a9
    MOV EDI,0x2d22518                   ; 005811aa
    CALL dword ptr CS:[0x5b35b8]        ; 005811af | PTR_GetModuleFileNameA_005b35b8
    SUB ECX,ECX                         ; 005811b6
    DEC ECX                             ; 005811b8
    XOR EAX,EAX                         ; 005811b9
    SCASB.REPNE ES:EDI                  ; 005811bb | DAT_02d22518 | DAT_02d22519
    NOT ECX                             ; 005811bd
    DEC ECX                             ; 005811bf
    MOV EAX,ECX                         ; 005811c0
    TEST ECX,ECX                        ; 005811c2
    JLE 0x005811d8                      ; 005811c4
        ;   XREF to: 005811d8 (CONDITIONAL_JUMP)  ; LAB_005811d8
    CMP byte ptr [EAX + 0x2d22518],0x5c ; 005811c6 | DAT_02d22518 | DAT_02d22519
        ;   Label: LAB_005811c6
    JZ 0x005812f1                       ; 005811cd
        ;   XREF to: 005812f1 (CONDITIONAL_JUMP)  ; LAB_005812f1
    DEC EAX                             ; 005811d3
    TEST EAX,EAX                        ; 005811d4
    JG 0x005811c6                       ; 005811d6
        ;   XREF to: 005811c6 (CONDITIONAL_JUMP)  ; LAB_005811c6
    PUSH 0x2d22518                      ; 005811d8 | DAT_02d22518
        ;   Label: LAB_005811d8
    MOV ESI,0x3                         ; 005811dd
    MOV EDI,0x580a50                    ; 005811e2
    CALL dword ptr CS:[0x5b3628]        ; 005811e7 | PTR_SetCurrentDirectoryA_005b3628
    PUSH 0x65                           ; 005811ee | DAT_00000065
    MOV dword ptr [ESP + 0x4],ESI       ; 005811f0
    MOV dword ptr [ESP + 0x8],EDI       ; 005811f4
    MOV dword ptr [ESP + 0x14],EBP      ; 005811f8
    XOR EAX,EAX                         ; 005811fc
    PUSH EBP                            ; 005811fe
    MOV dword ptr [ESP + 0x10],EAX      ; 005811ff
    MOV dword ptr [ESP + 0x14],EAX      ; 00581203
    CALL dword ptr CS:[0x5b34d4]        ; 00581207 | PTR_LoadIconA_005b34d4
    PUSH 0x7f00                         ; 0058120e | DAT_00007f00
    PUSH 0x0                            ; 00581213
    MOV dword ptr [ESP + 0x1c],EAX      ; 00581215
    CALL dword ptr CS:[0x5b34d0]        ; 00581219 | PTR_LoadCursorA_005b34d0
    PUSH 0x4                            ; 00581220
    MOV dword ptr [ESP + 0x1c],EAX      ; 00581222
    CALL dword ptr CS:[0x5b3418]        ; 00581226 | PTR_GetStockObject_005b3418
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058122d
    MOV EAX,[0x00607280]                ; 00581231 | PTR_s_Blair_Witch_3_00607280
    MOV dword ptr [ESP + 0x24],EAX      ; 00581236 | = "Blair Witch 3"
    MOV EAX,ESP                         ; 0058123a
    XOR ECX,ECX                         ; 0058123c
    PUSH EAX                            ; 0058123e
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0058123f
    MOV dword ptr [ESP + 0x24],ECX      ; 00581243
    CALL dword ptr CS:[0x5b34ec]        ; 00581247 | PTR_RegisterClassA_005b34ec
    MOV dword ptr [0x02d21b7c],EBP      ; 0058124e | DAT_02d21b7c
    CALL wincore_winrun.cpp_FUN_00581010 ; 00581254
        ;   XREF to: 00581010 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581010()
    PUSH EBX                            ; 00581259
    MOV ESI,dword ptr [0x02d21b78]      ; 0058125a | DAT_02d21b78
    PUSH ESI                            ; 00581260
    CALL dword ptr CS:[0x5b3508]        ; 00581261 | PTR_ShowWindow_005b3508
    MOV EDI,dword ptr [0x02d21b78]      ; 00581268 | DAT_02d21b78
    PUSH EDI                            ; 0058126e
    CALL dword ptr CS:[0x5b3510]        ; 0058126f | PTR_UpdateWindow_005b3510
    CALL dword ptr CS:[0x5b3588]        ; 00581276 | PTR_GetCurrentProcess_005b3588
    PUSH 0x2                            ; 0058127d
    PUSH EAX                            ; 0058127f
    CALL dword ptr CS:[0x5b3650]        ; 00581280 | PTR_SetThreadPriority_005b3650
    PUSH 0x20                           ; 00581287
    PUSH 0x0                            ; 00581289
    LEA EAX,[ESP + 0x30]                ; 0058128b
    PUSH EAX                            ; 0058128f
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00581290
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00581295
    LEA EAX,[ESP + 0x28]                ; 00581298
    MOV EBP,0x20                        ; 0058129c
    PUSH EAX                            ; 005812a1
    MOV dword ptr [ESP + 0x2c],EBP      ; 005812a2
    CALL dword ptr CS:[0x5b35e8]        ; 005812a6 | PTR_GlobalMemoryStatus_005b35e8
    MOV EAX,dword ptr [ESP + 0x30]      ; 005812ad
    MOV [0x02d21b88],EAX                ; 005812b1 | DAT_02d21b88
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005812b6
    PUSH 0x2d2281c                      ; 005812ba
    MOV [0x02d21b8c],EAX                ; 005812bf | DAT_02d21b8c
    MOV EAX,[0x02d22818]                ; 005812c4 | DAT_02d22818
    PUSH EAX                            ; 005812c9
    CALL core_main.c_FUN_004e44e0       ; 005812ca
        ;   XREF to: 004e44e0 (UNCONDITIONAL_CALL)  ; void core_main.c_FUN_004e44e0(int argc, char * * argv)
    ADD ESP,0x8                         ; 005812cf
    CALL core_main.c_enterMainGameMenu_FUN_004e44d0 ; 005812d2
        ;   XREF to: 004e44d0 (UNCONDITIONAL_CALL)  ; int core_main.c_enterMainGameMenu_FUN_004e44d0()
    CALL core_main.c_FUN_004e4c70       ; 005812d7
        ;   XREF to: 004e4c70 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4c70()
    PUSH 0x0                            ; 005812dc
    CALL dword ptr CS:[0x5b3540]        ; 005812de | PTR_ExitProcess_005b3540
    XOR BH,BH                           ; 005812f1
        ;   Label: LAB_005812f1
    MOV byte ptr [EAX + 0x2d22518],BH   ; 005812f3
    JMP 0x005811d8                      ; 005812f9
        ;   XREF to: 005811d8 (UNCONDITIONAL_JUMP)  ; LAB_005811d8

