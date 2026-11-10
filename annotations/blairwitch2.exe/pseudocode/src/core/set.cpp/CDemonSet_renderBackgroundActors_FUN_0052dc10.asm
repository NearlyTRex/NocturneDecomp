; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet *this_ptr,int layer_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderDecals_FUN_00534c20 at 00534c38
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f0c6
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e4aa
;   core_set.cpp_FUN_0052fad0 at 0052fc7c
;   core_set.cpp_FUN_0052fea0 at 00530038
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00618170
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dc10
        ;   Label: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10
    PUSH ESI                            ; 0052dc11
    PUSH EDI                            ; 0052dc12
    PUSH EBP                            ; 0052dc13
    SUB ESP,0x50                        ; 0052dc14
    MOV EBP,dword ptr [ESP + 0x64]      ; 0052dc17
    MOV EAX,[0x00618170]                ; 0052dc1b | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 0052dc20 | DAT_01d192f8
    JNZ 0x0052dd52                      ; 0052dc27
        ;   XREF to: 0052dd52 (CONDITIONAL_JUMP)  ; LAB_0052dd52
    XOR EBX,EBX                         ; 0052dc2d
        ;   Label: LAB_0052dc2d
    MOV ESI,dword ptr [EBP + 0x15f6f8]  ; 0052dc2f
    MOV dword ptr [ESP + 0x4c],EBX      ; 0052dc35
    TEST ESI,ESI                        ; 0052dc39
    JLE 0x0052dd4a                      ; 0052dc3b
        ;   XREF to: 0052dd4a (CONDITIONAL_JUMP)  ; LAB_0052dd4a
    MOV dword ptr [ESP + 0x48],EBP      ; 0052dc41
    MOV EBX,dword ptr [ESP + 0x48]      ; 0052dc45
        ;   Label: LAB_0052dc45
    MOV EBX,dword ptr [EBX + 0x15f6fc]  ; 0052dc49
    PUSH EBX                            ; 0052dc4f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052dc50
    LEA ESI,[ESP + 0x1c]                ; 0052dc56
    LEA EDI,[ESP + 0x34]                ; 0052dc5a
    CALL dword ptr [EAX + 0x24]         ; 0052dc5e
    MOV ECX,0x6                         ; 0052dc61
    LEA ESI,[ESP + 0x1c]                ; 0052dc66
    ADD ESP,0x4                         ; 0052dc6a
    MOVSD.REP ES:EDI,ESI                ; 0052dc6d
    MOV EDX,ESP                         ; 0052dc6f
    LEA ESI,[ESP + 0x30]                ; 0052dc71
    CMP EDX,ESI                         ; 0052dc75
    JNZ 0x0052dd5d                      ; 0052dc77
        ;   XREF to: 0052dd5d (CONDITIONAL_JUMP)  ; LAB_0052dd5d
    LEA EAX,[ESP + 0xc]                 ; 0052dc7d
        ;   Label: LAB_0052dc7d
    LEA EDX,[ESI + 0xc]                 ; 0052dc81
    CMP EAX,EDX                         ; 0052dc84
    JZ 0x0052dc9c                       ; 0052dc86
        ;   XREF to: 0052dc9c (CONDITIONAL_JUMP)  ; LAB_0052dc9c
    MOV EAX,dword ptr [EDX]             ; 0052dc88
    MOV dword ptr [ESP + 0xc],EAX       ; 0052dc8a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0052dc8e
    MOV dword ptr [ESP + 0x10],EAX      ; 0052dc91
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052dc95
    MOV dword ptr [ESP + 0x14],EAX      ; 0052dc98
    LEA EAX,[EBX + 0x3c]                ; 0052dc9c
        ;   Label: LAB_0052dc9c
    PUSH EAX                            ; 0052dc9f
    LEA EAX,[ESP + 0x10]                ; 0052dca0
    PUSH EAX                            ; 0052dca4
    LEA EAX,[ESP + 0x8]                 ; 0052dca5
    PUSH EAX                            ; 0052dca9
    LEA EAX,[EBX + 0x30]                ; 0052dcaa
    PUSH EAX                            ; 0052dcad
    LEA EAX,[EBX + 0x20]                ; 0052dcae
    PUSH EAX                            ; 0052dcb1
    PUSH EBP                            ; 0052dcb2
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 0052dcb3
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0052dcb8
    MOV EDI,dword ptr [EBX + 0x110]     ; 0052dcbb
    PUSH EDI                            ; 0052dcc1
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0052dcc2
    PUSH EAX                            ; 0052dcc8
    MOV EDX,dword ptr [EBX + 0x108]     ; 0052dcc9
    PUSH EDX                            ; 0052dccf
    PUSH EBP                            ; 0052dcd0
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0 ; 0052dcd1
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0052dcd6
    PUSH 0xffff                         ; 0052dcd9
    MOV ECX,dword ptr [0x0060b280]      ; 0052dcde | DAT_0060b280
    PUSH ECX                            ; 0052dce4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0052dce5
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0052dcea
    MOV ESI,dword ptr [ESP + 0x68]      ; 0052dced
    PUSH ESI                            ; 0052dcf1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052dcf2
    PUSH EBX                            ; 0052dcf8
    CALL dword ptr [EAX + 0x20]         ; 0052dcf9
    ADD ESP,0x8                         ; 0052dcfc
    PUSH 0x10000                        ; 0052dcff
    PUSH 0x10000                        ; 0052dd04
    PUSH 0x10000                        ; 0052dd09
    PUSH EBP                            ; 0052dd0e
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0 ; 0052dd0f
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0052dd14
    PUSH 0x1                            ; 0052dd17
    MOV EDI,dword ptr [0x0060b280]      ; 0052dd19 | DAT_0060b280
    PUSH EDI                            ; 0052dd1f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0052dd20
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0052dd25
    MOV ECX,dword ptr [EBP + 0x15f6f8]  ; 0052dd28
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052dd2e
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0052dd32
    ADD EAX,0x4                         ; 0052dd36
    INC EDX                             ; 0052dd39
    MOV dword ptr [ESP + 0x48],EAX      ; 0052dd3a
    MOV dword ptr [ESP + 0x4c],EDX      ; 0052dd3e
    CMP EDX,ECX                         ; 0052dd42
    JL 0x0052dc45                       ; 0052dd44
        ;   XREF to: 0052dc45 (CONDITIONAL_JUMP)  ; LAB_0052dc45
    ADD ESP,0x50                        ; 0052dd4a
        ;   Label: LAB_0052dd4a
    POP EBP                             ; 0052dd4d
    POP EDI                             ; 0052dd4e
    POP ESI                             ; 0052dd4f
    POP EBX                             ; 0052dd50
    RET                                 ; 0052dd51
    XOR ECX,ECX                         ; 0052dd52
        ;   Label: LAB_0052dd52
    MOV dword ptr [ESP + 0x68],ECX      ; 0052dd54
    JMP 0x0052dc2d                      ; 0052dd58
        ;   XREF to: 0052dc2d (UNCONDITIONAL_JUMP)  ; LAB_0052dc2d
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052dd5d
        ;   Label: LAB_0052dd5d
    MOV dword ptr [ESP],EAX             ; 0052dd61
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052dd64
    MOV dword ptr [ESP + 0x4],EAX       ; 0052dd68
    MOV EAX,dword ptr [ESP + 0x38]      ; 0052dd6c
    MOV dword ptr [ESP + 0x8],EAX       ; 0052dd70
    JMP 0x0052dc7d                      ; 0052dd74
        ;   XREF to: 0052dc7d (UNCONDITIONAL_JUMP)  ; LAB_0052dc7d

