; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487a30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30
    PUSH ESI                            ; 00487a31
    PUSH EDI                            ; 00487a32
    PUSH EBP                            ; 00487a33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00487a34
    MOV EDX,dword ptr [ESP + 0x18]      ; 00487a38
    MOV EAX,dword ptr [EBX + 0x8]       ; 00487a3c
    ADD EDX,EAX                         ; 00487a3f
    MOV dword ptr [ESP + 0x18],EDX      ; 00487a41
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00487a45
    MOV EAX,dword ptr [EBX + 0xc]       ; 00487a49
    ADD ECX,EAX                         ; 00487a4c
    MOV dword ptr [ESP + 0x1c],ECX      ; 00487a4e
    MOV ESI,dword ptr [ESP + 0x20]      ; 00487a52
    MOV EAX,dword ptr [EBX + 0x8]       ; 00487a56
    ADD ESI,EAX                         ; 00487a59
    MOV dword ptr [ESP + 0x20],ESI      ; 00487a5b
    MOV EDI,dword ptr [ESP + 0x24]      ; 00487a5f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00487a63
    ADD EDI,EAX                         ; 00487a66
    MOV dword ptr [ESP + 0x24],EDI      ; 00487a68
    MOV EBP,dword ptr [EBX + 0x1c]      ; 00487a6c
    PUSH EBP                            ; 00487a6f
    MOV EAX,dword ptr [EBX + 0x18]      ; 00487a70
    PUSH EAX                            ; 00487a73
    MOV EDX,dword ptr [EBX + 0x14]      ; 00487a74
    PUSH EDX                            ; 00487a77
    MOV ECX,dword ptr [EBX + 0x10]      ; 00487a78
    PUSH ECX                            ; 00487a7b
    LEA EAX,[ESP + 0x34]                ; 00487a7c
    PUSH EAX                            ; 00487a80
    LEA EAX,[ESP + 0x34]                ; 00487a81
    PUSH EAX                            ; 00487a85
    LEA EAX,[ESP + 0x34]                ; 00487a86
    PUSH EAX                            ; 00487a8a
    LEA EAX,[ESP + 0x34]                ; 00487a8b
    PUSH EAX                            ; 00487a8f
    PUSH EBX                            ; 00487a90
    CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20 ; 00487a91 | int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, ...)
        ;   XREF to: 00487e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x24                        ; 00487a96
    TEST EAX,EAX                        ; 00487a99
    JNZ 0x00487aa2                      ; 00487a9b | LAB_00487aa2
        ;   XREF to: 00487aa2 (CONDITIONAL_JUMP)
    POP EBP                             ; 00487a9d
    POP EDI                             ; 00487a9e
    POP ESI                             ; 00487a9f
    POP EBX                             ; 00487aa0
    RET                                 ; 00487aa1
    MOV ESI,dword ptr [ESP + 0x24]      ; 00487aa2
        ;   Label: LAB_00487aa2
    PUSH ESI                            ; 00487aa6
    MOV EDI,dword ptr [ESP + 0x24]      ; 00487aa7
    PUSH EDI                            ; 00487aab
    MOV EBP,dword ptr [ESP + 0x24]      ; 00487aac
    PUSH EBP                            ; 00487ab0
    MOV EAX,dword ptr [ESP + 0x24]      ; 00487ab1
    PUSH EAX                            ; 00487ab5
    PUSH EBX                            ; 00487ab6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0 ; 00487ab7 | void cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
        ;   XREF to: 00487bc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00487abc
    POP EBP                             ; 00487abf
    POP EDI                             ; 00487ac0
    POP ESI                             ; 00487ac1
    POP EBX                             ; 00487ac2
    RET                                 ; 00487ac3

