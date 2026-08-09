; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedDashedLine_FUN_0045c050(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c050
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_0045c050
    PUSH ESI                            ; 0045c051
    PUSH EDI                            ; 0045c052
    PUSH EBP                            ; 0045c053
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045c054
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045c058
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045c05c
    ADD EDX,EAX                         ; 0045c05f
    MOV dword ptr [ESP + 0x18],EDX      ; 0045c061
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045c065
    MOV EAX,dword ptr [EBX + 0xc]       ; 0045c069
    ADD ECX,EAX                         ; 0045c06c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0045c06e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0045c072
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045c076
    ADD ESI,EAX                         ; 0045c079
    MOV dword ptr [ESP + 0x20],ESI      ; 0045c07b
    MOV EDI,dword ptr [ESP + 0x24]      ; 0045c07f
    MOV EAX,dword ptr [EBX + 0xc]       ; 0045c083
    ADD EDI,EAX                         ; 0045c086
    MOV dword ptr [ESP + 0x24],EDI      ; 0045c088
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0045c08c
    PUSH EBP                            ; 0045c08f
    MOV EAX,dword ptr [EBX + 0x18]      ; 0045c090
    PUSH EAX                            ; 0045c093
    MOV EDX,dword ptr [EBX + 0x14]      ; 0045c094
    PUSH EDX                            ; 0045c097
    MOV ECX,dword ptr [EBX + 0x10]      ; 0045c098
    PUSH ECX                            ; 0045c09b
    LEA EAX,[ESP + 0x34]                ; 0045c09c
    PUSH EAX                            ; 0045c0a0
    LEA EAX,[ESP + 0x34]                ; 0045c0a1
    PUSH EAX                            ; 0045c0a5
    LEA EAX,[ESP + 0x34]                ; 0045c0a6
    PUSH EAX                            ; 0045c0aa
    LEA EAX,[ESP + 0x34]                ; 0045c0ab
    PUSH EAX                            ; 0045c0af
    PUSH EBX                            ; 0045c0b0
    CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440 ; 0045c0b1
        ;   XREF to: 0045c440 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, ...)
    ADD ESP,0x24                        ; 0045c0b6
    TEST EAX,EAX                        ; 0045c0b9
    JNZ 0x0045c0c2                      ; 0045c0bb
        ;   XREF to: 0045c0c2 (CONDITIONAL_JUMP)  ; LAB_0045c0c2
    POP EBP                             ; 0045c0bd
    POP EDI                             ; 0045c0be
    POP ESI                             ; 0045c0bf
    POP EBX                             ; 0045c0c0
    RET                                 ; 0045c0c1
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045c0c2
        ;   Label: LAB_0045c0c2
    PUSH ESI                            ; 0045c0c6
    MOV EDI,dword ptr [ESP + 0x24]      ; 0045c0c7
    PUSH EDI                            ; 0045c0cb
    MOV EBP,dword ptr [ESP + 0x24]      ; 0045c0cc
    PUSH EBP                            ; 0045c0d0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045c0d1
    PUSH EAX                            ; 0045c0d5
    PUSH EBX                            ; 0045c0d6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0 ; 0045c0d7
        ;   XREF to: 0045c1e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0045c0dc
    POP EBP                             ; 0045c0df
    POP EDI                             ; 0045c0e0
    POP ESI                             ; 0045c0e1
    POP EBX                             ; 0045c0e2
    RET                                 ; 0045c0e3

