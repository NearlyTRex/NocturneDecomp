; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058e720(int param_1,LPCSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_GetTextExtentPoint32A_005c8410 = 001c8838
;
; Called Functions:
;   FUN_0058e450
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e720
        ;   Label: FUN_0058e720
    PUSH ESI                            ; 0058e721
    SUB ESP,0x8                         ; 0058e722
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058e725
    MOV ESI,dword ptr [ESP + 0x18]      ; 0058e729
    PUSH -0x1                           ; 0058e72d
    PUSH -0x1                           ; 0058e72f
    PUSH EBX                            ; 0058e731
    CALL FUN_0058e450                   ; 0058e732
        ;   XREF to: 0058e450 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e450()
    ADD ESP,0xc                         ; 0058e737
    TEST EAX,EAX                        ; 0058e73a
    JNZ 0x0058e744                      ; 0058e73c
        ;   XREF to: 0058e744 (CONDITIONAL_JUMP)  ; LAB_0058e744
    ADD ESP,0x8                         ; 0058e73e
    POP ESI                             ; 0058e741
    POP EBX                             ; 0058e742
    RET                                 ; 0058e743
    PUSH EDI                            ; 0058e744
        ;   Label: LAB_0058e744
    MOV EDI,ESI                         ; 0058e745
    SUB ECX,ECX                         ; 0058e747
    DEC ECX                             ; 0058e749
    XOR EAX,EAX                         ; 0058e74a
    SCASB.REPNE ES:EDI                  ; 0058e74c
    NOT ECX                             ; 0058e74e
    DEC ECX                             ; 0058e750
    LEA EAX,[ESP + 0x4]                 ; 0058e751
    PUSH EAX                            ; 0058e755
    PUSH ECX                            ; 0058e756
    PUSH ESI                            ; 0058e757
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 0058e758
    PUSH EDX                            ; 0058e75e
    CALL dword ptr CS:[0x5c8410]        ; 0058e75f | PTR_GetTextExtentPoint32A_005c8410
    TEST EAX,EAX                        ; 0058e766
    JNZ 0x0058e76e                      ; 0058e768
        ;   XREF to: 0058e76e (CONDITIONAL_JUMP)  ; LAB_0058e76e
    MOV dword ptr [ESP + 0x8],EAX       ; 0058e76a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058e76e
        ;   Label: LAB_0058e76e
    MOV ESI,dword ptr [EBX + 0x6b78]    ; 0058e772
    MOV EDI,dword ptr [EBX + 0x6b7c]    ; 0058e778
    ADD EAX,ESI                         ; 0058e77e
    ADD EAX,EDI                         ; 0058e780
    POP EDI                             ; 0058e782
    ADD ESP,0x8                         ; 0058e783
    POP ESI                             ; 0058e786
    POP EBX                             ; 0058e787
    RET                                 ; 0058e788

