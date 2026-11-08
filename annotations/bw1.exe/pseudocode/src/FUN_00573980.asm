; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573980(undefined4 param_1,undefined4 param_2)
;
;
; XREF[6]:
;   FUN_00459100 at 00459194
;   FUN_00500d20 at 00500e13
;   FUN_00502480 at 00502573
;   FUN_00598d50 at 00598db4
;   FUN_005a23b0 at 005a24ef
;   FUN_005a7b50 at 005a80d9
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573980
        ;   Label: FUN_00573980
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573982
    PUSH EDX                            ; 00573986
    CALL FUN_0056fa10                   ; 00573987
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 0057398c
    TEST EAX,EAX                        ; 0057398f
    JZ 0x005739d2                       ; 00573991
        ;   XREF to: 005739d2 (CONDITIONAL_JUMP)  ; LAB_005739d2
    PUSH EBX                            ; 00573993
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573994
    MOV dword ptr [EAX + 0x3c],EDX      ; 00573998
    MOV DL,byte ptr [EAX + 0x118]       ; 0057399b
    OR DL,0x10                          ; 005739a1
    MOV ECX,dword ptr [EAX + 0x60]      ; 005739a4
    MOV byte ptr [EAX + 0x118],DL       ; 005739a7
    TEST ECX,ECX                        ; 005739ad
    JZ 0x005739c7                       ; 005739af
        ;   XREF to: 005739c7 (CONDITIONAL_JUMP)  ; LAB_005739c7
    MOV EBX,dword ptr [0x02c80650]      ; 005739b1 | DAT_02c80650
    TEST EBX,EBX                        ; 005739b7
    JZ 0x005739c7                       ; 005739b9
        ;   XREF to: 005739c7 (CONDITIONAL_JUMP)  ; LAB_005739c7
    PUSH 0x10                           ; 005739bb
    PUSH EAX                            ; 005739bd
    MOV ECX,dword ptr [EBX]             ; 005739be
    PUSH EBX                            ; 005739c0
    CALL dword ptr [ECX + 0x44]         ; 005739c1
    ADD ESP,0xc                         ; 005739c4
    CALL FUN_00573e70                   ; 005739c7
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
        ;   Label: LAB_005739c7
    MOV EAX,0x1                         ; 005739cc
    POP EBX                             ; 005739d1
    RET                                 ; 005739d2
        ;   Label: LAB_005739d2

