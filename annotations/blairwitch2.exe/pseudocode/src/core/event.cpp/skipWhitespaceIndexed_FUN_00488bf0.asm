; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_00488bf0(char *expression,int *parse_position)
;
; Parameters:
; char *           Stack[0x4]:4   expression
; int *            Stack[0x8]:4   parse_position
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00488bf0
        ;   Label: core_event.cpp_skipWhitespaceIndexed_FUN_00488bf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00488bf4
    MOV EDX,dword ptr [EAX]             ; 00488bf8
        ;   Label: LAB_00488bf8
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 00488bfa
    INC DL                              ; 00488bfd
    AND EDX,0xff                        ; 00488bff
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 00488c05
    JZ 0x00488bc9                       ; 00488c0c
        ;   XREF to: 00488bc9 (CONDITIONAL_JUMP)  ; LAB_00488bc9
    INC dword ptr [EAX]                 ; 00488c0e
    JMP 0x00488bf8                      ; 00488c10
        ;   XREF to: 00488bf8 (UNCONDITIONAL_JUMP)  ; LAB_00488bf8

