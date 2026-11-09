; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_00408c30(CDemonActor *param_1,undefined4 param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CPlatformClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364264_0x14d128
;   undefined4 g_CDemonSetInstance.field1364268_0x14d12c
;   undefined4 g_CDemonSetInstance.field1364272_0x14d130
;   undefined4 g_CDemonSetInstance.field1364292_0x14d144
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90
;   core_setcolid.cpp_FUN_00534ea0
;   core_setcolid.cpp_FUN_00537ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c30
        ;   Label: core_actor.cpp_FUN_00408c30
    PUSH ESI                            ; 00408c31
    PUSH EDI                            ; 00408c32
    PUSH EBP                            ; 00408c33
    SUB ESP,0x8                         ; 00408c34
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00408c37
    MOV EBX,dword ptr [ESP + 0x24]      ; 00408c3b
    MOV EDX,dword ptr [0x0061b5a8]      ; 00408c3f | g_CDemonSetPtr
    PUSH EDX                            ; 00408c45 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90 ; 00408c46
        ;   XREF to: 00537a90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408c4b
    PUSH ESI                            ; 00408c4e
    MOV ECX,dword ptr [0x0061b5a8]      ; 00408c4f | g_CDemonSetPtr
    PUSH ECX                            ; 00408c55 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00408c56
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00408c5b
    MOV EDI,dword ptr [0x0061b5a8]      ; 00408c5e | g_CDemonSetPtr
    PUSH EDI                            ; 00408c64 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00537ea0 ; 00408c65
        ;   XREF to: 00537ea0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00537ea0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408c6a
    LEA EAX,[ESI + 0x20]                ; 00408c6d
    PUSH dword ptr [ESP + 0x20]         ; 00408c70
    PUSH EAX                            ; 00408c74
    MOV EBP,dword ptr [0x0061b5a8]      ; 00408c75 | g_CDemonSetPtr
    PUSH EBP                            ; 00408c7b | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00534ea0 ; 00408c7c
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x10],EAX      ; 00408c81
    FLD float ptr [ESP + 0x10]          ; 00408c85
    ADD ESP,0xc                         ; 00408c89
    MOV EAX,[0x01e614ac]                ; 00408c8c | g_CPlatformClassInfo.name_hash
    PUSH EAX                            ; 00408c91
    MOV EAX,[0x0061b5a8]                ; 00408c92 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00408c97 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 00408c9d
    FSTP float ptr [ESP + 0x8]          ; 00408c9e
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00408ca2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 00408ca7
    MOV dword ptr [ESI + 0xdc],EAX      ; 00408caa
    TEST EBX,EBX                        ; 00408cb0
    JZ 0x00408cd2                       ; 00408cb2
        ;   XREF to: 00408cd2 (CONDITIONAL_JUMP)  ; LAB_00408cd2
    MOV EAX,[0x0061b5a8]                ; 00408cb4 | g_CDemonSetPtr
    ADD EAX,0x14d128                    ; 00408cb9
    CMP EBX,EAX                         ; 00408cbe
    JZ 0x00408cd2                       ; 00408cc0
        ;   XREF to: 00408cd2 (CONDITIONAL_JUMP)  ; LAB_00408cd2
    MOV EDX,dword ptr [EAX]             ; 00408cc2 | g_CDemonSetInstance.field1364264_0x14d128
    MOV dword ptr [EBX],EDX             ; 00408cc4
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408cc6 | g_CDemonSetInstance.field1364268_0x14d12c
    MOV dword ptr [EBX + 0x4],EDX       ; 00408cc9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408ccc | g_CDemonSetInstance.field1364272_0x14d130
    MOV dword ptr [EBX + 0x8],EDX       ; 00408ccf
    MOV ECX,dword ptr [0x0061b5a8]      ; 00408cd2 | g_CDemonSetPtr
        ;   Label: LAB_00408cd2
    PUSH ECX                            ; 00408cd8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40 ; 00408cd9
        ;   XREF to: 00537c40 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408cde
    MOV EAX,dword ptr [ESP]             ; 00408ce1
    ADD ESP,0x8                         ; 00408ce4
    POP EBP                             ; 00408ce7
    POP EDI                             ; 00408ce8
    POP ESI                             ; 00408ce9
    POP EBX                             ; 00408cea
    RET                                 ; 00408ceb

