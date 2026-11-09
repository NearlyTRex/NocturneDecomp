; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char unkafter_zombie_cpp_FUN_005cd248(void)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005cd2f8 at 005cd373
;
; Referenced Globals:
;   undefined1 DAT_00626b4c
;
; *****************************************************************************

section .text

    CMP byte ptr [0x00626b4c],0x0       ; 005cd248 | DAT_00626b4c
        ;   Label: unkafter_zombie.cpp_FUN_005cd248
    JNZ 0x005cd26a                      ; 005cd24f
        ;   XREF to: 005cd26a (CONDITIONAL_JUMP)  ; LAB_005cd26a
    PUSH 0x1                            ; 005cd251
    PUSH 0x5cd1b0                       ; 005cd253
    CALL dword ptr CS:[0x5d0620]        ; 005cd258
    TEST EAX,EAX                        ; 005cd25f
    JZ 0x005cd26a                       ; 005cd261
        ;   XREF to: 005cd26a (CONDITIONAL_JUMP)  ; LAB_005cd26a
    MOV byte ptr [0x00626b4c],0x1       ; 005cd263 | DAT_00626b4c
    XOR EAX,EAX                         ; 005cd26a
        ;   Label: LAB_005cd26a
    MOV AL,[0x00626b4c]                 ; 005cd26c | DAT_00626b4c
    RET                                 ; 005cd271

