; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce090(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004cf010 at 004cf05b
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_d_005c46ed
;   TerminatedCString s_d_d_005c46fa
;   TerminatedCString s_d_f_d_d_d_005c4701
;
; Called Functions:
;   FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce090
        ;   Label: FUN_004ce090
    PUSH ESI                            ; 004ce091
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ce092
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ce096
    LEA EAX,[EBX + 0x14]                ; 004ce09a
    PUSH EAX                            ; 004ce09d
    LEA EAX,[EBX + 0xc]                 ; 004ce09e
    PUSH EAX                            ; 004ce0a1
    LEA EAX,[EBX + 0x8]                 ; 004ce0a2
    PUSH EAX                            ; 004ce0a5
    LEA EAX,[EBX + 0x4]                 ; 004ce0a6
    PUSH EAX                            ; 004ce0a9
    PUSH 0x5c46ed                       ; 004ce0aa | = "%f,%f,%f,%d\n"
    PUSH ESI                            ; 004ce0af
    CALL FUN_005a3230                   ; 004ce0b0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x18                        ; 004ce0b5
    LEA EAX,[EBX + 0x10]                ; 004ce0b8
    PUSH EAX                            ; 004ce0bb
    PUSH EBX                            ; 004ce0bc
    PUSH 0x5c46fa                       ; 004ce0bd | = "%d,%d\n"
    PUSH ESI                            ; 004ce0c2
    CALL FUN_005a3230                   ; 004ce0c3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 004ce0c8
    LEA EAX,[EBX + 0x28]                ; 004ce0cb
    PUSH EAX                            ; 004ce0ce
    LEA EAX,[EBX + 0x24]                ; 004ce0cf
    PUSH EAX                            ; 004ce0d2
    LEA EAX,[EBX + 0x20]                ; 004ce0d3
    PUSH EAX                            ; 004ce0d6
    LEA EAX,[EBX + 0x1c]                ; 004ce0d7
    PUSH EAX                            ; 004ce0da
    ADD EBX,0x18                        ; 004ce0db
    PUSH EBX                            ; 004ce0de
    PUSH 0x5c4701                       ; 004ce0df | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004ce0e4
    CALL FUN_005a3230                   ; 004ce0e5
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x1c                        ; 004ce0ea
    POP ESI                             ; 004ce0ed
    POP EBX                             ; 004ce0ee
    RET                                 ; 004ce0ef

