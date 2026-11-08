; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c500(int param_1)
;
;
; XREF[2]:
;   FUN_0045c380 at 0045c391
;   FUN_00534890 at 00534958
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045c500
        ;   Label: FUN_0045c500
    CMP dword ptr [EAX + 0x2f9c],0x0    ; 0045c504
    JNZ 0x0045c50e                      ; 0045c50b
        ;   XREF to: 0045c50e (CONDITIONAL_JUMP)  ; LAB_0045c50e
    RET                                 ; 0045c50d
    MOV dword ptr [EAX + 0x164],0x0     ; 0045c50e
        ;   Label: LAB_0045c50e
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 0045c518
    RET                                 ; 0045c522

