; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_isCharacterSpeaking_FUN_004b1980(CCharacter *char_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   char_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1980
        ;   Label: core_event.cpp_isCharacterSpeaking_FUN_004b1980
    FLD float ptr [EAX + 0x2618]        ; 004b1984
    FLDZ                                ; 004b198a
    FCOMPP                              ; 004b198c
    FNSTSW AX                           ; 004b198e
    SAHF                                ; 004b1990
    JNC 0x004b1999                      ; 004b1991
        ;   XREF to: 004b1999 (CONDITIONAL_JUMP)  ; LAB_004b1999
    MOV EAX,0x1                         ; 004b1993
    RET                                 ; 004b1998
    XOR EAX,EAX                         ; 004b1999
        ;   Label: LAB_004b1999
    RET                                 ; 004b199b

