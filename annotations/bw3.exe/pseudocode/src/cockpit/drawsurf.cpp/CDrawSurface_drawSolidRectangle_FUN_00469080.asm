; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00469080(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; Referenced Globals:
;   int g_INT_005f2aec = 0x1
;   float g_FLOAT_005f2af0 = 0.1000000
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469080
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00469080
    PUSH ESI                            ; 00469081
    PUSH EDI                            ; 00469082
    PUSH EBP                            ; 00469083
    SUB ESP,0x4                         ; 00469084
    MOV EDX,0x1                         ; 00469087
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046908c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00469090
    PUSH ESI                            ; 00469094
    MOV EBP,dword ptr [ESP + 0x24]      ; 00469095
    MOV EAX,[0x005f2af0]                ; 00469099 | g_FLOAT_005f2af0
    PUSH EDI                            ; 0046909e
    MOV EBX,dword ptr [0x005f2aec]      ; 0046909f | g_INT_005f2aec
    MOV dword ptr [ESP + 0x8],EAX       ; 004690a5
    PUSH EBP                            ; 004690a9
    MOV EAX,dword ptr [ESP + 0x28]      ; 004690aa
    MOV dword ptr [0x005f2aec],EDX      ; 004690ae | g_INT_005f2aec
    PUSH EAX                            ; 004690b4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004690b5
    XOR ECX,ECX                         ; 004690b9
    PUSH EDX                            ; 004690bb
    MOV dword ptr [0x005f2af0],ECX      ; 004690bc | g_FLOAT_005f2af0
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0 ; 004690c2
        ;   XREF to: 004691e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004690c7
    MOV EAX,dword ptr [ESP]             ; 004690ca
    MOV dword ptr [0x005f2aec],EBX      ; 004690cd | g_INT_005f2aec
    MOV [0x005f2af0],EAX                ; 004690d3 | g_FLOAT_005f2af0
    ADD ESP,0x4                         ; 004690d8
    POP EBP                             ; 004690db
    POP EDI                             ; 004690dc
    POP ESI                             ; 004690dd
    POP EBX                             ; 004690de
    RET                                 ; 004690df

