; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined4       Stack[-0x448]:4  local_448
; undefined4       Stack[-0x444]:4  local_444
; undefined        Stack[-0x438]:1  local_438
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb4f8
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc3bf
;
; Referenced Globals:
;   TerminatedCString s_Can_t_mount_s_to_delete__006291d4
;   TerminatedCString s_Deleting_local_files_006291fa
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   crt_io.c_deleteFile_FUN_005ff9d0
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bca50
        ;   Label: engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
    PUSH EBP                            ; 004bca51
    SUB ESP,0x430                       ; 004bca52
    MOV EBX,dword ptr [ESP + 0x440]     ; 004bca58
    MOV EAX,ESP                         ; 004bca5f
    PUSH EAX                            ; 004bca61
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004bca62
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004bca67
    PUSH EBX                            ; 004bca6a
    LEA EAX,[ESP + 0x4]                 ; 004bca6b
    PUSH EAX                            ; 004bca6f
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004bca70
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bca75
    TEST EAX,EAX                        ; 004bca78
    JZ 0x004bcb35                       ; 004bca7a
        ;   XREF to: 004bcb35 (CONDITIONAL_JUMP)  ; LAB_004bcb35
    PUSH ESI                            ; 004bca80
    PUSH 0x6291fa                       ; 004bca81 | = "Deleting local files"
    MOV ECX,dword ptr [0x00678a60]      ; 004bca86 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bca8c | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004bca8d
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 004bca92
    MOV ESI,dword ptr [ESP + 0x414]     ; 004bca95
    XOR EBX,EBX                         ; 004bca9c
    TEST ESI,ESI                        ; 004bca9e
    JLE 0x004bcb06                      ; 004bcaa0
        ;   XREF to: 004bcb06 (CONDITIONAL_JUMP)  ; LAB_004bcb06
    PUSH EDI                            ; 004bcaa2
    XOR ESI,ESI                         ; 004bcaa3
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004bcaa5
        ;   Label: LAB_004bcaa5
    MOV EDI,dword ptr [ESI + EAX*0x1]   ; 004bcaac
    PUSH EDI                            ; 004bcaaf
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 004bcab0
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004bcab5
    MOV EAX,dword ptr [ESP + 0x418]     ; 004bcab8
    MOV dword ptr [ESP + 0x434],EAX     ; 004bcabf
    INC EBX                             ; 004bcac6
    FILD dword ptr [ESP + 0x434]        ; 004bcac7
    SUB ESP,0x4                         ; 004bcace
    MOV dword ptr [ESP + 0x438],EBX     ; 004bcad1
    FSTP float ptr [ESP]                ; 004bcad8
    FILD dword ptr [ESP + 0x438]        ; 004bcadb
    SUB ESP,0x4                         ; 004bcae2
    MOV EBP,dword ptr [0x00678a60]      ; 004bcae5 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004bcaeb
    PUSH EBP                            ; 004bcaee | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004bcaef
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 004bcaf4
    MOV EAX,dword ptr [ESP + 0x418]     ; 004bcaf7
    ADD ESI,0x14                        ; 004bcafe
    CMP EBX,EAX                         ; 004bcb01
    JL 0x004bcaa5                       ; 004bcb03
        ;   XREF to: 004bcaa5 (CONDITIONAL_JUMP)  ; LAB_004bcaa5
    POP EDI                             ; 004bcb05
    MOV EDX,dword ptr [0x00678a60]      ; 004bcb06 | g_CEditorToolsPtr
        ;   Label: LAB_004bcb06
    PUSH EDX                            ; 004bcb0c | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004bcb0d
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004bcb12
    PUSH 0x0                            ; 004bcb15
    LEA EAX,[ESP + 0x8]                 ; 004bcb17
    PUSH EAX                            ; 004bcb1b
    MOV EBX,0x1                         ; 004bcb1c
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bcb21
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bcb26
    POP ESI                             ; 004bcb29
    MOV EAX,EBX                         ; 004bcb2a
    ADD ESP,0x430                       ; 004bcb2c
    POP EBP                             ; 004bcb32
    POP EBX                             ; 004bcb33
    RET                                 ; 004bcb34
    PUSH EBX                            ; 004bcb35
        ;   Label: LAB_004bcb35
    PUSH 0x6291d4                       ; 004bcb36 | = "Can't mount %s to delete local files."
    MOV EDX,dword ptr [0x00678a60]      ; 004bcb3b | g_CEditorToolsPtr
    PUSH EDX                            ; 004bcb41 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bcb42
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bcb47
    XOR EBX,EBX                         ; 004bcb4a
    PUSH EBX                            ; 004bcb4c
    LEA EAX,[ESP + 0x4]                 ; 004bcb4d
    PUSH EAX                            ; 004bcb51
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004bcb52
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004bcb57
    MOV EAX,EBX                         ; 004bcb5a
    ADD ESP,0x430                       ; 004bcb5c
    POP EBP                             ; 004bcb62
    POP EBX                             ; 004bcb63
    RET                                 ; 004bcb64

