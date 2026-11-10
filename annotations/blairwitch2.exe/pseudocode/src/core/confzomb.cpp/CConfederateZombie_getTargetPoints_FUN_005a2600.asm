; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_confzomb_cpp_CConfederateZombie_getTargetPoints_FUN_005a2600(CConfederateZombie *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_005eff67
;
; Called Functions:
;   core_enemy.cpp_CEnemy_getTargetPoints_FUN_00488020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a2600
        ;   Label: core_confzomb.cpp_CConfederateZombie_getTargetPoints_FUN_005a2600
    FLD float ptr [EDX + 0x113c4]       ; 005a2604
    FCOMP double ptr [0x005eff67]       ; 005a260a | DAT_005eff67
    FNSTSW AX                           ; 005a2610
    SAHF                                ; 005a2612
    JNC 0x005a2618                      ; 005a2613
        ;   XREF to: 005a2618 (CONDITIONAL_JUMP)  ; LAB_005a2618
    XOR EAX,EAX                         ; 005a2615
    RET                                 ; 005a2617
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a2618
        ;   Label: LAB_005a2618
    PUSH ECX                            ; 005a261c
    PUSH EDX                            ; 005a261d
    CALL core_enemy.cpp_CEnemy_getTargetPoints_FUN_00488020 ; 005a261e
        ;   XREF to: 00488020 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getTargetPoints_FUN_00488020(CEnemy * this_ptr, CVector3f * out_points_array)
    ADD ESP,0x8                         ; 005a2623
    RET                                 ; 005a2626

