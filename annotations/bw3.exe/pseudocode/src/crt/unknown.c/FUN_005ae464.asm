; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ae464(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a8210 at 005a8234
;   crt_unknown.c_FUN_005b1938 at 005b193e
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f3c
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079a0]         ; 005ae464 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: crt_unknown.c_FUN_005ae464
    MOV EAX,dword ptr [EAX + 0x54]      ; 005ae46a
    TEST EAX,EAX                        ; 005ae46d
    JZ 0x005ae478                       ; 005ae46f
        ;   XREF to: 005ae478 (CONDITIONAL_JUMP)  ; LAB_005ae478
    MOV EAX,dword ptr [EAX]             ; 005ae471
    XOR EDX,EDX                         ; 005ae473
    MOV dword ptr FS:[EDX],EAX          ; 005ae475
    CALL dword ptr [0x006079a0]         ; 005ae478 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: LAB_005ae478
    MOV dword ptr [EAX + 0x54],0x0      ; 005ae47e
    RET                                 ; 005ae485

