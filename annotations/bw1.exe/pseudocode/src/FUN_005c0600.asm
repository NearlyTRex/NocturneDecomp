; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c0600(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005c0530 at 005c0595
;
; Called Functions:
;   FUN_005c0630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0600
        ;   Label: FUN_005c0600
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c0601
    PUSH EBX                            ; 005c0605
    CALL FUN_005c0630                   ; 005c0606
        ;   XREF to: 005c0630 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0630()
    ADD ESP,0x4                         ; 005c060b
    TEST EAX,EAX                        ; 005c060e
    JNZ 0x005c0619                      ; 005c0610
        ;   XREF to: 005c0619 (CONDITIONAL_JUMP)  ; LAB_005c0619
    MOV EAX,0xffffffff                  ; 005c0612
    POP EBX                             ; 005c0617
    RET                                 ; 005c0618
    MOV EDX,dword ptr [EBX + 0x4]       ; 005c0619
        ;   Label: LAB_005c0619
    MOV ECX,dword ptr [EBX]             ; 005c061c
    DEC EDX                             ; 005c061e
    INC ECX                             ; 005c061f
    MOV dword ptr [EBX + 0x4],EDX       ; 005c0620
    MOV dword ptr [EBX],ECX             ; 005c0623
    MOV AL,byte ptr [ECX + -0x1]        ; 005c0625
    AND EAX,0xff                        ; 005c0628
    POP EBX                             ; 005c062d
    RET                                 ; 005c062e

