; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_005a8b00(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vessel.cpp_factoryFuncCryptVessel_FUN_005a8ad0 at 005a8ae3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_flame.cpp_CFlame_ctor_FUN_004b7a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8b00
        ;   Label: core_vessel.cpp_CCryptVessel_ctor_FUN_005a8b00
    PUSH ESI                            ; 005a8b01
    PUSH EDI                            ; 005a8b02
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a8b03
    PUSH EBX                            ; 005a8b07
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 005a8b08
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a8b0d
    ADD EAX,0x158                       ; 005a8b10
    PUSH EAX                            ; 005a8b15
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 005a8b16
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a8b1b
    ADD EAX,0x26c                       ; 005a8b1e
    PUSH EAX                            ; 005a8b23
    CALL core_flame.cpp_CFlame_ctor_FUN_004b7a30 ; 005a8b24
        ;   XREF to: 004b7a30 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004b7a30(CFlame * this_ptr)
    ADD ESP,0x4                         ; 005a8b29
    ADD EAX,0x2a8                       ; 005a8b2c
    PUSH EAX                            ; 005a8b31
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 005a8b32
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a8b37
    LEA EBX,[EAX + 0xfffff994]          ; 005a8b3a
    PUSH 0x5f910b                       ; 005a8b40
    LEA EAX,[EBX + 0x158]               ; 005a8b45
    PUSH EAX                            ; 005a8b4b
    MOV ESI,0x5f9118                    ; 005a8b4c
    MOV dword ptr [EBX + 0x154],0x607aa4 ; 005a8b51
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a8b5b
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005a8b60
    ADD ESP,0x8                         ; 005a8b6a
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005a8b6d
    LEA EDI,[EBX + 0x2e0]               ; 005a8b77
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005a8b7d
    PUSH EDI                            ; 005a8b87
    MOV AL,byte ptr [ESI]               ; 005a8b88
        ;   Label: LAB_005a8b88
    MOV byte ptr [EDI],AL               ; 005a8b8a
    CMP AL,0x0                          ; 005a8b8c
    JZ 0x005a8ba0                       ; 005a8b8e
        ;   XREF to: 005a8ba0 (CONDITIONAL_JUMP)  ; LAB_005a8ba0
    MOV AL,byte ptr [ESI + 0x1]         ; 005a8b90
    ADD ESI,0x2                         ; 005a8b93
    MOV byte ptr [EDI + 0x1],AL         ; 005a8b96
    ADD EDI,0x2                         ; 005a8b99
    CMP AL,0x0                          ; 005a8b9c
    JNZ 0x005a8b88                      ; 005a8b9e
        ;   XREF to: 005a8b88 (CONDITIONAL_JUMP)  ; LAB_005a8b88
    POP EDI                             ; 005a8ba0
        ;   Label: LAB_005a8ba0
    MOV dword ptr [EBX + 0x3a8],0x0     ; 005a8ba1
    MOV dword ptr [EBX + 0x3ac],0x0     ; 005a8bab
    MOV ESI,0x5f911d                    ; 005a8bb5
    MOV dword ptr [EBX + 0x3bc],0x0     ; 005a8bba
    LEA EDI,[EBX + 0x344]               ; 005a8bc4
    MOV dword ptr [EBX + 0x3b8],0x0     ; 005a8bca
    PUSH EDI                            ; 005a8bd4
    MOV AL,byte ptr [ESI]               ; 005a8bd5
        ;   Label: LAB_005a8bd5
    MOV byte ptr [EDI],AL               ; 005a8bd7
    CMP AL,0x0                          ; 005a8bd9
    JZ 0x005a8bed                       ; 005a8bdb
        ;   XREF to: 005a8bed (CONDITIONAL_JUMP)  ; LAB_005a8bed
    MOV AL,byte ptr [ESI + 0x1]         ; 005a8bdd
    ADD ESI,0x2                         ; 005a8be0
    MOV byte ptr [EDI + 0x1],AL         ; 005a8be3
    ADD EDI,0x2                         ; 005a8be6
    CMP AL,0x0                          ; 005a8be9
    JNZ 0x005a8bd5                      ; 005a8beb
        ;   XREF to: 005a8bd5 (CONDITIONAL_JUMP)  ; LAB_005a8bd5
    POP EDI                             ; 005a8bed
        ;   Label: LAB_005a8bed
    MOV dword ptr [EBX + 0x3b0],0x41200000 ; 005a8bee
    PUSH 0x5f9122                       ; 005a8bf8
    MOV dword ptr [EBX + 0x3c0],0x1     ; 005a8bfd
    LEA EAX,[EBX + 0x66c]               ; 005a8c07
    MOV dword ptr [EBX + 0x3b4],0x0     ; 005a8c0d
    PUSH EAX                            ; 005a8c17
    MOV dword ptr [EBX + 0x668],0x0     ; 005a8c18
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a8c22
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x7e8],0x1     ; 005a8c27
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a8c31
    ADD ESP,0x8                         ; 005a8c3b
    MOV dword ptr [EBX + 0x7ec],0x0     ; 005a8c3e
    MOV EAX,EBX                         ; 005a8c48
    MOV dword ptr [EBX + 0x7f0],0x0     ; 005a8c4a
    POP EDI                             ; 005a8c54
    POP ESI                             ; 005a8c55
    POP EBX                             ; 005a8c56
    RET                                 ; 005a8c57

