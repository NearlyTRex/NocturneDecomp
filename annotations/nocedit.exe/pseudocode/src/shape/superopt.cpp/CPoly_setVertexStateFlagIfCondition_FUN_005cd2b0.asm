; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0(CPoly * this_ptr, uint flag_to_set, uint condition_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_to_set
; uint             Stack[0xc]:4   condition_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd2b0
        ;   Label: shape_superopt.cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0
    PUSH ESI                            ; 005cd2b1
    PUSH EDI                            ; 005cd2b2
    PUSH EBP                            ; 005cd2b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cd2b4
    MOV ECX,dword ptr [ESP + 0x18]      ; 005cd2b8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005cd2bc
    MOV EAX,dword ptr [EDI + 0x4]       ; 005cd2c0
    SHL EAX,0x3                         ; 005cd2c3
    MOV ESI,dword ptr [EDI]             ; 005cd2c6
    MOV EBX,EAX                         ; 005cd2c8
    SHL EAX,0x3                         ; 005cd2ca
    MOV ESI,dword ptr [ESI + 0x4]       ; 005cd2cd
    SUB EAX,EBX                         ; 005cd2d0
    ADD EAX,ESI                         ; 005cd2d2
    MOV EBX,dword ptr [EAX + 0x34]      ; 005cd2d4
    AND EBX,EDX                         ; 005cd2d7
    CMP EBX,EDX                         ; 005cd2d9
    JZ 0x005cd324                       ; 005cd2db | LAB_005cd324
        ;   XREF to: 005cd324 (CONDITIONAL_JUMP)
    MOV EBX,ECX                         ; 005cd2dd
    MOV EBP,dword ptr [EAX + 0x34]      ; 005cd2df
    NOT EBX                             ; 005cd2e2
    AND EBP,EBX                         ; 005cd2e4
    MOV dword ptr [EAX + 0x34],EBP      ; 005cd2e6
    MOV EAX,dword ptr [EDI + 0x8]       ; 005cd2e9
        ;   Label: LAB_005cd2e9
    SHL EAX,0x3                         ; 005cd2ec
    MOV EBX,EAX                         ; 005cd2ef
    SHL EAX,0x3                         ; 005cd2f1
    SUB EAX,EBX                         ; 005cd2f4
    ADD EAX,ESI                         ; 005cd2f6
    MOV EBX,dword ptr [EAX + 0x34]      ; 005cd2f8
    AND EBX,EDX                         ; 005cd2fb
    CMP EBX,EDX                         ; 005cd2fd
    JNZ 0x005cd329                      ; 005cd2ff | LAB_005cd329
        ;   XREF to: 005cd329 (CONDITIONAL_JUMP)
    OR dword ptr [EAX + 0x34],ECX       ; 005cd301
    MOV EAX,dword ptr [EDI + 0xc]       ; 005cd304
        ;   Label: LAB_005cd304
    SHL EAX,0x3                         ; 005cd307
    MOV EBX,EAX                         ; 005cd30a
    SHL EAX,0x3                         ; 005cd30c
    SUB EAX,EBX                         ; 005cd30f
    ADD EAX,ESI                         ; 005cd311
    MOV EBX,dword ptr [EAX + 0x34]      ; 005cd313
    AND EBX,EDX                         ; 005cd316
    CMP EBX,EDX                         ; 005cd318
    JNZ 0x005cd337                      ; 005cd31a | LAB_005cd337
        ;   XREF to: 005cd337 (CONDITIONAL_JUMP)
    OR dword ptr [EAX + 0x34],ECX       ; 005cd31c
    POP EBP                             ; 005cd31f
    POP EDI                             ; 005cd320
    POP ESI                             ; 005cd321
    POP EBX                             ; 005cd322
    RET                                 ; 005cd323
    OR dword ptr [EAX + 0x34],ECX       ; 005cd324
        ;   Label: LAB_005cd324
    JMP 0x005cd2e9                      ; 005cd327 | LAB_005cd2e9
        ;   XREF to: 005cd2e9 (UNCONDITIONAL_JUMP)
    MOV EBX,ECX                         ; 005cd329
        ;   Label: LAB_005cd329
    MOV EBP,dword ptr [EAX + 0x34]      ; 005cd32b
    NOT EBX                             ; 005cd32e
    AND EBP,EBX                         ; 005cd330
    MOV dword ptr [EAX + 0x34],EBP      ; 005cd332
    JMP 0x005cd304                      ; 005cd335 | LAB_005cd304
        ;   XREF to: 005cd304 (UNCONDITIONAL_JUMP)
    NOT ECX                             ; 005cd337
        ;   Label: LAB_005cd337
    AND dword ptr [EAX + 0x34],ECX      ; 005cd339
    POP EBP                             ; 005cd33c
    POP EDI                             ; 005cd33d
    POP ESI                             ; 005cd33e
    POP EBX                             ; 005cd33f
    RET                                 ; 005cd340

