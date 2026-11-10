; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c32d4(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   crt_cpp.c_pureVirtualStub_FUN_005bfae6 at 005bfaed
;   crt_unknown.c_FUN_005c10a1 at 005c10c0
;
; Called Functions:
;   crt_unknown.c_FUN_005c9f30
;   crt_unknown.c_FUN_005ca420
;   crt_unknown.c_FUN_005ca454
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c32d4
        ;   Label: crt_unknown.c_FUN_005c32d4
    MOV AX,DS                           ; 005c32d5
    AND EAX,0xffff                      ; 005c32d7
    PUSH EAX                            ; 005c32dc
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c32dd
    PUSH EDX                            ; 005c32e1
    CALL crt_unknown.c_FUN_005ca420     ; 005c32e2
        ;   XREF to: 005ca420 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca420()
    ADD ESP,0x8                         ; 005c32e7
    TEST EAX,EAX                        ; 005c32ea
    JZ 0x005c32fd                       ; 005c32ec
        ;   XREF to: 005c32fd (CONDITIONAL_JUMP)  ; LAB_005c32fd
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c32ee
    PUSH ESI                            ; 005c32f2
    CALL crt_unknown.c_FUN_005ca454     ; 005c32f3
        ;   XREF to: 005ca454 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca454()
    ADD ESP,0x4                         ; 005c32f8
    POP ESI                             ; 005c32fb
    RET                                 ; 005c32fc
    PUSH EBX                            ; 005c32fd
        ;   Label: LAB_005c32fd
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c32fe
    PUSH ECX                            ; 005c3302
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c3303
    PUSH EBX                            ; 005c3307
    CALL crt_unknown.c_FUN_005c9f30     ; 005c3308
        ;   XREF to: 005c9f30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9f30()
    ADD ESP,0x8                         ; 005c330d
    POP EBX                             ; 005c3310
    POP ESI                             ; 005c3311
    RET                                 ; 005c3312

