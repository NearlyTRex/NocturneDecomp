; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdlib.c_charToDigit_FUN_0060ee18(char ch)
;
; Parameters:
; char             Stack[0x4]:1   ch
;
; XREF[1]:
;   crt_stdlib.c_strtol_internal_FUN_0060ec70 at 0060ed2b
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [ESP + 0x4]         ; 0060ee18
        ;   Label: crt_stdlib.c_charToDigit_FUN_0060ee18
    CMP AL,0x30                         ; 0060ee1c
    JC 0x0060ee2d                       ; 0060ee1e
        ;   XREF to: 0060ee2d (CONDITIONAL_JUMP)  ; LAB_0060ee2d
    CMP AL,0x39                         ; 0060ee20
    JA 0x0060ee2d                       ; 0060ee22
        ;   XREF to: 0060ee2d (CONDITIONAL_JUMP)  ; LAB_0060ee2d
    AND EAX,0xff                        ; 0060ee24
    SUB EAX,0x30                        ; 0060ee29
    RET                                 ; 0060ee2c
    AND EAX,0xff                        ; 0060ee2d
        ;   Label: LAB_0060ee2d
    PUSH EAX                            ; 0060ee32
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 0060ee33
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    MOV EDX,EAX                         ; 0060ee38
    ADD ESP,0x4                         ; 0060ee3a
    CMP AL,0x61                         ; 0060ee3d
    JC 0x0060ee4d                       ; 0060ee3f
        ;   XREF to: 0060ee4d (CONDITIONAL_JUMP)  ; LAB_0060ee4d
    CMP AL,0x69                         ; 0060ee41
    JA 0x0060ee4d                       ; 0060ee43
        ;   XREF to: 0060ee4d (CONDITIONAL_JUMP)  ; LAB_0060ee4d
    XOR EAX,EAX                         ; 0060ee45
    MOV AL,DL                           ; 0060ee47
    SUB EAX,0x57                        ; 0060ee49
    RET                                 ; 0060ee4c
    CMP AL,0x6a                         ; 0060ee4d
        ;   Label: LAB_0060ee4d
    JC 0x0060ee5e                       ; 0060ee4f
        ;   XREF to: 0060ee5e (CONDITIONAL_JUMP)  ; LAB_0060ee5e
    CMP AL,0x72                         ; 0060ee51
    JA 0x0060ee5e                       ; 0060ee53
        ;   XREF to: 0060ee5e (CONDITIONAL_JUMP)  ; LAB_0060ee5e
    AND EAX,0xff                        ; 0060ee55
    SUB EAX,0x57                        ; 0060ee5a
    RET                                 ; 0060ee5d
    CMP AL,0x73                         ; 0060ee5e
        ;   Label: LAB_0060ee5e
    JC 0x0060ee6f                       ; 0060ee60
        ;   XREF to: 0060ee6f (CONDITIONAL_JUMP)  ; LAB_0060ee6f
    CMP AL,0x7a                         ; 0060ee62
    JA 0x0060ee6f                       ; 0060ee64
        ;   XREF to: 0060ee6f (CONDITIONAL_JUMP)  ; LAB_0060ee6f
    AND EAX,0xff                        ; 0060ee66
    SUB EAX,0x57                        ; 0060ee6b
    RET                                 ; 0060ee6e
    MOV EAX,0x25                        ; 0060ee6f
        ;   Label: LAB_0060ee6f
    RET                                 ; 0060ee74

