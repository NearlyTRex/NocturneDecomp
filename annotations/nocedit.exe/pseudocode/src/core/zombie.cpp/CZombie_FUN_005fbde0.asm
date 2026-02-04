; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_zombie_cpp_CZombie_FUN_005fbde0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processDamage_FUN_005fc4f0 at 005fc582
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fbde0
        ;   Label: core_zombie.cpp_CZombie_FUN_005fbde0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fbde1
    PUSH 0x0                            ; 005fbde5
    PUSH 0x0                            ; 005fbde7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fbde9
    PUSH EBX                            ; 005fbdef
    MOV dword ptr [EBX + 0xbecc],0x0    ; 005fbdf0
    CALL dword ptr [EAX + 0x13c]        ; 005fbdfa
    ADD ESP,0xc                         ; 005fbe00
    PUSH 0x0                            ; 005fbe03
    PUSH 0x1                            ; 005fbe05
    MOV EAX,dword ptr [EBX + 0x154]     ; 005fbe07
    PUSH EBX                            ; 005fbe0d
    CALL dword ptr [EAX + 0x13c]        ; 005fbe0e
    ADD ESP,0xc                         ; 005fbe14
    POP EBX                             ; 005fbe17
    RET                                 ; 005fbe18

