; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_startup_c_initialize_runtime_FUN_0060245c(HMODULE hModule,void *pThreadParam,int unused)
;
; Parameters:
; HMODULE          Stack[0x14]:4   hModule
; void *           Stack[0x18]:4   pThreadParam
; int              Stack[0x1c]:4   unused
;
; XREF[1]:
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8 at 006026ba
;
; Referenced Globals:
;   ExitProcess* g_ExitProcessFunc = 00211d12
;   GetCommandLineA* g_GetCommandLineAFunc = 00211df8
;   GetCommandLineW* g_GetCommandLineWFunc = 00211e0a
;   GetEnvironmentStrings* g_GetEnvironmentStringsFunc = 00211eae
;   GetModuleFileNameA* g_GetModuleFileNameAFunc = 00211f42
;   GetVersion* g_GetVersionFunc = 00211fca
;   char[36] g_EmptyStringBuffer
;   uchar[257] g_CharacterClassificationTable
;   DWORD g_WinMainCmdShow = 0x0
;   char* g_ExeFileNameA = 00000000
;   char* g_DllFileNameA = 00000000
;   WCHAR* g_CommandLineArgsW = 00000000
;   WCHAR* g_ExeFileNameW = 00000000
;   WCHAR* g_DllFileNameW = 00000000
;   char* g_EnvironmentStrings = 00000000
;   ... and 16 more
;
; Called Functions:
;   crt_io.c_InitializeStandardHandles_FUN_00608b20
;   crt_startup.c_GetModuleFileNameCompat_FUN_0060a560
;   crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
;   crt_string.c_strdup_FUN_0060a610
;   crt_string.c_wcsdup_FUN_0060a660
;   ExitProcess
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060245c
        ;   Label: crt_startup.c_initialize_runtime_FUN_0060245c
    PUSH ESI                            ; 0060245d
    PUSH EDI                            ; 0060245e
    PUSH EBP                            ; 0060245f
    MOV ESI,dword ptr [ESP + 0x14]      ; 00602460
    MOV EDX,dword ptr [ESP + 0x18]      ; 00602464
    PUSH EDX                            ; 00602468
    MOV dword ptr [0x03f9b220],ESI      ; 00602469 | g_EmergencyExitFlag
    CALL crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c ; 0060246f
        ;   XREF to: 0060a23c (UNCONDITIONAL_CALL)  ; void * crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c(void * pThreadData)
    ADD ESP,0x4                         ; 00602474
    MOV [0x03f9b22c],EAX                ; 00602477 | g_CurrentThreadTlsBlock
    TEST EAX,EAX                        ; 0060247c
    JNZ 0x00602491                      ; 0060247e
        ;   XREF to: 00602491 (CONDITIONAL_JUMP)  ; LAB_00602491
    TEST ESI,ESI                        ; 00602480
    JNZ 0x006026a1                      ; 00602482
        ;   XREF to: 006026a1 (CONDITIONAL_JUMP)  ; LAB_006026a1
    PUSH 0x1                            ; 00602488
    CALL dword ptr CS:[0x611534]        ; 0060248a
        ;   XREF to: EXTERNAL:00000058 (UNCONDITIONAL_CALL)  ; g_ExitProcessFunc
    CALL crt_io.c_InitializeStandardHandles_FUN_00608b20 ; 00602491
        ;   XREF to: 00608b20 (UNCONDITIONAL_CALL)  ; int crt_io.c_InitializeStandardHandles_FUN_00608b20()
        ;   Label: LAB_00602491
    CALL dword ptr CS:[0x61158c]        ; 00602496 | g_GetEnvironmentStringsFunc
    XOR EBX,EBX                         ; 0060249d
    MOV [0x00685011],EAX                ; 0060249f | g_EnvironmentStrings
    MOV dword ptr [0x03f9b864],EBX      ; 006024a4 | g_EnvironmentBlock
    CALL dword ptr CS:[0x6115c8]        ; 006024aa | g_GetVersionFunc
    MOV EDX,EAX                         ; 006024b1
    MOV EBX,EAX                         ; 006024b3
    MOV [0x00685017],AL                 ; 006024b5 | g_WindowsMinorVersion
    SHR EAX,0x10                        ; 006024ba
    AND EAX,0xffff                      ; 006024bd
    MOV [0x00685019],AX                 ; 006024c2 | g_WindowsPlatformVersion
    XOR EAX,EAX                         ; 006024c8
    MOV AX,[0x00685019]                 ; 006024ca | g_WindowsPlatformVersion
    AND EDX,0xffff                      ; 006024d0
    MOV [0x0068501b],EAX                ; 006024d6 | g_WindowsPlatformVersionExt
    XOR EAX,EAX                         ; 006024db
    SAR EDX,0x8                         ; 006024dd
    MOV AL,BL                           ; 006024e0
    AND EDX,0xff                        ; 006024e2
    MOV [0x0068501f],EAX                ; 006024e8 | g_WindowsVersionLow
    XOR EAX,EAX                         ; 006024ed
    PUSH 0x104                          ; 006024ef
    MOV AL,DL                           ; 006024f4
    MOV byte ptr [0x00685018],DL        ; 006024f6 | g_WindowsMajorVersion
    MOV [0x00685023],EAX                ; 006024fc | g_WindowsVersionMid
    MOV EAX,[0x0068501f]                ; 00602501 | g_WindowsVersionLow
    MOV EDX,dword ptr [0x00685023]      ; 00602506 | g_WindowsVersionMid
    SHL EAX,0x8                         ; 0060250c
    PUSH 0x3f9b230                      ; 0060250f | g_ExeFileNameBuffer_A
    OR EAX,EDX                          ; 00602514
    PUSH 0x0                            ; 00602516
    MOV [0x00685027],EAX                ; 00602518 | g_WindowsVersionCombined
    CALL dword ptr CS:[0x6115ac]        ; 0060251d | g_GetModuleFileNameAFunc
    PUSH 0x208                          ; 00602524
    PUSH 0x3f9b334                      ; 00602529 | g_ExeFileNameBuffer_W
    MOV ECX,0x3f9b230                   ; 0060252e | g_ExeFileNameBuffer_A
    PUSH 0x0                            ; 00602533
    MOV EDI,0x3f9b334                   ; 00602535 | g_ExeFileNameBuffer_W
    MOV dword ptr [0x00684fd8],ECX      ; 0060253a | g_ExeFileNameA
    CALL crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 ; 00602540
        ;   XREF to: 0060a560 (UNCONDITIONAL_CALL)  ; DWORD crt_startup.c_GetModuleFileNameCompat_FUN_0060a560(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
    ADD ESP,0xc                         ; 00602545
    MOV dword ptr [0x00684fe4],EDI      ; 00602548 | g_ExeFileNameW
    CALL dword ptr CS:[0x611568]        ; 0060254e | g_GetCommandLineAFunc
    PUSH EAX                            ; 00602555
    CALL crt_string.c_strdup_FUN_0060a610 ; 00602556
        ;   XREF to: 0060a610 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strdup_FUN_0060a610(char * str)
    MOV EDX,EAX                         ; 0060255b
    ADD ESP,0x4                         ; 0060255d
    MOV BL,byte ptr [EAX]               ; 00602560
    MOV [0x03f9b224],EAX                ; 00602562 | g_CommandLineA
    CMP BL,0x22                         ; 00602567
    JNZ 0x0060258a                      ; 0060256a
        ;   XREF to: 0060258a (CONDITIONAL_JUMP)  ; LAB_0060258a
    MOV BH,byte ptr [EAX + 0x1]         ; 0060256c
    INC EAX                             ; 0060256f
    CMP BH,BL                           ; 00602570
    JZ 0x00602582                       ; 00602572
        ;   XREF to: 00602582 (CONDITIONAL_JUMP)  ; LAB_00602582
    CMP byte ptr [EAX],0x0              ; 00602574
        ;   Label: LAB_00602574
    JZ 0x00602582                       ; 00602577
        ;   XREF to: 00602582 (CONDITIONAL_JUMP)  ; LAB_00602582
    MOV DL,byte ptr [EAX + 0x1]         ; 00602579
    INC EAX                             ; 0060257c
    CMP DL,0x22                         ; 0060257d
    JNZ 0x00602574                      ; 00602580
        ;   XREF to: 00602574 (CONDITIONAL_JUMP)  ; LAB_00602574
    CMP byte ptr [EAX],0x0              ; 00602582
        ;   Label: LAB_00602582
    JZ 0x006025a5                       ; 00602585
        ;   XREF to: 006025a5 (CONDITIONAL_JUMP)  ; LAB_006025a5
    INC EAX                             ; 00602587
    JMP 0x006025a5                      ; 00602588
        ;   XREF to: 006025a5 (UNCONDITIONAL_JUMP)  ; LAB_006025a5
    MOV DL,byte ptr [EAX]               ; 0060258a
        ;   Label: LAB_0060258a
    INC DL                              ; 0060258c
    AND EDX,0xff                        ; 0060258e
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00602594 | g_CharacterClassificationTable
    JNZ 0x006025a5                      ; 0060259b
        ;   XREF to: 006025a5 (CONDITIONAL_JUMP)  ; LAB_006025a5
    CMP byte ptr [EAX],0x0              ; 0060259d
    JZ 0x006025a5                       ; 006025a0
        ;   XREF to: 006025a5 (CONDITIONAL_JUMP)  ; LAB_006025a5
    INC EAX                             ; 006025a2
    JMP 0x0060258a                      ; 006025a3
        ;   XREF to: 0060258a (UNCONDITIONAL_JUMP)  ; LAB_0060258a
    MOV DL,byte ptr [EAX]               ; 006025a5
        ;   Label: LAB_006025a5
    INC DL                              ; 006025a7
    AND EDX,0xff                        ; 006025a9
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 006025af | g_CharacterClassificationTable
    JZ 0x006025bb                       ; 006025b6
        ;   XREF to: 006025bb (CONDITIONAL_JUMP)  ; LAB_006025bb
    INC EAX                             ; 006025b8
    JMP 0x006025a5                      ; 006025b9
        ;   XREF to: 006025a5 (UNCONDITIONAL_JUMP)  ; LAB_006025a5
    MOV [0x00684fd4],EAX                ; 006025bb | g_WinMainCmdShow
        ;   Label: LAB_006025bb
    CALL dword ptr CS:[0x61156c]        ; 006025c0 | g_GetCommandLineWFunc
    TEST EAX,EAX                        ; 006025c7
    JZ 0x00602650                       ; 006025c9
        ;   XREF to: 00602650 (CONDITIONAL_JUMP)  ; LAB_00602650
    PUSH EAX                            ; 006025cf
    CALL crt_string.c_wcsdup_FUN_0060a660 ; 006025d0
        ;   XREF to: 0060a660 (UNCONDITIONAL_CALL)  ; WCHAR * crt_string.c_wcsdup_FUN_0060a660(WCHAR * str)
    MOV EDX,EAX                         ; 006025d5
    ADD ESP,0x4                         ; 006025d7
    MOV BX,word ptr [EAX]               ; 006025da
    MOV [0x03f9b228],EAX                ; 006025dd | g_CommandLineW
    CMP BX,0x22                         ; 006025e2
    JNZ 0x00602612                      ; 006025e6
        ;   XREF to: 00602612 (CONDITIONAL_JUMP)  ; LAB_00602612
    MOV CX,word ptr [EAX + 0x2]         ; 006025e8
    ADD EAX,0x2                         ; 006025ec
    CMP CX,BX                           ; 006025ef
    JZ 0x00602607                       ; 006025f2
        ;   XREF to: 00602607 (CONDITIONAL_JUMP)  ; LAB_00602607
    CMP word ptr [EAX],0x0              ; 006025f4
        ;   Label: LAB_006025f4
    JZ 0x00602607                       ; 006025f8
        ;   XREF to: 00602607 (CONDITIONAL_JUMP)  ; LAB_00602607
    MOV DX,word ptr [EAX + 0x2]         ; 006025fa
    ADD EAX,0x2                         ; 006025fe
    CMP DX,0x22                         ; 00602601
    JNZ 0x006025f4                      ; 00602605
        ;   XREF to: 006025f4 (CONDITIONAL_JUMP)  ; LAB_006025f4
    CMP word ptr [EAX],0x0              ; 00602607
        ;   Label: LAB_00602607
    JZ 0x00602634                       ; 0060260b
        ;   XREF to: 00602634 (CONDITIONAL_JUMP)  ; LAB_00602634
    ADD EAX,0x2                         ; 0060260d
    JMP 0x00602634                      ; 00602610
        ;   XREF to: 00602634 (UNCONDITIONAL_JUMP)  ; LAB_00602634
    MOV EBX,0x2                         ; 00602612
        ;   Label: LAB_00602612
    MOV DL,byte ptr [EAX]               ; 00602617
        ;   Label: LAB_00602617
    INC DL                              ; 00602619
    AND EDX,0xff                        ; 0060261b
    TEST byte ptr [EDX + 0x6849c4],BL   ; 00602621 | g_CharacterClassificationTable
    JNZ 0x00602634                      ; 00602627
        ;   XREF to: 00602634 (CONDITIONAL_JUMP)  ; LAB_00602634
    CMP word ptr [EAX],0x0              ; 00602629
    JZ 0x00602634                       ; 0060262d
        ;   XREF to: 00602634 (CONDITIONAL_JUMP)  ; LAB_00602634
    ADD EAX,0x2                         ; 0060262f
    JMP 0x00602617                      ; 00602632
        ;   XREF to: 00602617 (UNCONDITIONAL_JUMP)  ; LAB_00602617
    MOV EBX,0x2                         ; 00602634
        ;   Label: LAB_00602634
    MOV DL,byte ptr [EAX]               ; 00602639
        ;   Label: LAB_00602639
    INC DL                              ; 0060263b
    AND EDX,0xff                        ; 0060263d
    TEST byte ptr [EDX + 0x6849c4],BL   ; 00602643 | g_CharacterClassificationTable
    JZ 0x00602655                       ; 00602649
        ;   XREF to: 00602655 (CONDITIONAL_JUMP)  ; LAB_00602655
    ADD EAX,0x2                         ; 0060264b
    JMP 0x00602639                      ; 0060264e
        ;   XREF to: 00602639 (UNCONDITIONAL_JUMP)  ; LAB_00602639
    MOV EAX,0x658fd8                    ; 00602650 | g_EmptyStringBuffer
        ;   Label: LAB_00602650
    MOV [0x00684fe0],EAX                ; 00602655 | g_CommandLineArgsW
        ;   Label: LAB_00602655
    TEST ESI,ESI                        ; 0060265a
    JZ 0x0060269c                       ; 0060265c
        ;   XREF to: 0060269c (CONDITIONAL_JUMP)  ; LAB_0060269c
    PUSH 0x104                          ; 0060265e
    PUSH 0x3f9b53c                      ; 00602663 | g_DllFileNameBuffer_A
    MOV EBP,dword ptr [ESP + 0x24]      ; 00602668
    PUSH EBP                            ; 0060266c
    CALL dword ptr CS:[0x6115ac]        ; 0060266d | g_GetModuleFileNameAFunc
    PUSH 0x208                          ; 00602674
    PUSH 0x3f9b640                      ; 00602679 | g_DllFileNameBuffer_W
    MOV EAX,0x3f9b53c                   ; 0060267e | g_DllFileNameBuffer_A
    PUSH EBP                            ; 00602683
    MOV EBX,0x3f9b640                   ; 00602684 | g_DllFileNameBuffer_W
    MOV [0x00684fdc],EAX                ; 00602689 | g_DllFileNameA
    CALL crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 ; 0060268e
        ;   XREF to: 0060a560 (UNCONDITIONAL_CALL)  ; DWORD crt_startup.c_GetModuleFileNameCompat_FUN_0060a560(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
    ADD ESP,0xc                         ; 00602693
    MOV dword ptr [0x00684fe8],EBX      ; 00602696 | g_DllFileNameW
    MOV EAX,0x1                         ; 0060269c
        ;   Label: LAB_0060269c
    POP EBP                             ; 006026a1
        ;   Label: LAB_006026a1
    POP EDI                             ; 006026a2
    POP ESI                             ; 006026a3
    POP EBX                             ; 006026a4
    RET                                 ; 006026a5

