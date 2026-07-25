; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004675e0(int param_1)
;
;
; XREF[2]:
;   FUN_004673e0 at 00467400
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00467220 at 0046722f
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004675e0
        ;   Label: FUN_004675e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004675e1
    MOV EDX,dword ptr [EBX + 0x8]       ; 004675e5
    TEST EDX,EDX                        ; 004675e8
    JZ 0x004675fc                       ; 004675ea
        ;   XREF to: 004675fc (CONDITIONAL_JUMP)  ; LAB_004675fc
    MOV EAX,EDX                         ; 004675ec
    JZ 0x004675fc                       ; 004675ee
        ;   XREF to: 004675fc (CONDITIONAL_JUMP)  ; LAB_004675fc
    LEA EAX,[EDX + -0x4]                ; 004675f0
    PUSH EAX                            ; 004675f3
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004675f4
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004675f9
    MOV ECX,dword ptr [EBX + 0xc]       ; 004675fc
        ;   Label: LAB_004675fc
    TEST ECX,ECX                        ; 004675ff
    JNZ 0x0046761a                      ; 00467601
        ;   XREF to: 0046761a (CONDITIONAL_JUMP)  ; LAB_0046761a
    MOV dword ptr [EBX + 0xc],0x0       ; 00467603
        ;   Label: LAB_00467603
    MOV dword ptr [EBX + 0x4],0x0       ; 0046760a
    MOV dword ptr [EBX + 0x8],0x0       ; 00467611
    POP EBX                             ; 00467618
    RET                                 ; 00467619
    PUSH ECX                            ; 0046761a
        ;   Label: LAB_0046761a
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0046761b
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00467620
    JMP 0x00467603                      ; 00467623
        ;   XREF to: 00467603 (UNCONDITIONAL_JUMP)  ; LAB_00467603

