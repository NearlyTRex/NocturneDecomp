; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_weapon.cpp_CWeapon_FUN_005ee3f0(CWeapon * this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_weapon.cpp_FUN_005ee740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee3f0
        ;   Label: core_weapon.cpp_CWeapon_FUN_005ee3f0
    PUSH ESI                            ; 005ee3f1
    SUB ESP,0xc                         ; 005ee3f2
    MOV EBX,dword ptr [ESP + 0x18]      ; 005ee3f5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ee3f9
    PUSH EBX                            ; 005ee3fd
    MOV dword ptr [EBX + 0x304],0x0     ; 005ee3fe
    CALL core_weapon.cpp_FUN_005ee740   ; 005ee408 | undefined core_weapon.cpp_FUN_005ee740()
        ;   XREF to: 005ee740 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ee40d
    TEST ESI,ESI                        ; 005ee410
    JNZ 0x005ee436                      ; 005ee412 | LAB_005ee436
        ;   XREF to: 005ee436 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005ee414
        ;   Label: LAB_005ee414
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ee416
    PUSH EBX                            ; 005ee41c
    CALL dword ptr [EAX + 0xf0]         ; 005ee41d
    ADD ESP,0x8                         ; 005ee423
    MOV dword ptr [EBX + 0x570],0x40a00000 ; 005ee426
    ADD ESP,0xc                         ; 005ee430
    POP ESI                             ; 005ee433
    POP EBX                             ; 005ee434
    RET                                 ; 005ee435
    PUSH ESI                            ; 005ee436
        ;   Label: LAB_005ee436
    LEA EAX,[ESP + 0x4]                 ; 005ee437
    PUSH EAX                            ; 005ee43b
    LEA EAX,[EBX + 0x320]               ; 005ee43c
    PUSH EAX                            ; 005ee442
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 005ee443 | CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * matrix, CVector3f * output, CVector3f * input)
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)
    LEA EDX,[EBX + 0x354]               ; 005ee448
    ADD ESP,0xc                         ; 005ee44e
    CMP EDX,EAX                         ; 005ee451
    JZ 0x005ee465                       ; 005ee453 | LAB_005ee465
        ;   XREF to: 005ee465 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 005ee455
    MOV dword ptr [EDX],ECX             ; 005ee457
    MOV ECX,dword ptr [EAX + 0x4]       ; 005ee459
    MOV dword ptr [EDX + 0x4],ECX       ; 005ee45c
    MOV ECX,dword ptr [EAX + 0x8]       ; 005ee45f
    MOV dword ptr [EDX + 0x8],ECX       ; 005ee462
    LEA EAX,[EBX + 0x348]               ; 005ee465
        ;   Label: LAB_005ee465
    CMP EAX,ESI                         ; 005ee46b
    JZ 0x005ee414                       ; 005ee46d | LAB_005ee414
        ;   XREF to: 005ee414 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI]             ; 005ee46f
    MOV dword ptr [EAX],EDX             ; 005ee471
    MOV EDX,dword ptr [ESI + 0x4]       ; 005ee473
    MOV dword ptr [EAX + 0x4],EDX       ; 005ee476
    MOV EDX,dword ptr [ESI + 0x8]       ; 005ee479
    MOV dword ptr [EAX + 0x8],EDX       ; 005ee47c
    JMP 0x005ee414                      ; 005ee47f | LAB_005ee414
        ;   XREF to: 005ee414 (UNCONDITIONAL_JUMP)

