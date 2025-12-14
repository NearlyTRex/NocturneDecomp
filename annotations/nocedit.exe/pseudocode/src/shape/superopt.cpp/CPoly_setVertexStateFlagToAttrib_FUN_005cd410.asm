; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410(CPoly * this_ptr, uint set_mask, uint attrib_test)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   set_mask
; uint             Stack[0xc]:4   attrib_test
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd410
        ;   Label: shape_superopt.cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410
    PUSH ESI                            ; 005cd411
    PUSH EDI                            ; 005cd412
    PUSH EBP                            ; 005cd413
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cd414
    MOV ECX,dword ptr [ESP + 0x18]      ; 005cd418
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005cd41c
    MOV EAX,dword ptr [EDI + 0x4]       ; 005cd420
    SHL EAX,0x3                         ; 005cd423
    MOV ESI,dword ptr [EDI]             ; 005cd426
    MOV EBX,EAX                         ; 005cd428
    SHL EAX,0x3                         ; 005cd42a
    MOV ESI,dword ptr [ESI + 0x4]       ; 005cd42d
    SUB EAX,EBX                         ; 005cd430
    ADD EAX,ESI                         ; 005cd432
    MOV EBX,dword ptr [EAX + 0x30]      ; 005cd434
    AND EBX,EDX                         ; 005cd437
    CMP EBX,EDX                         ; 005cd439
    JZ 0x005cd484                       ; 005cd43b
        ;   XREF to: 005cd484 (CONDITIONAL_JUMP)  ; LAB_005cd484
    MOV EBX,ECX                         ; 005cd43d
    MOV EBP,dword ptr [EAX + 0x34]      ; 005cd43f
    NOT EBX                             ; 005cd442
    AND EBP,EBX                         ; 005cd444
    MOV dword ptr [EAX + 0x34],EBP      ; 005cd446
    MOV EAX,dword ptr [EDI + 0x8]       ; 005cd449
        ;   Label: LAB_005cd449
    SHL EAX,0x3                         ; 005cd44c
    MOV EBX,EAX                         ; 005cd44f
    SHL EAX,0x3                         ; 005cd451
    SUB EAX,EBX                         ; 005cd454
    ADD EAX,ESI                         ; 005cd456
    MOV EBX,dword ptr [EAX + 0x30]      ; 005cd458
    AND EBX,EDX                         ; 005cd45b
    CMP EBX,EDX                         ; 005cd45d
    JNZ 0x005cd489                      ; 005cd45f
        ;   XREF to: 005cd489 (CONDITIONAL_JUMP)  ; LAB_005cd489
    OR dword ptr [EAX + 0x34],ECX       ; 005cd461
    MOV EAX,dword ptr [EDI + 0xc]       ; 005cd464
        ;   Label: LAB_005cd464
    SHL EAX,0x3                         ; 005cd467
    MOV EBX,EAX                         ; 005cd46a
    SHL EAX,0x3                         ; 005cd46c
    SUB EAX,EBX                         ; 005cd46f
    ADD EAX,ESI                         ; 005cd471
    MOV EBX,dword ptr [EAX + 0x30]      ; 005cd473
    AND EBX,EDX                         ; 005cd476
    CMP EBX,EDX                         ; 005cd478
    JNZ 0x005cd497                      ; 005cd47a
        ;   XREF to: 005cd497 (CONDITIONAL_JUMP)  ; LAB_005cd497
    OR dword ptr [EAX + 0x34],ECX       ; 005cd47c
    POP EBP                             ; 005cd47f
    POP EDI                             ; 005cd480
    POP ESI                             ; 005cd481
    POP EBX                             ; 005cd482
    RET                                 ; 005cd483
    OR dword ptr [EAX + 0x34],ECX       ; 005cd484
        ;   Label: LAB_005cd484
    JMP 0x005cd449                      ; 005cd487
        ;   XREF to: 005cd449 (UNCONDITIONAL_JUMP)  ; LAB_005cd449
    MOV EBX,ECX                         ; 005cd489
        ;   Label: LAB_005cd489
    MOV EBP,dword ptr [EAX + 0x34]      ; 005cd48b
    NOT EBX                             ; 005cd48e
    AND EBP,EBX                         ; 005cd490
    MOV dword ptr [EAX + 0x34],EBP      ; 005cd492
    JMP 0x005cd464                      ; 005cd495
        ;   XREF to: 005cd464 (UNCONDITIONAL_JUMP)  ; LAB_005cd464
    NOT ECX                             ; 005cd497
        ;   Label: LAB_005cd497
    AND dword ptr [EAX + 0x34],ECX      ; 005cd499
    POP EBP                             ; 005cd49c
    POP EDI                             ; 005cd49d
    POP ESI                             ; 005cd49e
    POP EBX                             ; 005cd49f
    RET                                 ; 005cd4a0

