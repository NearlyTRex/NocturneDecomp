; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_setImageSuffix_FUN_004a56c0(CFieldNotes *this_ptr,char *suffix)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   suffix
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 005282b2
;
; Referenced Globals:
;   undefined4 DAT_00616010
;   undefined4 DAT_01cab788
;   undefined4 DAT_01cab789
;   undefined4 DAT_01cab78a
;   undefined4 DAT_01cab78b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a56c0
        ;   Label: core_fldnotes.cpp_CFieldNotes_setImageSuffix_FUN_004a56c0
    PUSH EDI                            ; 004a56c1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a56c2
    MOV EDI,0x1cab788                   ; 004a56c6
    MOV EDX,0x1                         ; 004a56cb
    PUSH EDI                            ; 004a56d0 | DAT_01cab788
    MOV AL,byte ptr [ESI]               ; 004a56d1
        ;   Label: LAB_004a56d1
    MOV byte ptr [EDI],AL               ; 004a56d3 | DAT_01cab788 | DAT_01cab78a
    CMP AL,0x0                          ; 004a56d5
    JZ 0x004a56e9                       ; 004a56d7
        ;   XREF to: 004a56e9 (CONDITIONAL_JUMP)  ; LAB_004a56e9
    MOV AL,byte ptr [ESI + 0x1]         ; 004a56d9
    ADD ESI,0x2                         ; 004a56dc
    MOV byte ptr [EDI + 0x1],AL         ; 004a56df | DAT_01cab789 | DAT_01cab78b
    ADD EDI,0x2                         ; 004a56e2
    CMP AL,0x0                          ; 004a56e5
    JNZ 0x004a56d1                      ; 004a56e7
        ;   XREF to: 004a56d1 (CONDITIONAL_JUMP)  ; LAB_004a56d1
    POP EDI                             ; 004a56e9
        ;   Label: LAB_004a56e9
    MOV dword ptr [0x00616010],EDX      ; 004a56ea | DAT_00616010
    POP EDI                             ; 004a56f0
    POP ESI                             ; 004a56f1
    RET                                 ; 004a56f2

