; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004473f0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00447140 at 0044720b
;   FUN_004cfb00 at 004cfb87
;   FUN_0056acd0 at 0056ae92
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004473f0
        ;   Label: FUN_004473f0
    PUSH ESI                            ; 004473f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004473f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004473f6
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004473fa
    JNZ 0x0044741c                      ; 00447401
        ;   XREF to: 0044741c (CONDITIONAL_JUMP)  ; LAB_0044741c
    CMP byte ptr [EBX + 0x2b8],0x0      ; 00447403
    JNZ 0x00447421                      ; 0044740a
        ;   XREF to: 00447421 (CONDITIONAL_JUMP)  ; LAB_00447421
    CMP ESI,dword ptr [EBX + 0x2b4]     ; 0044740c
    JNZ 0x0044741c                      ; 00447412
        ;   XREF to: 0044741c (CONDITIONAL_JUMP)  ; LAB_0044741c
    MOV EAX,0x1                         ; 00447414
    POP ESI                             ; 00447419
    POP EBX                             ; 0044741a
    RET                                 ; 0044741b
    XOR EAX,EAX                         ; 0044741c
        ;   Label: LAB_0044741c
    POP ESI                             ; 0044741e
    POP EBX                             ; 0044741f
    RET                                 ; 00447420
    LEA EAX,[EBX + 0x2b8]               ; 00447421
        ;   Label: LAB_00447421
    PUSH EAX                            ; 00447427
    PUSH ESI                            ; 00447428
    CALL FUN_0040c840                   ; 00447429
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0044742e
    TEST EAX,EAX                        ; 00447431
    JZ 0x0044741c                       ; 00447433
        ;   XREF to: 0044741c (CONDITIONAL_JUMP)  ; LAB_0044741c
    MOV EAX,0x1                         ; 00447435
    MOV dword ptr [EBX + 0x2b4],ESI     ; 0044743a
    POP ESI                             ; 00447440
    POP EBX                             ; 00447441
    RET                                 ; 00447442

