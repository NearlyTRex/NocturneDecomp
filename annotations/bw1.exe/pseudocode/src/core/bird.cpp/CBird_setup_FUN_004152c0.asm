; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_setup_FUN_004152c0(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Foot_005d3c9b
;   TerminatedCString s_Bip01_R_Foot_005d3ca8
;   undefined4 DAT_007c3908
;   undefined4 DAT_007c390c
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004152c0
        ;   Label: core_bird.cpp_CBird_setup_FUN_004152c0
    PUSH ESI                            ; 004152c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004152c2
    PUSH EBX                            ; 004152c6
    CALL core_charactr.cpp_CCharacter_setup_FUN_0042c510 ; 004152c7
        ;   XREF to: 0042c510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setup_FUN_0042c510(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004152cc
    LEA EAX,[EBX + 0x158]               ; 004152cf
    PUSH EAX                            ; 004152d5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004152d6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004152db
    PUSH 0x0                            ; 004152de
    PUSH 0x5d3c9b                       ; 004152e0 | = "Bip01 L Foot"
    PUSH EAX                            ; 004152e5
    MOV ESI,EAX                         ; 004152e6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004152e8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004152ed
    PUSH 0x0                            ; 004152f0
    PUSH 0x5d3ca8                       ; 004152f2 | = "Bip01 R Foot"
    PUSH ESI                            ; 004152f7
    MOV [0x007c3908],EAX                ; 004152f8 | DAT_007c3908
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004152fd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV ESI,dword ptr [0x007c3908]      ; 00415302 | DAT_007c3908
    ADD ESP,0xc                         ; 00415308
    MOV dword ptr [EBX + 0x2620],EAX    ; 0041530b
    MOV [0x007c390c],EAX                ; 00415311 | DAT_007c390c
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 00415316
    MOV dword ptr [EBX + 0x25a8],ESI    ; 0041531c
    TEST EDX,EDX                        ; 00415322
    JNZ 0x00415329                      ; 00415324
        ;   XREF to: 00415329 (CONDITIONAL_JUMP)  ; LAB_00415329
    POP ESI                             ; 00415326
    POP EBX                             ; 00415327
    RET                                 ; 00415328
    MOV dword ptr [EBX + 0xfc],0x1      ; 00415329
        ;   Label: LAB_00415329
    POP ESI                             ; 00415333
    POP EBX                             ; 00415334
    RET                                 ; 00415335

