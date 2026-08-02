; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056986c(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00569928 at 00569bc5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056986c
        ;   Label: crt_unknown.c_FUN_0056986c
    PUSH ESI                            ; 0056986d
    PUSH EDI                            ; 0056986e
    PUSH EBP                            ; 0056986f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569870
    TEST byte ptr [EAX + 0x1e],0x8      ; 00569874
    JNZ 0x005698aa                      ; 00569878
        ;   XREF to: 005698aa (CONDITIONAL_JUMP)  ; LAB_005698aa
    CMP byte ptr [EAX + 0x16],0x30      ; 0056987a
    JNZ 0x005698aa                      ; 0056987e
        ;   XREF to: 005698aa (CONDITIONAL_JUMP)  ; LAB_005698aa
    MOV EDX,dword ptr [EAX + 0x4]       ; 00569880
    MOV EBX,dword ptr [EAX + 0x20]      ; 00569883
    MOV ECX,dword ptr [EAX + 0x24]      ; 00569886
    SUB EDX,EBX                         ; 00569889
    MOV ESI,dword ptr [EAX + 0x28]      ; 0056988b
    SUB EDX,ECX                         ; 0056988e
    MOV EDI,dword ptr [EAX + 0x2c]      ; 00569890
    SUB EDX,ESI                         ; 00569893
    MOV EBP,dword ptr [EAX + 0x30]      ; 00569895
    SUB EDX,EDI                         ; 00569898
    MOV EBX,dword ptr [EAX + 0x34]      ; 0056989a
    SUB EDX,EBP                         ; 0056989d
    SUB EDX,EBX                         ; 0056989f
    TEST EDX,EDX                        ; 005698a1
    JLE 0x005698aa                      ; 005698a3
        ;   XREF to: 005698aa (CONDITIONAL_JUMP)  ; LAB_005698aa
    ADD ECX,EDX                         ; 005698a5
    MOV dword ptr [EAX + 0x24],ECX      ; 005698a7
    POP EBP                             ; 005698aa
        ;   Label: LAB_005698aa
    POP EDI                             ; 005698ab
    POP ESI                             ; 005698ac
    POP EBX                             ; 005698ad
    RET                                 ; 005698ae

