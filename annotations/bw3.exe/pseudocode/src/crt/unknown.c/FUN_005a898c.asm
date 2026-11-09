; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005a898c(byte *param_1,void *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a89d4 at 005a8a08
;
; Referenced Globals:
;   undefined4 DAT_006079ec
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a898c
        ;   Label: crt_unknown.c_FUN_005a898c
    PUSH ESI                            ; 005a898d
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a898e
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a8992
    PUSH 0x20                           ; 005a8996
    PUSH 0x0                            ; 005a8998
    PUSH ESI                            ; 005a899a
    INC EBX                             ; 005a899b
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005a899c
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    XOR EAX,EAX                         ; 005a89a1
    MOV AL,byte ptr [EBX + -0x1]        ; 005a89a3
    ADD ESP,0xc                         ; 005a89a6
    TEST EAX,EAX                        ; 005a89a9
    JZ 0x005a89cc                       ; 005a89ab
        ;   XREF to: 005a89cc (CONDITIONAL_JUMP)  ; LAB_005a89cc
    MOV EDX,EAX                         ; 005a89ad
        ;   Label: LAB_005a89ad
    AND EAX,0x7                         ; 005a89af
    SAR EDX,0x3                         ; 005a89b2
    MOV AL,byte ptr [EAX + 0x6079ec]    ; 005a89b5 | DAT_006079ec
    OR byte ptr [EDX + ESI*0x1],AL      ; 005a89bb
    XOR EAX,EAX                         ; 005a89be
    MOV AL,byte ptr [EBX]               ; 005a89c0
    TEST EAX,EAX                        ; 005a89c2
    JZ 0x005a89cc                       ; 005a89c4
        ;   XREF to: 005a89cc (CONDITIONAL_JUMP)  ; LAB_005a89cc
    INC EBX                             ; 005a89c6
    CMP EAX,0x5d                        ; 005a89c7
    JNZ 0x005a89ad                      ; 005a89ca
        ;   XREF to: 005a89ad (CONDITIONAL_JUMP)  ; LAB_005a89ad
    MOV EAX,EBX                         ; 005a89cc
        ;   Label: LAB_005a89cc
    POP ESI                             ; 005a89ce
    POP EBX                             ; 005a89cf
    RET                                 ; 005a89d0

