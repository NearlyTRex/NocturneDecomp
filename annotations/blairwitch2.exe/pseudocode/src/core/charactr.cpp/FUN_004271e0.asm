; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_004271e0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004271e0
        ;   Label: core_charactr.cpp_FUN_004271e0
    SUB ESP,0x18                        ; 004271e1
    MOV EAX,ESI                         ; 004271e4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004271e6
    MOV ECX,0x6                         ; 004271ea
    MOV EDI,ESP                         ; 004271ef
    LEA ESI,[ESI + 0x27f4]              ; 004271f1
    MOVSD.REP ES:EDI,ESI                ; 004271f7
    MOV ECX,0x6                         ; 004271f9
    MOV ESI,ESP                         ; 004271fe
    MOV EDI,EAX                         ; 00427200
    MOVSD.REP ES:EDI,ESI                ; 00427202
    ADD ESP,0x18                        ; 00427204
    POP EDI                             ; 00427207
    RET                                 ; 00427208

