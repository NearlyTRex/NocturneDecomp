; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_00553470(void)
;
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
;
; XREF[5]:
;   core_game.cpp_CGame_FUN_004a57c0 at 004a597f
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049cce5
;   engine_special.cpp_FUN_00532ba0 at 00532be7
;   engine_texture.cpp_renderTextureAtlas_FUN_00545aa0 at 00545aab
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910 at 0055394e
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_00597954
;   TerminatedCString s_openScreenDevice_Unable_0059796b
;   int g_WindowHeight = 0xc8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   undefined4 DAT_02ddf56c
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553470
        ;   Label: wincore_wddvmem.cpp_openScreenDevice_FUN_00553470
    PUSH EBP                            ; 00553471
    SUB ESP,0x6c                        ; 00553472
    MOV EDX,dword ptr [0x02ddf56c]      ; 00553475 | DAT_02ddf56c
    TEST EDX,EDX                        ; 0055347b
    JNZ 0x00553490                      ; 0055347d
        ;   XREF to: 00553490 (CONDITIONAL_JUMP)  ; LAB_00553490
    CMP dword ptr [0x01c02594],0x0      ; 0055347f | g_UseExternalRenderer
    JZ 0x00553496                       ; 00553486
        ;   XREF to: 00553496 (CONDITIONAL_JUMP)  ; LAB_00553496
    LEA EAX,[EAX]                       ; 00553488
    MOV EDX,EDX                         ; 0055348e
    ADD ESP,0x6c                        ; 00553490
        ;   Label: LAB_00553490
    POP EBP                             ; 00553493
    POP EBX                             ; 00553494
    RET                                 ; 00553495
    PUSH 0x6c                           ; 00553496
        ;   Label: LAB_00553496
    PUSH EDX                            ; 00553498
    LEA EAX,[ESP + 0x8]                 ; 00553499
    PUSH EAX                            ; 0055349d
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0055349e
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005534a3
    PUSH 0x0                            ; 005534a6
    PUSH 0x1                            ; 005534a8
    LEA ECX,[ESP + 0x8]                 ; 005534aa
    MOV EBX,0x6c                        ; 005534ae
    PUSH ECX                            ; 005534b3
    MOV EAX,[0x02ddf558]                ; 005534b4 | g_SoftwareRenderSurface
    MOV dword ptr [ESP + 0xc],EBX       ; 005534b9
    PUSH 0x0                            ; 005534bd
    MOV EDX,dword ptr [EAX]             ; 005534bf
    PUSH EAX                            ; 005534c1
    CALL dword ptr [EDX + 0x64]         ; 005534c2
    TEST EAX,EAX                        ; 005534c5
    JZ 0x005534f0                       ; 005534c7
        ;   XREF to: 005534f0 (CONDITIONAL_JUMP)  ; LAB_005534f0
    PUSH EDI                            ; 005534c9
    PUSH ESI                            ; 005534ca
    MOV ESI,0x597954                    ; 005534cb | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x255                       ; 005534d0
    PUSH 0x59796b                       ; 005534d5 | = "openScreenDevice - Unable to lock scr..."
    MOV dword ptr [0x01cc4800],ESI      ; 005534da | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 005534e0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005534e6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005534eb
    POP ESI                             ; 005534ee
    POP EDI                             ; 005534ef
    MOV EBP,dword ptr [0x005b7620]      ; 005534f0 | g_WindowHeight
        ;   Label: LAB_005534f0
    MOV EDX,dword ptr [ESP + 0x24]      ; 005534f6
    TEST EBP,EBP                        ; 005534fa
    JLE 0x00553490                      ; 005534fc
        ;   XREF to: 00553490 (CONDITIONAL_JUMP)  ; LAB_00553490
    MOV EBX,dword ptr [ESP + 0x10]      ; 005534fe
    LEA ECX,[EBP*0x4 + 0x0]             ; 00553502
    XOR EAX,EAX                         ; 00553509
    MOV dword ptr [EAX + 0x1bd2fa0],EDX ; 0055350b | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_0055350b
    ADD EAX,0x4                         ; 00553511
    ADD EDX,EBX                         ; 00553514
    CMP EAX,ECX                         ; 00553516
    JL 0x0055350b                       ; 00553518
        ;   XREF to: 0055350b (CONDITIONAL_JUMP)  ; LAB_0055350b
    ADD ESP,0x6c                        ; 0055351a
    POP EBP                             ; 0055351d
    POP EBX                             ; 0055351e
    RET                                 ; 0055351f

