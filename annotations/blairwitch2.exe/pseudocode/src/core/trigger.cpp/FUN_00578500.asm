; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_FUN_00578500(int param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00409830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578500
        ;   Label: core_trigger.cpp_FUN_00578500
    PUSH ESI                            ; 00578501
    MOV ESI,dword ptr [ESP + 0xc]       ; 00578502
    MOV EBX,dword ptr [ESP + 0x10]      ; 00578506
    PUSH EBX                            ; 0057850a
    PUSH ESI                            ; 0057850b
    CALL core_actor.cpp_FUN_00409830    ; 0057850c
        ;   XREF to: 00409830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409830()
    MOV EDX,dword ptr [ESI + 0x2d0]     ; 00578511
    ADD ESP,0x8                         ; 00578517
    CMP EDX,0x5                         ; 0057851a
    JNZ 0x0057852a                      ; 0057851d
        ;   XREF to: 0057852a (CONDITIONAL_JUMP)  ; LAB_0057852a
    MOV ECX,dword ptr [ESI + 0x450]     ; 0057851f
    CMP ECX,dword ptr [EBX + 0x8]       ; 00578525
    JZ 0x00578541                       ; 00578528
        ;   XREF to: 00578541 (CONDITIONAL_JUMP)  ; LAB_00578541
    MOV dword ptr [EBX + 0x50],0x0      ; 0057852a
        ;   Label: LAB_0057852a
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 00578531
    MOV EAX,dword ptr [EBX + 0x44]      ; 00578538
    MOV dword ptr [EBX + 0x4c],EAX      ; 0057853b
    POP ESI                             ; 0057853e
    POP EBX                             ; 0057853f
    RET                                 ; 00578540
    MOV dword ptr [ESI + 0x44c],0x1     ; 00578541
        ;   Label: LAB_00578541
    JMP 0x0057852a                      ; 0057854b
        ;   XREF to: 0057852a (UNCONDITIONAL_JUMP)  ; LAB_0057852a

