; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdio.c_store_count_FUN_00604fb0(scanf_state_t * state, va_list_t * args, int chars_consumed)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
; va_list_t *      Stack[0x8]:4   args
; int              Stack[0xc]:4   chars_consumed
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604bf8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604fb0
        ;   Label: crt_stdio.c_store_count_FUN_00604fb0
    PUSH ESI                            ; 00604fb1
    PUSH EDI                            ; 00604fb2
    PUSH ES                             ; 00604fb3
    MOV EDX,dword ptr [ESP + 0x14]      ; 00604fb4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00604fb8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00604fbc
    MOV CL,byte ptr [EDX + 0x10]        ; 00604fc0
    TEST CL,0x1                         ; 00604fc3
    JZ 0x00605015                       ; 00604fc6 | LAB_00605015
        ;   XREF to: 00605015 (CONDITIONAL_JUMP)
    TEST CL,0x4                         ; 00604fc8
    JZ 0x00604fd9                       ; 00604fcb | LAB_00604fd9
        ;   XREF to: 00604fd9 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX]             ; 00604fcd
    ADD EDI,0x8                         ; 00604fcf
    MOV dword ptr [EAX],EDI             ; 00604fd2
    LES EAX,[EDI + -0x8]                ; 00604fd4
    JMP 0x00604ffe                      ; 00604fd7 | LAB_00604ffe
        ;   XREF to: 00604ffe (UNCONDITIONAL_JUMP)
    TEST CL,0x8                         ; 00604fd9
        ;   Label: LAB_00604fd9
    JZ 0x00604fee                       ; 00604fdc | LAB_00604fee
        ;   XREF to: 00604fee (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX]             ; 00604fde
    ADD ESI,0x4                         ; 00604fe0
    MOV CX,DS                           ; 00604fe3
    MOV dword ptr [EAX],ESI             ; 00604fe5
    MOV ES,CX                           ; 00604fe7
    MOV EAX,dword ptr [ESI + -0x4]      ; 00604fe9
    JMP 0x00604ffe                      ; 00604fec | LAB_00604ffe
        ;   XREF to: 00604ffe (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 00604fee
        ;   Label: LAB_00604fee
    ADD ECX,0x4                         ; 00604ff0
    MOV dword ptr [EAX],ECX             ; 00604ff3
    MOV EAX,ECX                         ; 00604ff5
    MOV CX,DS                           ; 00604ff7
    MOV ES,CX                           ; 00604ff9
    MOV EAX,dword ptr [EAX + -0x4]      ; 00604ffb
    MOV CH,byte ptr [EDX + 0x10]        ; 00604ffe
        ;   Label: LAB_00604ffe
    TEST CH,0x10                        ; 00605001
    JZ 0x0060500f                       ; 00605004 | LAB_0060500f
        ;   XREF to: 0060500f (CONDITIONAL_JUMP)
    MOV word ptr ES:[EAX],BX            ; 00605006
    POP ES                              ; 0060500a
    POP EDI                             ; 0060500b
    POP ESI                             ; 0060500c
    POP EBX                             ; 0060500d
    RET                                 ; 0060500e
    TEST CH,0x20                        ; 0060500f
        ;   Label: LAB_0060500f
    MOV dword ptr ES:[EAX],EBX          ; 00605012
    POP ES                              ; 00605015
        ;   Label: LAB_00605015
    POP EDI                             ; 00605016
    POP ESI                             ; 00605017
    POP EBX                             ; 00605018
    RET                                 ; 00605019

