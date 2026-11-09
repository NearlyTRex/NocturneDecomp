; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_schngeis_cpp_FUN_005a3ba0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_schnell_death_005f01ee
;   undefined4 DAT_005f01fe
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_FUN_00490f80
;   unkafter_basicene.cpp_FUN_0059f800
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3ba0
        ;   Label: core_schngeis.cpp_FUN_005a3ba0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a3ba4
    FLD float ptr [EDX + 0x25a8]        ; 005a3ba8
    FSUB float ptr [ECX + 0x4]          ; 005a3bae
    FCOMP double ptr [0x005f01fe]       ; 005a3bb1 | DAT_005f01fe
    FNSTSW AX                           ; 005a3bb7
    SAHF                                ; 005a3bb9
    JA 0x005a3bdd                       ; 005a3bba
        ;   XREF to: 005a3bdd (CONDITIONAL_JUMP)  ; LAB_005a3bdd
    PUSH 0x1                            ; 005a3bbc
    PUSH 0x5f01ee                       ; 005a3bbe | = "schnell_death"
    MOV dword ptr [EDX + 0x25a8],0x41200000 ; 005a3bc3
    MOV EDX,dword ptr [0x006141f0]      ; 005a3bcd | DAT_006141f0
    PUSH EDX                            ; 005a3bd3
    CALL core_event.cpp_FUN_00490f80    ; 005a3bd4
        ;   XREF to: 00490f80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_00490f80(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 005a3bd9
    RET                                 ; 005a3bdc
    PUSH ECX                            ; 005a3bdd
        ;   Label: LAB_005a3bdd
    PUSH EDX                            ; 005a3bde
    CALL unkafter_basicene.cpp_FUN_0059f800 ; 005a3bdf
        ;   XREF to: 0059f800 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f800()
    ADD ESP,0x8                         ; 005a3be4
    RET                                 ; 005a3be7

