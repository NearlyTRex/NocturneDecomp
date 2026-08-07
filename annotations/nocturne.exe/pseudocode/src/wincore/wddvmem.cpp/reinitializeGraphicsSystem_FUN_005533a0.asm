; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005533a0(void)
;
;
; XREF[1]:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00403770 at 00403770
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int INT_02dc9d60
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   undefined4 DAT_02ddf568
;   undefined4 DAT_02de2098
;
; Called Functions:
;   DirectDrawCreate
;   engine_special.cpp_restoreVideoMode_FUN_005325f0
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005533a0
        ;   Label: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005533a0
    XOR EDX,EDX                         ; 005533a1
    MOV ECX,dword ptr [0x02dc9d60]      ; 005533a3 | INT_02dc9d60
    MOV dword ptr [0x02ddf568],EDX      ; 005533a9 | DAT_02ddf568
    TEST ECX,ECX                        ; 005533af
    JNZ 0x005533b5                      ; 005533b1
        ;   XREF to: 005533b5 (CONDITIONAL_JUMP)  ; LAB_005533b5
    POP EBP                             ; 005533b3
    RET                                 ; 005533b4
    PUSH EDI                            ; 005533b5
        ;   Label: LAB_005533b5
    PUSH ESI                            ; 005533b6
    PUSH EBX                            ; 005533b7
    CALL engine_special.cpp_restoreVideoMode_FUN_005325f0 ; 005533b8
        ;   XREF to: 005325f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreVideoMode_FUN_005325f0()
    MOV EBX,dword ptr [0x02ddf55c]      ; 005533bd | g_DirectDrawUnknown
    TEST EBX,EBX                        ; 005533c3
    JZ 0x005533d5                       ; 005533c5
        ;   XREF to: 005533d5 (CONDITIONAL_JUMP)  ; LAB_005533d5
    PUSH EBX                            ; 005533c7
    MOV EDX,dword ptr [EBX]             ; 005533c8
    XOR ESI,ESI                         ; 005533ca
    CALL dword ptr [EDX + 0x8]          ; 005533cc
    MOV dword ptr [0x02ddf55c],ESI      ; 005533cf | g_DirectDrawUnknown
    MOV EDI,dword ptr [0x02ddf558]      ; 005533d5 | g_SoftwareRenderSurface
        ;   Label: LAB_005533d5
    TEST EDI,EDI                        ; 005533db
    JZ 0x005533ed                       ; 005533dd
        ;   XREF to: 005533ed (CONDITIONAL_JUMP)  ; LAB_005533ed
    PUSH EDI                            ; 005533df
    MOV EDX,dword ptr [EDI]             ; 005533e0
    XOR EBP,EBP                         ; 005533e2
    CALL dword ptr [EDX + 0x8]          ; 005533e4
    MOV dword ptr [0x02ddf558],EBP      ; 005533e7 | g_SoftwareRenderSurface
    MOV EAX,[0x02ddf554]                ; 005533ed | g_DirectDrawSurface
        ;   Label: LAB_005533ed
    TEST EAX,EAX                        ; 005533f2
    JZ 0x00553404                       ; 005533f4
        ;   XREF to: 00553404 (CONDITIONAL_JUMP)  ; LAB_00553404
    PUSH EAX                            ; 005533f6
    MOV EDX,dword ptr [EAX]             ; 005533f7
    CALL dword ptr [EDX + 0x8]          ; 005533f9
    XOR EDX,EDX                         ; 005533fc
    MOV dword ptr [0x02ddf554],EDX      ; 005533fe | g_DirectDrawSurface
    MOV ECX,dword ptr [0x02ddf550]      ; 00553404 | g_DirectDrawObject
        ;   Label: LAB_00553404
    TEST ECX,ECX                        ; 0055340a
    JZ 0x00553427                       ; 0055340c
        ;   XREF to: 00553427 (CONDITIONAL_JUMP)  ; LAB_00553427
    PUSH ECX                            ; 0055340e
    MOV EDX,dword ptr [ECX]             ; 0055340f
    CALL dword ptr [EDX + 0x4c]         ; 00553411
    MOV EAX,[0x02ddf550]                ; 00553414 | g_DirectDrawObject
    PUSH EAX                            ; 00553419
    MOV EDX,dword ptr [EAX]             ; 0055341a
    XOR EBX,EBX                         ; 0055341c
    CALL dword ptr [EDX + 0x8]          ; 0055341e
    MOV dword ptr [0x02ddf550],EBX      ; 00553421 | g_DirectDrawObject
    PUSH 0x0                            ; 00553427
        ;   Label: LAB_00553427
    PUSH 0x2ddf550                      ; 00553429 | g_DirectDrawObject
    PUSH 0x0                            ; 0055342e
    CALL DirectDrawCreate               ; 00553430
        ;   XREF to: 00574ba8 (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 00553435
    JNZ 0x0055344d                      ; 00553437
        ;   XREF to: 0055344d (CONDITIONAL_JUMP)  ; LAB_0055344d
    PUSH 0x11                           ; 00553439
    MOV ESI,dword ptr [0x02de2098]      ; 0055343b | DAT_02de2098
    MOV EAX,[0x02ddf550]                ; 00553441 | g_DirectDrawObject
    PUSH ESI                            ; 00553446
    MOV EDX,dword ptr [EAX]             ; 00553447
    PUSH EAX                            ; 00553449
    CALL dword ptr [EDX + 0x50]         ; 0055344a
    MOV EDI,dword ptr [0x005b7624]      ; 0055344d | g_BitsPerPixel
        ;   Label: LAB_0055344d
    PUSH EDI                            ; 00553453
    MOV EBP,dword ptr [0x005b7620]      ; 00553454 | g_WindowHeight
    PUSH EBP                            ; 0055345a
    MOV EAX,[0x005b761c]                ; 0055345b | g_WindowWidth
    PUSH EAX                            ; 00553460
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 00553461
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 00553466
    POP EBX                             ; 00553469
    POP ESI                             ; 0055346a
    POP EDI                             ; 0055346b
    POP EBP                             ; 0055346c
    RET                                 ; 0055346d

