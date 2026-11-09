; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf210(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005b8f9c at 005b909f
;   crt_unknown.c_FUN_005be1d0 at 005be1d7
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c39c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bf210
        ;   Label: crt_unknown.c_FUN_005bf210
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bf211
    TEST byte ptr [EBX + 0xd],0x20      ; 005bf215
    JNZ 0x005bf241                      ; 005bf219
        ;   XREF to: 005bf241 (CONDITIONAL_JUMP)  ; LAB_005bf241
    MOV EDX,dword ptr [EBX + 0x10]      ; 005bf21b
    PUSH EDX                            ; 005bf21e
    CALL unkafter_morph.cpp_FUN_005c39c0 ; 005bf21f
        ;   XREF to: 005c39c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c39c0()
    ADD ESP,0x4                         ; 005bf224
    TEST EAX,EAX                        ; 005bf227
    JZ 0x005bf241                       ; 005bf229
        ;   XREF to: 005bf241 (CONDITIONAL_JUMP)  ; LAB_005bf241
    MOV DL,byte ptr [EBX + 0xd]         ; 005bf22b
    OR DL,0x20                          ; 005bf22e
    MOV byte ptr [EBX + 0xd],DL         ; 005bf231
    TEST DL,0x7                         ; 005bf234
    JNZ 0x005bf241                      ; 005bf237
        ;   XREF to: 005bf241 (CONDITIONAL_JUMP)  ; LAB_005bf241
    MOV CL,DL                           ; 005bf239
    OR CL,0x2                           ; 005bf23b
    MOV byte ptr [EBX + 0xd],CL         ; 005bf23e
    POP EBX                             ; 005bf241
        ;   Label: LAB_005bf241
    RET                                 ; 005bf242

