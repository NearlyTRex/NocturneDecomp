; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_init_FUN_00497a50(CStake *this_ptr,CVector3f *position,CVector3f *orientation)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_004a25f0 at 004a2759
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497a50
        ;   Label: core_fire.cpp_CStake_init_FUN_00497a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00497a51
    MOV EDX,dword ptr [ESP + 0xc]       ; 00497a55
    MOV ECX,dword ptr [ESP + 0x10]      ; 00497a59
    LEA EAX,[EBX + 0x4]                 ; 00497a5d
    CMP EAX,EDX                         ; 00497a60
    JNZ 0x00497a9d                      ; 00497a62
        ;   XREF to: 00497a9d (CONDITIONAL_JUMP)  ; LAB_00497a9d
    LEA EAX,[EBX + 0x10]                ; 00497a64
        ;   Label: LAB_00497a64
    CMP EAX,ECX                         ; 00497a67
    JZ 0x00497a7b                       ; 00497a69
        ;   XREF to: 00497a7b (CONDITIONAL_JUMP)  ; LAB_00497a7b
    MOV EDX,dword ptr [ECX]             ; 00497a6b
    MOV dword ptr [EAX],EDX             ; 00497a6d
    MOV EDX,dword ptr [ECX + 0x4]       ; 00497a6f
    MOV dword ptr [EAX + 0x4],EDX       ; 00497a72
    MOV EDX,dword ptr [ECX + 0x8]       ; 00497a75
    MOV dword ptr [EAX + 0x8],EDX       ; 00497a78
    LEA EAX,[EBX + 0x10]                ; 00497a7b
        ;   Label: LAB_00497a7b
    PUSH EAX                            ; 00497a7e
    LEA EAX,[EBX + 0x1c]                ; 00497a7f
    PUSH EAX                            ; 00497a82
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00497a83
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV dword ptr [EBX],0x0             ; 00497a88
    ADD ESP,0x8                         ; 00497a8e
    MOV dword ptr [EBX + 0x258],0x0     ; 00497a91
    POP EBX                             ; 00497a9b
    RET                                 ; 00497a9c
    PUSH ESI                            ; 00497a9d
        ;   Label: LAB_00497a9d
    MOV ESI,dword ptr [EDX]             ; 00497a9e
    MOV dword ptr [EAX],ESI             ; 00497aa0
    MOV ESI,dword ptr [EDX + 0x4]       ; 00497aa2
    MOV dword ptr [EAX + 0x4],ESI       ; 00497aa5
    MOV ESI,dword ptr [EDX + 0x8]       ; 00497aa8
    MOV dword ptr [EAX + 0x8],ESI       ; 00497aab
    POP ESI                             ; 00497aae
    JMP 0x00497a64                      ; 00497aaf
        ;   XREF to: 00497a64 (UNCONDITIONAL_JUMP)  ; LAB_00497a64

