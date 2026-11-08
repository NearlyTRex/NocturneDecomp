; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00574930(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_005a457c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574930
        ;   Label: FUN_00574930
    MOV EDX,dword ptr [EAX + 0x4]       ; 00574934
    TEST EDX,EDX                        ; 00574937
    JNZ 0x0057493e                      ; 00574939
        ;   XREF to: 0057493e (CONDITIONAL_JUMP)  ; LAB_0057493e
    XOR EAX,EAX                         ; 0057493b
    RET                                 ; 0057493d
    PUSH EBX                            ; 0057493e
        ;   Label: LAB_0057493e
    MOV ECX,dword ptr [ESP + 0x10]      ; 0057493f
    PUSH ECX                            ; 00574943
    MOV EBX,dword ptr [ESP + 0x10]      ; 00574944
    PUSH EBX                            ; 00574948
    PUSH EDX                            ; 00574949
    CALL FUN_005a457c                   ; 0057494a
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined FUN_005a457c()
    ADD ESP,0xc                         ; 0057494f
    TEST EAX,EAX                        ; 00574952
    SETZ AL                             ; 00574954
    AND EAX,0xff                        ; 00574957
    POP EBX                             ; 0057495c
    RET                                 ; 0057495d

