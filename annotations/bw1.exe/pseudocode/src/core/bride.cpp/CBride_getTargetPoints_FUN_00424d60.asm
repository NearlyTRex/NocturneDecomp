; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00424d60(CBride *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_007c5388
;   undefined4 DAT_007c53ac
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424d60
        ;   Label: core_bride.cpp_CBride_getTargetPoints_FUN_00424d60
    PUSH ESI                            ; 00424d61
    PUSH EDI                            ; 00424d62
    SUB ESP,0x30                        ; 00424d63
    MOV EAX,dword ptr [ESP + 0x40]      ; 00424d66
    MOV EBX,dword ptr [ESP + 0x44]      ; 00424d6a
    MOV ESI,dword ptr [EAX + 0xc288]    ; 00424d6e
    SHL ESI,0x2                         ; 00424d74
    ADD ESI,EAX                         ; 00424d77
    MOV EDX,dword ptr [ESI + 0x2298]    ; 00424d79
    ADD EAX,0x158                       ; 00424d7f
    TEST EDX,EDX                        ; 00424d84
    JZ 0x00424dcc                       ; 00424d86
        ;   XREF to: 00424dcc (CONDITIONAL_JUMP)  ; LAB_00424dcc
    MOV ESI,dword ptr [0x007c5388]      ; 00424d88 | DAT_007c5388
    PUSH ESI                            ; 00424d8e
    PUSH EAX                            ; 00424d8f
    LEA ESI,[ESP + 0x2c]                ; 00424d90
    LEA EDI,[ESP + 0x8]                 ; 00424d94
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00424d98
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x2c]                ; 00424d9d
    ADD ESP,0x8                         ; 00424da1
    MOV EAX,ESP                         ; 00424da4
    MOVSD ES:EDI,ESI                    ; 00424da6
    MOVSD ES:EDI,ESI                    ; 00424da7
    MOVSD ES:EDI,ESI                    ; 00424da8
    CMP EBX,EAX                         ; 00424da9
    JZ 0x00424dc0                       ; 00424dab
        ;   XREF to: 00424dc0 (CONDITIONAL_JUMP)  ; LAB_00424dc0
    MOV EAX,dword ptr [ESP]             ; 00424dad
    MOV dword ptr [EBX],EAX             ; 00424db0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00424db2
    MOV dword ptr [EBX + 0x4],EAX       ; 00424db6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00424db9
    MOV dword ptr [EBX + 0x8],EAX       ; 00424dbd
    MOV EAX,0x1                         ; 00424dc0
        ;   Label: LAB_00424dc0
    ADD ESP,0x30                        ; 00424dc5
    POP EDI                             ; 00424dc8
    POP ESI                             ; 00424dc9
    POP EBX                             ; 00424dca
    RET                                 ; 00424dcb
    MOV ECX,dword ptr [0x007c53ac]      ; 00424dcc | DAT_007c53ac
        ;   Label: LAB_00424dcc
    PUSH ECX                            ; 00424dd2
    PUSH EAX                            ; 00424dd3
    LEA ESI,[ESP + 0x20]                ; 00424dd4
    LEA EDI,[ESP + 0x14]                ; 00424dd8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00424ddc
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x20]                ; 00424de1
    ADD ESP,0x8                         ; 00424de5
    LEA EAX,[ESP + 0xc]                 ; 00424de8
    MOVSD ES:EDI,ESI                    ; 00424dec
    MOVSD ES:EDI,ESI                    ; 00424ded
    MOVSD ES:EDI,ESI                    ; 00424dee
    CMP EBX,EAX                         ; 00424def
    JZ 0x00424dc0                       ; 00424df1
        ;   XREF to: 00424dc0 (CONDITIONAL_JUMP)  ; LAB_00424dc0
    MOV EAX,dword ptr [ESP + 0xc]       ; 00424df3
    MOV dword ptr [EBX],EAX             ; 00424df7
    MOV EAX,dword ptr [ESP + 0x10]      ; 00424df9
    MOV dword ptr [EBX + 0x4],EAX       ; 00424dfd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00424e00
    MOV dword ptr [EBX + 0x8],EAX       ; 00424e04
    MOV EAX,0x1                         ; 00424e07
    ADD ESP,0x30                        ; 00424e0c
    POP EDI                             ; 00424e0f
    POP ESI                             ; 00424e10
    POP EBX                             ; 00424e11
    RET                                 ; 00424e12

