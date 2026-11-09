; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char unkafter_asgaya_cpp_FUN_005affd8(void)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b0088 at 005b0103
;
; Referenced Globals:
;   undefined1 DAT_00607ef0
;
; *****************************************************************************

section .text

    CMP byte ptr [0x00607ef0],0x0       ; 005affd8 | DAT_00607ef0
        ;   Label: unkafter_asgaya.cpp_FUN_005affd8
    JNZ 0x005afffa                      ; 005affdf
        ;   XREF to: 005afffa (CONDITIONAL_JUMP)  ; LAB_005afffa
    PUSH 0x1                            ; 005affe1
    PUSH 0x5aff40                       ; 005affe3
    CALL dword ptr CS:[0x5b3620]        ; 005affe8
    TEST EAX,EAX                        ; 005affef
    JZ 0x005afffa                       ; 005afff1
        ;   XREF to: 005afffa (CONDITIONAL_JUMP)  ; LAB_005afffa
    MOV byte ptr [0x00607ef0],0x1       ; 005afff3 | DAT_00607ef0
    XOR EAX,EAX                         ; 005afffa
        ;   Label: LAB_005afffa
    MOV AL,[0x00607ef0]                 ; 005afffc | DAT_00607ef0
    RET                                 ; 005b0001

