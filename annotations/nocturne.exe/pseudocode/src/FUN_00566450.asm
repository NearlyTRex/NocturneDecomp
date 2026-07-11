; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00566450(int param_1,undefined4 param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00566498 at 00566521
;
; Called Functions:
;   FUN_0056db40
;   FUN_0056db80
;   FUN_0056dbb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566450
        ;   Label: FUN_00566450
    PUSH ESI                            ; 00566451
    MOV ESI,dword ptr [ESP + 0xc]       ; 00566452
    MOV EAX,dword ptr [ESP + 0x14]      ; 00566456
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056645a
    TEST ESI,ESI                        ; 0056645e
    JZ 0x00566495                       ; 00566460
        ;   XREF to: 00566495 (CONDITIONAL_JUMP)  ; LAB_00566495
    CMP EAX,EBX                         ; 00566462
    JLE 0x00566468                      ; 00566464
        ;   XREF to: 00566468 (CONDITIONAL_JUMP)  ; LAB_00566468
    MOV EAX,EBX                         ; 00566466
    PUSH EAX                            ; 00566468
        ;   Label: LAB_00566468
    MOV EDX,dword ptr [ESP + 0x14]      ; 00566469
    PUSH EDX                            ; 0056646d
    CALL FUN_0056db40                   ; 0056646e
        ;   XREF to: 0056db40 (UNCONDITIONAL_CALL)  ; undefined FUN_0056db40()
    ADD ESP,0x8                         ; 00566473
    PUSH EAX                            ; 00566476
    MOV ECX,dword ptr [ESP + 0x14]      ; 00566477
    PUSH ECX                            ; 0056647b
    PUSH ESI                            ; 0056647c
    MOV EBX,EAX                         ; 0056647d
    CALL FUN_0056db80                   ; 0056647f
        ;   XREF to: 0056db80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056db80()
    ADD ESP,0xc                         ; 00566484
    PUSH EBX                            ; 00566487
    PUSH ESI                            ; 00566488
    CALL FUN_0056dbb0                   ; 00566489
        ;   XREF to: 0056dbb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dbb0()
    ADD ESP,0x8                         ; 0056648e
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 00566491
    POP ESI                             ; 00566495
        ;   Label: LAB_00566495
    POP EBX                             ; 00566496
    RET                                 ; 00566497

