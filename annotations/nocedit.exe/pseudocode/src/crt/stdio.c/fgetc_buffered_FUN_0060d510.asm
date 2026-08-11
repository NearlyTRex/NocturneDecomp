; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_fgetc_buffered_FUN_0060d510(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[1]:
;   crt_string.c_mbstrncpy_core_FUN_0060b6d7 at 0060b6dd
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d510
        ;   Label: crt_stdio.c_fgetc_buffered_FUN_0060d510
    PUSH ESI                            ; 0060d511
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060d512
    PUSH 0x1                            ; 0060d516
    PUSH EBX                            ; 0060d518
    CALL 0x00608cd1                     ; 0060d519
        ;   XREF to: 00608cd1 (UNCONDITIONAL_CALL)  ; LAB_00608ccf+2
    ADD ESP,0x8                         ; 0060d51e
    TEST EAX,EAX                        ; 0060d521
    JZ 0x0060d56c                       ; 0060d523
        ;   XREF to: 0060d56c (CONDITIONAL_JUMP)  ; LAB_0060d56c
    MOV EAX,dword ptr [EBX]             ; 0060d525
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060d527
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0060d52a
    MOV ESI,dword ptr [EAX + 0x14]      ; 0060d52e
    CMP ESI,dword ptr [EAX + 0x10]      ; 0060d531
    JNC 0x0060d549                      ; 0060d534
        ;   XREF to: 0060d549 (CONDITIONAL_JUMP)  ; LAB_0060d549
    MOV AL,byte ptr [ESI]               ; 0060d536
    AND EAX,0xff                        ; 0060d538
    MOV ESI,EAX                         ; 0060d53d
        ;   Label: LAB_0060d53d
    CMP EAX,-0x1                        ; 0060d53f
    JZ 0x0060d555                       ; 0060d542
        ;   XREF to: 0060d555 (CONDITIONAL_JUMP)  ; LAB_0060d555
    MOV EAX,ESI                         ; 0060d544
    POP ESI                             ; 0060d546
    POP EBX                             ; 0060d547
    RET                                 ; 0060d548
    PUSH EAX                            ; 0060d549
        ;   Label: LAB_0060d549
    MOV ESI,dword ptr [EAX + 0x28]      ; 0060d54a
    CALL dword ptr [ESI + 0x10]         ; 0060d54d
    ADD ESP,0x4                         ; 0060d550
    JMP 0x0060d53d                      ; 0060d553
        ;   XREF to: 0060d53d (UNCONDITIONAL_JUMP)  ; LAB_0060d53d
    MOV EAX,dword ptr [EBX]             ; 0060d555
        ;   Label: LAB_0060d555
    MOV ECX,dword ptr [EAX + 0x4]       ; 0060d557
    PUSH 0x4                            ; 0060d55a
    ADD EBX,ECX                         ; 0060d55c
    PUSH EBX                            ; 0060d55e
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 0060d55f
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 0060d564
    MOV EAX,ESI                         ; 0060d567
    POP ESI                             ; 0060d569
    POP EBX                             ; 0060d56a
    RET                                 ; 0060d56b
    MOV ESI,0xffffffff                  ; 0060d56c
        ;   Label: LAB_0060d56c
    MOV EAX,ESI                         ; 0060d571
    POP ESI                             ; 0060d573
    POP EBX                             ; 0060d574
    RET                                 ; 0060d575

