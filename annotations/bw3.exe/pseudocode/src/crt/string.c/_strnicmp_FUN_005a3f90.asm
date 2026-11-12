; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__strnicmp_FUN_005a3f90(char *str1,char *str2,int count)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
; int              Stack[0xc]:4   count
;
; XREF[22]:
;   core_carved.cpp_CCarved_getCarryObjToBodyXForm_FUN_00427780 at 004277df
;   core_carved.cpp_FUN_00428520 at 00428556
;   core_charactr.cpp_CCharacter_getDeathState_FUN_00431000 at 0043105f
;   core_charactr.cpp_FUN_0042c230 at 0042c7f3
;   core_charactr.cpp_FUN_00434850 at 00434882
;   core_demnfolk.cpp_CDemnfolk_getCarryObjToBodyXForm_FUN_00457300 at 0045735f
;   core_demnfolk.cpp_FUN_004580a0 at 004580d6
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 0048811e
;   core_event.cpp_FUN_0048c2e0 at 0048c538
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a9330 at 004a9404
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3f90
        ;   Label: crt_string.c__strnicmp_FUN_005a3f90
    PUSH ESI                            ; 005a3f91
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3f92
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a3f96
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a3f9a
    TEST EDX,EDX                        ; 005a3f9e
    JNZ 0x005a3fa7                      ; 005a3fa0
        ;   XREF to: 005a3fa7 (CONDITIONAL_JUMP)  ; LAB_005a3fa7
    XOR EAX,EAX                         ; 005a3fa2
        ;   Label: LAB_005a3fa2
    POP ESI                             ; 005a3fa4
    POP EBX                             ; 005a3fa5
    RET                                 ; 005a3fa6
    MOV AL,byte ptr [EBX]               ; 005a3fa7
        ;   Label: LAB_005a3fa7
    MOV AH,byte ptr [ESI]               ; 005a3fa9
    CMP AL,0x41                         ; 005a3fab
    JC 0x005a3fb5                       ; 005a3fad
        ;   XREF to: 005a3fb5 (CONDITIONAL_JUMP)  ; LAB_005a3fb5
    CMP AL,0x5a                         ; 005a3faf
    JA 0x005a3fb5                       ; 005a3fb1
        ;   XREF to: 005a3fb5 (CONDITIONAL_JUMP)  ; LAB_005a3fb5
    ADD AL,0x20                         ; 005a3fb3
    CMP AH,0x41                         ; 005a3fb5
        ;   Label: LAB_005a3fb5
    JC 0x005a3fc2                       ; 005a3fb8
        ;   XREF to: 005a3fc2 (CONDITIONAL_JUMP)  ; LAB_005a3fc2
    CMP AH,0x5a                         ; 005a3fba
    JA 0x005a3fc2                       ; 005a3fbd
        ;   XREF to: 005a3fc2 (CONDITIONAL_JUMP)  ; LAB_005a3fc2
    ADD AH,0x20                         ; 005a3fbf
    CMP AL,AH                           ; 005a3fc2
        ;   Label: LAB_005a3fc2
    JZ 0x005a3fd8                       ; 005a3fc4
        ;   XREF to: 005a3fd8 (CONDITIONAL_JUMP)  ; LAB_005a3fd8
    XOR EDX,EDX                         ; 005a3fc6
    MOV DL,AL                           ; 005a3fc8
    MOV AL,AH                           ; 005a3fca
    AND EAX,0xff                        ; 005a3fcc
    SUB EDX,EAX                         ; 005a3fd1
    MOV EAX,EDX                         ; 005a3fd3
    POP ESI                             ; 005a3fd5
    POP EBX                             ; 005a3fd6
    RET                                 ; 005a3fd7
    TEST AH,AH                          ; 005a3fd8
        ;   Label: LAB_005a3fd8
    JNZ 0x005a3fe1                      ; 005a3fda
        ;   XREF to: 005a3fe1 (CONDITIONAL_JUMP)  ; LAB_005a3fe1
    XOR EAX,EAX                         ; 005a3fdc
    POP ESI                             ; 005a3fde
    POP EBX                             ; 005a3fdf
    RET                                 ; 005a3fe0
    INC EBX                             ; 005a3fe1
        ;   Label: LAB_005a3fe1
    INC ESI                             ; 005a3fe2
    DEC EDX                             ; 005a3fe3
    JZ 0x005a3fa2                       ; 005a3fe4
        ;   XREF to: 005a3fa2 (CONDITIONAL_JUMP)  ; LAB_005a3fa2
    JMP 0x005a3fa7                      ; 005a3fe6
        ;   XREF to: 005a3fa7 (UNCONDITIONAL_JUMP)  ; LAB_005a3fa7

