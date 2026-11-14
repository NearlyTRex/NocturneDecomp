; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a6144(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   crt_cpp.c_pureVirtualStub_FUN_005a2870 at 005a2877
;   crt_unknown.c_FUN_005a3e21 at 005a3e40
;
; Called Functions:
;   crt_unknown.c_FUN_005acda0
;   crt_unknown.c_FUN_005ad290
;   crt_unknown.c_FUN_005ad2c4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a6144
        ;   Label: crt_unknown.c_FUN_005a6144
    MOV AX,DS                           ; 005a6145
    AND EAX,0xffff                      ; 005a6147
    PUSH EAX                            ; 005a614c
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a614d
    PUSH EDX                            ; 005a6151
    CALL crt_unknown.c_FUN_005ad290     ; 005a6152
        ;   XREF to: 005ad290 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad290()
    ADD ESP,0x8                         ; 005a6157
    TEST EAX,EAX                        ; 005a615a
    JZ 0x005a616d                       ; 005a615c
        ;   XREF to: 005a616d (CONDITIONAL_JUMP)  ; LAB_005a616d
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a615e
    PUSH ESI                            ; 005a6162
    CALL crt_unknown.c_FUN_005ad2c4     ; 005a6163
        ;   XREF to: 005ad2c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad2c4()
    ADD ESP,0x4                         ; 005a6168
    POP ESI                             ; 005a616b
    RET                                 ; 005a616c
    PUSH EBX                            ; 005a616d
        ;   Label: LAB_005a616d
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a616e
    PUSH ECX                            ; 005a6172
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a6173
    PUSH EBX                            ; 005a6177
    CALL crt_unknown.c_FUN_005acda0     ; 005a6178
        ;   XREF to: 005acda0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acda0()
    ADD ESP,0x8                         ; 005a617d
    POP EBX                             ; 005a6180
    POP ESI                             ; 005a6181
    RET                                 ; 005a6182

