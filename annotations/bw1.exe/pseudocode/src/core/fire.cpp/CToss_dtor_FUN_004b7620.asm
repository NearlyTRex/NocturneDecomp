; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004b7620(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_box.cpp_CBox_dtor_FUN_0041dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b7620
        ;   Label: core_fire.cpp_CToss_dtor_FUN_004b7620
    PUSH 0x0                            ; 004b7624
    ADD EAX,0x180                       ; 004b7626
    PUSH EAX                            ; 004b762b
    CALL core_box.cpp_CBox_dtor_FUN_0041dab0 ; 004b762c
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dab0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b7631
    SUB EAX,0x180                       ; 004b7634
    RET                                 ; 004b7639

