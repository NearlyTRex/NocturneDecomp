; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00473c50(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_CScript_FUN_004fe500 at 004fe509
;   shape_edittool.cpp_CStrList_dtor_FUN_00473b80 at 00473b94
;   shape_edittool.cpp_FUN_00476160 at 0047617a
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00473c50
        ;   Label: shape_edittool.cpp_CStrList_clear_FUN_00473c50
    PUSH EBP                            ; 00473c51
    MOV EDI,dword ptr [ESP + 0xc]       ; 00473c52
    CMP dword ptr [EDI + 0x8],0x0       ; 00473c56
    JZ 0x00473c94                       ; 00473c5a
        ;   XREF to: 00473c94 (CONDITIONAL_JUMP)  ; LAB_00473c94
    PUSH ESI                            ; 00473c5c
    PUSH EBX                            ; 00473c5d
    MOV ECX,dword ptr [EDI]             ; 00473c5e
    XOR EBX,EBX                         ; 00473c60
    TEST ECX,ECX                        ; 00473c62
    JLE 0x00473c86                      ; 00473c64
        ;   XREF to: 00473c86 (CONDITIONAL_JUMP)  ; LAB_00473c86
    XOR ESI,ESI                         ; 00473c66
    MOV EAX,dword ptr [EDI + 0x8]       ; 00473c68
        ;   Label: LAB_00473c68
    ADD EAX,ESI                         ; 00473c6b
    MOV EDX,dword ptr [EAX]             ; 00473c6d
    TEST EDX,EDX                        ; 00473c6f
    JZ 0x00473c7c                       ; 00473c71
        ;   XREF to: 00473c7c (CONDITIONAL_JUMP)  ; LAB_00473c7c
    PUSH EDX                            ; 00473c73
    CALL crt_memory.c_free_FUN_005638d0 ; 00473c74
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 00473c79
    INC EBX                             ; 00473c7c
        ;   Label: LAB_00473c7c
    MOV EBP,dword ptr [EDI]             ; 00473c7d
    ADD ESI,0x4                         ; 00473c7f
    CMP EBX,EBP                         ; 00473c82
    JL 0x00473c68                       ; 00473c84
        ;   XREF to: 00473c68 (CONDITIONAL_JUMP)  ; LAB_00473c68
    MOV EAX,dword ptr [EDI + 0x8]       ; 00473c86
        ;   Label: LAB_00473c86
    PUSH EAX                            ; 00473c89
    CALL crt_memory.c_free_FUN_005638d0 ; 00473c8a
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 00473c8f
    POP EBX                             ; 00473c92
    POP ESI                             ; 00473c93
    MOV dword ptr [EDI + 0x8],0x0       ; 00473c94
        ;   Label: LAB_00473c94
    MOV dword ptr [EDI + 0x4],0x0       ; 00473c9b
    MOV dword ptr [EDI],0x0             ; 00473ca2
    POP EBP                             ; 00473ca8
    POP EDI                             ; 00473ca9
    RET                                 ; 00473caa

