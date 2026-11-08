; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005badd7(void)
;
;
; XREF[1]:
;   FUN_005badc7 at 005badcb
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a4 = 005bcdfc
;
; Called Functions:
;   FUN_005bae03
;   FUN_005c1c20
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005badd7
        ;   Label: FUN_005badd7
    CMP EAX,ESP                         ; 005badd8
    JNC 0x005badf6                      ; 005badda
        ;   XREF to: 005badf6 (CONDITIONAL_JUMP)  ; LAB_005badf6
    SUB EAX,ESP                         ; 005baddc
    NEG EAX                             ; 005badde
    PUSH ESI                            ; 005bade0
    PUSH EAX                            ; 005bade1
    CALL dword ptr [0x0061f2a4]         ; 005bade2 | PTR_FUN_0061f2a4
    MOV ESI,EAX                         ; 005bade8
    POP EAX                             ; 005badea
    CMP EAX,dword ptr [ESI]             ; 005badeb
    POP ESI                             ; 005baded
    JBE 0x005badf6                      ; 005badee
        ;   XREF to: 005badf6 (CONDITIONAL_JUMP)  ; LAB_005badf6
    CALL FUN_005bae03                   ; 005badf0
        ;   XREF to: 005bae03 (UNCONDITIONAL_CALL)  ; undefined FUN_005bae03()
    RET                                 ; 005badf5
    POP EAX                             ; 005badf6
        ;   Label: LAB_005badf6
    PUSH 0x1                            ; 005badf7
    PUSH 0x61f164                       ; 005badf9
    CALL FUN_005c1c20                   ; 005badfe
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1c20()

