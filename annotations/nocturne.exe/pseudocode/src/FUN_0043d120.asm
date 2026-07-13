; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043d120(int param_1)
;
;
; Called Functions:
;   FUN_0048d5d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043d120
        ;   Label: FUN_0043d120
    CMP dword ptr [EAX + 0x570],0x0     ; 0043d124
    JNZ 0x0043d130                      ; 0043d12b
        ;   XREF to: 0043d130 (CONDITIONAL_JUMP)  ; LAB_0043d130
    XOR EAX,EAX                         ; 0043d12d
    RET                                 ; 0043d12f
    ADD EAX,0x574                       ; 0043d130
        ;   Label: LAB_0043d130
    PUSH EAX                            ; 0043d135
    CALL FUN_0048d5d0                   ; 0043d136
        ;   XREF to: 0048d5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048d5d0()
    MOV EAX,0x1                         ; 0043d13b
    ADD ESP,0x4                         ; 0043d140
    RET                                 ; 0043d143

