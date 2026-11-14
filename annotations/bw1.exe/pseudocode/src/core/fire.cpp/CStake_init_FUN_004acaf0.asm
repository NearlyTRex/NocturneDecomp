; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_init_FUN_004acaf0(CStake *this_ptr,CVector3f *position,CVector3f *orientation)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_004b5bc0 at 004b5d29
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004acaf0
        ;   Label: core_fire.cpp_CStake_init_FUN_004acaf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004acaf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004acaf5
    MOV ECX,dword ptr [ESP + 0x10]      ; 004acaf9
    LEA EAX,[EBX + 0x4]                 ; 004acafd
    CMP EAX,EDX                         ; 004acb00
    JNZ 0x004acb3d                      ; 004acb02
        ;   XREF to: 004acb3d (CONDITIONAL_JUMP)  ; LAB_004acb3d
    LEA EAX,[EBX + 0x10]                ; 004acb04
        ;   Label: LAB_004acb04
    CMP EAX,ECX                         ; 004acb07
    JZ 0x004acb1b                       ; 004acb09
        ;   XREF to: 004acb1b (CONDITIONAL_JUMP)  ; LAB_004acb1b
    MOV EDX,dword ptr [ECX]             ; 004acb0b
    MOV dword ptr [EAX],EDX             ; 004acb0d
    MOV EDX,dword ptr [ECX + 0x4]       ; 004acb0f
    MOV dword ptr [EAX + 0x4],EDX       ; 004acb12
    MOV EDX,dword ptr [ECX + 0x8]       ; 004acb15
    MOV dword ptr [EAX + 0x8],EDX       ; 004acb18
    LEA EAX,[EBX + 0x10]                ; 004acb1b
        ;   Label: LAB_004acb1b
    PUSH EAX                            ; 004acb1e
    LEA EAX,[EBX + 0x1c]                ; 004acb1f
    PUSH EAX                            ; 004acb22
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004acb23
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV dword ptr [EBX],0x0             ; 004acb28
    ADD ESP,0x8                         ; 004acb2e
    MOV dword ptr [EBX + 0x258],0x0     ; 004acb31
    POP EBX                             ; 004acb3b
    RET                                 ; 004acb3c
    PUSH ESI                            ; 004acb3d
        ;   Label: LAB_004acb3d
    MOV ESI,dword ptr [EDX]             ; 004acb3e
    MOV dword ptr [EAX],ESI             ; 004acb40
    MOV ESI,dword ptr [EDX + 0x4]       ; 004acb42
    MOV dword ptr [EAX + 0x4],ESI       ; 004acb45
    MOV ESI,dword ptr [EDX + 0x8]       ; 004acb48
    MOV dword ptr [EAX + 0x8],ESI       ; 004acb4b
    POP ESI                             ; 004acb4e
    JMP 0x004acb04                      ; 004acb4f
        ;   XREF to: 004acb04 (UNCONDITIONAL_JUMP)  ; LAB_004acb04

