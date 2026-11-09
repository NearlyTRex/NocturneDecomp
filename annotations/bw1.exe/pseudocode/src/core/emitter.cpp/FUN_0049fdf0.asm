; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_emitter_cpp_FUN_0049fdf0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_fire.cpp_FUN_004b6420
;   core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049fdf0
        ;   Label: core_emitter.cpp_FUN_0049fdf0
    PUSH ESI                            ; 0049fdf1
    PUSH EDI                            ; 0049fdf2
    PUSH EBP                            ; 0049fdf3
    MOV EBP,ESP                         ; 0049fdf4
    SUB ESP,0x78                        ; 0049fdf6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049fdf9
    MOV EDX,dword ptr [0x00612560]      ; 0049fdfc | DAT_00612560
    PUSH EDX                            ; 0049fe02 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0049fe03
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0049fe08
    TEST EAX,EAX                        ; 0049fe0b
    JNZ 0x0049fe21                      ; 0049fe0d
        ;   XREF to: 0049fe21 (CONDITIONAL_JUMP)  ; LAB_0049fe21
    CMP dword ptr [EBX + 0x158],0x3     ; 0049fe0f
    JNZ 0x0049fe21                      ; 0049fe16
        ;   XREF to: 0049fe21 (CONDITIONAL_JUMP)  ; LAB_0049fe21
    CMP dword ptr [EBX + 0x168],0x0     ; 0049fe18
    JNZ 0x0049fe2a                      ; 0049fe1f
        ;   XREF to: 0049fe2a (CONDITIONAL_JUMP)  ; LAB_0049fe2a
    XOR EAX,EAX                         ; 0049fe21
        ;   Label: LAB_0049fe21
    MOV ESP,EBP                         ; 0049fe23
    POP EBP                             ; 0049fe25
    POP EDI                             ; 0049fe26
    POP ESI                             ; 0049fe27
    POP EBX                             ; 0049fe28
    RET                                 ; 0049fe29
    MOV EDI,dword ptr [0x00622c18]      ; 0049fe2a | g_CDemonSetPtr
        ;   Label: LAB_0049fe2a
    PUSH EDI                            ; 0049fe30 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0049fe31
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049fe36
    PUSH EBX                            ; 0049fe39
    MOV EAX,[0x00622c18]                ; 0049fe3a | g_CDemonSetPtr
    PUSH EAX                            ; 0049fe3f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0049fe40
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049fe45
    LEA EAX,[EBP + -0x78]               ; 0049fe48
    PUSH EAX                            ; 0049fe4b
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0 ; 0049fe4c
        ;   XREF to: 004b63e0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0(SLaserInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0x238]     ; 0049fe51
    LEA ESI,[EBP + -0x78]               ; 0049fe57
    MOV dword ptr [EBP + -0x70],EAX     ; 0049fe5a
    ADD ESP,0x4                         ; 0049fe5d
    MOV EAX,dword ptr [EBX + 0x23c]     ; 0049fe60
    XOR ECX,ECX                         ; 0049fe66
    MOV dword ptr [EBP + -0x6c],EAX     ; 0049fe68
    PUSH ECX                            ; 0049fe6b
    MOV EAX,dword ptr [EBX + 0x240]     ; 0049fe6c
    MOV EDX,0x3f800000                  ; 0049fe72
    MOV dword ptr [EBP + -0x68],EAX     ; 0049fe77
    SUB ESP,0x54                        ; 0049fe7a
    MOV EAX,dword ptr [EBX + 0x244]     ; 0049fe7d
    MOV EDI,ESP                         ; 0049fe83
    MOV dword ptr [EBP + -0x64],EAX     ; 0049fe85
    MOV dword ptr [EBP + -0x78],EDX     ; 0049fe88
    MOV dword ptr [EBP + -0x60],ECX     ; 0049fe8b
    MOV dword ptr [EBP + -0x5c],ECX     ; 0049fe8e
    MOV ECX,0x15                        ; 0049fe91
    MOV EDX,0x42c80000                  ; 0049fe96
    LEA EAX,[EBP + -0x18]               ; 0049fe9b
    MOVSD.REP ES:EDI,ESI                ; 0049fe9e
    PUSH EAX                            ; 0049fea0
    LEA ESI,[EBP + -0x24]               ; 0049fea1
    MOV dword ptr [EBP + -0x10],EDX     ; 0049fea4
    XOR EDI,EDI                         ; 0049fea7
    PUSH EBX                            ; 0049fea9
    MOV dword ptr [EBP + -0x18],EDI     ; 0049feaa
    MOV dword ptr [EBP + -0x14],EDI     ; 0049fead
    CALL core_actor.cpp_FUN_00408ac0    ; 0049feb0
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 0049feb5
    LEA EAX,[EBP + -0xc]                ; 0049feb8
    PUSH EAX                            ; 0049febb
    ADD EBX,0x20                        ; 0049febc
    LEA EDI,[EBP + -0xc]                ; 0049febf
    PUSH EBX                            ; 0049fec2
    MOV ECX,dword ptr [0x0061c010]      ; 0049fec3 | DAT_0061c010
    LEA ESI,[EBP + -0x24]               ; 0049fec9
    PUSH ECX                            ; 0049fecc
    MOVSD ES:EDI,ESI                    ; 0049fecd
    MOVSD ES:EDI,ESI                    ; 0049fece
    MOVSD ES:EDI,ESI                    ; 0049fecf
    CALL core_fire.cpp_FUN_004b6420     ; 0049fed0
        ;   XREF to: 004b6420 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004b6420()
    ADD ESP,0x64                        ; 0049fed5
    MOV EBX,dword ptr [0x00622c18]      ; 0049fed8 | g_CDemonSetPtr
    PUSH EBX                            ; 0049fede | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0049fedf
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 0049fee4
    ADD ESP,0x4                         ; 0049fee9
    MOV ESP,EBP                         ; 0049feec
    POP EBP                             ; 0049feee
    POP EDI                             ; 0049feef
    POP ESI                             ; 0049fef0
    POP EBX                             ; 0049fef1
    RET                                 ; 0049fef2

