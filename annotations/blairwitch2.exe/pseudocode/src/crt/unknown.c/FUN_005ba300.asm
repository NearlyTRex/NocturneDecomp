; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ba300(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_time.c__localtime_FUN_005ba358 at 005ba367
;
; Referenced Globals:
;   undefined4 DAT_0061f638
;   undefined4 DAT_0061f640
;
; Called Functions:
;   crt_unknown.c_FUN_005c1168
;   crt_unknown.c_FUN_005c1500
;   crt_unknown.c_FUN_005c1824
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba300
        ;   Label: crt_unknown.c_FUN_005ba300
    PUSH ESI                            ; 005ba301
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ba302
    CALL crt_unknown.c_FUN_005c1168     ; 005ba306
        ;   XREF to: 005c1168 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1168()
    PUSH EBX                            ; 005ba30b
    MOV EDX,dword ptr [0x0061f638]      ; 005ba30c | DAT_0061f638
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ba312
    PUSH EDX                            ; 005ba316
    MOV ESI,dword ptr [ESI]             ; 005ba317
    PUSH ESI                            ; 005ba319
    PUSH 0x63df                         ; 005ba31a
    CALL crt_unknown.c_FUN_005c1500     ; 005ba31f
        ;   XREF to: 005c1500 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1500()
    ADD ESP,0x10                        ; 005ba324
    PUSH EBX                            ; 005ba327
    CALL crt_unknown.c_FUN_005c1824     ; 005ba328
        ;   XREF to: 005c1824 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1824()
    ADD ESP,0x4                         ; 005ba32d
    TEST EAX,EAX                        ; 005ba330
    JZ 0x005ba351                       ; 005ba332
        ;   XREF to: 005ba351 (CONDITIONAL_JUMP)  ; LAB_005ba351
    MOV EAX,[0x0061f638]                ; 005ba334 | DAT_0061f638
    MOV ECX,dword ptr [0x0061f640]      ; 005ba339 | DAT_0061f640
    PUSH EBX                            ; 005ba33f
    SUB EAX,ECX                         ; 005ba340
    PUSH EAX                            ; 005ba342
    PUSH ESI                            ; 005ba343
    PUSH 0x63df                         ; 005ba344
    CALL crt_unknown.c_FUN_005c1500     ; 005ba349
        ;   XREF to: 005c1500 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1500()
    ADD ESP,0x10                        ; 005ba34e
    MOV EAX,EBX                         ; 005ba351
        ;   Label: LAB_005ba351
    POP ESI                             ; 005ba353
    POP EBX                             ; 005ba354
    RET                                 ; 005ba355

