; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_melee_cpp_CMelee_canPickup_FUN_004cef40(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   string s_CHero_00588468
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cef40
        ;   Label: core_melee.cpp_CMelee_canPickup_FUN_004cef40
    CMP dword ptr [EAX + 0x580],0x0     ; 004cef44
    JNZ 0x004cef53                      ; 004cef4b
        ;   XREF to: 004cef53 (CONDITIONAL_JUMP)  ; LAB_004cef53
    MOV EAX,0x3                         ; 004cef4d
        ;   Label: LAB_004cef4d
    RET                                 ; 004cef52
    PUSH 0x588468                       ; 004cef53 | = "CHero"
        ;   Label: LAB_004cef53
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cef58
    PUSH ECX                            ; 004cef5c
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004cef5d
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004cef62
    TEST EAX,EAX                        ; 004cef65
    JZ 0x004cef4d                       ; 004cef67
        ;   XREF to: 004cef4d (CONDITIONAL_JUMP)  ; LAB_004cef4d
    MOV EAX,0x2                         ; 004cef69
    RET                                 ; 004cef6e

