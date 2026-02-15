; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_free_FUN_004728b0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_CDemonLight_dtor_FUN_00472760 at 00472774
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0 at 004727ca
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061eec3
;   TerminatedCString s_core_dlight_cpp_0061eed6
;   TerminatedCString s_core_dlight_cpp_0061eee9
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004728b0
        ;   Label: core_dlight.cpp_CDemonLight_free_FUN_004728b0
    PUSH ESI                            ; 004728b1
    PUSH EBP                            ; 004728b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004728b3
    CMP dword ptr [EBX + 0x2f94],0x0    ; 004728b7
    JNZ 0x004728fe                      ; 004728be
        ;   XREF to: 004728fe (CONDITIONAL_JUMP)  ; LAB_004728fe
    PUSH EBX                            ; 004728c0
        ;   Label: LAB_004728c0
    CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50 ; 004728c1
        ;   XREF to: 00472a50 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight * this_ptr)
    MOV ESI,dword ptr [EBX + 0x2fa0]    ; 004728c6
    ADD ESP,0x4                         ; 004728cc
    TEST ESI,ESI                        ; 004728cf
    JZ 0x004728f0                       ; 004728d1
        ;   XREF to: 004728f0 (CONDITIONAL_JUMP)  ; LAB_004728f0
    PUSH 0x8c                           ; 004728d3
    PUSH 0x61eed6                       ; 004728d8 | = "..\\core\\dlight.cpp"
    PUSH ESI                            ; 004728dd
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004728de
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004728e3
    MOV dword ptr [EBX + 0x2fa0],0x0    ; 004728e6
    MOV EBP,dword ptr [EBX + 0x1c6c]    ; 004728f0
        ;   Label: LAB_004728f0
    TEST EBP,EBP                        ; 004728f6
    JNZ 0x0047292d                      ; 004728f8
        ;   XREF to: 0047292d (CONDITIONAL_JUMP)  ; LAB_0047292d
    POP EBP                             ; 004728fa
    POP ESI                             ; 004728fb
    POP EBX                             ; 004728fc
    RET                                 ; 004728fd
    PUSH 0x84                           ; 004728fe
        ;   Label: LAB_004728fe
    PUSH 0x61eec3                       ; 00472903 | = "..\\core\\dlight.cpp"
    MOV ECX,dword ptr [EBX + 0x2f98]    ; 00472908
    PUSH ECX                            ; 0047290e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0047290f
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    MOV dword ptr [EBX + 0x2f94],0x0    ; 00472914
    ADD ESP,0xc                         ; 0047291e
    MOV dword ptr [EBX + 0x2f98],0x0    ; 00472921
    JMP 0x004728c0                      ; 0047292b
        ;   XREF to: 004728c0 (UNCONDITIONAL_JUMP)  ; LAB_004728c0
    PUSH 0x91                           ; 0047292d
        ;   Label: LAB_0047292d
    PUSH 0x61eee9                       ; 00472932 | = "..\\core\\dlight.cpp"
    PUSH EBP                            ; 00472937
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00472938
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0047293d
    MOV dword ptr [EBX + 0x1c6c],0x0    ; 00472940
    POP EBP                             ; 0047294a
    POP ESI                             ; 0047294b
    POP EBX                             ; 0047294c
    RET                                 ; 0047294d

