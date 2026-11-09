; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4359(undefined4 param_1,undefined8 *param_2)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005ca282
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c4359
        ;   Label: crt_unknown.c_FUN_005c4359
    MOV EBP,ESP                         ; 005c435a
    SUB ESP,0x8                         ; 005c435c
    PUSH 0x0                            ; 005c435f
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c4361
    PUSH EDX                            ; 005c4364
    CALL crt_unknown.c_FUN_005ca282     ; 005c4365
        ;   XREF to: 005ca282 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca282()
    MOV dword ptr [EBP + -0x8],EAX      ; 005c436a
    MOV dword ptr [EBP + -0x4],EDX      ; 005c436d
    ADD ESP,0x8                         ; 005c4370
    MOV EAX,dword ptr [EBP + 0xc]       ; 005c4373
    MOV EDX,dword ptr [EBP + -0x8]      ; 005c4376
    MOV dword ptr [EAX],EDX             ; 005c4379
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c437b
    MOV dword ptr [EAX + 0x4],EDX       ; 005c437e
    MOV ESP,EBP                         ; 005c4381
    POP EBP                             ; 005c4383
    RET                                 ; 005c4384

