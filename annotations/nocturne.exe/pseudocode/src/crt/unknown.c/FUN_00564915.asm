; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00564915(int *param_1)
;
;
; XREF[1]:
;   crt_memory.c___arrfini_FUN_0056494f at 0056496c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564915
        ;   Label: crt_unknown.c_FUN_00564915
    PUSH ESI                            ; 00564916
    PUSH EDI                            ; 00564917
    PUSH EBP                            ; 00564918
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564919
    MOV EBP,dword ptr [EBX + 0x4]       ; 0056491d
    MOV ESI,dword ptr [EBX]             ; 00564920
    MOV EDI,dword ptr [EBP + 0x10]      ; 00564922
    IMUL ESI,EDI                        ; 00564925
    MOV EAX,dword ptr [EBX + 0x8]       ; 00564928
    MOV EBP,dword ptr [EBP + 0xc]       ; 0056492b
    ADD ESI,EAX                         ; 0056492e
    MOV EDX,dword ptr [EBX]             ; 00564930
        ;   Label: LAB_00564930
    TEST EDX,EDX                        ; 00564932
    JA 0x0056493e                       ; 00564934
        ;   XREF to: 0056493e (CONDITIONAL_JUMP)  ; LAB_0056493e
    MOV EAX,dword ptr [EBX + 0x8]       ; 00564936
    POP EBP                             ; 00564939
    POP EDI                             ; 0056493a
    POP ESI                             ; 0056493b
    POP EBX                             ; 0056493c
    RET                                 ; 0056493d
    PUSH 0x0                            ; 0056493e
        ;   Label: LAB_0056493e
    SUB ESI,EDI                         ; 00564940
    LEA ECX,[EDX + -0x1]                ; 00564942
    PUSH ESI                            ; 00564945
    MOV dword ptr [EBX],ECX             ; 00564946
    CALL EBP                            ; 00564948
    ADD ESP,0x8                         ; 0056494a
    JMP 0x00564930                      ; 0056494d
        ;   XREF to: 00564930 (UNCONDITIONAL_JUMP)  ; LAB_00564930

