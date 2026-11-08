; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ad910(int param_1)
;
;
; Called Functions:
;   FUN_0041c690
;   FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad910
        ;   Label: FUN_005ad910
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ad911
    PUSH EDX                            ; 005ad915
    CALL FUN_0041c690                   ; 005ad916
        ;   XREF to: 0041c690 (UNCONDITIONAL_CALL)  ; undefined FUN_0041c690()
    ADD ESP,0x4                         ; 005ad91b
    MOV EBX,EAX                         ; 005ad91e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ad920
    ADD EAX,0x154                       ; 005ad924
    PUSH EAX                            ; 005ad929
    CALL FUN_005a8290                   ; 005ad92a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8290()
    ADD ESP,0x4                         ; 005ad92f
    MOV EAX,EBX                         ; 005ad932
    POP EBX                             ; 005ad934
    RET                                 ; 005ad935

