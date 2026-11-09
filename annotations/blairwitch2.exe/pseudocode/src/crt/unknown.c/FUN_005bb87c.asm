; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bb87c(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bb938 at 005bbbd5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb87c
        ;   Label: crt_unknown.c_FUN_005bb87c
    PUSH ESI                            ; 005bb87d
    PUSH EDI                            ; 005bb87e
    PUSH EBP                            ; 005bb87f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005bb880
    TEST byte ptr [EAX + 0x1e],0x8      ; 005bb884
    JNZ 0x005bb8ba                      ; 005bb888
        ;   XREF to: 005bb8ba (CONDITIONAL_JUMP)  ; LAB_005bb8ba
    CMP byte ptr [EAX + 0x16],0x30      ; 005bb88a
    JNZ 0x005bb8ba                      ; 005bb88e
        ;   XREF to: 005bb8ba (CONDITIONAL_JUMP)  ; LAB_005bb8ba
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bb890
    MOV EBX,dword ptr [EAX + 0x20]      ; 005bb893
    MOV ECX,dword ptr [EAX + 0x24]      ; 005bb896
    SUB EDX,EBX                         ; 005bb899
    MOV ESI,dword ptr [EAX + 0x28]      ; 005bb89b
    SUB EDX,ECX                         ; 005bb89e
    MOV EDI,dword ptr [EAX + 0x2c]      ; 005bb8a0
    SUB EDX,ESI                         ; 005bb8a3
    MOV EBP,dword ptr [EAX + 0x30]      ; 005bb8a5
    SUB EDX,EDI                         ; 005bb8a8
    MOV EBX,dword ptr [EAX + 0x34]      ; 005bb8aa
    SUB EDX,EBP                         ; 005bb8ad
    SUB EDX,EBX                         ; 005bb8af
    TEST EDX,EDX                        ; 005bb8b1
    JLE 0x005bb8ba                      ; 005bb8b3
        ;   XREF to: 005bb8ba (CONDITIONAL_JUMP)  ; LAB_005bb8ba
    ADD ECX,EDX                         ; 005bb8b5
    MOV dword ptr [EAX + 0x24],ECX      ; 005bb8b7
    POP EBP                             ; 005bb8ba
        ;   Label: LAB_005bb8ba
    POP EDI                             ; 005bb8bb
    POP ESI                             ; 005bb8bc
    POP EBX                             ; 005bb8bd
    RET                                 ; 005bb8be

