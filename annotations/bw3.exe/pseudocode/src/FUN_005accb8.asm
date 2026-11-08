; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005accb8(void)
;
; Local Variables:
; undefined1[10]   Stack[-0x7a]:10  local_7a
; undefined1[10]   Stack[-0x5e]:10  local_5e
; undefined1[10]   Stack[-0xe]:10  local_e
;
; XREF[1]:
;   FUN_005a5cc1 at 005a5cd0
;
; Called Functions:
;   FUN_005af350
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005accb8
        ;   Label: FUN_005accb8
    SUB ESP,0x76                        ; 005accb9
    FSTP extended double ptr [ESP + 0x6c] ; 005accbc
    FNSAVE [ESP]                        ; 005accc0
    FLD extended double ptr [ESP + 0x1c] ; 005accc3
    FLD extended double ptr [ESP + 0x6c] ; 005accc7
    CALL FUN_005af350                   ; 005acccb
        ;   XREF to: 005af350 (UNCONDITIONAL_CALL)  ; undefined FUN_005af350()
    FNSTSW AX                           ; 005accd0
    FSTP extended double ptr [ESP + 0x1c] ; 005accd2
    AND AX,0xff                         ; 005accd6
    OR AX,word ptr [ESP + 0x4]          ; 005accda
    MOV word ptr [ESP + 0x4],AX         ; 005accdf
    FRSTOR [ESP]                        ; 005acce4
    ADD ESP,0x76                        ; 005acce7
    POP EAX                             ; 005accea
    RET                                 ; 005acceb

