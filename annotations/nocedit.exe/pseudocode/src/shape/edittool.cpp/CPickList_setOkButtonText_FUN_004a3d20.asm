; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList * this_ptr, char * text)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[1]:
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bcf75
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_006239f5
;   TerminatedCString s_CPickList_setOkButtonTex_00623a0b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a3d20
        ;   Label: shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a3d21
    TEST ESI,ESI                        ; 004a3d25
    JNZ 0x004a3d33                      ; 004a3d27
        ;   XREF to: 004a3d33 (CONDITIONAL_JUMP)  ; LAB_004a3d33
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a3d29
    MOV byte ptr [ECX + 0x44],0x0       ; 004a3d2d
    POP ESI                             ; 004a3d31
    RET                                 ; 004a3d32
    PUSH EDI                            ; 004a3d33
        ;   Label: LAB_004a3d33
    MOV EDI,ESI                         ; 004a3d34
    SUB ECX,ECX                         ; 004a3d36
    DEC ECX                             ; 004a3d38
    XOR EAX,EAX                         ; 004a3d39
    SCASB.REPNE ES:EDI                  ; 004a3d3b
    NOT ECX                             ; 004a3d3d
    DEC ECX                             ; 004a3d3f
    CMP ECX,0x64                        ; 004a3d40
    JC 0x004a3d68                       ; 004a3d43
        ;   XREF to: 004a3d68 (CONDITIONAL_JUMP)  ; LAB_004a3d68
    MOV EDX,0x6239f5                    ; 004a3d45 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xd78                       ; 004a3d4a
    PUSH 0x623a0b                       ; 004a3d4f | = "CPickList::setOkButtonText - too long!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004a3d54 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004a3d5a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a3d60
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a3d65
    MOV EDI,dword ptr [ESP + 0xc]       ; 004a3d68
        ;   Label: LAB_004a3d68
    ADD EDI,0x44                        ; 004a3d6c
    PUSH EDI                            ; 004a3d6f
    MOV AL,byte ptr [ESI]               ; 004a3d70
        ;   Label: LAB_004a3d70
    MOV byte ptr [EDI],AL               ; 004a3d72
    CMP AL,0x0                          ; 004a3d74
    JZ 0x004a3d88                       ; 004a3d76
        ;   XREF to: 004a3d88 (CONDITIONAL_JUMP)  ; LAB_004a3d88
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3d78
    ADD ESI,0x2                         ; 004a3d7b
    MOV byte ptr [EDI + 0x1],AL         ; 004a3d7e
    ADD EDI,0x2                         ; 004a3d81
    CMP AL,0x0                          ; 004a3d84
    JNZ 0x004a3d70                      ; 004a3d86
        ;   XREF to: 004a3d70 (CONDITIONAL_JUMP)  ; LAB_004a3d70
    POP EDI                             ; 004a3d88
        ;   Label: LAB_004a3d88
    POP EDI                             ; 004a3d89
    POP ESI                             ; 004a3d8a
    RET                                 ; 004a3d8b

