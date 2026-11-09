; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_gun_cpp_FUN_004cc680(void)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004cc680
        ;   Label: core_gun.cpp_FUN_004cc680
    PUSH 0x420c0000                     ; 004cc683
    PUSH 0x41c80000                     ; 004cc688
    CALL core_actor.cpp_FUN_0040cf60    ; 004cc68d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 004cc692
    FLD float ptr [ESP + 0xc]           ; 004cc696
    ADD ESP,0x8                         ; 004cc69a
    FSTP float ptr [ESP]                ; 004cc69d
    MOV EAX,dword ptr [ESP]             ; 004cc6a0
    ADD ESP,0x8                         ; 004cc6a3
    RET                                 ; 004cc6a6

