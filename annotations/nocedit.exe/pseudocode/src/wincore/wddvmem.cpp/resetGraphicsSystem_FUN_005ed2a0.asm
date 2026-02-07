; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ed2a0(void)
;
;
; XREF[1]:
;   engine_2d.c_resetGraphicsSystem_FUN_005ed2a0 at 00402a70
;
; Referenced Globals:
;   TerminatedCString s_You_have_hit_a_kludge_in_006577da
;   TerminatedCString s_You_are_setting_accelera_00657800
;   TerminatedCString s_the_appropriate_bit_dept_00657832
;   TerminatedCString s_I_am_forcing_the_screen__00657853
;   TerminatedCString s_Press_any_key_to_continu_00657884
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int g_UseExternalRenderer
;   int g_FullscreenMode
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   int g_GraphicsResetFlag
;   ... and 1 more
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ed2a0
        ;   Label: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0
    PUSH ESI                            ; 005ed2a1
    PUSH EDI                            ; 005ed2a2
    PUSH EBP                            ; 005ed2a3
    MOV EDX,0x1                         ; 005ed2a4
    MOV ECX,dword ptr [0x03f6b878]      ; 005ed2a9 | g_FullscreenMode
    MOV dword ptr [0x03f95938],EDX      ; 005ed2af | g_GraphicsResetFlag
    TEST ECX,ECX                        ; 005ed2b5
    JZ 0x005ed40c                       ; 005ed2b7
        ;   XREF to: 005ed40c (CONDITIONAL_JUMP)  ; LAB_005ed40c
    CMP dword ptr [0x0067939c],0x10     ; 005ed2bd | g_BitsPerPixel
    JL 0x005ed411                       ; 005ed2c4
        ;   XREF to: 005ed411 (CONDITIONAL_JUMP)  ; LAB_005ed411
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005ed2ca
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_005ed2ca
    MOV EBP,dword ptr [0x03f9592c]      ; 005ed2cf | g_DirectDrawUnknown
    TEST EBP,EBP                        ; 005ed2d5
    JZ 0x005ed2e7                       ; 005ed2d7
        ;   XREF to: 005ed2e7 (CONDITIONAL_JUMP)  ; LAB_005ed2e7
    PUSH EBP                            ; 005ed2d9
    MOV EDX,dword ptr [EBP]             ; 005ed2da
    CALL dword ptr [EDX + 0x8]          ; 005ed2dd
    XOR EAX,EAX                         ; 005ed2e0
    MOV [0x03f9592c],EAX                ; 005ed2e2 | g_DirectDrawUnknown
    MOV EDX,dword ptr [0x03f95928]      ; 005ed2e7 | g_SoftwareRenderSurface
        ;   Label: LAB_005ed2e7
    TEST EDX,EDX                        ; 005ed2ed
    JZ 0x005ed301                       ; 005ed2ef
        ;   XREF to: 005ed301 (CONDITIONAL_JUMP)  ; LAB_005ed301
    MOV EAX,EDX                         ; 005ed2f1
    PUSH EAX                            ; 005ed2f3
    MOV EDX,dword ptr [EDX]             ; 005ed2f4
    CALL dword ptr [EDX + 0x8]          ; 005ed2f6
    XOR ECX,ECX                         ; 005ed2f9
    MOV dword ptr [0x03f95928],ECX      ; 005ed2fb | g_SoftwareRenderSurface
    MOV EBX,dword ptr [0x03f95924]      ; 005ed301 | g_DirectDrawSurface
        ;   Label: LAB_005ed301
    TEST EBX,EBX                        ; 005ed307
    JZ 0x005ed319                       ; 005ed309
        ;   XREF to: 005ed319 (CONDITIONAL_JUMP)  ; LAB_005ed319
    PUSH EBX                            ; 005ed30b
    MOV EDX,dword ptr [EBX]             ; 005ed30c
    XOR ESI,ESI                         ; 005ed30e
    CALL dword ptr [EDX + 0x8]          ; 005ed310
    MOV dword ptr [0x03f95924],ESI      ; 005ed313 | g_DirectDrawSurface
    MOV EDI,dword ptr [0x03f95920]      ; 005ed319 | g_DirectDrawObject
        ;   Label: LAB_005ed319
    TEST EDI,EDI                        ; 005ed31f
    JZ 0x005ed33c                       ; 005ed321
        ;   XREF to: 005ed33c (CONDITIONAL_JUMP)  ; LAB_005ed33c
    PUSH EDI                            ; 005ed323
    MOV EDX,dword ptr [EDI]             ; 005ed324
    CALL dword ptr [EDX + 0x4c]         ; 005ed326
    MOV EAX,[0x03f95920]                ; 005ed329 | g_DirectDrawObject
    PUSH EAX                            ; 005ed32e
    MOV EDX,dword ptr [EAX]             ; 005ed32f
    XOR EBP,EBP                         ; 005ed331
    CALL dword ptr [EDX + 0x8]          ; 005ed333
    MOV dword ptr [0x03f95920],EBP      ; 005ed336 | g_DirectDrawObject
    MOV EAX,[0x0067939c]                ; 005ed33c | g_BitsPerPixel
        ;   Label: LAB_005ed33c
    PUSH EAX                            ; 005ed341
    MOV EDX,dword ptr [0x00679398]      ; 005ed342 | g_WindowHeight
    PUSH EDX                            ; 005ed348
    MOV ECX,dword ptr [0x00679394]      ; 005ed349 | g_WindowWidth
    PUSH ECX                            ; 005ed34f
    CALL wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 ; 005ed350
        ;   XREF to: 005b7460 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005ed355
    TEST EAX,EAX                        ; 005ed358
    JNZ 0x005ed40c                      ; 005ed35a
        ;   XREF to: 005ed40c (CONDITIONAL_JUMP)  ; LAB_005ed40c
    MOV EDI,dword ptr [0x03f9592c]      ; 005ed360 | g_DirectDrawUnknown
    MOV [0x03f6b878],EAX                ; 005ed366 | g_FullscreenMode
    MOV [0x02d03e94],EAX                ; 005ed36b | g_UseExternalRenderer
    TEST EDI,EDI                        ; 005ed370
    JNZ 0x005ed492                      ; 005ed372
        ;   XREF to: 005ed492 (CONDITIONAL_JUMP)  ; LAB_005ed492
    MOV EAX,[0x03f95928]                ; 005ed378 | g_SoftwareRenderSurface
        ;   Label: LAB_005ed378
    TEST EAX,EAX                        ; 005ed37d
    JZ 0x005ed38f                       ; 005ed37f
        ;   XREF to: 005ed38f (CONDITIONAL_JUMP)  ; LAB_005ed38f
    PUSH EAX                            ; 005ed381
    MOV EDX,dword ptr [EAX]             ; 005ed382
    CALL dword ptr [EDX + 0x8]          ; 005ed384
    XOR EDX,EDX                         ; 005ed387
    MOV dword ptr [0x03f95928],EDX      ; 005ed389 | g_SoftwareRenderSurface
    MOV ECX,dword ptr [0x03f95924]      ; 005ed38f | g_DirectDrawSurface
        ;   Label: LAB_005ed38f
    TEST ECX,ECX                        ; 005ed395
    JZ 0x005ed3a7                       ; 005ed397
        ;   XREF to: 005ed3a7 (CONDITIONAL_JUMP)  ; LAB_005ed3a7
    PUSH ECX                            ; 005ed399
    MOV EDX,dword ptr [ECX]             ; 005ed39a
    XOR EBX,EBX                         ; 005ed39c
    CALL dword ptr [EDX + 0x8]          ; 005ed39e
    MOV dword ptr [0x03f95924],EBX      ; 005ed3a1 | g_DirectDrawSurface
    MOV ESI,dword ptr [0x03f95920]      ; 005ed3a7 | g_DirectDrawObject
        ;   Label: LAB_005ed3a7
    TEST ESI,ESI                        ; 005ed3ad
    JZ 0x005ed3ca                       ; 005ed3af
        ;   XREF to: 005ed3ca (CONDITIONAL_JUMP)  ; LAB_005ed3ca
    PUSH ESI                            ; 005ed3b1
    MOV EDX,dword ptr [ESI]             ; 005ed3b2
    CALL dword ptr [EDX + 0x4c]         ; 005ed3b4
    MOV EAX,[0x03f95920]                ; 005ed3b7 | g_DirectDrawObject
    PUSH EAX                            ; 005ed3bc
    MOV EDX,dword ptr [EAX]             ; 005ed3bd
    XOR EDI,EDI                         ; 005ed3bf
    CALL dword ptr [EDX + 0x8]          ; 005ed3c1
    MOV dword ptr [0x03f95920],EDI      ; 005ed3c4 | g_DirectDrawObject
    PUSH 0x0                            ; 005ed3ca
        ;   Label: LAB_005ed3ca
    PUSH 0x3f95920                      ; 005ed3cc | g_DirectDrawObject
    PUSH 0x0                            ; 005ed3d1
    CALL crt_ddraw.c_DirectDrawCreate   ; 005ed3d3
        ;   XREF to: 00610ece (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lpGUID, LPDIRECTDRAW * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 005ed3d8
    JNZ 0x005ed3f0                      ; 005ed3da
        ;   XREF to: 005ed3f0 (CONDITIONAL_JUMP)  ; LAB_005ed3f0
    PUSH 0x11                           ; 005ed3dc
    MOV EBP,dword ptr [0x03f98468]      ; 005ed3de | g_MainWindowHandle
    MOV EAX,[0x03f95920]                ; 005ed3e4 | g_DirectDrawObject
    PUSH EBP                            ; 005ed3e9
    MOV EDX,dword ptr [EAX]             ; 005ed3ea
    PUSH EAX                            ; 005ed3ec
    CALL dword ptr [EDX + 0x50]         ; 005ed3ed
    MOV EAX,[0x0067939c]                ; 005ed3f0 | g_BitsPerPixel
        ;   Label: LAB_005ed3f0
    PUSH EAX                            ; 005ed3f5
    MOV EDX,dword ptr [0x00679398]      ; 005ed3f6 | g_WindowHeight
    PUSH EDX                            ; 005ed3fc
    MOV ECX,dword ptr [0x00679394]      ; 005ed3fd | g_WindowWidth
    PUSH ECX                            ; 005ed403
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 005ed404
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005ed409
    POP EBP                             ; 005ed40c
        ;   Label: LAB_005ed40c
    POP EDI                             ; 005ed40d
    POP ESI                             ; 005ed40e
    POP EBX                             ; 005ed40f
    RET                                 ; 005ed410
    PUSH 0x10                           ; 005ed411
        ;   Label: LAB_005ed411
    MOV ESI,dword ptr [0x00679398]      ; 005ed413 | g_WindowHeight
    PUSH ESI                            ; 005ed419
    MOV EDI,dword ptr [0x00679394]      ; 005ed41a | g_WindowWidth
    PUSH EDI                            ; 005ed420
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 005ed421
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005ed426
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005ed429
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 005ed42e
    PUSH 0x0                            ; 005ed430
    PUSH 0x6577da                       ; 005ed432 | = "You have hit a kludge in the program."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005ed437
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ed43c
    PUSH 0x16                           ; 005ed43f
    PUSH 0x0                            ; 005ed441
    PUSH 0x657800                       ; 005ed443 | = "You are setting acceleration mode wit..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005ed448
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ed44d
    PUSH 0x21                           ; 005ed450
    PUSH 0x0                            ; 005ed452
    PUSH 0x657832                       ; 005ed454 | = "the appropriate bit depth first."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005ed459
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ed45e
    PUSH 0x2c                           ; 005ed461
    PUSH 0x0                            ; 005ed463
    PUSH 0x657853                       ; 005ed465 | = "I am forcing the screen to switch to ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005ed46a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ed46f
    PUSH 0x42                           ; 005ed472
    PUSH 0x0                            ; 005ed474
    PUSH 0x657884                       ; 005ed476 | = "Press any key to continue."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005ed47b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005ed480
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005ed483
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 005ed488
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x005ed2ca                      ; 005ed48d
        ;   XREF to: 005ed2ca (UNCONDITIONAL_JUMP)  ; LAB_005ed2ca
    PUSH EDI                            ; 005ed492
        ;   Label: LAB_005ed492
    MOV EDX,dword ptr [EDI]             ; 005ed493
    XOR EBP,EBP                         ; 005ed495
    CALL dword ptr [EDX + 0x8]          ; 005ed497
    MOV dword ptr [0x03f9592c],EBP      ; 005ed49a | g_DirectDrawUnknown
    JMP 0x005ed378                      ; 005ed4a0
        ;   XREF to: 005ed378 (UNCONDITIONAL_JUMP)  ; LAB_005ed378

