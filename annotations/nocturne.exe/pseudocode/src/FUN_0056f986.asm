; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_0056f986(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0056f9c4 at 0056f9f3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f986
        ;   Label: FUN_0056f986
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056f987
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056f98b
    MOV ECX,EAX                         ; 0056f98f
    CMP EDX,0x14                        ; 0056f991
    JGE 0x0056f9c0                      ; 0056f994
        ;   XREF to: 0056f9c0 (CONDITIONAL_JUMP)  ; LAB_0056f9c0
    MOV BL,byte ptr [EAX]               ; 0056f996
    INC BL                              ; 0056f998
    AND EBX,0xff                        ; 0056f99a
    TEST byte ptr [EBX + 0x5c168c],0x20 ; 0056f9a0
    JZ 0x0056f9c0                       ; 0056f9a7
        ;   XREF to: 0056f9c0 (CONDITIONAL_JUMP)  ; LAB_0056f9c0
    CMP byte ptr [EAX],0x0              ; 0056f9a9
        ;   Label: LAB_0056f9a9
    JZ 0x0056f9b2                       ; 0056f9ac
        ;   XREF to: 0056f9b2 (CONDITIONAL_JUMP)  ; LAB_0056f9b2
    INC EAX                             ; 0056f9ae
    DEC EDX                             ; 0056f9af
    JMP 0x0056f9a9                      ; 0056f9b0
        ;   XREF to: 0056f9a9 (UNCONDITIONAL_JUMP)  ; LAB_0056f9a9
    TEST EDX,EDX                        ; 0056f9b2
        ;   Label: LAB_0056f9b2
    JLE 0x0056f9bd                      ; 0056f9b4
        ;   XREF to: 0056f9bd (CONDITIONAL_JUMP)  ; LAB_0056f9bd
    DEC EDX                             ; 0056f9b6
    MOV byte ptr [EAX],0x30             ; 0056f9b7
    INC EAX                             ; 0056f9ba
    JMP 0x0056f9b2                      ; 0056f9bb
        ;   XREF to: 0056f9b2 (UNCONDITIONAL_JUMP)  ; LAB_0056f9b2
    MOV byte ptr [EAX],0x0              ; 0056f9bd
        ;   Label: LAB_0056f9bd
    MOV EAX,ECX                         ; 0056f9c0
        ;   Label: LAB_0056f9c0
    POP EBX                             ; 0056f9c2
    RET                                 ; 0056f9c3

