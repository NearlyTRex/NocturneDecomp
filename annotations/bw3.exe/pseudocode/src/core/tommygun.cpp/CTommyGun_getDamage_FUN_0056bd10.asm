; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_0056bd10(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0056bd10
        ;   Label: core_tommygun.cpp_CTommyGun_getDamage_FUN_0056bd10
    PUSH 0x41700000                     ; 0056bd13
    PUSH 0x41200000                     ; 0056bd18
    CALL core_actor.cpp_FUN_0040ce40    ; 0056bd1d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0056bd22
    FLD float ptr [ESP + 0xc]           ; 0056bd26
    ADD ESP,0x8                         ; 0056bd2a
    FSTP float ptr [ESP]                ; 0056bd2d
    MOV EAX,dword ptr [ESP]             ; 0056bd30
    ADD ESP,0x8                         ; 0056bd33
    RET                                 ; 0056bd36

