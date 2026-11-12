; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __stdcall wincore_winrun_cpp_winMain_FUN_0058f310(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
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
;   crt_startup.cpp_WinMainBootstrap_FUN_005c2020 at 005c20bd
;
; Referenced Globals:
;   undefined4 DAT_00000065
;   undefined4 DAT_00007f00
;   void* PTR_GetStockObject_005c840c = 001c8826
;   void* PTR_timeGetTime_005c844c = 001c891c
;   void* PTR_BringWindowToTop_005c8490 = 001c8a3c
;   void* PTR_CreateWindowExA_005c849c = 001c8a74
;   void* PTR_FindWindowA_005c84a8 = 001c8aac
;   void* PTR_GetLastActivePopup_005c84b8 = 001c8af0
;   void* PTR_IsIconic_005c84c0 = 001c8b18
;   void* PTR_LoadCursorA_005c84c4 = 001c8b24
;   void* PTR_LoadIconA_005c84c8 = 001c8b32
;   void* PTR_RegisterClassA_005c84e0 = 001c8b8c
;   void* PTR_SetForegroundWindow_005c84f4 = 001c8bda
;   void* PTR_ShowWindow_005c84fc = 001c8c00
;   void* PTR_UpdateWindow_005c8504 = 001c8c22
;   ... and 25 more
;
; Called Functions:
;   BringWindowToTop
;   core_main.c_enterMainGameMenu_FUN_004e46b0
;   core_main.c_FUN_004e4e20
;   core_main.c_initializeGameSystems_FUN_004e46c0
;   CreateWindowExA
;   crt_memory.c_memset_FUN_005b77c0
;   crt_stdlib.c_srand_FUN_005b84c0
;   ExitProcess
;   FindWindowA
;   GetCommandLineA
;   GetCurrentDirectoryA
;   GetCurrentProcess
;   GetLastActivePopup
;   GetModuleFileNameA
;   GetStockObject
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f310
        ;   Label: wincore_winrun.cpp_winMain_FUN_0058f310
    PUSH ESI                            ; 0058f311
    PUSH EDI                            ; 0058f312
    PUSH EBP                            ; 0058f313
    SUB ESP,0x48                        ; 0058f314
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0058f317
    PUSH 0x0                            ; 0058f31b
    MOV EDX,dword ptr [0x0061e984]      ; 0058f31d | PTR_s_Coffin_Rock_0061e984
    PUSH EDX                            ; 0058f323 | = "Coffin Rock"
    CALL dword ptr CS:[0x5c84a8]        ; 0058f324 | PTR_FindWindowA_005c84a8
    MOV EDI,EAX                         ; 0058f32b
    TEST EAX,EAX                        ; 0058f32d
    JNZ 0x0058f3a5                      ; 0058f32f
        ;   XREF to: 0058f3a5 (CONDITIONAL_JUMP)  ; LAB_0058f3a5
    MOV EBX,ESP                         ; 0058f331
    MOV EAX,ESP                         ; 0058f333
    SUB EAX,0x40000                     ; 0058f335
    MOV EAX,dword ptr [EBX]             ; 0058f33a
        ;   Label: LAB_0058f33a
    SUB EBX,0x80                        ; 0058f33c
    CMP EBX,EAX                         ; 0058f342
    JG 0x0058f33a                       ; 0058f344
        ;   XREF to: 0058f33a (CONDITIONAL_JUMP)  ; LAB_0058f33a
    CALL dword ptr CS:[0x5c844c]        ; 0058f346 | PTR_timeGetTime_005c844c
    PUSH EAX                            ; 0058f34d
    CALL crt_stdlib.c_srand_FUN_005b84c0 ; 0058f34e
        ;   XREF to: 005b84c0 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005b84c0(uint seed)
    ADD ESP,0x4                         ; 0058f353
    MOV EDI,0x26651b8                   ; 0058f356
    CALL dword ptr CS:[0x5c8564]        ; 0058f35b | PTR_GetCommandLineA_005c8564
    MOV ESI,EAX                         ; 0058f362
    PUSH EDI                            ; 0058f364 | DAT_026651b8
    MOV AL,byte ptr [ESI]               ; 0058f365
        ;   Label: LAB_0058f365
    MOV byte ptr [EDI],AL               ; 0058f367 | DAT_026651b8 | DAT_026651ba
    CMP AL,0x0                          ; 0058f369
    JZ 0x0058f37d                       ; 0058f36b
        ;   XREF to: 0058f37d (CONDITIONAL_JUMP)  ; LAB_0058f37d
    MOV AL,byte ptr [ESI + 0x1]         ; 0058f36d
    ADD ESI,0x2                         ; 0058f370
    MOV byte ptr [EDI + 0x1],AL         ; 0058f373 | DAT_026651b9 | DAT_026651bb
    ADD EDI,0x2                         ; 0058f376
    CMP AL,0x0                          ; 0058f379
    JNZ 0x0058f365                      ; 0058f37b
        ;   XREF to: 0058f365 (CONDITIONAL_JUMP)  ; LAB_0058f365
    POP EDI                             ; 0058f37d
        ;   Label: LAB_0058f37d
    MOV DL,byte ptr [0x026651b8]        ; 0058f37e | DAT_026651b8
    MOV EAX,EDI                         ; 0058f384
    TEST DL,DL                          ; 0058f386
    JZ 0x0058f41e                       ; 0058f388
        ;   XREF to: 0058f41e (CONDITIONAL_JUMP)  ; LAB_0058f41e
    MOV ECX,dword ptr [0x026652b8]      ; 0058f38e | DAT_026652b8
    SHL ECX,0x2                         ; 0058f394
    MOV BL,byte ptr [EAX]               ; 0058f397 | DAT_026651b8 | DAT_026651b9 | DAT_026651bb
        ;   Label: LAB_0058f397
    LEA EDX,[EAX + 0x1]                 ; 0058f399
    CMP BL,0x20                         ; 0058f39c
    JBE 0x0058f3e7                      ; 0058f39f
        ;   XREF to: 0058f3e7 (CONDITIONAL_JUMP)  ; LAB_0058f3e7
    MOV EAX,EDX                         ; 0058f3a1
    JMP 0x0058f397                      ; 0058f3a3
        ;   XREF to: 0058f397 (UNCONDITIONAL_JUMP)  ; LAB_0058f397
    PUSH EAX                            ; 0058f3a5
        ;   Label: LAB_0058f3a5
    CALL dword ptr CS:[0x5c84b8]        ; 0058f3a6 | PTR_GetLastActivePopup_005c84b8
    TEST EAX,EAX                        ; 0058f3ad
    JZ 0x0058f3b3                       ; 0058f3af
        ;   XREF to: 0058f3b3 (CONDITIONAL_JUMP)  ; LAB_0058f3b3
    MOV EDI,EAX                         ; 0058f3b1
    PUSH EDI                            ; 0058f3b3
        ;   Label: LAB_0058f3b3
    CALL dword ptr CS:[0x5c8490]        ; 0058f3b4 | PTR_BringWindowToTop_005c8490
    PUSH EDI                            ; 0058f3bb
    CALL dword ptr CS:[0x5c84c0]        ; 0058f3bc | PTR_IsIconic_005c84c0
    TEST EAX,EAX                        ; 0058f3c3
    JZ 0x0058f3d1                       ; 0058f3c5
        ;   XREF to: 0058f3d1 (CONDITIONAL_JUMP)  ; LAB_0058f3d1
    PUSH 0x9                            ; 0058f3c7
    PUSH EDI                            ; 0058f3c9
    CALL dword ptr CS:[0x5c84fc]        ; 0058f3ca | PTR_ShowWindow_005c84fc
    PUSH EDI                            ; 0058f3d1
        ;   Label: LAB_0058f3d1
    CALL dword ptr CS:[0x5c84f4]        ; 0058f3d2 | PTR_SetForegroundWindow_005c84f4
    PUSH 0x1                            ; 0058f3d9
    CALL dword ptr CS:[0x5c8534]        ; 0058f3db | PTR_ExitProcess_005c8534
    MOV EBX,dword ptr [0x026652b8]      ; 0058f3e7 | DAT_026652b8
        ;   Label: LAB_0058f3e7
    ADD ECX,0x4                         ; 0058f3ed
    MOV byte ptr [EAX],0x0              ; 0058f3f0 | DAT_026651b9
    INC EBX                             ; 0058f3f3
    MOV dword ptr [ECX + 0x26652b8],EDI ; 0058f3f4 | DAT_026651b8
    MOV dword ptr [0x026652b8],EBX      ; 0058f3fa | DAT_026652b8
    MOV BH,byte ptr [EDX]               ; 0058f400 | DAT_026651ba
    MOV EAX,EDX                         ; 0058f402
    CMP BH,0x20                         ; 0058f404
    JNZ 0x0058f412                      ; 0058f407
        ;   XREF to: 0058f412 (CONDITIONAL_JUMP)  ; LAB_0058f412
    MOV DL,byte ptr [EAX + 0x1]         ; 0058f409 | DAT_026651bb | DAT_026651bc
        ;   Label: LAB_0058f409
    INC EAX                             ; 0058f40c
    CMP DL,0x20                         ; 0058f40d
    JZ 0x0058f409                       ; 0058f410
        ;   XREF to: 0058f409 (CONDITIONAL_JUMP)  ; LAB_0058f409
    MOV DH,byte ptr [EAX]               ; 0058f412 | DAT_026651bb | DAT_026651bc | DAT_026651ba
        ;   Label: LAB_0058f412
    MOV EDI,EAX                         ; 0058f414
    TEST DH,DH                          ; 0058f416
    JNZ 0x0058f397                      ; 0058f418
        ;   XREF to: 0058f397 (CONDITIONAL_JUMP)  ; LAB_0058f397
    PUSH 0x26650b8                      ; 0058f41e | DAT_026650b8
        ;   Label: LAB_0058f41e
    PUSH 0x100                          ; 0058f423
    CALL dword ptr CS:[0x5c8574]        ; 0058f428 | PTR_GetCurrentDirectoryA_005c8574
    PUSH 0x100                          ; 0058f42f
    PUSH 0x2664fb8                      ; 0058f434 | DAT_02664fb8
    PUSH EBP                            ; 0058f439
    MOV EDI,0x2664fb8                   ; 0058f43a
    CALL dword ptr CS:[0x5c85a8]        ; 0058f43f | PTR_GetModuleFileNameA_005c85a8
    SUB ECX,ECX                         ; 0058f446
    DEC ECX                             ; 0058f448
    XOR EAX,EAX                         ; 0058f449
    SCASB.REPNE ES:EDI                  ; 0058f44b | DAT_02664fb8 | DAT_02664fb9
    NOT ECX                             ; 0058f44d
    DEC ECX                             ; 0058f44f
    MOV EAX,ECX                         ; 0058f450
    TEST ECX,ECX                        ; 0058f452
    JLE 0x0058f46b                      ; 0058f454
        ;   XREF to: 0058f46b (CONDITIONAL_JUMP)  ; LAB_0058f46b
    CMP byte ptr [EAX + 0x2664fb8],0x5c ; 0058f456 | DAT_02664fb8 | DAT_02664fb9
        ;   Label: LAB_0058f456
    JNZ 0x0058f5b1                      ; 0058f45d
        ;   XREF to: 0058f5b1 (CONDITIONAL_JUMP)  ; LAB_0058f5b1
    XOR BH,BH                           ; 0058f463
    MOV byte ptr [EAX + 0x2664fb8],BH   ; 0058f465 | DAT_02664fb8 | DAT_02664fb9
    PUSH 0x2664fb8                      ; 0058f46b | DAT_02664fb8
        ;   Label: LAB_0058f46b
    MOV EBX,0x58ed90                    ; 0058f470
    CALL dword ptr CS:[0x5c8614]        ; 0058f475 | PTR_SetCurrentDirectoryA_005c8614
    XOR ESI,ESI                         ; 0058f47c
    MOV ECX,0x3                         ; 0058f47e
    PUSH 0x65                           ; 0058f483 | DAT_00000065
    MOV dword ptr [ESP + 0x8],EBX       ; 0058f485
    MOV dword ptr [ESP + 0xc],ESI       ; 0058f489
    MOV dword ptr [ESP + 0x10],ESI      ; 0058f48d
    PUSH EBP                            ; 0058f491
    MOV dword ptr [ESP + 0x18],EBP      ; 0058f492
    MOV dword ptr [ESP + 0x8],ECX       ; 0058f496
    CALL dword ptr CS:[0x5c84c8]        ; 0058f49a | PTR_LoadIconA_005c84c8
    PUSH 0x7f00                         ; 0058f4a1 | DAT_00007f00
    PUSH ESI                            ; 0058f4a6
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058f4a7
    CALL dword ptr CS:[0x5c84c4]        ; 0058f4ab | PTR_LoadCursorA_005c84c4
    PUSH 0x4                            ; 0058f4b2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058f4b4
    CALL dword ptr CS:[0x5c840c]        ; 0058f4b8 | PTR_GetStockObject_005c840c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058f4bf
    MOV EAX,[0x0061e984]                ; 0058f4c3 | PTR_s_Coffin_Rock_0061e984
    MOV dword ptr [ESP + 0x24],EAX      ; 0058f4c8 | = "Coffin Rock"
    MOV EAX,ESP                         ; 0058f4cc
    PUSH EAX                            ; 0058f4ce
    MOV dword ptr [ESP + 0x24],ESI      ; 0058f4cf
    CALL dword ptr CS:[0x5c84e0]        ; 0058f4d3 | PTR_RegisterClassA_005c84e0
    PUSH ESI                            ; 0058f4da
    PUSH EBP                            ; 0058f4db
    PUSH ESI                            ; 0058f4dc
    PUSH ESI                            ; 0058f4dd
    PUSH ESI                            ; 0058f4de
    PUSH ESI                            ; 0058f4df
    PUSH ESI                            ; 0058f4e0
    PUSH ESI                            ; 0058f4e1
    PUSH 0x80000000                     ; 0058f4e2
    MOV EDX,dword ptr [0x0061e988]      ; 0058f4e7 | PTR_s_Coffin_Rock_0061e988
    PUSH EDX                            ; 0058f4ed | = "Coffin Rock"
    MOV ECX,dword ptr [0x0061e984]      ; 0058f4ee | PTR_s_Coffin_Rock_0061e984
    PUSH ECX                            ; 0058f4f4 | = "Coffin Rock"
    PUSH 0x40000                        ; 0058f4f5
    CALL dword ptr CS:[0x5c849c]        ; 0058f4fa | PTR_CreateWindowExA_005c849c
    MOV [0x02664628],EAX                ; 0058f501 | DAT_02664628
    TEST EAX,EAX                        ; 0058f506
    JZ 0x0058f5bf                       ; 0058f508
        ;   XREF to: 0058f5bf (CONDITIONAL_JUMP)  ; LAB_0058f5bf
    MOV ESI,dword ptr [ESP + 0x68]      ; 0058f50e
    PUSH ESI                            ; 0058f512
    MOV EDI,dword ptr [0x02664628]      ; 0058f513 | DAT_02664628
    PUSH EDI                            ; 0058f519
    MOV dword ptr [0x0266462c],EBP      ; 0058f51a | DAT_0266462c
    CALL dword ptr CS:[0x5c84fc]        ; 0058f520 | PTR_ShowWindow_005c84fc
    MOV EBP,dword ptr [0x02664628]      ; 0058f527 | DAT_02664628
    PUSH EBP                            ; 0058f52d
    CALL dword ptr CS:[0x5c8504]        ; 0058f52e | PTR_UpdateWindow_005c8504
    CALL dword ptr CS:[0x5c8578]        ; 0058f535 | PTR_GetCurrentProcess_005c8578
    PUSH 0x1                            ; 0058f53c
    PUSH EAX                            ; 0058f53e
    CALL dword ptr CS:[0x5c863c]        ; 0058f53f | PTR_SetThreadPriority_005c863c
    PUSH 0x20                           ; 0058f546
    PUSH 0x0                            ; 0058f548
    LEA EAX,[ESP + 0x30]                ; 0058f54a
    PUSH EAX                            ; 0058f54e
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0058f54f
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EAX,0x20                        ; 0058f554
    ADD ESP,0xc                         ; 0058f559
    MOV dword ptr [ESP + 0x28],EAX      ; 0058f55c
    LEA EAX,[ESP + 0x28]                ; 0058f560
    PUSH EAX                            ; 0058f564
    CALL dword ptr CS:[0x5c85d4]        ; 0058f565 | PTR_GlobalMemoryStatus_005c85d4
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058f56c
    PUSH 0x26652bc                      ; 0058f570
    MOV EDX,dword ptr [0x026652b8]      ; 0058f575 | DAT_026652b8
    MOV [0x02664638],EAX                ; 0058f57b | DAT_02664638
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058f580
    PUSH EDX                            ; 0058f584
    MOV [0x0266463c],EAX                ; 0058f585 | DAT_0266463c
    CALL core_main.c_initializeGameSystems_FUN_004e46c0 ; 0058f58a
        ;   XREF to: 004e46c0 (UNCONDITIONAL_CALL)  ; void core_main.c_initializeGameSystems_FUN_004e46c0(int argc, char * * argv)
    ADD ESP,0x8                         ; 0058f58f
    CALL core_main.c_enterMainGameMenu_FUN_004e46b0 ; 0058f592
        ;   XREF to: 004e46b0 (UNCONDITIONAL_CALL)  ; int core_main.c_enterMainGameMenu_FUN_004e46b0()
    CALL core_main.c_FUN_004e4e20       ; 0058f597
        ;   XREF to: 004e4e20 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4e20()
    PUSH 0x0                            ; 0058f59c
    CALL dword ptr CS:[0x5c8534]        ; 0058f59e | PTR_ExitProcess_005c8534
    DEC EAX                             ; 0058f5b1
        ;   Label: LAB_0058f5b1
    TEST EAX,EAX                        ; 0058f5b2
    JG 0x0058f456                       ; 0058f5b4
        ;   XREF to: 0058f456 (CONDITIONAL_JUMP)  ; LAB_0058f456
    JMP 0x0058f46b                      ; 0058f5ba
        ;   XREF to: 0058f46b (UNCONDITIONAL_JUMP)  ; LAB_0058f46b
    PUSH 0x1                            ; 0058f5bf
        ;   Label: LAB_0058f5bf
    CALL dword ptr CS:[0x5c8534]        ; 0058f5c1 | PTR_ExitProcess_005c8534

