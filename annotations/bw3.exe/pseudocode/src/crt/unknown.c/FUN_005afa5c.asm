; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005afa5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ad6d8 at 005ad6fa
;   crt_unknown.c_FUN_005ad714 at 005ad736
;
; Called Functions:
;   crt_unknown.c_FUN_005a73c8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005afa5c
        ;   Label: crt_unknown.c_FUN_005afa5c
    MOV EBP,ESP                         ; 005afa5d
    PUSH EBX                            ; 005afa5f
    PUSH ESI                            ; 005afa60
    PUSH EDI                            ; 005afa61
    SUB ESP,0x40                        ; 005afa62
    MOV EAX,dword ptr [EBP + 0x8]       ; 005afa65
    MOV dword ptr [EBP + -0x14],EAX     ; 005afa68
    MOV EAX,dword ptr [EBP + 0xc]       ; 005afa6b
    LEA EDX,[EBP + -0x20]               ; 005afa6e
    MOV dword ptr [EBP + -0x10],EAX     ; 005afa71
    LEA EAX,[EBP + -0x14]               ; 005afa74
    FLD double ptr [EAX]                ; 005afa77
    FSTP extended double ptr [EDX]      ; 005afa79
    CMP dword ptr [EBP + 0x1c],0x46     ; 005afa7b
    JNZ 0x005afa90                      ; 005afa7f
        ;   XREF to: 005afa90 (CONDITIONAL_JUMP)  ; LAB_005afa90
    MOV ESI,0xa                         ; 005afa81
    XOR EDI,EDI                         ; 005afa86
    MOV dword ptr [EBP + -0x44],ESI     ; 005afa88
    MOV dword ptr [EBP + -0x48],EDI     ; 005afa8b
    JMP 0x005afaa0                      ; 005afa8e
        ;   XREF to: 005afaa0 (UNCONDITIONAL_JUMP)  ; LAB_005afaa0
    MOV EBX,0xc                         ; 005afa90
        ;   Label: LAB_005afa90
    MOV ECX,0x1                         ; 005afa95
    MOV dword ptr [EBP + -0x44],EBX     ; 005afa9a
    MOV dword ptr [EBP + -0x48],ECX     ; 005afa9d
    MOV EAX,dword ptr [EBP + 0x10]      ; 005afaa0
        ;   Label: LAB_005afaa0
    MOV dword ptr [EBP + -0x4c],EAX     ; 005afaa3
    XOR EAX,EAX                         ; 005afaa6
    MOV EDX,dword ptr [EBP + 0x20]      ; 005afaa8
    MOV dword ptr [EBP + -0x3c],EAX     ; 005afaab
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005afaae
    PUSH EDX                            ; 005afab1
    MOV dword ptr [EBP + -0x40],EAX     ; 005afab2
    LEA EAX,[EBP + -0x4c]               ; 005afab5
    PUSH EAX                            ; 005afab8
    LEA EAX,[EBP + -0x20]               ; 005afab9
    PUSH EAX                            ; 005afabc
    CALL crt_unknown.c_FUN_005a73c8     ; 005afabd
        ;   XREF to: 005a73c8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a73c8()
    MOV EDX,dword ptr [EBP + 0x14]      ; 005afac2
    MOV EAX,dword ptr [EBP + -0x34]     ; 005afac5
    MOV dword ptr [EDX],EAX             ; 005afac8
    MOV EDX,dword ptr [EBP + 0x18]      ; 005afaca
    MOV EAX,dword ptr [EBP + -0x38]     ; 005afacd
    ADD ESP,0xc                         ; 005afad0
    MOV dword ptr [EDX],EAX             ; 005afad3
    MOV EAX,dword ptr [EBP + 0x20]      ; 005afad5
    LEA ESP,[EBP + -0xc]                ; 005afad8
    POP EDI                             ; 005afadb
    POP ESI                             ; 005afadc
    POP EBX                             ; 005afadd
    POP EBP                             ; 005afade
    RET                                 ; 005afadf

