; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_0045d2d0(int param_1,int param_2,int param_3,CPackedBitmap *param_4)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_004f4410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d2d0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_0045d2d0
    PUSH ESI                            ; 0045d2d1
    PUSH EDI                            ; 0045d2d2
    PUSH EBP                            ; 0045d2d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045d2d4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045d2d8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045d2dc
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0045d2e0
    MOV EBX,dword ptr [EAX + 0x8]       ; 0045d2e3
    PUSH EDI                            ; 0045d2e6
    MOV EBP,dword ptr [EAX + 0x18]      ; 0045d2e7
    ADD EDX,EBX                         ; 0045d2ea
    PUSH EBP                            ; 0045d2ec
    MOV EBX,dword ptr [EAX + 0x14]      ; 0045d2ed
    MOV ESI,dword ptr [EAX + 0xc]       ; 0045d2f0
    PUSH EBX                            ; 0045d2f3
    ADD ECX,ESI                         ; 0045d2f4
    MOV ESI,dword ptr [EAX + 0x10]      ; 0045d2f6
    PUSH ESI                            ; 0045d2f9
    PUSH ECX                            ; 0045d2fa
    PUSH EDX                            ; 0045d2fb
    MOV EDI,dword ptr [ESP + 0x38]      ; 0045d2fc
    PUSH EDI                            ; 0045d300
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_004f4410 ; 0045d301
        ;   XREF to: 004f4410 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_004f4410(CPackedBitmap * this_ptr, int dest_x, int dest_y, int rect_left, ...)
    ADD ESP,0x1c                        ; 0045d306
    POP EBP                             ; 0045d309
    POP EDI                             ; 0045d30a
    POP ESI                             ; 0045d30b
    POP EBX                             ; 0045d30c
    RET                                 ; 0045d30d

