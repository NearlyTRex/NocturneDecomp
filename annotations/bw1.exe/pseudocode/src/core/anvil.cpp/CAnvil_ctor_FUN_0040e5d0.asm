; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_0040e5d0(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_anvil.cpp_factoryFuncAnvil_FUN_0040e5a0 at 0040e5b3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e5d0
        ;   Label: core_anvil.cpp_CAnvil_ctor_FUN_0040e5d0
    PUSH ESI                            ; 0040e5d1
    PUSH EDI                            ; 0040e5d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e5d3
    PUSH EBX                            ; 0040e5d7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 0040e5d8
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e5dd
    ADD EAX,0x158                       ; 0040e5e0
    PUSH EAX                            ; 0040e5e5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 0040e5e6
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e5eb
    LEA EBX,[EAX + 0xfffffea8]          ; 0040e5ee
    PUSH 0x5d325e                       ; 0040e5f4
    LEA EAX,[EBX + 0x158]               ; 0040e5f9
    PUSH EAX                            ; 0040e5ff
    MOV ESI,0x5d326b                    ; 0040e600
    MOV dword ptr [EBX + 0x154],0x5fb6b4 ; 0040e605
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040e60f
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x338],0x41c80000 ; 0040e614
    ADD ESP,0x8                         ; 0040e61e
    MOV dword ptr [EBX + 0x33c],0x0     ; 0040e621
    LEA EDI,[EBX + 0x2d4]               ; 0040e62b
    MOV dword ptr [EBX + 0x340],0x0     ; 0040e631
    PUSH EDI                            ; 0040e63b
    MOV AL,byte ptr [ESI]               ; 0040e63c
        ;   Label: LAB_0040e63c
    MOV byte ptr [EDI],AL               ; 0040e63e
    CMP AL,0x0                          ; 0040e640
    JZ 0x0040e654                       ; 0040e642
        ;   XREF to: 0040e654 (CONDITIONAL_JUMP)  ; LAB_0040e654
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e644
    ADD ESI,0x2                         ; 0040e647
    MOV byte ptr [EDI + 0x1],AL         ; 0040e64a
    ADD EDI,0x2                         ; 0040e64d
    CMP AL,0x0                          ; 0040e650
    JNZ 0x0040e63c                      ; 0040e652
        ;   XREF to: 0040e63c (CONDITIONAL_JUMP)  ; LAB_0040e63c
    POP EDI                             ; 0040e654
        ;   Label: LAB_0040e654
    MOV EAX,EBX                         ; 0040e655
    POP EDI                             ; 0040e657
    POP ESI                             ; 0040e658
    POP EBX                             ; 0040e659
    RET                                 ; 0040e65a

