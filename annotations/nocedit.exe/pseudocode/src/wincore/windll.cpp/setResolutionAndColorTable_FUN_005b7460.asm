; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460(int width,int height,int bits_per_pixel)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
;
; XREF[2]:
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 at 005ed350
;   wincore_wddvmem.cpp_videoRestore_FUN_005edc80 at 005edcb2
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   ushort[256] g_ColorTable16
;   char[768] g_SourcePaletteData
;   int g_UseExternalRenderer
;   int g_FrameBufferTestResult
;   APIDLL_setVideoMode2* g_APIDLL_setVideoMode2
;   APIDLL_setFogColor* g_APIDLL_setFogColor
;   APIDLL_setColorTable16* g_APIDLL_setColorTable16
;   int g_ExternalRendererActive
;   int g_FogColorRed
;   int g_FogColorGreen
;   int g_FogColorBlue
;   HWND g_StoredWindowHandle
;   int g_ExternalBitsPerPixel
;
; Called Functions:
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
;   wincore_windll.cpp_lockFrame_FUN_005b7210
;   wincore_windll.cpp_unlockFrame_FUN_005b7250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7460
        ;   Label: wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
    PUSH ESI                            ; 005b7461
    PUSH EDI                            ; 005b7462
    PUSH EBP                            ; 005b7463
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b7464
    XOR EDX,EDX                         ; 005b7468
    MOV dword ptr [0x03f6b888],EDX      ; 005b746a | g_FrameBufferTestResult
    CMP EBX,0x10                        ; 005b7470
    JGE 0x005b747a                      ; 005b7473
        ;   XREF to: 005b747a (CONDITIONAL_JUMP)  ; LAB_005b747a
    MOV EBX,0x10                        ; 005b7475
    CMP dword ptr [0x03f6b978],0x0      ; 005b747a | g_ExternalRendererActive
        ;   Label: LAB_005b747a
    JNZ 0x005b749a                      ; 005b7481
        ;   XREF to: 005b749a (CONDITIONAL_JUMP)  ; LAB_005b749a
    MOV ESI,dword ptr [0x03f6b98c]      ; 005b7483 | g_StoredWindowHandle
    PUSH ESI                            ; 005b7489
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 ; 005b748a
        ;   XREF to: 005b6750 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
    ADD ESP,0x4                         ; 005b748f
    TEST EAX,EAX                        ; 005b7492
    JZ 0x005b7545                       ; 005b7494
        ;   XREF to: 005b7545 (CONDITIONAL_JUMP)  ; LAB_005b7545
    PUSH 0x2cf6a9c                      ; 005b749a | g_ScreenBufferArray
        ;   Label: LAB_005b749a
    PUSH EBX                            ; 005b749f
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b74a0
    PUSH EDI                            ; 005b74a4
    MOV EBP,dword ptr [ESP + 0x20]      ; 005b74a5
    PUSH EBP                            ; 005b74a9
    CALL dword ptr [0x03f6b89c]         ; 005b74aa | g_APIDLL_setVideoMode2
    ADD ESP,0x10                        ; 005b74b0
    TEST EAX,EAX                        ; 005b74b3
    JZ 0x005b756f                       ; 005b74b5
        ;   XREF to: 005b756f (CONDITIONAL_JUMP)  ; LAB_005b756f
    PUSH 0x2d01020                      ; 005b74bb | g_ColorTable16
    PUSH 0x2d01f48                      ; 005b74c0 | g_SourcePaletteData
    CALL dword ptr [0x03f6b900]         ; 005b74c5 | g_APIDLL_setColorTable16
    ADD ESP,0x8                         ; 005b74cb
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0 ; 005b74ce
        ;   XREF to: 004f41c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0()
    MOV EDX,dword ptr [0x03f6b988]      ; 005b74d3 | g_FogColorBlue
    PUSH EDX                            ; 005b74d9
    MOV ECX,dword ptr [0x03f6b984]      ; 005b74da | g_FogColorGreen
    PUSH ECX                            ; 005b74e0
    MOV ESI,dword ptr [0x03f6b980]      ; 005b74e1 | g_FogColorRed
    PUSH ESI                            ; 005b74e7
    MOV EDI,0x1                         ; 005b74e8
    CALL dword ptr [0x03f6b8f0]         ; 005b74ed | g_APIDLL_setFogColor
    ADD ESP,0xc                         ; 005b74f3
    MOV dword ptr [0x02d03e94],EDI      ; 005b74f6 | g_UseExternalRenderer
    MOV dword ptr [0x03f6b990],EBX      ; 005b74fc | g_ExternalBitsPerPixel
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 005b7502
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
    MOV EBP,dword ptr [0x0067939c]      ; 005b7507 | g_BitsPerPixel
    CMP EBP,0x10                        ; 005b750d
    JNZ 0x005b754a                      ; 005b7510
        ;   XREF to: 005b754a (CONDITIONAL_JUMP)  ; LAB_005b754a
    MOV EAX,[0x02cf6a9c]                ; 005b7512 | g_ScreenBufferArray
    MOV DX,word ptr [EAX]               ; 005b7517
    MOV word ptr [EAX],0xabcd           ; 005b751a
    CMP word ptr [EAX],0xabcd           ; 005b751f
    SETNZ BL                            ; 005b7524
    AND EBX,0xff                        ; 005b7527
    MOV word ptr [EAX],DX               ; 005b752d
    MOV dword ptr [0x03f6b888],EBX      ; 005b7530 | g_FrameBufferTestResult
        ;   Label: LAB_005b7530
    PUSH 0x0                            ; 005b7536
        ;   Label: LAB_005b7536
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 005b7538
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    MOV EAX,0x1                         ; 005b753d
    ADD ESP,0x4                         ; 005b7542
    POP EBP                             ; 005b7545
        ;   Label: LAB_005b7545
    POP EDI                             ; 005b7546
    POP ESI                             ; 005b7547
    POP EBX                             ; 005b7548
    RET                                 ; 005b7549
    CMP EBP,0x20                        ; 005b754a
        ;   Label: LAB_005b754a
    JNZ 0x005b7536                      ; 005b754d
        ;   XREF to: 005b7536 (CONDITIONAL_JUMP)  ; LAB_005b7536
    MOV EAX,[0x02cf6a9c]                ; 005b754f | g_ScreenBufferArray
    MOV EDX,dword ptr [EAX]             ; 005b7554
    MOV dword ptr [EAX],0xaabbccdd      ; 005b7556
    CMP dword ptr [EAX],0xaabbccdd      ; 005b755c
    SETNZ BL                            ; 005b7562
    AND EBX,0xff                        ; 005b7565
    MOV dword ptr [EAX],EDX             ; 005b756b
    JMP 0x005b7530                      ; 005b756d
        ;   XREF to: 005b7530 (UNCONDITIONAL_JUMP)  ; LAB_005b7530
    MOV [0x02d03e94],EAX                ; 005b756f | g_UseExternalRenderer
        ;   Label: LAB_005b756f
    POP EBP                             ; 005b7574
    POP EDI                             ; 005b7575
    POP ESI                             ; 005b7576
    POP EBX                             ; 005b7577
    RET                                 ; 005b7578

