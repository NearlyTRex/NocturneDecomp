; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dynamite_cpp_FUN_0047b1a0(void)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0047b1a0
        ;   Label: core_dynamite.cpp_FUN_0047b1a0
    PUSH 0x43fa0000                     ; 0047b1a3
    PUSH 0x43c80000                     ; 0047b1a8
    CALL core_actor.cpp_FUN_0040ce40    ; 0047b1ad
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0047b1b2
    FLD float ptr [ESP + 0xc]           ; 0047b1b6
    ADD ESP,0x8                         ; 0047b1ba
    FSTP float ptr [ESP]                ; 0047b1bd
    MOV EAX,dword ptr [ESP]             ; 0047b1c0
    ADD ESP,0x8                         ; 0047b1c3
    LEA EAX,[EAX]                       ; 0047b1c6
    LEA EDX,[EDX]                       ; 0047b1cc

