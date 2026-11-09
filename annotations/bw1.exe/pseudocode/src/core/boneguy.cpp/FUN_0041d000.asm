; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_boneguy_cpp_FUN_0041d000(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 g_CDemonSetInstance.field1420440_0x15ac98
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d000
        ;   Label: core_boneguy.cpp_FUN_0041d000
    PUSH EBP                            ; 0041d001
    SUB ESP,0x30                        ; 0041d002
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0041d005
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0041d009
    JZ 0x0041d01a                       ; 0041d010
        ;   XREF to: 0041d01a (CONDITIONAL_JUMP)  ; LAB_0041d01a
    XOR EAX,EAX                         ; 0041d012
    ADD ESP,0x30                        ; 0041d014
    POP EBP                             ; 0041d017
    POP EBX                             ; 0041d018
    RET                                 ; 0041d019
    PUSH EDI                            ; 0041d01a
        ;   Label: LAB_0041d01a
    PUSH ESI                            ; 0041d01b
    PUSH EBX                            ; 0041d01c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0041d01d
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041d022
    PUSH 0x0                            ; 0041d025
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041d027
    PUSH EBX                            ; 0041d02d
    LEA ESI,[ESP + 0x28]                ; 0041d02e
    LEA EDI,[ESP + 0x10]                ; 0041d032
    CALL dword ptr [EAX + 0x1c]         ; 0041d036
    MOV ECX,0x6                         ; 0041d039
    ADD ESP,0x4                         ; 0041d03e
    LEA EAX,[ESP + 0xc]                 ; 0041d041
    LEA ESI,[ESP + 0x24]                ; 0041d045
    PUSH EAX                            ; 0041d049
    MOVSD.REP ES:EDI,ESI                ; 0041d04a
    CALL core_box.cpp_FUN_004207b0      ; 0041d04c
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0041d051
    MOV ESI,EAX                         ; 0041d054
    TEST EAX,EAX                        ; 0041d056
    JZ 0x0041d0b5                       ; 0041d058
        ;   XREF to: 0041d0b5 (CONDITIONAL_JUMP)  ; LAB_0041d0b5
    PUSH 0x0                            ; 0041d05a
    MOV ECX,dword ptr [0x00612560]      ; 0041d05c | DAT_00612560
    PUSH ECX                            ; 0041d062 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40 ; 0041d063
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0041d068
    PUSH 0xffff                         ; 0041d06b
    MOV EDI,dword ptr [0x00612560]      ; 0041d070 | DAT_00612560
    MOV EAX,[0x00622c18]                ; 0041d076 | g_CDemonSetPtr
    PUSH EDI                            ; 0041d07b | DAT_01bc120c
    MOV dword ptr [EAX + 0x15ac98],0x1  ; 0041d07c | g_CDemonSetInstance.field1420440_0x15ac98
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 0041d086
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0041d08b
    PUSH EBX                            ; 0041d08e
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 0041d08f
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041d094
    MOV EBP,dword ptr [0x00612560]      ; 0041d097 | DAT_00612560
    MOV EAX,[0x00622c18]                ; 0041d09d | g_CDemonSetPtr
    PUSH EBP                            ; 0041d0a2 | DAT_01bc120c
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 0041d0a3 | g_CDemonSetInstance.field1420440_0x15ac98
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 ; 0041d0ad
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041d0b2
    PUSH EBX                            ; 0041d0b5
        ;   Label: LAB_0041d0b5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0041d0b6
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041d0bb
    MOV EAX,ESI                         ; 0041d0be
    POP ESI                             ; 0041d0c0
    POP EDI                             ; 0041d0c1
    ADD ESP,0x30                        ; 0041d0c2
    POP EBP                             ; 0041d0c5
    POP EBX                             ; 0041d0c6
    RET                                 ; 0041d0c7

