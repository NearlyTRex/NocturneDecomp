; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_00408a00(CDemonActor *param_1,undefined4 param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CPlatformClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364264_0x14d128
;   undefined4 g_CDemonSetInstance.field1364268_0x14d12c
;   undefined4 g_CDemonSetInstance.field1364272_0x14d130
;   undefined4 g_CDemonSetInstance.field1364292_0x14d144
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0
;   core_setcolid.cpp_FUN_005562c0
;   core_setcolid.cpp_FUN_005592c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a00
        ;   Label: core_actor.cpp_FUN_00408a00
    PUSH ESI                            ; 00408a01
    PUSH EDI                            ; 00408a02
    PUSH EBP                            ; 00408a03
    SUB ESP,0x8                         ; 00408a04
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00408a07
    MOV EBX,dword ptr [ESP + 0x24]      ; 00408a0b
    MOV EDX,dword ptr [0x00622c18]      ; 00408a0f | g_CDemonSetPtr
    PUSH EDX                            ; 00408a15 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0 ; 00408a16
        ;   XREF to: 00558eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408a1b
    PUSH ESI                            ; 00408a1e
    MOV ECX,dword ptr [0x00622c18]      ; 00408a1f | g_CDemonSetPtr
    PUSH ECX                            ; 00408a25 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00408a26
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00408a2b
    MOV EDI,dword ptr [0x00622c18]      ; 00408a2e | g_CDemonSetPtr
    PUSH EDI                            ; 00408a34 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_005592c0 ; 00408a35
        ;   XREF to: 005592c0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_005592c0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408a3a
    LEA EAX,[ESI + 0x20]                ; 00408a3d
    PUSH dword ptr [ESP + 0x20]         ; 00408a40
    PUSH EAX                            ; 00408a44
    MOV EBP,dword ptr [0x00622c18]      ; 00408a45 | g_CDemonSetPtr
    PUSH EBP                            ; 00408a4b | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_005562c0 ; 00408a4c
        ;   XREF to: 005562c0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_005562c0()
    MOV dword ptr [ESP + 0x10],EAX      ; 00408a51
    FLD float ptr [ESP + 0x10]          ; 00408a55
    ADD ESP,0xc                         ; 00408a59
    MOV EAX,[0x01e7d41c]                ; 00408a5c | g_CPlatformClassInfo.name_hash
    PUSH EAX                            ; 00408a61
    MOV EAX,[0x00622c18]                ; 00408a62 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00408a67 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 00408a6d
    FSTP float ptr [ESP + 0x8]          ; 00408a6e
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00408a72
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00408a77
    MOV dword ptr [ESI + 0xdc],EAX      ; 00408a7a
    TEST EBX,EBX                        ; 00408a80
    JZ 0x00408aa2                       ; 00408a82
        ;   XREF to: 00408aa2 (CONDITIONAL_JUMP)  ; LAB_00408aa2
    MOV EAX,[0x00622c18]                ; 00408a84 | g_CDemonSetPtr
    ADD EAX,0x14d128                    ; 00408a89
    CMP EBX,EAX                         ; 00408a8e
    JZ 0x00408aa2                       ; 00408a90
        ;   XREF to: 00408aa2 (CONDITIONAL_JUMP)  ; LAB_00408aa2
    MOV EDX,dword ptr [EAX]             ; 00408a92 | g_CDemonSetInstance.field1364264_0x14d128
    MOV dword ptr [EBX],EDX             ; 00408a94
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408a96 | g_CDemonSetInstance.field1364268_0x14d12c
    MOV dword ptr [EBX + 0x4],EDX       ; 00408a99
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408a9c | g_CDemonSetInstance.field1364272_0x14d130
    MOV dword ptr [EBX + 0x8],EDX       ; 00408a9f
    MOV ECX,dword ptr [0x00622c18]      ; 00408aa2 | g_CDemonSetPtr
        ;   Label: LAB_00408aa2
    PUSH ECX                            ; 00408aa8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 00408aa9
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00408aae
    MOV EAX,dword ptr [ESP]             ; 00408ab1
    ADD ESP,0x8                         ; 00408ab4
    POP EBP                             ; 00408ab7
    POP EDI                             ; 00408ab8
    POP ESI                             ; 00408ab9
    POP EBX                             ; 00408aba
    RET                                 ; 00408abb

