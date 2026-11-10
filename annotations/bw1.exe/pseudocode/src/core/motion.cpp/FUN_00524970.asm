; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_00524970(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50 at 00569b78
;
; Called Functions:
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524970
        ;   Label: core_motion.cpp_FUN_00524970
    MOV EBX,dword ptr [ESP + 0x8]       ; 00524971
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524975
    MOV dword ptr [EBX],EAX             ; 00524979
    CMP byte ptr [EBX + 0x30],0x0       ; 0052497b
    JNZ 0x00524983                      ; 0052497f
        ;   XREF to: 00524983 (CONDITIONAL_JUMP)  ; LAB_00524983
    POP EBX                             ; 00524981
    RET                                 ; 00524982
    PUSH 0x0                            ; 00524983
        ;   Label: LAB_00524983
    LEA EAX,[EBX + 0x30]                ; 00524985
    PUSH EAX                            ; 00524988
    MOV EDX,dword ptr [EBX]             ; 00524989
    PUSH EDX                            ; 0052498b
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0052498c
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00524991
    MOV dword ptr [EBX + 0x4],EAX       ; 00524994
    TEST EAX,EAX                        ; 00524997
    JL 0x005249a1                       ; 00524999
        ;   XREF to: 005249a1 (CONDITIONAL_JUMP)  ; LAB_005249a1
    MOV byte ptr [EBX + 0x30],0x0       ; 0052499b
    POP EBX                             ; 0052499f
    RET                                 ; 005249a0
    MOV dword ptr [EBX + 0x4],0x0       ; 005249a1
        ;   Label: LAB_005249a1
    MOV byte ptr [EBX + 0x30],0x0       ; 005249a8
    POP EBX                             ; 005249ac
    RET                                 ; 005249ad

