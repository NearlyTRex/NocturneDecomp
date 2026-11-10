; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004a6a50(CFlame *this_ptr,int layer_flag)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   undefined4 DAT_005c0bf4
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CFlameClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6a50
        ;   Label: core_flame.cpp_CFlame_renderBackground_FUN_004a6a50
    PUSH ESI                            ; 004a6a51
    PUSH EDI                            ; 004a6a52
    PUSH EBP                            ; 004a6a53
    MOV EBP,ESP                         ; 004a6a54
    SUB ESP,0x54                        ; 004a6a56
    AND ESP,0xfffffff8                  ; 004a6a59
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6a5c
    MOV EDX,dword ptr [0x005f2afc]      ; 004a6a5f | DAT_005f2afc
    MOV dword ptr [EAX + 0x2a0],0x0     ; 004a6a65
    PUSH EDX                            ; 004a6a6f | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x298],0x0     ; 004a6a70
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004a6a7a
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a6a7f
    TEST EAX,EAX                        ; 004a6a82
    JNZ 0x004a6a8c                      ; 004a6a84
        ;   XREF to: 004a6a8c (CONDITIONAL_JUMP)  ; LAB_004a6a8c
    CMP dword ptr [EBP + 0x18],0x0      ; 004a6a86
    JNZ 0x004a6a93                      ; 004a6a8a
        ;   XREF to: 004a6a93 (CONDITIONAL_JUMP)  ; LAB_004a6a93
    MOV ESP,EBP                         ; 004a6a8c
        ;   Label: LAB_004a6a8c
    POP EBP                             ; 004a6a8e
    POP EDI                             ; 004a6a8f
    POP ESI                             ; 004a6a90
    POP EBX                             ; 004a6a91
    RET                                 ; 004a6a92
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a6a93
        ;   Label: LAB_004a6a93
    PUSH EBX                            ; 004a6a96
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004a6a97
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a6a9c
    PUSH 0x0                            ; 004a6a9f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a6aa1
    PUSH EBX                            ; 004a6aa7
    LEA ESI,[ESP + 0x20]                ; 004a6aa8
    LEA EDI,[ESP + 0x8]                 ; 004a6aac
    CALL dword ptr [EAX + 0x1c]         ; 004a6ab0
    MOV ECX,0x6                         ; 004a6ab3
    ADD ESP,0x4                         ; 004a6ab8
    LEA EAX,[ESP + 0x4]                 ; 004a6abb
    LEA ESI,[ESP + 0x1c]                ; 004a6abf
    PUSH EAX                            ; 004a6ac3
    MOVSD.REP ES:EDI,ESI                ; 004a6ac4
    CALL core_box.cpp_FUN_0041daf0      ; 004a6ac6
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004a6acb
    PUSH EBX                            ; 004a6ace
    MOV dword ptr [EBX + 0x290],EAX     ; 004a6acf
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004a6ad5
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x290]     ; 004a6ada
    ADD ESP,0x4                         ; 004a6ae0
    TEST EDX,EDX                        ; 004a6ae3
    JZ 0x004a6a8c                       ; 004a6ae5
        ;   XREF to: 004a6a8c (CONDITIONAL_JUMP)  ; LAB_004a6a8c
    FLD float ptr [EBX + 0x15c]         ; 004a6ae7
    FMUL ST0                            ; 004a6aed
    FLD float ptr [EBX + 0x158]         ; 004a6aef
    FMUL ST0                            ; 004a6af5
    FADDP                               ; 004a6af7
    FLD float ptr [EBX + 0x160]         ; 004a6af9
    FMUL ST0                            ; 004a6aff
    FADDP                               ; 004a6b01
    FSQRT                               ; 004a6b03
    FLD1                                ; 004a6b05
    FCOMPP                              ; 004a6b07
    FNSTSW AX                           ; 004a6b09
    SAHF                                ; 004a6b0b
    JNC 0x004a6a8c                      ; 004a6b0c
        ;   XREF to: 004a6a8c (CONDITIONAL_JUMP)  ; LAB_004a6a8c
    FLD float ptr [EBX + 0x1ac]         ; 004a6b12
    FLDZ                                ; 004a6b18
    FCOMPP                              ; 004a6b1a
    FNSTSW AX                           ; 004a6b1c
    SAHF                                ; 004a6b1e
    JNC 0x004a6a8c                      ; 004a6b1f
        ;   XREF to: 004a6a8c (CONDITIONAL_JUMP)  ; LAB_004a6a8c
    MOV ECX,dword ptr [EBX + 0x1a8]     ; 004a6b25
    TEST ECX,ECX                        ; 004a6b2b
    JNZ 0x004a6a8c                      ; 004a6b2d
        ;   XREF to: 004a6a8c (CONDITIONAL_JUMP)  ; LAB_004a6a8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6b33
    MOV dword ptr [ESP + 0x48],ECX      ; 004a6b36
    MOV dword ptr [ESP + 0x50],ECX      ; 004a6b3a
    ADD EAX,0x20                        ; 004a6b3e
    XOR EBX,EBX                         ; 004a6b41
    MOV dword ptr [ESP + 0x4c],EAX      ; 004a6b43
    MOV EAX,[0x00603b28]                ; 004a6b47 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004a6b47
    MOV EDX,dword ptr [ESP + 0x50]      ; 004a6b4c
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004a6b50 | g_CDemonSetInstance.actor_count
    JL 0x004a6b85                       ; 004a6b56
        ;   XREF to: 004a6b85 (CONDITIONAL_JUMP)  ; LAB_004a6b85
    CMP dword ptr [ESP + 0x48],0x0      ; 004a6b58
    JNZ 0x004a6a8c                      ; 004a6b5d
        ;   XREF to: 004a6a8c (CONDITIONAL_JUMP)  ; LAB_004a6a8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6b63
    MOV dword ptr [EAX + 0x2a0],0x1     ; 004a6b66
    MOV ESP,EBP                         ; 004a6b70
    POP EBP                             ; 004a6b72
    POP EDI                             ; 004a6b73
    POP ESI                             ; 004a6b74
    POP EBX                             ; 004a6b75
    RET                                 ; 004a6b76
    MOV EDI,dword ptr [ESP + 0x50]      ; 004a6b77
        ;   Label: LAB_004a6b77
    INC EDI                             ; 004a6b7b
    ADD EBX,0x4                         ; 004a6b7c
    MOV dword ptr [ESP + 0x50],EDI      ; 004a6b7f
    JMP 0x004a6b47                      ; 004a6b83
        ;   XREF to: 004a6b47 (UNCONDITIONAL_JUMP)  ; LAB_004a6b47
    MOV EDX,dword ptr [0x01d0cf24]      ; 004a6b85 | g_CFlameClassInfo.name_hash
        ;   Label: LAB_004a6b85
    PUSH EDX                            ; 004a6b8b
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004a6b8c | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004a6b93
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a6b94
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EDX,EAX                         ; 004a6b99
    ADD ESP,0x8                         ; 004a6b9b
    TEST EAX,EAX                        ; 004a6b9e
    JZ 0x004a6b77                       ; 004a6ba0
        ;   XREF to: 004a6b77 (CONDITIONAL_JUMP)  ; LAB_004a6b77
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004a6ba2
    LEA EDI,[ESP + 0x30]                ; 004a6ba6
    FLD float ptr [ESI + 0x4]           ; 004a6baa
    FLD float ptr [ESI + 0x8]           ; 004a6bad
    FLD float ptr [ESI]                 ; 004a6bb0
    LEA ESI,[ESP + 0x3c]                ; 004a6bb2
    FSUB float ptr [EAX + 0x20]         ; 004a6bb6
    FXCH ST2                            ; 004a6bb9
    FSUB float ptr [EAX + 0x24]         ; 004a6bbb
    FXCH                                ; 004a6bbe
    FSUB float ptr [EAX + 0x28]         ; 004a6bc0
    FXCH ST2                            ; 004a6bc3
    FSTP float ptr [ESP + 0x3c]         ; 004a6bc5
    FSTP float ptr [ESP + 0x40]         ; 004a6bc9
    FSTP float ptr [ESP + 0x44]         ; 004a6bcd
    MOVSD ES:EDI,ESI                    ; 004a6bd1
    MOVSD ES:EDI,ESI                    ; 004a6bd2
    MOVSD ES:EDI,ESI                    ; 004a6bd3
    FLD float ptr [ESP + 0x34]          ; 004a6bd4
    FMUL ST0                            ; 004a6bd8
    FLD float ptr [ESP + 0x30]          ; 004a6bda
    FMUL ST0                            ; 004a6bde
    FADDP                               ; 004a6be0
    FLD float ptr [ESP + 0x38]          ; 004a6be2
    FMUL ST0                            ; 004a6be6
    FADDP                               ; 004a6be8
    ADD EAX,0x20                        ; 004a6bea
    FSQRT                               ; 004a6bed
    FCOMP double ptr [0x005c0bf4]       ; 004a6bef | DAT_005c0bf4
    FNSTSW AX                           ; 004a6bf5
    SAHF                                ; 004a6bf7
    JNC 0x004a6b77                      ; 004a6bf8
        ;   XREF to: 004a6b77 (CONDITIONAL_JUMP)  ; LAB_004a6b77
    CMP dword ptr [EDX + 0x2a0],0x1     ; 004a6bfe
    JNZ 0x004a6b77                      ; 004a6c05
        ;   XREF to: 004a6b77 (CONDITIONAL_JUMP)  ; LAB_004a6b77
    MOV ESP,EBP                         ; 004a6c0b
    POP EBP                             ; 004a6c0d
    POP EDI                             ; 004a6c0e
    POP ESI                             ; 004a6c0f
    POP EBX                             ; 004a6c10
    RET                                 ; 004a6c11

