; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a1a70(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 g_CConfederateClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   unkafter_basicene.cpp_FUN_0059f800
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x026684d4]      ; 005a1a70 | g_CConfederateClassInfo.name_hash
        ;   Label: core_confedrt.cpp_FUN_005a1a70
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a1a76
    PUSH EDX                            ; 005a1a7a
    MOV ECX,dword ptr [EAX + 0x38]      ; 005a1a7b
    PUSH ECX                            ; 005a1a7e
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a1a7f
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 005a1a84
    TEST EAX,EAX                        ; 005a1a87
    JZ 0x005a1a8c                       ; 005a1a89
        ;   XREF to: 005a1a8c (CONDITIONAL_JUMP)  ; LAB_005a1a8c
    RET                                 ; 005a1a8b
    PUSH ESI                            ; 005a1a8c
        ;   Label: LAB_005a1a8c
    PUSH EBX                            ; 005a1a8d
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a1a8e
    PUSH EBX                            ; 005a1a92
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a1a93
    PUSH ESI                            ; 005a1a97
    CALL unkafter_basicene.cpp_FUN_0059f800 ; 005a1a98
        ;   XREF to: 0059f800 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f800()
    ADD ESP,0x8                         ; 005a1a9d
    POP EBX                             ; 005a1aa0
    POP ESI                             ; 005a1aa1
    RET                                 ; 005a1aa2

