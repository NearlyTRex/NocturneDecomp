; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_skipWhitespace_FUN_0048b820(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048b820
        ;   Label: core_event.cpp_skipWhitespace_FUN_0048b820
    MOV DL,byte ptr [EAX]               ; 0048b824
        ;   Label: LAB_0048b824
    INC DL                              ; 0048b826
    AND EDX,0xff                        ; 0048b828
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0048b82e
    JZ 0x0048b819                       ; 0048b835
        ;   XREF to: 0048b819 (CONDITIONAL_JUMP)  ; LAB_0048b819
    INC EAX                             ; 0048b837
    JMP 0x0048b824                      ; 0048b838
        ;   XREF to: 0048b824 (UNCONDITIONAL_JUMP)  ; LAB_0048b824

