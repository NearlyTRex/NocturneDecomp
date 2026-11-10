; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_demnfolk_cpp_FUN_00458180(int param_1)
;
;
; XREF[1]:
;   core_hostage.cpp_CDemnfolk_processDamage_FUN_00458950 at 004589f3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458180
        ;   Label: unkafter_demnfolk.cpp_FUN_00458180
    MOV EBX,dword ptr [ESP + 0x8]       ; 00458181
    PUSH 0x0                            ; 00458185
    PUSH 0x0                            ; 00458187
    MOV EAX,dword ptr [EBX + 0x154]     ; 00458189
    PUSH EBX                            ; 0045818f
    MOV dword ptr [EBX + 0xd064],0x0    ; 00458190
    CALL dword ptr [EAX + 0x128]        ; 0045819a
    ADD ESP,0xc                         ; 004581a0
    PUSH 0x0                            ; 004581a3
    PUSH 0x1                            ; 004581a5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004581a7
    PUSH EBX                            ; 004581ad
    CALL dword ptr [EAX + 0x128]        ; 004581ae
    ADD ESP,0xc                         ; 004581b4
    POP EBX                             ; 004581b7
    RET                                 ; 004581b8

