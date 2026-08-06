; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_FUN_00427a60(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 004286b1
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004ab450 at 004ab6aa
;
; Referenced Globals:
;   TerminatedCString s_glass_1_wav_2_0_0057a014
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427a60
        ;   Label: core_charactr.cpp_CCharacter_FUN_00427a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00427a61
    PUSH 0x57a014                       ; 00427a65 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00427a6a
    PUSH EBX                            ; 00427a70
    CALL dword ptr [EAX + 0x24]         ; 00427a71
    LEA EDX,[EBX + 0x150]               ; 00427a74
    LEA EAX,[EBX + 0x23b0]              ; 00427a7a
    MOV CL,byte ptr [EAX]               ; 00427a80
    ADD ESP,0x8                         ; 00427a82
    TEST CL,CL                          ; 00427a85
    JNZ 0x00427a92                      ; 00427a87
        ;   XREF to: 00427a92 (CONDITIONAL_JUMP)  ; LAB_00427a92
    MOV dword ptr [EBX + 0x70],0x2      ; 00427a89
    POP EBX                             ; 00427a90
    RET                                 ; 00427a91
    PUSH 0x0                            ; 00427a92
        ;   Label: LAB_00427a92
    LEA EAX,[EBX + 0x30]                ; 00427a94
    PUSH EAX                            ; 00427a97
    LEA EAX,[EBX + 0x20]                ; 00427a98
    PUSH EAX                            ; 00427a9b
    PUSH EDX                            ; 00427a9c
    CALL core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30 ; 00427a9d
        ;   XREF to: 0051ed30 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30(CDeformableModelInstance * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int desired_lod_index)
    ADD ESP,0x10                        ; 00427aa2
    MOV dword ptr [EBX + 0x70],0x2      ; 00427aa5
    POP EBX                             ; 00427aac
    RET                                 ; 00427aad

