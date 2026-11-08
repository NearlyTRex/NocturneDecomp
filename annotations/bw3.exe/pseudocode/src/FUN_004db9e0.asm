; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004db9e0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_004dba80 at 004dba8a
;   FUN_005220d0 at 005223b5
;   FUN_005270a0 at 005270b6
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004db9e0
        ;   Label: FUN_004db9e0
    PUSH ESI                            ; 004db9e1
    PUSH EDI                            ; 004db9e2
    PUSH EBP                            ; 004db9e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004db9e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004db9e8
    MOV EDX,dword ptr [EDI + 0x10]      ; 004db9ec
    XOR ESI,ESI                         ; 004db9ef
    TEST EDX,EDX                        ; 004db9f1
    JLE 0x004dba13                      ; 004db9f3
        ;   XREF to: 004dba13 (CONDITIONAL_JUMP)  ; LAB_004dba13
    MOV EBX,EDI                         ; 004db9f5
    PUSH EBP                            ; 004db9f7
        ;   Label: LAB_004db9f7
    MOV EAX,dword ptr [EBX + 0x14]      ; 004db9f8
    PUSH EAX                            ; 004db9fb
    CALL FUN_0040c790                   ; 004db9fc
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004dba01
    TEST EAX,EAX                        ; 004dba04
    JNZ 0x004dba1a                      ; 004dba06
        ;   XREF to: 004dba1a (CONDITIONAL_JUMP)  ; LAB_004dba1a
    INC ESI                             ; 004dba08
    MOV ECX,dword ptr [EDI + 0x10]      ; 004dba09
    ADD EBX,0x4                         ; 004dba0c
    CMP ESI,ECX                         ; 004dba0f
    JL 0x004db9f7                       ; 004dba11
        ;   XREF to: 004db9f7 (CONDITIONAL_JUMP)  ; LAB_004db9f7
    XOR EAX,EAX                         ; 004dba13
        ;   Label: LAB_004dba13
    POP EBP                             ; 004dba15
    POP EDI                             ; 004dba16
    POP ESI                             ; 004dba17
    POP EBX                             ; 004dba18
    RET                                 ; 004dba19
    MOV EAX,dword ptr [EBX + 0x14]      ; 004dba1a
        ;   Label: LAB_004dba1a
    POP EBP                             ; 004dba1d
    POP EDI                             ; 004dba1e
    POP ESI                             ; 004dba1f
    POP EBX                             ; 004dba20
    RET                                 ; 004dba21

