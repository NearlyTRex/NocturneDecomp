; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c6418(int param_1)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c594c at 005c5a5b
;   crt_unknown.c_FUN_005c5c78 at 005c5ce5
;   crt_unknown.c_FUN_005c5f7c at 005c6016
;
; Called Functions:
;   crt_unknown.c_FUN_005c5430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6418
        ;   Label: crt_unknown.c_FUN_005c6418
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c6419
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c641d
    LEA EDX,[EAX + -0x1]                ; 005c6420
    MOV dword ptr [EBX + 0xc],EDX       ; 005c6423
    TEST EAX,EAX                        ; 005c6426
    JZ 0x005c643b                       ; 005c6428
        ;   XREF to: 005c643b (CONDITIONAL_JUMP)  ; LAB_005c643b
    PUSH EBX                            ; 005c642a
    CALL crt_unknown.c_FUN_005c5430     ; 005c642b
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5430()
    MOV DL,byte ptr [EBX + 0x10]        ; 005c6430
    ADD ESP,0x4                         ; 005c6433
    TEST DL,0x2                         ; 005c6436
    JZ 0x005c6440                       ; 005c6439
        ;   XREF to: 005c6440 (CONDITIONAL_JUMP)  ; LAB_005c6440
    MOV EAX,0xffffffff                  ; 005c643b
        ;   Label: LAB_005c643b
    POP EBX                             ; 005c6440
        ;   Label: LAB_005c6440
    RET                                 ; 005c6441

