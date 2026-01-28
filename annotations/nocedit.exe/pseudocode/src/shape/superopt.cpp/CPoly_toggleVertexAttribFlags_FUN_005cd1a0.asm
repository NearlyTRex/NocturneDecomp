; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0(CPoly *this_ptr,uint flag_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd1a0
        ;   Label: shape_superopt.cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0
    PUSH ESI                            ; 005cd1a1
    PUSH EDI                            ; 005cd1a2
    PUSH EBP                            ; 005cd1a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cd1a4
    MOV EDX,dword ptr [ESP + 0x18]      ; 005cd1a8
    MOV EAX,dword ptr [EDI + 0x4]       ; 005cd1ac
    SHL EAX,0x3                         ; 005cd1af
    MOV ECX,dword ptr [EDI]             ; 005cd1b2
    MOV EBX,EAX                         ; 005cd1b4
    SHL EAX,0x3                         ; 005cd1b6
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cd1b9
    SUB EAX,EBX                         ; 005cd1bc
    LEA EBX,[ECX + EAX*0x1]             ; 005cd1be
    MOV ESI,EDX                         ; 005cd1c1
    MOV EAX,dword ptr [EBX + 0x30]      ; 005cd1c3
    NOT ESI                             ; 005cd1c6
    AND EAX,EDX                         ; 005cd1c8
    MOV EBP,dword ptr [EBX + 0x30]      ; 005cd1ca
    NOT EAX                             ; 005cd1cd
    AND EBP,ESI                         ; 005cd1cf
    AND EAX,EDX                         ; 005cd1d1
    OR EAX,EBP                          ; 005cd1d3
    MOV dword ptr [EBX + 0x30],EAX      ; 005cd1d5
    MOV EAX,dword ptr [EDI + 0x8]       ; 005cd1d8
    SHL EAX,0x3                         ; 005cd1db
    MOV EBX,EAX                         ; 005cd1de
    SHL EAX,0x3                         ; 005cd1e0
    SUB EAX,EBX                         ; 005cd1e3
    LEA EBX,[ECX + EAX*0x1]             ; 005cd1e5
    MOV EAX,dword ptr [EBX + 0x30]      ; 005cd1e8
    AND EAX,EDX                         ; 005cd1eb
    MOV EBP,dword ptr [EBX + 0x30]      ; 005cd1ed
    NOT EAX                             ; 005cd1f0
    AND EBP,ESI                         ; 005cd1f2
    AND EAX,EDX                         ; 005cd1f4
    OR EAX,EBP                          ; 005cd1f6
    MOV dword ptr [EBX + 0x30],EAX      ; 005cd1f8
    MOV EAX,dword ptr [EDI + 0xc]       ; 005cd1fb
    SHL EAX,0x3                         ; 005cd1fe
    MOV EBX,EAX                         ; 005cd201
    SHL EAX,0x3                         ; 005cd203
    SUB EAX,EBX                         ; 005cd206
    ADD ECX,EAX                         ; 005cd208
    MOV EAX,dword ptr [ECX + 0x30]      ; 005cd20a
    AND EAX,EDX                         ; 005cd20d
    NOT EAX                             ; 005cd20f
    AND EAX,EDX                         ; 005cd211
    AND ESI,dword ptr [ECX + 0x30]      ; 005cd213
    OR EAX,ESI                          ; 005cd216
    MOV dword ptr [ECX + 0x30],EAX      ; 005cd218
    POP EBP                             ; 005cd21b
    POP EDI                             ; 005cd21c
    POP ESI                             ; 005cd21d
    POP EBX                             ; 005cd21e
    RET                                 ; 005cd21f

