; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_FUN_00454630(void)
;
;
; Called Functions:
;   core_dog.cpp_FUN_00454660
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd30                         ; 00454630
        ;   Label: core_dog.cpp_FUN_00454630
    CALL crt_unknown.c_FUN_0056497c     ; 00454635
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0045463a
    TEST EAX,EAX                        ; 0045463d
    JNZ 0x00454642                      ; 0045463f
        ;   XREF to: 00454642 (CONDITIONAL_JUMP)  ; LAB_00454642
    RET                                 ; 00454641
    PUSH EAX                            ; 00454642
        ;   Label: LAB_00454642
    CALL core_dog.cpp_FUN_00454660      ; 00454643
        ;   XREF to: 00454660 (UNCONDITIONAL_CALL)  ; undefined core_dog.cpp_FUN_00454660()
    ADD ESP,0x4                         ; 00454648
    RET                                 ; 0045464b

