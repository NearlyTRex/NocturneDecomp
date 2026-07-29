; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_shouldNeverBeCalled2_FUN_00548ea0(int unknown1,int unknown2)
;
; Parameters:
; int              Stack[0x4]:4   unknown1
; int              Stack[0x8]:4   unknown2
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596c96
;   TerminatedCString s_Should_never_be_called_00596cad
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x596c96                    ; 00548ea0 | = "..\\support\\trisock.cpp"
        ;   Label: support_trisock.cpp_shouldNeverBeCalled2_FUN_00548ea0
    MOV ECX,0xd1                        ; 00548ea5
    PUSH 0x596cad                       ; 00548eaa | = "Should never be called!"
    MOV dword ptr [0x01cc4800],EDX      ; 00548eaf | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00548eb5 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00548ebb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00548ec0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548ec3
    RET                                 ; 00548ec7

