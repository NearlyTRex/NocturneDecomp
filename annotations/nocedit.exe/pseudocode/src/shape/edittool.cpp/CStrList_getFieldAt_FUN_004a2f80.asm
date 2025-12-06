; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   string_index
; char *           Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   field_number
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
;
; XREF[9]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f5cb
;   core_msnedit.cpp_FUN_0053b510 at 0053b7ae
;   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 at 0053b2ce
;   core_script.cpp_FUN_00562920 at 00563911
;   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 at 00578723
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b5216
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b7837
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049fa2f
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 at 0049f300
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2f80
        ;   Label: shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
    PUSH ESI                            ; 004a2f81
    SUB ESP,0x12c                       ; 004a2f82
    MOV ESI,dword ptr [ESP + 0x144]     ; 004a2f88
    MOV EDX,dword ptr [ESP + 0x140]     ; 004a2f8f
    PUSH EDX                            ; 004a2f96
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004a2f97
    PUSH ECX                            ; 004a2f9e
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a2f9f | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a2fa4
    MOV ECX,EAX                         ; 004a2fa7
    TEST EAX,EAX                        ; 004a2fa9
    JZ 0x004a2fd1                       ; 004a2fab | LAB_004a2fd1
        ;   XREF to: 004a2fd1 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 004a2fad
        ;   Label: LAB_004a2fad
    JLE 0x004a2fd1                      ; 004a2faf | LAB_004a2fd1
        ;   XREF to: 004a2fd1 (CONDITIONAL_JUMP)
    MOV EDX,ESP                         ; 004a2fb1
    MOV BH,byte ptr [ECX]               ; 004a2fb3
    MOV EAX,ECX                         ; 004a2fb5
    TEST BH,BH                          ; 004a2fb7
    JZ 0x004a2fc7                       ; 004a2fb9 | LAB_004a2fc7
        ;   XREF to: 004a2fc7 (CONDITIONAL_JUMP)
    MOV BH,byte ptr [EAX]               ; 004a2fbb
        ;   Label: LAB_004a2fbb
    LEA ECX,[EAX + 0x1]                 ; 004a2fbd
    CMP BH,0x9                          ; 004a2fc0
    JNZ 0x004a3001                      ; 004a2fc3 | LAB_004a3001
        ;   XREF to: 004a3001 (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 004a2fc5
    MOV byte ptr [EDX],0x0              ; 004a2fc7
        ;   Label: LAB_004a2fc7
    MOV ECX,EAX                         ; 004a2fca
    DEC ESI                             ; 004a2fcc
    TEST EAX,EAX                        ; 004a2fcd
    JNZ 0x004a2fad                      ; 004a2fcf | LAB_004a2fad
        ;   XREF to: 004a2fad (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 004a2fd1
        ;   Label: LAB_004a2fd1
    JZ 0x004a3010                       ; 004a2fd3 | LAB_004a3010
        ;   XREF to: 004a3010 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004a2fd5
    MOV BL,byte ptr [ECX]               ; 004a2fdc
    MOV EAX,ECX                         ; 004a2fde
    TEST BL,BL                          ; 004a2fe0
    JZ 0x004a2ff5                       ; 004a2fe2 | LAB_004a2ff5
        ;   XREF to: 004a2ff5 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x9              ; 004a2fe4
        ;   Label: LAB_004a2fe4
    JZ 0x004a2ff5                       ; 004a2fe7 | LAB_004a2ff5
        ;   XREF to: 004a2ff5 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [EAX]               ; 004a2fe9
    INC EAX                             ; 004a2feb
    MOV byte ptr [EDX],CL               ; 004a2fec
    MOV CL,byte ptr [EAX]               ; 004a2fee
    INC EDX                             ; 004a2ff0
    TEST CL,CL                          ; 004a2ff1
    JNZ 0x004a2fe4                      ; 004a2ff3 | LAB_004a2fe4
        ;   XREF to: 004a2fe4 (CONDITIONAL_JUMP)
    MOV byte ptr [EDX],0x0              ; 004a2ff5
        ;   Label: LAB_004a2ff5
    ADD ESP,0x12c                       ; 004a2ff8
    POP ESI                             ; 004a2ffe
    POP EBX                             ; 004a2fff
    RET                                 ; 004a3000
    MOV AL,byte ptr [EAX]               ; 004a3001
        ;   Label: LAB_004a3001
    MOV byte ptr [EDX],AL               ; 004a3003
    INC EDX                             ; 004a3005
    MOV BL,byte ptr [ECX]               ; 004a3006
    MOV EAX,ECX                         ; 004a3008
    TEST BL,BL                          ; 004a300a
    JNZ 0x004a2fbb                      ; 004a300c | LAB_004a2fbb
        ;   XREF to: 004a2fbb (CONDITIONAL_JUMP)
    JMP 0x004a2fc7                      ; 004a300e | LAB_004a2fc7
        ;   XREF to: 004a2fc7 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004a3010
        ;   Label: LAB_004a3010
    MOV byte ptr [EAX],0x0              ; 004a3017
    ADD ESP,0x12c                       ; 004a301a
    POP ESI                             ; 004a3020
    POP EBX                             ; 004a3021
    RET                                 ; 004a3022

