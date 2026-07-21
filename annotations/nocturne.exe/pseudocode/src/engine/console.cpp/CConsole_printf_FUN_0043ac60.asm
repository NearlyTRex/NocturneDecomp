; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_console_cpp_CConsole_printf_FUN_0043ac60(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[79]:
;   FUN_0040b300 at 0040b6be
;   FUN_00410490 at 0041082d
;   FUN_00416300 at 00416404
;   FUN_00418a00 at 0041947d
;   FUN_004196b0 at 00419959
;   FUN_00423790 at 00423881
;   FUN_00428c00 at 00428ec1
;   FUN_0042af70 at 0042b378
;   FUN_00439f50 at 0043a20a
;   FUN_00479b60 at 00479f0b
;   ... and 69 more
;
; Referenced Globals:
;   undefined4 DAT_0057b1c4
;   undefined4 DAT_0057b1c7
;   string s_console.txt_005ad358
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_console.cpp_CConsole_writeChar_FUN_0043ad30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ac60
        ;   Label: engine_console.cpp_CConsole_printf_FUN_0043ac60
    PUSH ESI                            ; 0043ac61
    PUSH EDI                            ; 0043ac62
    PUSH EBP                            ; 0043ac63
    SUB ESP,0x1004                      ; 0043ac64
    MOV EBP,dword ptr [ESP + 0x1018]    ; 0043ac6a
    LEA EAX,[ESP + 0x1020]              ; 0043ac71
    MOV dword ptr [ESP + 0x1000],EAX    ; 0043ac78
    LEA EAX,[ESP + 0x1000]              ; 0043ac7f
    PUSH EAX                            ; 0043ac86
    MOV EDX,dword ptr [ESP + 0x1020]    ; 0043ac87
    PUSH EDX                            ; 0043ac8e
    LEA EAX,[ESP + 0x8]                 ; 0043ac8f
    PUSH EAX                            ; 0043ac93
    LEA EDI,[ESP + 0xc]                 ; 0043ac94
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0043ac98
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0043ac9d
    XOR ECX,ECX                         ; 0043aca0
    XOR EBX,EBX                         ; 0043aca2
    MOV dword ptr [ESP + 0x1000],ECX    ; 0043aca4
    SUB ECX,ECX                         ; 0043acab
    DEC ECX                             ; 0043acad
    XOR EAX,EAX                         ; 0043acae
    SCASB.REPNE ES:EDI                  ; 0043acb0
    NOT ECX                             ; 0043acb2
    DEC ECX                             ; 0043acb4
    MOV ESI,ECX                         ; 0043acb5
    TEST ECX,ECX                        ; 0043acb7
    JLE 0x0043acd0                      ; 0043acb9
        ;   XREF to: 0043acd0 (CONDITIONAL_JUMP)  ; LAB_0043acd0
    XOR EAX,EAX                         ; 0043acbb
        ;   Label: LAB_0043acbb
    MOV AL,byte ptr [ESP + EBX*0x1]     ; 0043acbd
    PUSH EAX                            ; 0043acc0
    PUSH EBP                            ; 0043acc1
    INC EBX                             ; 0043acc2
    CALL engine_console.cpp_CConsole_writeChar_FUN_0043ad30 ; 0043acc3
        ;   XREF to: 0043ad30 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_writeChar_FUN_0043ad30()
    ADD ESP,0x8                         ; 0043acc8
    CMP EBX,ESI                         ; 0043accb
    JL 0x0043acbb                       ; 0043accd
        ;   XREF to: 0043acbb (CONDITIONAL_JUMP)  ; LAB_0043acbb
    NOP                                 ; 0043accf
    PUSH 0x0                            ; 0043acd0
        ;   Label: LAB_0043acd0
    PUSH EBP                            ; 0043acd2
    CALL engine_console.cpp_CConsole_writeChar_FUN_0043ad30 ; 0043acd3
        ;   XREF to: 0043ad30 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_writeChar_FUN_0043ad30()
    MOV EBX,dword ptr [EBP]             ; 0043acd8
    ADD ESP,0x8                         ; 0043acdb
    TEST EBX,EBX                        ; 0043acde
    JNZ 0x0043aced                      ; 0043ace0
        ;   XREF to: 0043aced (CONDITIONAL_JUMP)  ; LAB_0043aced
    ADD ESP,0x1004                      ; 0043ace2
        ;   Label: LAB_0043ace2
    POP EBP                             ; 0043ace8
    POP EDI                             ; 0043ace9
    POP ESI                             ; 0043acea
    POP EBX                             ; 0043aceb
    RET                                 ; 0043acec
    PUSH 0x57b1c4                       ; 0043aced | DAT_0057b1c4
        ;   Label: LAB_0043aced
    PUSH 0x5ad358                       ; 0043acf2 | = "console.txt"
    CALL crt_stdio.c_fopen_FUN_0056568c ; 0043acf7
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_0056568c()
    MOV EBX,EAX                         ; 0043acfc
    ADD ESP,0x8                         ; 0043acfe
    TEST EAX,EAX                        ; 0043ad01
    JZ 0x0043ace2                       ; 0043ad03
        ;   XREF to: 0043ace2 (CONDITIONAL_JUMP)  ; LAB_0043ace2
    MOV EAX,ESP                         ; 0043ad05
    PUSH EAX                            ; 0043ad07
    PUSH 0x57b1c7                       ; 0043ad08 | DAT_0057b1c7
    PUSH EBX                            ; 0043ad0d
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0043ad0e
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0043ad13
    PUSH EBX                            ; 0043ad16
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0043ad17
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0043ad1c
    ADD ESP,0x1004                      ; 0043ad1f
    POP EBP                             ; 0043ad25
    POP EDI                             ; 0043ad26
    POP ESI                             ; 0043ad27
    POP EBX                             ; 0043ad28
    RET                                 ; 0043ad29

