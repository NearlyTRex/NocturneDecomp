; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_moocow_cpp_CMooCow_getTargetPoints_FUN_00521a60(CMooCow *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CMooCow *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521a60
        ;   Label: core_moocow.cpp_CMooCow_getTargetPoints_FUN_00521a60
    PUSH ESI                            ; 00521a61
    PUSH EDI                            ; 00521a62
    SUB ESP,0x18                        ; 00521a63
    MOV EAX,dword ptr [ESP + 0x28]      ; 00521a66
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00521a6a
    MOV EDX,dword ptr [EAX + 0xc1d0]    ; 00521a6e
    PUSH EDX                            ; 00521a74
    ADD EAX,0x158                       ; 00521a75
    PUSH EAX                            ; 00521a7a
    LEA ESI,[ESP + 0x8]                 ; 00521a7b
    LEA EDI,[ESP + 0x14]                ; 00521a7f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00521a83
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x8]                 ; 00521a88
    ADD ESP,0x8                         ; 00521a8c
    LEA EAX,[ESP + 0xc]                 ; 00521a8f
    MOVSD ES:EDI,ESI                    ; 00521a93
    MOVSD ES:EDI,ESI                    ; 00521a94
    MOVSD ES:EDI,ESI                    ; 00521a95
    CMP EBX,EAX                         ; 00521a96
    JNZ 0x00521aa6                      ; 00521a98
        ;   XREF to: 00521aa6 (CONDITIONAL_JUMP)  ; LAB_00521aa6
    MOV EAX,0x1                         ; 00521a9a
    ADD ESP,0x18                        ; 00521a9f
    POP EDI                             ; 00521aa2
    POP ESI                             ; 00521aa3
    POP EBX                             ; 00521aa4
    RET                                 ; 00521aa5
    MOV EAX,dword ptr [ESP + 0xc]       ; 00521aa6
        ;   Label: LAB_00521aa6
    MOV dword ptr [EBX],EAX             ; 00521aaa
    MOV EAX,dword ptr [ESP + 0x10]      ; 00521aac
    MOV dword ptr [EBX + 0x4],EAX       ; 00521ab0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00521ab3
    MOV dword ptr [EBX + 0x8],EAX       ; 00521ab7
    MOV EAX,0x1                         ; 00521aba
    ADD ESP,0x18                        ; 00521abf
    POP EDI                             ; 00521ac2
    POP ESI                             ; 00521ac3
    POP EBX                             ; 00521ac4
    RET                                 ; 00521ac5

