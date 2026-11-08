; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582b10(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004cf430 at 004cf500
;   FUN_0050aa90 at 0050b388
;   FUN_00581310 at 00581f02
;
; Referenced Globals:
;   undefined4 DAT_02c83374
;   undefined4 DAT_02c83414
;   undefined4 DAT_02c834ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00582b10
        ;   Label: FUN_00582b10
    CMP dword ptr [0x02c834ac],0x0      ; 00582b14 | DAT_02c834ac
    JNZ 0x00582b20                      ; 00582b1b
        ;   XREF to: 00582b20 (CONDITIONAL_JUMP)  ; LAB_00582b20
    XOR EAX,EAX                         ; 00582b1d
    RET                                 ; 00582b1f
    PUSH EAX                            ; 00582b20
        ;   Label: LAB_00582b20
    MOV [0x02c83374],EAX                ; 00582b21 | DAT_02c83374
    CALL dword ptr [0x02c83414]         ; 00582b26 | DAT_02c83414
    ADD ESP,0x4                         ; 00582b2c
    RET                                 ; 00582b2f

