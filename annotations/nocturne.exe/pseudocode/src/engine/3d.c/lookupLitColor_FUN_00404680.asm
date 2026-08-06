; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_lookupLitColor_FUN_00404680(int color_index,int light_level)
;
; Parameters:
; int              Stack[0x4]:4   color_index
; int              Stack[0x8]:4   light_level
;
; XREF[5]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0 at 0040612e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20 at 00407c45
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405fa0
;   engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00407cc0 at 00407d2f
;   engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_004047e0 at 0040484f
;
; Referenced Globals:
;   undefined4 DAT_005acbc4
;   uchar[768] g_SourcePaletteData
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00404680
        ;   Label: engine_3d.c_lookupLitColor_FUN_00404680
    TEST EAX,EAX                        ; 00404684
    JL 0x004046f8                       ; 00404686
        ;   XREF to: 004046f8 (CONDITIONAL_JUMP)  ; LAB_004046f8
    PUSH EBX                            ; 00404688
    MOV EDX,dword ptr [EAX*0x4 + 0x5acbc4] ; 00404689 | DAT_005acbc4
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404690
    XOR ECX,ECX                         ; 00404697
    SUB EAX,EDX                         ; 00404699
    XOR EBX,EBX                         ; 0040469b
    XOR EDX,EDX                         ; 0040469d
    MOV CL,byte ptr [EAX + 0x1c00648]   ; 0040469f | g_SourcePaletteData
    MOV DL,byte ptr [EAX + 0x1c00649]   ; 004046a5
    MOV BL,byte ptr [EAX + 0x1c0064a]   ; 004046ab
    MOV EAX,EDX                         ; 004046b1
    SHR ECX,0x3                         ; 004046b3
    SHR EAX,0x3                         ; 004046b6
    SHL ECX,0xa                         ; 004046b9
    SHL EAX,0x5                         ; 004046bc
    ADD EAX,ECX                         ; 004046bf
    SHR EBX,0x3                         ; 004046c1
    XOR EDX,EDX                         ; 004046c4
    MOV DL,byte ptr [EBX + EAX*0x1 + 0x1bf7720] ; 004046c6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004046cd
    SAR EAX,0x8                         ; 004046d1
    SHL EAX,0x8                         ; 004046d4
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x1bf5520] ; 004046d7
    AND EAX,0xff                        ; 004046de
    POP EBX                             ; 004046e3
    MOV EDX,EAX                         ; 004046e4
    MOV ECX,EAX                         ; 004046e6
    SHL EDX,0x8                         ; 004046e8
    SHL ECX,0x10                        ; 004046eb
    ADD EDX,EAX                         ; 004046ee
    SHL EAX,0x18                        ; 004046f0
    ADD EDX,ECX                         ; 004046f3
    ADD EAX,EDX                         ; 004046f5
    RET                                 ; 004046f7
    NEG EAX                             ; 004046f8
        ;   Label: LAB_004046f8
    MOV EDX,EAX                         ; 004046fa
    MOV ECX,EAX                         ; 004046fc
    SHL EDX,0x8                         ; 004046fe
    SHL ECX,0x10                        ; 00404701
    ADD EDX,EAX                         ; 00404704
    SHL EAX,0x18                        ; 00404706
    ADD EDX,ECX                         ; 00404709
    ADD EAX,EDX                         ; 0040470b
    RET                                 ; 0040470d

