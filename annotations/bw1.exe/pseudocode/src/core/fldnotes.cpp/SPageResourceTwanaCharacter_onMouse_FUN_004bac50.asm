; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_onMouse_FUN_004bac50(SPageResourceTwanaCharacter *this_ptr,int clicked,int x,int y)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clicked
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; Referenced Globals:
;   undefined4 DAT_01cc4200
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004baf50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cc4200]      ; 004bac50 | DAT_01cc4200
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_onMouse_FUN_004bac50
    TEST EDX,EDX                        ; 004bac56
    JZ 0x004bac67                       ; 004bac58
        ;   XREF to: 004bac67 (CONDITIONAL_JUMP)  ; LAB_004bac67
    CMP dword ptr [ESP + 0x8],0x1       ; 004bac5a
    JZ 0x004bac6a                       ; 004bac5f
        ;   XREF to: 004bac6a (CONDITIONAL_JUMP)  ; LAB_004bac6a
    MOV EAX,0x1                         ; 004bac61
    RET                                 ; 004bac66
    XOR EAX,EAX                         ; 004bac67
        ;   Label: LAB_004bac67
    RET                                 ; 004bac69
    MOV EAX,dword ptr [ESP + 0x4]       ; 004bac6a
        ;   Label: LAB_004bac6a
    ADD EAX,0x2c                        ; 004bac6e
    PUSH EAX                            ; 004bac71
    PUSH EDX                            ; 004bac72
    CALL core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004baf50 ; 004bac73
        ;   XREF to: 004baf50 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004baf50(SPageResourceTwanaEntry * this_ptr, char * character)
    ADD ESP,0x8                         ; 004bac78
    MOV EAX,0x1                         ; 004bac7b
    RET                                 ; 004bac80

