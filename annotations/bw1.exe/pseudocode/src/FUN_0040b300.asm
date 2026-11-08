; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b300(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   FUN_0040c040 at 0040c051
;
; Referenced Globals:
;   TerminatedCString s_d_f_f_f_005d2a54
;   TerminatedCString s_s_d_g_g_g_005d2a60
;   TerminatedCString s_s_4D_location_00610668
;   undefined1 DAT_006106c0
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;
; Called Functions:
;   FUN_0040b090
;   FUN_0040b110
;   FUN_005c03c0
;   FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040b300
        ;   Label: FUN_0040b300
    PUSH EDI                            ; 0040b301
    PUSH EBP                            ; 0040b302
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040b303
    CMP dword ptr [0x007c3038],0x1      ; 0040b307 | DAT_007c3038
    JNZ 0x0040b360                      ; 0040b30e
        ;   XREF to: 0040b360 (CONDITIONAL_JUMP)  ; LAB_0040b360
    LEA EDX,[EAX + 0x8]                 ; 0040b310
    PUSH EDX                            ; 0040b313
    LEA EDX,[EAX + 0x4]                 ; 0040b314
    PUSH EDX                            ; 0040b317
    PUSH EAX                            ; 0040b318
    ADD EAX,0xc                         ; 0040b319
    PUSH EAX                            ; 0040b31c
    PUSH 0x5d2a54                       ; 0040b31d | = "%d,%f,%f,%f"
    MOV ESI,dword ptr [0x007c3034]      ; 0040b322 | DAT_007c3034
    PUSH ESI                            ; 0040b328
    CALL FUN_005c04b0                   ; 0040b329
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x18                        ; 0040b32e
    CMP EAX,0x4                         ; 0040b331
    JNZ 0x0040b34c                      ; 0040b334
        ;   XREF to: 0040b34c (CONDITIONAL_JUMP)  ; LAB_0040b34c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040b336
        ;   Label: LAB_0040b336
    PUSH EBP                            ; 0040b33a
    PUSH 0x610668                       ; 0040b33b | = "4D location"
    CALL FUN_0040b110                   ; 0040b340
        ;   XREF to: 0040b110 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b110()
    ADD ESP,0x8                         ; 0040b345
    POP EBP                             ; 0040b348
    POP EDI                             ; 0040b349
    POP ESI                             ; 0040b34a
    RET                                 ; 0040b34b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040b34c
        ;   Label: LAB_0040b34c
    PUSH EDI                            ; 0040b350
    PUSH 0x610668                       ; 0040b351 | = "4D location"
    CALL FUN_0040b090                   ; 0040b356
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b090()
    ADD ESP,0x8                         ; 0040b35b
    JMP 0x0040b336                      ; 0040b35e
        ;   XREF to: 0040b336 (UNCONDITIONAL_JUMP)  ; LAB_0040b336
    PUSH EBX                            ; 0040b360
        ;   Label: LAB_0040b360
    SUB ESP,0x8                         ; 0040b361
    FLD float ptr [EAX + 0x8]           ; 0040b364
    FSTP double ptr [ESP]               ; 0040b367
    SUB ESP,0x8                         ; 0040b36a
    FLD float ptr [EAX + 0x4]           ; 0040b36d
    FSTP double ptr [ESP]               ; 0040b370
    SUB ESP,0x8                         ; 0040b373
    FLD float ptr [EAX]                 ; 0040b376
    FSTP double ptr [ESP]               ; 0040b378
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040b37b
    PUSH ECX                            ; 0040b37e
    PUSH 0x6106c0                       ; 0040b37f | DAT_006106c0
    PUSH 0x5d2a60                       ; 0040b384 | = "%s%d,%g,%g,%g"
    MOV EBX,dword ptr [0x007c3034]      ; 0040b389 | DAT_007c3034
    PUSH EBX                            ; 0040b38f
    CALL FUN_005c03c0                   ; 0040b390
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x28                        ; 0040b395
    POP EBX                             ; 0040b398
    JMP 0x0040b336                      ; 0040b399
        ;   XREF to: 0040b336 (UNCONDITIONAL_JUMP)  ; LAB_0040b336

