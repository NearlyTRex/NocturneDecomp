; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049ce90(int param_1)
;
;
; Called Functions:
;   FUN_0041ad40
;   FUN_00462500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ce90
        ;   Label: FUN_0049ce90
    ADD EAX,0x4                         ; 0049ce94
    PUSH EAX                            ; 0049ce97
    CALL FUN_00462500                   ; 0049ce98
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0049ce9d
    ADD EAX,0x17c                       ; 0049cea0
    PUSH EAX                            ; 0049cea5
    CALL FUN_0041ad40                   ; 0049cea6
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ad40()
    ADD ESP,0x4                         ; 0049ceab
    MOV dword ptr [EAX + 0x25c],0x0     ; 0049ceae
    SUB EAX,0x180                       ; 0049ceb8
    RET                                 ; 0049cebd

