; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_getMemoryStats_FUN_005a1ed0 at 005a1f24
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dd60
        ;   Label: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60
    PUSH ESI                            ; 0059dd61
    PUSH EBP                            ; 0059dd62
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059dd63
    MOV EDX,dword ptr [ESI]             ; 0059dd67
    XOR EBX,EBX                         ; 0059dd69
    XOR EAX,EAX                         ; 0059dd6b
    TEST EDX,EDX                        ; 0059dd6d
    JLE 0x0059dd9d                      ; 0059dd6f
        ;   XREF to: 0059dd9d (CONDITIONAL_JUMP)  ; LAB_0059dd9d
    PUSH EDI                            ; 0059dd71
    MOV EDX,ESI                         ; 0059dd72
    MOV ECX,dword ptr [EDX + 0x54]      ; 0059dd74
        ;   Label: LAB_0059dd74
    MOV EDI,dword ptr [EDX + 0x68]      ; 0059dd77
    ADD ECX,EDI                         ; 0059dd7a
    IMUL ECX,ECX,0x16                   ; 0059dd7c
    ADD EAX,ECX                         ; 0059dd7f
    LEA ECX,[EDI*0x4 + 0x0]             ; 0059dd81
    MOV EBP,dword ptr [EDX + 0x2c]      ; 0059dd88
    ADD EAX,ECX                         ; 0059dd8b
    IMUL ECX,EBP,0x34                   ; 0059dd8d
    INC EBX                             ; 0059dd90
    ADD EAX,ECX                         ; 0059dd91
    MOV ECX,dword ptr [ESI]             ; 0059dd93
    ADD EDX,0x4                         ; 0059dd95
    CMP EBX,ECX                         ; 0059dd98
    JL 0x0059dd74                       ; 0059dd9a
        ;   XREF to: 0059dd74 (CONDITIONAL_JUMP)  ; LAB_0059dd74
    POP EDI                             ; 0059dd9c
    POP EBP                             ; 0059dd9d
        ;   Label: LAB_0059dd9d
    POP ESI                             ; 0059dd9e
    POP EBX                             ; 0059dd9f
    RET                                 ; 0059dda0

