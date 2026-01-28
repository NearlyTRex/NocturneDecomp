; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_skeledit_cpp_FUN_0058a1b0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_n_0064a213
;   TerminatedCString s_n_0064a22f
;   TerminatedCString s_d_d_0064a242
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    PUSH 0x2c                           ; 0058a1b0
        ;   Label: core_skeledit.cpp_FUN_0058a1b0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058a1b5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058a1ba
    PUSH ESI                            ; 0058a1bb
    PUSH EDI                            ; 0058a1bc
    SUB ESP,0x4                         ; 0058a1bd
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058a1c0
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058a1c4
    MOV EAX,ESP                         ; 0058a1c8
    PUSH EAX                            ; 0058a1ca
    LEA EAX,[EBX + 0x200]               ; 0058a1cb
    PUSH EAX                            ; 0058a1d1
    LEA ESI,[EBX + 0x100]               ; 0058a1d2
    PUSH ESI                            ; 0058a1d8
    PUSH EBX                            ; 0058a1d9
    PUSH 0x64a213                       ; 0058a1da | = "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"%n"
    MOV EDX,0xffffffff                  ; 0058a1df
    PUSH EDI                            ; 0058a1e4
    MOV dword ptr [ESP + 0x18],EDX      ; 0058a1e5
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0058a1e9
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x18                        ; 0058a1ee
    CMP dword ptr [ESP],0x0             ; 0058a1f1
    JL 0x0058a232                       ; 0058a1f5
        ;   XREF to: 0058a232 (CONDITIONAL_JUMP)  ; LAB_0058a232
    LEA EAX,[EBX + 0x304]               ; 0058a1f7
        ;   Label: LAB_0058a1f7
    ADD EBX,0x300                       ; 0058a1fd
    MOV dword ptr [EBX],0x0             ; 0058a203
    PUSH EAX                            ; 0058a209
    MOV dword ptr [EBX + 0x4],0x0       ; 0058a20a
    PUSH EBX                            ; 0058a211
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058a212
    PUSH 0x64a242                       ; 0058a216 | = " , %d , %d"
    ADD EAX,EDI                         ; 0058a21b
    PUSH EAX                            ; 0058a21d
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0058a21e
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,0x1                         ; 0058a223
    ADD ESP,0x10                        ; 0058a228
    ADD ESP,0x4                         ; 0058a22b
    POP EDI                             ; 0058a22e
    POP ESI                             ; 0058a22f
    POP EBX                             ; 0058a230
    RET                                 ; 0058a231
    MOV EAX,ESP                         ; 0058a232
        ;   Label: LAB_0058a232
    PUSH EAX                            ; 0058a234
    PUSH ESI                            ; 0058a235
    PUSH EBX                            ; 0058a236
    PUSH 0x64a22f                       ; 0058a237 | = "\"%[^\"]\", \"%[^\"]\"%n"
    PUSH EDI                            ; 0058a23c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0058a23d
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 0058a242
    CMP dword ptr [ESP],0x0             ; 0058a245
    JL 0x0058a254                       ; 0058a249
        ;   XREF to: 0058a254 (CONDITIONAL_JUMP)  ; LAB_0058a254
    MOV byte ptr [EBX + 0x200],0x0      ; 0058a24b
    JMP 0x0058a1f7                      ; 0058a252
        ;   XREF to: 0058a1f7 (UNCONDITIONAL_JUMP)  ; LAB_0058a1f7
    XOR EAX,EAX                         ; 0058a254
        ;   Label: LAB_0058a254
    ADD ESP,0x4                         ; 0058a256
    POP EDI                             ; 0058a259
    POP ESI                             ; 0058a25a
    POP EBX                             ; 0058a25b
    RET                                 ; 0058a25c

