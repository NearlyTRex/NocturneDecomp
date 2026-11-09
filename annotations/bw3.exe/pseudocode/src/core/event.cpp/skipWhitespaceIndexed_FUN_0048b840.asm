; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_0048b840(char *expression,int *parse_position)
;
; Parameters:
; char *           Stack[0x4]:4   expression
; int *            Stack[0x8]:4   parse_position
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0048b840
        ;   Label: core_event.cpp_skipWhitespaceIndexed_FUN_0048b840
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048b844
    MOV EDX,dword ptr [EAX]             ; 0048b848
        ;   Label: LAB_0048b848
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 0048b84a
    INC DL                              ; 0048b84d
    AND EDX,0xff                        ; 0048b84f
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0048b855
    JZ 0x0048b819                       ; 0048b85c
        ;   XREF to: 0048b819 (CONDITIONAL_JUMP)  ; LAB_0048b819
    INC dword ptr [EAX]                 ; 0048b85e
    JMP 0x0048b848                      ; 0048b860
        ;   XREF to: 0048b848 (UNCONDITIONAL_JUMP)  ; LAB_0048b848

