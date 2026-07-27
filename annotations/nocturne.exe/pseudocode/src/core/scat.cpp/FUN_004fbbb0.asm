; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_scat_cpp_FUN_004fbbb0(int param_1)
;
;
; Referenced Globals:
;   undefined4 caseD_8
;   undefined1* switchdataD_004fbb8c = 004fbbca
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fbbb0
        ;   Label: core_scat.cpp_FUN_004fbbb0
    TEST EAX,EAX                        ; 004fbbb4
    JZ 0x004fbbcf                       ; 004fbbb6
        ;   XREF to: 004fbbcf (CONDITIONAL_JUMP)  ; LAB_004fbbcf
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 004fbbb8
    CMP EAX,0x8                         ; 004fbbbe
    JA 0x004fbbca                       ; 004fbbc1
        ;   XREF to: 004fbbca (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x4fbb8c]  ; 004fbbc3 | caseD_7 | caseD_8 | switchdataD_004fbb8c
        ;   Label: switchD
    MOV EAX,0x2                         ; 004fbbca
        ;   Label: caseD_0
    RET                                 ; 004fbbcf
        ;   Label: LAB_004fbbcf

