; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0050e080(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640 at 0050a772
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507e2d
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 005098e7
;   core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0 at 0050a8fe
;   core_set.cpp_FUN_00509a80 at 00509bbd
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   undefined4 DAT_020842b4
;   undefined4 DAT_020842b8
;   undefined4 DAT_020842bc
;   undefined4 DAT_020842c0
;   undefined4 DAT_020842c4
;   undefined4 DAT_020842c8
;   undefined4 DAT_020842cc
;
; Called Functions:
;   core_dcamera.cpp_FUN_004477f0
;   core_mirror.cpp_FUN_004d6650
;   engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e080
        ;   Label: core_set.cpp_FUN_0050e080
    PUSH ESI                            ; 0050e081
    PUSH EDI                            ; 0050e082
    PUSH EBP                            ; 0050e083
    SUB ESP,0x1c                        ; 0050e084
    MOV EBX,dword ptr [ESP + 0x34]      ; 0050e087
    LEA EAX,[ESP + 0xc]                 ; 0050e08b
    PUSH EAX                            ; 0050e08f
    MOV EDX,dword ptr [0x005ae704]      ; 0050e090 | DAT_005ae704
    PUSH EDX                            ; 0050e096 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 0050e097
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30()
    ADD ESP,0x8                         ; 0050e09c
    CMP EAX,0x20842b4                   ; 0050e09f
    JZ 0x0050e0c0                       ; 0050e0a4
        ;   XREF to: 0050e0c0 (CONDITIONAL_JUMP)  ; LAB_0050e0c0
    FLD float ptr [EAX]                 ; 0050e0a6
    FLD float ptr [EAX + 0x8]           ; 0050e0a8
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050e0ab
    MOV dword ptr [0x020842b8],EDX      ; 0050e0ae | DAT_020842b8
    FSTP float ptr [0x020842bc]         ; 0050e0b4 | DAT_020842bc
    FSTP float ptr [0x020842b4]         ; 0050e0ba | DAT_020842b4
    MOV EAX,ESP                         ; 0050e0c0
        ;   Label: LAB_0050e0c0
    PUSH EAX                            ; 0050e0c2
    MOV ECX,dword ptr [0x005ae704]      ; 0050e0c3 | DAT_005ae704
    PUSH ECX                            ; 0050e0c9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 0050e0ca
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0()
    ADD ESP,0x8                         ; 0050e0cf
    CMP EAX,0x20842c0                   ; 0050e0d2
    JZ 0x0050e0f3                       ; 0050e0d7
        ;   XREF to: 0050e0f3 (CONDITIONAL_JUMP)  ; LAB_0050e0f3
    FLD float ptr [EAX]                 ; 0050e0d9
    FLD float ptr [EAX + 0x8]           ; 0050e0db
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050e0de
    MOV dword ptr [0x020842c4],EDX      ; 0050e0e1 | DAT_020842c4
    FSTP float ptr [0x020842c8]         ; 0050e0e7 | DAT_020842c8
    FSTP float ptr [0x020842c0]         ; 0050e0ed | DAT_020842c0
    MOV ESI,dword ptr [0x005ae704]      ; 0050e0f3 | DAT_005ae704
        ;   Label: LAB_0050e0f3
    PUSH ESI                            ; 0050e0f9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20 ; 0050e0fa
        ;   XREF to: 00460e20 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050e0ff
    LEA ESI,[EBX*0x4 + 0x0]             ; 0050e103
    FLD float ptr [ESP + 0x1c]          ; 0050e10a
    ADD ESP,0x4                         ; 0050e10e
    FSTP float ptr [0x020842cc]         ; 0050e111 | DAT_020842cc
    MOV EDI,dword ptr [ESP + 0x30]      ; 0050e117
    PUSH dword ptr [0x020842cc]         ; 0050e11b | DAT_020842cc
    ADD ESI,EDI                         ; 0050e121
    PUSH 0x20842c0                      ; 0050e123 | DAT_020842c0
    MOV EAX,dword ptr [ESI + 0x15a8d0]  ; 0050e128
    PUSH 0x20842b4                      ; 0050e12e | DAT_020842b4
    ADD EAX,0x1e4                       ; 0050e133
    PUSH EAX                            ; 0050e138
    CALL core_mirror.cpp_FUN_004d6650   ; 0050e139
        ;   XREF to: 004d6650 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004d6650()
    ADD ESP,0x10                        ; 0050e13e
    PUSH 0x1                            ; 0050e141
    MOV EBP,dword ptr [0x005ae704]      ; 0050e143 | DAT_005ae704
    PUSH EBP                            ; 0050e149 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0 ; 0050e14a
        ;   XREF to: 004613c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0()
    ADD ESP,0x8                         ; 0050e14f
    INC EBX                             ; 0050e152
    PUSH EBX                            ; 0050e153
    MOV EAX,[0x007f7370]                ; 0050e154 | DAT_007f7370
    PUSH EAX                            ; 0050e159
    CALL core_dcamera.cpp_FUN_004477f0  ; 0050e15a
        ;   XREF to: 004477f0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_004477f0()
    ADD ESP,0x8                         ; 0050e15f
    PUSH EBX                            ; 0050e162
    MOV EDX,dword ptr [0x005ae704]      ; 0050e163 | DAT_005ae704
    PUSH EDX                            ; 0050e169 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0 ; 0050e16a
        ;   XREF to: 004613a0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0()
    MOV EAX,dword ptr [ESI + 0x15a8d0]  ; 0050e16f
    ADD EAX,0x1e4                       ; 0050e175
    ADD ESP,0x8                         ; 0050e17a
    MOV dword ptr [EDI + 0x161268],EAX  ; 0050e17d
    ADD ESP,0x1c                        ; 0050e183
    POP EBP                             ; 0050e186
    POP EDI                             ; 0050e187
    POP ESI                             ; 0050e188
    POP EBX                             ; 0050e189
    RET                                 ; 0050e18a

