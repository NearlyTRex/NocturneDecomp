; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bb160(int *param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bbc70 at 004bbc99
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb160
        ;   Label: core_fldnotes.cpp_FUN_004bb160
    PUSH EDI                            ; 004bb161
    MOV EDI,dword ptr [ESP + 0xc]       ; 004bb162
    MOV EDX,dword ptr [EDI]             ; 004bb166
    XOR EBX,EBX                         ; 004bb168
    TEST EDX,EDX                        ; 004bb16a
    JLE 0x004bb189                      ; 004bb16c
        ;   XREF to: 004bb189 (CONDITIONAL_JUMP)  ; LAB_004bb189
    PUSH ESI                            ; 004bb16e
    MOV ESI,EDI                         ; 004bb16f
    MOV EAX,dword ptr [ESI + 0x4]       ; 004bb171
        ;   Label: LAB_004bb171
    PUSH EAX                            ; 004bb174
    MOV EDX,dword ptr [EAX + 0x14]      ; 004bb175
    ADD ESI,0x4                         ; 004bb178
    INC EBX                             ; 004bb17b
    CALL dword ptr [EDX + 0x4]          ; 004bb17c
    MOV ECX,dword ptr [EDI]             ; 004bb17f
    ADD ESP,0x4                         ; 004bb181
    CMP EBX,ECX                         ; 004bb184
    JL 0x004bb171                       ; 004bb186
        ;   XREF to: 004bb171 (CONDITIONAL_JUMP)  ; LAB_004bb171
    POP ESI                             ; 004bb188
    POP EDI                             ; 004bb189
        ;   Label: LAB_004bb189
    POP EBX                             ; 004bb18a
    RET                                 ; 004bb18b

