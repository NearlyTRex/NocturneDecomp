; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_0051f310(CMobster *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0051f310
        ;   Label: core_mobster.cpp_CMobster_getCollisionType_FUN_0051f310
    PUSH EDX                            ; 0051f314
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051f315
    PUSH ECX                            ; 0051f319
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 0051f31a
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 0051f31f
    RET                                 ; 0051f322

