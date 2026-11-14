; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_005140f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e4fed4
;   undefined4 DAT_01e501fc
;   undefined4 DAT_01e50200
;   undefined4 DAT_01e50204
;   undefined4 DAT_01e50208
;
; Called Functions:
;   core_path.cpp_CPathMap_searchGrid_FUN_00514140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005140f0
        ;   Label: core_path.cpp_FUN_005140f0
    PUSH EDI                            ; 005140f1
    PUSH EBP                            ; 005140f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005140f3
    MOV EDX,0x64                        ; 005140f7
    MOV ECX,0x63                        ; 005140fc
    MOV EBX,0x32                        ; 00514101
    MOV EDI,0x2                         ; 00514106
    MOV EBP,dword ptr [EAX + 0x10]      ; 0051410b
    MOV dword ptr [0x01e50208],EDX      ; 0051410e | DAT_01e50208
    PUSH EBP                            ; 00514114
    MOV dword ptr [0x01e50204],ECX      ; 00514115 | DAT_01e50204
    MOV dword ptr [0x01e501fc],EBX      ; 0051411b | DAT_01e501fc
    PUSH EAX                            ; 00514121
    MOV dword ptr [0x01e50200],EBX      ; 00514122 | DAT_01e50200
    MOV dword ptr [0x01e4fed4],EDI      ; 00514128 | DAT_01e4fed4
    CALL core_path.cpp_CPathMap_searchGrid_FUN_00514140 ; 0051412e
        ;   XREF to: 00514140 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_00514140(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 00514133
    POP EBP                             ; 00514136
    POP EDI                             ; 00514137
    POP EBX                             ; 00514138
    RET                                 ; 00514139

