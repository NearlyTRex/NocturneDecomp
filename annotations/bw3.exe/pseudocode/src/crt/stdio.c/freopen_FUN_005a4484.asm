; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c_freopen_FUN_005a4484(char *filename,char *mode,_FILE *stream)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
; _FILE *          Stack[0xc]:4   stream
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e4536
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   undefined4 DAT_00607b1c
;
; Called Functions:
;   crt_unknown.c_FUN_005a4140
;   crt_unknown.c_FUN_005a427c
;   crt_unknown.c_FUN_005a4404
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4484
        ;   Label: crt_stdio.c_freopen_FUN_005a4484
    PUSH ESI                            ; 005a4485
    PUSH EDI                            ; 005a4486
    PUSH EBP                            ; 005a4487
    SUB ESP,0x4                         ; 005a4488
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a448b
    MOV EAX,ESP                         ; 005a448f
    PUSH EAX                            ; 005a4491
    MOV EDX,dword ptr [ESP + 0x20]      ; 005a4492
    PUSH EDX                            ; 005a4496
    CALL crt_unknown.c_FUN_005a4140     ; 005a4497
        ;   XREF to: 005a4140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4140()
    ADD ESP,0x8                         ; 005a449c
    MOV EDI,EAX                         ; 005a449f
    TEST EAX,EAX                        ; 005a44a1
    JZ 0x005a450e                       ; 005a44a3
        ;   XREF to: 005a450e (CONDITIONAL_JUMP)  ; LAB_005a450e
    MOV EBX,dword ptr [ESI + 0x10]      ; 005a44a5
    PUSH EBX                            ; 005a44a8
    CALL dword ptr [0x006079a4]         ; 005a44a9 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV ECX,dword ptr [0x00607b1c]      ; 005a44af | DAT_00607b1c
    ADD ESP,0x4                         ; 005a44b5
    TEST ECX,ECX                        ; 005a44b8
    JZ 0x005a44c6                       ; 005a44ba
        ;   XREF to: 005a44c6 (CONDITIONAL_JUMP)  ; LAB_005a44c6
    PUSH EBX                            ; 005a44bc
    CALL dword ptr [0x00607b1c]         ; 005a44bd | DAT_00607b1c
    ADD ESP,0x4                         ; 005a44c3
    PUSH ESI                            ; 005a44c6
        ;   Label: LAB_005a44c6
    CALL crt_unknown.c_FUN_005a4404     ; 005a44c7
        ;   XREF to: 005a4404 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4404()
    ADD ESP,0x4                         ; 005a44cc
    MOV ESI,EAX                         ; 005a44cf
    TEST EAX,EAX                        ; 005a44d1
    JZ 0x005a4502                       ; 005a44d3
        ;   XREF to: 005a4502 (CONDITIONAL_JUMP)  ; LAB_005a4502
    MOV ESI,dword ptr [EAX + 0xc]       ; 005a44d5
    AND ESI,0x4000                      ; 005a44d8
    PUSH EAX                            ; 005a44de
    MOV dword ptr [EAX + 0xc],ESI       ; 005a44df
    PUSH 0x0                            ; 005a44e2
    MOV EBP,dword ptr [ESP + 0x8]       ; 005a44e4
    PUSH EBP                            ; 005a44e8
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a44e9
    XOR EAX,EAX                         ; 005a44ed
    PUSH EDI                            ; 005a44ef
    MOV AL,byte ptr [ESI]               ; 005a44f0
    PUSH EAX                            ; 005a44f2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005a44f3
    PUSH EAX                            ; 005a44f7
    CALL crt_unknown.c_FUN_005a427c     ; 005a44f8
        ;   XREF to: 005a427c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a427c()
    ADD ESP,0x18                        ; 005a44fd
    MOV ESI,EAX                         ; 005a4500
    PUSH EBX                            ; 005a4502
        ;   Label: LAB_005a4502
    CALL dword ptr [0x006079a8]         ; 005a4503 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a4509
    MOV EAX,ESI                         ; 005a450c
    ADD ESP,0x4                         ; 005a450e
        ;   Label: LAB_005a450e
    POP EBP                             ; 005a4511
    POP EDI                             ; 005a4512
    POP ESI                             ; 005a4513
    POP EBX                             ; 005a4514
    RET                                 ; 005a4515

