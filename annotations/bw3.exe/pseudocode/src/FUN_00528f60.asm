; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00528f60(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   FUN_004b47d0 at 004b49fb
;   FUN_004c07b0 at 004c0e82
;   FUN_00528fc0 at 00529043
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01ed7010
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528f60
        ;   Label: FUN_00528f60
    SUB ESP,0x8                         ; 00528f61
    MOV EDX,dword ptr [0x005fba18]      ; 00528f64 | DAT_005fba18
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528f6a
    SUB EAX,EDX                         ; 00528f71
    SHL EAX,0x3                         ; 00528f73
    ADD EDX,EAX                         ; 00528f76
    SHL EDX,0x2                         ; 00528f78
    MOV EBX,0xb9                        ; 00528f7b
    MOV EAX,EDX                         ; 00528f80
    SAR EDX,0x1f                        ; 00528f82
    IDIV EBX                            ; 00528f85
    MOV ECX,dword ptr [0x005fba1c]      ; 00528f87 | DAT_005fba1c
    MOV EDX,ECX                         ; 00528f8d
    SUB EDX,EAX                         ; 00528f8f
    MOV EAX,EDX                         ; 00528f91
    SAR EDX,0x1f                        ; 00528f93
    SUB EAX,EDX                         ; 00528f96
    SAR EAX,0x1                         ; 00528f98
    MOV dword ptr [ESP + 0x4],EAX       ; 00528f9a
    FILD dword ptr [ESP + 0x4]          ; 00528f9e
    FMUL float ptr [0x01ed7010]         ; 00528fa2 | DAT_01ed7010
    CALL FUN_005a3120                   ; 00528fa8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00528fad
    MOV EAX,dword ptr [ESP]             ; 00528fb0
    ADD ESP,0x8                         ; 00528fb3
    POP EBX                             ; 00528fb6
    RET                                 ; 00528fb7

