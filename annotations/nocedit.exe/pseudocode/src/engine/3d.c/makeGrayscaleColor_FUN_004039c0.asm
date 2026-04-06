; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_3d_c_makeGrayscaleColor_FUN_004039c0(int color_value,int lighting_value)
;
; Parameters:
; int              Stack[0x4]:4   color_value
; int              Stack[0x8]:4   lighting_value
;
; XREF[5]:
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404b5e
;   engine_3d.c_renderPolygonLastPixelMode2_FUN_004066d0 at 0040673f
;   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 at 00403b3f
;   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 at 00406655
;   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 at 004049d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004039c0
        ;   Label: engine_3d.c_makeGrayscaleColor_FUN_004039c0
    TEST EAX,EAX                        ; 004039c4
    JL 0x004039e1                       ; 004039c6
        ;   XREF to: 004039e1 (CONDITIONAL_JUMP)  ; LAB_004039e1
    MOV EAX,0xff                        ; 004039c8
    MOV EDX,EAX                         ; 004039cd
    MOV ECX,EAX                         ; 004039cf
    SHL EDX,0x8                         ; 004039d1
    SHL ECX,0x10                        ; 004039d4
    ADD EDX,EAX                         ; 004039d7
    SHL EAX,0x18                        ; 004039d9
    ADD EDX,ECX                         ; 004039dc
    ADD EAX,EDX                         ; 004039de
    RET                                 ; 004039e0
    NEG EAX                             ; 004039e1
        ;   Label: LAB_004039e1
    MOV EDX,EAX                         ; 004039e3
    MOV ECX,EAX                         ; 004039e5
    SHL EDX,0x8                         ; 004039e7
    SHL ECX,0x10                        ; 004039ea
    ADD EDX,EAX                         ; 004039ed
    SHL EAX,0x18                        ; 004039ef
    ADD EDX,ECX                         ; 004039f2
    ADD EAX,EDX                         ; 004039f4
    RET                                 ; 004039f6

