; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00487930(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005df200
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487930
        ;   Label: FUN_00487930
    MOV EBX,dword ptr [ESP + 0x8]       ; 00487931
    TEST byte ptr [ESP + 0xc],0x4       ; 00487935
    JNZ 0x00487956                      ; 0048793a
        ;   XREF to: 00487956 (CONDITIONAL_JUMP)  ; LAB_00487956
    PUSH 0x1                            ; 0048793c
    PUSH EBX                            ; 0048793e
    CALL FUN_0057aed0                   ; 0048793f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 00487944
    MOV DL,byte ptr [ESP + 0xc]         ; 00487947
    MOV EBX,EAX                         ; 0048794b
    TEST DL,0x2                         ; 0048794d
    JNZ 0x00487971                      ; 00487950
        ;   XREF to: 00487971 (CONDITIONAL_JUMP)  ; LAB_00487971
    MOV EAX,EBX                         ; 00487952
    POP EBX                             ; 00487954
    RET                                 ; 00487955
    PUSH 0x5df200                       ; 00487956 | DAT_005df200
        ;   Label: LAB_00487956
    PUSH EBX                            ; 0048795b
    CALL FUN_005a308f                   ; 0048795c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00487961
    PUSH EAX                            ; 00487964
    CALL FUN_005a30b6                   ; 00487965
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0048796a
    MOV EAX,EBX                         ; 0048796d
    POP EBX                             ; 0048796f
    RET                                 ; 00487970
    PUSH EAX                            ; 00487971
        ;   Label: LAB_00487971
    CALL FUN_005a30c4                   ; 00487972
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00487977
    MOV EAX,EBX                         ; 0048797a
    POP EBX                             ; 0048797c
    RET                                 ; 0048797d

