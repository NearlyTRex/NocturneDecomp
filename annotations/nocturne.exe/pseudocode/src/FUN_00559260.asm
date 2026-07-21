; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00559260(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
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
;   crt_startup.cpp_WinMainBootstrap_FUN_0056df10 at 0056dfad
;
; Referenced Globals:
;   void* PTR_GetStockObject_005753b0 = 00175766
;   void* PTR_timeGetTime_005753ec = 0017584a
;   void* PTR_BringWindowToTop_00575410 = 001758de
;   void* PTR_CreateWindowExA_0057541c = 00175916
;   void* PTR_FindWindowA_00575428 = 0017594e
;   void* PTR_GetLastActivePopup_00575438 = 00175992
;   void* PTR_IsIconic_00575440 = 001759ba
;   void* PTR_LoadCursorA_00575444 = 001759c6
;   void* PTR_LoadIconA_00575448 = 001759d4
;   void* PTR_RegisterClassA_00575460 = 00175a2e
;   void* PTR_SetForegroundWindow_00575474 = 00175a7c
;   void* PTR_ShowWindow_0057547c = 00175aa2
;   void* PTR_UpdateWindow_00575484 = 00175ac4
;   void* PTR_GetCommandLineA_005754e8 = 00175c70
;   void* PTR_GetCurrentDirectoryA_005754f4 = 00175ca6
;   ... and 22 more
;
; Called Functions:
;   BringWindowToTop
;   CreateWindowExA
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdlib.c_srand_FUN_005648b0
;   FindWindowA
;   FUN_004c85f0
;   FUN_004c90e0
;   GetCommandLineA
;   GetCurrentDirectoryA
;   GetCurrentProcess
;   GetLastActivePopup
;   GetModuleFileNameA
;   GetStockObject
;   GlobalMemoryStatus
;   IsIconic
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559260
        ;   Label: FUN_00559260
    PUSH ESI                            ; 00559261
    PUSH EDI                            ; 00559262
    PUSH EBP                            ; 00559263
    SUB ESP,0x48                        ; 00559264
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00559267
    PUSH 0x0                            ; 0055926b
    MOV EDX,dword ptr [0x005c1658]      ; 0055926d | PTR_s_Nocturne_005c1658
    PUSH EDX                            ; 00559273 | = "Nocturne"
    CALL dword ptr CS:[0x575428]        ; 00559274 | PTR_FindWindowA_00575428
    MOV EDI,EAX                         ; 0055927b
    TEST EAX,EAX                        ; 0055927d
    JZ 0x005592c1                       ; 0055927f
        ;   XREF to: 005592c1 (CONDITIONAL_JUMP)  ; LAB_005592c1
    PUSH EAX                            ; 00559281
    CALL dword ptr CS:[0x575438]        ; 00559282 | PTR_GetLastActivePopup_00575438
    TEST EAX,EAX                        ; 00559289
    JZ 0x0055928f                       ; 0055928b
        ;   XREF to: 0055928f (CONDITIONAL_JUMP)  ; LAB_0055928f
    MOV EDI,EAX                         ; 0055928d
    PUSH EDI                            ; 0055928f
        ;   Label: LAB_0055928f
    CALL dword ptr CS:[0x575410]        ; 00559290 | PTR_BringWindowToTop_00575410
    PUSH EDI                            ; 00559297
    CALL dword ptr CS:[0x575440]        ; 00559298 | PTR_IsIconic_00575440
    TEST EAX,EAX                        ; 0055929f
    JZ 0x005592ad                       ; 005592a1
        ;   XREF to: 005592ad (CONDITIONAL_JUMP)  ; LAB_005592ad
    PUSH 0x9                            ; 005592a3
    PUSH EDI                            ; 005592a5
    CALL dword ptr CS:[0x57547c]        ; 005592a6 | PTR_ShowWindow_0057547c
    PUSH EDI                            ; 005592ad
        ;   Label: LAB_005592ad
    CALL dword ptr CS:[0x575474]        ; 005592ae | PTR_SetForegroundWindow_00575474
    XOR EAX,EAX                         ; 005592b5
    ADD ESP,0x48                        ; 005592b7
    POP EBP                             ; 005592ba
    POP EDI                             ; 005592bb
    POP ESI                             ; 005592bc
    POP EBX                             ; 005592bd
    RET 0x10                            ; 005592be
    MOV EBX,ESP                         ; 005592c1
        ;   Label: LAB_005592c1
    MOV EAX,ESP                         ; 005592c3
    SUB EAX,0x40000                     ; 005592c5
    MOV EAX,dword ptr [EBX]             ; 005592ca
        ;   Label: LAB_005592ca
    SUB EBX,0x80                        ; 005592cc
    CMP EBX,EAX                         ; 005592d2
    JG 0x005592ca                       ; 005592d4
        ;   XREF to: 005592ca (CONDITIONAL_JUMP)  ; LAB_005592ca
    MOV dword ptr [0x02de209c],EBP      ; 005592d6 | DAT_02de209c
    CALL dword ptr CS:[0x5753ec]        ; 005592dc | PTR_timeGetTime_005753ec
    PUSH EAX                            ; 005592e3
    CALL crt_stdlib.c_srand_FUN_005648b0 ; 005592e4
        ;   XREF to: 005648b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_srand_FUN_005648b0()
    ADD ESP,0x4                         ; 005592e9
    MOV EDI,0x2de2c10                   ; 005592ec
    CALL dword ptr CS:[0x5754e8]        ; 005592f1 | PTR_GetCommandLineA_005754e8
    MOV ESI,EAX                         ; 005592f8
    PUSH EDI                            ; 005592fa | DAT_02de2c10
    MOV AL,byte ptr [ESI]               ; 005592fb
        ;   Label: LAB_005592fb
    MOV byte ptr [EDI],AL               ; 005592fd | DAT_02de2c10 | DAT_02de2c12
    CMP AL,0x0                          ; 005592ff
    JZ 0x00559313                       ; 00559301
        ;   XREF to: 00559313 (CONDITIONAL_JUMP)  ; LAB_00559313
    MOV AL,byte ptr [ESI + 0x1]         ; 00559303
    ADD ESI,0x2                         ; 00559306
    MOV byte ptr [EDI + 0x1],AL         ; 00559309 | DAT_02de2c11 | DAT_02de2c13
    ADD EDI,0x2                         ; 0055930c
    CMP AL,0x0                          ; 0055930f
    JNZ 0x005592fb                      ; 00559311
        ;   XREF to: 005592fb (CONDITIONAL_JUMP)  ; LAB_005592fb
    POP EDI                             ; 00559313
        ;   Label: LAB_00559313
    MOV DL,byte ptr [0x02de2c10]        ; 00559314 | DAT_02de2c10
    MOV EAX,EDI                         ; 0055931a
    TEST DL,DL                          ; 0055931c
    JZ 0x0055936a                       ; 0055931e
        ;   XREF to: 0055936a (CONDITIONAL_JUMP)  ; LAB_0055936a
    MOV ECX,dword ptr [0x02de2d10]      ; 00559320 | DAT_02de2d10
    SHL ECX,0x2                         ; 00559326
    MOV BL,byte ptr [EAX]               ; 00559329 | DAT_02de2c10 | DAT_02de2c11 | DAT_02de2c13
        ;   Label: LAB_00559329
    LEA EDX,[EAX + 0x1]                 ; 0055932b
    CMP BL,0x20                         ; 0055932e
    JBE 0x00559337                      ; 00559331
        ;   XREF to: 00559337 (CONDITIONAL_JUMP)  ; LAB_00559337
    MOV EAX,EDX                         ; 00559333
    JMP 0x00559329                      ; 00559335
        ;   XREF to: 00559329 (UNCONDITIONAL_JUMP)  ; LAB_00559329
    MOV EBX,dword ptr [0x02de2d10]      ; 00559337 | DAT_02de2d10
        ;   Label: LAB_00559337
    ADD ECX,0x4                         ; 0055933d
    MOV byte ptr [EAX],0x0              ; 00559340 | DAT_02de2c11
    INC EBX                             ; 00559343
    MOV dword ptr [ECX + 0x2de2d10],EDI ; 00559344 | DAT_02de2c10
    MOV dword ptr [0x02de2d10],EBX      ; 0055934a | DAT_02de2d10
    MOV BH,byte ptr [EDX]               ; 00559350 | DAT_02de2c12
    MOV EAX,EDX                         ; 00559352
    CMP BH,0x20                         ; 00559354
    JNZ 0x00559362                      ; 00559357
        ;   XREF to: 00559362 (CONDITIONAL_JUMP)  ; LAB_00559362
    MOV DL,byte ptr [EAX + 0x1]         ; 00559359 | DAT_02de2c13 | DAT_02de2c14
        ;   Label: LAB_00559359
    INC EAX                             ; 0055935c
    CMP DL,0x20                         ; 0055935d
    JZ 0x00559359                       ; 00559360
        ;   XREF to: 00559359 (CONDITIONAL_JUMP)  ; LAB_00559359
    MOV DH,byte ptr [EAX]               ; 00559362 | DAT_02de2c13 | DAT_02de2c14 | DAT_02de2c12
        ;   Label: LAB_00559362
    MOV EDI,EAX                         ; 00559364
    TEST DH,DH                          ; 00559366
    JNZ 0x00559329                      ; 00559368
        ;   XREF to: 00559329 (CONDITIONAL_JUMP)  ; LAB_00559329
    PUSH 0x2de2b10                      ; 0055936a
        ;   Label: LAB_0055936a
    PUSH 0x100                          ; 0055936f
    CALL dword ptr CS:[0x5754f4]        ; 00559374 | PTR_GetCurrentDirectoryA_005754f4
    PUSH 0x100                          ; 0055937b
    PUSH 0x2de2a10                      ; 00559380
    PUSH EBP                            ; 00559385
    MOV EDI,0x2de2a10                   ; 00559386
    CALL dword ptr CS:[0x575524]        ; 0055938b | PTR_GetModuleFileNameA_00575524
    SUB ECX,ECX                         ; 00559392
    DEC ECX                             ; 00559394
    XOR EAX,EAX                         ; 00559395
    SCASB.REPNE ES:EDI                  ; 00559397 | DAT_02de2a10 | DAT_02de2a11
    NOT ECX                             ; 00559399
    DEC ECX                             ; 0055939b
    MOV EAX,ECX                         ; 0055939c
    TEST ECX,ECX                        ; 0055939e
    JLE 0x005593b7                      ; 005593a0
        ;   XREF to: 005593b7 (CONDITIONAL_JUMP)  ; LAB_005593b7
    CMP byte ptr [EAX + 0x2de2a10],0x5c ; 005593a2 | DAT_02de2a10 | DAT_02de2a11
        ;   Label: LAB_005593a2
    JNZ 0x00559460                      ; 005593a9
        ;   XREF to: 00559460 (CONDITIONAL_JUMP)  ; LAB_00559460
    XOR BH,BH                           ; 005593af
    MOV byte ptr [EAX + 0x2de2a10],BH   ; 005593b1 | DAT_02de2a10 | DAT_02de2a11
    PUSH 0x2de2a10                      ; 005593b7 | DAT_02de2a10
        ;   Label: LAB_005593b7
    MOV EBX,0x558d90                    ; 005593bc | LAB_00558d90
    CALL dword ptr CS:[0x57558c]        ; 005593c1 | PTR_SetCurrentDirectoryA_0057558c
    XOR ESI,ESI                         ; 005593c8
    MOV ECX,0x3                         ; 005593ca
    PUSH 0x65                           ; 005593cf
    MOV dword ptr [ESP + 0x8],EBX       ; 005593d1 | LAB_00558d90
    MOV dword ptr [ESP + 0xc],ESI       ; 005593d5
    MOV dword ptr [ESP + 0x10],ESI      ; 005593d9
    PUSH EBP                            ; 005593dd
    MOV dword ptr [ESP + 0x18],EBP      ; 005593de
    MOV dword ptr [ESP + 0x8],ECX       ; 005593e2
    CALL dword ptr CS:[0x575448]        ; 005593e6 | PTR_LoadIconA_00575448 | Rsrc_GroupIcon_65_0
    PUSH 0x7f00                         ; 005593ed
    PUSH ESI                            ; 005593f2
    MOV dword ptr [ESP + 0x1c],EAX      ; 005593f3
    CALL dword ptr CS:[0x575444]        ; 005593f7 | PTR_LoadCursorA_00575444
    PUSH 0x4                            ; 005593fe
    MOV dword ptr [ESP + 0x1c],EAX      ; 00559400
    CALL dword ptr CS:[0x5753b0]        ; 00559404 | PTR_GetStockObject_005753b0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0055940b
    MOV EAX,[0x005c1658]                ; 0055940f | PTR_s_Nocturne_005c1658
    MOV dword ptr [ESP + 0x24],EAX      ; 00559414 | = "Nocturne"
    MOV EAX,ESP                         ; 00559418
    PUSH EAX                            ; 0055941a
    MOV dword ptr [ESP + 0x24],ESI      ; 0055941b
    CALL dword ptr CS:[0x575460]        ; 0055941f | PTR_RegisterClassA_00575460
    PUSH ESI                            ; 00559426
    PUSH EBP                            ; 00559427
    PUSH ESI                            ; 00559428
    PUSH ESI                            ; 00559429
    PUSH ESI                            ; 0055942a
    PUSH ESI                            ; 0055942b
    PUSH ESI                            ; 0055942c
    PUSH ESI                            ; 0055942d
    PUSH 0x80000000                     ; 0055942e
    MOV EDX,dword ptr [0x005c165c]      ; 00559433 | PTR_s_Nocturne_005c165c
    PUSH EDX                            ; 00559439 | = "Nocturne"
    MOV ECX,dword ptr [0x005c1658]      ; 0055943a | PTR_s_Nocturne_005c1658
    PUSH ECX                            ; 00559440 | = "Nocturne"
    PUSH 0x40000                        ; 00559441
    CALL dword ptr CS:[0x57541c]        ; 00559446 | PTR_CreateWindowExA_0057541c
    MOV [0x02de2098],EAX                ; 0055944d | DAT_02de2098
    TEST EAX,EAX                        ; 00559452
    JNZ 0x0055946e                      ; 00559454
        ;   XREF to: 0055946e (CONDITIONAL_JUMP)  ; LAB_0055946e
    ADD ESP,0x48                        ; 00559456
    POP EBP                             ; 00559459
    POP EDI                             ; 0055945a
    POP ESI                             ; 0055945b
    POP EBX                             ; 0055945c
    RET 0x10                            ; 0055945d
    DEC EAX                             ; 00559460
        ;   Label: LAB_00559460
    TEST EAX,EAX                        ; 00559461
    JG 0x005593a2                       ; 00559463
        ;   XREF to: 005593a2 (CONDITIONAL_JUMP)  ; LAB_005593a2
    JMP 0x005593b7                      ; 00559469
        ;   XREF to: 005593b7 (UNCONDITIONAL_JUMP)  ; LAB_005593b7
    MOV EBX,dword ptr [ESP + 0x68]      ; 0055946e
        ;   Label: LAB_0055946e
    PUSH EBX                            ; 00559472
    PUSH EAX                            ; 00559473
    CALL dword ptr CS:[0x57547c]        ; 00559474 | PTR_ShowWindow_0057547c
    MOV ESI,dword ptr [0x02de2098]      ; 0055947b | DAT_02de2098
    PUSH ESI                            ; 00559481
    CALL dword ptr CS:[0x575484]        ; 00559482 | PTR_UpdateWindow_00575484
    CALL dword ptr CS:[0x5754f8]        ; 00559489 | PTR_GetCurrentProcess_005754f8
    PUSH 0x1                            ; 00559490
    PUSH EAX                            ; 00559492
    CALL dword ptr CS:[0x5755b0]        ; 00559493 | PTR_SetThreadPriority_005755b0
    PUSH 0x20                           ; 0055949a
    PUSH 0x0                            ; 0055949c
    LEA EAX,[ESP + 0x30]                ; 0055949e
    PUSH EAX                            ; 005594a2
    CALL crt_memory.c_memset_FUN_00563cc0 ; 005594a3
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 005594a8
    LEA EAX,[ESP + 0x28]                ; 005594ab
    MOV EDI,0x20                        ; 005594af
    PUSH EAX                            ; 005594b4
    MOV dword ptr [ESP + 0x2c],EDI      ; 005594b5
    CALL dword ptr CS:[0x575550]        ; 005594b9 | PTR_GlobalMemoryStatus_00575550
    MOV EAX,dword ptr [ESP + 0x30]      ; 005594c0
    PUSH 0x2de2d14                      ; 005594c4
    MOV EBP,dword ptr [0x02de2d10]      ; 005594c9 | DAT_02de2d10
    MOV [0x02de20a8],EAX                ; 005594cf | DAT_02de20a8
    MOV EAX,dword ptr [ESP + 0x40]      ; 005594d4
    PUSH EBP                            ; 005594d8
    MOV [0x02de20ac],EAX                ; 005594d9 | DAT_02de20ac
    CALL FUN_004c85f0                   ; 005594de
        ;   XREF to: 004c85f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c85f0()
    ADD ESP,0x8                         ; 005594e3
    CALL thunk_FUN_004d23d0             ; 005594e6
        ;   XREF to: 004c85e0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004d23d0()
    CALL FUN_004c90e0                   ; 005594eb
        ;   XREF to: 004c90e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c90e0()
    XOR EAX,EAX                         ; 005594f0
    ADD ESP,0x48                        ; 005594f2
    POP EBP                             ; 005594f5
    POP EDI                             ; 005594f6
    POP ESI                             ; 005594f7
    POP EBX                             ; 005594f8
    RET 0x10                            ; 005594f9

