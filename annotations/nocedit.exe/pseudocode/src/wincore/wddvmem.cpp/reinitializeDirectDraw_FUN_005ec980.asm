; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005ec980(void)
;
;
; Referenced Globals:
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   HWND g_MainWindowHandle
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec980
        ;   Label: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005ec980
    PUSH EDI                            ; 005ec981
    PUSH EBP                            ; 005ec982
    MOV EDX,dword ptr [0x03f9592c]      ; 005ec983 | IUnknown * g_DirectDrawUnknown
    TEST EDX,EDX                        ; 005ec989
    JNZ 0x005ec9f9                      ; 005ec98b | LAB_005ec9f9
        ;   XREF to: 005ec9f9 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x03f95928]      ; 005ec98d | IDirectDrawSurface * g_SoftwareRenderSurface
        ;   Label: LAB_005ec98d
    TEST EBX,EBX                        ; 005ec993
    JZ 0x005ec9a7                       ; 005ec995 | LAB_005ec9a7
        ;   XREF to: 005ec9a7 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005ec997
    PUSH EBX                            ; 005ec998
    MOV EDX,dword ptr [EBX]             ; 005ec999
    XOR ESI,ESI                         ; 005ec99b
    CALL dword ptr [EDX + 0x8]          ; 005ec99d
    MOV dword ptr [0x03f95928],ESI      ; 005ec9a0 | IDirectDrawSurface * g_SoftwareRenderSurface
    POP ESI                             ; 005ec9a6
    MOV EDI,dword ptr [0x03f95924]      ; 005ec9a7 | IDirectDrawSurface * g_DirectDrawSurface
        ;   Label: LAB_005ec9a7
    TEST EDI,EDI                        ; 005ec9ad
    JZ 0x005ec9bf                       ; 005ec9af | LAB_005ec9bf
        ;   XREF to: 005ec9bf (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005ec9b1
    MOV EDX,dword ptr [EDI]             ; 005ec9b2
    XOR EBP,EBP                         ; 005ec9b4
    CALL dword ptr [EDX + 0x8]          ; 005ec9b6
    MOV dword ptr [0x03f95924],EBP      ; 005ec9b9 | IDirectDrawSurface * g_DirectDrawSurface
    MOV EAX,[0x03f95920]                ; 005ec9bf | IDirectDraw * g_DirectDrawObject
        ;   Label: LAB_005ec9bf
    TEST EAX,EAX                        ; 005ec9c4
    JZ 0x005ec9e1                       ; 005ec9c6 | LAB_005ec9e1
        ;   XREF to: 005ec9e1 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005ec9c8
    MOV EDX,dword ptr [EAX]             ; 005ec9c9
    CALL dword ptr [EDX + 0x4c]         ; 005ec9cb
    MOV EAX,[0x03f95920]                ; 005ec9ce | IDirectDraw * g_DirectDrawObject
    PUSH EAX                            ; 005ec9d3
    MOV EDX,dword ptr [EAX]             ; 005ec9d4
    CALL dword ptr [EDX + 0x8]          ; 005ec9d6
    XOR EDX,EDX                         ; 005ec9d9
    MOV dword ptr [0x03f95920],EDX      ; 005ec9db | IDirectDraw * g_DirectDrawObject
    PUSH 0x0                            ; 005ec9e1
        ;   Label: LAB_005ec9e1
    PUSH 0x3f95920                      ; 005ec9e3 | IDirectDraw * g_DirectDrawObject
    PUSH 0x0                            ; 005ec9e8
    CALL crt_ddraw.c_DirectDrawCreate   ; 005ec9ea | HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lpGUID, LPDIRECTDRAW * lplpDD, IUnknown * pUnkOuter)
        ;   XREF to: 00610ece (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005ec9ef
    JZ 0x005eca0b                       ; 005ec9f1 | LAB_005eca0b
        ;   XREF to: 005eca0b (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005ec9f3
        ;   Label: LAB_005ec9f3
    POP EBP                             ; 005ec9f5
    POP EDI                             ; 005ec9f6
    POP EBX                             ; 005ec9f7
    RET                                 ; 005ec9f8
    MOV EAX,EDX                         ; 005ec9f9
        ;   Label: LAB_005ec9f9
    PUSH EAX                            ; 005ec9fb
    MOV EDX,dword ptr [EDX]             ; 005ec9fc
    CALL dword ptr [EDX + 0x8]          ; 005ec9fe
    XOR ECX,ECX                         ; 005eca01
    MOV dword ptr [0x03f9592c],ECX      ; 005eca03 | IUnknown * g_DirectDrawUnknown
    JMP 0x005ec98d                      ; 005eca09 | LAB_005ec98d
        ;   XREF to: 005ec98d (UNCONDITIONAL_JUMP)
    PUSH 0x11                           ; 005eca0b
        ;   Label: LAB_005eca0b
    MOV ECX,dword ptr [0x03f98468]      ; 005eca0d | HWND g_MainWindowHandle
    MOV EAX,[0x03f95920]                ; 005eca13 | IDirectDraw * g_DirectDrawObject
    PUSH ECX                            ; 005eca18
    MOV EDX,dword ptr [EAX]             ; 005eca19
    PUSH EAX                            ; 005eca1b
    CALL dword ptr [EDX + 0x50]         ; 005eca1c
    TEST EAX,EAX                        ; 005eca1f
    JNZ 0x005ec9f3                      ; 005eca21 | LAB_005ec9f3
        ;   XREF to: 005ec9f3 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005eca23
    POP EBP                             ; 005eca28
    POP EDI                             ; 005eca29
    POP EBX                             ; 005eca2a
    RET                                 ; 005eca2b

