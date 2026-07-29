; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_00554310(CCharacter *param_1,CVector3f *param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554310
        ;   Label: core_weapon.cpp_FUN_00554310
    PUSH ESI                            ; 00554311
    SUB ESP,0xc                         ; 00554312
    MOV EBX,dword ptr [ESP + 0x18]      ; 00554315
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00554319
    PUSH EBX                            ; 0055431d
    MOV dword ptr [EBX + 0x2fc],0x0     ; 0055431e
    CALL core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660 ; 00554328
        ;   XREF to: 00554660 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0055432d
    TEST ESI,ESI                        ; 00554330
    JNZ 0x00554356                      ; 00554332
        ;   XREF to: 00554356 (CONDITIONAL_JUMP)  ; LAB_00554356
    PUSH 0x0                            ; 00554334
        ;   Label: LAB_00554334
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00554336
    PUSH EBX                            ; 0055433c
    CALL dword ptr [EAX + 0xd4]         ; 0055433d
    ADD ESP,0x8                         ; 00554343
    MOV dword ptr [EBX + 0x568],0x40a00000 ; 00554346
    ADD ESP,0xc                         ; 00554350
    POP ESI                             ; 00554353
    POP EBX                             ; 00554354
    RET                                 ; 00554355
    PUSH ESI                            ; 00554356
        ;   Label: LAB_00554356
    LEA EAX,[ESP + 0x4]                 ; 00554357
    PUSH EAX                            ; 0055435b
    LEA EAX,[EBX + 0x318]               ; 0055435c
    PUSH EAX                            ; 00554362
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00554363
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x34c]               ; 00554368
    ADD ESP,0xc                         ; 0055436e
    CMP EDX,EAX                         ; 00554371
    JZ 0x00554385                       ; 00554373
        ;   XREF to: 00554385 (CONDITIONAL_JUMP)  ; LAB_00554385
    MOV ECX,dword ptr [EAX]             ; 00554375
    MOV dword ptr [EDX],ECX             ; 00554377
    MOV ECX,dword ptr [EAX + 0x4]       ; 00554379
    MOV dword ptr [EDX + 0x4],ECX       ; 0055437c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0055437f
    MOV dword ptr [EDX + 0x8],ECX       ; 00554382
    LEA EAX,[EBX + 0x340]               ; 00554385
        ;   Label: LAB_00554385
    CMP EAX,ESI                         ; 0055438b
    JZ 0x00554334                       ; 0055438d
        ;   XREF to: 00554334 (CONDITIONAL_JUMP)  ; LAB_00554334
    MOV EDX,dword ptr [ESI]             ; 0055438f
    MOV dword ptr [EAX],EDX             ; 00554391
    MOV EDX,dword ptr [ESI + 0x4]       ; 00554393
    MOV dword ptr [EAX + 0x4],EDX       ; 00554396
    MOV EDX,dword ptr [ESI + 0x8]       ; 00554399
    MOV dword ptr [EAX + 0x8],EDX       ; 0055439c
    JMP 0x00554334                      ; 0055439f
        ;   XREF to: 00554334 (UNCONDITIONAL_JUMP)  ; LAB_00554334

