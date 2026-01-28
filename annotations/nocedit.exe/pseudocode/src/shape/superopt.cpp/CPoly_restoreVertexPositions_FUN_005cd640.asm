; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CPoly_restoreVertexPositions_FUN_005cd640(CPoly *this_ptr)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd640
        ;   Label: shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640
    PUSH ESI                            ; 005cd641
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cd642
    MOV EAX,dword ptr [EBX + 0x4]       ; 005cd646
    SHL EAX,0x3                         ; 005cd649
    MOV ECX,dword ptr [EBX]             ; 005cd64c
    MOV EDX,EAX                         ; 005cd64e
    SHL EAX,0x3                         ; 005cd650
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cd653
    SUB EAX,EDX                         ; 005cd656
    ADD EAX,ECX                         ; 005cd658
    LEA EDX,[EAX + 0x18]                ; 005cd65a
    MOV ESI,dword ptr [EDX]             ; 005cd65d
    MOV dword ptr [EAX],ESI             ; 005cd65f
    MOV ESI,dword ptr [EDX + 0x4]       ; 005cd661
    MOV dword ptr [EAX + 0x4],ESI       ; 005cd664
    MOV ESI,dword ptr [EDX + 0x8]       ; 005cd667
    MOV dword ptr [EAX + 0x8],ESI       ; 005cd66a
    MOV ESI,dword ptr [EDX + 0xc]       ; 005cd66d
    MOV dword ptr [EAX + 0xc],ESI       ; 005cd670
    MOV ESI,dword ptr [EDX + 0x10]      ; 005cd673
    MOV dword ptr [EAX + 0x10],ESI      ; 005cd676
    MOV ESI,dword ptr [EDX + 0x14]      ; 005cd679
    MOV dword ptr [EAX + 0x14],ESI      ; 005cd67c
    MOV EAX,dword ptr [EBX + 0x8]       ; 005cd67f
    SHL EAX,0x3                         ; 005cd682
    MOV EDX,EAX                         ; 005cd685
    SHL EAX,0x3                         ; 005cd687
    SUB EAX,EDX                         ; 005cd68a
    ADD EAX,ECX                         ; 005cd68c
    LEA EDX,[EAX + 0x18]                ; 005cd68e
    MOV ESI,dword ptr [EDX]             ; 005cd691
    MOV dword ptr [EAX],ESI             ; 005cd693
    MOV ESI,dword ptr [EDX + 0x4]       ; 005cd695
    MOV dword ptr [EAX + 0x4],ESI       ; 005cd698
    MOV ESI,dword ptr [EDX + 0x8]       ; 005cd69b
    MOV dword ptr [EAX + 0x8],ESI       ; 005cd69e
    MOV ESI,dword ptr [EDX + 0xc]       ; 005cd6a1
    MOV dword ptr [EAX + 0xc],ESI       ; 005cd6a4
    MOV ESI,dword ptr [EDX + 0x10]      ; 005cd6a7
    MOV dword ptr [EAX + 0x10],ESI      ; 005cd6aa
    MOV ESI,dword ptr [EDX + 0x14]      ; 005cd6ad
    MOV dword ptr [EAX + 0x14],ESI      ; 005cd6b0
    MOV EAX,dword ptr [EBX + 0xc]       ; 005cd6b3
    SHL EAX,0x3                         ; 005cd6b6
    MOV EDX,EAX                         ; 005cd6b9
    SHL EAX,0x3                         ; 005cd6bb
    SUB EAX,EDX                         ; 005cd6be
    ADD EAX,ECX                         ; 005cd6c0
    LEA EDX,[EAX + 0x18]                ; 005cd6c2
    MOV ECX,dword ptr [EDX]             ; 005cd6c5
    MOV dword ptr [EAX],ECX             ; 005cd6c7
    MOV ECX,dword ptr [EDX + 0x4]       ; 005cd6c9
    MOV dword ptr [EAX + 0x4],ECX       ; 005cd6cc
    MOV ECX,dword ptr [EDX + 0x8]       ; 005cd6cf
    MOV dword ptr [EAX + 0x8],ECX       ; 005cd6d2
    MOV ECX,dword ptr [EDX + 0xc]       ; 005cd6d5
    MOV dword ptr [EAX + 0xc],ECX       ; 005cd6d8
    MOV ECX,dword ptr [EDX + 0x10]      ; 005cd6db
    MOV dword ptr [EAX + 0x10],ECX      ; 005cd6de
    MOV ECX,dword ptr [EDX + 0x14]      ; 005cd6e1
    MOV dword ptr [EAX + 0x14],ECX      ; 005cd6e4
    POP ESI                             ; 005cd6e7
    POP EBX                             ; 005cd6e8
    RET                                 ; 005cd6e9

