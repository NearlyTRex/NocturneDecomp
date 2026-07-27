; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0051b600(int *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_0051f760 at 0051f7b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b600
        ;   Label: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0051b600
    PUSH ESI                            ; 0051b601
    PUSH EBP                            ; 0051b602
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051b603
    MOV EDX,dword ptr [ESI]             ; 0051b607
    XOR EBX,EBX                         ; 0051b609
    XOR EAX,EAX                         ; 0051b60b
    TEST EDX,EDX                        ; 0051b60d
    JLE 0x0051b63d                      ; 0051b60f
        ;   XREF to: 0051b63d (CONDITIONAL_JUMP)  ; LAB_0051b63d
    PUSH EDI                            ; 0051b611
    MOV EDX,ESI                         ; 0051b612
    MOV ECX,dword ptr [EDX + 0x54]      ; 0051b614
        ;   Label: LAB_0051b614
    MOV EDI,dword ptr [EDX + 0x68]      ; 0051b617
    ADD ECX,EDI                         ; 0051b61a
    IMUL ECX,ECX,0x16                   ; 0051b61c
    ADD EAX,ECX                         ; 0051b61f
    LEA ECX,[EDI*0x4 + 0x0]             ; 0051b621
    MOV EBP,dword ptr [EDX + 0x2c]      ; 0051b628
    ADD EAX,ECX                         ; 0051b62b
    IMUL ECX,EBP,0x34                   ; 0051b62d
    INC EBX                             ; 0051b630
    ADD EAX,ECX                         ; 0051b631
    MOV ECX,dword ptr [ESI]             ; 0051b633
    ADD EDX,0x4                         ; 0051b635
    CMP EBX,ECX                         ; 0051b638
    JL 0x0051b614                       ; 0051b63a
        ;   XREF to: 0051b614 (CONDITIONAL_JUMP)  ; LAB_0051b614
    POP EDI                             ; 0051b63c
    POP EBP                             ; 0051b63d
        ;   Label: LAB_0051b63d
    POP ESI                             ; 0051b63e
    POP EBX                             ; 0051b63f
    RET                                 ; 0051b640

