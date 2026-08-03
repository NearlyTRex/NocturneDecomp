; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_00444600(int scanline_y,int x_start,int x_end)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_00b0e5fc
;   undefined4 DAT_00b0e600
;   undefined4 DAT_012b0634
;   undefined4 DAT_012b0640
;   undefined4 DAT_012b064c
;   undefined4 DAT_012b0658
;   undefined4 DAT_012b0660
;   undefined4 DAT_01bd4260
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444600
        ;   Label: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_00444600
    PUSH ESI                            ; 00444601
    PUSH EDI                            ; 00444602
    PUSH EBP                            ; 00444603
    MOV EBP,ESP                         ; 00444604
    SUB ESP,0x2c                        ; 00444606
    AND ESP,0xfffffff8                  ; 00444609
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044460c
    MOV EAX,EDI                         ; 0044460f
    SHL EAX,0x8                         ; 00444611
    MOV ECX,0x8d9278                    ; 00444614
    MOV ESI,EAX                         ; 00444619
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044461b
    SHL ESI,0x4                         ; 0044461e
    LEA EBX,[EDX*0x4 + 0x0]             ; 00444621
    SUB ESI,EAX                         ; 00444628
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044462a
    SUB EBX,EDX                         ; 00444631
    ADD EAX,EDI                         ; 00444633
    SHL EBX,0x2                         ; 00444635
    SHL EAX,0x6                         ; 00444638
    ADD ECX,ESI                         ; 0044463b
    ADD EAX,0xa9d078                    ; 0044463d
    ADD ECX,EBX                         ; 00444642
    ADD EDX,EAX                         ; 00444644
    LEA EAX,[EDI*0x4 + 0x0]             ; 00444646
    MOV dword ptr [ESP + 0x28],EDX      ; 0044464d
    ADD EAX,EDI                         ; 00444651
    MOV EDX,dword ptr [EBP + 0x18]      ; 00444653
    SHL EAX,0x8                         ; 00444656
    SHL EDX,0x2                         ; 00444659
    ADD EAX,0x146ba10                   ; 0044465c
    MOV dword ptr [ESP + 0x1c],ECX      ; 00444661
    ADD EAX,EDX                         ; 00444665
    MOV CL,byte ptr [0x012b0660]        ; 00444667 | DAT_012b0660
    MOV dword ptr [ESP + 0x24],EAX      ; 0044466d
    MOV EDX,EDI                         ; 00444671
    MOV EAX,dword ptr [EBP + 0x18]      ; 00444673
    SHL EDX,CL                          ; 00444676
    SHL EAX,CL                          ; 00444678
    MOV EDX,dword ptr [EDX*0x4 + 0x1bd4260] ; 0044467a | DAT_01bd4260
    SHL EAX,0x2                         ; 00444681
    ADD ESI,0x9bb178                    ; 00444684
    ADD EDX,EAX                         ; 0044468a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044468c
    MOV dword ptr [ESP + 0x20],EDX      ; 0044468f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00444693
    ADD EBX,ESI                         ; 00444696
    CMP EAX,EDX                         ; 00444698
    JGE 0x004447fc                      ; 0044469a
        ;   XREF to: 004447fc (CONDITIONAL_JUMP)  ; LAB_004447fc
    MOV EDX,dword ptr [ESP + 0x24]      ; 004446a0
        ;   Label: LAB_004446a0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004446a4
    MOV ESI,dword ptr [EDX]             ; 004446a8
    CMP ESI,dword ptr [EAX]             ; 004446aa
    JBE 0x004447ae                      ; 004446ac
        ;   XREF to: 004447ae (CONDITIONAL_JUMP)  ; LAB_004447ae
    FLD float ptr [EBX + 0x4]           ; 004446b2
    FMUL float ptr [0x012b064c]         ; 004446b5 | DAT_012b064c
    FLD float ptr [EBX]                 ; 004446bb
    FMUL float ptr [0x012b0640]         ; 004446bd | DAT_012b0640
    FADDP                               ; 004446c3
    FLD float ptr [EBX + 0x8]           ; 004446c5
    FMUL float ptr [0x012b0658]         ; 004446c8 | DAT_012b0658
    FADDP                               ; 004446ce
    FLDZ                                ; 004446d0
    FCOMPP                              ; 004446d2
    FNSTSW AX                           ; 004446d4
    SAHF                                ; 004446d6
    JA 0x004447ae                       ; 004446d7
        ;   XREF to: 004447ae (CONDITIONAL_JUMP)  ; LAB_004447ae
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004446dd
    PUSH EDI                            ; 004446e1
    MOV EAX,[0x012b0634]                ; 004446e2 | DAT_012b0634
    PUSH EAX                            ; 004446e7
    LEA ESI,[ESP + 0x14]                ; 004446e8
    LEA EDI,[ESP + 0x8]                 ; 004446ec
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610 ; 004446f0
        ;   XREF to: 00441610 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x14]                ; 004446f5
    ADD ESP,0x8                         ; 004446f9
    MOVSD ES:EDI,ESI                    ; 004446fc
    MOVSD ES:EDI,ESI                    ; 004446fd
    MOVSD ES:EDI,ESI                    ; 004446fe
    CMP dword ptr [ESP + 0x8],0x0       ; 004446ff
    JLE 0x004447ae                      ; 00444704
        ;   XREF to: 004447ae (CONDITIONAL_JUMP)  ; LAB_004447ae
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044470a
    MOV EAX,[0x012b0634]                ; 0044470e | DAT_012b0634
    SAR ESI,0x10                        ; 00444713
    IMUL ESI,dword ptr [EAX + 0x1cc0]   ; 00444716
    MOV EDX,dword ptr [ESP]             ; 0044471d
    SAR EDX,0x10                        ; 00444720
    ADD EDX,ESI                         ; 00444723
    MOV ESI,dword ptr [EAX + 0x2f94]    ; 00444725
    MOV DX,word ptr [ESI + EDX*0x2]     ; 0044472b
    MOV ESI,dword ptr [0x00b0e5fc]      ; 0044472f | DAT_00b0e5fc
    AND EDX,0xffff                      ; 00444735
    CMP EDX,ESI                         ; 0044473b
    JGE 0x004447ae                      ; 0044473d
        ;   XREF to: 004447ae (CONDITIONAL_JUMP)  ; LAB_004447ae
    MOV EDI,dword ptr [ESP + 0x8]       ; 0044473f
    LEA ESI,[EDX + 0x80]                ; 00444743
    CMP ESI,EDI                         ; 00444749
    JLE 0x004447ae                      ; 0044474b
        ;   XREF to: 004447ae (CONDITIONAL_JUMP)  ; LAB_004447ae
    MOV ESI,dword ptr [ESP]             ; 0044474d
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 00444750
    SAR ESI,CL                          ; 00444756
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 00444758
    AND ECX,ESI                         ; 0044475e
    MOV ESI,dword ptr [ESP + 0x4]       ; 00444760
    MOV dword ptr [ESP + 0x18],ECX      ; 00444764
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 00444768
    SAR ESI,CL                          ; 0044476e
    AND ESI,dword ptr [EAX + 0x1c68]    ; 00444770
    MOV CL,byte ptr [EAX + 0x1c60]      ; 00444776
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044477c
    SHL ESI,CL                          ; 00444780
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00444782
    ADD ESI,EDI                         ; 00444788
    MOVZX ESI,byte ptr [ESI + EAX*0x1]  ; 0044478a
    MOV EAX,[0x00b0e5fc]                ; 0044478e | DAT_00b0e5fc
    SUB EAX,EDX                         ; 00444793
    MOV EDX,EAX                         ; 00444795
    IMUL EDX,ESI                        ; 00444797
    MOV CL,byte ptr [0x00b0e600]        ; 0044479a | DAT_00b0e600
    SAR EDX,CL                          ; 004447a0
    MOV ECX,dword ptr [ESP + 0x28]      ; 004447a2
    XOR EAX,EAX                         ; 004447a6
    MOV AL,byte ptr [ECX]               ; 004447a8
    ADD EAX,EDX                         ; 004447aa
    MOV byte ptr [ECX],AL               ; 004447ac
    MOV EAX,0x1                         ; 004447ae
        ;   Label: LAB_004447ae
    MOV ESI,dword ptr [ESP + 0x24]      ; 004447b3
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004447b7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004447bb
    MOV CL,byte ptr [0x012b0660]        ; 004447be | DAT_012b0660
    ADD EBX,0xc                         ; 004447c4
    ADD ESI,0x4                         ; 004447c7
    ADD EDI,0xc                         ; 004447ca
    INC EDX                             ; 004447cd
    SHL EAX,CL                          ; 004447ce
    MOV ECX,dword ptr [ESP + 0x20]      ; 004447d0
    SHL EAX,0x2                         ; 004447d4
    MOV dword ptr [ESP + 0x24],ESI      ; 004447d7
    MOV dword ptr [ESP + 0x1c],EDI      ; 004447db
    MOV dword ptr [EBP + 0x18],EDX      ; 004447df
    ADD ECX,EAX                         ; 004447e2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004447e4
    MOV dword ptr [ESP + 0x20],ECX      ; 004447e8
    INC EAX                             ; 004447ec
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004447ed
    MOV dword ptr [ESP + 0x28],EAX      ; 004447f0
    CMP EDX,ECX                         ; 004447f4
    JL 0x004446a0                       ; 004447f6
        ;   XREF to: 004446a0 (CONDITIONAL_JUMP)  ; LAB_004446a0
    MOV ESP,EBP                         ; 004447fc
        ;   Label: LAB_004447fc
    POP EBP                             ; 004447fe
    POP EDI                             ; 004447ff
    POP ESI                             ; 00444800
    POP EBX                             ; 00444801
    RET                                 ; 00444802

