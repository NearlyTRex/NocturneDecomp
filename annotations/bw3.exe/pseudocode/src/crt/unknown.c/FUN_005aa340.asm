; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aa340(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a427c at 005a437f
;   crt_unknown.c_FUN_005a9310 at 005a9317
;
; Called Functions:
;   crt_unknown.c_FUN_005aeb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa340
        ;   Label: crt_unknown.c_FUN_005aa340
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aa341
    TEST byte ptr [EBX + 0xd],0x20      ; 005aa345
    JNZ 0x005aa371                      ; 005aa349
        ;   XREF to: 005aa371 (CONDITIONAL_JUMP)  ; LAB_005aa371
    MOV EDX,dword ptr [EBX + 0x10]      ; 005aa34b
    PUSH EDX                            ; 005aa34e
    CALL crt_unknown.c_FUN_005aeb30     ; 005aa34f
        ;   XREF to: 005aeb30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aeb30()
    ADD ESP,0x4                         ; 005aa354
    TEST EAX,EAX                        ; 005aa357
    JZ 0x005aa371                       ; 005aa359
        ;   XREF to: 005aa371 (CONDITIONAL_JUMP)  ; LAB_005aa371
    MOV DL,byte ptr [EBX + 0xd]         ; 005aa35b
    OR DL,0x20                          ; 005aa35e
    MOV byte ptr [EBX + 0xd],DL         ; 005aa361
    TEST DL,0x7                         ; 005aa364
    JNZ 0x005aa371                      ; 005aa367
        ;   XREF to: 005aa371 (CONDITIONAL_JUMP)  ; LAB_005aa371
    MOV CL,DL                           ; 005aa369
    OR CL,0x2                           ; 005aa36b
    MOV byte ptr [EBX + 0xd],CL         ; 005aa36e
    POP EBX                             ; 005aa371
        ;   Label: LAB_005aa371
    RET                                 ; 005aa372

