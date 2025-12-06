; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_morph.cpp_FUN_0052b470(void)
;
;
; XREF[1]:
;   core_biggs.cpp_FUN_00418680 at 004186cf
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_0052a510
;   core_morph.cpp_CMorphModel_FUN_0052a8d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b470
        ;   Label: core_morph.cpp_FUN_0052b470
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052b471
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b475
    SUB EAX,EDX                         ; 0052b47c
    SHL EAX,0x6                         ; 0052b47e
    ADD EAX,EDX                         ; 0052b481
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052b483
    SHL EAX,0x3                         ; 0052b487
    ADD EBX,EAX                         ; 0052b48a
    PUSH EBX                            ; 0052b48c
    CALL core_morph.cpp_CMorphModel_free_FUN_0052a510 ; 0052b48d | void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)
        ;   XREF to: 0052a510 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052b492
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052b495
    PUSH EDX                            ; 0052b499
    MOV ECX,dword ptr [ESP + 0x14]      ; 0052b49a
    PUSH ECX                            ; 0052b49e
    PUSH EBX                            ; 0052b49f
    CALL core_morph.cpp_CMorphModel_FUN_0052a8d0 ; 0052b4a0 | void core_morph.cpp_CMorphModel_FUN_0052a8d0(CMorphModel * this_ptr)
        ;   XREF to: 0052a8d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052b4a5
    POP EBX                             ; 0052b4a8
    RET                                 ; 0052b4a9

