; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005ec980(void)
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
    MOV EDX,dword ptr [0x03f9592c]      ; 005ec983 | g_DirectDrawUnknown
    TEST EDX,EDX                        ; 005ec989
    JNZ 0x005ec9f9                      ; 005ec98b
        ;   XREF to: 005ec9f9 (CONDITIONAL_JUMP)  ; LAB_005ec9f9
    MOV EBX,dword ptr [0x03f95928]      ; 005ec98d | g_SoftwareRenderSurface
        ;   Label: LAB_005ec98d
    TEST EBX,EBX                        ; 005ec993
    JZ 0x005ec9a7                       ; 005ec995
        ;   XREF to: 005ec9a7 (CONDITIONAL_JUMP)  ; LAB_005ec9a7
    PUSH ESI                            ; 005ec997
    PUSH EBX                            ; 005ec998
    MOV EDX,dword ptr [EBX]             ; 005ec999
    XOR ESI,ESI                         ; 005ec99b
    CALL dword ptr [EDX + 0x8]          ; 005ec99d
    MOV dword ptr [0x03f95928],ESI      ; 005ec9a0 | g_SoftwareRenderSurface
    POP ESI                             ; 005ec9a6
    MOV EDI,dword ptr [0x03f95924]      ; 005ec9a7 | g_DirectDrawSurface
        ;   Label: LAB_005ec9a7
    TEST EDI,EDI                        ; 005ec9ad
    JZ 0x005ec9bf                       ; 005ec9af
        ;   XREF to: 005ec9bf (CONDITIONAL_JUMP)  ; LAB_005ec9bf
    PUSH EDI                            ; 005ec9b1
    MOV EDX,dword ptr [EDI]             ; 005ec9b2
    XOR EBP,EBP                         ; 005ec9b4
    CALL dword ptr [EDX + 0x8]          ; 005ec9b6
    MOV dword ptr [0x03f95924],EBP      ; 005ec9b9 | g_DirectDrawSurface
    MOV EAX,[0x03f95920]                ; 005ec9bf | g_DirectDrawObject
        ;   Label: LAB_005ec9bf
    TEST EAX,EAX                        ; 005ec9c4
    JZ 0x005ec9e1                       ; 005ec9c6
        ;   XREF to: 005ec9e1 (CONDITIONAL_JUMP)  ; LAB_005ec9e1
    PUSH EAX                            ; 005ec9c8
    MOV EDX,dword ptr [EAX]             ; 005ec9c9
    CALL dword ptr [EDX + 0x4c]         ; 005ec9cb
    MOV EAX,[0x03f95920]                ; 005ec9ce | g_DirectDrawObject
    PUSH EAX                            ; 005ec9d3
    MOV EDX,dword ptr [EAX]             ; 005ec9d4
    CALL dword ptr [EDX + 0x8]          ; 005ec9d6
    XOR EDX,EDX                         ; 005ec9d9
    MOV dword ptr [0x03f95920],EDX      ; 005ec9db | g_DirectDrawObject
    PUSH 0x0                            ; 005ec9e1
        ;   Label: LAB_005ec9e1
    PUSH 0x3f95920                      ; 005ec9e3 | g_DirectDrawObject
    PUSH 0x0                            ; 005ec9e8
    CALL crt_ddraw.c_DirectDrawCreate   ; 005ec9ea
        ;   XREF to: 00610ece (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lpGUID, LPDIRECTDRAW * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 005ec9ef
    JZ 0x005eca0b                       ; 005ec9f1
        ;   XREF to: 005eca0b (CONDITIONAL_JUMP)  ; LAB_005eca0b
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
    MOV dword ptr [0x03f9592c],ECX      ; 005eca03 | g_DirectDrawUnknown
    JMP 0x005ec98d                      ; 005eca09
        ;   XREF to: 005ec98d (UNCONDITIONAL_JUMP)  ; LAB_005ec98d
    PUSH 0x11                           ; 005eca0b
        ;   Label: LAB_005eca0b
    MOV ECX,dword ptr [0x03f98468]      ; 005eca0d | g_MainWindowHandle
    MOV EAX,[0x03f95920]                ; 005eca13 | g_DirectDrawObject
    PUSH ECX                            ; 005eca18
    MOV EDX,dword ptr [EAX]             ; 005eca19
    PUSH EAX                            ; 005eca1b
    CALL dword ptr [EDX + 0x50]         ; 005eca1c
    TEST EAX,EAX                        ; 005eca1f
    JNZ 0x005ec9f3                      ; 005eca21
        ;   XREF to: 005ec9f3 (CONDITIONAL_JUMP)  ; LAB_005ec9f3
    MOV EAX,0x1                         ; 005eca23
    POP EBP                             ; 005eca28
    POP EDI                             ; 005eca29
    POP EBX                             ; 005eca2a
    RET                                 ; 005eca2b

