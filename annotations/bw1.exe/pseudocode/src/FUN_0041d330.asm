; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041d330(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0041d540
;   FUN_004a0f00
;   FUN_005247c0
;   FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d330
        ;   Label: FUN_0041d330
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041d331
    MOV EDX,dword ptr [EBX + 0xc278]    ; 0041d335
    PUSH EDX                            ; 0041d33b
    CALL FUN_00573a80                   ; 0041d33c
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0041d341
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041d344
    FLD float ptr [EAX + 0x4]           ; 0041d348
    FSUBR float ptr [EBX + 0x2538]      ; 0041d34b
    FST float ptr [EBX + 0x2538]        ; 0041d351
    FLDZ                                ; 0041d357
    FCOMPP                              ; 0041d359
    FNSTSW AX                           ; 0041d35b
    SAHF                                ; 0041d35d
    JC 0x0041d383                       ; 0041d35e
        ;   XREF to: 0041d383 (CONDITIONAL_JUMP)  ; LAB_0041d383
    PUSH EBX                            ; 0041d360
    MOV dword ptr [EBX + 0x2538],0x3f800000 ; 0041d361
    CALL FUN_0041d540                   ; 0041d36b
        ;   XREF to: 0041d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d540()
    ADD ESP,0x4                         ; 0041d370
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041d373
    PUSH ECX                            ; 0041d377
    PUSH EBX                            ; 0041d378
    CALL FUN_004a0f00                   ; 0041d379
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 0041d37e
    POP EBX                             ; 0041d381
    RET                                 ; 0041d382
    PUSH 0x1                            ; 0041d383
        ;   Label: LAB_0041d383
    PUSH 0x3                            ; 0041d385
    LEA EAX,[EBX + 0x158]               ; 0041d387
    PUSH EAX                            ; 0041d38d
    CALL FUN_005247c0                   ; 0041d38e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041d393
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041d396
    PUSH ECX                            ; 0041d39a
    PUSH EBX                            ; 0041d39b
    CALL FUN_004a0f00                   ; 0041d39c
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 0041d3a1
    POP EBX                             ; 0041d3a4
    RET                                 ; 0041d3a5

