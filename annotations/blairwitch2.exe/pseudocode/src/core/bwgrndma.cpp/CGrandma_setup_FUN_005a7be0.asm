; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bwgrndma_cpp_CGrandma_setup_FUN_005a7be0(CGrandma *this_ptr)
;
; Parameters:
; CGrandma *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_R_Hand_005f080c
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7be0
        ;   Label: core_bwgrndma.cpp_CGrandma_setup_FUN_005a7be0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a7be1
    PUSH EBX                            ; 005a7be5
    CALL core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870 ; 005a7be6
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a7beb
    PUSH 0x1                            ; 005a7bee
    PUSH 0x5f080c                       ; 005a7bf0 | = "Bip01 R Hand"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a7bf5
    PUSH EDX                            ; 005a7bfb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a7bfc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a7c01
    ADD ESP,0xc                         ; 005a7c07
    MOV dword ptr [EBX + 0x2618],EAX    ; 005a7c0a
    POP EBX                             ; 005a7c10
    RET                                 ; 005a7c11

