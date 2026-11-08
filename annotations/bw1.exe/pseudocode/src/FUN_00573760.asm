; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_005057c0 at 0050584b
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573760
        ;   Label: FUN_00573760
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573762
    PUSH EDX                            ; 00573766
    CALL FUN_0056fa10                   ; 00573767
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 0057376c
    TEST EAX,EAX                        ; 0057376f
    JNZ 0x00573774                      ; 00573771
        ;   XREF to: 00573774 (CONDITIONAL_JUMP)  ; LAB_00573774
    RET                                 ; 00573773
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573774
        ;   Label: LAB_00573774
    MOV dword ptr [EAX + 0x1c],0x0      ; 00573778
    MOV dword ptr [EAX + 0x4],EDX       ; 0057377f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573782
    MOV dword ptr [EAX + 0x8],EDX       ; 00573786
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573789
    MOV dword ptr [EAX + 0xc],EDX       ; 0057378d
    MOV EDX,dword ptr [ESP + 0x14]      ; 00573790
    MOV dword ptr [EAX + 0x10],EDX      ; 00573794
    MOV EDX,dword ptr [ESP + 0x18]      ; 00573797
    MOV dword ptr [EAX + 0x14],EDX      ; 0057379b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057379e
    MOV dword ptr [EAX + 0x18],EDX      ; 005737a2
    MOV DL,byte ptr [EAX + 0x118]       ; 005737a5
    MOV dword ptr [EAX + 0x20],0x0      ; 005737ab
    OR DL,0x2                           ; 005737b2
    MOV byte ptr [EAX + 0x118],DL       ; 005737b5
    CALL FUN_00573e70                   ; 005737bb
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 005737c0
    RET                                 ; 005737c5

