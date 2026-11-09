; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004b8f70(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_flamecan.cpp_factoryFuncFlameCan_FUN_004b8f40 at 004b8f53
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_flame.cpp_CFlame_ctor_FUN_004b7a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8f70
        ;   Label: core_flamecan.cpp_CFlameCan_ctor_FUN_004b8f70
    PUSH ESI                            ; 004b8f71
    PUSH EDI                            ; 004b8f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b8f73
    PUSH EBX                            ; 004b8f77
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004b8f78
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b8f7d
    ADD EAX,0x158                       ; 004b8f80
    PUSH EAX                            ; 004b8f85
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004b8f86
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b8f8b
    ADD EAX,0x1e8                       ; 004b8f8e
    PUSH EAX                            ; 004b8f93
    CALL core_flame.cpp_CFlame_ctor_FUN_004b7a30 ; 004b8f94
        ;   XREF to: 004b7a30 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004b7a30(CFlame * this_ptr)
    ADD ESP,0x4                         ; 004b8f99
    LEA EBX,[EAX + 0xfffffcc0]          ; 004b8f9c
    PUSH 0x5df781                       ; 004b8fa2
    LEA EAX,[EBX + 0x158]               ; 004b8fa7
    PUSH EAX                            ; 004b8fad
    MOV ESI,0x5df78e                    ; 004b8fae
    MOV dword ptr [EBX + 0x154],0x6004a4 ; 004b8fb3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004b8fbd
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b8fc2
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004b8fc5
    LEA EDI,[EBX + 0x2dc]               ; 004b8fcf
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 004b8fd5
    PUSH EDI                            ; 004b8fdf
    MOV AL,byte ptr [ESI]               ; 004b8fe0
        ;   Label: LAB_004b8fe0
    MOV byte ptr [EDI],AL               ; 004b8fe2
    CMP AL,0x0                          ; 004b8fe4
    JZ 0x004b8ff8                       ; 004b8fe6
        ;   XREF to: 004b8ff8 (CONDITIONAL_JUMP)  ; LAB_004b8ff8
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8fe8
    ADD ESI,0x2                         ; 004b8feb
    MOV byte ptr [EDI + 0x1],AL         ; 004b8fee
    ADD EDI,0x2                         ; 004b8ff1
    CMP AL,0x0                          ; 004b8ff4
    JNZ 0x004b8fe0                      ; 004b8ff6
        ;   XREF to: 004b8fe0 (CONDITIONAL_JUMP)  ; LAB_004b8fe0
    POP EDI                             ; 004b8ff8
        ;   Label: LAB_004b8ff8
    MOV EAX,EBX                         ; 004b8ff9
    MOV dword ptr [EBX + 0x5e4],0x0     ; 004b8ffb
    POP EDI                             ; 004b9005
    POP ESI                             ; 004b9006
    POP EBX                             ; 004b9007
    RET                                 ; 004b9008

