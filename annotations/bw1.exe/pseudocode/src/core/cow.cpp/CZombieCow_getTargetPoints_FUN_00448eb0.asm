; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00448eb0(CZombieCow *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448eb0
        ;   Label: core_cow.cpp_CZombieCow_getTargetPoints_FUN_00448eb0
    PUSH ESI                            ; 00448eb1
    PUSH EDI                            ; 00448eb2
    SUB ESP,0x18                        ; 00448eb3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00448eb6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00448eba
    MOV EDX,dword ptr [EAX + 0xc268]    ; 00448ebe
    PUSH EDX                            ; 00448ec4
    ADD EAX,0x158                       ; 00448ec5
    PUSH EAX                            ; 00448eca
    LEA ESI,[ESP + 0x8]                 ; 00448ecb
    LEA EDI,[ESP + 0x14]                ; 00448ecf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00448ed3
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x8]                 ; 00448ed8
    ADD ESP,0x8                         ; 00448edc
    LEA EAX,[ESP + 0xc]                 ; 00448edf
    MOVSD ES:EDI,ESI                    ; 00448ee3
    MOVSD ES:EDI,ESI                    ; 00448ee4
    MOVSD ES:EDI,ESI                    ; 00448ee5
    CMP EBX,EAX                         ; 00448ee6
    JNZ 0x00448ef6                      ; 00448ee8
        ;   XREF to: 00448ef6 (CONDITIONAL_JUMP)  ; LAB_00448ef6
    MOV EAX,0x1                         ; 00448eea
    ADD ESP,0x18                        ; 00448eef
    POP EDI                             ; 00448ef2
    POP ESI                             ; 00448ef3
    POP EBX                             ; 00448ef4
    RET                                 ; 00448ef5
    MOV EAX,dword ptr [ESP + 0xc]       ; 00448ef6
        ;   Label: LAB_00448ef6
    MOV dword ptr [EBX],EAX             ; 00448efa
    MOV EAX,dword ptr [ESP + 0x10]      ; 00448efc
    MOV dword ptr [EBX + 0x4],EAX       ; 00448f00
    MOV EAX,dword ptr [ESP + 0x14]      ; 00448f03
    MOV dword ptr [EBX + 0x8],EAX       ; 00448f07
    MOV EAX,0x1                         ; 00448f0a
    ADD ESP,0x18                        ; 00448f0f
    POP EDI                             ; 00448f12
    POP ESI                             ; 00448f13
    POP EBX                             ; 00448f14
    RET                                 ; 00448f15

