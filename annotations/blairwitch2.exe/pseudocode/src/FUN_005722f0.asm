; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005722f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005722f0
        ;   Label: FUN_005722f0
    PUSH EDX                            ; 005722f4
    CALL FUN_00408790                   ; 005722f5
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    MOV dword ptr [EAX + 0x2b0],0x5fcb34 ; 005722fa
    MOV dword ptr [EAX + 0x2b4],0x40a00000 ; 00572304
    MOV dword ptr [EAX + 0x2b8],0x41100000 ; 0057230e
    MOV dword ptr [EAX + 0x2bc],0x40a00000 ; 00572318
    ADD ESP,0x4                         ; 00572322
    MOV dword ptr [EAX + 0x2c0],0x0     ; 00572325
    RET                                 ; 0057232f

