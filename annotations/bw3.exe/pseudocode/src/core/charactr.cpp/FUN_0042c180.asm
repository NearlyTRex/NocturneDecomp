; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042c180(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c180
        ;   Label: core_charactr.cpp_FUN_0042c180
    SUB ESP,0x3c                        ; 0042c181
    MOV EBX,dword ptr [ESP + 0x44]      ; 0042c184
    PUSH EBX                            ; 0042c188
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c189
    CALL dword ptr [EAX + 0x10c]        ; 0042c18f
    ADD ESP,0x4                         ; 0042c195
    TEST EAX,EAX                        ; 0042c198
    JLE 0x0042c1a1                      ; 0042c19a
        ;   XREF to: 0042c1a1 (CONDITIONAL_JUMP)  ; LAB_0042c1a1
    ADD ESP,0x3c                        ; 0042c19c
    POP EBX                             ; 0042c19f
    RET                                 ; 0042c1a0
    MOV EAX,ESP                         ; 0042c1a1
        ;   Label: LAB_0042c1a1
    PUSH EAX                            ; 0042c1a3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0042c1a4
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0042c1a9
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042c1ac
    MOV dword ptr [ESP + 0x30],EAX      ; 0042c1b0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042c1b4
    MOV dword ptr [ESP + 0x4],EAX       ; 0042c1b8
    MOV EAX,ESP                         ; 0042c1bc
    PUSH EAX                            ; 0042c1be
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042c1bf
    PUSH EBX                            ; 0042c1c5
    CALL dword ptr [EDX + 0x108]        ; 0042c1c6
    ADD ESP,0x8                         ; 0042c1cc
    ADD ESP,0x3c                        ; 0042c1cf
    POP EBX                             ; 0042c1d2
    RET                                 ; 0042c1d3

