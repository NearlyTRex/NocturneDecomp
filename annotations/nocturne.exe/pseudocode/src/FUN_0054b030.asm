; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054b030(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777f0
;
; Called Functions:
;   FUN_00554260
;
; *****************************************************************************

section .text

    MOV EAX,[0x005b9354]                ; 0054b030 | DAT_005b9354
        ;   Label: FUN_0054b030
    CMP dword ptr [EAX + 0x204],0x0     ; 0054b035 | DAT_01c777f0
    JNZ 0x0054b041                      ; 0054b03c
        ;   XREF to: 0054b041 (CONDITIONAL_JUMP)  ; LAB_0054b041
    XOR EAX,EAX                         ; 0054b03e
    RET                                 ; 0054b040
    PUSH EBX                            ; 0054b041
        ;   Label: LAB_0054b041
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054b042
    PUSH ECX                            ; 0054b046
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054b047
    PUSH EBX                            ; 0054b04b
    CALL FUN_00554260                   ; 0054b04c
        ;   XREF to: 00554260 (UNCONDITIONAL_CALL)  ; undefined FUN_00554260()
    ADD ESP,0x8                         ; 0054b051
    POP EBX                             ; 0054b054
    RET                                 ; 0054b055

