; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bindevil_cpp_FUN_0040f8d0(void)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040f8d0
        ;   Label: core_bindevil.cpp_FUN_0040f8d0
    PUSH 0x41c80000                     ; 0040f8d3
    PUSH 0x41200000                     ; 0040f8d8
    CALL core_actor.cpp_FUN_0040ce40    ; 0040f8dd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0040f8e2
    FLD float ptr [ESP + 0xc]           ; 0040f8e6
    ADD ESP,0x8                         ; 0040f8ea
    FSTP float ptr [ESP]                ; 0040f8ed
    MOV EAX,dword ptr [ESP]             ; 0040f8f0
    ADD ESP,0x8                         ; 0040f8f3
    RET                                 ; 0040f8f6

