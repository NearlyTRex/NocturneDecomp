; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_skipLeadingWhitespace_FUN_00589500(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    NOP                                 ; 00589500
        ;   Label: core_skeledit.cpp_skipLeadingWhitespace_FUN_00589500
    NOP                                 ; 00589501
    NOP                                 ; 00589502
    NOP                                 ; 00589503
    NOP                                 ; 00589504
    NOP                                 ; 00589505
    NOP                                 ; 00589506
    NOP                                 ; 00589507
    NOP                                 ; 00589508
    NOP                                 ; 00589509
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058950a
    MOV DL,byte ptr [EAX]               ; 0058950e
        ;   Label: LAB_0058950e
    INC DL                              ; 00589510
    AND EDX,0xff                        ; 00589512
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00589518 | g_CharacterClassificationTable
    JZ 0x005894f1                       ; 0058951f
        ;   XREF to: 005894f1 (CONDITIONAL_JUMP)  ; LAB_005894f1
    INC EAX                             ; 00589521
    JMP 0x0058950e                      ; 00589522
        ;   XREF to: 0058950e (UNCONDITIONAL_JUMP)  ; LAB_0058950e

