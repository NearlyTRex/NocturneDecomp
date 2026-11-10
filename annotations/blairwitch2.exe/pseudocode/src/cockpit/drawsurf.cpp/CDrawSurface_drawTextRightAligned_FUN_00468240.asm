; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00468240(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 at 00468286
;   cockpit_drawsurf.cpp_FUN_004682a0 at 004682fa
;   core_script.cpp_CScript_renderEditor_FUN_00521af0 at 00521c33
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468240
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240
    PUSH ESI                            ; 00468241
    PUSH 0x0                            ; 00468242
    PUSH 0x0                            ; 00468244
    MOV EDX,dword ptr [ESP + 0x20]      ; 00468246
    PUSH EDX                            ; 0046824a
    PUSH 0x0                            ; 0046824b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046824d
    PUSH ECX                            ; 00468251
    MOV EBX,dword ptr [ESP + 0x24]      ; 00468252
    PUSH EBX                            ; 00468256
    MOV ESI,dword ptr [ESP + 0x24]      ; 00468257
    PUSH ESI                            ; 0046825b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 ; 0046825c
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00468261
    POP ESI                             ; 00468264
    POP EBX                             ; 00468265
    RET                                 ; 00468266

