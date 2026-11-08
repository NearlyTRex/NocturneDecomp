; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c2250(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_00480480 at 004805ae
;   FUN_00494400 at 004944bb
;   FUN_004c22e0 at 004c2332
;
; Called Functions:
;   FUN_004c2060
;   FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2250
        ;   Label: FUN_004c2250
    PUSH ESI                            ; 004c2251
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c2252
    PUSH EAX                            ; 004c2256
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c2257
    PUSH EDX                            ; 004c225b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c225c
    PUSH ECX                            ; 004c2260
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c2261
    PUSH EBX                            ; 004c2265
    PUSH EAX                            ; 004c2266
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c2267
    PUSH ESI                            ; 004c226b
    CALL FUN_004c3ea0                   ; 004c226c
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    MOV EDX,EAX                         ; 004c2271
    SAR EDX,0x1f                        ; 004c2273
    SUB EAX,EDX                         ; 004c2276
    SAR EAX,0x1                         ; 004c2278
    ADD ESP,0x8                         ; 004c227a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c227d
    SUB EDX,EAX                         ; 004c2281
    PUSH EDX                            ; 004c2283
    PUSH ESI                            ; 004c2284
    CALL FUN_004c2060                   ; 004c2285
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; undefined FUN_004c2060()
    ADD ESP,0x18                        ; 004c228a
    POP ESI                             ; 004c228d
    POP EBX                             ; 004c228e
    RET                                 ; 004c228f

