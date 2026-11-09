; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a31a8(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_stdio.c_fscanf_FUN_005a3230 at 005a3248
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a82c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a31a8
        ;   Label: crt_unknown.c_FUN_005a31a8
    PUSH ESI                            ; 005a31a9
    PUSH EDI                            ; 005a31aa
    PUSH EBP                            ; 005a31ab
    SUB ESP,0x14                        ; 005a31ac
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a31af
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a31b3
    PUSH EDX                            ; 005a31b6
    CALL dword ptr [0x006079a4]         ; 005a31b7 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a31bd
    MOV ECX,dword ptr [EAX + 0xc]       ; 005a31c0
    ADD ESP,0x4                         ; 005a31c3
    CMP ECX,0x1                         ; 005a31c6
    JZ 0x005a31e7                       ; 005a31c9
        ;   XREF to: 005a31e7 (CONDITIONAL_JUMP)  ; LAB_005a31e7
    TEST ECX,ECX                        ; 005a31cb
    JZ 0x005a31e0                       ; 005a31cd
        ;   XREF to: 005a31e0 (CONDITIONAL_JUMP)  ; LAB_005a31e0
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a31cf
    PUSH EDI                            ; 005a31d2
    CALL dword ptr [0x006079a8]         ; 005a31d3 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a31d9
    XOR EAX,EAX                         ; 005a31dc
    JMP 0x005a3225                      ; 005a31de
        ;   XREF to: 005a3225 (UNCONDITIONAL_JUMP)  ; LAB_005a3225
    MOV dword ptr [EAX + 0xc],0x1       ; 005a31e0
        ;   Label: LAB_005a31e0
    MOV EDX,dword ptr [ESP + 0x30]      ; 005a31e7
        ;   Label: LAB_005a31e7
    MOV EAX,0x5a3190                    ; 005a31eb
    PUSH EDX                            ; 005a31f0
    MOV ECX,dword ptr [ESP + 0x30]      ; 005a31f1
    MOV dword ptr [ESP + 0x8],EAX       ; 005a31f5
    PUSH ECX                            ; 005a31f9
    LEA EAX,[ESP + 0x8]                 ; 005a31fa
    MOV EBP,0x5a3170                    ; 005a31fe
    PUSH EAX                            ; 005a3203
    MOV dword ptr [ESP + 0x14],EBX      ; 005a3204
    MOV dword ptr [ESP + 0xc],EBP       ; 005a3208
    CALL crt_unknown.c_FUN_005a82c0     ; 005a320c
        ;   XREF to: 005a82c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82c0()
    ADD ESP,0xc                         ; 005a3211
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a3214
    PUSH EDI                            ; 005a3217
    MOV ESI,EAX                         ; 005a3218
    CALL dword ptr [0x006079a8]         ; 005a321a | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a3220
    MOV EAX,ESI                         ; 005a3223
    ADD ESP,0x14                        ; 005a3225
        ;   Label: LAB_005a3225
    POP EBP                             ; 005a3228
    POP EDI                             ; 005a3229
    POP ESI                             ; 005a322a
    POP EBX                             ; 005a322b
    RET                                 ; 005a322c

