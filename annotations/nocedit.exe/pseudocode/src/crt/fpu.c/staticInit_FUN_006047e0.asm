; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_fpu.c_staticInit_FUN_006047e0(void)
;
; Local Variables:
; undefined2       Stack[-0x8]:2  local_8
;
; Referenced Globals:
;   undefined1 DAT_00684acc
;   undefined1 DAT_00684acd
;   undefined1 DAT_0068500c
;
; Called Functions:
;   crt_unknown.c_FUN_006047a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006047e0
        ;   Label: crt_fpu.c_staticInit_FUN_006047e0
    MOV AH,byte ptr [0x00684acc]        ; 006047e1 | undefined1 DAT_00684acc
    TEST AH,AH                          ; 006047e7
    JNZ 0x00604822                      ; 006047e9 | LAB_00604822
        ;   XREF to: 00604822 (CONDITIONAL_JUMP)
    MOV byte ptr [0x00684acd],AH        ; 006047eb | undefined1 DAT_00684acd
    XOR BH,BH                           ; 006047f1
    SUB EAX,EAX                         ; 006047f3
    PUSH EAX                            ; 006047f5
    FNINIT                              ; 006047f6
    FNSTCW word ptr [ESP]               ; 006047f8
    POP EAX                             ; 006047fb
    MOV AL,AH                           ; 006047fc
    XOR BL,BL                           ; 006047fe
    CMP AL,0x3                          ; 00604800
    JNZ 0x0060480d                      ; 00604802 | LAB_0060480d
        ;   XREF to: 0060480d (CONDITIONAL_JUMP)
    CALL crt_unknown.c_FUN_006047a4     ; 00604804 | undefined crt_unknown.c_FUN_006047a4()
        ;   XREF to: 006047a4 (UNCONDITIONAL_CALL)
    MOV BH,AL                           ; 00604809
    MOV BL,AL                           ; 0060480b
    CMP byte ptr [0x0068500c],0x0       ; 0060480d | undefined1 DAT_0068500c
        ;   Label: LAB_0060480d
    JNZ 0x00604822                      ; 00604814 | LAB_00604822
        ;   XREF to: 00604822 (CONDITIONAL_JUMP)
    MOV byte ptr [0x00684acc],BH        ; 00604816 | undefined1 DAT_00684acc
    MOV byte ptr [0x00684acd],BL        ; 0060481c | undefined1 DAT_00684acd
    POP EBX                             ; 00604822
        ;   Label: LAB_00604822
    RET                                 ; 00604823

