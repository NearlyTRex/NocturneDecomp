; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c25a4(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bcc3a at 005bcc3a
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c49c0
;   unkafter_morph.cpp_FUN_005c49cc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c25a4
        ;   Label: unkafter_morph.cpp_FUN_005c25a4
    MOV EBP,ESP                         ; 005c25a5
    PUSH EBX                            ; 005c25a7
    PUSH ESI                            ; 005c25a8
    PUSH EDI                            ; 005c25a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c25aa
    CALL unkafter_morph.cpp_FUN_005c49c0 ; 005c25ad
        ;   XREF to: 005c49c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c49c0()
    PUSH EAX                            ; 005c25b2
    PUSH 0x46                           ; 005c25b3
    MOV EDX,dword ptr [EBP + 0x18]      ; 005c25b5
    PUSH EDX                            ; 005c25b8
    PUSH EBX                            ; 005c25b9
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c25ba
    PUSH ECX                            ; 005c25bd
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c25be
    PUSH ESI                            ; 005c25c1
    MOV EDI,dword ptr [EBP + 0x8]       ; 005c25c2
    PUSH EDI                            ; 005c25c5
    CALL unkafter_morph.cpp_FUN_005c49cc ; 005c25c6
        ;   XREF to: 005c49cc (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c49cc()
    MOV EDX,dword ptr [EBP + 0x10]      ; 005c25cb
    MOV ECX,dword ptr [EBX]             ; 005c25ce
    ADD ESP,0x1c                        ; 005c25d0
    ADD EDX,ECX                         ; 005c25d3
    JMP 0x005c2595                      ; 005c25d5
        ;   XREF to: 005c2595 (UNCONDITIONAL_JUMP)  ; LAB_005c2595

