; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_string.c_strupr_FUN_0060389c(char * string)
;
; Parameters:
; char *           Stack[0x4]:4   string
;
; XREF[1]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 0060376d
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060389c
        ;   Label: crt_string.c_strupr_FUN_0060389c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060389d
    CMP byte ptr [EBX],0x0              ; 006038a1
    JZ 0x006038bd                       ; 006038a4 | LAB_006038bd
        ;   XREF to: 006038bd (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 006038a6
        ;   Label: LAB_006038a6
    MOV AL,byte ptr [EBX]               ; 006038a8
    PUSH EAX                            ; 006038aa
    INC EBX                             ; 006038ab
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 006038ac | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    MOV byte ptr [EBX + -0x1],AL        ; 006038b1
    MOV DL,byte ptr [EBX]               ; 006038b4
    ADD ESP,0x4                         ; 006038b6
    TEST DL,DL                          ; 006038b9
    JNZ 0x006038a6                      ; 006038bb | LAB_006038a6
        ;   XREF to: 006038a6 (CONDITIONAL_JUMP)
    POP EBX                             ; 006038bd
        ;   Label: LAB_006038bd
    RET                                 ; 006038be

