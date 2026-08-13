; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_skipWhitespace_FUN_0047a260(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a260
        ;   Label: core_event.cpp_skipWhitespace_FUN_0047a260
    MOV DL,byte ptr [EAX]               ; 0047a264
        ;   Label: LAB_0047a264
    INC DL                              ; 0047a266
    AND EDX,0xff                        ; 0047a268
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047a26e | g_CharacterClassificationTable
    JZ 0x0047a250                       ; 0047a275
        ;   XREF to: 0047a250 (CONDITIONAL_JUMP)  ; LAB_0047a250
    INC EAX                             ; 0047a277
    JMP 0x0047a264                      ; 0047a278
        ;   XREF to: 0047a264 (UNCONDITIONAL_JUMP)  ; LAB_0047a264

