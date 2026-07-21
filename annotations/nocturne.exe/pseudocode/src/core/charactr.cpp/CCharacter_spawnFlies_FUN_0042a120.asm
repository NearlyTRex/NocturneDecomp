; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_CCharacter_spawnFlies_FUN_0042a120(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_0040b090
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042a120
        ;   Label: core_charactr.cpp_CCharacter_spawnFlies_FUN_0042a120
    CMP dword ptr [EAX + 0x2f08],0x0    ; 0042a124
    JZ 0x0042a12e                       ; 0042a12b
        ;   XREF to: 0042a12e (CONDITIONAL_JUMP)  ; LAB_0042a12e
    RET                                 ; 0042a12d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042a12e
        ;   Label: LAB_0042a12e
    PUSH dword ptr [ESP + 0xc]          ; 0042a132
    PUSH ECX                            ; 0042a136
    PUSH EAX                            ; 0042a137
    CALL FUN_0040b090                   ; 0042a138
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b090()
    ADD ESP,0xc                         ; 0042a13d
    RET                                 ; 0042a140

