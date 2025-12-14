; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_0058bc40()
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeledit.cpp_FUN_0058b660 at 0058b886
;   core_skeledit.cpp_FUN_0058c190 at 0058c339
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0064a902
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH 0x34                           ; 0058bc40
        ;   Label: core_skeledit.cpp_FUN_0058bc40
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058bc45
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058bc4a
    PUSH ESI                            ; 0058bc4b
    PUSH EDI                            ; 0058bc4c
    PUSH EBP                            ; 0058bc4d
    SUB ESP,0xc                         ; 0058bc4e
    MOV EDI,dword ptr [ESP + 0x20]      ; 0058bc51
    MOV EBP,dword ptr [ESP + 0x24]      ; 0058bc55
    MOV EBX,0x1                         ; 0058bc59
    MOV ESI,EBP                         ; 0058bc5e
    PUSH ESI                            ; 0058bc60
        ;   Label: LAB_0058bc60
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058bc61
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0058bc66
    TEST EAX,EAX                        ; 0058bc69
    JL 0x0058bc77                       ; 0058bc6b
        ;   XREF to: 0058bc77 (CONDITIONAL_JUMP)  ; LAB_0058bc77
    CMP EAX,0xa                         ; 0058bc6d
    JNZ 0x0058bc60                      ; 0058bc70
        ;   XREF to: 0058bc60 (CONDITIONAL_JUMP)  ; LAB_0058bc60
    DEC EBX                             ; 0058bc72
    TEST EBX,EBX                        ; 0058bc73
    JG 0x0058bc60                       ; 0058bc75
        ;   XREF to: 0058bc60 (CONDITIONAL_JUMP)  ; LAB_0058bc60
    MOV EDX,dword ptr [EDI + 0x2c]      ; 0058bc77
        ;   Label: LAB_0058bc77
    XOR EBX,EBX                         ; 0058bc7a
    TEST EDX,EDX                        ; 0058bc7c
    JLE 0x0058bcda                      ; 0058bc7e
        ;   XREF to: 0058bcda (CONDITIONAL_JUMP)  ; LAB_0058bcda
    XOR ESI,ESI                         ; 0058bc80
    LEA EAX,[ESP + 0x8]                 ; 0058bc82
        ;   Label: LAB_0058bc82
    PUSH EAX                            ; 0058bc86
    LEA EAX,[ESP + 0x8]                 ; 0058bc87
    PUSH EAX                            ; 0058bc8b
    LEA EAX,[ESP + 0x8]                 ; 0058bc8c
    PUSH EAX                            ; 0058bc90
    PUSH 0x64a902                       ; 0058bc91 | = "%f,%f,%f\n"
    PUSH EBP                            ; 0058bc96
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058bc97
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0058bc9c
    CMP EAX,0x3                         ; 0058bc9f
    JNZ 0x0058bce7                      ; 0058bca2
        ;   XREF to: 0058bce7 (CONDITIONAL_JUMP)  ; LAB_0058bce7
    MOV EDX,dword ptr [EDI + 0x40]      ; 0058bca4
    MOV byte ptr [EDX + ESI*0x1],0x1    ; 0058bca7
    MOV EAX,dword ptr [ESP]             ; 0058bcab
    MOV dword ptr [EDX + ESI*0x1 + 0x10],EAX ; 0058bcae
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058bcb2
    MOV dword ptr [EDX + ESI*0x1 + 0x14],EAX ; 0058bcb6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058bcba
    MOV byte ptr [EDX + ESI*0x1 + 0x1],0x0 ; 0058bcbe
    MOV dword ptr [EDX + ESI*0x1 + 0x4],0x3f800000 ; 0058bcc3
    MOV dword ptr [EDX + ESI*0x1 + 0x18],EAX ; 0058bccb
    INC EBX                             ; 0058bccf
    MOV ECX,dword ptr [EDI + 0x2c]      ; 0058bcd0
    ADD ESI,0x34                        ; 0058bcd3
    CMP EBX,ECX                         ; 0058bcd6
    JL 0x0058bc82                       ; 0058bcd8
        ;   XREF to: 0058bc82 (CONDITIONAL_JUMP)  ; LAB_0058bc82
    MOV EAX,0x1                         ; 0058bcda
        ;   Label: LAB_0058bcda
    ADD ESP,0xc                         ; 0058bcdf
    POP EBP                             ; 0058bce2
    POP EDI                             ; 0058bce3
    POP ESI                             ; 0058bce4
    POP EBX                             ; 0058bce5
    RET                                 ; 0058bce6
    XOR EAX,EAX                         ; 0058bce7
        ;   Label: LAB_0058bce7
    ADD ESP,0xc                         ; 0058bce9
    POP EBP                             ; 0058bcec
    POP EDI                             ; 0058bced
    POP ESI                             ; 0058bcee
    POP EBX                             ; 0058bcef
    RET                                 ; 0058bcf0

