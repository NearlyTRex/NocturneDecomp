; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005afbf0(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005adb48 at 005adb73
;   crt_unknown.c_FUN_005adc24 at 005add0f
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079cc = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079d0 = 005a7f44
;   undefined4 DAT_02d261f0
;
; Called Functions:
;   crt_memory.c_calloc_FUN_005a4b20
;   crt_unknown.c_FUN_005a3770
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005b0d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afbf0
        ;   Label: crt_unknown.c_FUN_005afbf0
    PUSH ESI                            ; 005afbf1
    PUSH EDI                            ; 005afbf2
    MOV EDI,dword ptr [ESP + 0x14]      ; 005afbf3
    CALL dword ptr [0x006079cc]         ; 005afbf7 | PTR_crt_unknown.c_FUN_005a7f44_006079cc
    PUSH 0x10                           ; 005afbfd
    MOV ESI,0x1                         ; 005afbff
    PUSH ESI                            ; 005afc04
    CALL crt_memory.c_calloc_FUN_005a4b20 ; 005afc05
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_calloc_FUN_005a4b20()
    MOV EBX,EAX                         ; 005afc0a
    ADD ESP,0x8                         ; 005afc0c
    TEST EAX,EAX                        ; 005afc0f
    JZ 0x005afc4e                       ; 005afc11
        ;   XREF to: 005afc4e (CONDITIONAL_JUMP)  ; LAB_005afc4e
    PUSH EDI                            ; 005afc13
    CALL crt_unknown.c_FUN_005b0d90     ; 005afc14
        ;   XREF to: 005b0d90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0d90()
    ADD ESP,0x4                         ; 005afc19
    TEST EAX,EAX                        ; 005afc1c
    JZ 0x005afc2d                       ; 005afc1e
        ;   XREF to: 005afc2d (CONDITIONAL_JUMP)  ; LAB_005afc2d
    PUSH EBX                            ; 005afc20
    CALL crt_unknown.c_FUN_005a3770     ; 005afc21
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR ESI,ESI                         ; 005afc26
    ADD ESP,0x4                         ; 005afc28
    JMP 0x005afc50                      ; 005afc2b
        ;   XREF to: 005afc50 (UNCONDITIONAL_JUMP)  ; LAB_005afc50
    MOV EAX,dword ptr [ESP + 0x10]      ; 005afc2d
        ;   Label: LAB_005afc2d
    MOV dword ptr [EBX + 0x8],EDI       ; 005afc31
    MOV dword ptr [EBX + 0x4],EAX       ; 005afc34
    XOR EAX,EAX                         ; 005afc37
    MOV AL,byte ptr [EDI + 0x52]        ; 005afc39
    MOV dword ptr [EBX + 0xc],EAX       ; 005afc3c
    MOV EAX,[0x02d261f0]                ; 005afc3f | DAT_02d261f0
    MOV dword ptr [0x02d261f0],EBX      ; 005afc44 | DAT_02d261f0
    MOV dword ptr [EBX],EAX             ; 005afc4a
    JMP 0x005afc50                      ; 005afc4c
        ;   XREF to: 005afc50 (UNCONDITIONAL_JUMP)  ; LAB_005afc50
    XOR ESI,ESI                         ; 005afc4e
        ;   Label: LAB_005afc4e
    CALL dword ptr [0x006079d0]         ; 005afc50 | PTR_crt_unknown.c_FUN_005a7f44_006079d0
        ;   Label: LAB_005afc50
    MOV EAX,ESI                         ; 005afc56
    POP EDI                             ; 005afc58
    POP ESI                             ; 005afc59
    POP EBX                             ; 005afc5a
    RET                                 ; 005afc5b

