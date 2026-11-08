; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c960(int param_1)
;
;
; XREF[1]:
;   FUN_00450c60 at 004515ac
;
; Called Functions:
;   FUN_0045d1f0
;   FUN_004d0780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c960
        ;   Label: FUN_0045c960
    PUSH ESI                            ; 0045c961
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045c962
    CMP dword ptr [EBX + 0x10a74],0x0   ; 0045c966
    JZ 0x0045c978                       ; 0045c96d
        ;   XREF to: 0045c978 (CONDITIONAL_JUMP)  ; LAB_0045c978
    CMP dword ptr [EBX + 0x256a4],0x0   ; 0045c96f
    JZ 0x0045c97b                       ; 0045c976
        ;   XREF to: 0045c97b (CONDITIONAL_JUMP)  ; LAB_0045c97b
    POP ESI                             ; 0045c978
        ;   Label: LAB_0045c978
    POP EBX                             ; 0045c979
    RET                                 ; 0045c97a
    PUSH EBX                            ; 0045c97b
        ;   Label: LAB_0045c97b
    CALL FUN_0045d1f0                   ; 0045c97c
        ;   XREF to: 0045d1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d1f0()
    ADD ESP,0x4                         ; 0045c981
    TEST EAX,EAX                        ; 0045c984
    JNZ 0x0045c978                      ; 0045c986
        ;   XREF to: 0045c978 (CONDITIONAL_JUMP)  ; LAB_0045c978
    MOV ESI,dword ptr [EBX + 0x25640]   ; 0045c988
    TEST ESI,ESI                        ; 0045c98e
    JNZ 0x0045c978                      ; 0045c990
        ;   XREF to: 0045c978 (CONDITIONAL_JUMP)  ; LAB_0045c978
    FLD float ptr [EBX + 0x259b0]       ; 0045c992
    FLDZ                                ; 0045c998
    FCOMPP                              ; 0045c99a
    FNSTSW AX                           ; 0045c99c
    SAHF                                ; 0045c99e
    JC 0x0045c978                       ; 0045c99f
        ;   XREF to: 0045c978 (CONDITIONAL_JUMP)  ; LAB_0045c978
    PUSH ESI                            ; 0045c9a1
    PUSH EBX                            ; 0045c9a2
    CALL FUN_004d0780                   ; 0045c9a3
        ;   XREF to: 004d0780 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0780()
    ADD ESP,0x8                         ; 0045c9a8
    TEST EAX,EAX                        ; 0045c9ab
    JNZ 0x0045c9b8                      ; 0045c9ad
        ;   XREF to: 0045c9b8 (CONDITIONAL_JUMP)  ; LAB_0045c9b8
    MOV dword ptr [EBX + 0x10a74],EAX   ; 0045c9af
    POP ESI                             ; 0045c9b5
    POP EBX                             ; 0045c9b6
    RET                                 ; 0045c9b7
    PUSH EBX                            ; 0045c9b8
        ;   Label: LAB_0045c9b8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045c9b9
    CALL dword ptr [EAX + 0x164]        ; 0045c9bf
    ADD ESP,0x4                         ; 0045c9c5
    POP ESI                             ; 0045c9c8
    POP EBX                             ; 0045c9c9
    RET                                 ; 0045c9ca

