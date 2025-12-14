; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042b8e0(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_FUN_0042c3c0 at 0042c55d
;   core_ghoul.cpp_FUN_004e87e0 at 004e8a3a
;
; Referenced Globals:
;   TerminatedCString s_glass_1_wav_2_0_00617144
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b8e0
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042b8e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042b8e1
    PUSH 0x617144                       ; 0042b8e5 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b8ea
    PUSH EBX                            ; 0042b8f0
    CALL dword ptr [EAX + 0x24]         ; 0042b8f1
    LEA EDX,[EBX + 0x158]               ; 0042b8f4
    LEA EAX,[EBX + 0x23b8]              ; 0042b8fa
    MOV CL,byte ptr [EAX]               ; 0042b900
    ADD ESP,0x8                         ; 0042b902
    TEST CL,CL                          ; 0042b905
    JNZ 0x0042b912                      ; 0042b907
        ;   XREF to: 0042b912 (CONDITIONAL_JUMP)  ; LAB_0042b912
    MOV dword ptr [EBX + 0x70],0x2      ; 0042b909
    POP EBX                             ; 0042b910
    RET                                 ; 0042b911
    PUSH 0x0                            ; 0042b912
        ;   Label: LAB_0042b912
    LEA EAX,[EBX + 0x30]                ; 0042b914
    PUSH EAX                            ; 0042b917
    LEA EAX,[EBX + 0x20]                ; 0042b918
    PUSH EAX                            ; 0042b91b
    PUSH EDX                            ; 0042b91c
    CALL core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0 ; 0042b91d
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0(CDeformableModelInstance * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int desired_lod_index)
    ADD ESP,0x10                        ; 0042b922
    MOV dword ptr [EBX + 0x70],0x2      ; 0042b925
    POP EBX                             ; 0042b92c
    RET                                 ; 0042b92d

