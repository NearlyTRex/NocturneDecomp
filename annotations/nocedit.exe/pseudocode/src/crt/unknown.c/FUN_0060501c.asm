; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_0060501c(byte *param_1,void *param_2)
;
;
; XREF[1]:
;   crt_stdio.c_scanf_scanset_FUN_00605064 at 00605098
;
; Referenced Globals:
;   undefined4 DAT_00685030
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060501c
        ;   Label: crt_unknown.c_FUN_0060501c
    PUSH ESI                            ; 0060501d
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060501e
    MOV ESI,dword ptr [ESP + 0x10]      ; 00605022
    PUSH 0x20                           ; 00605026
    PUSH 0x0                            ; 00605028
    PUSH ESI                            ; 0060502a
    INC EBX                             ; 0060502b
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060502c
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    XOR EAX,EAX                         ; 00605031
    MOV AL,byte ptr [EBX + -0x1]        ; 00605033
    ADD ESP,0xc                         ; 00605036
    TEST EAX,EAX                        ; 00605039
    JZ 0x0060505c                       ; 0060503b
        ;   XREF to: 0060505c (CONDITIONAL_JUMP)  ; LAB_0060505c
    MOV EDX,EAX                         ; 0060503d
        ;   Label: LAB_0060503d
    AND EAX,0x7                         ; 0060503f
    SAR EDX,0x3                         ; 00605042
    MOV AL,byte ptr [EAX + 0x685030]    ; 00605045 | DAT_00685030
    OR byte ptr [EDX + ESI*0x1],AL      ; 0060504b
    XOR EAX,EAX                         ; 0060504e
    MOV AL,byte ptr [EBX]               ; 00605050
    TEST EAX,EAX                        ; 00605052
    JZ 0x0060505c                       ; 00605054
        ;   XREF to: 0060505c (CONDITIONAL_JUMP)  ; LAB_0060505c
    INC EBX                             ; 00605056
    CMP EAX,0x5d                        ; 00605057
    JNZ 0x0060503d                      ; 0060505a
        ;   XREF to: 0060503d (CONDITIONAL_JUMP)  ; LAB_0060503d
    MOV EAX,EBX                         ; 0060505c
        ;   Label: LAB_0060505c
    POP ESI                             ; 0060505e
    POP EBX                             ; 0060505f
    RET                                 ; 00605060

