; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_boneguy_cpp_CBoneGuy_getCollisionType_FUN_0041a3b0(CBoneGuy *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041a3b0
        ;   Label: core_boneguy.cpp_CBoneGuy_getCollisionType_FUN_0041a3b0
    CMP dword ptr [EAX + 0x11118],0x0   ; 0041a3b4
    JZ 0x0041a3c0                       ; 0041a3bb
        ;   XREF to: 0041a3c0 (CONDITIONAL_JUMP)  ; LAB_0041a3c0
    XOR EAX,EAX                         ; 0041a3bd
    RET                                 ; 0041a3bf
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041a3c0
        ;   Label: LAB_0041a3c0
    PUSH ECX                            ; 0041a3c4
    PUSH EAX                            ; 0041a3c5
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680 ; 0041a3c6
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0041a3cb
    RET                                 ; 0041a3ce

