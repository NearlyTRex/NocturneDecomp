; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c36d0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   string s_CHero_005875c6
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x5875c6                       ; 004c36d0 | = "CHero"
        ;   Label: FUN_004c36d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c36d5
    PUSH EDX                            ; 004c36d9
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c36da
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c36df
    TEST EAX,EAX                        ; 004c36e2
    JZ 0x004c36eb                       ; 004c36e4
        ;   XREF to: 004c36eb (CONDITIONAL_JUMP)  ; LAB_004c36eb
    MOV EAX,0x2                         ; 004c36e6
    RET                                 ; 004c36eb
        ;   Label: LAB_004c36eb

