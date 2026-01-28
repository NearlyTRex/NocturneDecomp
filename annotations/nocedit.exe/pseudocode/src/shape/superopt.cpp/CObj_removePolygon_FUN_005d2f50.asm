; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CObj_removePolygon_FUN_005d2f50(CObj *this_ptr,uint index)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   index
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_realloc_FUN_00601df0
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2f50
        ;   Label: shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50
    PUSH ESI                            ; 005d2f51
    PUSH EBP                            ; 005d2f52
    MOV EBX,dword ptr [ESP + 0x10]      ; 005d2f53
    MOV ECX,dword ptr [ESP + 0x14]      ; 005d2f57
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d2f5b
    CMP ECX,EDX                         ; 005d2f5e
    JNC 0x005d2fa5                      ; 005d2f60
        ;   XREF to: 005d2fa5 (CONDITIONAL_JUMP)  ; LAB_005d2fa5
    LEA ESI,[EDX + -0x1]                ; 005d2f62
    MOV dword ptr [EBX + 0x8],ESI       ; 005d2f65
    CMP ECX,ESI                         ; 005d2f68
    JC 0x005d2fab                       ; 005d2f6a
        ;   XREF to: 005d2fab (CONDITIONAL_JUMP)  ; LAB_005d2fab
    MOV EBP,dword ptr [EBX + 0x8]       ; 005d2f6c
        ;   Label: LAB_005d2f6c
    TEST EBP,EBP                        ; 005d2f6f
    JZ 0x005d2ffc                       ; 005d2f71
        ;   XREF to: 005d2ffc (CONDITIONAL_JUMP)  ; LAB_005d2ffc
    LEA EAX,[EBP*0x4 + 0x0]             ; 005d2f77
    SUB EAX,EBP                         ; 005d2f7e
    SHL EAX,0x2                         ; 005d2f80
    ADD EAX,EBP                         ; 005d2f83
    SHL EAX,0x3                         ; 005d2f85
    PUSH EAX                            ; 005d2f88
    MOV EDX,dword ptr [EBX + 0xc]       ; 005d2f89
    PUSH EDX                            ; 005d2f8c
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005d2f8d
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005d2f92
    TEST EAX,EAX                        ; 005d2f95
    JZ 0x005d2fa1                       ; 005d2f97
        ;   XREF to: 005d2fa1 (CONDITIONAL_JUMP)  ; LAB_005d2fa1
    MOV dword ptr [EBX + 0xc],EAX       ; 005d2f99
    MOV EAX,0x1                         ; 005d2f9c
    POP EBP                             ; 005d2fa1
        ;   Label: LAB_005d2fa1
    POP ESI                             ; 005d2fa2
    POP EBX                             ; 005d2fa3
    RET                                 ; 005d2fa4
    XOR EAX,EAX                         ; 005d2fa5
        ;   Label: LAB_005d2fa5
    POP EBP                             ; 005d2fa7
    POP ESI                             ; 005d2fa8
    POP EBX                             ; 005d2fa9
    RET                                 ; 005d2faa
    MOV EDX,ESI                         ; 005d2fab
        ;   Label: LAB_005d2fab
    SUB EDX,ECX                         ; 005d2fad
    LEA EAX,[EDX*0x4 + 0x0]             ; 005d2faf
    SUB EAX,EDX                         ; 005d2fb6
    SHL EAX,0x2                         ; 005d2fb8
    ADD EAX,EDX                         ; 005d2fbb
    SHL EAX,0x3                         ; 005d2fbd
    LEA EDX,[ECX + 0x1]                 ; 005d2fc0
    PUSH EAX                            ; 005d2fc3
    LEA EAX,[EDX*0x4 + 0x0]             ; 005d2fc4
    SUB EAX,EDX                         ; 005d2fcb
    SHL EAX,0x2                         ; 005d2fcd
    ADD EAX,EDX                         ; 005d2fd0
    MOV ESI,dword ptr [EBX + 0xc]       ; 005d2fd2
    SHL EAX,0x3                         ; 005d2fd5
    ADD EAX,ESI                         ; 005d2fd8
    PUSH EAX                            ; 005d2fda
    LEA EAX,[ECX*0x4 + 0x0]             ; 005d2fdb
    SUB EAX,ECX                         ; 005d2fe2
    SHL EAX,0x2                         ; 005d2fe4
    ADD EAX,ECX                         ; 005d2fe7
    SHL EAX,0x3                         ; 005d2fe9
    ADD EAX,ESI                         ; 005d2fec
    PUSH EAX                            ; 005d2fee
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005d2fef
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005d2ff4
    JMP 0x005d2f6c                      ; 005d2ff7
        ;   XREF to: 005d2f6c (UNCONDITIONAL_JUMP)  ; LAB_005d2f6c
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d2ffc
        ;   Label: LAB_005d2ffc
    PUSH EAX                            ; 005d2fff
    CALL crt_memory.c_free_FUN_00601cd0 ; 005d3000
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EAX,0x1                         ; 005d3005
    ADD ESP,0x4                         ; 005d300a
    MOV dword ptr [EBX + 0xc],EBP       ; 005d300d
    POP EBP                             ; 005d3010
    POP ESI                             ; 005d3011
    POP EBX                             ; 005d3012
    RET                                 ; 005d3013

