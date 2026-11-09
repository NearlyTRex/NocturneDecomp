; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_findFile_FUN_0053cf50(CPod *this_ptr,SFoundFileInfo *found_file_info)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; SFoundFileInfo * Stack[0x8]:4   found_file_info
;
; Called Functions:
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_0053bed0
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_0053bf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cf50
        ;   Label: engine_pod.cpp_CPod_findFile_FUN_0053cf50
    PUSH ESI                            ; 0053cf51
    PUSH EDI                            ; 0053cf52
    PUSH EBP                            ; 0053cf53
    MOV EDI,dword ptr [ESP + 0x14]      ; 0053cf54
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053cf58
    MOV EDX,dword ptr [EDI]             ; 0053cf5c
    XOR ESI,ESI                         ; 0053cf5e
    TEST EDX,EDX                        ; 0053cf60
    JLE 0x0053cf81                      ; 0053cf62
        ;   XREF to: 0053cf81 (CONDITIONAL_JUMP)  ; LAB_0053cf81
    MOV EBX,EDI                         ; 0053cf64
    PUSH EBP                            ; 0053cf66
        ;   Label: LAB_0053cf66
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053cf67
    PUSH EAX                            ; 0053cf6a
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_0053bed0 ; 0053cf6b
        ;   XREF to: 0053bed0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_0053bed0(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053cf70
    TEST EAX,EAX                        ; 0053cf73
    JGE 0x0053cf88                      ; 0053cf75
        ;   XREF to: 0053cf88 (CONDITIONAL_JUMP)  ; LAB_0053cf88
    INC ESI                             ; 0053cf77
    MOV ECX,dword ptr [EDI]             ; 0053cf78
    ADD EBX,0x4                         ; 0053cf7a
    CMP ESI,ECX                         ; 0053cf7d
    JL 0x0053cf66                       ; 0053cf7f
        ;   XREF to: 0053cf66 (CONDITIONAL_JUMP)  ; LAB_0053cf66
    XOR EAX,EAX                         ; 0053cf81
        ;   Label: LAB_0053cf81
    POP EBP                             ; 0053cf83
    POP EDI                             ; 0053cf84
    POP ESI                             ; 0053cf85
    POP EBX                             ; 0053cf86
    RET                                 ; 0053cf87
    PUSH EBP                            ; 0053cf88
        ;   Label: LAB_0053cf88
    PUSH EAX                            ; 0053cf89
    MOV EDX,dword ptr [EBX + 0x4]       ; 0053cf8a
    PUSH EDX                            ; 0053cf8d
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_0053bf40 ; 0053cf8e
        ;   XREF to: 0053bf40 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_0053bf40(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 0053cf93
    ADD ESP,0xc                         ; 0053cf98
    POP EBP                             ; 0053cf9b
    POP EDI                             ; 0053cf9c
    POP ESI                             ; 0053cf9d
    POP EBX                             ; 0053cf9e
    RET                                 ; 0053cf9f

