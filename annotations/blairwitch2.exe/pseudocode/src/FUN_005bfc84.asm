; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bfc84(void)
;
; Local Variables:
; undefined1[10]   Stack[-0x7a]:10  local_7a
; undefined1[10]   Stack[-0x5e]:10  local_5e
; undefined1[10]   Stack[-0xe]:10  local_e
;
; XREF[1]:
;   FUN_005b9989 at 005b9998
;
; Called Functions:
;   FUN_005c3c70
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005bfc84
        ;   Label: FUN_005bfc84
    SUB ESP,0x76                        ; 005bfc85
    FSTP extended double ptr [ESP + 0x6c] ; 005bfc88
    FNSAVE [ESP]                        ; 005bfc8c
    FLD extended double ptr [ESP + 0x1c] ; 005bfc8f
    FLD extended double ptr [ESP + 0x6c] ; 005bfc93
    CALL FUN_005c3c70                   ; 005bfc97
        ;   XREF to: 005c3c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3c70()
    FNSTSW AX                           ; 005bfc9c
    FSTP extended double ptr [ESP + 0x1c] ; 005bfc9e
    AND AX,0xff                         ; 005bfca2
    OR AX,word ptr [ESP + 0x4]          ; 005bfca6
    MOV word ptr [ESP + 0x4],AX         ; 005bfcab
    FRSTOR [ESP]                        ; 005bfcb0
    ADD ESP,0x76                        ; 005bfcb3
    POP EAX                             ; 005bfcb6
    RET                                 ; 005bfcb7

