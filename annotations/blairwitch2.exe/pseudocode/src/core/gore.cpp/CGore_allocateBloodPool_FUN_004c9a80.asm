; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004c9a80(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 at 004c9adf
;
; Referenced Globals:
;   int g_INT_01cdde3c
;   int g_INT_01cdde40
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01cdde3c]      ; 004c9a80 | g_INT_01cdde3c
        ;   Label: core_gore.cpp_CGore_allocateBloodPool_FUN_004c9a80
    LEA EAX,[ECX*0x4 + 0x0]             ; 004c9a86
    ADD EAX,ECX                         ; 004c9a8d
    SHL EAX,0x3                         ; 004c9a8f
    INC ECX                             ; 004c9a92
    ADD EAX,0x1cdde44                   ; 004c9a93
    CMP ECX,0x20                        ; 004c9a98
    JL 0x004c9a9f                       ; 004c9a9b
        ;   XREF to: 004c9a9f (CONDITIONAL_JUMP)  ; LAB_004c9a9f
    XOR ECX,ECX                         ; 004c9a9d
    MOV EDX,dword ptr [0x01cdde40]      ; 004c9a9f | g_INT_01cdde40
        ;   Label: LAB_004c9a9f
    CMP EDX,0x20                        ; 004c9aa5
    JL 0x004c9ab1                       ; 004c9aa8
        ;   XREF to: 004c9ab1 (CONDITIONAL_JUMP)  ; LAB_004c9ab1
    MOV dword ptr [0x01cdde3c],ECX      ; 004c9aaa | g_INT_01cdde3c
    RET                                 ; 004c9ab0
    PUSH EBX                            ; 004c9ab1
        ;   Label: LAB_004c9ab1
    LEA EBX,[EDX + 0x1]                 ; 004c9ab2
    MOV dword ptr [0x01cdde40],EBX      ; 004c9ab5 | g_INT_01cdde40
    POP EBX                             ; 004c9abb
    MOV dword ptr [0x01cdde3c],ECX      ; 004c9abc | g_INT_01cdde3c
    RET                                 ; 004c9ac2

