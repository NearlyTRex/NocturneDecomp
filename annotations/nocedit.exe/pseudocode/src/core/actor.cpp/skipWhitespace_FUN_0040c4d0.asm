; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_skipWhitespace_FUN_0040c4d0(char * * parse_pos)
;
; Parameters:
; char * *         Stack[0x4]:4   parse_pos
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c4d0
        ;   Label: core_actor.cpp_skipWhitespace_FUN_0040c4d0
    MOV EAX,dword ptr [ECX]             ; 0040c4d4
        ;   Label: LAB_0040c4d4
    MOV DL,byte ptr [EAX]               ; 0040c4d6
    INC DL                              ; 0040c4d8
    AND EDX,0xff                        ; 0040c4da
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 0040c4e0 | g_CharacterClassificationTable
    JZ 0x0040c47d                       ; 0040c4e7
        ;   XREF to: 0040c47d (CONDITIONAL_JUMP)  ; LAB_0040c47d
    INC EAX                             ; 0040c4e9
    MOV dword ptr [ECX],EAX             ; 0040c4ea
    JMP 0x0040c4d4                      ; 0040c4ec
        ;   XREF to: 0040c4d4 (UNCONDITIONAL_JUMP)  ; LAB_0040c4d4

