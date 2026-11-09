; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flamegun_cpp_FUN_004b9810(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004b9810
        ;   Label: core_flamegun.cpp_FUN_004b9810
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b9813
    CMP dword ptr [EAX + 0x56c],0x6     ; 004b9817
    JNZ 0x004b9831                      ; 004b981e
        ;   XREF to: 004b9831 (CONDITIONAL_JUMP)  ; LAB_004b9831
    XOR ECX,ECX                         ; 004b9820
    MOV dword ptr [ESP],ECX             ; 004b9822
    MOV EAX,dword ptr [ESP]             ; 004b9825
    ADD ESP,0x8                         ; 004b9828
    LEA EAX,[EAX]                       ; 004b982b
    MOV ECX,ECX                         ; 004b982e
    PUSH 0x43480000                     ; 004b9831
        ;   Label: LAB_004b9831
    PUSH 0x43160000                     ; 004b9836
    CALL core_actor.cpp_FUN_0040cc00    ; 004b983b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 004b9840
    FLD float ptr [ESP + 0xc]           ; 004b9844
    ADD ESP,0x8                         ; 004b9848
    FSTP float ptr [ESP]                ; 004b984b
    MOV EAX,dword ptr [ESP]             ; 004b984e
    ADD ESP,0x8                         ; 004b9851
    RET                                 ; 004b9854

