; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet *this_ptr,int layer_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderGogglesView_FUN_0050a260 at 0050a3f0
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 005098a6
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b50
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508750
        ;   Label: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750
    PUSH ESI                            ; 00508751
    PUSH EDI                            ; 00508752
    PUSH EBP                            ; 00508753
    SUB ESP,0x30                        ; 00508754
    MOV ESI,dword ptr [ESP + 0x44]      ; 00508757
    MOV EAX,[0x005baf90]                ; 0050875b | g_CDemonMission_PTR_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 00508760 | DAT_01cc9454
    JNZ 0x00508866                      ; 00508764
        ;   XREF to: 00508866 (CONDITIONAL_JUMP)  ; LAB_00508866
    MOV EBX,dword ptr [ESI + 0x15f2fc]  ; 0050876a
        ;   Label: LAB_0050876a
    XOR EBP,EBP                         ; 00508770
    TEST EBX,EBX                        ; 00508772
    JLE 0x0050885e                      ; 00508774
        ;   XREF to: 0050885e (CONDITIONAL_JUMP)  ; LAB_0050885e
    MOV EDI,ESI                         ; 0050877a
    MOV EAX,ESP                         ; 0050877c
        ;   Label: LAB_0050877c
    MOV EBX,dword ptr [EDI + 0x15f300]  ; 0050877e
    PUSH EAX                            ; 00508784
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00508785
    PUSH EBX                            ; 0050878b
    CALL dword ptr [EDX + 0x14]         ; 0050878c
    MOV EDX,EAX                         ; 0050878f
    MOV ECX,EAX                         ; 00508791
    LEA EAX,[ESP + 0x20]                ; 00508793
    ADD ESP,0x8                         ; 00508797
    CMP EAX,EDX                         ; 0050879a
    JNZ 0x00508871                      ; 0050879c
        ;   XREF to: 00508871 (CONDITIONAL_JUMP)  ; LAB_00508871
    LEA EAX,[ESP + 0x24]                ; 005087a2
        ;   Label: LAB_005087a2
    LEA EDX,[ECX + 0xc]                 ; 005087a6
    CMP EAX,EDX                         ; 005087a9
    JZ 0x005087c1                       ; 005087ab
        ;   XREF to: 005087c1 (CONDITIONAL_JUMP)  ; LAB_005087c1
    MOV EAX,dword ptr [EDX]             ; 005087ad
    MOV dword ptr [ESP + 0x24],EAX      ; 005087af
    MOV EAX,dword ptr [EDX + 0x4]       ; 005087b3
    MOV dword ptr [ESP + 0x28],EAX      ; 005087b6
    MOV EAX,dword ptr [EDX + 0x8]       ; 005087ba
    MOV dword ptr [ESP + 0x2c],EAX      ; 005087bd
    LEA EAX,[EBX + 0x3c]                ; 005087c1
        ;   Label: LAB_005087c1
    PUSH EAX                            ; 005087c4
    LEA EAX,[ESP + 0x28]                ; 005087c5
    PUSH EAX                            ; 005087c9
    LEA EAX,[ESP + 0x20]                ; 005087ca
    PUSH EAX                            ; 005087ce
    LEA EAX,[EBX + 0x30]                ; 005087cf
    PUSH EAX                            ; 005087d2
    LEA EAX,[EBX + 0x20]                ; 005087d3
    PUSH EAX                            ; 005087d6
    PUSH ESI                            ; 005087d7
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 005087d8
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 005087dd
    MOV EAX,dword ptr [EBX + 0x110]     ; 005087e0
    PUSH EAX                            ; 005087e6
    MOV EDX,dword ptr [EBX + 0x10c]     ; 005087e7
    PUSH EDX                            ; 005087ed
    MOV ECX,dword ptr [EBX + 0x108]     ; 005087ee
    PUSH ECX                            ; 005087f4
    PUSH ESI                            ; 005087f5
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 005087f6
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 005087fb
    PUSH 0xffff                         ; 005087fe
    MOV EAX,[0x005ae704]                ; 00508803 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00508808 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00508809
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0050880e
    MOV EDX,dword ptr [ESP + 0x48]      ; 00508811
    PUSH EDX                            ; 00508815
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00508816
    PUSH EBX                            ; 0050881c
    CALL dword ptr [EAX + 0x10]         ; 0050881d
    ADD ESP,0x8                         ; 00508820
    PUSH 0x10000                        ; 00508823
    PUSH 0x10000                        ; 00508828
    PUSH 0x10000                        ; 0050882d
    PUSH ESI                            ; 00508832
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 00508833
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00508838
    PUSH 0x1                            ; 0050883b
    MOV ECX,dword ptr [0x005ae704]      ; 0050883d | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00508843 | DAT_01b4d738
    ADD EDI,0x4                         ; 00508844
    INC EBP                             ; 00508847
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00508848
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    MOV EBX,dword ptr [ESI + 0x15f2fc]  ; 0050884d
    ADD ESP,0x8                         ; 00508853
    CMP EBP,EBX                         ; 00508856
    JL 0x0050877c                       ; 00508858
        ;   XREF to: 0050877c (CONDITIONAL_JUMP)  ; LAB_0050877c
    ADD ESP,0x30                        ; 0050885e
        ;   Label: LAB_0050885e
    POP EBP                             ; 00508861
    POP EDI                             ; 00508862
    POP ESI                             ; 00508863
    POP EBX                             ; 00508864
    RET                                 ; 00508865
    XOR ECX,ECX                         ; 00508866
        ;   Label: LAB_00508866
    MOV dword ptr [ESP + 0x48],ECX      ; 00508868
    JMP 0x0050876a                      ; 0050886c
        ;   XREF to: 0050876a (UNCONDITIONAL_JUMP)  ; LAB_0050876a
    MOV EAX,dword ptr [EDX]             ; 00508871
        ;   Label: LAB_00508871
    MOV dword ptr [ESP + 0x18],EAX      ; 00508873
    MOV EAX,dword ptr [EDX + 0x4]       ; 00508877
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050887a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050887e
    MOV dword ptr [ESP + 0x20],EAX      ; 00508881
    JMP 0x005087a2                      ; 00508885
        ;   XREF to: 005087a2 (UNCONDITIONAL_JUMP)  ; LAB_005087a2

