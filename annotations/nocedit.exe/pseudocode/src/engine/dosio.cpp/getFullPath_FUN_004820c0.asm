; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_getFullPath_FUN_004820c0(char *output_path,char *input_path)
;
; Parameters:
; char *           Stack[0x4]:4   output_path
; char *           Stack[0x8]:4   input_path
;
; XREF[3]:
;   engine_dosio.cpp_findFileNormally_FUN_004817c0 at 004817e7
;   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 at 004ba6e1
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0 at 004a3b27
;
; Called Functions:
;   crt_stdlib.c__fullpath_FUN_00601140
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004820c0
        ;   Label: engine_dosio.cpp_getFullPath_FUN_004820c0
    PUSH EDI                            ; 004820c1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004820c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004820c6
    PUSH 0x100                          ; 004820ca
    PUSH ESI                            ; 004820cf
    PUSH EDI                            ; 004820d0
    CALL crt_stdlib.c__fullpath_FUN_00601140 ; 004820d1
        ;   XREF to: 00601140 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_00601140(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 004820d6
    CMP EAX,EDI                         ; 004820d9
    JNZ 0x004820e5                      ; 004820db
        ;   XREF to: 004820e5 (CONDITIONAL_JUMP)  ; LAB_004820e5
    MOV EAX,0x1                         ; 004820dd
    POP EDI                             ; 004820e2
    POP ESI                             ; 004820e3
    RET                                 ; 004820e4
    PUSH EDI                            ; 004820e5
        ;   Label: LAB_004820e5
    MOV AL,byte ptr [ESI]               ; 004820e6
        ;   Label: LAB_004820e6
    MOV byte ptr [EDI],AL               ; 004820e8
    CMP AL,0x0                          ; 004820ea
    JZ 0x004820fe                       ; 004820ec
        ;   XREF to: 004820fe (CONDITIONAL_JUMP)  ; LAB_004820fe
    MOV AL,byte ptr [ESI + 0x1]         ; 004820ee
    ADD ESI,0x2                         ; 004820f1
    MOV byte ptr [EDI + 0x1],AL         ; 004820f4
    ADD EDI,0x2                         ; 004820f7
    CMP AL,0x0                          ; 004820fa
    JNZ 0x004820e6                      ; 004820fc
        ;   XREF to: 004820e6 (CONDITIONAL_JUMP)  ; LAB_004820e6
    POP EDI                             ; 004820fe
        ;   Label: LAB_004820fe
    XOR EAX,EAX                         ; 004820ff
    POP EDI                             ; 00482101
    POP ESI                             ; 00482102
    RET                                 ; 00482103

