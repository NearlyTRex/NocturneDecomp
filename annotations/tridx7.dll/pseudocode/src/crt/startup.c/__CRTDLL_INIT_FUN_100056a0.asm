; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl crt_startup_c___CRTDLL_INIT_FUN_100056a0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved)
;
; Parameters:
; HINSTANCE        Stack[0x4]:4   hinst_dll
; DWORD            Stack[0x8]:4   reason
; LPVOID           Stack[0xc]:4   reserved
;
; XREF[1]:
;   crt_startup.c__DllMainCRTStartup_FUN_100057f0 at 10005854
;
; Referenced Globals:
;   string s_IsTNT_100122f0
;   string s_kernel32.dll_100122f8
;   undefined4 DAT_10016c60
;   undefined4 DAT_10016c64
;   undefined4 DAT_10016c74
;   undefined4 DAT_10016d64
;   undefined4 DAT_10016d68
;   undefined4 DAT_10016d6c
;   undefined4 DAT_10016d70
;   undefined4 DAT_10016d9c
;   undefined4 DAT_10241980
;   void* PTR_GetCommandLineA_102421a0 = 00242352
;   void* PTR_GetProcAddress_102421a4 = 00242364
;   void* PTR_GetModuleHandleA_102421a8 = 00242376
;   void* PTR_GetVersion_102421ac = 0024238a
;
; Called Functions:
;   crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0
;   crt_env.c__setenvp_FUN_10007b60
;   crt_heap.c__heap_init_FUN_100078f0
;   crt_heap.c__heap_term_FUN_10007910
;   crt_io.c__ioinit_FUN_10007920
;   crt_locale.c__initmbctable_FUN_100081d0
;   crt_startup.c___set_app_type_FUN_100085b0
;   crt_startup.c__cexit_FUN_100075e0
;   crt_startup.c__cinit_FUN_10007570
;   crt_startup.c__ioterm_FUN_10007b00
;   crt_startup.c__setargv_FUN_10007c40
;   crt_thread.c__freeptd_FUN_10007820
;   crt_thread.c__mtinit_FUN_10007700
;   crt_thread.c__mtterm_FUN_10007760
;   GetCommandLineA
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 100056a0
        ;   Label: crt_startup.c___CRTDLL_INIT_FUN_100056a0
    CMP EAX,0x1                         ; 100056a4
    JNZ 0x10005799                      ; 100056a7
        ;   XREF to: 10005799 (CONDITIONAL_JUMP)  ; LAB_10005799
    CALL dword ptr [0x102421ac]         ; 100056ad | PTR_GetVersion_102421ac
    CMP dword ptr [0x10016c74],0x0      ; 100056b3 | DAT_10016c74
    MOV [0x10016d64],EAX                ; 100056ba | DAT_10016d64
    JNZ 0x100056ff                      ; 100056bf
        ;   XREF to: 100056ff (CONDITIONAL_JUMP)  ; LAB_100056ff
    CMP AL,0x3                          ; 100056c1
    JNZ 0x100056d6                      ; 100056c3
        ;   XREF to: 100056d6 (CONDITIONAL_JUMP)  ; LAB_100056d6
    TEST EAX,0x80000000                 ; 100056c5
    JZ 0x100056d6                       ; 100056ca
        ;   XREF to: 100056d6 (CONDITIONAL_JUMP)  ; LAB_100056d6
    PUSH 0x2                            ; 100056cc
    CALL crt_startup.c___set_app_type_FUN_100085b0 ; 100056ce
        ;   XREF to: 100085b0 (UNCONDITIONAL_CALL)  ; void crt_startup.c___set_app_type_FUN_100085b0(int app_type)
    ADD ESP,0x4                         ; 100056d3
    PUSH 0x100122f8                     ; 100056d6 | = "kernel32.dll"
        ;   Label: LAB_100056d6
    CALL dword ptr [0x102421a8]         ; 100056db | PTR_GetModuleHandleA_102421a8
    TEST EAX,EAX                        ; 100056e1
    JZ 0x100056ff                       ; 100056e3
        ;   XREF to: 100056ff (CONDITIONAL_JUMP)  ; LAB_100056ff
    PUSH 0x100122f0                     ; 100056e5 | = "IsTNT"
    PUSH EAX                            ; 100056ea
    CALL dword ptr [0x102421a4]         ; 100056eb | PTR_GetProcAddress_102421a4
    TEST EAX,EAX                        ; 100056f1
    JZ 0x100056ff                       ; 100056f3
        ;   XREF to: 100056ff (CONDITIONAL_JUMP)  ; LAB_100056ff
    PUSH 0x1                            ; 100056f5
    CALL crt_startup.c___set_app_type_FUN_100085b0 ; 100056f7
        ;   XREF to: 100085b0 (UNCONDITIONAL_CALL)  ; void crt_startup.c___set_app_type_FUN_100085b0(int app_type)
    ADD ESP,0x4                         ; 100056fc
    CALL crt_heap.c__heap_init_FUN_100078f0 ; 100056ff
        ;   XREF to: 100078f0 (UNCONDITIONAL_CALL)  ; int crt_heap.c__heap_init_FUN_100078f0(int mtflag)
        ;   Label: LAB_100056ff
    XOR ECX,ECX                         ; 10005704
    MOV EDX,dword ptr [0x10016d64]      ; 10005706 | DAT_10016d64
    MOV CL,DH                           ; 1000570c
    MOV EAX,EDX                         ; 1000570e
    AND EAX,0xff                        ; 10005710
    INC dword ptr [0x10016c60]          ; 10005715 | DAT_10016c60
    SHR EDX,0x10                        ; 1000571b
    MOV dword ptr [0x10016d70],ECX      ; 1000571e | DAT_10016d70
    MOV [0x10016d6c],EAX                ; 10005724 | DAT_10016d6c
    MOV dword ptr [0x10016d64],EDX      ; 10005729 | DAT_10016d64
    SHL EAX,0x8                         ; 1000572f
    ADD EAX,ECX                         ; 10005732
    MOV [0x10016d68],EAX                ; 10005734 | DAT_10016d68
    CALL crt_thread.c__mtinit_FUN_10007700 ; 10005739
        ;   XREF to: 10007700 (UNCONDITIONAL_CALL)  ; int crt_thread.c__mtinit_FUN_10007700()
    TEST EAX,EAX                        ; 1000573e
    JNZ 0x1000574c                      ; 10005740
        ;   XREF to: 1000574c (CONDITIONAL_JUMP)  ; LAB_1000574c
    CALL crt_heap.c__heap_term_FUN_10007910 ; 10005742
        ;   XREF to: 10007910 (UNCONDITIONAL_CALL)  ; void crt_heap.c__heap_term_FUN_10007910()
    XOR EAX,EAX                         ; 10005747
    RET 0xc                             ; 10005749
    CALL dword ptr [0x102421a0]         ; 1000574c | PTR_GetCommandLineA_102421a0
        ;   Label: LAB_1000574c
    MOV [0x10241980],EAX                ; 10005752 | DAT_10241980
    CALL crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0 ; 10005757
        ;   XREF to: 100083e0 (UNCONDITIONAL_CALL)  ; char * crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0()
    CMP dword ptr [0x10241980],0x0      ; 1000575c | DAT_10241980
    MOV [0x10016c64],EAX                ; 10005763 | DAT_10016c64
    JZ 0x1000578f                       ; 10005768
        ;   XREF to: 1000578f (CONDITIONAL_JUMP)  ; LAB_1000578f
    TEST EAX,EAX                        ; 1000576a
    JZ 0x1000578f                       ; 1000576c
        ;   XREF to: 1000578f (CONDITIONAL_JUMP)  ; LAB_1000578f
    CALL crt_io.c__ioinit_FUN_10007920  ; 1000576e
        ;   XREF to: 10007920 (UNCONDITIONAL_CALL)  ; int crt_io.c__ioinit_FUN_10007920()
    CALL crt_locale.c__initmbctable_FUN_100081d0 ; 10005773
        ;   XREF to: 100081d0 (UNCONDITIONAL_CALL)  ; void crt_locale.c__initmbctable_FUN_100081d0()
    CALL crt_startup.c__setargv_FUN_10007c40 ; 10005778
        ;   XREF to: 10007c40 (UNCONDITIONAL_CALL)  ; int crt_startup.c__setargv_FUN_10007c40()
    CALL crt_env.c__setenvp_FUN_10007b60 ; 1000577d
        ;   XREF to: 10007b60 (UNCONDITIONAL_CALL)  ; int crt_env.c__setenvp_FUN_10007b60()
    CALL crt_startup.c__cinit_FUN_10007570 ; 10005782
        ;   XREF to: 10007570 (UNCONDITIONAL_CALL)  ; int crt_startup.c__cinit_FUN_10007570(int init_fp)
    MOV EAX,0x1                         ; 10005787
    RET 0xc                             ; 1000578c
    CALL crt_heap.c__heap_term_FUN_10007910 ; 1000578f
        ;   XREF to: 10007910 (UNCONDITIONAL_CALL)  ; void crt_heap.c__heap_term_FUN_10007910()
        ;   Label: LAB_1000578f
    XOR EAX,EAX                         ; 10005794
    RET 0xc                             ; 10005796
    TEST EAX,EAX                        ; 10005799
        ;   Label: LAB_10005799
    JNZ 0x100057d6                      ; 1000579b
        ;   XREF to: 100057d6 (CONDITIONAL_JUMP)  ; LAB_100057d6
    MOV EAX,[0x10016c60]                ; 1000579d | DAT_10016c60
    TEST EAX,EAX                        ; 100057a2
    JLE 0x100057d1                      ; 100057a4
        ;   XREF to: 100057d1 (CONDITIONAL_JUMP)  ; LAB_100057d1
    DEC EAX                             ; 100057a6
    CMP dword ptr [0x10016d9c],0x0      ; 100057a7 | DAT_10016d9c
    MOV [0x10016c60],EAX                ; 100057ae | DAT_10016c60
    JNZ 0x100057ba                      ; 100057b3
        ;   XREF to: 100057ba (CONDITIONAL_JUMP)  ; LAB_100057ba
    CALL crt_startup.c__cexit_FUN_100075e0 ; 100057b5
        ;   XREF to: 100075e0 (UNCONDITIONAL_CALL)  ; void crt_startup.c__cexit_FUN_100075e0()
    CALL crt_startup.c__ioterm_FUN_10007b00 ; 100057ba
        ;   XREF to: 10007b00 (UNCONDITIONAL_CALL)  ; void crt_startup.c__ioterm_FUN_10007b00()
        ;   Label: LAB_100057ba
    CALL crt_thread.c__mtterm_FUN_10007760 ; 100057bf
        ;   XREF to: 10007760 (UNCONDITIONAL_CALL)  ; void crt_thread.c__mtterm_FUN_10007760()
    CALL crt_heap.c__heap_term_FUN_10007910 ; 100057c4
        ;   XREF to: 10007910 (UNCONDITIONAL_CALL)  ; void crt_heap.c__heap_term_FUN_10007910()
    MOV EAX,0x1                         ; 100057c9
    RET 0xc                             ; 100057ce
    XOR EAX,EAX                         ; 100057d1
        ;   Label: LAB_100057d1
    RET 0xc                             ; 100057d3
    CMP EAX,0x3                         ; 100057d6
        ;   Label: LAB_100057d6
    JNZ 0x100057e5                      ; 100057d9
        ;   XREF to: 100057e5 (CONDITIONAL_JUMP)  ; LAB_100057e5
    PUSH 0x0                            ; 100057db
    CALL crt_thread.c__freeptd_FUN_10007820 ; 100057dd
        ;   XREF to: 10007820 (UNCONDITIONAL_CALL)  ; void crt_thread.c__freeptd_FUN_10007820(_ptiddata ptd)
    ADD ESP,0x4                         ; 100057e2
    MOV EAX,0x1                         ; 100057e5
        ;   Label: LAB_100057e5
    RET 0xc                             ; 100057ea

