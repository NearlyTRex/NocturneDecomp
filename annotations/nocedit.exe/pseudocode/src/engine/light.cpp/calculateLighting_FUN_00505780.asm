; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_calculateLighting_FUN_00505780(int normal_x,int normal_y,int normal_z)
;
; Parameters:
; int              Stack[0x4]:4   normal_x
; int              Stack[0x8]:4   normal_y
; int              Stack[0xc]:4   normal_z
;
; XREF[8]:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00 at 00403a11
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessingWithUV_FUN_00407720 at 0040777b
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 at 00407678
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404b49
;   engine_3d.c_renderPolygonLastPixelMode2_FUN_004066d0 at 0040672a
;   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 at 00403b2a
;   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 at 00406640
;   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 at 004049bb
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00505780
        ;   Label: engine_light.cpp_calculateLighting_FUN_00505780
    MOV EDX,dword ptr [0x02d052dc]      ; 00505784 | g_LightDirectionX
    IMUL EDX                            ; 0050578a
    SHRD EAX,EDX,0x10                   ; 0050578c
    MOV EDX,dword ptr [0x02d052e0]      ; 00505790 | g_LightDirectionY
    MOV ECX,EAX                         ; 00505796
    MOV EAX,dword ptr [ESP + 0x8]       ; 00505798
    IMUL EDX                            ; 0050579c
    SHRD EAX,EDX,0x10                   ; 0050579e
    MOV EDX,dword ptr [0x02d052e4]      ; 005057a2 | g_LightDirectionZ
    ADD ECX,EAX                         ; 005057a8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005057aa
    IMUL EDX                            ; 005057ae
    SHRD EAX,EDX,0x10                   ; 005057b0
    LEA EDX,[ECX + EAX*0x1]             ; 005057b4
    NEG EDX                             ; 005057b7
    TEST EDX,EDX                        ; 005057b9
    JL 0x0050580b                       ; 005057bb
        ;   XREF to: 0050580b (CONDITIONAL_JUMP)  ; LAB_0050580b
    CMP EDX,0xffff                      ; 005057bd
    JLE 0x005057ca                      ; 005057c3
        ;   XREF to: 005057ca (CONDITIONAL_JUMP)  ; LAB_005057ca
    MOV EDX,0xffff                      ; 005057c5
    MOV ECX,0xffff                      ; 005057ca
        ;   Label: LAB_005057ca
    SUB ECX,dword ptr [0x0067cfc8]      ; 005057cf | g_AmbientLightLevel
    MOV EAX,EDX                         ; 005057d5
    MOV EDX,ECX                         ; 005057d7
    IMUL EDX                            ; 005057d9
    SHRD EAX,EDX,0x10                   ; 005057db
    MOV EDX,dword ptr [0x0067cfc8]      ; 005057df | g_AmbientLightLevel
    ADD EDX,EAX                         ; 005057e5
    TEST EDX,EDX                        ; 005057e7
    JL 0x0050580f                       ; 005057e9
        ;   XREF to: 0050580f (CONDITIONAL_JUMP)  ; LAB_0050580f
    CMP EDX,0xffff                      ; 005057eb
    JLE 0x005057f8                      ; 005057f1
        ;   XREF to: 005057f8 (CONDITIONAL_JUMP)  ; LAB_005057f8
    MOV EDX,0xffff                      ; 005057f3
    MOV EAX,EDX                         ; 005057f8
        ;   Label: LAB_005057f8
    SAR EDX,0x1f                        ; 005057fa
    SHL EDX,0x4                         ; 005057fd
    SBB EAX,EDX                         ; 00505800
    SAR EAX,0x4                         ; 00505802
    ADD EAX,0x100                       ; 00505805
    RET                                 ; 0050580a
    XOR EDX,EDX                         ; 0050580b
        ;   Label: LAB_0050580b
    JMP 0x005057ca                      ; 0050580d
        ;   XREF to: 005057ca (UNCONDITIONAL_JUMP)  ; LAB_005057ca
    XOR EDX,EDX                         ; 0050580f
        ;   Label: LAB_0050580f
    MOV EAX,EDX                         ; 00505811
    SAR EDX,0x1f                        ; 00505813
    SHL EDX,0x4                         ; 00505816
    SBB EAX,EDX                         ; 00505819
    SAR EAX,0x4                         ; 0050581b
    ADD EAX,0x100                       ; 0050581e
    RET                                 ; 00505823

