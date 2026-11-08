; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a4950(uint param_1,uint param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_02668600
;
; Called Functions:
;   FUN_0040c8f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005a4950
        ;   Label: FUN_005a4950
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4954
    CMP EAX,EDX                         ; 005a4958
    JNZ 0x005a495f                      ; 005a495a
        ;   XREF to: 005a495f (CONDITIONAL_JUMP)  ; LAB_005a495f
    XOR EAX,EDX                         ; 005a495c
    RET                                 ; 005a495e
    MOV ECX,dword ptr [0x02668600]      ; 005a495f | DAT_02668600
        ;   Label: LAB_005a495f
    PUSH ECX                            ; 005a4965
    PUSH EAX                            ; 005a4966
    CALL FUN_0040c8f0                   ; 005a4967
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 005a496c
    TEST EAX,EAX                        ; 005a496f
    JZ 0x005a4976                       ; 005a4971
        ;   XREF to: 005a4976 (CONDITIONAL_JUMP)  ; LAB_005a4976
    XOR EAX,EAX                         ; 005a4973
    RET                                 ; 005a4975
    MOV EAX,0x1                         ; 005a4976
        ;   Label: LAB_005a4976
    RET                                 ; 005a497b

