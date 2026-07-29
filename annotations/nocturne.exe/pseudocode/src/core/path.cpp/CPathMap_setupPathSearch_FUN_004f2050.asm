; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_004f2050(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01e312f4
;   undefined4 DAT_01e3161c
;   undefined4 DAT_01e31620
;   undefined4 DAT_01e31624
;   undefined4 DAT_01e31628
;
; Called Functions:
;   core_path.cpp_CPathMap_searchGrid_FUN_004f20a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2050
        ;   Label: core_path.cpp_CPathMap_setupPathSearch_FUN_004f2050
    PUSH EDI                            ; 004f2051
    PUSH EBP                            ; 004f2052
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f2053
    MOV EDX,0x64                        ; 004f2057
    MOV ECX,0x63                        ; 004f205c
    MOV EBX,0x32                        ; 004f2061
    MOV EDI,0x2                         ; 004f2066
    MOV EBP,dword ptr [EAX + 0x10]      ; 004f206b
    MOV dword ptr [0x01e31628],EDX      ; 004f206e | DAT_01e31628
    PUSH EBP                            ; 004f2074
    MOV dword ptr [0x01e31624],ECX      ; 004f2075 | DAT_01e31624
    MOV dword ptr [0x01e3161c],EBX      ; 004f207b | DAT_01e3161c
    PUSH EAX                            ; 004f2081
    MOV dword ptr [0x01e31620],EBX      ; 004f2082 | DAT_01e31620
    MOV dword ptr [0x01e312f4],EDI      ; 004f2088 | DAT_01e312f4
    CALL core_path.cpp_CPathMap_searchGrid_FUN_004f20a0 ; 004f208e
        ;   XREF to: 004f20a0 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_004f20a0(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 004f2093
    POP EBP                             ; 004f2096
    POP EDI                             ; 004f2097
    POP EBX                             ; 004f2098
    RET                                 ; 004f2099

