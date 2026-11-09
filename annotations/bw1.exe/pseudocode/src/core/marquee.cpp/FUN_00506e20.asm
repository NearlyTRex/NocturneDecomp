; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_marquee_cpp_FUN_00506e20(CMarquee *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f650
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_course.cpp_FUN_00447f00
;   core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506e20
        ;   Label: core_marquee.cpp_FUN_00506e20
    PUSH EBP                            ; 00506e21
    SUB ESP,0xc0                        ; 00506e22
    MOV EBX,dword ptr [ESP + 0xcc]      ; 00506e28
    CMP dword ptr [EBX + 0x19c],0x0     ; 00506e2f
    JNZ 0x00506e43                      ; 00506e36
        ;   XREF to: 00506e43 (CONDITIONAL_JUMP)  ; LAB_00506e43
    XOR EAX,EAX                         ; 00506e38
    ADD ESP,0xc0                        ; 00506e3a
    POP EBP                             ; 00506e40
    POP EBX                             ; 00506e41
    RET                                 ; 00506e42
    PUSH EDI                            ; 00506e43
        ;   Label: LAB_00506e43
    PUSH ESI                            ; 00506e44
    PUSH 0x1                            ; 00506e45
    MOV ECX,dword ptr [0x00612560]      ; 00506e47 | DAT_00612560
    PUSH ECX                            ; 00506e4d
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00506e4e
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00506e53
    PUSH 0xffff                         ; 00506e56
    MOV ESI,dword ptr [0x00612560]      ; 00506e5b | DAT_00612560
    PUSH ESI                            ; 00506e61
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 00506e62
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00506e67
    PUSH 0x61f414                       ; 00506e6a
    MOV EDI,dword ptr [0x00612560]      ; 00506e6f | DAT_00612560
    PUSH EDI                            ; 00506e75
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00506e76
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,dword ptr [0x0061f650]      ; 00506e7b | DAT_0061f650
    ADD ESP,0x8                         ; 00506e81
    MOV EBP,dword ptr [EDX + 0x1008]    ; 00506e84
    LEA EAX,[EBX + 0x1a4]               ; 00506e8a
    TEST EBP,EBP                        ; 00506e90
    JZ 0x00506f66                       ; 00506e92
        ;   XREF to: 00506f66 (CONDITIONAL_JUMP)  ; LAB_00506f66
    MOV EDX,dword ptr [EAX]             ; 00506e98
    XOR EBP,EBP                         ; 00506e9a
    MOV dword ptr [ESP + 0xac],EDX      ; 00506e9c
    TEST EDX,EDX                        ; 00506ea3
    JLE 0x00506f45                      ; 00506ea5
        ;   XREF to: 00506f45 (CONDITIONAL_JUMP)  ; LAB_00506f45
    MOV dword ptr [ESP + 0xb4],EAX      ; 00506eab
    LEA EAX,[ESP + 0x74]                ; 00506eb2
        ;   Label: LAB_00506eb2
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00506eb6
    MOV dword ptr [ESP + 0xc4],EBP      ; 00506ebd
    PUSH EAX                            ; 00506ec4
    LEA EAX,[ESP + 0x6c]                ; 00506ec5
    FILD dword ptr [ESP + 0xc8]         ; 00506ec9
    PUSH EAX                            ; 00506ed0
    FSTP float ptr [ESP + 0xa0]         ; 00506ed1
    PUSH dword ptr [ESP + 0xa0]         ; 00506ed8
    PUSH ECX                            ; 00506edf
    CALL core_course.cpp_FUN_00447f00   ; 00506ee0
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00447f00(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00506ee5
    LEA EAX,[ESP + 0x68]                ; 00506ee8
    PUSH EAX                            ; 00506eec
    PUSH EBX                            ; 00506eed
    LEA ESI,[ESP + 0x34]                ; 00506eee
    LEA EDI,[ESP + 0x1c]                ; 00506ef2
    CALL core_actor.cpp_FUN_00408b40    ; 00506ef6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x34]                ; 00506efb
    LEA EAX,[ESP + 0x1c]                ; 00506eff
    ADD ESP,0x8                         ; 00506f03
    LEA EDX,[ESP + 0x68]                ; 00506f06
    MOVSD ES:EDI,ESI                    ; 00506f0a
    MOVSD ES:EDI,ESI                    ; 00506f0b
    MOVSD ES:EDI,ESI                    ; 00506f0c
    CMP EDX,EAX                         ; 00506f0d
    JZ 0x00506f29                       ; 00506f0f
        ;   XREF to: 00506f29 (CONDITIONAL_JUMP)  ; LAB_00506f29
    MOV EAX,dword ptr [ESP + 0x14]      ; 00506f11
    MOV dword ptr [ESP + 0x68],EAX      ; 00506f15
    MOV EAX,dword ptr [ESP + 0x18]      ; 00506f19
    MOV dword ptr [ESP + 0x6c],EAX      ; 00506f1d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00506f21
    MOV dword ptr [ESP + 0x70],EAX      ; 00506f25
    LEA EAX,[ESP + 0x68]                ; 00506f29
        ;   Label: LAB_00506f29
    PUSH EAX                            ; 00506f2d
    PUSH EBX                            ; 00506f2e
    CALL core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90 ; 00506f2f
        ;   XREF to: 00506c90 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00506f34
    INC EBP                             ; 00506f37
    CMP EBP,dword ptr [ESP + 0xac]      ; 00506f38
    JL 0x00506eb2                       ; 00506f3f
        ;   XREF to: 00506eb2 (CONDITIONAL_JUMP)  ; LAB_00506eb2
    PUSH 0x0                            ; 00506f45
        ;   Label: LAB_00506f45
    MOV EBX,dword ptr [0x00612560]      ; 00506f47 | DAT_00612560
    PUSH EBX                            ; 00506f4d
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00506f4e
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,0x1                         ; 00506f53
    ADD ESP,0x8                         ; 00506f58
    POP ESI                             ; 00506f5b
    POP EDI                             ; 00506f5c
    ADD ESP,0xc0                        ; 00506f5d
    POP EBP                             ; 00506f63
    POP EBX                             ; 00506f64
    RET                                 ; 00506f65
    MOV EDX,dword ptr [EBX + 0x1a0]     ; 00506f66
        ;   Label: LAB_00506f66
    CMP EDX,0x1                         ; 00506f6c
    JNZ 0x00507033                      ; 00506f6f
        ;   XREF to: 00507033 (CONDITIONAL_JUMP)  ; LAB_00507033
    FLD float ptr [EBX + 0x17c]         ; 00506f75
    CALL crt_math.c_round_FUN_005c03a0  ; 00506f7b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xbc]        ; 00506f80
    CMP dword ptr [ESP + 0xbc],0x0      ; 00506f87
    JLE 0x00506f45                      ; 00506f8f
        ;   XREF to: 00506f45 (CONDITIONAL_JUMP)  ; LAB_00506f45
    MOV dword ptr [ESP + 0xb0],EAX      ; 00506f91
    LEA EAX,[ESP + 0x8c]                ; 00506f98
        ;   Label: LAB_00506f98
    MOV dword ptr [ESP + 0xc4],EBP      ; 00506f9f
    PUSH EAX                            ; 00506fa6
    LEA EAX,[ESP + 0x48]                ; 00506fa7
    FILD dword ptr [ESP + 0xc8]         ; 00506fab
    PUSH EAX                            ; 00506fb2
    FSTP float ptr [ESP + 0xa8]         ; 00506fb3
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00506fba
    PUSH dword ptr [ESP + 0xa8]         ; 00506fc1
    PUSH EAX                            ; 00506fc8
    CALL core_course.cpp_FUN_00447f00   ; 00506fc9
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00447f00(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00506fce
    LEA EAX,[ESP + 0x44]                ; 00506fd1
    PUSH EAX                            ; 00506fd5
    PUSH EBX                            ; 00506fd6
    LEA ESI,[ESP + 0x28]                ; 00506fd7
    LEA EDI,[ESP + 0x64]                ; 00506fdb
    CALL core_actor.cpp_FUN_00408b40    ; 00506fdf
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x28]                ; 00506fe4
    LEA EAX,[ESP + 0x64]                ; 00506fe8
    ADD ESP,0x8                         ; 00506fec
    LEA EDX,[ESP + 0x44]                ; 00506fef
    MOVSD ES:EDI,ESI                    ; 00506ff3
    MOVSD ES:EDI,ESI                    ; 00506ff4
    MOVSD ES:EDI,ESI                    ; 00506ff5
    CMP EDX,EAX                         ; 00506ff6
    JZ 0x00507012                       ; 00506ff8
        ;   XREF to: 00507012 (CONDITIONAL_JUMP)  ; LAB_00507012
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00506ffa
    MOV dword ptr [ESP + 0x44],EAX      ; 00506ffe
    MOV EAX,dword ptr [ESP + 0x60]      ; 00507002
    MOV dword ptr [ESP + 0x48],EAX      ; 00507006
    MOV EAX,dword ptr [ESP + 0x64]      ; 0050700a
    MOV dword ptr [ESP + 0x4c],EAX      ; 0050700e
    LEA EAX,[ESP + 0x44]                ; 00507012
        ;   Label: LAB_00507012
    PUSH EAX                            ; 00507016
    PUSH EBX                            ; 00507017
    CALL core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90 ; 00507018
        ;   XREF to: 00506c90 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0050701d
    INC EBP                             ; 00507020
    CMP EBP,dword ptr [ESP + 0xbc]      ; 00507021
    JGE 0x00506f45                      ; 00507028
        ;   XREF to: 00506f45 (CONDITIONAL_JUMP)  ; LAB_00506f45
    JMP 0x00506f98                      ; 0050702e
        ;   XREF to: 00506f98 (UNCONDITIONAL_JUMP)  ; LAB_00506f98
    TEST EDX,EDX                        ; 00507033
        ;   Label: LAB_00507033
    JNZ 0x00506f45                      ; 00507035
        ;   XREF to: 00506f45 (CONDITIONAL_JUMP)  ; LAB_00506f45
    FLD float ptr [EBX + 0x17c]         ; 0050703b
    CALL crt_math.c_round_FUN_005c03a0  ; 00507041
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV dword ptr [ESP + 0xc0],EBP      ; 00507046
    MOV EDX,dword ptr [EAX]             ; 0050704d
    FISTP dword ptr [ESP + 0xa4]        ; 0050704f
    MOV dword ptr [ESP + 0xa8],EDX      ; 00507056
    TEST EDX,EDX                        ; 0050705d
    JLE 0x00506f45                      ; 0050705f
        ;   XREF to: 00506f45 (CONDITIONAL_JUMP)  ; LAB_00506f45
    MOV EBP,dword ptr [ESP + 0xa4]      ; 00507065
    MOV dword ptr [ESP + 0xb8],EAX      ; 0050706c
    MOV EAX,EBP                         ; 00507073
        ;   Label: LAB_00507073
    MOV EDX,EBP                         ; 00507075
    MOV ECX,dword ptr [EBX + 0x180]     ; 00507077
    SAR EDX,0x1f                        ; 0050707d
    IDIV ECX                            ; 00507080
    TEST EDX,EDX                        ; 00507082
    JNZ 0x005070a7                      ; 00507084
        ;   XREF to: 005070a7 (CONDITIONAL_JUMP)  ; LAB_005070a7
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00507086
        ;   Label: LAB_00507086
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0050708d
    INC EAX                             ; 00507094
    INC EBP                             ; 00507095
    MOV dword ptr [ESP + 0xc0],EAX      ; 00507096
    CMP EAX,EDX                         ; 0050709d
    JGE 0x00506f45                      ; 0050709f
        ;   XREF to: 00506f45 (CONDITIONAL_JUMP)  ; LAB_00506f45
    JMP 0x00507073                      ; 005070a5
        ;   XREF to: 00507073 (UNCONDITIONAL_JUMP)  ; LAB_00507073
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005070a7
        ;   Label: LAB_005070a7
    MOV dword ptr [ESP + 0xc4],EAX      ; 005070ae
    LEA EAX,[ESP + 0x80]                ; 005070b5
    MOV ESI,dword ptr [ESP + 0xb8]      ; 005070bc
    PUSH EAX                            ; 005070c3
    LEA EAX,[ESP + 0x54]                ; 005070c4
    FILD dword ptr [ESP + 0xc8]         ; 005070c8
    PUSH EAX                            ; 005070cf
    FSTP float ptr [ESP + 0xa4]         ; 005070d0
    PUSH dword ptr [ESP + 0xa4]         ; 005070d7
    PUSH ESI                            ; 005070de
    CALL core_course.cpp_FUN_00447f00   ; 005070df
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00447f00(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 005070e4
    LEA EAX,[ESP + 0x50]                ; 005070e7
    PUSH EAX                            ; 005070eb
    PUSH EBX                            ; 005070ec
    LEA ESI,[ESP + 0x40]                ; 005070ed
    LEA EDI,[ESP + 0x10]                ; 005070f1
    CALL core_actor.cpp_FUN_00408b40    ; 005070f5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x40]                ; 005070fa
    LEA EAX,[ESP + 0x10]                ; 005070fe
    ADD ESP,0x8                         ; 00507102
    LEA EDX,[ESP + 0x50]                ; 00507105
    MOVSD ES:EDI,ESI                    ; 00507109
    MOVSD ES:EDI,ESI                    ; 0050710a
    MOVSD ES:EDI,ESI                    ; 0050710b
    CMP EDX,EAX                         ; 0050710c
    JZ 0x00507128                       ; 0050710e
        ;   XREF to: 00507128 (CONDITIONAL_JUMP)  ; LAB_00507128
    MOV EAX,dword ptr [ESP + 0x8]       ; 00507110
    MOV dword ptr [ESP + 0x50],EAX      ; 00507114
    MOV EAX,dword ptr [ESP + 0xc]       ; 00507118
    MOV dword ptr [ESP + 0x54],EAX      ; 0050711c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00507120
    MOV dword ptr [ESP + 0x58],EAX      ; 00507124
    LEA EAX,[ESP + 0x50]                ; 00507128
        ;   Label: LAB_00507128
    PUSH EAX                            ; 0050712c
    PUSH EBX                            ; 0050712d
    CALL core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90 ; 0050712e
        ;   XREF to: 00506c90 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00507133
    JMP 0x00507086                      ; 00507136
        ;   XREF to: 00507086 (UNCONDITIONAL_JUMP)  ; LAB_00507086

