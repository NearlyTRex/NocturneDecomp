; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_004fe550(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_FUN_004fe500 at 004fe512
;   core_script.cpp_CScript_buildParsedLines_FUN_004fee30 at 004fee3c
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004fe550
        ;   Label: core_script.cpp_CScript_freeParsedLines_FUN_004fe550
    PUSH EBP                            ; 004fe551
    MOV EDI,dword ptr [ESP + 0xc]       ; 004fe552
    CMP dword ptr [EDI + 0x2c],0x0      ; 004fe556
    JZ 0x004fe59e                       ; 004fe55a
        ;   XREF to: 004fe59e (CONDITIONAL_JUMP)  ; LAB_004fe59e
    PUSH ESI                            ; 004fe55c
    PUSH EBX                            ; 004fe55d
    MOV ECX,dword ptr [EDI + 0x28]      ; 004fe55e
    XOR EBX,EBX                         ; 004fe561
    TEST ECX,ECX                        ; 004fe563
    JLE 0x004fe589                      ; 004fe565
        ;   XREF to: 004fe589 (CONDITIONAL_JUMP)  ; LAB_004fe589
    XOR ESI,ESI                         ; 004fe567
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004fe569
        ;   Label: LAB_004fe569
    ADD EAX,ESI                         ; 004fe56c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fe56e
    TEST EDX,EDX                        ; 004fe571
    JZ 0x004fe57e                       ; 004fe573
        ;   XREF to: 004fe57e (CONDITIONAL_JUMP)  ; LAB_004fe57e
    PUSH EDX                            ; 004fe575
    CALL crt_memory.c_free_FUN_005638d0 ; 004fe576
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004fe57b
    INC EBX                             ; 004fe57e
        ;   Label: LAB_004fe57e
    MOV EBP,dword ptr [EDI + 0x28]      ; 004fe57f
    ADD ESI,0x8                         ; 004fe582
    CMP EBX,EBP                         ; 004fe585
    JL 0x004fe569                       ; 004fe587
        ;   XREF to: 004fe569 (CONDITIONAL_JUMP)  ; LAB_004fe569
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004fe589
        ;   Label: LAB_004fe589
    PUSH EAX                            ; 004fe58c
    CALL crt_memory.c_free_FUN_005638d0 ; 004fe58d
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004fe592
    MOV dword ptr [EDI + 0x2c],0x0      ; 004fe595
    POP EBX                             ; 004fe59c
    POP ESI                             ; 004fe59d
    MOV dword ptr [EDI + 0x28],0x0      ; 004fe59e
        ;   Label: LAB_004fe59e
    POP EBP                             ; 004fe5a5
    POP EDI                             ; 004fe5a6
    RET                                 ; 004fe5a7

