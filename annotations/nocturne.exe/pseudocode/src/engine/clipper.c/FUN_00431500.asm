; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00431500(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005ad284
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00431500
        ;   Label: engine_clipper.c_FUN_00431500
    TEST EAX,EAX                        ; 00431504
    JNZ 0x0043150d                      ; 00431506
        ;   XREF to: 0043150d (CONDITIONAL_JUMP)  ; LAB_0043150d
    MOV EAX,0x7fffffff                  ; 00431508
    MOV [0x005ad284],EAX                ; 0043150d | DAT_005ad284
        ;   Label: LAB_0043150d
    RET                                 ; 00431512

