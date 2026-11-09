; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_00447610(CFilterCache *this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterCache_dtor_FUN_004475f0 at 004475f6
;   core_set.cpp_FUN_0052d980 at 0052d9b8
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_00447840
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447610
        ;   Label: core_dfilter.cpp_CFilterCache_free_FUN_00447610
    PUSH ESI                            ; 00447611
    PUSH EDI                            ; 00447612
    MOV EDI,dword ptr [ESP + 0x10]      ; 00447613
    MOV EDX,dword ptr [EDI]             ; 00447617
    XOR EBX,EBX                         ; 00447619
    TEST EDX,EDX                        ; 0044761b
    JLE 0x00447635                      ; 0044761d
        ;   XREF to: 00447635 (CONDITIONAL_JUMP)  ; LAB_00447635
    MOV ESI,EDI                         ; 0044761f
    MOV EAX,dword ptr [ESI + 0xa04]     ; 00447621
        ;   Label: LAB_00447621
    TEST EAX,EAX                        ; 00447627
    JNZ 0x0044763f                      ; 00447629
        ;   XREF to: 0044763f (CONDITIONAL_JUMP)  ; LAB_0044763f
    INC EBX                             ; 0044762b
        ;   Label: LAB_0044762b
    MOV ECX,dword ptr [EDI]             ; 0044762c
    ADD ESI,0x4                         ; 0044762e
    CMP EBX,ECX                         ; 00447631
    JL 0x00447621                       ; 00447633
        ;   XREF to: 00447621 (CONDITIONAL_JUMP)  ; LAB_00447621
    MOV dword ptr [EDI],0x0             ; 00447635
        ;   Label: LAB_00447635
    POP EDI                             ; 0044763b
    POP ESI                             ; 0044763c
    POP EBX                             ; 0044763d
    RET                                 ; 0044763e
    PUSH 0x0                            ; 0044763f
        ;   Label: LAB_0044763f
    PUSH EAX                            ; 00447641
    CALL core_dfilter.cpp_CDemonFilter_dtor_FUN_00447840 ; 00447642
        ;   XREF to: 00447840 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_dtor_FUN_00447840(CDemonFilter * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00447647
    PUSH EAX                            ; 0044764a
    CALL crt_unknown.c_FUN_005b7fdc     ; 0044764b
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00447650
    JMP 0x0044762b                      ; 00447653
        ;   XREF to: 0044762b (UNCONDITIONAL_JUMP)  ; LAB_0044762b

