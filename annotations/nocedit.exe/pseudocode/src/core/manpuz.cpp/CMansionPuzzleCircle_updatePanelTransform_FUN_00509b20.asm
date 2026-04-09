; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
; Local Variables:
; CVector3f        Stack[-0x34]:12  local_34
; CVector3f        Stack[-0x28]:12  local_28
; CVector3f        Stack[-0x1c]:12  local_1c
; int              Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0 at 0050924b
;   core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70 at 00508ca0
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 at 0050ace6
;
; Referenced Globals:
;   float FLOAT_00660d8c = 0.5235988
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509b20
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20
    PUSH ESI                            ; 00509b21
    PUSH EDI                            ; 00509b22
    SUB ESP,0x28                        ; 00509b23
    MOV EDI,dword ptr [ESP + 0x38]      ; 00509b26
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00509b2a
    LEA EAX,[ESI*0x4 + 0x0]             ; 00509b2e
    SUB EAX,ESI                         ; 00509b35
    SHL EAX,0x3                         ; 00509b37
    ADD EAX,ESI                         ; 00509b3a
    LEA EBX,[EDI + 0x5f0]               ; 00509b3c
    SHL EAX,0x2                         ; 00509b42
    MOV dword ptr [ESP + 0x24],ESI      ; 00509b45
    ADD EBX,EAX                         ; 00509b49
    FILD dword ptr [ESP + 0x24]         ; 00509b4b
    FADD float ptr [EBX + 0x4]          ; 00509b4f
    FMUL float ptr [0x00660d8c]         ; 00509b52 | FLOAT_00660d8c
    LEA EAX,[EBX + 0x18]                ; 00509b58
    MOV dword ptr [EBX + 0x18],0x0      ; 00509b5b
    PUSH EAX                            ; 00509b62
    LEA ESI,[EBX + 0x24]                ; 00509b63
    MOV dword ptr [EBX + 0x20],0x0      ; 00509b66
    PUSH ESI                            ; 00509b6d
    FSTP float ptr [EBX + 0x1c]         ; 00509b6e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00509b71
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00509b76
    MOV EAX,dword ptr [EDI + 0x150c]    ; 00509b79
    MOV dword ptr [ESP + 0x8],EAX       ; 00509b7f
    MOV EAX,ESP                         ; 00509b83
    PUSH EAX                            ; 00509b85
    LEA EAX,[ESP + 0x10]                ; 00509b86
    PUSH EAX                            ; 00509b8a
    XOR EDX,EDX                         ; 00509b8b
    PUSH ESI                            ; 00509b8d
    MOV dword ptr [ESP + 0xc],EDX       ; 00509b8e
    MOV dword ptr [ESP + 0x10],EDX      ; 00509b92
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00509b96
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0xc]                 ; 00509b9b
    ADD ESP,0xc                         ; 00509b9e
    CMP EDX,EAX                         ; 00509ba1
    JZ 0x00509bb5                       ; 00509ba3
        ;   XREF to: 00509bb5 (CONDITIONAL_JUMP)  ; LAB_00509bb5
    MOV ECX,dword ptr [EAX]             ; 00509ba5
    MOV dword ptr [EDX],ECX             ; 00509ba7
    MOV ECX,dword ptr [EAX + 0x4]       ; 00509ba9
    MOV dword ptr [EDX + 0x4],ECX       ; 00509bac
    MOV ECX,dword ptr [EAX + 0x8]       ; 00509baf
    MOV dword ptr [EDX + 0x8],ECX       ; 00509bb2
    LEA EAX,[EBX + 0xc]                 ; 00509bb5
        ;   Label: LAB_00509bb5
    PUSH EAX                            ; 00509bb8
    LEA EAX,[ESP + 0x1c]                ; 00509bb9
    PUSH EAX                            ; 00509bbd
    PUSH EDI                            ; 00509bbe
    ADD EBX,0x58                        ; 00509bbf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00509bc2
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00509bc7
    CMP EBX,EAX                         ; 00509bca
    JNZ 0x00509bd5                      ; 00509bcc
        ;   XREF to: 00509bd5 (CONDITIONAL_JUMP)  ; LAB_00509bd5
    ADD ESP,0x28                        ; 00509bce
    POP EDI                             ; 00509bd1
    POP ESI                             ; 00509bd2
    POP EBX                             ; 00509bd3
    RET                                 ; 00509bd4
    MOV EDX,dword ptr [EAX]             ; 00509bd5
        ;   Label: LAB_00509bd5
    MOV dword ptr [EBX],EDX             ; 00509bd7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00509bd9
    MOV dword ptr [EBX + 0x4],EDX       ; 00509bdc
    MOV EDX,dword ptr [EAX + 0x8]       ; 00509bdf
    MOV dword ptr [EBX + 0x8],EDX       ; 00509be2
    ADD ESP,0x28                        ; 00509be5
    POP EDI                             ; 00509be8
    POP ESI                             ; 00509be9
    POP EBX                             ; 00509bea
    RET                                 ; 00509beb

