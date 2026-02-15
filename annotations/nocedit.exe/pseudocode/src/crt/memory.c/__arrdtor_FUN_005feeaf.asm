; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___arrdtor_FUN_005feeaf(WatcomTypeArrayInfo *destroy_info)
;
; Parameters:
; WatcomTypeArrayInfo * Stack[0x4]:4   destroy_info
;
; XREF[1]:
;   crt_memory.c___arrfini_FUN_005feee9 at 005fef06
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005feeaf
        ;   Label: crt_memory.c___arrdtor_FUN_005feeaf
    PUSH ESI                            ; 005feeb0
    PUSH EDI                            ; 005feeb1
    PUSH EBP                            ; 005feeb2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005feeb3
    MOV EBP,dword ptr [EBX + 0x4]       ; 005feeb7
    MOV ESI,dword ptr [EBX]             ; 005feeba
    MOV EDI,dword ptr [EBP + 0x10]      ; 005feebc
    IMUL ESI,EDI                        ; 005feebf
    MOV EAX,dword ptr [EBX + 0x8]       ; 005feec2
    MOV EBP,dword ptr [EBP + 0xc]       ; 005feec5
    ADD ESI,EAX                         ; 005feec8
    MOV EDX,dword ptr [EBX]             ; 005feeca
        ;   Label: LAB_005feeca
    TEST EDX,EDX                        ; 005feecc
    JA 0x005feed8                       ; 005feece
        ;   XREF to: 005feed8 (CONDITIONAL_JUMP)  ; LAB_005feed8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005feed0
    POP EBP                             ; 005feed3
    POP EDI                             ; 005feed4
    POP ESI                             ; 005feed5
    POP EBX                             ; 005feed6
    RET                                 ; 005feed7
    PUSH 0x0                            ; 005feed8
        ;   Label: LAB_005feed8
    SUB ESI,EDI                         ; 005feeda
    LEA ECX,[EDX + -0x1]                ; 005feedc
    PUSH ESI                            ; 005feedf
    MOV dword ptr [EBX],ECX             ; 005feee0
    CALL EBP                            ; 005feee2
    ADD ESP,0x8                         ; 005feee4
    JMP 0x005feeca                      ; 005feee7
        ;   XREF to: 005feeca (UNCONDITIONAL_JUMP)  ; LAB_005feeca

