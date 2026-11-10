; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_drip_cpp_CDrip_getBoundingBox_FUN_0046d610(CDrip *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d610
        ;   Label: core_drip.cpp_CDrip_getBoundingBox_FUN_0046d610
    PUSH EDI                            ; 0046d611
    PUSH EBP                            ; 0046d612
    SUB ESP,0x30                        ; 0046d613
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046d616
    MOV EBX,ESI                         ; 0046d61a
    CMP dword ptr [EAX + 0x430],0x2     ; 0046d61c
    JZ 0x0046d670                       ; 0046d623
        ;   XREF to: 0046d670 (CONDITIONAL_JUMP)  ; LAB_0046d670
    MOV ECX,0xbf000000                  ; 0046d625
    MOV EBP,0x3f000000                  ; 0046d62a
    MOV EAX,0x3f800000                  ; 0046d62f
    LEA EDI,[ESP + 0x18]                ; 0046d634
    XOR ESI,ESI                         ; 0046d638
    MOV dword ptr [ESP + 0x8],ECX       ; 0046d63a
    MOV dword ptr [ESP],ECX             ; 0046d63e
    MOV dword ptr [ESP + 0x4],ESI       ; 0046d641
    MOV dword ptr [ESP + 0xc],EBP       ; 0046d645
    MOV ECX,0x6                         ; 0046d649
    MOV ESI,ESP                         ; 0046d64e
    MOV dword ptr [ESP + 0x10],EAX      ; 0046d650
    MOV dword ptr [ESP + 0x14],EAX      ; 0046d654
    MOVSD.REP ES:EDI,ESI                ; 0046d658
        ;   Label: LAB_0046d658
    MOV ECX,0x6                         ; 0046d65a
    LEA ESI,[ESP + 0x18]                ; 0046d65f
    MOV EDI,EBX                         ; 0046d663
    MOVSD.REP ES:EDI,ESI                ; 0046d665
    MOV EAX,EBX                         ; 0046d667
    ADD ESP,0x30                        ; 0046d669
    POP EBP                             ; 0046d66c
    POP EDI                             ; 0046d66d
    POP EBX                             ; 0046d66e
    RET                                 ; 0046d66f
    ADD EAX,0x2b4                       ; 0046d670
        ;   Label: LAB_0046d670
    PUSH EAX                            ; 0046d675
    LEA EDI,[ESP + 0x1c]                ; 0046d676
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0046d67a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 0046d67f
    MOV ESI,dword ptr [EAX + 0x350]     ; 0046d684
    ADD ESP,0x4                         ; 0046d68a
    JMP 0x0046d658                      ; 0046d68d
        ;   XREF to: 0046d658 (UNCONDITIONAL_JUMP)  ; LAB_0046d658

