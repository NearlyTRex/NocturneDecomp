; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b17e0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b17e0
        ;   Label: FUN_005b17e0
    PUSH ESI                            ; 005b17e1
    PUSH EDI                            ; 005b17e2
    SUB ESP,0x18                        ; 005b17e3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b17e6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b17ea
    MOV EDX,dword ptr [EAX + 0xc26c]    ; 005b17ee
    PUSH EDX                            ; 005b17f4
    ADD EAX,0x158                       ; 005b17f5
    PUSH EAX                            ; 005b17fa
    LEA ESI,[ESP + 0x8]                 ; 005b17fb
    LEA EDI,[ESP + 0x14]                ; 005b17ff
    CALL FUN_00569130                   ; 005b1803
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 005b1808
    ADD ESP,0x8                         ; 005b180c
    LEA EAX,[ESP + 0xc]                 ; 005b180f
    MOVSD ES:EDI,ESI                    ; 005b1813
    MOVSD ES:EDI,ESI                    ; 005b1814
    MOVSD ES:EDI,ESI                    ; 005b1815
    CMP EBX,EAX                         ; 005b1816
    JNZ 0x005b1826                      ; 005b1818
        ;   XREF to: 005b1826 (CONDITIONAL_JUMP)  ; LAB_005b1826
    MOV EAX,0x1                         ; 005b181a
    ADD ESP,0x18                        ; 005b181f
    POP EDI                             ; 005b1822
    POP ESI                             ; 005b1823
    POP EBX                             ; 005b1824
    RET                                 ; 005b1825
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b1826
        ;   Label: LAB_005b1826
    MOV dword ptr [EBX],EAX             ; 005b182a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b182c
    MOV dword ptr [EBX + 0x4],EAX       ; 005b1830
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b1833
    MOV dword ptr [EBX + 0x8],EAX       ; 005b1837
    MOV EAX,0x1                         ; 005b183a
    ADD ESP,0x18                        ; 005b183f
    POP EDI                             ; 005b1842
    POP ESI                             ; 005b1843
    POP EBX                             ; 005b1844
    RET                                 ; 005b1845

