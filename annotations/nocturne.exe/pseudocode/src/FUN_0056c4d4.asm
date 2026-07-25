; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056c4d4(uint param_1)
;
; Local Variables:
; undefined1[10]   Stack[-0x10]:10  local_10
;
; Called Functions:
;   FUN_0056c416
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0056c4d4
        ;   Label: FUN_0056c4d4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056c4d5
    AND EAX,0x7f800000                  ; 0056c4d9
    CMP EAX,0x7f800000                  ; 0056c4de
    JZ 0x0056c518                       ; 0056c4e3
        ;   XREF to: 0056c518 (CONDITIONAL_JUMP)  ; LAB_0056c518
    FNSTSW AX                           ; 0056c4e5
    AND EAX,0x3800                      ; 0056c4e7
    JZ 0x0056c4fb                       ; 0056c4ec
        ;   XREF to: 0056c4fb (CONDITIONAL_JUMP)  ; LAB_0056c4fb
    FLD float ptr [ESP + 0x8]           ; 0056c4ee
    CALL FUN_0056c416                   ; 0056c4f2
        ;   XREF to: 0056c416 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c416()
    POP EAX                             ; 0056c4f7
    RET 0x4                             ; 0056c4f8
    FXCH                                ; 0056c4fb
        ;   Label: LAB_0056c4fb
    SUB ESP,0xc                         ; 0056c4fd
    FSTP extended double ptr [ESP]      ; 0056c500
    FLD float ptr [ESP + 0x14]          ; 0056c503
    CALL FUN_0056c416                   ; 0056c507
        ;   XREF to: 0056c416 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c416()
    FLD extended double ptr [ESP]       ; 0056c50c
    FXCH                                ; 0056c50f
    ADD ESP,0xc                         ; 0056c511
    POP EAX                             ; 0056c514
    RET 0x4                             ; 0056c515
    FDIVR float ptr [ESP + 0x8]         ; 0056c518
        ;   Label: LAB_0056c518
    POP EAX                             ; 0056c51c
    RET 0x4                             ; 0056c51d

