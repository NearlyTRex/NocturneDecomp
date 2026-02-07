; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gore_cpp_CGore_FUN_004edb70(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_FUN_004ec290 at 004ec2d3
;
; Called Functions:
;   core_gore.cpp_FUN_004ec390
;   core_gore.cpp_FUN_004edaf0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x2      ; 004edb70
        ;   Label: core_gore.cpp_CGore_FUN_004edb70
    JNZ 0x004edb78                      ; 004edb75
        ;   XREF to: 004edb78 (CONDITIONAL_JUMP)  ; LAB_004edb78
    RET                                 ; 004edb77
    PUSH EDI                            ; 004edb78
        ;   Label: LAB_004edb78
    PUSH ESI                            ; 004edb79
    PUSH EBX                            ; 004edb7a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004edb7b
    PUSH ECX                            ; 004edb7f
    CALL core_gore.cpp_FUN_004edaf0     ; 004edb80
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; CBloodSplat * core_gore.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 004edb85
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004edb88
    PUSH EBX                            ; 004edb8c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004edb8d
    PUSH ESI                            ; 004edb91
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004edb92
    PUSH EDI                            ; 004edb96
    PUSH EAX                            ; 004edb97
    CALL core_gore.cpp_FUN_004ec390     ; 004edb98
        ;   XREF to: 004ec390 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ec390()
    ADD ESP,0x10                        ; 004edb9d
    POP EBX                             ; 004edba0
    POP ESI                             ; 004edba1
    POP EDI                             ; 004edba2
    RET                                 ; 004edba3

