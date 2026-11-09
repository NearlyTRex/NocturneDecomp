; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_normalizeVector3DFixed_FUN_00508700(int *param_1)
;
;
; XREF[2]:
;   engine_3d.c_FUN_00405280 at 004052aa
;   engine_3d.c_renderPolygonTexturedUVLit_FUN_004051a0 at 004051ca
;
; Called Functions:
;   engine_matrix.c_integerSquareRoot_FUN_00508620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508700
        ;   Label: engine_matrix.c_normalizeVector3DFixed_FUN_00508700
    PUSH EDI                            ; 00508701
    PUSH EBP                            ; 00508702
    SUB ESP,0xc                         ; 00508703
    MOV EBP,ESI                         ; 00508706
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00508708
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050870c
    IMUL EAX,EAX                        ; 0050870f
    MOV ECX,dword ptr [ESI]             ; 00508712
    IMUL ECX,ECX                        ; 00508714
    ADD EAX,ECX                         ; 00508717
    MOV ECX,dword ptr [ESI + 0x8]       ; 00508719
    IMUL ECX,ECX                        ; 0050871c
    ADD EAX,ECX                         ; 0050871f
    PUSH EAX                            ; 00508721
    CALL engine_matrix.c_integerSquareRoot_FUN_00508620 ; 00508722
        ;   XREF to: 00508620 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_integerSquareRoot_FUN_00508620(int value)
    MOV EDX,0x7fff                      ; 00508727
    MOV ECX,EAX                         ; 0050872c
    ADD ESP,0x4                         ; 0050872e
    MOV EBX,ECX                         ; 00508731
    MOV EAX,dword ptr [ESI]             ; 00508733
    IMUL EDX                            ; 00508735
    IDIV EBX                            ; 00508737
    MOV EDX,0x7fff                      ; 00508739
    ADD EAX,EAX                         ; 0050873e
    MOV EBX,ECX                         ; 00508740
    MOV dword ptr [ESP],EAX             ; 00508742
    MOV EAX,dword ptr [ESI + 0x4]       ; 00508745
    IMUL EDX                            ; 00508748
    IDIV EBX                            ; 0050874a
    MOV EDX,0x7fff                      ; 0050874c
    ADD EAX,EAX                         ; 00508751
    MOV EBX,ECX                         ; 00508753
    MOV dword ptr [ESP + 0x4],EAX       ; 00508755
    MOV EAX,dword ptr [ESI + 0x8]       ; 00508759
    MOV EDI,EBP                         ; 0050875c
    IMUL EDX                            ; 0050875e
    IDIV EBX                            ; 00508760
    ADD EAX,EAX                         ; 00508762
    MOV ESI,ESP                         ; 00508764
    MOV dword ptr [ESP + 0x8],EAX       ; 00508766
    MOVSD ES:EDI,ESI                    ; 0050876a
    MOVSD ES:EDI,ESI                    ; 0050876b
    MOVSD ES:EDI,ESI                    ; 0050876c
    MOV EAX,EBP                         ; 0050876d
    ADD ESP,0xc                         ; 0050876f
    POP EBP                             ; 00508772
    POP EDI                             ; 00508773
    POP EBX                             ; 00508774
    RET                                 ; 00508775

