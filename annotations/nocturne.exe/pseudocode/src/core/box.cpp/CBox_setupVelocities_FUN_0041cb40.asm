; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041cb40(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   linear_velocity
; CVector3f *      Stack[0xc]:4   angular_velocity
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_onDropped_FUN_00416cc0 at 00416d13
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_0041f0f0 at 0041f139
;   core_fire.cpp_CStake_spawn_FUN_00483320 at 0048358f
;   core_fire.cpp_CToss_create_FUN_004873b0 at 004874a1
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cb40
        ;   Label: core_box.cpp_CBox_setupVelocities_FUN_0041cb40
    PUSH ESI                            ; 0041cb41
    SUB ESP,0xc                         ; 0041cb42
    MOV EBX,dword ptr [ESP + 0x18]      ; 0041cb45
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0041cb49
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041cb4d
    TEST EDX,EDX                        ; 0041cb51
    JZ 0x0041cb98                       ; 0041cb53
        ;   XREF to: 0041cb98 (CONDITIONAL_JUMP)  ; LAB_0041cb98
    LEA EAX,[EBX + 0x40]                ; 0041cb55
    CMP EAX,EDX                         ; 0041cb58
    JZ 0x0041cb6c                       ; 0041cb5a
        ;   XREF to: 0041cb6c (CONDITIONAL_JUMP)  ; LAB_0041cb6c
    MOV ECX,dword ptr [EDX]             ; 0041cb5c
    MOV dword ptr [EAX],ECX             ; 0041cb5e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041cb60
    MOV dword ptr [EAX + 0x4],ECX       ; 0041cb63
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041cb66
    MOV dword ptr [EAX + 0x8],ECX       ; 0041cb69
    LEA EAX,[EBX + 0x40]                ; 0041cb6c
        ;   Label: LAB_0041cb6c
    PUSH EAX                            ; 0041cb6f
    LEA EAX,[ESP + 0x4]                 ; 0041cb70
    PUSH EAX                            ; 0041cb74
    LEA EAX,[EBX + 0x18]                ; 0041cb75
    PUSH EAX                            ; 0041cb78
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0041cb79
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x4c]                ; 0041cb7e
    ADD ESP,0xc                         ; 0041cb81
    CMP EDX,EAX                         ; 0041cb84
    JZ 0x0041cb98                       ; 0041cb86
        ;   XREF to: 0041cb98 (CONDITIONAL_JUMP)  ; LAB_0041cb98
    MOV ECX,dword ptr [EAX]             ; 0041cb88
    MOV dword ptr [EDX],ECX             ; 0041cb8a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041cb8c
    MOV dword ptr [EDX + 0x4],ECX       ; 0041cb8f
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041cb92
    MOV dword ptr [EDX + 0x8],ECX       ; 0041cb95
    TEST ESI,ESI                        ; 0041cb98
        ;   Label: LAB_0041cb98
    JZ 0x0041cba3                       ; 0041cb9a
        ;   XREF to: 0041cba3 (CONDITIONAL_JUMP)  ; LAB_0041cba3
    LEA EAX,[EBX + 0x70]                ; 0041cb9c
    CMP EAX,ESI                         ; 0041cb9f
    JNZ 0x0041cba9                      ; 0041cba1
        ;   XREF to: 0041cba9 (CONDITIONAL_JUMP)  ; LAB_0041cba9
    ADD ESP,0xc                         ; 0041cba3
        ;   Label: LAB_0041cba3
    POP ESI                             ; 0041cba6
    POP EBX                             ; 0041cba7
    RET                                 ; 0041cba8
    MOV EDX,dword ptr [ESI]             ; 0041cba9
        ;   Label: LAB_0041cba9
    MOV dword ptr [EAX],EDX             ; 0041cbab
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041cbad
    MOV dword ptr [EAX + 0x4],EDX       ; 0041cbb0
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041cbb3
    MOV dword ptr [EAX + 0x8],EDX       ; 0041cbb6
    ADD ESP,0xc                         ; 0041cbb9
    POP ESI                             ; 0041cbbc
    POP EBX                             ; 0041cbbd
    RET                                 ; 0041cbbe

