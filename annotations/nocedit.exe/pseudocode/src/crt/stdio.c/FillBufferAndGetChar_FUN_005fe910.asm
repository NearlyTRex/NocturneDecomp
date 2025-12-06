; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_FillBufferAndGetChar_FUN_005fe910(FILE * file)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
;
; XREF[1]:
;   crt_stdio.c_fgetc_FUN_005fe840 at 005fe8a5
;
; Called Functions:
;   crt_stdio.c_FillInputBuffer_FUN_005fe940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe910
        ;   Label: crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fe911
    PUSH EBX                            ; 005fe915
    CALL crt_stdio.c_FillInputBuffer_FUN_005fe940 ; 005fe916 | int crt_stdio.c_FillInputBuffer_FUN_005fe940(FILE * file)
        ;   XREF to: 005fe940 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005fe91b
    TEST EAX,EAX                        ; 005fe91e
    JNZ 0x005fe929                      ; 005fe920 | LAB_005fe929
        ;   XREF to: 005fe929 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 005fe922
    POP EBX                             ; 005fe927
    RET                                 ; 005fe928
    MOV EDX,dword ptr [EBX + 0x4]       ; 005fe929
        ;   Label: LAB_005fe929
    MOV ECX,dword ptr [EBX]             ; 005fe92c
    DEC EDX                             ; 005fe92e
    INC ECX                             ; 005fe92f
    MOV dword ptr [EBX + 0x4],EDX       ; 005fe930
    MOV dword ptr [EBX],ECX             ; 005fe933
    MOV AL,byte ptr [ECX + -0x1]        ; 005fe935
    AND EAX,0xff                        ; 005fe938
    POP EBX                             ; 005fe93d
    RET                                 ; 005fe93e

