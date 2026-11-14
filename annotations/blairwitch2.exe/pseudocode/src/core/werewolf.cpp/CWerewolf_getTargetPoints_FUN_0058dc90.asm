; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_0058dc90(CWerewolf *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058dc90
        ;   Label: core_werewolf.cpp_CWerewolf_getTargetPoints_FUN_0058dc90
    PUSH ESI                            ; 0058dc91
    PUSH EDI                            ; 0058dc92
    SUB ESP,0x18                        ; 0058dc93
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058dc96
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0058dc9a
    MOV EDX,dword ptr [EAX + 0x10afc]   ; 0058dc9e
    PUSH EDX                            ; 0058dca4
    ADD EAX,0x2b4                       ; 0058dca5
    PUSH EAX                            ; 0058dcaa
    LEA ESI,[ESP + 0x8]                 ; 0058dcab
    LEA EDI,[ESP + 0x14]                ; 0058dcaf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 0058dcb3
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x8]                 ; 0058dcb8
    ADD ESP,0x8                         ; 0058dcbc
    LEA EAX,[ESP + 0xc]                 ; 0058dcbf
    MOVSD ES:EDI,ESI                    ; 0058dcc3
    MOVSD ES:EDI,ESI                    ; 0058dcc4
    MOVSD ES:EDI,ESI                    ; 0058dcc5
    CMP EBX,EAX                         ; 0058dcc6
    JNZ 0x0058dcd6                      ; 0058dcc8
        ;   XREF to: 0058dcd6 (CONDITIONAL_JUMP)  ; LAB_0058dcd6
    MOV EAX,0x1                         ; 0058dcca
    ADD ESP,0x18                        ; 0058dccf
    POP EDI                             ; 0058dcd2
    POP ESI                             ; 0058dcd3
    POP EBX                             ; 0058dcd4
    RET                                 ; 0058dcd5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058dcd6
        ;   Label: LAB_0058dcd6
    MOV dword ptr [EBX],EAX             ; 0058dcda
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058dcdc
    MOV dword ptr [EBX + 0x4],EAX       ; 0058dce0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058dce3
    MOV dword ptr [EBX + 0x8],EAX       ; 0058dce7
    MOV EAX,0x1                         ; 0058dcea
    ADD ESP,0x18                        ; 0058dcef
    POP EDI                             ; 0058dcf2
    POP ESI                             ; 0058dcf3
    POP EBX                             ; 0058dcf4
    RET                                 ; 0058dcf5

