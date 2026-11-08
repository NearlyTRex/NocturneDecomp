; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004343f0(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00434810 at 0043489b
;   FUN_00434a70 at 00434ab3
;
; Called Functions:
;   FUN_00434350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004343f0
        ;   Label: FUN_004343f0
    PUSH EBP                            ; 004343f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004343f2
    MOV EBX,dword ptr [ESP + 0x14]      ; 004343f6
    MOV ECX,dword ptr [EAX]             ; 004343fa
    MOV EDX,dword ptr [EAX + 0xc]       ; 004343fc
    CMP EDX,ECX                         ; 004343ff
    JGE 0x0043446f                      ; 00434401
        ;   XREF to: 0043446f (CONDITIONAL_JUMP)  ; LAB_0043446f
    DEC EDX                             ; 00434403
    TEST dword ptr [EAX + 0xc],EDX      ; 00434404
    JNZ 0x0043440c                      ; 00434407
        ;   XREF to: 0043440c (CONDITIONAL_JUMP)  ; LAB_0043440c
    INC dword ptr [EAX + 0x8]           ; 00434409
    PUSH ESI                            ; 0043440c
        ;   Label: LAB_0043440c
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043440d
    MOV ECX,dword ptr [EAX + 0x10]      ; 00434410
    SHL EDX,0x4                         ; 00434413
    ADD EDX,ECX                         ; 00434416
    MOV ECX,dword ptr [ESP + 0x14]      ; 00434418
    MOV dword ptr [EDX],ECX             ; 0043441c
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043441e
    MOV ECX,dword ptr [EAX + 0x10]      ; 00434421
    SHL EDX,0x4                         ; 00434424
    MOV dword ptr [ECX + EDX*0x1 + 0x4],EBX ; 00434427
    MOV ECX,dword ptr [EAX + 0xc]       ; 0043442b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043442e
    SHL ECX,0x4                         ; 00434431
    MOV dword ptr [ECX + EDX*0x1 + 0x8],0xffffffff ; 00434434
    MOV ECX,EBX                         ; 0043443c
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043443e
    MOV EBX,dword ptr [EAX + 0xc]       ; 00434441
    SHL ECX,0x4                         ; 00434444
    SHL EBX,0x4                         ; 00434447
    LEA ESI,[EDX + ECX*0x1]             ; 0043444a
    ADD EBX,EDX                         ; 0043444d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043444f
    MOV dword ptr [EBX + 0xc],EDX       ; 00434452
    MOV EDX,dword ptr [EAX + 0x10]      ; 00434455
    ADD ECX,EDX                         ; 00434458
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043445a
    MOV dword ptr [ECX + 0x8],EDX       ; 0043445d
    MOV EBP,dword ptr [EAX + 0xc]       ; 00434460
    INC EBP                             ; 00434463
    XOR EDX,EDX                         ; 00434464
    MOV dword ptr [EAX + 0xc],EBP       ; 00434466
    POP ESI                             ; 00434469
    MOV EAX,EDX                         ; 0043446a
    POP EBP                             ; 0043446c
    POP EBX                             ; 0043446d
    RET                                 ; 0043446e
    PUSH EAX                            ; 0043446f
        ;   Label: LAB_0043446f
    CALL FUN_00434350                   ; 00434470
        ;   XREF to: 00434350 (UNCONDITIONAL_CALL)  ; undefined FUN_00434350()
    MOV EDX,0x1                         ; 00434475
    ADD ESP,0x4                         ; 0043447a
    MOV EAX,EDX                         ; 0043447d
    POP EBP                             ; 0043447f
    POP EBX                             ; 00434480
    RET                                 ; 00434481

