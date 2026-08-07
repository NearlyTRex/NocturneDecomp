; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __watcallStack crt_string_c_mbstrncpy_core_FUN_0056fd26(char *dest,char *src,int count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; int              Stack[0xc]:4   count
;
; XREF[1]:
;   crt_stdio.c_stream_setup_FUN_0056b227 at 0056b25e
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   crt_stdio.c_fgetc_buffered_FUN_00571c60
;   crt_unknown.c_FUN_00571cc6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fd26
        ;   Label: crt_string.c_mbstrncpy_core_FUN_0056fd26
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fd27
    PUSH EBX                            ; 0056fd2b
        ;   Label: LAB_0056fd2b
    CALL crt_stdio.c_fgetc_buffered_FUN_00571c60 ; 0056fd2c
        ;   XREF to: 00571c60 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_buffered_FUN_00571c60(_FILE * stream)
    MOV EDX,EAX                         ; 0056fd31
    MOV EAX,dword ptr [EBX]             ; 0056fd33
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056fd35
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 0056fd38
    ADD ESP,0x4                         ; 0056fd3c
    AND EAX,0x3                         ; 0056fd3f
    JNZ 0x0056fd56                      ; 0056fd42
        ;   XREF to: 0056fd56 (CONDITIONAL_JUMP)  ; LAB_0056fd56
    MOV AL,DL                           ; 0056fd44
    INC AL                              ; 0056fd46
    AND EAX,0xff                        ; 0056fd48
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0056fd4d | g_CharacterClassificationTable
    JNZ 0x0056fd5a                      ; 0056fd54
        ;   XREF to: 0056fd5a (CONDITIONAL_JUMP)  ; LAB_0056fd5a
    MOV EAX,EBX                         ; 0056fd56
        ;   Label: LAB_0056fd56
    POP EBX                             ; 0056fd58
    RET                                 ; 0056fd59
    PUSH EBX                            ; 0056fd5a
        ;   Label: LAB_0056fd5a
    CALL crt_unknown.c_FUN_00571cc6     ; 0056fd5b
        ;   XREF to: 00571cc6 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571cc6()
    ADD ESP,0x4                         ; 0056fd60
    JMP 0x0056fd2b                      ; 0056fd63
        ;   XREF to: 0056fd2b (UNCONDITIONAL_JUMP)  ; LAB_0056fd2b

