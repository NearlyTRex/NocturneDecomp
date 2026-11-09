; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dynamite_cpp_FUN_0047a110(void)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0047a110
        ;   Label: core_dynamite.cpp_FUN_0047a110
    PUSH 0x43fa0000                     ; 0047a113
    PUSH 0x43c80000                     ; 0047a118
    CALL core_actor.cpp_FUN_0040cf60    ; 0047a11d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 0047a122
    FLD float ptr [ESP + 0xc]           ; 0047a126
    ADD ESP,0x8                         ; 0047a12a
    FSTP float ptr [ESP]                ; 0047a12d
    MOV EAX,dword ptr [ESP]             ; 0047a130
    ADD ESP,0x8                         ; 0047a133
    LEA EAX,[EAX]                       ; 0047a136
    LEA EDX,[EDX]                       ; 0047a13c

