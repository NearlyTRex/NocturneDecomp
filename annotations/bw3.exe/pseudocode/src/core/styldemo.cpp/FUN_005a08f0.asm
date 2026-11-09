; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_styldemo_cpp_FUN_005a08f0(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005a08f0
        ;   Label: core_styldemo.cpp_FUN_005a08f0
    PUSH EDX                            ; 005a08f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a08f5
    PUSH ECX                            ; 005a08f9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430 ; 005a08fa
        ;   XREF to: 00430430 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 005a08ff
    RET                                 ; 005a0902

