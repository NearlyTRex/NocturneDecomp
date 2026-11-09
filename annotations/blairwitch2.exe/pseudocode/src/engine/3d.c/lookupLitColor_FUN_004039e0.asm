; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_3d_c_lookupLitColor_FUN_004039e0(int color_value,int lighting_value)
;
; Parameters:
; int              Stack[0x4]:4   color_value
; int              Stack[0x8]:4   lighting_value
;
; XREF[5]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00 at 00404b7e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450 at 00406675
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 004049f0
;   engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_004066f0 at 0040675f
;   engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403af0 at 00403b5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004039e0
        ;   Label: engine_3d.c_lookupLitColor_FUN_004039e0
    TEST EAX,EAX                        ; 004039e4
    JL 0x00403a01                       ; 004039e6
        ;   XREF to: 00403a01 (CONDITIONAL_JUMP)  ; LAB_00403a01
    MOV EAX,0xff                        ; 004039e8
    MOV EDX,EAX                         ; 004039ed
    MOV ECX,EAX                         ; 004039ef
    SHL EDX,0x8                         ; 004039f1
    SHL ECX,0x10                        ; 004039f4
    ADD EDX,EAX                         ; 004039f7
    SHL EAX,0x18                        ; 004039f9
    ADD EDX,ECX                         ; 004039fc
    ADD EAX,EDX                         ; 004039fe
    RET                                 ; 00403a00
    NEG EAX                             ; 00403a01
        ;   Label: LAB_00403a01
    MOV EDX,EAX                         ; 00403a03
    MOV ECX,EAX                         ; 00403a05
    SHL EDX,0x8                         ; 00403a07
    SHL ECX,0x10                        ; 00403a0a
    ADD EDX,EAX                         ; 00403a0d
    SHL EAX,0x18                        ; 00403a0f
    ADD EDX,ECX                         ; 00403a12
    ADD EAX,EDX                         ; 00403a14
    RET                                 ; 00403a16

