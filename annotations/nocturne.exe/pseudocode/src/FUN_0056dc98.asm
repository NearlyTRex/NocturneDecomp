; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056dc98(void)
;
; Local Variables:
; undefined1[10]   Stack[-0x7a]:10  local_7a
; undefined1[10]   Stack[-0x5e]:10  local_5e
; undefined1[10]   Stack[-0xe]:10  local_e
;
; XREF[1]:
;   FUN_00566c81 at 00566c90
;
; Called Functions:
;   FUN_00570d50
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0056dc98
        ;   Label: FUN_0056dc98
    SUB ESP,0x76                        ; 0056dc99
    FSTP extended double ptr [ESP + 0x6c] ; 0056dc9c
    FNSAVE [ESP]                        ; 0056dca0
    FLD extended double ptr [ESP + 0x1c] ; 0056dca3
    FLD extended double ptr [ESP + 0x6c] ; 0056dca7
    CALL FUN_00570d50                   ; 0056dcab
        ;   XREF to: 00570d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00570d50()
    FNSTSW AX                           ; 0056dcb0
    FSTP extended double ptr [ESP + 0x1c] ; 0056dcb2
    AND AX,0xff                         ; 0056dcb6
    OR AX,word ptr [ESP + 0x4]          ; 0056dcba
    MOV word ptr [ESP + 0x4],AX         ; 0056dcbf
    FRSTOR [ESP]                        ; 0056dcc4
    ADD ESP,0x76                        ; 0056dcc7
    POP EAX                             ; 0056dcca
    RET                                 ; 0056dccb

