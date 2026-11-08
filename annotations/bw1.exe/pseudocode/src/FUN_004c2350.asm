; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c2350(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[5]:
;   FUN_00480480 at 00480614
;   FUN_004c23f0 at 004c244a
;   FUN_004d8700 at 004d8a37
;   FUN_004d8a90 at 004d8de8
;   FUN_004d8e50 at 004d9052
;
; Called Functions:
;   FUN_004c2060
;   FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2350
        ;   Label: FUN_004c2350
    PUSH ESI                            ; 004c2351
    PUSH EDI                            ; 004c2352
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c2353
    PUSH EAX                            ; 004c2357
    MOV EDX,dword ptr [ESP + 0x28]      ; 004c2358
    PUSH EDX                            ; 004c235c
    MOV ECX,dword ptr [ESP + 0x28]      ; 004c235d
    PUSH ECX                            ; 004c2361
    MOV EBX,dword ptr [ESP + 0x28]      ; 004c2362
    PUSH EBX                            ; 004c2366
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c2367
    PUSH EAX                            ; 004c236b
    MOV EDI,dword ptr [ESP + 0x24]      ; 004c236c
    MOV EBX,dword ptr [ESP + 0x28]      ; 004c2370
    PUSH EDI                            ; 004c2374
    ADD EBX,ESI                         ; 004c2375
    CALL FUN_004c3ea0                   ; 004c2377
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    LEA EDX,[EBX + 0x1]                 ; 004c237c
    SUB EDX,EAX                         ; 004c237f
    MOV EAX,EDX                         ; 004c2381
    SAR EDX,0x1f                        ; 004c2383
    SUB EAX,EDX                         ; 004c2386
    SAR EAX,0x1                         ; 004c2388
    ADD ESP,0x8                         ; 004c238a
    PUSH EAX                            ; 004c238d
    PUSH EDI                            ; 004c238e
    CALL FUN_004c2060                   ; 004c238f
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; undefined FUN_004c2060()
    ADD ESP,0x18                        ; 004c2394
    POP EDI                             ; 004c2397
    POP ESI                             ; 004c2398
    POP EBX                             ; 004c2399
    RET                                 ; 004c239a

