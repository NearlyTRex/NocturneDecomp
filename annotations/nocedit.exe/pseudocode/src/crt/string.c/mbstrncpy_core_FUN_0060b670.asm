; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack char * crt_string.c_mbstrncpy_core_FUN_0060b670(char * dest, char * src, int count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; int              Stack[0xc]:4   count
;
; XREF[1]:
;   crt_stdio.c_stream_setup_FUN_00605f20 at 00605f57
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_stdio.c_fgetc_buffered_FUN_0060d510
;   crt_unknown.c_FUN_0060d576
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b6d7
        ;   Label: crt_string.c_mbstrncpy_core_FUN_0060b670
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060b6d8
    PUSH EBX                            ; 0060b6dc
        ;   Label: LAB_0060b6dc
    CALL crt_stdio.c_fgetc_buffered_FUN_0060d510 ; 0060b6dd | int crt_stdio.c_fgetc_buffered_FUN_0060d510(FILE * stream)
        ;   XREF to: 0060d510 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0060b6e2
    MOV EAX,dword ptr [EBX]             ; 0060b6e4
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060b6e6
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 0060b6e9
    ADD ESP,0x4                         ; 0060b6ed
    AND EAX,0x3                         ; 0060b6f0
    JNZ 0x0060b707                      ; 0060b6f3 | LAB_0060b707
        ;   XREF to: 0060b707 (CONDITIONAL_JUMP)
    MOV AL,DL                           ; 0060b6f5
    INC AL                              ; 0060b6f7
    AND EAX,0xff                        ; 0060b6f9
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0060b6fe | char[256] g_CharacterClassificationTable
    JNZ 0x0060b70b                      ; 0060b705 | LAB_0060b70b
        ;   XREF to: 0060b70b (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0060b707
        ;   Label: LAB_0060b707
    POP EBX                             ; 0060b709
    RET                                 ; 0060b70a
    PUSH EBX                            ; 0060b70b
        ;   Label: LAB_0060b70b
    CALL crt_unknown.c_FUN_0060d576     ; 0060b70c | undefined crt_unknown.c_FUN_0060d576()
        ;   XREF to: 0060d576 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060b711
    JMP 0x0060b6dc                      ; 0060b714 | LAB_0060b6dc
        ;   XREF to: 0060b6dc (UNCONDITIONAL_JUMP)

