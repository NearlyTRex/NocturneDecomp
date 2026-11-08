; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005beed4(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005b8cf8 at 005b8d37
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;   void* PTR_FUN_0061f2c0 = 005bce04
;   void* PTR_FUN_0061f2c8 = 005bce04
;
; Called Functions:
;   FUN_005bce04
;   FUN_005bed18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005beed4
        ;   Label: FUN_005beed4
    SUB ESP,0x4                         ; 005beed5
    CALL dword ptr [0x0061f2c0]         ; 005beed8 | PTR_FUN_0061f2c0
    MOV EAX,ESP                         ; 005beede
    PUSH EAX                            ; 005beee0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005beee1
    PUSH EDX                            ; 005beee5
    MOV EBX,dword ptr [ESP + 0x14]      ; 005beee6
    PUSH EBX                            ; 005beeea
    MOV EAX,0x61eea0                    ; 005beeeb | DAT_0061eea0
    MOV DX,DS                           ; 005beef0
    XOR EAX,EAX                         ; 005beef2
    MOV AX,DX                           ; 005beef4
    PUSH EAX                            ; 005beef7
    CALL FUN_005bed18                   ; 005beef8
        ;   XREF to: 005bed18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bed18()
    ADD ESP,0x10                        ; 005beefd
    TEST EAX,EAX                        ; 005bef00
    JNZ 0x005bef11                      ; 005bef02
        ;   XREF to: 005bef11 (CONDITIONAL_JUMP)  ; LAB_005bef11
    CALL dword ptr [0x0061f2c8]         ; 005bef04 | PTR_FUN_0061f2c8
    MOV EAX,EBX                         ; 005bef0a
    ADD ESP,0x4                         ; 005bef0c
    POP EBX                             ; 005bef0f
    RET                                 ; 005bef10
    CALL dword ptr [0x0061f2c8]         ; 005bef11 | PTR_FUN_0061f2c8
        ;   Label: LAB_005bef11
    XOR EAX,EAX                         ; 005bef17
    ADD ESP,0x4                         ; 005bef19
    POP EBX                             ; 005bef1c
    RET                                 ; 005bef1d

