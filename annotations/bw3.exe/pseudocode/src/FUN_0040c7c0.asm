; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040c7c0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0040c5b0 at 0040c6a9
;   FUN_0040c810 at 0040c82f
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 00408990
        ;   Label: LAB_00408990
    RET                                 ; 00408995
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c7c0
        ;   Label: FUN_0040c7c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c7c4
    MOV EAX,ECX                         ; 0040c7c8
    TEST ECX,ECX                        ; 0040c7ca
    JZ 0x0040c7e0                       ; 0040c7cc
        ;   XREF to: 0040c7e0 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 0040c7ce
        ;   Label: LAB_0040c7ce
    JZ 0x00408990                       ; 0040c7d1
        ;   XREF to: 00408990 (CONDITIONAL_JUMP)  ; LAB_00408990
    MOV EAX,dword ptr [EAX + 0x28]      ; 0040c7d7
    TEST EAX,EAX                        ; 0040c7da
    JNZ 0x0040c7ce                      ; 0040c7dc
        ;   XREF to: 0040c7ce (CONDITIONAL_JUMP)  ; LAB_0040c7ce
    MOV EAX,EAX                         ; 0040c7de

