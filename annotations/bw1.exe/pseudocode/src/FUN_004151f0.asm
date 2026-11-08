; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004151f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040cc00
;   FUN_0042c080
;   FUN_00532fe0
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004151f0
        ;   Label: FUN_004151f0
    SUB ESP,0x4                         ; 004151f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004151f4
    PUSH EBX                            ; 004151f8
    CALL FUN_0042c080                   ; 004151f9
        ;   XREF to: 0042c080 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c080()
    ADD ESP,0x4                         ; 004151fe
    ADD EAX,0xc1d0                      ; 00415201
    PUSH EAX                            ; 00415206
    CALL FUN_00532fe0                   ; 00415207
        ;   XREF to: 00532fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00532fe0()
    LEA EBX,[EAX + 0xffff3e30]          ; 0041520c
    MOV dword ptr [EBX + 0x154],0x5fc764 ; 00415212
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0041521c
    ADD ESP,0x4                         ; 00415226
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 00415229
    PUSH 0x3f8ccccd                     ; 00415233
    MOV dword ptr [EBX + 0x2ffc],0x3fcccccd ; 00415238
    PUSH 0x3f666666                     ; 00415242
    MOV dword ptr [EBX + 0x3000],0xc479c000 ; 00415247
    CALL FUN_0040cc00                   ; 00415251
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 00415256
    FLD float ptr [ESP + 0x8]           ; 0041525a
    ADD ESP,0x8                         ; 0041525e
    MOV dword ptr [EBX + 0x1fab8],0x0   ; 00415261
    PUSH 0x5d3c93                       ; 0041526b
    LEA EAX,[EBX + 0x158]               ; 00415270
    MOV dword ptr [EBX + 0x1fabc],0x0   ; 00415276
    PUSH EAX                            ; 00415280
    FSTP float ptr [EBX + 0x1fab4]      ; 00415281
    CALL FUN_00569f50                   ; 00415287
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x27c0],0x0    ; 0041528c
    ADD ESP,0x8                         ; 00415296
    MOV dword ptr [EBX + 0x1faac],0x0   ; 00415299
    MOV EAX,EBX                         ; 004152a3
    MOV dword ptr [EBX + 0x1fab0],0x0   ; 004152a5
    ADD ESP,0x4                         ; 004152af
    POP EBX                             ; 004152b2
    RET                                 ; 004152b3

