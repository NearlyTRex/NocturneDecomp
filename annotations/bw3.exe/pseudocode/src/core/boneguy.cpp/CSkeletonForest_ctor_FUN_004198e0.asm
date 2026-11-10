; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeletonForest * core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0(CSkeletonForest *this_ptr)
;
; Parameters:
; CSkeletonForest * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boneguy.cpp_FUN_004198b0 at 004198c3
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004198e0
        ;   Label: core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004198e1
    PUSH EDX                            ; 004198e5
    CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 ; 004198e6
        ;   XREF to: 00417400 (UNCONDITIONAL_CALL)  ; CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 004198eb
    PUSH 0x5b7182                       ; 004198ee
    MOV EBX,EAX                         ; 004198f3
    ADD EAX,0x158                       ; 004198f5
    PUSH EAX                            ; 004198fa
    MOV dword ptr [EAX + -0x4],0x5dc2b4 ; 004198fb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00419902
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x41c80000 ; 00419907
    MOV dword ptr [EBX + 0xce5c],0x41000000 ; 00419911
    MOV dword ptr [EBX + 0xce60],0x40a00000 ; 0041991b
    ADD ESP,0x8                         ; 00419925
    MOV dword ptr [EBX + 0xd074],0x1    ; 00419928
    MOV EAX,EBX                         ; 00419932
    MOV EDX,dword ptr [EBX + 0x2538]    ; 00419934
    MOV dword ptr [EBX + 0xd058],EDX    ; 0041993a
    POP EBX                             ; 00419940
    RET                                 ; 00419941

