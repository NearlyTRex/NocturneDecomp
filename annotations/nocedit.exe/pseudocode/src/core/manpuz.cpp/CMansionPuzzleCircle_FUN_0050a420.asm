; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_005098f0 at 00509ab6
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a610 at 0050a6f5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a420
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420
    PUSH ESI                            ; 0050a421
    MOV ECX,dword ptr [ESP + 0x18]      ; 0050a422
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050a426
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050a42a
    MOV dword ptr [EBX],0x0             ; 0050a42e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050a434
    MOV ESI,dword ptr [EBX]             ; 0050a438
    MOV dword ptr [ECX],ESI             ; 0050a43a
    MOV ESI,dword ptr [ECX]             ; 0050a43c
    MOV dword ptr [EAX],ESI             ; 0050a43e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050a440
    SUB EAX,EDX                         ; 0050a447
    SHL EAX,0x3                         ; 0050a449
    ADD EAX,EDX                         ; 0050a44c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050a44e
    SHL EAX,0x2                         ; 0050a452
    ADD EAX,EDX                         ; 0050a455
    CMP dword ptr [EAX + 0x5f0],0x0     ; 0050a457
    JZ 0x0050a46c                       ; 0050a45e
        ;   XREF to: 0050a46c (CONDITIONAL_JUMP)  ; LAB_0050a46c
    TEST dword ptr [EAX + 0x5f8],0x7fffffff ; 0050a460
    JZ 0x0050a46f                       ; 0050a46a
        ;   XREF to: 0050a46f (CONDITIONAL_JUMP)  ; LAB_0050a46f
    POP ESI                             ; 0050a46c
        ;   Label: LAB_0050a46c
    POP EBX                             ; 0050a46d
    RET                                 ; 0050a46e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050a46f
        ;   Label: LAB_0050a46f
    FILD dword ptr [EAX + 0x63c]        ; 0050a473
    FSTP float ptr [EDX]                ; 0050a479
    FILD dword ptr [EAX + 0x640]        ; 0050a47b
    FSTP float ptr [ECX]                ; 0050a481
    FILD dword ptr [EAX + 0x644]        ; 0050a483
    FSTP float ptr [EBX]                ; 0050a489
    POP ESI                             ; 0050a48b
    POP EBX                             ; 0050a48c
    RET                                 ; 0050a48d

