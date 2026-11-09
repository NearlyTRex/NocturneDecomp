; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_findFile_FUN_0051b9d0(CPod *this_ptr,SFoundFileInfo *found_file_info)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; SFoundFileInfo * Stack[0x8]:4   found_file_info
;
; Called Functions:
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_0051a990
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_0051aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b9d0
        ;   Label: engine_pod.cpp_CPod_findFile_FUN_0051b9d0
    PUSH ESI                            ; 0051b9d1
    PUSH EDI                            ; 0051b9d2
    PUSH EBP                            ; 0051b9d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051b9d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051b9d8
    MOV EDX,dword ptr [EDI]             ; 0051b9dc
    XOR ESI,ESI                         ; 0051b9de
    TEST EDX,EDX                        ; 0051b9e0
    JLE 0x0051ba01                      ; 0051b9e2
        ;   XREF to: 0051ba01 (CONDITIONAL_JUMP)  ; LAB_0051ba01
    MOV EBX,EDI                         ; 0051b9e4
    PUSH EBP                            ; 0051b9e6
        ;   Label: LAB_0051b9e6
    MOV EAX,dword ptr [EBX + 0x4]       ; 0051b9e7
    PUSH EAX                            ; 0051b9ea
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_0051a990 ; 0051b9eb
        ;   XREF to: 0051a990 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_0051a990(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051b9f0
    TEST EAX,EAX                        ; 0051b9f3
    JGE 0x0051ba08                      ; 0051b9f5
        ;   XREF to: 0051ba08 (CONDITIONAL_JUMP)  ; LAB_0051ba08
    INC ESI                             ; 0051b9f7
    MOV ECX,dword ptr [EDI]             ; 0051b9f8
    ADD EBX,0x4                         ; 0051b9fa
    CMP ESI,ECX                         ; 0051b9fd
    JL 0x0051b9e6                       ; 0051b9ff
        ;   XREF to: 0051b9e6 (CONDITIONAL_JUMP)  ; LAB_0051b9e6
    XOR EAX,EAX                         ; 0051ba01
        ;   Label: LAB_0051ba01
    POP EBP                             ; 0051ba03
    POP EDI                             ; 0051ba04
    POP ESI                             ; 0051ba05
    POP EBX                             ; 0051ba06
    RET                                 ; 0051ba07
    PUSH EBP                            ; 0051ba08
        ;   Label: LAB_0051ba08
    PUSH EAX                            ; 0051ba09
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051ba0a
    PUSH EDX                            ; 0051ba0d
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_0051aa00 ; 0051ba0e
        ;   XREF to: 0051aa00 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_0051aa00(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 0051ba13
    ADD ESP,0xc                         ; 0051ba18
    POP EBP                             ; 0051ba1b
    POP EDI                             ; 0051ba1c
    POP ESI                             ; 0051ba1d
    POP EBX                             ; 0051ba1e
    RET                                 ; 0051ba1f

