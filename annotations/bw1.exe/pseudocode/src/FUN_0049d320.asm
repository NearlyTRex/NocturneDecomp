; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d320(int *param_1)
;
;
; XREF[1]:
;   FUN_0049cf60 at 0049cf69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d320
        ;   Label: FUN_0049d320
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049d321
    MOV ECX,dword ptr [EAX + 0x8]       ; 0049d325
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049d328
    MOV EBX,dword ptr [EAX]             ; 0049d32b
    SUB EDX,ECX                         ; 0049d32d
    CMP EDX,EBX                         ; 0049d32f
    JL 0x0049d33a                       ; 0049d331
        ;   XREF to: 0049d33a (CONDITIONAL_JUMP)  ; LAB_0049d33a
    CMP dword ptr [EAX],0x0             ; 0049d333
    JL 0x0049d343                       ; 0049d336
        ;   XREF to: 0049d343 (CONDITIONAL_JUMP)  ; LAB_0049d343
    POP EBX                             ; 0049d338
    RET                                 ; 0049d339
    MOV dword ptr [EAX],EDX             ; 0049d33a
        ;   Label: LAB_0049d33a
    CMP dword ptr [EAX],0x0             ; 0049d33c
    JL 0x0049d343                       ; 0049d33f
        ;   XREF to: 0049d343 (CONDITIONAL_JUMP)  ; LAB_0049d343
    POP EBX                             ; 0049d341
    RET                                 ; 0049d342
    MOV dword ptr [EAX],0x0             ; 0049d343
        ;   Label: LAB_0049d343
    POP EBX                             ; 0049d349
    RET                                 ; 0049d34a

