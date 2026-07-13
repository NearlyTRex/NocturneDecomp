; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048ecb0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059d8b0
;
; Called Functions:
;   FUN_00553ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ecb0
        ;   Label: FUN_0048ecb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048ecb1
    TEST byte ptr [ESP + 0xc],0x4       ; 0048ecb5
    JNZ 0x0048ecd6                      ; 0048ecba
        ;   XREF to: 0048ecd6 (CONDITIONAL_JUMP)  ; LAB_0048ecd6
    PUSH 0x1                            ; 0048ecbc
    PUSH EBX                            ; 0048ecbe
    CALL FUN_00553ea0                   ; 0048ecbf
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00553ea0()
    ADD ESP,0x8                         ; 0048ecc4
    MOV DL,byte ptr [ESP + 0xc]         ; 0048ecc7
    MOV EBX,EAX                         ; 0048eccb
    TEST DL,0x2                         ; 0048eccd
    JNZ 0x0048ecf1                      ; 0048ecd0
        ;   XREF to: 0048ecf1 (CONDITIONAL_JUMP)  ; LAB_0048ecf1
    MOV EAX,EBX                         ; 0048ecd2
    POP EBX                             ; 0048ecd4
    RET                                 ; 0048ecd5
    PUSH 0x59d8b0                       ; 0048ecd6 | DAT_0059d8b0
        ;   Label: LAB_0048ecd6
    PUSH EBX                            ; 0048ecdb
    CALL FUN_0056445f                   ; 0048ecdc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0048ece1
    PUSH EAX                            ; 0048ece4
    CALL FUN_00564486                   ; 0048ece5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0048ecea
    MOV EAX,EBX                         ; 0048eced
    POP EBX                             ; 0048ecef
    RET                                 ; 0048ecf0
    PUSH EAX                            ; 0048ecf1
        ;   Label: LAB_0048ecf1
    CALL FUN_00564494                   ; 0048ecf2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0048ecf7
    MOV EAX,EBX                         ; 0048ecfa
    POP EBX                             ; 0048ecfc
    RET                                 ; 0048ecfd

