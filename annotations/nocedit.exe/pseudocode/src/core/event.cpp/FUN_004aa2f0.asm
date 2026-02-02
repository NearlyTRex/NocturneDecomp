; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_FUN_004aa2f0(int param_1,int *param_2)
;
; Parameters:
; int              Stack[0x4]:4   param_1
; int *            Stack[0x8]:4   param_2
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004aa2f0
        ;   Label: core_event.cpp_FUN_004aa2f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aa2f4
    MOV EDX,dword ptr [EAX]             ; 004aa2f8
        ;   Label: LAB_004aa2f8
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 004aa2fa
    INC DL                              ; 004aa2fd
    AND EDX,0xff                        ; 004aa2ff
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aa305 | g_CharacterClassificationTable
    JZ 0x004aa2c9                       ; 004aa30c
        ;   XREF to: 004aa2c9 (CONDITIONAL_JUMP)  ; LAB_004aa2c9
    INC dword ptr [EAX]                 ; 004aa30e
    JMP 0x004aa2f8                      ; 004aa310
        ;   XREF to: 004aa2f8 (UNCONDITIONAL_JUMP)  ; LAB_004aa2f8

