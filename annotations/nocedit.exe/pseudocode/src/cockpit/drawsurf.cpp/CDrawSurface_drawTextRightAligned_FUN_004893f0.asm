; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 (CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 at 004894aa
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 at 00489436
;   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 at 00559ec3
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004893f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
    PUSH ESI                            ; 004893f1
    PUSH 0x0                            ; 004893f2
    PUSH 0x0                            ; 004893f4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004893f6
    PUSH EDX                            ; 004893fa
    PUSH 0x0                            ; 004893fb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004893fd
    PUSH ECX                            ; 00489401
    MOV EBX,dword ptr [ESP + 0x24]      ; 00489402
    PUSH EBX                            ; 00489406
    MOV ESI,dword ptr [ESP + 0x24]      ; 00489407
    PUSH ESI                            ; 0048940b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 0048940c
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x1c                        ; 00489411
    POP ESI                             ; 00489414
    POP EBX                             ; 00489415
    RET                                 ; 00489416

