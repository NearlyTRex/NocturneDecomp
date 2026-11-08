; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005ca82a(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005ca868 at 005ca897
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca82a
        ;   Label: FUN_005ca82a
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ca82b
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ca82f
    MOV ECX,EAX                         ; 005ca833
    CMP EDX,0x14                        ; 005ca835
    JGE 0x005ca864                      ; 005ca838
        ;   XREF to: 005ca864 (CONDITIONAL_JUMP)  ; LAB_005ca864
    MOV BL,byte ptr [EAX]               ; 005ca83a
    INC BL                              ; 005ca83c
    AND EBX,0xff                        ; 005ca83e
    TEST byte ptr [EBX + 0x626114],0x20 ; 005ca844
    JZ 0x005ca864                       ; 005ca84b
        ;   XREF to: 005ca864 (CONDITIONAL_JUMP)  ; LAB_005ca864
    CMP byte ptr [EAX],0x0              ; 005ca84d
        ;   Label: LAB_005ca84d
    JZ 0x005ca856                       ; 005ca850
        ;   XREF to: 005ca856 (CONDITIONAL_JUMP)  ; LAB_005ca856
    INC EAX                             ; 005ca852
    DEC EDX                             ; 005ca853
    JMP 0x005ca84d                      ; 005ca854
        ;   XREF to: 005ca84d (UNCONDITIONAL_JUMP)  ; LAB_005ca84d
    TEST EDX,EDX                        ; 005ca856
        ;   Label: LAB_005ca856
    JLE 0x005ca861                      ; 005ca858
        ;   XREF to: 005ca861 (CONDITIONAL_JUMP)  ; LAB_005ca861
    DEC EDX                             ; 005ca85a
    MOV byte ptr [EAX],0x30             ; 005ca85b
    INC EAX                             ; 005ca85e
    JMP 0x005ca856                      ; 005ca85f
        ;   XREF to: 005ca856 (UNCONDITIONAL_JUMP)  ; LAB_005ca856
    MOV byte ptr [EAX],0x0              ; 005ca861
        ;   Label: LAB_005ca861
    MOV EAX,ECX                         ; 005ca864
        ;   Label: LAB_005ca864
    POP EBX                             ; 005ca866
    RET                                 ; 005ca867

