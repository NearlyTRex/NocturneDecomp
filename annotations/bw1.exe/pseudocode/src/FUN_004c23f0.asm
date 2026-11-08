; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c23f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   FUN_004c23a0 at 004c23d4
;
; Called Functions:
;   FUN_004c2350
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c23f0
        ;   Label: FUN_004c23f0
    PUSH ESI                            ; 004c23f1
    PUSH EDI                            ; 004c23f2
    PUSH EBP                            ; 004c23f3
    SUB ESP,0x1000                      ; 004c23f4
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004c23fa
    PUSH EDX                            ; 004c2401
    MOV ECX,dword ptr [ESP + 0x1030]    ; 004c2402
    PUSH ECX                            ; 004c2409
    LEA EAX,[ESP + 0x8]                 ; 004c240a
    PUSH EAX                            ; 004c240e
    CALL FUN_005bfb18                   ; 004c240f
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 004c2414
    MOV EAX,ESP                         ; 004c2417
    PUSH EAX                            ; 004c2419
    MOV EBX,dword ptr [ESP + 0x102c]    ; 004c241a
    PUSH EBX                            ; 004c2421
    MOV ESI,dword ptr [ESP + 0x102c]    ; 004c2422
    PUSH ESI                            ; 004c2429
    MOV EDI,dword ptr [ESP + 0x102c]    ; 004c242a
    PUSH EDI                            ; 004c2431
    MOV EBP,dword ptr [ESP + 0x102c]    ; 004c2432
    PUSH EBP                            ; 004c2439
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004c243a
    PUSH EAX                            ; 004c2441
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004c2442
    PUSH EDX                            ; 004c2449
    CALL FUN_004c2350                   ; 004c244a
        ;   XREF to: 004c2350 (UNCONDITIONAL_CALL)  ; undefined FUN_004c2350()
    ADD ESP,0x1c                        ; 004c244f
    ADD ESP,0x1000                      ; 004c2452
    POP EBP                             ; 004c2458
    POP EDI                             ; 004c2459
    POP ESI                             ; 004c245a
    POP EBX                             ; 004c245b
    RET                                 ; 004c245c

