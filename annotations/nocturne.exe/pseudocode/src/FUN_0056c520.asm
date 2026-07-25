; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056c520(undefined4 param_1,uint param_2)
;
; Local Variables:
; undefined1[10]   Stack[-0x10]:10  local_10
;
; Called Functions:
;   FUN_0056c416
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0056c520
        ;   Label: FUN_0056c520
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056c521
    AND EAX,0x7ff00000                  ; 0056c525
    CMP EAX,0x7ff00000                  ; 0056c52a
    JZ 0x0056c564                       ; 0056c52f
        ;   XREF to: 0056c564 (CONDITIONAL_JUMP)  ; LAB_0056c564
    FNSTSW AX                           ; 0056c531
    AND EAX,0x3800                      ; 0056c533
    JZ 0x0056c547                       ; 0056c538
        ;   XREF to: 0056c547 (CONDITIONAL_JUMP)  ; LAB_0056c547
    FLD double ptr [ESP + 0x8]          ; 0056c53a
    CALL FUN_0056c416                   ; 0056c53e
        ;   XREF to: 0056c416 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c416()
    POP EAX                             ; 0056c543
    RET 0x8                             ; 0056c544
    FXCH                                ; 0056c547
        ;   Label: LAB_0056c547
    SUB ESP,0xc                         ; 0056c549
    FSTP extended double ptr [ESP]      ; 0056c54c
    FLD double ptr [ESP + 0x14]         ; 0056c54f
    CALL FUN_0056c416                   ; 0056c553
        ;   XREF to: 0056c416 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c416()
    FLD extended double ptr [ESP]       ; 0056c558
    FXCH                                ; 0056c55b
    ADD ESP,0xc                         ; 0056c55d
    POP EAX                             ; 0056c560
    RET 0x8                             ; 0056c561
    FDIVR double ptr [ESP + 0x8]        ; 0056c564
        ;   Label: LAB_0056c564
    POP EAX                             ; 0056c568
    RET 0x8                             ; 0056c569

