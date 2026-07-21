; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00481d30(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CHero_00580faa+1
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x580fab                       ; 00481d30 | s_CHero_00580faa+1
        ;   Label: FUN_00481d30
    MOV EDX,dword ptr [ESP + 0xc]       ; 00481d35
    PUSH EDX                            ; 00481d39
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00481d3a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 00481d3f
    TEST EAX,EAX                        ; 00481d42
    JZ 0x00481d4b                       ; 00481d44
        ;   XREF to: 00481d4b (CONDITIONAL_JUMP)  ; LAB_00481d4b
    MOV EAX,0x2                         ; 00481d46
    RET                                 ; 00481d4b
        ;   Label: LAB_00481d4b

