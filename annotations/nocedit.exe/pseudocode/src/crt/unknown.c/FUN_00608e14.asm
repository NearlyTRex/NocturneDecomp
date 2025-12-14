; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00608e14()
;
; Local Variables:
; undefined1[10]   Stack[-0x7a]:10  local_7a
; undefined1[10]   Stack[-0x5e]:10  local_5e
; undefined1[10]   Stack[-0xe]:10  local_e
;
; XREF[1]:
;   crt_math.c_atan2_FUN_006013b1 at 006013c0
;
; Called Functions:
;   crt_math.c_atan2_FUN_0060c440
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00608e14
        ;   Label: crt_unknown.c_FUN_00608e14
    SUB ESP,0x76                        ; 00608e15
    FSTP extended double ptr [ESP + 0x6c] ; 00608e18
    FNSAVE [ESP]                        ; 00608e1c
    FLD extended double ptr [ESP + 0x1c] ; 00608e1f
    FLD extended double ptr [ESP + 0x6c] ; 00608e23
    CALL crt_math.c_atan2_FUN_0060c440  ; 00608e27
        ;   XREF to: 0060c440 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_0060c440(float10 y, float10 x)
    FNSTSW AX                           ; 00608e2c
    FSTP extended double ptr [ESP + 0x1c] ; 00608e2e
    AND AX,0xff                         ; 00608e32
    OR AX,word ptr [ESP + 0x4]          ; 00608e36
    MOV word ptr [ESP + 0x4],AX         ; 00608e3b
    FRSTOR [ESP]                        ; 00608e40
    ADD ESP,0x76                        ; 00608e43
    POP EAX                             ; 00608e46
    RET                                 ; 00608e47

