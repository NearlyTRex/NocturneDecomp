; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0(CDemonRenderer *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[7]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00412c50 at 00412d52
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840 at 0044994b
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 0044915a
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 at 0045c578
;   core_inv.cpp_FUN_004dbe70 at 004dbfbf
;   core_setdir.cpp_FUN_0053f940 at 0053fa06
;   core_setdir.cpp_FUN_00540cf0 at 00540d2a
;
; Called Functions:
;   engine_matrix.c_pushViewport_FUN_004e6af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d2f0
        ;   Label: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
    PUSH ESI                            ; 0046d2f1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046d2f2
    PUSH EDX                            ; 0046d2f6
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046d2f7
    PUSH ECX                            ; 0046d2fb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0046d2fc
    PUSH EBX                            ; 0046d300
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046d301
    PUSH ESI                            ; 0046d305
    CALL engine_matrix.c_pushViewport_FUN_004e6af0 ; 0046d306
        ;   XREF to: 004e6af0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_004e6af0(int x, int y, int width, int height)
    ADD ESP,0x10                        ; 0046d30b
    POP ESI                             ; 0046d30e
    POP EBX                             ; 0046d30f
    RET                                 ; 0046d310

