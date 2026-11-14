; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005afddc(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005afe50 at 005afe50
;   crt_unknown.c_FUN_005afe5c at 005afe5c
;
; Referenced Globals:
;   void* PTR_CreateFileA_005b3524 = 001b3c7a
;   TerminatedCString s_conin_005daec0
;   TerminatedCString s_conout_005daec8
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   undefined4 DAT_00607e80
;   undefined4 DAT_00607e84
;
; Called Functions:
;   CreateFileA
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005afddc
        ;   Label: crt_unknown.c_FUN_005afddc
    CALL dword ptr [0x006079a4]         ; 005afdde | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EDX,dword ptr [0x00607e80]      ; 005afde4 | DAT_00607e80
    ADD ESP,0x4                         ; 005afdea
    CMP EDX,-0x1                        ; 005afded
    JNZ 0x005afe15                      ; 005afdf0
        ;   XREF to: 005afe15 (CONDITIONAL_JUMP)  ; LAB_005afe15
    PUSH 0x0                            ; 005afdf2
    PUSH 0x80                           ; 005afdf4
    PUSH 0x3                            ; 005afdf9
    PUSH 0x0                            ; 005afdfb
    PUSH 0x1                            ; 005afdfd
    PUSH 0x80000000                     ; 005afdff
    PUSH 0x5daec0                       ; 005afe04 | = "conin$"
    CALL dword ptr CS:[0x5b3524]        ; 005afe09 | PTR_CreateFileA_005b3524
    MOV [0x00607e80],EAX                ; 005afe10 | DAT_00607e80
    CMP dword ptr [0x00607e84],-0x1     ; 005afe15 | DAT_00607e84
        ;   Label: LAB_005afe15
    JNZ 0x005afe41                      ; 005afe1c
        ;   XREF to: 005afe41 (CONDITIONAL_JUMP)  ; LAB_005afe41
    PUSH 0x0                            ; 005afe1e
    PUSH 0x80                           ; 005afe20
    PUSH 0x3                            ; 005afe25
    PUSH 0x0                            ; 005afe27
    PUSH 0x2                            ; 005afe29
    PUSH 0x40000000                     ; 005afe2b
    PUSH 0x5daec8                       ; 005afe30 | = "conout$"
    CALL dword ptr CS:[0x5b3524]        ; 005afe35 | PTR_CreateFileA_005b3524
    MOV [0x00607e84],EAX                ; 005afe3c | DAT_00607e84
    PUSH 0x0                            ; 005afe41
        ;   Label: LAB_005afe41
    CALL dword ptr [0x006079a8]         ; 005afe43 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005afe49
    RET                                 ; 005afe4c

