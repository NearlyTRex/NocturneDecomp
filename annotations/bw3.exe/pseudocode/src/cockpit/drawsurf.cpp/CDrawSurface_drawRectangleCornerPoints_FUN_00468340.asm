; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00468340(CDrawSurface *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 at 00468233
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468340
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00468340
    PUSH ESI                            ; 00468341
    PUSH EDI                            ; 00468342
    PUSH EBP                            ; 00468343
    MOV EBX,dword ptr [ESP + 0x14]      ; 00468344
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00468348
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046834c
    MOV ESI,dword ptr [ESP + 0x18]      ; 00468350
    ADD EDI,EDX                         ; 00468354
    MOV ECX,dword ptr [ESP + 0x20]      ; 00468356
    PUSH EDI                            ; 0046835a
    ADD ESI,ECX                         ; 0046835b
    PUSH ESI                            ; 0046835d
    PUSH EBX                            ; 0046835e
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 0046835f
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468364
    MOV EBP,dword ptr [ESP + 0x18]      ; 00468367
    PUSH EDI                            ; 0046836b
    SUB EBP,dword ptr [ESP + 0x24]      ; 0046836c
    PUSH EBP                            ; 00468370
    PUSH EBX                            ; 00468371
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 00468372
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468377
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046837a
    SUB EDI,dword ptr [ESP + 0x24]      ; 0046837e
    PUSH EDI                            ; 00468382
    PUSH ESI                            ; 00468383
    PUSH EBX                            ; 00468384
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 00468385
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046838a
    PUSH EDI                            ; 0046838d
    PUSH EBP                            ; 0046838e
    PUSH EBX                            ; 0046838f
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 00468390
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468395
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00468398
    MOV EDX,dword ptr [ESP + 0x20]      ; 0046839c
    MOV EDI,dword ptr [ESP + 0x18]      ; 004683a0
    ADD ESI,EDX                         ; 004683a4
    MOV ECX,dword ptr [ESP + 0x24]      ; 004683a6
    PUSH ESI                            ; 004683aa
    ADD EDI,ECX                         ; 004683ab
    PUSH EDI                            ; 004683ad
    PUSH EBX                            ; 004683ae
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 004683af
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004683b4
    MOV EBP,dword ptr [ESP + 0x24]      ; 004683b7
    PUSH ESI                            ; 004683bb
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004683bc
    SUB ESI,EBP                         ; 004683c0
    PUSH ESI                            ; 004683c2
    PUSH EBX                            ; 004683c3
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 004683c4
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004683c9
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004683cc
    SUB EBP,dword ptr [ESP + 0x20]      ; 004683d0
    PUSH EBP                            ; 004683d4
    PUSH EDI                            ; 004683d5
    PUSH EBX                            ; 004683d6
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 004683d7
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004683dc
    PUSH EBP                            ; 004683df
    PUSH ESI                            ; 004683e0
    PUSH EBX                            ; 004683e1
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 004683e2
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004683e7
    POP EBP                             ; 004683ea
    POP EDI                             ; 004683eb
    POP ESI                             ; 004683ec
    POP EBX                             ; 004683ed
    RET                                 ; 004683ee

