; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005a3380(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_stdio.c_fgetc_FUN_005a32b0 at 005a3315
;
; Called Functions:
;   crt_unknown.c_FUN_005a33b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3380
        ;   Label: crt_unknown.c_FUN_005a3380
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3381
    PUSH EBX                            ; 005a3385
    CALL crt_unknown.c_FUN_005a33b0     ; 005a3386
        ;   XREF to: 005a33b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a33b0()
    ADD ESP,0x4                         ; 005a338b
    TEST EAX,EAX                        ; 005a338e
    JNZ 0x005a3399                      ; 005a3390
        ;   XREF to: 005a3399 (CONDITIONAL_JUMP)  ; LAB_005a3399
    MOV EAX,0xffffffff                  ; 005a3392
    POP EBX                             ; 005a3397
    RET                                 ; 005a3398
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a3399
        ;   Label: LAB_005a3399
    MOV ECX,dword ptr [EBX]             ; 005a339c
    DEC EDX                             ; 005a339e
    INC ECX                             ; 005a339f
    MOV dword ptr [EBX + 0x4],EDX       ; 005a33a0
    MOV dword ptr [EBX],ECX             ; 005a33a3
    MOV AL,byte ptr [ECX + -0x1]        ; 005a33a5
    AND EAX,0xff                        ; 005a33a8
    POP EBX                             ; 005a33ad
    RET                                 ; 005a33ae

