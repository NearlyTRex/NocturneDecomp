; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005ad69a(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005ad6d8 at 005ad707
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad69a
        ;   Label: FUN_005ad69a
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ad69b
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ad69f
    MOV ECX,EAX                         ; 005ad6a3
    CMP EDX,0x14                        ; 005ad6a5
    JGE 0x005ad6d4                      ; 005ad6a8
        ;   XREF to: 005ad6d4 (CONDITIONAL_JUMP)  ; LAB_005ad6d4
    MOV BL,byte ptr [EAX]               ; 005ad6aa
    INC BL                              ; 005ad6ac
    AND EBX,0xff                        ; 005ad6ae
    TEST byte ptr [EBX + 0x6074b8],0x20 ; 005ad6b4
    JZ 0x005ad6d4                       ; 005ad6bb
        ;   XREF to: 005ad6d4 (CONDITIONAL_JUMP)  ; LAB_005ad6d4
    CMP byte ptr [EAX],0x0              ; 005ad6bd
        ;   Label: LAB_005ad6bd
    JZ 0x005ad6c6                       ; 005ad6c0
        ;   XREF to: 005ad6c6 (CONDITIONAL_JUMP)  ; LAB_005ad6c6
    INC EAX                             ; 005ad6c2
    DEC EDX                             ; 005ad6c3
    JMP 0x005ad6bd                      ; 005ad6c4
        ;   XREF to: 005ad6bd (UNCONDITIONAL_JUMP)  ; LAB_005ad6bd
    TEST EDX,EDX                        ; 005ad6c6
        ;   Label: LAB_005ad6c6
    JLE 0x005ad6d1                      ; 005ad6c8
        ;   XREF to: 005ad6d1 (CONDITIONAL_JUMP)  ; LAB_005ad6d1
    DEC EDX                             ; 005ad6ca
    MOV byte ptr [EAX],0x30             ; 005ad6cb
    INC EAX                             ; 005ad6ce
    JMP 0x005ad6c6                      ; 005ad6cf
        ;   XREF to: 005ad6c6 (UNCONDITIONAL_JUMP)  ; LAB_005ad6c6
    MOV byte ptr [EAX],0x0              ; 005ad6d1
        ;   Label: LAB_005ad6d1
    MOV EAX,ECX                         ; 005ad6d4
        ;   Label: LAB_005ad6d4
    POP EBX                             ; 005ad6d6
    RET                                 ; 005ad6d7

