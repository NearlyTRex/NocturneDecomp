; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_hasCollision_FUN_0041d970(CBoneGuy *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041d970
        ;   Label: core_boneguy.cpp_CBoneGuy_hasCollision_FUN_0041d970
    CMP dword ptr [EAX + 0xc4dc],0x0    ; 0041d974
    JZ 0x0041d980                       ; 0041d97b
        ;   XREF to: 0041d980 (CONDITIONAL_JUMP)  ; LAB_0041d980
    XOR EAX,EAX                         ; 0041d97d
    RET                                 ; 0041d97f
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041d980
        ;   Label: LAB_0041d980
    PUSH ECX                            ; 0041d984
    PUSH EAX                            ; 0041d985
    CALL core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20 ; 0041d986
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_hasCollision_FUN_0042bc20(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0041d98b
    RET                                 ; 0041d98e

