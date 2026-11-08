; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b9f30(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_005b9f4c at 005b9fe3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b9f30
        ;   Label: FUN_005b9f30
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b9f34
    CMP EAX,0x5c                        ; 005b9f38
    JZ 0x005b9f42                       ; 005b9f3b
        ;   XREF to: 005b9f42 (CONDITIONAL_JUMP)  ; LAB_005b9f42
    CMP EAX,0x2f                        ; 005b9f3d
    JNZ 0x005b9f4b                      ; 005b9f40
        ;   XREF to: 005b9f4b (CONDITIONAL_JUMP)  ; LAB_005b9f4b
    CMP dword ptr [EDX],0x0             ; 005b9f42
        ;   Label: LAB_005b9f42
    JNZ 0x005b9f49                      ; 005b9f45
        ;   XREF to: 005b9f49 (CONDITIONAL_JUMP)  ; LAB_005b9f49
    MOV dword ptr [EDX],EAX             ; 005b9f47
    MOV EAX,dword ptr [EDX]             ; 005b9f49
        ;   Label: LAB_005b9f49
    RET                                 ; 005b9f4b
        ;   Label: LAB_005b9f4b

