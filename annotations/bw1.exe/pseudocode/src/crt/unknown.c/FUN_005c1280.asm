; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c1280(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_00438bd0 at 00438dcf
;
; Called Functions:
;   crt_unknown.c_FUN_005c4fe0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005c1280
        ;   Label: crt_unknown.c_FUN_005c1280
    LEA EAX,[ESP + 0xc]                 ; 005c1283
    MOV dword ptr [ESP],EAX             ; 005c1287
    MOV EAX,ESP                         ; 005c128a
    PUSH EAX                            ; 005c128c
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c128d
    PUSH EDX                            ; 005c1291
    PUSH 0x6262ee                       ; 005c1292
    CALL crt_unknown.c_FUN_005c4fe0     ; 005c1297
        ;   XREF to: 005c4fe0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4fe0()
    ADD ESP,0xc                         ; 005c129c
    ADD ESP,0x4                         ; 005c129f
    RET                                 ; 005c12a2

