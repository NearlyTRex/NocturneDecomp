; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager *this_ptr,CStrList *pod_list,char *target_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   pod_list
; char *           Stack[0xc]:4   target_filename
; Local Variables:
; char[260]        Stack[-0x210]:260  local_210
; char[260]        Stack[-0x10c]:260  local_10c
;
; XREF[6]:
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb4c7
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bae68
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b7155
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8a49
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bcf44
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc38e
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.cpp_getFullPath_FUN_004820c0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba6c0
        ;   Label: engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
    PUSH ESI                            ; 004ba6c1
    SUB ESP,0x208                       ; 004ba6c2
    MOV ESI,dword ptr [ESP + 0x218]     ; 004ba6c8
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004ba6cf
    PUSH EDX                            ; 004ba6d6
    LEA EAX,[ESP + 0x108]               ; 004ba6d7
    PUSH EAX                            ; 004ba6de
    XOR EBX,EBX                         ; 004ba6df
    CALL engine_dosio.cpp_getFullPath_FUN_004820c0 ; 004ba6e1
        ;   XREF to: 004820c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFullPath_FUN_004820c0(char * output_path, char * input_path)
    ADD ESP,0x8                         ; 004ba6e6
    MOV EAX,dword ptr [ESI]             ; 004ba6e9
        ;   Label: LAB_004ba6e9
    CMP EBX,EAX                         ; 004ba6eb
    JL 0x004ba700                       ; 004ba6ed
        ;   XREF to: 004ba700 (CONDITIONAL_JUMP)  ; LAB_004ba700
    MOV EAX,0xffffffff                  ; 004ba6ef
    ADD ESP,0x208                       ; 004ba6f4
    POP ESI                             ; 004ba6fa
    POP EBX                             ; 004ba6fb
    RET                                 ; 004ba6fc
    INC EBX                             ; 004ba6fd
        ;   Label: LAB_004ba6fd
    JMP 0x004ba6e9                      ; 004ba6fe
        ;   XREF to: 004ba6e9 (UNCONDITIONAL_JUMP)  ; LAB_004ba6e9
    PUSH EBX                            ; 004ba700
        ;   Label: LAB_004ba700
    PUSH ESI                            ; 004ba701
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004ba702
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004ba707
    PUSH EAX                            ; 004ba70a
    LEA EAX,[ESP + 0x4]                 ; 004ba70b
    PUSH EAX                            ; 004ba70f
    CALL engine_dosio.cpp_getFullPath_FUN_004820c0 ; 004ba710
        ;   XREF to: 004820c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFullPath_FUN_004820c0(char * output_path, char * input_path)
    ADD ESP,0x8                         ; 004ba715
    MOV EAX,ESP                         ; 004ba718
    PUSH EAX                            ; 004ba71a
    LEA EAX,[ESP + 0x108]               ; 004ba71b
    PUSH EAX                            ; 004ba722
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ba723
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ba728
    TEST EAX,EAX                        ; 004ba72b
    JNZ 0x004ba6fd                      ; 004ba72d
        ;   XREF to: 004ba6fd (CONDITIONAL_JUMP)  ; LAB_004ba6fd
    MOV EAX,EBX                         ; 004ba72f
    ADD ESP,0x208                       ; 004ba731
    POP ESI                             ; 004ba737
    POP EBX                             ; 004ba738
    RET                                 ; 004ba739

