; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_004a1240(char *param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a1240
        ;   Label: core_event.cpp_FUN_004a1240
    MOV DL,byte ptr [EAX]               ; 004a1244
        ;   Label: LAB_004a1244
    INC DL                              ; 004a1246
    AND EDX,0xff                        ; 004a1248
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a124e
    JZ 0x004a1239                       ; 004a1255
        ;   XREF to: 004a1239 (CONDITIONAL_JUMP)  ; LAB_004a1239
    INC EAX                             ; 004a1257
    JMP 0x004a1244                      ; 004a1258
        ;   XREF to: 004a1244 (UNCONDITIONAL_JUMP)  ; LAB_004a1244

