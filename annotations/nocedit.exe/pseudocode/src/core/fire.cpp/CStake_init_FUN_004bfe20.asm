; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CStake_init_FUN_004bfe20(CStake * this_ptr, CVector3f * position, CVector3f * orientation)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 at 004c7cde
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfe20
        ;   Label: core_fire.cpp_CStake_init_FUN_004bfe20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bfe21
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bfe25
    MOV ECX,dword ptr [ESP + 0x10]      ; 004bfe29
    LEA EAX,[EBX + 0x4]                 ; 004bfe2d
    CMP EAX,EDX                         ; 004bfe30
    JNZ 0x004bfe6d                      ; 004bfe32
        ;   XREF to: 004bfe6d (CONDITIONAL_JUMP)  ; LAB_004bfe6d
    LEA EAX,[EBX + 0x10]                ; 004bfe34
        ;   Label: LAB_004bfe34
    CMP EAX,ECX                         ; 004bfe37
    JZ 0x004bfe4b                       ; 004bfe39
        ;   XREF to: 004bfe4b (CONDITIONAL_JUMP)  ; LAB_004bfe4b
    MOV EDX,dword ptr [ECX]             ; 004bfe3b
    MOV dword ptr [EAX],EDX             ; 004bfe3d
    MOV EDX,dword ptr [ECX + 0x4]       ; 004bfe3f
    MOV dword ptr [EAX + 0x4],EDX       ; 004bfe42
    MOV EDX,dword ptr [ECX + 0x8]       ; 004bfe45
    MOV dword ptr [EAX + 0x8],EDX       ; 004bfe48
    LEA EAX,[EBX + 0x10]                ; 004bfe4b
        ;   Label: LAB_004bfe4b
    PUSH EAX                            ; 004bfe4e
    LEA EAX,[EBX + 0x1c]                ; 004bfe4f
    PUSH EAX                            ; 004bfe52
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004bfe53
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV dword ptr [EBX],0x0             ; 004bfe58
    ADD ESP,0x8                         ; 004bfe5e
    MOV dword ptr [EBX + 0x258],0x0     ; 004bfe61
    POP EBX                             ; 004bfe6b
    RET                                 ; 004bfe6c
    PUSH ESI                            ; 004bfe6d
        ;   Label: LAB_004bfe6d
    MOV ESI,dword ptr [EDX]             ; 004bfe6e
    MOV dword ptr [EAX],ESI             ; 004bfe70
    MOV ESI,dword ptr [EDX + 0x4]       ; 004bfe72
    MOV dword ptr [EAX + 0x4],ESI       ; 004bfe75
    MOV ESI,dword ptr [EDX + 0x8]       ; 004bfe78
    MOV dword ptr [EAX + 0x8],ESI       ; 004bfe7b
    POP ESI                             ; 004bfe7e
    JMP 0x004bfe34                      ; 004bfe7f
        ;   XREF to: 004bfe34 (UNCONDITIONAL_JUMP)  ; LAB_004bfe34

