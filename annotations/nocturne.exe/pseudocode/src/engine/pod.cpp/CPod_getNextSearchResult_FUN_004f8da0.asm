; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(CPod *this_ptr,CPodSearchContext *search_context)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; CPodSearchContext * Stack[0x8]:4   search_context
;
; XREF[3]:
;   engine_pod.cpp_CPod_initSearch_FUN_004f8d50 at 004f8d94
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 004747cf
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 004749bf
;
; Called Functions:
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8da0
        ;   Label: engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0
    PUSH ESI                            ; 004f8da1
    PUSH EDI                            ; 004f8da2
    PUSH EBP                            ; 004f8da3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f8da4
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f8da8
    MOV EAX,dword ptr [EBX + 0x314]     ; 004f8dac
    CMP EAX,dword ptr [ESI]             ; 004f8db2
    JGE 0x004f8e15                      ; 004f8db4
        ;   XREF to: 004f8e15 (CONDITIONAL_JUMP)  ; LAB_004f8e15
    LEA EDI,[EBX + 0x214]               ; 004f8db6
    CMP dword ptr [EBX + 0x314],0x0     ; 004f8dbc
        ;   Label: LAB_004f8dbc
    JL 0x004f8e1f                       ; 004f8dc3
        ;   XREF to: 004f8e1f (CONDITIONAL_JUMP)  ; LAB_004f8e1f
    MOV EAX,dword ptr [EBX + 0x314]     ; 004f8dc5
        ;   Label: LAB_004f8dc5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f8dcb
    SHL EAX,0x2                         ; 004f8dcf
    ADD EAX,EDX                         ; 004f8dd2
    MOV EBP,dword ptr [EAX + 0x4]       ; 004f8dd4
    CMP dword ptr [EBX + 0x318],0x0     ; 004f8dd7
        ;   Label: LAB_004f8dd7
    JL 0x004f8e2b                       ; 004f8dde
        ;   XREF to: 004f8e2b (CONDITIONAL_JUMP)  ; LAB_004f8e2b
    MOV ESI,dword ptr [EBP + 0x208]     ; 004f8de0
        ;   Label: LAB_004f8de0
    MOV EAX,dword ptr [EBX + 0x318]     ; 004f8de6
    CMP EAX,ESI                         ; 004f8dec
    JL 0x004f8e37                       ; 004f8dee
        ;   XREF to: 004f8e37 (CONDITIONAL_JUMP)  ; LAB_004f8e37
    MOV ECX,dword ptr [EBX + 0x314]     ; 004f8df0
    MOV dword ptr [EBX + 0x318],0x0     ; 004f8df6
    INC ECX                             ; 004f8e00
    MOV dword ptr [EBX + 0x314],ECX     ; 004f8e01
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f8e07
    MOV EAX,dword ptr [EBX + 0x314]     ; 004f8e0b
    CMP EAX,dword ptr [ESI]             ; 004f8e11
    JL 0x004f8dbc                       ; 004f8e13
        ;   XREF to: 004f8dbc (CONDITIONAL_JUMP)  ; LAB_004f8dbc
    MOV byte ptr [EBX],0x0              ; 004f8e15
        ;   Label: LAB_004f8e15
    XOR EAX,EAX                         ; 004f8e18
    POP EBP                             ; 004f8e1a
    POP EDI                             ; 004f8e1b
    POP ESI                             ; 004f8e1c
    POP EBX                             ; 004f8e1d
    RET                                 ; 004f8e1e
    MOV dword ptr [EBX + 0x314],0x0     ; 004f8e1f
        ;   Label: LAB_004f8e1f
    JMP 0x004f8dc5                      ; 004f8e29
        ;   XREF to: 004f8dc5 (UNCONDITIONAL_JUMP)  ; LAB_004f8dc5
    MOV dword ptr [EBX + 0x318],0x0     ; 004f8e2b
        ;   Label: LAB_004f8e2b
    JMP 0x004f8de0                      ; 004f8e35
        ;   XREF to: 004f8de0 (UNCONDITIONAL_JUMP)  ; LAB_004f8de0
    IMUL EAX,EAX,0x14                   ; 004f8e37
        ;   Label: LAB_004f8e37
    MOV ESI,dword ptr [EBP + 0x20c]     ; 004f8e3a
    ADD ESI,EAX                         ; 004f8e40
    PUSH 0x0                            ; 004f8e42
    MOV ECX,dword ptr [ESI]             ; 004f8e44
    PUSH ECX                            ; 004f8e46
    PUSH EDI                            ; 004f8e47
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 004f8e48
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004775b0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 004f8e4d
    TEST EAX,EAX                        ; 004f8e50
    JNZ 0x004f8e5f                      ; 004f8e52
        ;   XREF to: 004f8e5f (CONDITIONAL_JUMP)  ; LAB_004f8e5f
    INC dword ptr [EBX + 0x318]         ; 004f8e54
    JMP 0x004f8dd7                      ; 004f8e5a
        ;   XREF to: 004f8dd7 (UNCONDITIONAL_JUMP)  ; LAB_004f8dd7
    MOV EDI,EBX                         ; 004f8e5f
        ;   Label: LAB_004f8e5f
    MOV ESI,dword ptr [ESI]             ; 004f8e61
    PUSH EDI                            ; 004f8e63
    MOV AL,byte ptr [ESI]               ; 004f8e64
        ;   Label: LAB_004f8e64
    MOV byte ptr [EDI],AL               ; 004f8e66
    CMP AL,0x0                          ; 004f8e68
    JZ 0x004f8e7c                       ; 004f8e6a
        ;   XREF to: 004f8e7c (CONDITIONAL_JUMP)  ; LAB_004f8e7c
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8e6c
    ADD ESI,0x2                         ; 004f8e6f
    MOV byte ptr [EDI + 0x1],AL         ; 004f8e72
    ADD EDI,0x2                         ; 004f8e75
    CMP AL,0x0                          ; 004f8e78
    JNZ 0x004f8e64                      ; 004f8e7a
        ;   XREF to: 004f8e64 (CONDITIONAL_JUMP)  ; LAB_004f8e64
    POP EDI                             ; 004f8e7c
        ;   Label: LAB_004f8e7c
    PUSH EBX                            ; 004f8e7d
    MOV EDI,dword ptr [EBX + 0x318]     ; 004f8e7e
    PUSH EDI                            ; 004f8e84
    PUSH EBP                            ; 004f8e85
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0 ; 004f8e86
        ;   XREF to: 004f81c0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 004f8e8b
    MOV EBP,dword ptr [EBX + 0x318]     ; 004f8e90
    ADD EBP,EAX                         ; 004f8e96
    ADD ESP,0xc                         ; 004f8e98
    MOV dword ptr [EBX + 0x318],EBP     ; 004f8e9b
    POP EBP                             ; 004f8ea1
    POP EDI                             ; 004f8ea2
    POP ESI                             ; 004f8ea3
    POP EBX                             ; 004f8ea4
    RET                                 ; 004f8ea5

