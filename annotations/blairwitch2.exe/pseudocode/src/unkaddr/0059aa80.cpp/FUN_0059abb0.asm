; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059aa80_cpp_FUN_0059abb0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4e20 at 004e4e23
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4d7e
;
; Referenced Globals:
;   undefined4 DAT_026677b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059abb0
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059abb0
    MOV EDX,dword ptr [0x026677b4]      ; 0059abb1 | DAT_026677b4
    XOR EBX,EBX                         ; 0059abb7
    TEST EDX,EDX                        ; 0059abb9
    JLE 0x0059abde                      ; 0059abbb
        ;   XREF to: 0059abde (CONDITIONAL_JUMP)  ; LAB_0059abde
    PUSH ESI                            ; 0059abbd
    XOR ESI,ESI                         ; 0059abbe
    MOV EAX,dword ptr [ESI + 0x26677b8] ; 0059abc0
        ;   Label: LAB_0059abc0
    PUSH EAX                            ; 0059abc6
    MOV EDX,dword ptr [EAX]             ; 0059abc7
    ADD ESI,0x4                         ; 0059abc9
    INC EBX                             ; 0059abcc
    CALL dword ptr [EDX + 0x8]          ; 0059abcd
    MOV ECX,dword ptr [0x026677b4]      ; 0059abd0 | DAT_026677b4
    ADD ESP,0x4                         ; 0059abd6
    CMP EBX,ECX                         ; 0059abd9
    JL 0x0059abc0                       ; 0059abdb
        ;   XREF to: 0059abc0 (CONDITIONAL_JUMP)  ; LAB_0059abc0
    POP ESI                             ; 0059abdd
    POP EBX                             ; 0059abde
        ;   Label: LAB_0059abde
    RET                                 ; 0059abdf

