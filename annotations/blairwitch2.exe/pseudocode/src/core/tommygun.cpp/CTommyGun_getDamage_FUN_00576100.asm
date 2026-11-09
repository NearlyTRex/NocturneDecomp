; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00576100(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00576100
        ;   Label: core_tommygun.cpp_CTommyGun_getDamage_FUN_00576100
    PUSH 0x41700000                     ; 00576103
    PUSH 0x41200000                     ; 00576108
    CALL core_actor.cpp_FUN_0040cf60    ; 0057610d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 00576112
    FLD float ptr [ESP + 0xc]           ; 00576116
    ADD ESP,0x8                         ; 0057611a
    FSTP float ptr [ESP]                ; 0057611d
    MOV EAX,dword ptr [ESP]             ; 00576120
    ADD ESP,0x8                         ; 00576123
    RET                                 ; 00576126

