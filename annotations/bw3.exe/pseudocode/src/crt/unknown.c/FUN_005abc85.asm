; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005abc85(int param_1,uint param_2)
;
;
; XREF[8]:
;   crt_unknown.c_FUN_005af142 at 005af193
;   crt_unknown.c_FUN_005b0a2c at 005b0a63
;   crt_unknown.c_FUN_005b0f93 at 005b0fe2
;   crt_unknown.c_FUN_005b0ff9 at 005b1066
;   crt_unknown.c_fflush_FUN_005a4dac at 005a4dd1
;   crt_unknown.c_ios_clear_FUN_005a4de7 at 005a4dfc
;   crt_unknown.c_istream_seekg_FUN_005a4e88 at 005a4ecb
;   crt_unknown.c_openFile_FUN_005a4e29 at 005a4e65
;
; Called Functions:
;   crt_unknown.c_FUN_005af042
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abc85
        ;   Label: crt_unknown.c_FUN_005abc85
    SUB ESP,0x4                         ; 005abc86
    MOV EAX,dword ptr [ESP + 0xc]       ; 005abc89
    MOV EDX,dword ptr [ESP + 0x10]      ; 005abc8d
    MOV ECX,dword ptr [EAX + 0x10]      ; 005abc91
    OR ECX,EDX                          ; 005abc94
    MOV EBX,dword ptr [EAX + 0x14]      ; 005abc96
    MOV EDX,ECX                         ; 005abc99
    MOV dword ptr [EAX + 0x10],ECX      ; 005abc9b
    AND EDX,EBX                         ; 005abc9e
    JNZ 0x005abca7                      ; 005abca0
        ;   XREF to: 005abca7 (CONDITIONAL_JUMP)  ; LAB_005abca7
    ADD ESP,0x4                         ; 005abca2
    POP EBX                             ; 005abca5
    RET                                 ; 005abca6
    PUSH EDX                            ; 005abca7
        ;   Label: LAB_005abca7
    LEA EAX,[ESP + 0x4]                 ; 005abca8
    PUSH EAX                            ; 005abcac
    CALL crt_unknown.c_FUN_005af042     ; 005abcad
        ;   XREF to: 005af042 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af042()
    ADD ESP,0x8                         ; 005abcb2
    ADD ESP,0x4                         ; 005abcb5
    POP EBX                             ; 005abcb8
    RET                                 ; 005abcb9

