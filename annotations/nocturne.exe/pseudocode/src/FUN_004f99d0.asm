; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f99d0(int param_1,int param_2)
;
;
; XREF[9]:
;   FUN_00458080 at 004583f7
;   FUN_004610a0 at 00461352
;   FUN_00461f80 at 00461fc9
;   FUN_0048f490 at 0048f842
;   FUN_004f9dd0 at 004fa020
;   FUN_004fad00 at 004fb04f
;   FUN_004fb390 at 004fb5db
;   FUN_005628c0 at 00562be7
;   FUN_00562de0 at 005630c7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f99d0
        ;   Label: FUN_004f99d0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f99d1
    XOR EDX,EDX                         ; 004f99d5
    TEST EBX,EBX                        ; 004f99d7
    JLE 0x004f99f5                      ; 004f99d9
        ;   XREF to: 004f99f5 (CONDITIONAL_JUMP)  ; LAB_004f99f5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f99db
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f99df
        ;   Label: LAB_004f99df
    TEST ECX,ECX                        ; 004f99e2
    JNZ 0x004f99f7                      ; 004f99e4
        ;   XREF to: 004f99f7 (CONDITIONAL_JUMP)  ; LAB_004f99f7
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 004f99e6
    INC EDX                             ; 004f99ed
    ADD EAX,0x30                        ; 004f99ee
    CMP EDX,EBX                         ; 004f99f1
    JL 0x004f99df                       ; 004f99f3
        ;   XREF to: 004f99df (CONDITIONAL_JUMP)  ; LAB_004f99df
    POP EBX                             ; 004f99f5
        ;   Label: LAB_004f99f5
    RET                                 ; 004f99f6
    MOV ECX,dword ptr [EAX + 0xc]       ; 004f99f7
        ;   Label: LAB_004f99f7
    MOV dword ptr [EAX + 0x8],ECX       ; 004f99fa
    INC EDX                             ; 004f99fd
    ADD EAX,0x30                        ; 004f99fe
    CMP EDX,EBX                         ; 004f9a01
    JL 0x004f99df                       ; 004f9a03
        ;   XREF to: 004f99df (CONDITIONAL_JUMP)  ; LAB_004f99df
    POP EBX                             ; 004f9a05
    RET                                 ; 004f9a06

