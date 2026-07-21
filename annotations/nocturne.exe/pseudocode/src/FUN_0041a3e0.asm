; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041a3e0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041a3e0
        ;   Label: FUN_0041a3e0
    CMP dword ptr [EAX + 0xc344],0x0    ; 0041a3e4
    JZ 0x0041a3f0                       ; 0041a3eb
        ;   XREF to: 0041a3f0 (CONDITIONAL_JUMP)  ; LAB_0041a3f0
    XOR EAX,EAX                         ; 0041a3ed
    RET                                 ; 0041a3ef
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041a3f0
        ;   Label: LAB_0041a3f0
    PUSH ECX                            ; 0041a3f4
    PUSH EAX                            ; 0041a3f5
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 0041a3f6
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 0041a3fb
    RET                                 ; 0041a3fe

