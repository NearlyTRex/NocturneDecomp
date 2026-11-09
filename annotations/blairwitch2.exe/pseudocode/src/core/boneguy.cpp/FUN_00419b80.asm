; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_boneguy_cpp_FUN_00419b80(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 g_CDemonSetInstance.field1420440_0x15ac98
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_FUN_00424bd0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419b80
        ;   Label: core_boneguy.cpp_FUN_00419b80
    PUSH EBP                            ; 00419b81
    SUB ESP,0x30                        ; 00419b82
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00419b85
    CMP dword ptr [EBX + 0x2568],0x0    ; 00419b89
    JZ 0x00419b9a                       ; 00419b90
        ;   XREF to: 00419b9a (CONDITIONAL_JUMP)  ; LAB_00419b9a
    XOR EAX,EAX                         ; 00419b92
    ADD ESP,0x30                        ; 00419b94
    POP EBP                             ; 00419b97
    POP EBX                             ; 00419b98
    RET                                 ; 00419b99
    PUSH EDI                            ; 00419b9a
        ;   Label: LAB_00419b9a
    PUSH ESI                            ; 00419b9b
    PUSH EBX                            ; 00419b9c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00419b9d
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00419ba2
    PUSH 0x0                            ; 00419ba5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00419ba7
    PUSH EBX                            ; 00419bad
    LEA ESI,[ESP + 0x28]                ; 00419bae
    LEA EDI,[ESP + 0x10]                ; 00419bb2
    CALL dword ptr [EAX + 0x24]         ; 00419bb6
    MOV ECX,0x6                         ; 00419bb9
    ADD ESP,0x4                         ; 00419bbe
    LEA EAX,[ESP + 0xc]                 ; 00419bc1
    LEA ESI,[ESP + 0x24]                ; 00419bc5
    PUSH EAX                            ; 00419bc9
    MOVSD.REP ES:EDI,ESI                ; 00419bca
    CALL core_box.cpp_FUN_0041a840      ; 00419bcc
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00419bd1
    MOV ESI,EAX                         ; 00419bd4
    TEST EAX,EAX                        ; 00419bd6
    JZ 0x00419c35                       ; 00419bd8
        ;   XREF to: 00419c35 (CONDITIONAL_JUMP)  ; LAB_00419c35
    PUSH 0x0                            ; 00419bda
    MOV ECX,dword ptr [0x0060b280]      ; 00419bdc | DAT_0060b280
    PUSH ECX                            ; 00419be2 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540 ; 00419be3
        ;   XREF to: 0046c540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00419be8
    PUSH 0xffff                         ; 00419beb
    MOV EDI,dword ptr [0x0060b280]      ; 00419bf0 | DAT_0060b280
    MOV EAX,[0x0061b5a8]                ; 00419bf6 | g_CDemonSetPtr
    PUSH EDI                            ; 00419bfb | DAT_01ba5c50
    MOV dword ptr [EAX + 0x15ac98],0x1  ; 00419bfc | g_CDemonSetInstance.field1420440_0x15ac98
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00419c06
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00419c0b
    PUSH EBX                            ; 00419c0e
    CALL core_charactr.cpp_FUN_00424bd0 ; 00419c0f
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00419c14
    MOV EBP,dword ptr [0x0060b280]      ; 00419c17 | DAT_0060b280
    MOV EAX,[0x0061b5a8]                ; 00419c1d | g_CDemonSetPtr
    PUSH EBP                            ; 00419c22 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00419c23 | g_CDemonSetInstance.field1420440_0x15ac98
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 ; 00419c2d
        ;   XREF to: 0046c900 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00419c32
    PUSH EBX                            ; 00419c35
        ;   Label: LAB_00419c35
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00419c36
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00419c3b
    MOV EAX,ESI                         ; 00419c3e
    POP ESI                             ; 00419c40
    POP EDI                             ; 00419c41
    ADD ESP,0x30                        ; 00419c42
    POP EBP                             ; 00419c45
    POP EBX                             ; 00419c46
    RET                                 ; 00419c47

