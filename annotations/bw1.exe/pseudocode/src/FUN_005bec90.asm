; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bec90(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_005fa9b3+1
;
; Called Functions:
;   FUN_0040c550
;   FUN_00431430
;
; *****************************************************************************

section .text

    PUSH 0x5fa9b4                       ; 005bec90 | s_CTentacle_005fa9b3+1
        ;   Label: FUN_005bec90
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bec95
    PUSH EDX                            ; 005bec99
    CALL FUN_0040c550                   ; 005bec9a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 005bec9f
    TEST EAX,EAX                        ; 005beca2
    JZ 0x005becac                       ; 005beca4
        ;   XREF to: 005becac (CONDITIONAL_JUMP)  ; LAB_005becac
    MOV EAX,0x1                         ; 005beca6
    RET                                 ; 005becab
    PUSH EBX                            ; 005becac
        ;   Label: LAB_005becac
    MOV ECX,dword ptr [ESP + 0xc]       ; 005becad
    PUSH ECX                            ; 005becb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005becb2
    PUSH EBX                            ; 005becb6
    CALL FUN_00431430                   ; 005becb7
        ;   XREF to: 00431430 (UNCONDITIONAL_CALL)  ; undefined FUN_00431430()
    ADD ESP,0x8                         ; 005becbc
    POP EBX                             ; 005becbf
    RET                                 ; 005becc0

