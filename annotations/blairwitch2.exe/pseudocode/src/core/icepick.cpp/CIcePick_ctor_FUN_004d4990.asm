; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIcePick * core_icepick_cpp_CIcePick_ctor_FUN_004d4990(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_icepick.cpp_factoryFuncIcePick_FUN_004d4960 at 004d4973
;
; Called Functions:
;   core_hero.cpp_FUN_004ce240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4990
        ;   Label: core_icepick.cpp_CIcePick_ctor_FUN_004d4990
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d4991
    PUSH EDX                            ; 004d4995
    CALL core_hero.cpp_FUN_004ce240     ; 004d4996
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    MOV EBX,EAX                         ; 004d499b
    ADD EAX,0x2b4                       ; 004d499d
    ADD ESP,0x4                         ; 004d49a2
    MOV dword ptr [EAX + -0x4],0x5f8ba4 ; 004d49a5
    PUSH 0x5da6f7                       ; 004d49ac
    MOV dword ptr [EAX + 0x2538c],0x0   ; 004d49b1
    PUSH EAX                            ; 004d49bb

