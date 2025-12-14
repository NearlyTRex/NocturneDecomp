; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00536bc0()
;
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00536bc0
        ;   Label: core_msnedit.cpp_FUN_00536bc0
    MOV AL,DL                           ; 00536bc4
    INC AL                              ; 00536bc6
    AND EAX,0xff                        ; 00536bc8
    TEST byte ptr [EAX + 0x6849c4],0xe0 ; 00536bcd | g_CharacterClassificationTable
    JNZ 0x00536be0                      ; 00536bd4
        ;   XREF to: 00536be0 (CONDITIONAL_JUMP)  ; LAB_00536be0
    CMP EDX,0x2d                        ; 00536bd6
    JZ 0x00536be0                       ; 00536bd9
        ;   XREF to: 00536be0 (CONDITIONAL_JUMP)  ; LAB_00536be0
    CMP EDX,0x5f                        ; 00536bdb
    JNZ 0x00536be3                      ; 00536bde
        ;   XREF to: 00536be3 (CONDITIONAL_JUMP)  ; LAB_00536be3
    XOR EAX,EAX                         ; 00536be0
        ;   Label: LAB_00536be0
    RET                                 ; 00536be2
    MOV EAX,0x1                         ; 00536be3
        ;   Label: LAB_00536be3
    RET                                 ; 00536be8

