; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575940(void)
;
;
; XREF[2]:
;   FUN_00574ea0 at 00574ec3
;   FUN_005760b0 at 0057612d
;
; Referenced Globals:
;   undefined4 DAT_02c81038
;
; Called Functions:
;   FUN_00575b70
;
; *****************************************************************************

section .text

    CALL FUN_00575b70                   ; 00575940
        ;   XREF to: 00575b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00575b70()
        ;   Label: FUN_00575940
    TEST EAX,EAX                        ; 00575945
    JZ 0x00575958                       ; 00575947
        ;   XREF to: 00575958 (CONDITIONAL_JUMP)  ; LAB_00575958
    MOV EDX,dword ptr [0x02c81038]      ; 00575949 | DAT_02c81038
    TEST EDX,EDX                        ; 0057594f
    JNZ 0x00575959                      ; 00575951
        ;   XREF to: 00575959 (CONDITIONAL_JUMP)  ; LAB_00575959
    MOV EAX,0x1                         ; 00575953
    RET                                 ; 00575958
        ;   Label: LAB_00575958
    MOV EAX,EDX                         ; 00575959
        ;   Label: LAB_00575959
    PUSH EAX                            ; 0057595b
    MOV EDX,dword ptr [EDX]             ; 0057595c
    CALL dword ptr [EDX]                ; 0057595e
    ADD ESP,0x4                         ; 00575960
    TEST EAX,EAX                        ; 00575963
    JZ 0x00575958                       ; 00575965
        ;   XREF to: 00575958 (CONDITIONAL_JUMP)  ; LAB_00575958
    XOR ECX,ECX                         ; 00575967
    MOV EAX,0x1                         ; 00575969
    MOV dword ptr [0x02c81038],ECX      ; 0057596e | DAT_02c81038
    RET                                 ; 00575974

