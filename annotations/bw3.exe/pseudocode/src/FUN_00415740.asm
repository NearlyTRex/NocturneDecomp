; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415740(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00416970
;   FUN_0041d790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415740
        ;   Label: FUN_00415740
    SUB ESP,0xc                         ; 00415741
    MOV EBX,dword ptr [ESP + 0x14]      ; 00415744
    PUSH EBX                            ; 00415748
    MOV dword ptr [EBX + 0xf2c],0x0     ; 00415749
    CALL FUN_00416970                   ; 00415753
        ;   XREF to: 00416970 (UNCONDITIONAL_CALL)  ; undefined FUN_00416970()
    ADD ESP,0x4                         ; 00415758
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041575b
    TEST EDX,EDX                        ; 0041575f
    JNZ 0x00415772                      ; 00415761
        ;   XREF to: 00415772 (CONDITIONAL_JUMP)  ; LAB_00415772
    MOV dword ptr [EBX + 0xcbc],0x41200000 ; 00415763
    ADD ESP,0xc                         ; 0041576d
    POP EBX                             ; 00415770
    RET                                 ; 00415771
    PUSH EDI                            ; 00415772
        ;   Label: LAB_00415772
    LEA EAX,[ESP + 0x4]                 ; 00415773
    PUSH EAX                            ; 00415777
    MOV EDI,0x4116cbe4                  ; 00415778
    XOR ECX,ECX                         ; 0041577d
    PUSH EDX                            ; 0041577f
    LEA EAX,[EBX + 0xcd0]               ; 00415780
    MOV dword ptr [ESP + 0x14],ECX      ; 00415786
    PUSH EAX                            ; 0041578a
    MOV dword ptr [ESP + 0x14],ECX      ; 0041578b
    MOV dword ptr [ESP + 0x10],EDI      ; 0041578f
    CALL FUN_0041d790                   ; 00415793
        ;   XREF to: 0041d790 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d790()
    ADD ESP,0xc                         ; 00415798
    POP EDI                             ; 0041579b
    MOV dword ptr [EBX + 0xcbc],0x41200000 ; 0041579c
    ADD ESP,0xc                         ; 004157a6
    POP EBX                             ; 004157a9
    RET                                 ; 004157aa

