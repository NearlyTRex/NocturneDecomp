; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056d308(int *param_1,int *param_2)
;
;
; XREF[1]:
;   crt_time.c_determine_dst_status_FUN_0056d034 at 0056d1d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d308
        ;   Label: FUN_0056d308
    PUSH ESI                            ; 0056d309
    PUSH EBP                            ; 0056d30a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056d30b
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056d30f
    MOV ECX,dword ptr [EBX + 0x8]       ; 0056d313
    MOV ESI,dword ptr [EDX + 0x8]       ; 0056d316
    XOR EAX,EAX                         ; 0056d319
    CMP ECX,ESI                         ; 0056d31b
    JL 0x0056d333                       ; 0056d31d
        ;   XREF to: 0056d333 (CONDITIONAL_JUMP)  ; LAB_0056d333
    JNZ 0x0056d338                      ; 0056d31f
        ;   XREF to: 0056d338 (CONDITIONAL_JUMP)  ; LAB_0056d338
    MOV ECX,dword ptr [EBX + 0x4]       ; 0056d321
    MOV EBP,dword ptr [EDX + 0x4]       ; 0056d324
    CMP ECX,EBP                         ; 0056d327
    JL 0x0056d333                       ; 0056d329
        ;   XREF to: 0056d333 (CONDITIONAL_JUMP)  ; LAB_0056d333
    JNZ 0x0056d338                      ; 0056d32b
        ;   XREF to: 0056d338 (CONDITIONAL_JUMP)  ; LAB_0056d338
    MOV EBX,dword ptr [EBX]             ; 0056d32d
    CMP EBX,dword ptr [EDX]             ; 0056d32f
    JGE 0x0056d338                      ; 0056d331
        ;   XREF to: 0056d338 (CONDITIONAL_JUMP)  ; LAB_0056d338
    MOV EAX,0x1                         ; 0056d333
        ;   Label: LAB_0056d333
    POP EBP                             ; 0056d338
        ;   Label: LAB_0056d338
    POP ESI                             ; 0056d339
    POP EBX                             ; 0056d33a
    RET                                 ; 0056d33b

