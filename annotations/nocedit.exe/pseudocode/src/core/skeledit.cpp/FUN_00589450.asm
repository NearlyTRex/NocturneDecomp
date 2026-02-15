; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_FUN_00589450(void)
;
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x1c                           ; 00589450
        ;   Label: core_skeledit.cpp_FUN_00589450
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00589455
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058945a
    PUSH ESI                            ; 0058945b
    PUSH EDI                            ; 0058945c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0058945d
    MOV EDI,ESI                         ; 00589461
    SUB ECX,ECX                         ; 00589463
    DEC ECX                             ; 00589465
    XOR EAX,EAX                         ; 00589466
    SCASB.REPNE ES:EDI                  ; 00589468
    NOT ECX                             ; 0058946a
    DEC ECX                             ; 0058946c
    MOV EBX,ECX                         ; 0058946d
    TEST ECX,ECX                        ; 0058946f
    JLE 0x0058948a                      ; 00589471
        ;   XREF to: 0058948a (CONDITIONAL_JUMP)  ; LAB_0058948a
    LEA EAX,[ECX + ESI*0x1]             ; 00589473
    MOV DL,byte ptr [EAX + -0x1]        ; 00589476
        ;   Label: LAB_00589476
    INC DL                              ; 00589479
    AND EDX,0xff                        ; 0058947b

