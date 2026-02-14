; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_005598f0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_script.cpp_CScript_buildParsedLines_FUN_0055a370 at 0055a37c
;   core_script.cpp_CScript_clear_FUN_00559870 at 00559883
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_006416fa
;   TerminatedCString s_core_script_cpp_0064170d
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005598f0
        ;   Label: core_script.cpp_CScript_freeParsedLines_FUN_005598f0
    PUSH EBP                            ; 005598f1
    MOV EDI,dword ptr [ESP + 0xc]       ; 005598f2
    CMP dword ptr [EDI + 0x34],0x0      ; 005598f6
    JZ 0x00559952                       ; 005598fa
        ;   XREF to: 00559952 (CONDITIONAL_JUMP)  ; LAB_00559952
    PUSH ESI                            ; 005598fc
    PUSH EBX                            ; 005598fd
    MOV ECX,dword ptr [EDI + 0x30]      ; 005598fe
    XOR ESI,ESI                         ; 00559901
    TEST ECX,ECX                        ; 00559903
    JLE 0x00559933                      ; 00559905
        ;   XREF to: 00559933 (CONDITIONAL_JUMP)  ; LAB_00559933
    XOR EBX,EBX                         ; 00559907
    MOV EAX,dword ptr [EDI + 0x34]      ; 00559909
        ;   Label: LAB_00559909
    ADD EAX,EBX                         ; 0055990c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0055990e
    TEST EDX,EDX                        ; 00559911
    JZ 0x00559928                       ; 00559913
        ;   XREF to: 00559928 (CONDITIONAL_JUMP)  ; LAB_00559928
    PUSH 0x1ce                          ; 00559915
    PUSH 0x6416fa                       ; 0055991a | = "..\\core\\script.cpp"
    PUSH EDX                            ; 0055991f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00559920
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00559925
    INC ESI                             ; 00559928
        ;   Label: LAB_00559928
    MOV EBP,dword ptr [EDI + 0x30]      ; 00559929
    ADD EBX,0x8                         ; 0055992c
    CMP ESI,EBP                         ; 0055992f
    JL 0x00559909                       ; 00559931
        ;   XREF to: 00559909 (CONDITIONAL_JUMP)  ; LAB_00559909
    PUSH 0x1d0                          ; 00559933
        ;   Label: LAB_00559933
    PUSH 0x64170d                       ; 00559938 | = "..\\core\\script.cpp"
    MOV EAX,dword ptr [EDI + 0x34]      ; 0055993d
    PUSH EAX                            ; 00559940
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00559941
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00559946
    MOV dword ptr [EDI + 0x34],0x0      ; 00559949
    POP EBX                             ; 00559950
    POP ESI                             ; 00559951
    MOV dword ptr [EDI + 0x30],0x0      ; 00559952
        ;   Label: LAB_00559952
    POP EBP                             ; 00559959
    POP EDI                             ; 0055995a
    RET                                 ; 0055995b

