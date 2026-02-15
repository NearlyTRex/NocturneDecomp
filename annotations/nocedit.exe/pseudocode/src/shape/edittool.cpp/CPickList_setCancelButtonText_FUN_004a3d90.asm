; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList *this_ptr,char *text)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[4]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005388e0
;   core_setedit.cpp_CDemonSet_FUN_00576da0 at 00576f8f
;   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 at 004ba4a3
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bcf87
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623a32
;   TerminatedCString s_CPickList_setCancelButto_00623a48
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a3d90
        ;   Label: shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a3d91
    TEST ESI,ESI                        ; 004a3d95
    JNZ 0x004a3da6                      ; 004a3d97
        ;   XREF to: 004a3da6 (CONDITIONAL_JUMP)  ; LAB_004a3da6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a3d99
    MOV byte ptr [ECX + 0xa8],0x0       ; 004a3d9d
    POP ESI                             ; 004a3da4
    RET                                 ; 004a3da5
    PUSH EDI                            ; 004a3da6
        ;   Label: LAB_004a3da6
    MOV EDI,ESI                         ; 004a3da7
    SUB ECX,ECX                         ; 004a3da9
    DEC ECX                             ; 004a3dab
    XOR EAX,EAX                         ; 004a3dac
    SCASB.REPNE ES:EDI                  ; 004a3dae
    NOT ECX                             ; 004a3db0
    DEC ECX                             ; 004a3db2
    CMP ECX,0x64                        ; 004a3db3
    JC 0x004a3ddb                       ; 004a3db6
        ;   XREF to: 004a3ddb (CONDITIONAL_JUMP)  ; LAB_004a3ddb
    MOV EDX,0x623a32                    ; 004a3db8 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xd87                       ; 004a3dbd
    PUSH 0x623a48                       ; 004a3dc2 | = "CPickList::setCancelButtonText - too ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004a3dc7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004a3dcd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a3dd3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a3dd8
    MOV EDI,dword ptr [ESP + 0xc]       ; 004a3ddb
        ;   Label: LAB_004a3ddb
    ADD EDI,0xa8                        ; 004a3ddf
    PUSH EDI                            ; 004a3de5
    MOV AL,byte ptr [ESI]               ; 004a3de6
        ;   Label: LAB_004a3de6
    MOV byte ptr [EDI],AL               ; 004a3de8
    CMP AL,0x0                          ; 004a3dea
    JZ 0x004a3dfe                       ; 004a3dec
        ;   XREF to: 004a3dfe (CONDITIONAL_JUMP)  ; LAB_004a3dfe
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3dee
    ADD ESI,0x2                         ; 004a3df1
    MOV byte ptr [EDI + 0x1],AL         ; 004a3df4
    ADD EDI,0x2                         ; 004a3df7
    CMP AL,0x0                          ; 004a3dfa
    JNZ 0x004a3de6                      ; 004a3dfc
        ;   XREF to: 004a3de6 (CONDITIONAL_JUMP)  ; LAB_004a3de6
    POP EDI                             ; 004a3dfe
        ;   Label: LAB_004a3dfe
    POP EDI                             ; 004a3dff
    POP ESI                             ; 004a3e00
    RET                                 ; 004a3e01

