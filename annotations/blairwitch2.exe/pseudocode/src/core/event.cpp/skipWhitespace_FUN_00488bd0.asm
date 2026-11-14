; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_skipWhitespace_FUN_00488bd0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00488bd0
        ;   Label: core_event.cpp_skipWhitespace_FUN_00488bd0
    MOV DL,byte ptr [EAX]               ; 00488bd4
        ;   Label: LAB_00488bd4
    INC DL                              ; 00488bd6
    AND EDX,0xff                        ; 00488bd8
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 00488bde
    JZ 0x00488bc9                       ; 00488be5
        ;   XREF to: 00488bc9 (CONDITIONAL_JUMP)  ; LAB_00488bc9
    INC EAX                             ; 00488be7
    JMP 0x00488bd4                      ; 00488be8
        ;   XREF to: 00488bd4 (UNCONDITIONAL_JUMP)  ; LAB_00488bd4

