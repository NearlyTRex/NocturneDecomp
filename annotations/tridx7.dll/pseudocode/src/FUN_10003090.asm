; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char FUN_10003090(int param_1)
;
;
; XREF[1]:
;   FUN_10002f60 at 10002fcf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10003090
        ;   Label: FUN_10003090
    CMP EAX,0x10                        ; 10003094
    JNZ 0x1000309f                      ; 10003097
        ;   XREF to: 1000309f (CONDITIONAL_JUMP)  ; LAB_1000309f
    MOV EAX,0x4                         ; 10003099
    RET                                 ; 1000309e
    CMP EAX,0x20                        ; 1000309f
        ;   Label: LAB_1000309f
    JNZ 0x100030aa                      ; 100030a2
        ;   XREF to: 100030aa (CONDITIONAL_JUMP)  ; LAB_100030aa
    MOV EAX,0x5                         ; 100030a4
    RET                                 ; 100030a9
    CMP EAX,0x40                        ; 100030aa
        ;   Label: LAB_100030aa
    JNZ 0x100030b5                      ; 100030ad
        ;   XREF to: 100030b5 (CONDITIONAL_JUMP)  ; LAB_100030b5
    MOV EAX,0x6                         ; 100030af
    RET                                 ; 100030b4
    CMP EAX,0x80                        ; 100030b5
        ;   Label: LAB_100030b5
    JNZ 0x100030c2                      ; 100030ba
        ;   XREF to: 100030c2 (CONDITIONAL_JUMP)  ; LAB_100030c2
    MOV EAX,0x7                         ; 100030bc
    RET                                 ; 100030c1
    SUB EAX,0x100                       ; 100030c2
        ;   Label: LAB_100030c2
    CMP EAX,0x1                         ; 100030c7
    SBB EAX,EAX                         ; 100030ca
    AND EAX,0x7                         ; 100030cc
    INC EAX                             ; 100030cf
    RET                                 ; 100030d0

