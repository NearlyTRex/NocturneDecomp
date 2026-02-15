; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister crt_memory_c___memfill_FUN_00603b00(void *dest,uint replicated_value,uint count)
;
;
; XREF[1]:
;   crt_memory.c_memset_FUN_005fde40 at 005fde59
;
; Called Functions:
;   crt_memory.c___stosd_FUN_00603b37
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 00603b00
        ;   Label: crt_memory.c___memfill_FUN_00603b00
    JZ 0x00603b30                       ; 00603b02
        ;   XREF to: 00603b30 (CONDITIONAL_JUMP)  ; LAB_00603b30
    CMP byte ptr [EAX],DL               ; 00603b04
    TEST AL,0x3                         ; 00603b06
        ;   Label: LAB_00603b06
    JZ 0x00603b13                       ; 00603b08
        ;   XREF to: 00603b13 (CONDITIONAL_JUMP)  ; LAB_00603b13
    MOV byte ptr [EAX],DL               ; 00603b0a
    INC EAX                             ; 00603b0c
    ROR EDX,0x8                         ; 00603b0d
    DEC ECX                             ; 00603b10
    JNZ 0x00603b06                      ; 00603b11
        ;   XREF to: 00603b06 (CONDITIONAL_JUMP)  ; LAB_00603b06
    PUSH ECX                            ; 00603b13
        ;   Label: LAB_00603b13
    SHR ECX,0x2                         ; 00603b14
    CALL crt_memory.c___stosd_FUN_00603b37 ; 00603b17
        ;   XREF to: 00603b37 (UNCONDITIONAL_CALL)  ; void crt_memory.c___stosd_FUN_00603b37(void * dest, uint replicated_value, uint dword_count)
    POP ECX                             ; 00603b1c
    AND ECX,0x3                         ; 00603b1d
    JZ 0x00603b30                       ; 00603b20
        ;   XREF to: 00603b30 (CONDITIONAL_JUMP)  ; LAB_00603b30
    MOV byte ptr [EAX],DL               ; 00603b22
    DEC ECX                             ; 00603b24
    JZ 0x00603b30                       ; 00603b25
        ;   XREF to: 00603b30 (CONDITIONAL_JUMP)  ; LAB_00603b30
    MOV byte ptr [EAX + 0x1],DH         ; 00603b27
    DEC ECX                             ; 00603b2a
    JZ 0x00603b30                       ; 00603b2b
        ;   XREF to: 00603b30 (CONDITIONAL_JUMP)  ; LAB_00603b30
    MOV byte ptr [EAX + 0x2],DL         ; 00603b2d
    RET                                 ; 00603b30
        ;   Label: LAB_00603b30

