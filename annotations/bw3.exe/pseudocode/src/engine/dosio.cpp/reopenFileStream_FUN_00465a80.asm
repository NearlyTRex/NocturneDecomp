; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00465a80(char *param_1,undefined4 param_2,uint param_3,int *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8800
;
; Called Functions:
;   crt_unknown.c_FUN_005a4dac
;   crt_unknown.c_FUN_005a4de7
;   crt_unknown.c_FUN_005a4e29
;   crt_unknown.c_FUN_005a4e88
;   crt_watcom.c__mkdir_FUN_005a4e10
;   engine_dosio.cpp_findFile_FUN_004656d0
;   engine_dosio.cpp_FUN_00465660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465a80
        ;   Label: engine_dosio.cpp_reopenFileStream_FUN_00465a80
    PUSH ESI                            ; 00465a81
    PUSH EBP                            ; 00465a82
    SUB ESP,0x214                       ; 00465a83
    MOV ESI,dword ptr [ESP + 0x224]     ; 00465a89
    MOV EBX,dword ptr [ESP + 0x230]     ; 00465a90
    PUSH EBX                            ; 00465a97
    CALL crt_unknown.c_FUN_005a4dac     ; 00465a98
        ;   XREF to: 005a4dac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4dac()
    MOV EAX,dword ptr [EBX]             ; 00465a9d
    ADD ESP,0x4                         ; 00465a9f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00465aa2
    PUSH 0x0                            ; 00465aa5
    ADD EAX,EBX                         ; 00465aa7
    PUSH EAX                            ; 00465aa9
    CALL crt_unknown.c_FUN_005a4de7     ; 00465aaa
        ;   XREF to: 005a4de7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4de7()
    ADD ESP,0x8                         ; 00465aaf
    MOV EDX,dword ptr [ESP + 0x228]     ; 00465ab2
    PUSH EDX                            ; 00465ab9
    PUSH ESI                            ; 00465aba
    LEA EAX,[ESP + 0x8]                 ; 00465abb
    PUSH EAX                            ; 00465abf
    CALL engine_dosio.cpp_FUN_00465660  ; 00465ac0
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    ADD ESP,0xc                         ; 00465ac5
    TEST byte ptr [ESP + 0x22c],0x52    ; 00465ac8
    JZ 0x00465b05                       ; 00465ad0
        ;   XREF to: 00465b05 (CONDITIONAL_JUMP)  ; LAB_00465b05
    TEST ESI,ESI                        ; 00465ad2
    JZ 0x00465adf                       ; 00465ad4
        ;   XREF to: 00465adf (CONDITIONAL_JUMP)  ; LAB_00465adf
    PUSH ESI                            ; 00465ad6
    CALL crt_watcom.c__mkdir_FUN_005a4e10 ; 00465ad7
        ;   XREF to: 005a4e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005a4e10(char * path)
    ADD ESP,0x4                         ; 00465adc
    MOV EAX,[0x005e8800]                ; 00465adf | DAT_005e8800
        ;   Label: LAB_00465adf
    PUSH EAX                            ; 00465ae4
    MOV EBP,dword ptr [ESP + 0x230]     ; 00465ae5
    PUSH EBP                            ; 00465aec
    LEA EAX,[ESP + 0x8]                 ; 00465aed
    PUSH EAX                            ; 00465af1
    PUSH EBX                            ; 00465af2
    CALL crt_unknown.c_FUN_005a4e29     ; 00465af3
        ;   XREF to: 005a4e29 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4e29()
    ADD ESP,0x10                        ; 00465af8
    ADD ESP,0x214                       ; 00465afb
        ;   Label: LAB_00465afb
    POP EBP                             ; 00465b01
    POP ESI                             ; 00465b02
    POP EBX                             ; 00465b03
    RET                                 ; 00465b04
    MOV EAX,ESP                         ; 00465b05
        ;   Label: LAB_00465b05
    PUSH EAX                            ; 00465b07
    CALL engine_dosio.cpp_findFile_FUN_004656d0 ; 00465b08
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004656d0()
    ADD ESP,0x4                         ; 00465b0d
    TEST EAX,EAX                        ; 00465b10
    JZ 0x00465afb                       ; 00465b12
        ;   XREF to: 00465afb (CONDITIONAL_JUMP)  ; LAB_00465afb
    MOV EAX,[0x005e8800]                ; 00465b14 | DAT_005e8800
    PUSH EAX                            ; 00465b19
    MOV ECX,dword ptr [ESP + 0x230]     ; 00465b1a
    PUSH ECX                            ; 00465b21
    LEA EAX,[ESP + 0x108]               ; 00465b22
    PUSH EAX                            ; 00465b29
    PUSH EBX                            ; 00465b2a
    CALL crt_unknown.c_FUN_005a4e29     ; 00465b2b
        ;   XREF to: 005a4e29 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4e29()
    ADD ESP,0x10                        ; 00465b30
    MOV ESI,dword ptr [ESP + 0x200]     ; 00465b33
    TEST ESI,ESI                        ; 00465b3a
    JZ 0x00465afb                       ; 00465b3c
        ;   XREF to: 00465afb (CONDITIONAL_JUMP)  ; LAB_00465afb
    PUSH ESI                            ; 00465b3e
    ADD EBX,0x44                        ; 00465b3f
    PUSH EBX                            ; 00465b42
    CALL crt_unknown.c_FUN_005a4e88     ; 00465b43
        ;   XREF to: 005a4e88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4e88()
    ADD ESP,0x8                         ; 00465b48
    ADD ESP,0x214                       ; 00465b4b
    POP EBP                             ; 00465b51
    POP ESI                             ; 00465b52
    POP EBX                             ; 00465b53
    RET                                 ; 00465b54

