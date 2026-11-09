; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_005c38ac(char *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3748 at 005c375d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c38ac
        ;   Label: crt_unknown.c_FUN_005c38ac
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c38ad
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c38b1
    MOV word ptr [EAX + 0x1e],0x0       ; 005c38b5
    MOV BL,byte ptr [EDX]               ; 005c38bb
    CMP BL,0x2d                         ; 005c38bd
    JNZ 0x005c38c8                      ; 005c38c0
        ;   XREF to: 005c38c8 (CONDITIONAL_JUMP)  ; LAB_005c38c8
    OR byte ptr [EAX + 0x1e],0x8        ; 005c38c2
    JMP 0x005c390a                      ; 005c38c6
        ;   XREF to: 005c390a (UNCONDITIONAL_JUMP)  ; LAB_005c390a
    CMP BL,0x23                         ; 005c38c8
        ;   Label: LAB_005c38c8
    JNZ 0x005c38d3                      ; 005c38cb
        ;   XREF to: 005c38d3 (CONDITIONAL_JUMP)  ; LAB_005c38d3
    OR byte ptr [EAX + 0x1e],0x1        ; 005c38cd
    JMP 0x005c390a                      ; 005c38d1
        ;   XREF to: 005c390a (UNCONDITIONAL_JUMP)  ; LAB_005c390a
    CMP BL,0x2b                         ; 005c38d3
        ;   Label: LAB_005c38d3
    JNZ 0x005c38eb                      ; 005c38d6
        ;   XREF to: 005c38eb (CONDITIONAL_JUMP)  ; LAB_005c38eb
    MOV CH,byte ptr [EAX + 0x1e]        ; 005c38d8
    OR CH,0x4                           ; 005c38db
    MOV BL,CH                           ; 005c38de
    MOV byte ptr [EAX + 0x1e],CH        ; 005c38e0
    AND BL,0xfd                         ; 005c38e3
    MOV byte ptr [EAX + 0x1e],BL        ; 005c38e6
    JMP 0x005c390a                      ; 005c38e9
        ;   XREF to: 005c390a (UNCONDITIONAL_JUMP)  ; LAB_005c390a
    CMP BL,0x20                         ; 005c38eb
        ;   Label: LAB_005c38eb
    JNZ 0x005c3902                      ; 005c38ee
        ;   XREF to: 005c3902 (CONDITIONAL_JUMP)  ; LAB_005c3902
    MOV BH,byte ptr [EAX + 0x1e]        ; 005c38f0
    TEST BH,0x4                         ; 005c38f3
    JNZ 0x005c390a                      ; 005c38f6
        ;   XREF to: 005c390a (CONDITIONAL_JUMP)  ; LAB_005c390a
    MOV CL,BH                           ; 005c38f8
    OR CL,0x2                           ; 005c38fa
    MOV byte ptr [EAX + 0x1e],CL        ; 005c38fd
    JMP 0x005c390a                      ; 005c3900
        ;   XREF to: 005c390a (UNCONDITIONAL_JUMP)  ; LAB_005c390a
    CMP BL,0x30                         ; 005c3902
        ;   Label: LAB_005c3902
    JNZ 0x005c3918                      ; 005c3905
        ;   XREF to: 005c3918 (CONDITIONAL_JUMP)  ; LAB_005c3918
    MOV byte ptr [EAX + 0x16],BL        ; 005c3907
    INC EDX                             ; 005c390a
        ;   Label: LAB_005c390a
    MOV BL,byte ptr [EDX]               ; 005c390b
    CMP BL,0x2d                         ; 005c390d
    JNZ 0x005c38c8                      ; 005c3910
        ;   XREF to: 005c38c8 (CONDITIONAL_JUMP)  ; LAB_005c38c8
    OR byte ptr [EAX + 0x1e],0x8        ; 005c3912
    JMP 0x005c390a                      ; 005c3916
        ;   XREF to: 005c390a (UNCONDITIONAL_JUMP)  ; LAB_005c390a
    MOV EAX,EDX                         ; 005c3918
        ;   Label: LAB_005c3918
    POP EBX                             ; 005c391a
    RET                                 ; 005c391b

