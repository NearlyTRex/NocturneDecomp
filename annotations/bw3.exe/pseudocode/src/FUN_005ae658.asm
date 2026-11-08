; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong FUN_005ae658(void)
;
;
; XREF[1]:
;   FUN_005a8dec at 005a8fb3
;
; *****************************************************************************

section .text

    TEST EDX,EDX                        ; 005ae658
        ;   Label: FUN_005ae658
    JNZ 0x005ae663                      ; 005ae65a
        ;   XREF to: 005ae663 (CONDITIONAL_JUMP)  ; LAB_005ae663
    TEST ECX,ECX                        ; 005ae65c
    JNZ 0x005ae663                      ; 005ae65e
        ;   XREF to: 005ae663 (CONDITIONAL_JUMP)  ; LAB_005ae663
    MUL EBX                             ; 005ae660
    RET                                 ; 005ae662
    PUSH EAX                            ; 005ae663
        ;   Label: LAB_005ae663
    PUSH EDX                            ; 005ae664
    MUL ECX                             ; 005ae665
    MOV ECX,EAX                         ; 005ae667
    POP EAX                             ; 005ae669
    MUL EBX                             ; 005ae66a
    ADD ECX,EAX                         ; 005ae66c
    POP EAX                             ; 005ae66e
    MUL EBX                             ; 005ae66f
    ADD EDX,ECX                         ; 005ae671
    RET                                 ; 005ae673

