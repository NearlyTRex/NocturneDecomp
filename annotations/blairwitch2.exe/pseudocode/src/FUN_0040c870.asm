; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040c870(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0040c660 at 0040c759
;   FUN_0040c8c0 at 0040c8df
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 00408b80
        ;   Label: LAB_00408b80
    RET                                 ; 00408b85
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c870
        ;   Label: FUN_0040c870
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c874
    MOV EAX,ECX                         ; 0040c878
    TEST ECX,ECX                        ; 0040c87a
    JZ 0x0040c890                       ; 0040c87c
        ;   XREF to: 0040c890 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 0040c87e
        ;   Label: LAB_0040c87e
    JZ 0x00408b80                       ; 0040c881
        ;   XREF to: 00408b80 (CONDITIONAL_JUMP)  ; LAB_00408b80
    MOV EAX,dword ptr [EAX + 0x28]      ; 0040c887
    TEST EAX,EAX                        ; 0040c88a
    JNZ 0x0040c87e                      ; 0040c88c
        ;   XREF to: 0040c87e (CONDITIONAL_JUMP)  ; LAB_0040c87e
    MOV EAX,EAX                         ; 0040c88e

