; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   info
; Local Variables:
; char[256]        Stack[-0x14c]:256  local_14c
; _stat            Stack[-0x4c]:70  local_4c
;
; XREF[14]:
;   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 at 004bd7cf
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b6d
;   engine_dosio.c_findFile_FUN_00481760 at 004817a1
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4292
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bafcc
;   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 at 004b83a2
;   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 at 004b78b9
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b6fc9
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b89a6
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b613b
;   ... and 4 more
;
; Called Functions:
;   crt_io.c_getFileStat_FUN_00600c18
;   engine_dosio.c_getFullPath_FUN_004820c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004817c0
        ;   Label: engine_dosio.c_findFileNormally_FUN_004817c0
    SUB ESP,0x148                       ; 004817c1
    MOV EBX,dword ptr [ESP + 0x150]     ; 004817c7
    TEST EBX,EBX                        ; 004817ce
    JZ 0x004817d7                       ; 004817d0
        ;   XREF to: 004817d7 (CONDITIONAL_JUMP)  ; LAB_004817d7
    CMP byte ptr [EBX],0x0              ; 004817d2
    JNZ 0x004817e1                      ; 004817d5
        ;   XREF to: 004817e1 (CONDITIONAL_JUMP)  ; LAB_004817e1
    XOR EAX,EAX                         ; 004817d7
        ;   Label: LAB_004817d7
    ADD ESP,0x148                       ; 004817d9
        ;   Label: LAB_004817d9
    POP EBX                             ; 004817df
    RET                                 ; 004817e0
    PUSH EBX                            ; 004817e1
        ;   Label: LAB_004817e1
    LEA EAX,[ESP + 0x4]                 ; 004817e2
    PUSH EAX                            ; 004817e6
    CALL engine_dosio.c_getFullPath_FUN_004820c0 ; 004817e7
        ;   XREF to: 004820c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFullPath_FUN_004820c0(char * output_path, char * input_path)
    ADD ESP,0x8                         ; 004817ec
    TEST EAX,EAX                        ; 004817ef
    JZ 0x004817d9                       ; 004817f1
        ;   XREF to: 004817d9 (CONDITIONAL_JUMP)  ; LAB_004817d9
    LEA EAX,[ESP + 0x100]               ; 004817f3
    PUSH EAX                            ; 004817fa
    LEA EAX,[ESP + 0x4]                 ; 004817fb
    PUSH EAX                            ; 004817ff
    CALL crt_io.c_getFileStat_FUN_00600c18 ; 00481800
        ;   XREF to: 00600c18 (UNCONDITIONAL_CALL)  ; int crt_io.c_getFileStat_FUN_00600c18(char * filename, _stat * file_info)
    ADD ESP,0x8                         ; 00481805
    TEST EAX,EAX                        ; 00481808
    JNZ 0x004817d7                      ; 0048180a
        ;   XREF to: 004817d7 (CONDITIONAL_JUMP)  ; LAB_004817d7
    PUSH EDI                            ; 0048180c
    PUSH ESI                            ; 0048180d
    MOV EAX,dword ptr [ESP + 0x11e]     ; 0048180e
    MOV dword ptr [EBX + 0x204],EAX     ; 00481815
    MOV EAX,dword ptr [ESP + 0x126]     ; 0048181b
    MOV dword ptr [EBX + 0x200],0x0     ; 00481822
    LEA ESI,[ESP + 0x8]                 ; 0048182c
    MOV dword ptr [EBX + 0x20c],EAX     ; 00481830
    LEA EDI,[EBX + 0x100]               ; 00481836
    MOV dword ptr [EBX + 0x210],EAX     ; 0048183c
    PUSH EDI                            ; 00481842
    MOV AL,byte ptr [ESI]               ; 00481843
        ;   Label: LAB_00481843
    MOV byte ptr [EDI],AL               ; 00481845
    CMP AL,0x0                          ; 00481847
    JZ 0x0048185b                       ; 00481849
        ;   XREF to: 0048185b (CONDITIONAL_JUMP)  ; LAB_0048185b
    MOV AL,byte ptr [ESI + 0x1]         ; 0048184b
    ADD ESI,0x2                         ; 0048184e
    MOV byte ptr [EDI + 0x1],AL         ; 00481851
    ADD EDI,0x2                         ; 00481854
    CMP AL,0x0                          ; 00481857
    JNZ 0x00481843                      ; 00481859
        ;   XREF to: 00481843 (CONDITIONAL_JUMP)  ; LAB_00481843
    POP EDI                             ; 0048185b
        ;   Label: LAB_0048185b
    MOV EAX,0x1                         ; 0048185c
    MOV dword ptr [EBX + 0x208],0x0     ; 00481861
    POP ESI                             ; 0048186b
    POP EDI                             ; 0048186c
    ADD ESP,0x148                       ; 0048186d
    POP EBX                             ; 00481873
    RET                                 ; 00481874

