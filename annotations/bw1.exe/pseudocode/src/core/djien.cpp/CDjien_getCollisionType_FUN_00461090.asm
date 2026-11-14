; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_djien_cpp_CDjien_getCollisionType_FUN_00461090(CDjien *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CDjien *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00461090
        ;   Label: core_djien.cpp_CDjien_getCollisionType_FUN_00461090
    CMP dword ptr [EAX],0x1             ; 00461094
    JNZ 0x0046109f                      ; 00461097
        ;   XREF to: 0046109f (CONDITIONAL_JUMP)  ; LAB_0046109f
    MOV EAX,0x3                         ; 00461099
    RET                                 ; 0046109e
    PUSH EAX                            ; 0046109f
        ;   Label: LAB_0046109f
    MOV ECX,dword ptr [ESP + 0x8]       ; 004610a0
    PUSH ECX                            ; 004610a4
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 004610a5
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 004610aa
    RET                                 ; 004610ad

