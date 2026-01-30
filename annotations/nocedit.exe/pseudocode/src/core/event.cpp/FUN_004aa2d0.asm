; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_FUN_004aa2d0(char *param_1)
;
; Parameters:
; char *           Stack[0x4]:4   param_1
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aa2d0
        ;   Label: core_event.cpp_FUN_004aa2d0
    MOV DL,byte ptr [EAX]               ; 004aa2d4
        ;   Label: LAB_004aa2d4
    INC DL                              ; 004aa2d6
    AND EDX,0xff                        ; 004aa2d8
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aa2de | g_CharacterClassificationTable
    JZ 0x004aa2c9                       ; 004aa2e5
        ;   XREF to: 004aa2c9 (CONDITIONAL_JUMP)  ; LAB_004aa2c9
    INC EAX                             ; 004aa2e7
    JMP 0x004aa2d4                      ; 004aa2e8
        ;   XREF to: 004aa2d4 (UNCONDITIONAL_JUMP)  ; LAB_004aa2d4

