; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c22e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004c2290 at 004c22bf
;
; Called Functions:
;   FUN_004c2250
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c22e0
        ;   Label: FUN_004c22e0
    PUSH ESI                            ; 004c22e1
    PUSH EDI                            ; 004c22e2
    PUSH EBP                            ; 004c22e3
    SUB ESP,0x1000                      ; 004c22e4
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004c22ea
    PUSH EDX                            ; 004c22f1
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004c22f2
    PUSH ECX                            ; 004c22f9
    LEA EAX,[ESP + 0x8]                 ; 004c22fa
    PUSH EAX                            ; 004c22fe
    CALL FUN_005bfb18                   ; 004c22ff
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 004c2304
    MOV EAX,ESP                         ; 004c2307
    PUSH EAX                            ; 004c2309
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004c230a
    PUSH EBX                            ; 004c2311
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004c2312
    PUSH ESI                            ; 004c2319
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004c231a
    PUSH EDI                            ; 004c2321
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004c2322
    PUSH EBP                            ; 004c2329
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004c232a
    PUSH EAX                            ; 004c2331
    CALL FUN_004c2250                   ; 004c2332
        ;   XREF to: 004c2250 (UNCONDITIONAL_CALL)  ; undefined FUN_004c2250()
    ADD ESP,0x18                        ; 004c2337
    ADD ESP,0x1000                      ; 004c233a
    POP EBP                             ; 004c2340
    POP EDI                             ; 004c2341
    POP ESI                             ; 004c2342
    POP EBX                             ; 004c2343
    RET                                 ; 004c2344

