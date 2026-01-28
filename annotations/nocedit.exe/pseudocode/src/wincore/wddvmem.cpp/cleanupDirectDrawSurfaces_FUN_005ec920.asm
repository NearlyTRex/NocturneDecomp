; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005ec920(void)
;
;
; Referenced Globals:
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec920
        ;   Label: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005ec920
    PUSH EDI                            ; 005ec921
    PUSH EBP                            ; 005ec922
    MOV EDX,dword ptr [0x03f9592c]      ; 005ec923 | g_DirectDrawUnknown
    TEST EDX,EDX                        ; 005ec929
    JNZ 0x005ec955                      ; 005ec92b
        ;   XREF to: 005ec955 (CONDITIONAL_JUMP)  ; LAB_005ec955
    MOV EBX,dword ptr [0x03f95928]      ; 005ec92d | g_SoftwareRenderSurface
        ;   Label: LAB_005ec92d
    TEST EBX,EBX                        ; 005ec933
    JZ 0x005ec947                       ; 005ec935
        ;   XREF to: 005ec947 (CONDITIONAL_JUMP)  ; LAB_005ec947
    PUSH ESI                            ; 005ec937
    PUSH EBX                            ; 005ec938
    MOV EDX,dword ptr [EBX]             ; 005ec939
    XOR ESI,ESI                         ; 005ec93b
    CALL dword ptr [EDX + 0x8]          ; 005ec93d
    MOV dword ptr [0x03f95928],ESI      ; 005ec940 | g_SoftwareRenderSurface
    POP ESI                             ; 005ec946
    MOV EDI,dword ptr [0x03f95924]      ; 005ec947 | g_DirectDrawSurface
        ;   Label: LAB_005ec947
    TEST EDI,EDI                        ; 005ec94d
    JNZ 0x005ec967                      ; 005ec94f
        ;   XREF to: 005ec967 (CONDITIONAL_JUMP)  ; LAB_005ec967
    POP EBP                             ; 005ec951
    POP EDI                             ; 005ec952
    POP EBX                             ; 005ec953
    RET                                 ; 005ec954
    MOV EAX,EDX                         ; 005ec955
        ;   Label: LAB_005ec955
    PUSH EAX                            ; 005ec957
    MOV EDX,dword ptr [EDX]             ; 005ec958
    CALL dword ptr [EDX + 0x8]          ; 005ec95a
    XOR ECX,ECX                         ; 005ec95d
    MOV dword ptr [0x03f9592c],ECX      ; 005ec95f | g_DirectDrawUnknown
    JMP 0x005ec92d                      ; 005ec965
        ;   XREF to: 005ec92d (UNCONDITIONAL_JUMP)  ; LAB_005ec92d
    PUSH EDI                            ; 005ec967
        ;   Label: LAB_005ec967
    MOV EDX,dword ptr [EDI]             ; 005ec968
    XOR EBP,EBP                         ; 005ec96a
    CALL dword ptr [EDX + 0x8]          ; 005ec96c
    MOV dword ptr [0x03f95924],EBP      ; 005ec96f | g_DirectDrawSurface
    POP EBP                             ; 005ec975
    POP EDI                             ; 005ec976
    POP EBX                             ; 005ec977
    RET                                 ; 005ec978

