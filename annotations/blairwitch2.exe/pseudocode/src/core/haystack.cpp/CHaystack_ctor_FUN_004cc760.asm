; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHaystack * core_haystack_cpp_CHaystack_ctor_FUN_004cc760(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_haystack.cpp_factoryFuncHaystack_FUN_004cc730 at 004cc743
;
; Called Functions:
;   core_hero.cpp_FUN_004ce240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc760
        ;   Label: core_haystack.cpp_CHaystack_ctor_FUN_004cc760
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cc761
    PUSH EDX                            ; 004cc765
    CALL core_hero.cpp_FUN_004ce240     ; 004cc766
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    MOV EBX,EAX                         ; 004cc76b
    ADD EAX,0x2b4                       ; 004cc76d
    ADD ESP,0x4                         ; 004cc772
    MOV dword ptr [EAX + -0x4],0x5f7f84 ; 004cc775
    PUSH 0x5d9808                       ; 004cc77c
    MOV dword ptr [EAX + 0x2538c],0x0   ; 004cc781
    PUSH EAX                            ; 004cc78b

