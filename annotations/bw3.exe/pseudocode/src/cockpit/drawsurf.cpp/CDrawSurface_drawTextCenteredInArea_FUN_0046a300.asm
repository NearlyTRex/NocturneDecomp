; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0046a300(CDrawSurface *this_ptr,char *text,int x,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360 at 0046a3c3
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a300
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0046a300
    PUSH ESI                            ; 0046a301
    PUSH EDI                            ; 0046a302
    PUSH 0x6                            ; 0046a303
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046a305
    PUSH EDX                            ; 0046a309
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046a30a
    PUSH ECX                            ; 0046a30e
    PUSH 0x0                            ; 0046a30f
    MOV EBX,dword ptr [ESP + 0x28]      ; 0046a311
    PUSH EBX                            ; 0046a315
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046a316
    PUSH ESI                            ; 0046a31a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0046a31b
    PUSH EDI                            ; 0046a31f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 ; 0046a320
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0046a325
    POP EDI                             ; 0046a328
    POP ESI                             ; 0046a329
    POP EBX                             ; 0046a32a
    RET                                 ; 0046a32b

