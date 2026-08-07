; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_plotPixel_FUN_00401530(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[11]:
;   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_0040add0 at 0040afaa
;   core_actor.cpp_draw3DPointMarker_FUN_0040ab70 at 0040ace8
;   core_setdir.cpp_FUN_005138e0 at 00513ac9
;   engine_2d.c_draw320x200SizeDot_FUN_00403780 at 00403821
;   engine_2d.c_drawLine_FUN_004015a0 at 004015f6
;   engine_2d.c_project3DPointToScreen_FUN_00401da0 at 00401ddc
;   shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0 at 004725f3
;   shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004737a0 at 0047388f
;   shape_edittool.cpp_plotPixelWithClipping_FUN_0046efa0 at 0046efea
;   wincore_winrun.cpp_FUN_00558c40 at 00558d16
;   ... and 1 more
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   int g_ActiveRenderColor
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401530
        ;   Label: engine_2d.c_plotPixel_FUN_00401530
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401531
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401535
    MOV EDX,dword ptr [0x005b7624]      ; 00401539 | g_BitsPerPixel
    SHL EAX,0x2                         ; 0040153f
    CMP EDX,0x8                         ; 00401542
    JZ 0x00401575                       ; 00401545
        ;   XREF to: 00401575 (CONDITIONAL_JUMP)  ; LAB_00401575
    MOV EDX,dword ptr [0x01c00c70]      ; 00401547 | g_ActiveRenderColor
    MOV EBX,dword ptr [0x005b7624]      ; 0040154d | g_BitsPerPixel
    AND EDX,0xff                        ; 00401553
    CMP EBX,0x10                        ; 00401559
    JNZ 0x00401585                      ; 0040155c
        ;   XREF to: 00401585 (CONDITIONAL_JUMP)  ; LAB_00401585
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0040155e | g_ScreenBufferArray
    ADD ECX,ECX                         ; 00401564
    ADD ECX,EAX                         ; 00401566
    MOV AX,word ptr [EDX*0x2 + 0x1bff720] ; 00401568
    MOV word ptr [ECX],AX               ; 00401570
    POP EBX                             ; 00401573
    RET                                 ; 00401574
    MOV EDX,dword ptr [EAX + 0x1bd2fa0] ; 00401575 | g_ScreenBufferArray
        ;   Label: LAB_00401575
    MOV AL,[0x01c00c70]                 ; 0040157b | g_ActiveRenderColor
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00401580
    POP EBX                             ; 00401583
    RET                                 ; 00401584
    SHL ECX,0x2                         ; 00401585
        ;   Label: LAB_00401585
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 00401588 | g_ScreenBufferArray
    ADD ECX,EAX                         ; 0040158e
    MOV EAX,dword ptr [EDX*0x4 + 0x1bff920] ; 00401590
    MOV dword ptr [ECX],EAX             ; 00401597
    POP EBX                             ; 00401599
    RET                                 ; 0040159a

