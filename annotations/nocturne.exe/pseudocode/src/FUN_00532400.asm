; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532400(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00545920 at 005459a4
;
; Referenced Globals:
;   undefined4 DAT_005b762c
;   undefined4 DAT_01c02580
;   undefined4 DAT_01c02584
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d9c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00532400
        ;   Label: FUN_00532400
    CMP dword ptr [0x01c02594],0x0      ; 00532401 | DAT_01c02594
    JNZ 0x0053240e                      ; 00532408
        ;   XREF to: 0053240e (CONDITIONAL_JUMP)  ; LAB_0053240e
    XOR EAX,EAX                         ; 0053240a
    POP EBP                             ; 0053240c
    RET                                 ; 0053240d
    PUSH EDI                            ; 0053240e
        ;   Label: LAB_0053240e
    PUSH ESI                            ; 0053240f
    PUSH EBX                            ; 00532410
    MOV ECX,dword ptr [0x01c02584]      ; 00532411 | DAT_01c02584
    PUSH ECX                            ; 00532417
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00532418
    PUSH EBX                            ; 0053241c
    MOV ESI,dword ptr [0x01c02580]      ; 0053241d | DAT_01c02580
    PUSH ESI                            ; 00532423
    MOV EDI,dword ptr [0x005b762c]      ; 00532424 | DAT_005b762c
    PUSH EDI                            ; 0053242a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0053242b
    PUSH EBP                            ; 0053242f
    CALL dword ptr [0x02dc9d9c]         ; 00532430 | DAT_02dc9d9c
    ADD ESP,0x14                        ; 00532436
    POP EBX                             ; 00532439
    POP ESI                             ; 0053243a
    POP EDI                             ; 0053243b
    POP EBP                             ; 0053243c
    RET                                 ; 0053243d

