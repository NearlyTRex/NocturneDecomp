; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bodypart_cpp_FUN_00415e10(CBodyPart *param_1)
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
;   core_bodypart.cpp_FUN_004159e0
;   core_flame.cpp_FUN_0049f850
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00415e10
        ;   Label: core_bodypart.cpp_FUN_00415e10
    PUSH EBP                            ; 00415e11
    MOV EDI,dword ptr [ESP + 0xc]       ; 00415e12
    CMP dword ptr [EDI + 0x1340],0x0    ; 00415e16
    JZ 0x00415ed0                       ; 00415e1d
        ;   XREF to: 00415ed0 (CONDITIONAL_JUMP)  ; LAB_00415ed0
    CMP dword ptr [EDI + 0x2b4],0x1     ; 00415e23
    JLE 0x00415e39                      ; 00415e2a
        ;   XREF to: 00415e39 (CONDITIONAL_JUMP)  ; LAB_00415e39
    CMP dword ptr [EDI + 0x8a8],0x0     ; 00415e2c
    JZ 0x00415ed0                       ; 00415e33
        ;   XREF to: 00415ed0 (CONDITIONAL_JUMP)  ; LAB_00415ed0
    PUSH EBX                            ; 00415e39
        ;   Label: LAB_00415e39
    CMP dword ptr [EDI + 0x10c8],0x0    ; 00415e3a
    JZ 0x00415e99                       ; 00415e41
        ;   XREF to: 00415e99 (CONDITIONAL_JUMP)  ; LAB_00415e99
    MOV EBX,dword ptr [0x0061b5a8]      ; 00415e43 | g_CDemonSetPtr
    MOV EAX,dword ptr [EDI + 0x10c4]    ; 00415e49
    PUSH EDI                            ; 00415e4f
    MOV dword ptr [EBX + 0x15ac98],EAX  ; 00415e50 | g_CDemonSetInstance.field1420440_0x15ac98
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00415e56
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00415e5b
    MOV EBP,dword ptr [EDI + 0x10d4]    ; 00415e5e
    PUSH EBP                            ; 00415e64
    MOV EAX,[0x0060b280]                ; 00415e65 | DAT_0060b280
    PUSH EAX                            ; 00415e6a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00415e6b
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00415e70
    PUSH 0x2e7                          ; 00415e73
    PUSH EDI                            ; 00415e78
    CALL core_bodypart.cpp_FUN_004159e0 ; 00415e79
        ;   XREF to: 004159e0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_004159e0(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 00415e7e
    PUSH EDI                            ; 00415e81
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00415e82
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    MOV EAX,[0x0061b5a8]                ; 00415e87 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00415e8c
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00415e8f | g_CDemonSetInstance.field1420440_0x15ac98
    MOV EDX,dword ptr [EDI + 0x8a8]     ; 00415e99
        ;   Label: LAB_00415e99
    XOR EBX,EBX                         ; 00415e9f
    TEST EDX,EDX                        ; 00415ea1
    JLE 0x00415ec7                      ; 00415ea3
        ;   XREF to: 00415ec7 (CONDITIONAL_JUMP)  ; LAB_00415ec7
    PUSH ESI                            ; 00415ea5
    LEA ESI,[EDI + 0x8b8]               ; 00415ea6
    PUSH ESI                            ; 00415eac
        ;   Label: LAB_00415eac
    CALL core_flame.cpp_FUN_0049f850    ; 00415ead
        ;   XREF to: 0049f850 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_FUN_0049f850(CFlame * this_ptr)
    INC EBX                             ; 00415eb2
    ADD ESP,0x4                         ; 00415eb3
    MOV ECX,dword ptr [EDI + 0x8a8]     ; 00415eb6
    ADD ESI,0x40c                       ; 00415ebc
    CMP EBX,ECX                         ; 00415ec2
    JL 0x00415eac                       ; 00415ec4
        ;   XREF to: 00415eac (CONDITIONAL_JUMP)  ; LAB_00415eac
    POP ESI                             ; 00415ec6
    MOV EAX,0x1                         ; 00415ec7
        ;   Label: LAB_00415ec7
    POP EBX                             ; 00415ecc
    POP EBP                             ; 00415ecd
    POP EDI                             ; 00415ece
    RET                                 ; 00415ecf
    XOR EAX,EAX                         ; 00415ed0
        ;   Label: LAB_00415ed0
    POP EBP                             ; 00415ed2
    POP EDI                             ; 00415ed3
    RET                                 ; 00415ed4

