; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_setup_FUN_0040fac0(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Foot_005b6383
;   TerminatedCString s_Bip01_R_Foot_005b6390
;   undefined4 DAT_007dff08
;   undefined4 DAT_007dff0c
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_0042b0e0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fac0
        ;   Label: core_bird.cpp_CBird_setup_FUN_0040fac0
    PUSH ESI                            ; 0040fac1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040fac2
    PUSH EBX                            ; 0040fac6
    CALL core_charactr.cpp_CCharacter_setup_FUN_0042b0e0 ; 0040fac7
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_0042b0e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0040facc
    LEA EAX,[EBX + 0x158]               ; 0040facf
    PUSH EAX                            ; 0040fad5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0040fad6
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040fadb
    PUSH 0x0                            ; 0040fade
    PUSH 0x5b6383                       ; 0040fae0 | = "Bip01 L Foot"
    PUSH EAX                            ; 0040fae5
    MOV ESI,EAX                         ; 0040fae6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0040fae8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0040faed
    PUSH 0x0                            ; 0040faf0
    PUSH 0x5b6390                       ; 0040faf2 | = "Bip01 R Foot"
    PUSH ESI                            ; 0040faf7
    MOV [0x007dff08],EAX                ; 0040faf8 | DAT_007dff08
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0040fafd
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV ESI,dword ptr [0x007dff08]      ; 0040fb02 | DAT_007dff08
    ADD ESP,0xc                         ; 0040fb08
    MOV dword ptr [EBX + 0x2620],EAX    ; 0040fb0b
    MOV [0x007dff0c],EAX                ; 0040fb11 | DAT_007dff0c
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0040fb16
    MOV dword ptr [EBX + 0x25a8],ESI    ; 0040fb1c
    TEST EDX,EDX                        ; 0040fb22
    JNZ 0x0040fb29                      ; 0040fb24
        ;   XREF to: 0040fb29 (CONDITIONAL_JUMP)  ; LAB_0040fb29
    POP ESI                             ; 0040fb26
    POP EBX                             ; 0040fb27
    RET                                 ; 0040fb28
    MOV dword ptr [EBX + 0xfc],0x1      ; 0040fb29
        ;   Label: LAB_0040fb29
    POP ESI                             ; 0040fb33
    POP EBX                             ; 0040fb34
    RET                                 ; 0040fb35

