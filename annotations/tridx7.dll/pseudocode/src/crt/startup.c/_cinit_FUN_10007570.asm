; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_startup_c__cinit_FUN_10007570(int init_fp)
;
; Parameters:
; int              Stack[0x4]:4   init_fp
;
; XREF[1]:
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 10005782
;
; Referenced Globals:
;   undefined4 DAT_10014000
;   undefined4 DAT_10014014
;   undefined4 DAT_10014018
;   undefined4 DAT_10014020
;   undefined1* PTR_crt_fpu.c__fpmath_FUN_10005580_10016c50 = 10005580
;
; Called Functions:
;   crt_fpu.c__fpmath_FUN_10005580
;   crt_startup.c__initterm_FUN_100076e0
;
; *****************************************************************************

section .text

    MOV EAX,[0x10016c50]                ; 10007570 | PTR_crt_fpu.c__fpmath_FUN_10005580_10016c50
        ;   Label: crt_startup.c__cinit_FUN_10007570
    TEST EAX,EAX                        ; 10007575
    JZ 0x1000757b                       ; 10007577
        ;   XREF to: 1000757b (CONDITIONAL_JUMP)  ; LAB_1000757b
    CALL EAX                            ; 10007579 | void crt_fpu.c__fpmath_FUN_10005580(int flag)
    PUSH 0x10014020                     ; 1000757b | DAT_10014020
        ;   Label: LAB_1000757b
    PUSH 0x10014018                     ; 10007580 | DAT_10014018
    CALL crt_startup.c__initterm_FUN_100076e0 ; 10007585
        ;   XREF to: 100076e0 (UNCONDITIONAL_CALL)  ; void crt_startup.c__initterm_FUN_100076e0(char * pfbegin, char * pfend)
    ADD ESP,0x8                         ; 1000758a
    PUSH 0x10014014                     ; 1000758d | DAT_10014014
    PUSH 0x10014000                     ; 10007592 | DAT_10014000
    CALL crt_startup.c__initterm_FUN_100076e0 ; 10007597
        ;   XREF to: 100076e0 (UNCONDITIONAL_CALL)  ; void crt_startup.c__initterm_FUN_100076e0(char * pfbegin, char * pfend)
    ADD ESP,0x8                         ; 1000759c
    RET                                 ; 1000759f

