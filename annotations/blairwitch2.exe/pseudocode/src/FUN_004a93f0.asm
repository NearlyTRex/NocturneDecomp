; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a93f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_0047dc40 at 0047dd3c
;   FUN_004eb7c0 at 004eb99e
;   FUN_004ebf10 at 004ecb4b
;
; Called Functions:
;   FUN_004a9440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a93f0
        ;   Label: FUN_004a93f0
    PUSH ESI                            ; 004a93f1
    PUSH EDI                            ; 004a93f2
    PUSH EBP                            ; 004a93f3
    SUB ESP,0x4                         ; 004a93f4
    LEA EAX,[ESP + 0x34]                ; 004a93f7
    MOV dword ptr [ESP],EAX             ; 004a93fb
    MOV EAX,ESP                         ; 004a93fe
    PUSH EAX                            ; 004a9400
    MOV EDX,dword ptr [ESP + 0x34]      ; 004a9401
    PUSH EDX                            ; 004a9405
    MOV ECX,dword ptr [ESP + 0x34]      ; 004a9406
    PUSH ECX                            ; 004a940a
    MOV EBX,dword ptr [ESP + 0x34]      ; 004a940b
    PUSH EBX                            ; 004a940f
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a9410
    PUSH ESI                            ; 004a9414
    MOV EDI,dword ptr [ESP + 0x34]      ; 004a9415
    PUSH EDI                            ; 004a9419
    MOV EBP,dword ptr [ESP + 0x34]      ; 004a941a
    PUSH EBP                            ; 004a941e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a941f
    PUSH EAX                            ; 004a9423
    CALL FUN_004a9440                   ; 004a9424
        ;   XREF to: 004a9440 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9440()
    ADD ESP,0x20                        ; 004a9429
    XOR EDX,EDX                         ; 004a942c
    MOV dword ptr [ESP],EDX             ; 004a942e
    ADD ESP,0x4                         ; 004a9431
    POP EBP                             ; 004a9434
    POP EDI                             ; 004a9435
    POP ESI                             ; 004a9436
    POP EBX                             ; 004a9437
    RET                                 ; 004a9438

