; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_CLightActor_FUN_00423590()
;
;
; Referenced Globals:
;   TerminatedCString s_Select_type_of_light_to__00616a47
;
; Called Functions:
;   core_boxactor.cpp_CLightActor_FUN_00423110
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00423590
        ;   Label: core_boxactor.cpp_CLightActor_FUN_00423590
    PUSH 0x0                            ; 00423592
    PUSH 0x616a47                       ; 00423594 | = "Select type of light to fill in initi..."
    CALL core_boxactor.cpp_CLightActor_FUN_00423110 ; 00423599
        ;   XREF to: 00423110 (UNCONDITIONAL_CALL)  ; int core_boxactor.cpp_CLightActor_FUN_00423110(CLightActor * this_ptr)
    ADD ESP,0xc                         ; 0042359e
    TEST EAX,EAX                        ; 004235a1
    JL 0x004235b5                       ; 004235a3
        ;   XREF to: 004235b5 (CONDITIONAL_JUMP)  ; LAB_004235b5
    MOV EDX,dword ptr [ESP + 0x4]       ; 004235a5
    MOV dword ptr [EDX + 0x66c],EAX     ; 004235a9
    MOV EAX,0x1                         ; 004235af
    RET                                 ; 004235b4
    XOR EAX,EAX                         ; 004235b5
        ;   Label: LAB_004235b5
    RET                                 ; 004235b7

