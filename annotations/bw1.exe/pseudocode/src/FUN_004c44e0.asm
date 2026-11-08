; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c44e0(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0049d580 at 0049d834
;   FUN_004cc2b0 at 004cc34b
;   FUN_004ccc40 at 004ccc83
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004c44e0
        ;   Label: FUN_004c44e0
    TEST EAX,EAX                        ; 004c44e4
    JL 0x004c44ef                       ; 004c44e6
        ;   XREF to: 004c44ef (CONDITIONAL_JUMP)  ; LAB_004c44ef
    CMP EAX,0x100                       ; 004c44e8
    JL 0x004c44f2                       ; 004c44ed
        ;   XREF to: 004c44f2 (CONDITIONAL_JUMP)  ; LAB_004c44f2
    XOR EAX,EAX                         ; 004c44ef
        ;   Label: LAB_004c44ef
    RET                                 ; 004c44f1
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c44f2
        ;   Label: LAB_004c44f2
    SHL EAX,0x2                         ; 004c44f6
    ADD EAX,EDX                         ; 004c44f9
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004c44fb
    RET                                 ; 004c4501

