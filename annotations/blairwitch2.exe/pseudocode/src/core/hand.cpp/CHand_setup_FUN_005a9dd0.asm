; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hand_cpp_CHand_setup_FUN_005a9dd0(CHand *this_ptr)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_R_Hand_005f0a0f
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9dd0
        ;   Label: core_hand.cpp_CHand_setup_FUN_005a9dd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9dd1
    PUSH EBX                            ; 005a9dd5
    CALL core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0 ; 005a9dd6
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a9ddb
    PUSH 0x1                            ; 005a9dde
    PUSH 0x5f0a0f                       ; 005a9de0 | = "Bip01 R Hand"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a9de5
    PUSH EDX                            ; 005a9deb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a9dec
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a9df1
    ADD ESP,0xc                         ; 005a9df7
    MOV dword ptr [EBX + 0x1137c],EAX   ; 005a9dfa
    POP EBX                             ; 005a9e00
    RET                                 ; 005a9e01

