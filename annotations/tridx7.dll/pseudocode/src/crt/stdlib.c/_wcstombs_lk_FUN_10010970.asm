; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t __cdecl crt_stdlib_c__wcstombs_lk_FUN_10010970(char *mbstr,wchar_t *wcstr,size_t count)
;
; Parameters:
; char *           Stack[0x4]:4   mbstr
; wchar_t *        Stack[0x8]:4   wcstr
; size_t           Stack[0xc]:4   count
; Local Variables:
; undefined        Stack[-0x6]:1  local_6
; undefined1       Stack[-0x5]:1  local_5
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_stdlib.c_wcstombs_FUN_10010910 at 10010943
;
; Referenced Globals:
;   undefined4 DAT_10017690
;   undefined4 DAT_10017760
;   undefined4 DAT_10017770
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;
; Called Functions:
;   crt_errno.c__errno_FUN_10008a20
;   crt_string.c__wcsnlen_FUN_10010be0
;   crt_string.c_wcslen_FUN_1000a930
;   GetLastError
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 10010970
        ;   Label: crt_stdlib.c__wcstombs_lk_FUN_10010970
    XOR EAX,EAX                         ; 10010973
    MOV dword ptr [ESP + 0x4],EAX       ; 10010975
    PUSH EBX                            ; 10010979
    PUSH ESI                            ; 1001097a
    PUSH EDI                            ; 1001097b
    MOV ESI,dword ptr [ESP + 0x18]      ; 1001097c
    PUSH EBP                            ; 10010980
    MOV EBP,dword ptr [ESP + 0x24]      ; 10010981
    CMP ESI,EAX                         ; 10010985
    JZ 0x10010995                       ; 10010987
        ;   XREF to: 10010995 (CONDITIONAL_JUMP)  ; LAB_10010995
    CMP EBP,EAX                         ; 10010989
    JNZ 0x10010995                      ; 1001098b
        ;   XREF to: 10010995 (CONDITIONAL_JUMP)  ; LAB_10010995
    POP EBP                             ; 1001098d
    POP EDI                             ; 1001098e
    POP ESI                             ; 1001098f
    POP EBX                             ; 10010990
    ADD ESP,0x8                         ; 10010991
    RET                                 ; 10010994
    TEST ESI,ESI                        ; 10010995
        ;   Label: LAB_10010995
    JZ 0x10010b6c                       ; 10010997
        ;   XREF to: 10010b6c (CONDITIONAL_JUMP)  ; LAB_10010b6c
    CMP dword ptr [0x10017760],0x0      ; 1001099d | DAT_10017760
    JZ 0x10010b1f                       ; 100109a4
        ;   XREF to: 10010b1f (CONDITIONAL_JUMP)  ; LAB_10010b1f
    CMP dword ptr [0x10017690],0x1      ; 100109aa | DAT_10017690
    JNZ 0x10010a21                      ; 100109b1
        ;   XREF to: 10010a21 (CONDITIONAL_JUMP)  ; LAB_10010a21
    TEST EBP,EBP                        ; 100109b3
    JZ 0x100109c9                       ; 100109b5
        ;   XREF to: 100109c9 (CONDITIONAL_JUMP)  ; LAB_100109c9
    MOV EDI,dword ptr [ESP + 0x20]      ; 100109b7
    PUSH EBP                            ; 100109bb
    PUSH EDI                            ; 100109bc
    CALL crt_string.c__wcsnlen_FUN_10010be0 ; 100109bd
        ;   XREF to: 10010be0 (UNCONDITIONAL_CALL)  ; size_t crt_string.c__wcsnlen_FUN_10010be0(wchar_t * str, size_t max)
    ADD ESP,0x8                         ; 100109c2
    MOV EBP,EAX                         ; 100109c5
    JMP 0x100109cd                      ; 100109c7
        ;   XREF to: 100109cd (UNCONDITIONAL_JUMP)  ; LAB_100109cd
    MOV EDI,dword ptr [ESP + 0x20]      ; 100109c9
        ;   Label: LAB_100109c9
    LEA EAX,[ESP + 0x14]                ; 100109cd
        ;   Label: LAB_100109cd
    PUSH EAX                            ; 100109d1
    PUSH 0x0                            ; 100109d2
    PUSH EBP                            ; 100109d4
    MOV ECX,dword ptr [0x10017770]      ; 100109d5 | DAT_10017770
    PUSH ESI                            ; 100109db
    PUSH EBP                            ; 100109dc
    PUSH EDI                            ; 100109dd
    PUSH 0x220                          ; 100109de
    PUSH ECX                            ; 100109e3
    CALL dword ptr [0x10242230]         ; 100109e4 | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 100109ea
    JZ 0x10010a09                       ; 100109ec
        ;   XREF to: 10010a09 (CONDITIONAL_JUMP)  ; LAB_10010a09
    CMP dword ptr [ESP + 0x14],0x0      ; 100109ee
    JNZ 0x10010a09                      ; 100109f3
        ;   XREF to: 10010a09 (CONDITIONAL_JUMP)  ; LAB_10010a09
    CMP byte ptr [EAX + ESI*0x1 + -0x1],0x0 ; 100109f5
    JNZ 0x10010bd2                      ; 100109fa
        ;   XREF to: 10010bd2 (CONDITIONAL_JUMP)  ; LAB_10010bd2
    DEC EAX                             ; 10010a00
    POP EBP                             ; 10010a01
    POP EDI                             ; 10010a02
    POP ESI                             ; 10010a03
    POP EBX                             ; 10010a04
    ADD ESP,0x8                         ; 10010a05
    RET                                 ; 10010a08
    CALL crt_errno.c__errno_FUN_10008a20 ; 10010a09
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10010a09
    POP EBP                             ; 10010a0e
    MOV dword ptr [EAX],0x2a            ; 10010a0f
    MOV EAX,0xffffffff                  ; 10010a15
    POP EDI                             ; 10010a1a
    POP ESI                             ; 10010a1b
    POP EBX                             ; 10010a1c
    ADD ESP,0x8                         ; 10010a1d
    RET                                 ; 10010a20
    LEA EAX,[ESP + 0x14]                ; 10010a21
        ;   Label: LAB_10010a21
    MOV EDI,dword ptr [ESP + 0x20]      ; 10010a25
    PUSH EAX                            ; 10010a29
    PUSH 0x0                            ; 10010a2a
    PUSH EBP                            ; 10010a2c
    MOV ECX,dword ptr [0x10017770]      ; 10010a2d | DAT_10017770
    PUSH ESI                            ; 10010a33
    PUSH -0x1                           ; 10010a34
    PUSH EDI                            ; 10010a36
    PUSH 0x220                          ; 10010a37
    PUSH ECX                            ; 10010a3c
    CALL dword ptr [0x10242230]         ; 10010a3d | PTR_WideCharToMultiByte_10242230
    MOV EBX,EAX                         ; 10010a43
    TEST EBX,EBX                        ; 10010a45
    JZ 0x10010a5f                       ; 10010a47
        ;   XREF to: 10010a5f (CONDITIONAL_JUMP)  ; LAB_10010a5f
    CMP dword ptr [ESP + 0x14],0x0      ; 10010a49
    JNZ 0x10010b07                      ; 10010a4e
        ;   XREF to: 10010b07 (CONDITIONAL_JUMP)  ; LAB_10010b07
    LEA EAX,[EBX + -0x1]                ; 10010a54
    POP EBP                             ; 10010a57
    POP EDI                             ; 10010a58
    POP ESI                             ; 10010a59
    POP EBX                             ; 10010a5a
    ADD ESP,0x8                         ; 10010a5b
    RET                                 ; 10010a5e
    CMP dword ptr [ESP + 0x14],0x0      ; 10010a5f
        ;   Label: LAB_10010a5f
    JNZ 0x10010b07                      ; 10010a64
        ;   XREF to: 10010b07 (CONDITIONAL_JUMP)  ; LAB_10010b07
    CALL dword ptr [0x102421c8]         ; 10010a6a | PTR_GetLastError_102421c8
    CMP EAX,0x7a                        ; 10010a70
    JNZ 0x10010b07                      ; 10010a73
        ;   XREF to: 10010b07 (CONDITIONAL_JUMP)  ; LAB_10010b07
    CMP EBX,EBP                         ; 10010a79
    JNC 0x10010ad1                      ; 10010a7b
        ;   XREF to: 10010ad1 (CONDITIONAL_JUMP)  ; LAB_10010ad1
    LEA EAX,[ESP + 0x14]                ; 10010a7d
        ;   Label: LAB_10010a7d
    MOV ECX,dword ptr [0x10017690]      ; 10010a81 | DAT_10017690
    LEA EDX,[ESP + 0x12]                ; 10010a87
    PUSH EAX                            ; 10010a8b
    PUSH 0x0                            ; 10010a8c
    MOV EAX,[0x10017770]                ; 10010a8e | DAT_10017770
    PUSH ECX                            ; 10010a93
    PUSH EDX                            ; 10010a94
    PUSH 0x1                            ; 10010a95
    PUSH EDI                            ; 10010a97
    PUSH 0x0                            ; 10010a98
    PUSH EAX                            ; 10010a9a
    CALL dword ptr [0x10242230]         ; 10010a9b | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 10010aa1
    JZ 0x10010aef                       ; 10010aa3
        ;   XREF to: 10010aef (CONDITIONAL_JUMP)  ; LAB_10010aef
    CMP dword ptr [ESP + 0x14],0x0      ; 10010aa5
    JNZ 0x10010aef                      ; 10010aaa
        ;   XREF to: 10010aef (CONDITIONAL_JUMP)  ; LAB_10010aef
    LEA ECX,[EBX + EAX*0x1]             ; 10010aac
    CMP ECX,EBP                         ; 10010aaf
    JA 0x10010adb                       ; 10010ab1
        ;   XREF to: 10010adb (CONDITIONAL_JUMP)  ; LAB_10010adb
    XOR EDX,EDX                         ; 10010ab3
    TEST EAX,EAX                        ; 10010ab5
    JLE 0x10010aca                      ; 10010ab7
        ;   XREF to: 10010aca (CONDITIONAL_JUMP)  ; LAB_10010aca
    MOV CL,byte ptr [ESP + EDX*0x1 + 0x12] ; 10010ab9
        ;   Label: LAB_10010ab9
    MOV byte ptr [EBX + ESI*0x1],CL     ; 10010abd
    TEST CL,CL                          ; 10010ac0
    JZ 0x10010ae5                       ; 10010ac2
        ;   XREF to: 10010ae5 (CONDITIONAL_JUMP)  ; LAB_10010ae5
    INC EDX                             ; 10010ac4
    INC EBX                             ; 10010ac5
    CMP EAX,EDX                         ; 10010ac6
    JG 0x10010ab9                       ; 10010ac8
        ;   XREF to: 10010ab9 (CONDITIONAL_JUMP)  ; LAB_10010ab9
    ADD EDI,0x2                         ; 10010aca
        ;   Label: LAB_10010aca
    CMP EBX,EBP                         ; 10010acd
    JC 0x10010a7d                       ; 10010acf
        ;   XREF to: 10010a7d (CONDITIONAL_JUMP)  ; LAB_10010a7d
    MOV EAX,EBX                         ; 10010ad1
        ;   Label: LAB_10010ad1
    POP EBP                             ; 10010ad3
    POP EDI                             ; 10010ad4
    POP ESI                             ; 10010ad5
    POP EBX                             ; 10010ad6
    ADD ESP,0x8                         ; 10010ad7
    RET                                 ; 10010ada
    MOV EAX,EBX                         ; 10010adb
        ;   Label: LAB_10010adb
    POP EBP                             ; 10010add
    POP EDI                             ; 10010ade
    POP ESI                             ; 10010adf
    POP EBX                             ; 10010ae0
    ADD ESP,0x8                         ; 10010ae1
    RET                                 ; 10010ae4
    MOV EAX,EBX                         ; 10010ae5
        ;   Label: LAB_10010ae5
    POP EBP                             ; 10010ae7
    POP EDI                             ; 10010ae8
    POP ESI                             ; 10010ae9
    POP EBX                             ; 10010aea
    ADD ESP,0x8                         ; 10010aeb
    RET                                 ; 10010aee
    CALL crt_errno.c__errno_FUN_10008a20 ; 10010aef
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10010aef
    POP EBP                             ; 10010af4
    MOV dword ptr [EAX],0x2a            ; 10010af5
    MOV EAX,0xffffffff                  ; 10010afb
    POP EDI                             ; 10010b00
    POP ESI                             ; 10010b01
    POP EBX                             ; 10010b02
    ADD ESP,0x8                         ; 10010b03
    RET                                 ; 10010b06
    CALL crt_errno.c__errno_FUN_10008a20 ; 10010b07
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10010b07
    POP EBP                             ; 10010b0c
    MOV dword ptr [EAX],0x2a            ; 10010b0d
    MOV EAX,0xffffffff                  ; 10010b13
    POP EDI                             ; 10010b18
    POP ESI                             ; 10010b19
    POP EBX                             ; 10010b1a
    ADD ESP,0x8                         ; 10010b1b
    RET                                 ; 10010b1e
    TEST EBP,EBP                        ; 10010b1f
        ;   Label: LAB_10010b1f
    JZ 0x10010bd2                       ; 10010b21
        ;   XREF to: 10010bd2 (CONDITIONAL_JUMP)  ; LAB_10010bd2
    MOV EDI,dword ptr [ESP + 0x20]      ; 10010b27
    MOV CX,word ptr [EDI]               ; 10010b2b
        ;   Label: LAB_10010b2b
    CMP CX,0xff                         ; 10010b2e
    JA 0x10010b54                       ; 10010b33
        ;   XREF to: 10010b54 (CONDITIONAL_JUMP)  ; LAB_10010b54
    MOV byte ptr [EAX + ESI*0x1],CL     ; 10010b35
    MOV ECX,EDI                         ; 10010b38
    ADD EDI,0x2                         ; 10010b3a
    CMP word ptr [ECX],0x0              ; 10010b3d
    JZ 0x10010bd2                       ; 10010b41
        ;   XREF to: 10010bd2 (CONDITIONAL_JUMP)  ; LAB_10010bd2
    INC EAX                             ; 10010b47
    CMP EAX,EBP                         ; 10010b48
    JC 0x10010b2b                       ; 10010b4a
        ;   XREF to: 10010b2b (CONDITIONAL_JUMP)  ; LAB_10010b2b
    POP EBP                             ; 10010b4c
    POP EDI                             ; 10010b4d
    POP ESI                             ; 10010b4e
    POP EBX                             ; 10010b4f
    ADD ESP,0x8                         ; 10010b50
    RET                                 ; 10010b53
    CALL crt_errno.c__errno_FUN_10008a20 ; 10010b54
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10010b54
    POP EBP                             ; 10010b59
    MOV dword ptr [EAX],0x2a            ; 10010b5a
    MOV EAX,0xffffffff                  ; 10010b60
    POP EDI                             ; 10010b65
    POP ESI                             ; 10010b66
    POP EBX                             ; 10010b67
    ADD ESP,0x8                         ; 10010b68
    RET                                 ; 10010b6b
    CMP dword ptr [0x10017760],0x0      ; 10010b6c | DAT_10017760
        ;   Label: LAB_10010b6c
    JNZ 0x10010b8a                      ; 10010b73
        ;   XREF to: 10010b8a (CONDITIONAL_JUMP)  ; LAB_10010b8a
    MOV EDI,dword ptr [ESP + 0x20]      ; 10010b75
    PUSH EDI                            ; 10010b79
    CALL crt_string.c_wcslen_FUN_1000a930 ; 10010b7a
        ;   XREF to: 1000a930 (UNCONDITIONAL_CALL)  ; size_t crt_string.c_wcslen_FUN_1000a930(wchar_t * str)
    ADD ESP,0x4                         ; 10010b7f
    POP EBP                             ; 10010b82
    POP EDI                             ; 10010b83
    POP ESI                             ; 10010b84
    POP EBX                             ; 10010b85
    ADD ESP,0x8                         ; 10010b86
    RET                                 ; 10010b89
    LEA EAX,[ESP + 0x14]                ; 10010b8a
        ;   Label: LAB_10010b8a
    MOV EDI,dword ptr [ESP + 0x20]      ; 10010b8e
    PUSH EAX                            ; 10010b92
    PUSH 0x0                            ; 10010b93
    PUSH 0x0                            ; 10010b95
    MOV ECX,dword ptr [0x10017770]      ; 10010b97 | DAT_10017770
    PUSH 0x0                            ; 10010b9d
    PUSH -0x1                           ; 10010b9f
    PUSH EDI                            ; 10010ba1
    PUSH 0x220                          ; 10010ba2
    PUSH ECX                            ; 10010ba7
    CALL dword ptr [0x10242230]         ; 10010ba8 | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 10010bae
    JZ 0x10010bc2                       ; 10010bb0
        ;   XREF to: 10010bc2 (CONDITIONAL_JUMP)  ; LAB_10010bc2
    CMP dword ptr [ESP + 0x14],0x0      ; 10010bb2
    JNZ 0x10010bc2                      ; 10010bb7
        ;   XREF to: 10010bc2 (CONDITIONAL_JUMP)  ; LAB_10010bc2
    DEC EAX                             ; 10010bb9
    POP EBP                             ; 10010bba
    POP EDI                             ; 10010bbb
    POP ESI                             ; 10010bbc
    POP EBX                             ; 10010bbd
    ADD ESP,0x8                         ; 10010bbe
    RET                                 ; 10010bc1
    CALL crt_errno.c__errno_FUN_10008a20 ; 10010bc2
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10010bc2
    MOV dword ptr [EAX],0x2a            ; 10010bc7
    MOV EAX,0xffffffff                  ; 10010bcd
    POP EBP                             ; 10010bd2
        ;   Label: LAB_10010bd2
    POP EDI                             ; 10010bd3
    POP ESI                             ; 10010bd4
    POP EBX                             ; 10010bd5
    ADD ESP,0x8                         ; 10010bd6
    RET                                 ; 10010bd9

