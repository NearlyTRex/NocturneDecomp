; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_blundrbs_cpp_FUN_00411750(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00411750
        ;   Label: core_blundrbs.cpp_FUN_00411750
    MOV EAX,dword ptr [ESP + 0xc]       ; 00411753
    CMP dword ptr [EAX + 0x56c],0x6     ; 00411757
    JNZ 0x0041176c                      ; 0041175e
        ;   XREF to: 0041176c (CONDITIONAL_JUMP)  ; LAB_0041176c
    XOR ECX,ECX                         ; 00411760
    MOV dword ptr [ESP],ECX             ; 00411762
    MOV EAX,dword ptr [ESP]             ; 00411765
    ADD ESP,0x8                         ; 00411768
    RET                                 ; 0041176b
    PUSH 0x43480000                     ; 0041176c
        ;   Label: LAB_0041176c
    PUSH 0x43160000                     ; 00411771
    CALL core_actor.cpp_FUN_0040ce40    ; 00411776
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0041177b
    FLD float ptr [ESP + 0xc]           ; 0041177f
    ADD ESP,0x8                         ; 00411783
    FSTP float ptr [ESP]                ; 00411786
    MOV EAX,dword ptr [ESP]             ; 00411789
    ADD ESP,0x8                         ; 0041178c
    RET                                 ; 0041178f

