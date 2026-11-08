; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058caf0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_005d896e+1
;
; Called Functions:
;   FUN_0040c790
;   FUN_0048a200
;
; *****************************************************************************

section .text

    PUSH 0x5d896f                       ; 0058caf0 | s_CTentacle_005d896e+1
        ;   Label: FUN_0058caf0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058caf5
    PUSH EDX                            ; 0058caf9
    CALL FUN_0040c790                   ; 0058cafa
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0058caff
    TEST EAX,EAX                        ; 0058cb02
    JZ 0x0058cb0c                       ; 0058cb04
        ;   XREF to: 0058cb0c (CONDITIONAL_JUMP)  ; LAB_0058cb0c
    MOV EAX,0x1                         ; 0058cb06
    RET                                 ; 0058cb0b
    PUSH EBX                            ; 0058cb0c
        ;   Label: LAB_0058cb0c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0058cb0d
    PUSH ECX                            ; 0058cb11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058cb12
    PUSH EBX                            ; 0058cb16
    CALL FUN_0048a200                   ; 0058cb17
        ;   XREF to: 0048a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0048a200()
    ADD ESP,0x8                         ; 0058cb1c
    POP EBX                             ; 0058cb1f
    RET                                 ; 0058cb20

