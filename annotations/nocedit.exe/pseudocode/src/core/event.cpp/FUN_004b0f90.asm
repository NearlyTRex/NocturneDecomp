; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_FUN_004b0f90(int param_1)
;
; Parameters:
; int              Stack[0x4]:4   param_1
;
; XREF[4]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004aae6b
;   core_event.cpp_CEventList_FUN_004ae140 at 004ae2aa
;   core_script.cpp_CScript_FUN_00567080 at 005670f7
;   core_script.cpp_CScript_tokenizeAtCursor_FUN_00567310 at 00567384
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b0f90
        ;   Label: core_event.cpp_FUN_004b0f90
    MOV AL,DL                           ; 004b0f94
    INC AL                              ; 004b0f96
    AND EAX,0xff                        ; 004b0f98
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 004b0f9d | g_CharacterClassificationTable
    JNZ 0x004b0fb4                      ; 004b0fa4
        ;   XREF to: 004b0fb4 (CONDITIONAL_JUMP)  ; LAB_004b0fb4
    CMP EDX,0x5f                        ; 004b0fa6
    JZ 0x004b0fb4                       ; 004b0fa9
        ;   XREF to: 004b0fb4 (CONDITIONAL_JUMP)  ; LAB_004b0fb4
    CMP EDX,0x2d                        ; 004b0fab
    JNZ 0x004b0858                      ; 004b0fae
        ;   XREF to: 004b0858 (CONDITIONAL_JUMP)  ; LAB_004b0858
    MOV EAX,0x1                         ; 004b0fb4
        ;   Label: LAB_004b0fb4
    RET                                 ; 004b0fb9

