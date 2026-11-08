; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ec9e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf5ec
;   undefined4 DAT_01ccfe90
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061d95c]                ; 004ec9e0 | DAT_0061d95c
        ;   Label: FUN_004ec9e0
    CMP dword ptr [EAX + 0x25c],0x0     ; 004ec9e5 | DAT_01ccf5ec
    JNZ 0x004ec9fd                      ; 004ec9ec
        ;   XREF to: 004ec9fd (CONDITIONAL_JUMP)  ; LAB_004ec9fd
    PUSH 0x1                            ; 004ec9ee
    MOV EDX,dword ptr [EAX + 0xb00]     ; 004ec9f0 | DAT_01ccfe90
    PUSH EAX                            ; 004ec9f6 | DAT_01ccf390
    CALL dword ptr [EDX]                ; 004ec9f7
    ADD ESP,0x8                         ; 004ec9f9
    RET                                 ; 004ec9fc
    PUSH 0x0                            ; 004ec9fd
        ;   Label: LAB_004ec9fd
    MOV EDX,dword ptr [EAX + 0xb00]     ; 004ec9ff | DAT_01ccfe90
    PUSH EAX                            ; 004eca05 | DAT_01ccf390
    CALL dword ptr [EDX]                ; 004eca06
    ADD ESP,0x8                         ; 004eca08
    RET                                 ; 004eca0b

