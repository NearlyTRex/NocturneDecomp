; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004afe80(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00509a80 at 00509ea7
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508c99
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77600
;   undefined4 DAT_01c7ccf0
;   undefined4 DAT_01c9e038
;   undefined4 DAT_01c9e540
;
; Called Functions:
;   core_gore.cpp_CBloodPool_render_FUN_004af340
;   core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0
;   core_gore.cpp_CBloodSplat_render_FUN_004aeb70
;   core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0
;   core_gore.cpp_CFootstep_render_FUN_004afa20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afe80
        ;   Label: FUN_004afe80
    PUSH ESI                            ; 004afe81
    PUSH EDI                            ; 004afe82
    PUSH EBP                            ; 004afe83
    MOV EDI,dword ptr [ESP + 0x18]      ; 004afe84
    MOV EAX,[0x005b9354]                ; 004afe88 | DAT_005b9354
    CMP dword ptr [EAX + 0x14],0x0      ; 004afe8d | DAT_01c77600
    JNZ 0x004afea5                      ; 004afe91
        ;   XREF to: 004afea5 (CONDITIONAL_JUMP)  ; LAB_004afea5
    LEA EAX,[EAX]                       ; 004afe93
    LEA EDX,[EDX]                       ; 004afe99
    NOP                                 ; 004afe9f
    POP EBP                             ; 004afea0
        ;   Label: LAB_004afea0
    POP EDI                             ; 004afea1
    POP ESI                             ; 004afea2
    POP EBX                             ; 004afea3
    RET                                 ; 004afea4
    PUSH 0x1c7ccf4                      ; 004afea5
        ;   Label: LAB_004afea5
    CALL core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0 ; 004afeaa
        ;   XREF to: 004aeae0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodSplat_setupRenderState_FUN_004aeae0()
    ADD ESP,0x4                         ; 004afeaf
    TEST EDI,EDI                        ; 004afeb2
    JZ 0x004aff68                       ; 004afeb4
        ;   XREF to: 004aff68 (CONDITIONAL_JUMP)  ; LAB_004aff68
    MOV EBX,dword ptr [0x01c7ccf0]      ; 004afeba | DAT_01c7ccf0
    XOR ESI,ESI                         ; 004afec0
    TEST EBX,EBX                        ; 004afec2
    JLE 0x004afef0                      ; 004afec4
        ;   XREF to: 004afef0 (CONDITIONAL_JUMP)  ; LAB_004afef0
    MOV EBX,0x1c7ccf4                   ; 004afec6
    PUSH EBX                            ; 004afecb
        ;   Label: LAB_004afecb
    CALL core_gore.cpp_CBloodSplat_render_FUN_004aeb70 ; 004afecc
        ;   XREF to: 004aeb70 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodSplat_render_FUN_004aeb70()
    INC ESI                             ; 004afed1
    MOV EDX,dword ptr [0x01c7ccf0]      ; 004afed2 | DAT_01c7ccf0
    ADD ESP,0x4                         ; 004afed8
    ADD EBX,0x44                        ; 004afedb
    CMP ESI,EDX                         ; 004afede
    JL 0x004afecb                       ; 004afee0
        ;   XREF to: 004afecb (CONDITIONAL_JUMP)  ; LAB_004afecb
    LEA EAX,[EAX]                       ; 004afee2
    LEA EDX,[EDX]                       ; 004afee8
    MOV EAX,EAX                         ; 004afeee
    PUSH 0x1c9e03c                      ; 004afef0
        ;   Label: LAB_004afef0
    CALL core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0 ; 004afef5
        ;   XREF to: 004af2a0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0()
    ADD ESP,0x4                         ; 004afefa
    TEST EDI,EDI                        ; 004afefd
    JZ 0x004affa9                       ; 004afeff
        ;   XREF to: 004affa9 (CONDITIONAL_JUMP)  ; LAB_004affa9
    MOV EBX,dword ptr [0x01c9e038]      ; 004aff05 | DAT_01c9e038
    XOR ESI,ESI                         ; 004aff0b
    TEST EBX,EBX                        ; 004aff0d
    JLE 0x004aff30                      ; 004aff0f
        ;   XREF to: 004aff30 (CONDITIONAL_JUMP)  ; LAB_004aff30
    MOV EBX,0x1c9e03c                   ; 004aff11
    PUSH EBX                            ; 004aff16
        ;   Label: LAB_004aff16
    CALL core_gore.cpp_CBloodPool_render_FUN_004af340 ; 004aff17
        ;   XREF to: 004af340 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodPool_render_FUN_004af340()
    INC ESI                             ; 004aff1c
    MOV EDX,dword ptr [0x01c9e038]      ; 004aff1d | DAT_01c9e038
    ADD ESP,0x4                         ; 004aff23
    ADD EBX,0x28                        ; 004aff26
    CMP ESI,EDX                         ; 004aff29
    JL 0x004aff16                       ; 004aff2b
        ;   XREF to: 004aff16 (CONDITIONAL_JUMP)  ; LAB_004aff16
    LEA EAX,[EAX]                       ; 004aff2d
    TEST EDI,EDI                        ; 004aff30
        ;   Label: LAB_004aff30
    JZ 0x004affea                       ; 004aff32
        ;   XREF to: 004affea (CONDITIONAL_JUMP)  ; LAB_004affea
    MOV ESI,dword ptr [0x01c9e540]      ; 004aff38 | DAT_01c9e540
    XOR EBX,EBX                         ; 004aff3e
    TEST ESI,ESI                        ; 004aff40
    JLE 0x004afea0                      ; 004aff42
        ;   XREF to: 004afea0 (CONDITIONAL_JUMP)  ; LAB_004afea0
    MOV ESI,0x1c9e544                   ; 004aff48
    PUSH ESI                            ; 004aff4d
        ;   Label: LAB_004aff4d
    CALL core_gore.cpp_CFootstep_render_FUN_004afa20 ; 004aff4e
        ;   XREF to: 004afa20 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CFootstep_render_FUN_004afa20()
    INC EBX                             ; 004aff53
    MOV EAX,[0x01c9e540]                ; 004aff54 | DAT_01c9e540
    ADD ESP,0x4                         ; 004aff59
    ADD ESI,0x40                        ; 004aff5c
    CMP EBX,EAX                         ; 004aff5f
    JL 0x004aff4d                       ; 004aff61
        ;   XREF to: 004aff4d (CONDITIONAL_JUMP)  ; LAB_004aff4d
    POP EBP                             ; 004aff63
    POP EDI                             ; 004aff64
    POP ESI                             ; 004aff65
    POP EBX                             ; 004aff66
    RET                                 ; 004aff67
    MOV ECX,dword ptr [0x01c7ccf0]      ; 004aff68 | DAT_01c7ccf0
        ;   Label: LAB_004aff68
    XOR ESI,ESI                         ; 004aff6e
    TEST ECX,ECX                        ; 004aff70
    JLE 0x004afef0                      ; 004aff72
        ;   XREF to: 004afef0 (CONDITIONAL_JUMP)  ; LAB_004afef0
    XOR EBX,EBX                         ; 004aff78
    CMP dword ptr [EBX + 0x1c7ccf4],0x0 ; 004aff7a
        ;   Label: LAB_004aff7a
    JZ 0x004aff97                       ; 004aff81
        ;   XREF to: 004aff97 (CONDITIONAL_JUMP)  ; LAB_004aff97
    MOV EBP,dword ptr [0x01c7ccf0]      ; 004aff83 | DAT_01c7ccf0
        ;   Label: LAB_004aff83
    INC ESI                             ; 004aff89
    ADD EBX,0x44                        ; 004aff8a
    CMP ESI,EBP                         ; 004aff8d
    JGE 0x004afef0                      ; 004aff8f
        ;   XREF to: 004afef0 (CONDITIONAL_JUMP)  ; LAB_004afef0
    JMP 0x004aff7a                      ; 004aff95
        ;   XREF to: 004aff7a (UNCONDITIONAL_JUMP)  ; LAB_004aff7a
    MOV EAX,0x1c7ccf4                   ; 004aff97
        ;   Label: LAB_004aff97
    ADD EAX,EBX                         ; 004aff9c
    PUSH EAX                            ; 004aff9e
    CALL core_gore.cpp_CBloodSplat_render_FUN_004aeb70 ; 004aff9f
        ;   XREF to: 004aeb70 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodSplat_render_FUN_004aeb70()
    ADD ESP,0x4                         ; 004affa4
    JMP 0x004aff83                      ; 004affa7
        ;   XREF to: 004aff83 (UNCONDITIONAL_JUMP)  ; LAB_004aff83
    MOV ECX,dword ptr [0x01c9e038]      ; 004affa9 | DAT_01c9e038
        ;   Label: LAB_004affa9
    XOR ESI,ESI                         ; 004affaf
    TEST ECX,ECX                        ; 004affb1
    JLE 0x004aff30                      ; 004affb3
        ;   XREF to: 004aff30 (CONDITIONAL_JUMP)  ; LAB_004aff30
    XOR EBX,EBX                         ; 004affb9
    CMP dword ptr [EBX + 0x1c9e03c],0x0 ; 004affbb
        ;   Label: LAB_004affbb
    JZ 0x004affd8                       ; 004affc2
        ;   XREF to: 004affd8 (CONDITIONAL_JUMP)  ; LAB_004affd8
    MOV EBP,dword ptr [0x01c9e038]      ; 004affc4 | DAT_01c9e038
        ;   Label: LAB_004affc4
    INC ESI                             ; 004affca
    ADD EBX,0x28                        ; 004affcb
    CMP ESI,EBP                         ; 004affce
    JGE 0x004aff30                      ; 004affd0
        ;   XREF to: 004aff30 (CONDITIONAL_JUMP)  ; LAB_004aff30
    JMP 0x004affbb                      ; 004affd6
        ;   XREF to: 004affbb (UNCONDITIONAL_JUMP)  ; LAB_004affbb
    MOV EAX,0x1c9e03c                   ; 004affd8
        ;   Label: LAB_004affd8
    ADD EAX,EBX                         ; 004affdd
    PUSH EAX                            ; 004affdf
    CALL core_gore.cpp_CBloodPool_render_FUN_004af340 ; 004affe0
        ;   XREF to: 004af340 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CBloodPool_render_FUN_004af340()
    ADD ESP,0x4                         ; 004affe5
    JMP 0x004affc4                      ; 004affe8
        ;   XREF to: 004affc4 (UNCONDITIONAL_JUMP)  ; LAB_004affc4
    MOV ECX,dword ptr [0x01c9e540]      ; 004affea | DAT_01c9e540
        ;   Label: LAB_004affea
    XOR ESI,ESI                         ; 004afff0
    TEST ECX,ECX                        ; 004afff2
    JLE 0x004afea0                      ; 004afff4
        ;   XREF to: 004afea0 (CONDITIONAL_JUMP)  ; LAB_004afea0
    XOR EBX,EBX                         ; 004afffa
    CMP dword ptr [EBX + 0x1c9e544],0x0 ; 004afffc
        ;   Label: LAB_004afffc
    JZ 0x004b0019                       ; 004b0003
        ;   XREF to: 004b0019 (CONDITIONAL_JUMP)  ; LAB_004b0019
    MOV EDI,dword ptr [0x01c9e540]      ; 004b0005 | DAT_01c9e540
        ;   Label: LAB_004b0005
    INC ESI                             ; 004b000b
    ADD EBX,0x40                        ; 004b000c
    CMP ESI,EDI                         ; 004b000f
    JGE 0x004afea0                      ; 004b0011
        ;   XREF to: 004afea0 (CONDITIONAL_JUMP)  ; LAB_004afea0
    JMP 0x004afffc                      ; 004b0017
        ;   XREF to: 004afffc (UNCONDITIONAL_JUMP)  ; LAB_004afffc
    MOV EAX,0x1c9e544                   ; 004b0019
        ;   Label: LAB_004b0019
    ADD EAX,EBX                         ; 004b001e
    PUSH EAX                            ; 004b0020
    CALL core_gore.cpp_CFootstep_render_FUN_004afa20 ; 004b0021
        ;   XREF to: 004afa20 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CFootstep_render_FUN_004afa20()
    ADD ESP,0x4                         ; 004b0026
    JMP 0x004b0005                      ; 004b0029
        ;   XREF to: 004b0005 (UNCONDITIONAL_JUMP)  ; LAB_004b0005

