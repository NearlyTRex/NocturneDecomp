; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570040(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_00488890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00570040
        ;   Label: FUN_00570040
    PUSH EAX                            ; 00570044
    MOV EDX,dword ptr [ESP + 0x8]       ; 00570045
    PUSH EDX                            ; 00570049
    MOV dword ptr [EAX + 0x4],0x0       ; 0057004a
    CALL FUN_00488890                   ; 00570051
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 00570056
    RET                                 ; 00570059

