; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00548410(int param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548410
        ;   Label: FUN_00548410
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548411
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548415
    MOV ECX,dword ptr [EDX]             ; 00548419
    CMP ECX,0x1                         ; 0054841b
    JNZ 0x00548430                      ; 0054841e
        ;   XREF to: 00548430 (CONDITIONAL_JUMP)  ; LAB_00548430
    MOV EBX,dword ptr [EAX + 0x16c]     ; 00548420
    CMP EBX,0x4                         ; 00548426
    JZ 0x00548450                       ; 00548429
        ;   XREF to: 00548450 (CONDITIONAL_JUMP)  ; LAB_00548450
    CMP EBX,0x7                         ; 0054842b
    JZ 0x00548450                       ; 0054842e
        ;   XREF to: 00548450 (CONDITIONAL_JUMP)  ; LAB_00548450
    CMP dword ptr [EDX],0x3             ; 00548430
        ;   Label: LAB_00548430
    JNZ 0x00548454                      ; 00548433
        ;   XREF to: 00548454 (CONDITIONAL_JUMP)  ; LAB_00548454
    CMP dword ptr [EAX + 0x16c],0x5     ; 00548435
    JNZ 0x00548454                      ; 0054843c
        ;   XREF to: 00548454 (CONDITIONAL_JUMP)  ; LAB_00548454
    MOV ECX,dword ptr [EAX + 0x2ec]     ; 0054843e
    CMP ECX,dword ptr [EDX + 0x4]       ; 00548444
    JNZ 0x00548454                      ; 00548447
        ;   XREF to: 00548454 (CONDITIONAL_JUMP)  ; LAB_00548454
    MOV EAX,0x1                         ; 00548449
    POP EBX                             ; 0054844e
    RET                                 ; 0054844f
    MOV EAX,ECX                         ; 00548450
        ;   Label: LAB_00548450
    POP EBX                             ; 00548452
    RET                                 ; 00548453
    XOR EAX,EAX                         ; 00548454
        ;   Label: LAB_00548454
    POP EBX                             ; 00548456
    RET                                 ; 00548457

