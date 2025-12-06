; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGore * core_gore.cpp_FUN_004ed730(CGore * this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_staticInit_FUN_004eb8c0 at 004eb8c5
;
; Called Functions:
;   core_gore.cpp_FUN_004ed760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed730
        ;   Label: core_gore.cpp_FUN_004ed730
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ed731
    PUSH EBX                            ; 004ed735
    CALL core_gore.cpp_FUN_004ed760     ; 004ed736 | undefined core_gore.cpp_FUN_004ed760()
        ;   XREF to: 004ed760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004ed73b
    MOV EAX,EBX                         ; 004ed73e
    POP EBX                             ; 004ed740
    RET                                 ; 004ed741

