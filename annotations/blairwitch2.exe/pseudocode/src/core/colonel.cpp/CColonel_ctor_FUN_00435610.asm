; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * core_colonel_cpp_CColonel_ctor_FUN_00435610(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_colonel.cpp_factoryFuncColonel_FUN_004355e0 at 004355f3
;
; Called Functions:
;   core_hero.cpp_FUN_004ce240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435610
        ;   Label: core_colonel.cpp_CColonel_ctor_FUN_00435610
    MOV EDX,dword ptr [ESP + 0x8]       ; 00435611
    PUSH EDX                            ; 00435615
    CALL core_hero.cpp_FUN_004ce240     ; 00435616
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    MOV EBX,EAX                         ; 0043561b
    ADD EAX,0x2b4                       ; 0043561d
    ADD ESP,0x4                         ; 00435622
    MOV dword ptr [EAX + -0x4],0x5f44b4 ; 00435625
    PUSH 0x5cdab6                       ; 0043562c
    MOV dword ptr [EAX + 0x2538c],0x0   ; 00435631
    PUSH EAX                            ; 0043563b

