; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a8890(SPageResourceTwanaCharacter *this_ptr,int param_2)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01d0cfa0
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d0cfa0]      ; 004a8890 | DAT_01d0cfa0
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a8890
    TEST EDX,EDX                        ; 004a8896
    JZ 0x004a88a7                       ; 004a8898
        ;   XREF to: 004a88a7 (CONDITIONAL_JUMP)  ; LAB_004a88a7
    CMP dword ptr [ESP + 0x8],0x1       ; 004a889a
    JZ 0x004a88aa                       ; 004a889f
        ;   XREF to: 004a88aa (CONDITIONAL_JUMP)  ; LAB_004a88aa
    MOV EAX,0x1                         ; 004a88a1
    RET                                 ; 004a88a6
    XOR EAX,EAX                         ; 004a88a7
        ;   Label: LAB_004a88a7
    RET                                 ; 004a88a9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a88aa
        ;   Label: LAB_004a88aa
    ADD EAX,0x2c                        ; 004a88ae
    PUSH EAX                            ; 004a88b1
    PUSH EDX                            ; 004a88b2
    CALL core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90 ; 004a88b3
        ;   XREF to: 004a8b90 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90(SPageResourceTwanaEntry * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004a88b8
    MOV EAX,0x1                         ; 004a88bb
    RET                                 ; 004a88c0

