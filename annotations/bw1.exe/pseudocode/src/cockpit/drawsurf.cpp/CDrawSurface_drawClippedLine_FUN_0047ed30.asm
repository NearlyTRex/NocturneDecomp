; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0047ed30(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481176
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0047f1b0
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0047ee70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ed30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30
    PUSH ESI                            ; 0047ed31
    PUSH EDI                            ; 0047ed32
    PUSH EBP                            ; 0047ed33
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047ed34
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047ed38
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ed3c
    ADD EDX,EAX                         ; 0047ed3f
    MOV dword ptr [ESP + 0x18],EDX      ; 0047ed41
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0047ed45
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ed49
    ADD ECX,EAX                         ; 0047ed4c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0047ed4e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047ed52
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047ed56
    ADD ESI,EAX                         ; 0047ed59
    MOV dword ptr [ESP + 0x20],ESI      ; 0047ed5b
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047ed5f
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047ed63
    ADD EDI,EAX                         ; 0047ed66
    MOV dword ptr [ESP + 0x24],EDI      ; 0047ed68
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0047ed6c
    PUSH EBP                            ; 0047ed6f
    MOV EAX,dword ptr [EBX + 0x18]      ; 0047ed70
    PUSH EAX                            ; 0047ed73
    MOV EDX,dword ptr [EBX + 0x14]      ; 0047ed74
    PUSH EDX                            ; 0047ed77
    MOV ECX,dword ptr [EBX + 0x10]      ; 0047ed78
    PUSH ECX                            ; 0047ed7b
    LEA EAX,[ESP + 0x34]                ; 0047ed7c
    PUSH EAX                            ; 0047ed80
    LEA EAX,[ESP + 0x34]                ; 0047ed81
    PUSH EAX                            ; 0047ed85
    LEA EAX,[ESP + 0x34]                ; 0047ed86
    PUSH EAX                            ; 0047ed8a
    LEA EAX,[ESP + 0x34]                ; 0047ed8b
    PUSH EAX                            ; 0047ed8f
    PUSH EBX                            ; 0047ed90
    CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0047f1b0 ; 0047ed91
        ;   XREF to: 0047f1b0 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0047f1b0(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, ...)
    ADD ESP,0x24                        ; 0047ed96
    TEST EAX,EAX                        ; 0047ed99
    JNZ 0x0047eda2                      ; 0047ed9b
        ;   XREF to: 0047eda2 (CONDITIONAL_JUMP)  ; LAB_0047eda2
    POP EBP                             ; 0047ed9d
    POP EDI                             ; 0047ed9e
    POP ESI                             ; 0047ed9f
    POP EBX                             ; 0047eda0
    RET                                 ; 0047eda1
    MOV ESI,dword ptr [ESP + 0x24]      ; 0047eda2
        ;   Label: LAB_0047eda2
    PUSH ESI                            ; 0047eda6
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047eda7
    PUSH EDI                            ; 0047edab
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047edac
    PUSH EBP                            ; 0047edb0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047edb1
    PUSH EAX                            ; 0047edb5
    PUSH EBX                            ; 0047edb6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0047ee70 ; 0047edb7
        ;   XREF to: 0047ee70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0047ee70(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0047edbc
    POP EBP                             ; 0047edbf
    POP EDI                             ; 0047edc0
    POP ESI                             ; 0047edc1
    POP EBX                             ; 0047edc2
    RET                                 ; 0047edc3

