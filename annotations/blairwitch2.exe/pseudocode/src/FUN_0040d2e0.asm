; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 FUN_0040d2e0(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00409df0 at 00409dfc
;   FUN_00429c70 at 00429cac
;
; Called Functions:
;   FUN_0040d180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d2e0
        ;   Label: FUN_0040d2e0
    PUSH ESI                            ; 0040d2e1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d2e2
    MOV AH,byte ptr [EBX]               ; 0040d2e6
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040d2e8
    TEST AH,AH                          ; 0040d2ec
    JZ 0x0040d310                       ; 0040d2ee
        ;   XREF to: 0040d310 (CONDITIONAL_JUMP)  ; LAB_0040d310
    XOR EAX,EAX                         ; 0040d2f0
        ;   Label: LAB_0040d2f0
    MOV AL,byte ptr [EBX]               ; 0040d2f2
    PUSH EAX                            ; 0040d2f4
    PUSH ESI                            ; 0040d2f5
    INC EBX                             ; 0040d2f6
    CALL FUN_0040d180                   ; 0040d2f7
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d180()
    MOV DL,byte ptr [EBX]               ; 0040d2fc
    ADD ESP,0x8                         ; 0040d2fe
    TEST DL,DL                          ; 0040d301
    JNZ 0x0040d2f0                      ; 0040d303
        ;   XREF to: 0040d2f0 (CONDITIONAL_JUMP)  ; LAB_0040d2f0
    LEA EAX,[EAX]                       ; 0040d305
    LEA EDX,[EDX]                       ; 0040d30b
    MOV EBX,EBX                         ; 0040d30e
    POP ESI                             ; 0040d310
        ;   Label: LAB_0040d310
    POP EBX                             ; 0040d311
    RET                                 ; 0040d312

