; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CStrList_clear_FUN_004a2b10(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_CScript_FreeSomething1_FUN_00559870 at 0055987a
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770 at 004a579f
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 at 004a2a54
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623676
;   TerminatedCString s_shape_edittool_cpp_0062368c
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004a2b10
        ;   Label: shape_edittool.cpp_CStrList_clear_FUN_004a2b10
    PUSH EBP                            ; 004a2b11
    MOV EDI,dword ptr [ESP + 0xc]       ; 004a2b12
    CMP dword ptr [EDI + 0x8],0x0       ; 004a2b16
    JZ 0x004a2b68                       ; 004a2b1a
        ;   XREF to: 004a2b68 (CONDITIONAL_JUMP)  ; LAB_004a2b68
    PUSH ESI                            ; 004a2b1c
    PUSH EBX                            ; 004a2b1d
    MOV ECX,dword ptr [EDI]             ; 004a2b1e
    XOR ESI,ESI                         ; 004a2b20
    TEST ECX,ECX                        ; 004a2b22
    JLE 0x004a2b50                      ; 004a2b24
        ;   XREF to: 004a2b50 (CONDITIONAL_JUMP)  ; LAB_004a2b50
    XOR EBX,EBX                         ; 004a2b26
    MOV EAX,dword ptr [EDI + 0x8]       ; 004a2b28
        ;   Label: LAB_004a2b28
    ADD EAX,EBX                         ; 004a2b2b
    MOV EDX,dword ptr [EAX]             ; 004a2b2d
    TEST EDX,EDX                        ; 004a2b2f
    JZ 0x004a2b46                       ; 004a2b31
        ;   XREF to: 004a2b46 (CONDITIONAL_JUMP)  ; LAB_004a2b46
    PUSH 0xb0b                          ; 004a2b33
    PUSH 0x623676                       ; 004a2b38 | = "..\\shape\\edittool.cpp"
    PUSH EDX                            ; 004a2b3d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004a2b3e
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a2b43
    INC ESI                             ; 004a2b46
        ;   Label: LAB_004a2b46
    MOV EBP,dword ptr [EDI]             ; 004a2b47
    ADD EBX,0x4                         ; 004a2b49
    CMP ESI,EBP                         ; 004a2b4c
    JL 0x004a2b28                       ; 004a2b4e
        ;   XREF to: 004a2b28 (CONDITIONAL_JUMP)  ; LAB_004a2b28
    PUSH 0xb0d                          ; 004a2b50
        ;   Label: LAB_004a2b50
    PUSH 0x62368c                       ; 004a2b55 | = "..\\shape\\edittool.cpp"
    MOV EAX,dword ptr [EDI + 0x8]       ; 004a2b5a
    PUSH EAX                            ; 004a2b5d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004a2b5e
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a2b63
    POP EBX                             ; 004a2b66
    POP ESI                             ; 004a2b67
    MOV dword ptr [EDI + 0x8],0x0       ; 004a2b68
        ;   Label: LAB_004a2b68
    MOV dword ptr [EDI + 0x4],0x0       ; 004a2b6f
    MOV dword ptr [EDI],0x0             ; 004a2b76
    POP EBP                             ; 004a2b7c
    POP EDI                             ; 004a2b7d
    RET                                 ; 004a2b7e

