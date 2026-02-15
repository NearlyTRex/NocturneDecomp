; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_shutdownDirectDraw_FUN_005eca30(void)
;
;
; Referenced Globals:
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eca30
        ;   Label: wincore_wddvmem.cpp_shutdownDirectDraw_FUN_005eca30
    PUSH EDI                            ; 005eca31
    PUSH EBP                            ; 005eca32
    MOV EDX,dword ptr [0x03f9592c]      ; 005eca33 | g_DirectDrawUnknown
    TEST EDX,EDX                        ; 005eca39
    JNZ 0x005eca81                      ; 005eca3b
        ;   XREF to: 005eca81 (CONDITIONAL_JUMP)  ; LAB_005eca81
    MOV EBX,dword ptr [0x03f95928]      ; 005eca3d | g_SoftwareRenderSurface
        ;   Label: LAB_005eca3d
    TEST EBX,EBX                        ; 005eca43
    JZ 0x005eca57                       ; 005eca45
        ;   XREF to: 005eca57 (CONDITIONAL_JUMP)  ; LAB_005eca57
    PUSH ESI                            ; 005eca47
    PUSH EBX                            ; 005eca48
    MOV EDX,dword ptr [EBX]             ; 005eca49
    XOR ESI,ESI                         ; 005eca4b
    CALL dword ptr [EDX + 0x8]          ; 005eca4d
    MOV dword ptr [0x03f95928],ESI      ; 005eca50 | g_SoftwareRenderSurface
    POP ESI                             ; 005eca56
    MOV EDI,dword ptr [0x03f95924]      ; 005eca57 | g_DirectDrawSurface
        ;   Label: LAB_005eca57
    TEST EDI,EDI                        ; 005eca5d
    JZ 0x005eca6f                       ; 005eca5f
        ;   XREF to: 005eca6f (CONDITIONAL_JUMP)  ; LAB_005eca6f
    PUSH EDI                            ; 005eca61
    MOV EDX,dword ptr [EDI]             ; 005eca62
    XOR EBP,EBP                         ; 005eca64
    CALL dword ptr [EDX + 0x8]          ; 005eca66
    MOV dword ptr [0x03f95924],EBP      ; 005eca69 | g_DirectDrawSurface
    MOV EAX,[0x03f95920]                ; 005eca6f | g_DirectDrawObject
        ;   Label: LAB_005eca6f
    TEST EAX,EAX                        ; 005eca74
    JNZ 0x005eca93                      ; 005eca76
        ;   XREF to: 005eca93 (CONDITIONAL_JUMP)  ; LAB_005eca93
    MOV EAX,0x1                         ; 005eca78
    POP EBP                             ; 005eca7d
    POP EDI                             ; 005eca7e
    POP EBX                             ; 005eca7f
    RET                                 ; 005eca80
    MOV EAX,EDX                         ; 005eca81
        ;   Label: LAB_005eca81
    PUSH EAX                            ; 005eca83
    MOV EDX,dword ptr [EDX]             ; 005eca84
    CALL dword ptr [EDX + 0x8]          ; 005eca86
    XOR ECX,ECX                         ; 005eca89
    MOV dword ptr [0x03f9592c],ECX      ; 005eca8b | g_DirectDrawUnknown
    JMP 0x005eca3d                      ; 005eca91
        ;   XREF to: 005eca3d (UNCONDITIONAL_JUMP)  ; LAB_005eca3d
    PUSH EAX                            ; 005eca93
        ;   Label: LAB_005eca93
    MOV EDX,dword ptr [EAX]             ; 005eca94
    CALL dword ptr [EDX + 0x4c]         ; 005eca96
    MOV EAX,[0x03f95920]                ; 005eca99 | g_DirectDrawObject
    PUSH EAX                            ; 005eca9e
    MOV EDX,dword ptr [EAX]             ; 005eca9f
    CALL dword ptr [EDX + 0x8]          ; 005ecaa1
    XOR EDX,EDX                         ; 005ecaa4
    MOV dword ptr [0x03f95920],EDX      ; 005ecaa6 | g_DirectDrawObject
    MOV EAX,0x1                         ; 005ecaac
    POP EBP                             ; 005ecab1
    POP EDI                             ; 005ecab2
    POP EBX                             ; 005ecab3
    RET                                 ; 005ecab4

