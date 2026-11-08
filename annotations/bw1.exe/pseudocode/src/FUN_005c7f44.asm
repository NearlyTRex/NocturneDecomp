; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c7f44(void)
;
; Local Variables:
; undefined1[10]   Stack[-0x7a]:10  local_7a
; undefined1[10]   Stack[-0x5e]:10  local_5e
; undefined1[10]   Stack[-0xe]:10  local_e
;
; XREF[1]:
;   FUN_005c1d69 at 005c1d78
;
; Called Functions:
;   FUN_005cbf70
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c7f44
        ;   Label: FUN_005c7f44
    SUB ESP,0x76                        ; 005c7f45
    FSTP extended double ptr [ESP + 0x6c] ; 005c7f48
    FNSAVE [ESP]                        ; 005c7f4c
    FLD extended double ptr [ESP + 0x1c] ; 005c7f4f
    FLD extended double ptr [ESP + 0x6c] ; 005c7f53
    CALL FUN_005cbf70                   ; 005c7f57
        ;   XREF to: 005cbf70 (UNCONDITIONAL_CALL)  ; undefined FUN_005cbf70()
    FNSTSW AX                           ; 005c7f5c
    FSTP extended double ptr [ESP + 0x1c] ; 005c7f5e
    AND AX,0xff                         ; 005c7f62
    OR AX,word ptr [ESP + 0x4]          ; 005c7f66
    MOV word ptr [ESP + 0x4],AX         ; 005c7f6b
    FRSTOR [ESP]                        ; 005c7f70
    ADD ESP,0x76                        ; 005c7f73
    POP EAX                             ; 005c7f76
    RET                                 ; 005c7f77

