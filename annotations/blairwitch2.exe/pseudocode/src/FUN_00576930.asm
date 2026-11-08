; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00576930(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576930
        ;   Label: FUN_00576930
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576931
    PUSH EBX                            ; 00576935
    CALL FUN_00408790                   ; 00576936
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0057693b
    ADD EAX,0x2b4                       ; 0057693e
    PUSH EAX                            ; 00576943
    CALL FUN_0044fc80                   ; 00576944
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 00576949
    LEA EBX,[EAX + 0xfffffd4c]          ; 0057694c
    PUSH 0x5ecd0d                       ; 00576952
    LEA EAX,[EBX + 0x2b4]               ; 00576957
    PUSH EAX                            ; 0057695d
    MOV dword ptr [EBX + 0x2b0],0x5fd0f4 ; 0057695e
    CALL FUN_0044fd70                   ; 00576968
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0057696d
    MOV EAX,EBX                         ; 00576970
    POP EBX                             ; 00576972
    RET                                 ; 00576973

