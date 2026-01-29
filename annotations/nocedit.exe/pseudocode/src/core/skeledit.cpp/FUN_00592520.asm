; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_skeledit_cpp_FUN_00592520(void)
;
;
; XREF[1]:
;   core_skeledit.cpp_FUN_00592690 at 0059371b
;
; Referenced Globals:
;   TerminatedCString s_anon_0064bff2
;   TerminatedCString s_anon_0064bff4
;   TerminatedCString s_patch_0064bff6
;   TerminatedCString s_d_0064bffc
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_string.c_strcmp_FUN_005fef20
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH 0x18                           ; 00592520
        ;   Label: core_skeledit.cpp_FUN_00592520
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00592525
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0059252a
    PUSH ESI                            ; 0059252b
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059252c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00592530
    PUSH 0x64bff2                       ; 00592534 | = "("
    PUSH ESI                            ; 00592539
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0059253a
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059253f
    TEST EAX,EAX                        ; 00592542
    JNZ 0x00592550                      ; 00592544
        ;   XREF to: 00592550 (CONDITIONAL_JUMP)  ; LAB_00592550
    MOV dword ptr [EBX],EAX             ; 00592546
    MOV EAX,0x1                         ; 00592548
    POP ESI                             ; 0059254d
        ;   Label: LAB_0059254d
    POP EBX                             ; 0059254e
    RET                                 ; 0059254f
    PUSH 0x64bff4                       ; 00592550 | = ")"
        ;   Label: LAB_00592550
    PUSH ESI                            ; 00592555
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00592556
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059255b
    TEST EAX,EAX                        ; 0059255e
    JZ 0x005925a0                       ; 00592560
        ;   XREF to: 005925a0 (CONDITIONAL_JUMP)  ; LAB_005925a0
    CMP dword ptr [ESP + 0x18],0x0      ; 00592562
    JZ 0x0059257b                       ; 00592567
        ;   XREF to: 0059257b (CONDITIONAL_JUMP)  ; LAB_0059257b
    PUSH 0x64bff6                       ; 00592569 | = "patch"
    PUSH ESI                            ; 0059256e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0059256f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00592574
    TEST EAX,EAX                        ; 00592577
    JZ 0x005925af                       ; 00592579
        ;   XREF to: 005925af (CONDITIONAL_JUMP)  ; LAB_005925af
    PUSH EBX                            ; 0059257b
        ;   Label: LAB_0059257b
    PUSH 0x64bffc                       ; 0059257c | = "%d"
    PUSH ESI                            ; 00592581
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00592582
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 00592587
    CMP EAX,0x1                         ; 0059258a
    JNZ 0x0059259b                      ; 0059258d
        ;   XREF to: 0059259b (CONDITIONAL_JUMP)  ; LAB_0059259b
    MOV ECX,dword ptr [EBX]             ; 0059258f
    TEST ECX,ECX                        ; 00592591
    JL 0x0059259b                       ; 00592593
        ;   XREF to: 0059259b (CONDITIONAL_JUMP)  ; LAB_0059259b
    CMP ECX,dword ptr [ESP + 0x14]      ; 00592595
    JL 0x0059254d                       ; 00592599
        ;   XREF to: 0059254d (CONDITIONAL_JUMP)  ; LAB_0059254d
    XOR EAX,EAX                         ; 0059259b
        ;   Label: LAB_0059259b
    POP ESI                             ; 0059259d
    POP EBX                             ; 0059259e
    RET                                 ; 0059259f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005925a0
        ;   Label: LAB_005925a0
    DEC EAX                             ; 005925a4
    MOV dword ptr [EBX],EAX             ; 005925a5
    MOV EAX,0x1                         ; 005925a7
    POP ESI                             ; 005925ac
    POP EBX                             ; 005925ad
    RET                                 ; 005925ae
    MOV EAX,0x1                         ; 005925af
        ;   Label: LAB_005925af
    MOV dword ptr [EBX],0xffffffff      ; 005925b4
    POP ESI                             ; 005925ba
    POP EBX                             ; 005925bb
    RET                                 ; 005925bc

