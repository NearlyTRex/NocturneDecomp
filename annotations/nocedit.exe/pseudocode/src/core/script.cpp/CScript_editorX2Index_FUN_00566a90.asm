; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_script_cpp_CScript_editorX2Index_FUN_00566a90 (CScript *this_ptr,int line_number,int visual_column)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   line_number
; int              Stack[0xc]:4   visual_column
;
; XREF[10]:
;   core_script.cpp_CScript_FUN_00565130 at 005659b9
;   core_script.cpp_CScript_FUN_00565aa0 at 00565aca
;   core_script.cpp_CScript_FUN_00565ae0 at 00565b1f
;   core_script.cpp_CScript_FUN_00565d00 at 00565d2c
;   core_script.cpp_CScript_FUN_00565e70 at 00565eaf
;   core_script.cpp_CScript_FUN_00565f70 at 00565fa9
;   core_script.cpp_CScript_FUN_00566390 at 005663ae
;   core_script.cpp_CScript_FUN_00566cc0 at 00566d32
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564c00
;   core_script.cpp_CScript_updateCursorBounds_FUN_00566910 at 00566959
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_00643fd6
;   TerminatedCString s_CScript_editorX2Index_in_00643fe9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566a90
        ;   Label: core_script.cpp_CScript_editorX2Index_FUN_00566a90
    PUSH ESI                            ; 00566a91
    PUSH EDI                            ; 00566a92
    MOV EDI,dword ptr [ESP + 0x14]      ; 00566a93
    MOV ESI,dword ptr [ESP + 0x18]      ; 00566a97
    TEST EDI,EDI                        ; 00566a9b
    JL 0x00566ad7                       ; 00566a9d
        ;   XREF to: 00566ad7 (CONDITIONAL_JUMP)  ; LAB_00566ad7
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566a9f
        ;   Label: LAB_00566a9f
    ADD EBX,0x38                        ; 00566aa3
    PUSH EBX                            ; 00566aa6
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00566aa7
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00566aac
    CMP EDI,EAX                         ; 00566aaf
    JGE 0x00566afc                      ; 00566ab1
        ;   XREF to: 00566afc (CONDITIONAL_JUMP)  ; LAB_00566afc
    PUSH EDI                            ; 00566ab3
    PUSH EBX                            ; 00566ab4
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00566ab5
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    MOV EDX,EAX                         ; 00566aba
    ADD ESP,0x8                         ; 00566abc
    XOR ECX,ECX                         ; 00566abf
    XOR EAX,EAX                         ; 00566ac1
    TEST ESI,ESI                        ; 00566ac3
    JLE 0x00566ad1                      ; 00566ac5
        ;   XREF to: 00566ad1 (CONDITIONAL_JUMP)  ; LAB_00566ad1
    MOV BL,byte ptr [EDX]               ; 00566ac7
        ;   Label: LAB_00566ac7
    TEST BL,BL                          ; 00566ac9
    JNZ 0x00566b02                      ; 00566acb
        ;   XREF to: 00566b02 (CONDITIONAL_JUMP)  ; LAB_00566b02
    SUB ESI,EAX                         ; 00566acd
    ADD ECX,ESI                         ; 00566acf
    MOV EAX,ECX                         ; 00566ad1
        ;   Label: LAB_00566ad1
    POP EDI                             ; 00566ad3
    POP ESI                             ; 00566ad4
    POP EBX                             ; 00566ad5
    RET                                 ; 00566ad6
    MOV EDX,0x643fd6                    ; 00566ad7 | = "..\\core\\script.cpp"
        ;   Label: LAB_00566ad7
    MOV ECX,0x1bc5                      ; 00566adc
    PUSH 0x643fe9                       ; 00566ae1 | = "CScript::editorX2Index - invalid y"
    MOV dword ptr [0x02f0ca48],EDX      ; 00566ae6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00566aec | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00566af2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00566af7
    JMP 0x00566a9f                      ; 00566afa
        ;   XREF to: 00566a9f (UNCONDITIONAL_JUMP)  ; LAB_00566a9f
    MOV EAX,ESI                         ; 00566afc
        ;   Label: LAB_00566afc
    POP EDI                             ; 00566afe
    POP ESI                             ; 00566aff
    POP EBX                             ; 00566b00
    RET                                 ; 00566b01
    CMP BL,0x9                          ; 00566b02
        ;   Label: LAB_00566b02
    JNZ 0x00566b18                      ; 00566b05
        ;   XREF to: 00566b18 (CONDITIONAL_JUMP)  ; LAB_00566b18
    ADD EAX,0x8                         ; 00566b07
    AND AL,0xf8                         ; 00566b0a
    INC EDX                             ; 00566b0c
    INC ECX                             ; 00566b0d
    CMP EAX,ESI                         ; 00566b0e
    JL 0x00566ac7                       ; 00566b10
        ;   XREF to: 00566ac7 (CONDITIONAL_JUMP)  ; LAB_00566ac7
    MOV EAX,ECX                         ; 00566b12
    POP EDI                             ; 00566b14
    POP ESI                             ; 00566b15
    POP EBX                             ; 00566b16
    RET                                 ; 00566b17
    INC EAX                             ; 00566b18
        ;   Label: LAB_00566b18
    INC EDX                             ; 00566b19
    INC ECX                             ; 00566b1a
    CMP EAX,ESI                         ; 00566b1b
    JL 0x00566ac7                       ; 00566b1d
        ;   XREF to: 00566ac7 (CONDITIONAL_JUMP)  ; LAB_00566ac7
    MOV EAX,ECX                         ; 00566b1f
    POP EDI                             ; 00566b21
    POP ESI                             ; 00566b22
    POP EBX                             ; 00566b23
    RET                                 ; 00566b24

