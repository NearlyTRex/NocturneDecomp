; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_turret_cpp_CTurret_getDamage_FUN_0057fbc0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0057fbc0
        ;   Label: core_turret.cpp_CTurret_getDamage_FUN_0057fbc0
    PUSH 0x41700000                     ; 0057fbc3
    PUSH 0x41200000                     ; 0057fbc8
    CALL core_actor.cpp_FUN_0040cf60    ; 0057fbcd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 0057fbd2
    FLD float ptr [ESP + 0xc]           ; 0057fbd6
    ADD ESP,0x8                         ; 0057fbda
    FSTP float ptr [ESP]                ; 0057fbdd
    MOV EAX,dword ptr [ESP]             ; 0057fbe0
    ADD ESP,0x8                         ; 0057fbe3
    RET                                 ; 0057fbe6

