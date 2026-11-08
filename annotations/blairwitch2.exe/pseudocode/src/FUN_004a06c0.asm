; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a06c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;   FUN_0049f180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a06c0
        ;   Label: FUN_004a06c0
    PUSH ESI                            ; 004a06c1
    PUSH EDI                            ; 004a06c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a06c3
    PUSH EBX                            ; 004a06c7
    CALL FUN_00408790                   ; 004a06c8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004a06cd
    ADD EAX,0x2b4                       ; 004a06d0
    PUSH EAX                            ; 004a06d5
    CALL FUN_0044fc80                   ; 004a06d6
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004a06db
    ADD EAX,0x1e8                       ; 004a06de
    PUSH EAX                            ; 004a06e3
    CALL FUN_0049f180                   ; 004a06e4
        ;   XREF to: 0049f180 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f180()
    ADD ESP,0x4                         ; 004a06e9
    LEA EBX,[EAX + 0xfffffb64]          ; 004a06ec
    PUSH 0x5d593f                       ; 004a06f2
    LEA EAX,[EBX + 0x2b4]               ; 004a06f7
    PUSH EAX                            ; 004a06fd
    MOV ESI,0x5d594c                    ; 004a06fe
    MOV dword ptr [EBX + 0x2b0],0x5f6a24 ; 004a0703
    CALL FUN_0044fd70                   ; 004a070d
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 004a0712
    MOV dword ptr [EBX + 0x430],0x0     ; 004a0715
    LEA EDI,[EBX + 0x438]               ; 004a071f
    MOV dword ptr [EBX + 0x434],0x41200000 ; 004a0725
    PUSH EDI                            ; 004a072f
    MOV AL,byte ptr [ESI]               ; 004a0730
        ;   Label: LAB_004a0730
    MOV byte ptr [EDI],AL               ; 004a0732
    CMP AL,0x0                          ; 004a0734
    JZ 0x004a0748                       ; 004a0736
        ;   XREF to: 004a0748 (CONDITIONAL_JUMP)  ; LAB_004a0748
    MOV AL,byte ptr [ESI + 0x1]         ; 004a0738
    ADD ESI,0x2                         ; 004a073b
    MOV byte ptr [EDI + 0x1],AL         ; 004a073e
    ADD EDI,0x2                         ; 004a0741
    CMP AL,0x0                          ; 004a0744
    JNZ 0x004a0730                      ; 004a0746
        ;   XREF to: 004a0730 (CONDITIONAL_JUMP)  ; LAB_004a0730
    POP EDI                             ; 004a0748
        ;   Label: LAB_004a0748
    MOV EAX,EBX                         ; 004a0749
    MOV dword ptr [EBX + 0x89c],0x0     ; 004a074b
    POP EDI                             ; 004a0755
    POP ESI                             ; 004a0756
    POP EBX                             ; 004a0757
    RET                                 ; 004a0758

