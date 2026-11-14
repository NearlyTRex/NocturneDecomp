; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_shadow_cpp_CShadow_getTargetPoints_FUN_0053ec70(CShadow *this_ptr,undefined4 *param_2)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; undefined4 *     Stack[0x8]:4   param_2
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ec70
        ;   Label: core_shadow.cpp_CShadow_getTargetPoints_FUN_0053ec70
    PUSH ESI                            ; 0053ec71
    PUSH EDI                            ; 0053ec72
    SUB ESP,0x18                        ; 0053ec73
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053ec76
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0053ec7a
    MOV EDX,dword ptr [EAX + 0x10afc]   ; 0053ec7e
    PUSH EDX                            ; 0053ec84
    ADD EAX,0x2b4                       ; 0053ec85
    PUSH EAX                            ; 0053ec8a
    LEA ESI,[ESP + 0x8]                 ; 0053ec8b
    LEA EDI,[ESP + 0x14]                ; 0053ec8f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 0053ec93
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x8]                 ; 0053ec98
    ADD ESP,0x8                         ; 0053ec9c
    LEA EAX,[ESP + 0xc]                 ; 0053ec9f
    MOVSD ES:EDI,ESI                    ; 0053eca3
    MOVSD ES:EDI,ESI                    ; 0053eca4
    MOVSD ES:EDI,ESI                    ; 0053eca5
    CMP EBX,EAX                         ; 0053eca6
    JNZ 0x0053ecb6                      ; 0053eca8
        ;   XREF to: 0053ecb6 (CONDITIONAL_JUMP)  ; LAB_0053ecb6
    MOV EAX,0x1                         ; 0053ecaa
    ADD ESP,0x18                        ; 0053ecaf
    POP EDI                             ; 0053ecb2
    POP ESI                             ; 0053ecb3
    POP EBX                             ; 0053ecb4
    RET                                 ; 0053ecb5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053ecb6
        ;   Label: LAB_0053ecb6
    MOV dword ptr [EBX],EAX             ; 0053ecba
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053ecbc
    MOV dword ptr [EBX + 0x4],EAX       ; 0053ecc0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053ecc3
    MOV dword ptr [EBX + 0x8],EAX       ; 0053ecc7
    MOV EAX,0x1                         ; 0053ecca
    ADD ESP,0x18                        ; 0053eccf
    POP EDI                             ; 0053ecd2
    POP ESI                             ; 0053ecd3
    POP EBX                             ; 0053ecd4
    RET                                 ; 0053ecd5

