; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_findFile_FUN_00514cb0(CPod *this_ptr,SFoundFileInfo *found_file_info)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; SFoundFileInfo * Stack[0x8]:4   found_file_info
;
; Called Functions:
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_00513ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514cb0
        ;   Label: engine_pod.cpp_CPod_findFile_FUN_00514cb0
    PUSH ESI                            ; 00514cb1
    PUSH EDI                            ; 00514cb2
    PUSH EBP                            ; 00514cb3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00514cb4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00514cb8
    MOV EDX,dword ptr [EDI]             ; 00514cbc
    XOR ESI,ESI                         ; 00514cbe
    TEST EDX,EDX                        ; 00514cc0
    JLE 0x00514ce1                      ; 00514cc2
        ;   XREF to: 00514ce1 (CONDITIONAL_JUMP)  ; LAB_00514ce1
    MOV EBX,EDI                         ; 00514cc4
    PUSH EBP                            ; 00514cc6
        ;   Label: LAB_00514cc6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00514cc7
    PUSH EAX                            ; 00514cca
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30 ; 00514ccb
        ;   XREF to: 00513c30 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00513c30(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00514cd0
    TEST EAX,EAX                        ; 00514cd3
    JGE 0x00514ce8                      ; 00514cd5
        ;   XREF to: 00514ce8 (CONDITIONAL_JUMP)  ; LAB_00514ce8
    INC ESI                             ; 00514cd7
    MOV ECX,dword ptr [EDI]             ; 00514cd8
    ADD EBX,0x4                         ; 00514cda
    CMP ESI,ECX                         ; 00514cdd
    JL 0x00514cc6                       ; 00514cdf
        ;   XREF to: 00514cc6 (CONDITIONAL_JUMP)  ; LAB_00514cc6
    XOR EAX,EAX                         ; 00514ce1
        ;   Label: LAB_00514ce1
    POP EBP                             ; 00514ce3
    POP EDI                             ; 00514ce4
    POP ESI                             ; 00514ce5
    POP EBX                             ; 00514ce6
    RET                                 ; 00514ce7
    PUSH EBP                            ; 00514ce8
        ;   Label: LAB_00514ce8
    PUSH EAX                            ; 00514ce9
    MOV EDX,dword ptr [EBX + 0x4]       ; 00514cea
    PUSH EDX                            ; 00514ced
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_00513ca0 ; 00514cee
        ;   XREF to: 00513ca0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_00513ca0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 00514cf3
    ADD ESP,0xc                         ; 00514cf8
    POP EBP                             ; 00514cfb
    POP EDI                             ; 00514cfc
    POP ESI                             ; 00514cfd
    POP EBX                             ; 00514cfe
    RET                                 ; 00514cff

