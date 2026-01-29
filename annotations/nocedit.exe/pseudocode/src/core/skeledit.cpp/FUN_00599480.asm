; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_00599480(void)
;
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 00599480
        ;   Label: core_skeledit.cpp_FUN_00599480
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00599485
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0059948a
    PUSH ESI                            ; 0059948b
    PUSH EDI                            ; 0059948c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059948d
    MOV EBX,dword ptr [ESP + 0x14]      ; 00599491
    MOV ECX,0x7                         ; 00599495
    MOV EDI,EAX                         ; 0059949a
    MOV ESI,EBX                         ; 0059949c
    ADD EAX,0x24                        ; 0059949e
    MOVSD.REP ES:EDI,ESI                ; 005994a1
    MOVSW ES:EDI,ESI                    ; 005994a3
    ADD EAX,0x30                        ; 005994a5
    MOV EDX,dword ptr [EBX + 0x20]      ; 005994a8
    MOV dword ptr [EAX + -0x34],EDX     ; 005994ab
    LEA EDX,[EBX + 0x24]                ; 005994ae
    SUB EAX,0x54                        ; 005994b1
    MOV ECX,dword ptr [EDX]             ; 005994b4
    MOV dword ptr [EAX + 0x24],ECX      ; 005994b6
    MOV ECX,dword ptr [EDX + 0x4]       ; 005994b9
    MOV dword ptr [EAX + 0x28],ECX      ; 005994bc
    MOV ECX,dword ptr [EDX + 0x8]       ; 005994bf
    MOV dword ptr [EAX + 0x2c],ECX      ; 005994c2
    MOV ECX,dword ptr [EDX + 0xc]       ; 005994c5
    MOV dword ptr [EAX + 0x30],ECX      ; 005994c8
    MOV ECX,dword ptr [EDX + 0x10]      ; 005994cb
    MOV dword ptr [EAX + 0x34],ECX      ; 005994ce
    MOV ECX,dword ptr [EDX + 0x14]      ; 005994d1
    MOV dword ptr [EAX + 0x38],ECX      ; 005994d4
    MOV ECX,dword ptr [EDX + 0x18]      ; 005994d7
    MOV dword ptr [EAX + 0x3c],ECX      ; 005994da
    MOV ECX,dword ptr [EDX + 0x1c]      ; 005994dd
    MOV dword ptr [EAX + 0x40],ECX      ; 005994e0
    MOV ECX,dword ptr [EDX + 0x20]      ; 005994e3
    MOV dword ptr [EAX + 0x44],ECX      ; 005994e6
    MOV ECX,dword ptr [EDX + 0x24]      ; 005994e9
    MOV dword ptr [EAX + 0x48],ECX      ; 005994ec
    MOV ECX,dword ptr [EDX + 0x28]      ; 005994ef
    MOV dword ptr [EAX + 0x4c],ECX      ; 005994f2
    FLD float ptr [EDX + 0x2c]          ; 005994f5
    LEA EDX,[EBX + 0x54]                ; 005994f8
    FSTP float ptr [EAX + 0x50]         ; 005994fb
    MOV ECX,dword ptr [EDX]             ; 005994fe
    MOV dword ptr [EAX + 0x54],ECX      ; 00599500
    MOV ECX,dword ptr [EDX + 0x4]       ; 00599503
    MOV dword ptr [EAX + 0x58],ECX      ; 00599506
    MOV ECX,dword ptr [EDX + 0x8]       ; 00599509
    MOV dword ptr [EAX + 0x5c],ECX      ; 0059950c
    MOV ECX,dword ptr [EDX + 0xc]       ; 0059950f
    MOV dword ptr [EAX + 0x60],ECX      ; 00599512
    MOV ECX,dword ptr [EDX + 0x10]      ; 00599515
    MOV dword ptr [EAX + 0x64],ECX      ; 00599518
    MOV ECX,dword ptr [EDX + 0x14]      ; 0059951b
    MOV dword ptr [EAX + 0x68],ECX      ; 0059951e
    MOV ECX,dword ptr [EDX + 0x18]      ; 00599521
    MOV dword ptr [EAX + 0x6c],ECX      ; 00599524
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00599527
    MOV dword ptr [EAX + 0x70],ECX      ; 0059952a
    MOV ECX,dword ptr [EDX + 0x20]      ; 0059952d
    MOV dword ptr [EAX + 0x74],ECX      ; 00599530
    MOV ECX,dword ptr [EDX + 0x24]      ; 00599533
    MOV dword ptr [EAX + 0x78],ECX      ; 00599536
    MOV ECX,dword ptr [EDX + 0x28]      ; 00599539
    MOV dword ptr [EAX + 0x7c],ECX      ; 0059953c
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0059953f
    MOV dword ptr [EAX + 0x80],ECX      ; 00599542
    POP EDI                             ; 00599548
    POP ESI                             ; 00599549
    POP EBX                             ; 0059954a
    RET                                 ; 0059954b

