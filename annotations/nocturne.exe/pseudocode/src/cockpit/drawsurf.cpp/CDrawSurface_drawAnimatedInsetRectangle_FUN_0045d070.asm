; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_0045d070(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; int              Stack[0x18]:4   inset_x
; int              Stack[0x1c]:4   inset_y
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d070
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_0045d070
    PUSH ESI                            ; 0045d071
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045d072
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045d076
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045d07a
    ADD EDX,ECX                         ; 0045d07e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045d080
    INC EDX                             ; 0045d084
    SUB EDX,ECX                         ; 0045d085
    MOV EAX,EDX                         ; 0045d087
    SAR EDX,0x1f                        ; 0045d089
    SUB EAX,EDX                         ; 0045d08c
    SAR EAX,0x1                         ; 0045d08e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045d090
    ADD EDX,EBX                         ; 0045d094
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045d096
    INC EDX                             ; 0045d09a
    SUB EDX,EBX                         ; 0045d09b
    MOV ECX,EAX                         ; 0045d09d
    MOV EAX,EDX                         ; 0045d09f
    SAR EDX,0x1f                        ; 0045d0a1
    SUB EAX,EDX                         ; 0045d0a4
    SAR EAX,0x1                         ; 0045d0a6
    LEA EDX,[EBX + EAX*0x1 + -0x1]      ; 0045d0a8
    PUSH EDX                            ; 0045d0ac
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045d0ad
    ADD EDX,ECX                         ; 0045d0b1
    DEC EDX                             ; 0045d0b3
    PUSH EDX                            ; 0045d0b4
    PUSH EAX                            ; 0045d0b5
    PUSH ECX                            ; 0045d0b6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045d0b7
    PUSH ESI                            ; 0045d0bb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0 ; 0045d0bc
        ;   XREF to: 0045cde0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0045d0c1
    POP ESI                             ; 0045d0c4
    POP EBX                             ; 0045d0c5
    RET                                 ; 0045d0c6

