; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005738c8(byte param_1)
;
;
; XREF[1]:
;   FUN_00573720 at 005737db
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_00564860
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [ESP + 0x4]         ; 005738c8
        ;   Label: FUN_005738c8
    CMP AL,0x30                         ; 005738cc
    JC 0x005738dd                       ; 005738ce
        ;   XREF to: 005738dd (CONDITIONAL_JUMP)  ; LAB_005738dd
    CMP AL,0x39                         ; 005738d0
    JA 0x005738dd                       ; 005738d2
        ;   XREF to: 005738dd (CONDITIONAL_JUMP)  ; LAB_005738dd
    AND EAX,0xff                        ; 005738d4
    SUB EAX,0x30                        ; 005738d9
    RET                                 ; 005738dc
    AND EAX,0xff                        ; 005738dd
        ;   Label: LAB_005738dd
    PUSH EAX                            ; 005738e2
    CALL crt_ctype.c_tolower_FUN_00564860 ; 005738e3
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_tolower_FUN_00564860()
    MOV EDX,EAX                         ; 005738e8
    ADD ESP,0x4                         ; 005738ea
    CMP AL,0x61                         ; 005738ed
    JC 0x005738fd                       ; 005738ef
        ;   XREF to: 005738fd (CONDITIONAL_JUMP)  ; LAB_005738fd
    CMP AL,0x69                         ; 005738f1
    JA 0x005738fd                       ; 005738f3
        ;   XREF to: 005738fd (CONDITIONAL_JUMP)  ; LAB_005738fd
    XOR EAX,EAX                         ; 005738f5
    MOV AL,DL                           ; 005738f7
    SUB EAX,0x57                        ; 005738f9
    RET                                 ; 005738fc
    CMP AL,0x6a                         ; 005738fd
        ;   Label: LAB_005738fd
    JC 0x0057390e                       ; 005738ff
        ;   XREF to: 0057390e (CONDITIONAL_JUMP)  ; LAB_0057390e
    CMP AL,0x72                         ; 00573901
    JA 0x0057390e                       ; 00573903
        ;   XREF to: 0057390e (CONDITIONAL_JUMP)  ; LAB_0057390e
    AND EAX,0xff                        ; 00573905
    SUB EAX,0x57                        ; 0057390a
    RET                                 ; 0057390d
    CMP AL,0x73                         ; 0057390e
        ;   Label: LAB_0057390e
    JC 0x0057391f                       ; 00573910
        ;   XREF to: 0057391f (CONDITIONAL_JUMP)  ; LAB_0057391f
    CMP AL,0x7a                         ; 00573912
    JA 0x0057391f                       ; 00573914
        ;   XREF to: 0057391f (CONDITIONAL_JUMP)  ; LAB_0057391f
    AND EAX,0xff                        ; 00573916
    SUB EAX,0x57                        ; 0057391b
    RET                                 ; 0057391e
    MOV EAX,0x25                        ; 0057391f
        ;   Label: LAB_0057391f
    RET                                 ; 00573924

