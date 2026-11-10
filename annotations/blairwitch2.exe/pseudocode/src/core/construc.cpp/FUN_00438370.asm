; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_construc_cpp_FUN_00438370(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438370
        ;   Label: core_construc.cpp_FUN_00438370
    CMP dword ptr [EAX + 0x112d8],0x0   ; 00438374
    JZ 0x00438380                       ; 0043837b
        ;   XREF to: 00438380 (CONDITIONAL_JUMP)  ; LAB_00438380
    XOR EAX,EAX                         ; 0043837d
    RET                                 ; 0043837f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00438380
        ;   Label: LAB_00438380
    PUSH ECX                            ; 00438384
    PUSH EAX                            ; 00438385
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680 ; 00438386
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0043838b
    RET                                 ; 0043838e

