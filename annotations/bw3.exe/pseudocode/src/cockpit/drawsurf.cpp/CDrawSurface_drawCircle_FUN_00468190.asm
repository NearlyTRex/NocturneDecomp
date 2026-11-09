; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface *this_ptr,int center_x,int center_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   radius
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0 at 004682f8
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310 at 00468328
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280 at 00468298
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0 at 004682c8
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a849
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00468340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468190
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190
    PUSH ESI                            ; 00468191
    PUSH EDI                            ; 00468192
    PUSH EBP                            ; 00468193
    MOV EBP,dword ptr [ESP + 0x20]      ; 00468194
    TEST EBP,EBP                        ; 00468198
    JLE 0x004681f4                      ; 0046819a
        ;   XREF to: 004681f4 (CONDITIONAL_JUMP)  ; LAB_004681f4
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046819c
    MOV EDX,dword ptr [ESP + 0x18]      ; 004681a0
    MOV EAX,dword ptr [EAX + 0x8]       ; 004681a4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004681a7
    ADD EDX,EAX                         ; 004681ab
    MOV EAX,dword ptr [ESP + 0x14]      ; 004681ad
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004681b1
    MOV ESI,dword ptr [EBX + 0x10]      ; 004681b5
    MOV EAX,dword ptr [EAX + 0xc]       ; 004681b8
    MOV dword ptr [ESP + 0x18],EDX      ; 004681bb
    ADD ECX,EAX                         ; 004681bf
    LEA EAX,[EDX + EBP*0x1]             ; 004681c1
    MOV dword ptr [ESP + 0x1c],ECX      ; 004681c4
    CMP EAX,ESI                         ; 004681c8
    JGE 0x004681d6                      ; 004681ca
        ;   XREF to: 004681d6 (CONDITIONAL_JUMP)  ; LAB_004681d6
    MOV EDI,dword ptr [EBX + 0x14]      ; 004681cc
    LEA EAX,[ECX + EBP*0x1]             ; 004681cf
    CMP EAX,EDI                         ; 004681d2
    JL 0x004681f4                       ; 004681d4
        ;   XREF to: 004681f4 (CONDITIONAL_JUMP)  ; LAB_004681f4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004681d6
        ;   Label: LAB_004681d6
    MOV EAX,dword ptr [ESP + 0x18]      ; 004681da
    MOV EDX,dword ptr [EBX + 0x18]      ; 004681de
    SUB EAX,EBP                         ; 004681e1
    CMP EAX,EDX                         ; 004681e3
    JLE 0x004681f9                      ; 004681e5
        ;   XREF to: 004681f9 (CONDITIONAL_JUMP)  ; LAB_004681f9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004681e7
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004681eb
    SUB EAX,EBP                         ; 004681ee
    CMP EAX,ECX                         ; 004681f0
    JLE 0x004681f9                      ; 004681f2
        ;   XREF to: 004681f9 (CONDITIONAL_JUMP)  ; LAB_004681f9
    POP EBP                             ; 004681f4
        ;   Label: LAB_004681f4
    POP EDI                             ; 004681f5
    POP ESI                             ; 004681f6
    POP EBX                             ; 004681f7
    RET                                 ; 004681f8
    MOV EAX,dword ptr [ESP + 0x14]      ; 004681f9
        ;   Label: LAB_004681f9
    MOV EBX,dword ptr [ESP + 0x18]      ; 004681fd
    SUB EBX,dword ptr [EAX + 0x8]       ; 00468201
    MOV EAX,dword ptr [ESP + 0x14]      ; 00468204
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00468208
    SUB ESI,dword ptr [EAX + 0xc]       ; 0046820c
    PUSH EBP                            ; 0046820f
    MOV dword ptr [ESP + 0x20],ESI      ; 00468210
    XOR ESI,ESI                         ; 00468214
    PUSH ESI                            ; 00468216
    MOV EAX,dword ptr [ESP + 0x24]      ; 00468217
    MOV dword ptr [ESP + 0x20],EBX      ; 0046821b
    PUSH EAX                            ; 0046821f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00468220
    PUSH EDX                            ; 00468224
    MOV ECX,dword ptr [ESP + 0x24]      ; 00468225
    MOV EDI,0x1                         ; 00468229
    PUSH ECX                            ; 0046822e
    SUB EDI,EBP                         ; 0046822f
    MOV EBX,EBP                         ; 00468231
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00468340 ; 00468233
        ;   XREF to: 00468340 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00468340(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00468238
    TEST EBP,EBP                        ; 0046823b
    JLE 0x004681f4                      ; 0046823d
        ;   XREF to: 004681f4 (CONDITIONAL_JUMP)  ; LAB_004681f4
    MOV EBP,0x1                         ; 0046823f
    INC ESI                             ; 00468244
        ;   Label: LAB_00468244
    ADD EBP,0x2                         ; 00468245
    TEST EDI,EDI                        ; 00468248
    JL 0x00468275                       ; 0046824a
        ;   XREF to: 00468275 (CONDITIONAL_JUMP)  ; LAB_00468275
    MOV EAX,ESI                         ; 0046824c
    DEC EBX                             ; 0046824e
    SUB EAX,EBX                         ; 0046824f
    ADD EAX,EAX                         ; 00468251
    INC EAX                             ; 00468253
    ADD EDI,EAX                         ; 00468254
    PUSH EBX                            ; 00468256
        ;   Label: LAB_00468256
    PUSH ESI                            ; 00468257
    MOV EAX,dword ptr [ESP + 0x24]      ; 00468258
    PUSH EAX                            ; 0046825c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046825d
    PUSH EDX                            ; 00468261
    MOV ECX,dword ptr [ESP + 0x24]      ; 00468262
    PUSH ECX                            ; 00468266
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00468340 ; 00468267
        ;   XREF to: 00468340 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00468340(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0046826c
    CMP ESI,EBX                         ; 0046826f
    JGE 0x004681f4                      ; 00468271
        ;   XREF to: 004681f4 (CONDITIONAL_JUMP)  ; LAB_004681f4
    JMP 0x00468244                      ; 00468273
        ;   XREF to: 00468244 (UNCONDITIONAL_JUMP)  ; LAB_00468244
    ADD EDI,EBP                         ; 00468275
        ;   Label: LAB_00468275
    JMP 0x00468256                      ; 00468277
        ;   XREF to: 00468256 (UNCONDITIONAL_JUMP)  ; LAB_00468256

