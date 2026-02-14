; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawInsetRectangle_FUN_00488740(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y)
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
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488740
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_00488740
    PUSH ESI                            ; 00488741
    MOV ECX,dword ptr [ESP + 0x10]      ; 00488742
    MOV EBX,dword ptr [ESP + 0x18]      ; 00488746
    MOV EDX,dword ptr [ESP + 0x14]      ; 0048874a
    ADD EDX,ECX                         ; 0048874e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00488750
    INC EDX                             ; 00488754
    SUB EDX,ECX                         ; 00488755
    MOV EAX,EDX                         ; 00488757
    SAR EDX,0x1f                        ; 00488759
    SUB EAX,EDX                         ; 0048875c
    SAR EAX,0x1                         ; 0048875e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00488760
    ADD EDX,EBX                         ; 00488764
    MOV EBX,dword ptr [ESP + 0x24]      ; 00488766
    INC EDX                             ; 0048876a
    SUB EDX,EBX                         ; 0048876b
    MOV ECX,EAX                         ; 0048876d
    MOV EAX,EDX                         ; 0048876f
    SAR EDX,0x1f                        ; 00488771
    SUB EAX,EDX                         ; 00488774
    SAR EAX,0x1                         ; 00488776
    LEA EDX,[EBX + EAX*0x1 + -0x1]      ; 00488778
    PUSH EDX                            ; 0048877c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0048877d
    ADD EDX,ECX                         ; 00488781
    DEC EDX                             ; 00488783
    PUSH EDX                            ; 00488784
    PUSH EAX                            ; 00488785
    PUSH ECX                            ; 00488786
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00488787
    PUSH ESI                            ; 0048878b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630 ; 0048878c
        ;   XREF to: 00488630 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00488791
    POP ESI                             ; 00488794
    POP EBX                             ; 00488795
    RET                                 ; 00488796

