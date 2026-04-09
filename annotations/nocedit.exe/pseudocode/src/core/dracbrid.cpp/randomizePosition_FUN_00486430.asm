; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dracbrid_cpp_randomizePosition_FUN_00486430(CVector3f *dest,CVector3f *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3f *      Stack[0x8]:4   src
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486430
        ;   Label: core_dracbrid.cpp_randomizePosition_FUN_00486430
    PUSH ESI                            ; 00486431
    SUB ESP,0x4                         ; 00486432
    MOV ESI,dword ptr [ESP + 0x10]      ; 00486435
    MOV EBX,dword ptr [ESP + 0x14]      ; 00486439
    PUSH 0x40a00000                     ; 0048643d
    PUSH 0xc0a00000                     ; 00486442
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00486447
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0048644c
    FLD float ptr [ESP + 0x8]           ; 00486450
    ADD ESP,0x8                         ; 00486454
    PUSH 0x40000000                     ; 00486457
    FADD float ptr [EBX]                ; 0048645c
    PUSH 0xc0000000                     ; 0048645e
    FSTP float ptr [EBX]                ; 00486463
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00486465
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0048646a
    FLD float ptr [ESP + 0x8]           ; 0048646e
    ADD ESP,0x8                         ; 00486472
    PUSH 0x40a00000                     ; 00486475
    FADD float ptr [EBX + 0x4]          ; 0048647a
    PUSH 0xc0a00000                     ; 0048647d
    FSTP float ptr [EBX + 0x4]          ; 00486482
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00486485
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0048648a
    LEA EDX,[EBX + 0x4]                 ; 0048648e
    FLD float ptr [ESP + 0x8]           ; 00486491
    FADD float ptr [EBX + 0x8]          ; 00486495
    MOV EAX,dword ptr [EBX]             ; 00486498
    FSTP float ptr [EBX + 0x8]          ; 0048649a
    MOV dword ptr [ESI],EAX             ; 0048649d
    LEA EAX,[ESI + 0x4]                 ; 0048649f
    MOV EDX,dword ptr [EDX]             ; 004864a2
    MOV dword ptr [EAX],EDX             ; 004864a4
    MOV EDX,dword ptr [EBX + 0x8]       ; 004864a6
    ADD ESP,0x8                         ; 004864a9
    MOV dword ptr [EAX + 0x4],EDX       ; 004864ac
    MOV EAX,ESI                         ; 004864af
    ADD ESP,0x4                         ; 004864b1
    POP ESI                             ; 004864b4
    POP EBX                             ; 004864b5
    RET                                 ; 004864b6

