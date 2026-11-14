; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00552880(void)
;
;
; Referenced Globals:
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552880
        ;   Label: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_00552880
    PUSH EDI                            ; 00552881
    PUSH EBP                            ; 00552882
    MOV EDX,dword ptr [0x02ddf55c]      ; 00552883 | g_DirectDrawUnknown
    TEST EDX,EDX                        ; 00552889
    JNZ 0x005528b5                      ; 0055288b
        ;   XREF to: 005528b5 (CONDITIONAL_JUMP)  ; LAB_005528b5
    MOV EBX,dword ptr [0x02ddf558]      ; 0055288d | g_SoftwareRenderSurface
        ;   Label: LAB_0055288d
    TEST EBX,EBX                        ; 00552893
    JZ 0x005528a7                       ; 00552895
        ;   XREF to: 005528a7 (CONDITIONAL_JUMP)  ; LAB_005528a7
    PUSH ESI                            ; 00552897
    PUSH EBX                            ; 00552898
    MOV EDX,dword ptr [EBX]             ; 00552899
    XOR ESI,ESI                         ; 0055289b
    CALL dword ptr [EDX + 0x8]          ; 0055289d
    MOV dword ptr [0x02ddf558],ESI      ; 005528a0 | g_SoftwareRenderSurface
    POP ESI                             ; 005528a6
    MOV EDI,dword ptr [0x02ddf554]      ; 005528a7 | g_DirectDrawSurface
        ;   Label: LAB_005528a7
    TEST EDI,EDI                        ; 005528ad
    JNZ 0x005528c7                      ; 005528af
        ;   XREF to: 005528c7 (CONDITIONAL_JUMP)  ; LAB_005528c7
    POP EBP                             ; 005528b1
    POP EDI                             ; 005528b2
    POP EBX                             ; 005528b3
    RET                                 ; 005528b4
    MOV EAX,EDX                         ; 005528b5
        ;   Label: LAB_005528b5
    PUSH EAX                            ; 005528b7
    MOV EDX,dword ptr [EDX]             ; 005528b8
    CALL dword ptr [EDX + 0x8]          ; 005528ba
    XOR ECX,ECX                         ; 005528bd
    MOV dword ptr [0x02ddf55c],ECX      ; 005528bf | g_DirectDrawUnknown
    JMP 0x0055288d                      ; 005528c5
        ;   XREF to: 0055288d (UNCONDITIONAL_JUMP)  ; LAB_0055288d
    PUSH EDI                            ; 005528c7
        ;   Label: LAB_005528c7
    MOV EDX,dword ptr [EDI]             ; 005528c8
    XOR EBP,EBP                         ; 005528ca
    CALL dword ptr [EDX + 0x8]          ; 005528cc
    MOV dword ptr [0x02ddf554],EBP      ; 005528cf | g_DirectDrawSurface
    POP EBP                             ; 005528d5
    POP EDI                             ; 005528d6
    POP EBX                             ; 005528d7
    RET                                 ; 005528d8

