; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0(CPoly * this_ptr, uint mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd3c0
        ;   Label: shape_superopt.cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0
    PUSH ESI                            ; 005cd3c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cd3c2
    MOV EAX,dword ptr [EDX + 0x4]       ; 005cd3c6
    SHL EAX,0x3                         ; 005cd3c9
    MOV EBX,dword ptr [EDX]             ; 005cd3cc
    MOV ECX,EAX                         ; 005cd3ce
    SHL EAX,0x3                         ; 005cd3d0
    MOV EBX,dword ptr [EBX + 0x4]       ; 005cd3d3
    SUB EAX,ECX                         ; 005cd3d6
    MOV ECX,dword ptr [ESP + 0x10]      ; 005cd3d8
    MOV ESI,dword ptr [EBX + EAX*0x1 + 0x34] ; 005cd3dc
    NOT ECX                             ; 005cd3e0
    AND ESI,ECX                         ; 005cd3e2
    MOV dword ptr [EBX + EAX*0x1 + 0x34],ESI ; 005cd3e4
    MOV EAX,dword ptr [EDX + 0x8]       ; 005cd3e8
    SHL EAX,0x3                         ; 005cd3eb
    MOV ESI,EAX                         ; 005cd3ee
    SHL EAX,0x3                         ; 005cd3f0
    SUB EAX,ESI                         ; 005cd3f3
    AND dword ptr [EBX + EAX*0x1 + 0x34],ECX ; 005cd3f5
    MOV EAX,dword ptr [EDX + 0xc]       ; 005cd3f9
    SHL EAX,0x3                         ; 005cd3fc
    MOV ESI,EAX                         ; 005cd3ff
    SHL EAX,0x3                         ; 005cd401
    SUB EAX,ESI                         ; 005cd404
    AND dword ptr [EBX + EAX*0x1 + 0x34],ECX ; 005cd406
    AND dword ptr [EDX + 0x60],ECX      ; 005cd40a
    POP ESI                             ; 005cd40d
    POP EBX                             ; 005cd40e
    RET                                 ; 005cd40f

