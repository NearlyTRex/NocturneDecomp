; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00441490(uint param_1)
;
;
; XREF[1]:
;   support_codec.cpp_CAsciiUnarmor_decode_FUN_00441610 at 00441639
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_005f1320
;   undefined4 s_s_0123456789ABCDEFGHJKLM_005f1320+0xf
;   undefined4 s_s_0123456789ABCDEFGHJKLM_005f1320+0x1f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441490
        ;   Label: support_codec.cpp_FUN_00441490
    PUSH ESI                            ; 00441491
    MOV ESI,dword ptr [ESP + 0xc]       ; 00441492
    MOV EDX,0x3f                        ; 00441496
    XOR ECX,ECX                         ; 0044149b
    LEA EAX,[ECX + EDX*0x1]             ; 0044149d
        ;   Label: LAB_0044149d
    SAR EAX,0x1                         ; 004414a0
    XOR EBX,EBX                         ; 004414a2
    MOV BL,byte ptr [EAX + 0x5f1320]    ; 004414a4 | s_s_0123456789ABCDEFGHJKLM_005f1320+0x1f | s_s_0123456789ABCDEFGHJKLM_005f1320+0xf | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    CMP ESI,EBX                         ; 004414aa
    JZ 0x004414cb                       ; 004414ac
        ;   XREF to: 004414cb (CONDITIONAL_JUMP)  ; LAB_004414cb
    JGE 0x004414ce                      ; 004414ae
        ;   XREF to: 004414ce (CONDITIONAL_JUMP)  ; LAB_004414ce
    LEA EDX,[EAX + -0x1]                ; 004414b0
    CMP ECX,EDX                         ; 004414b3
        ;   Label: LAB_004414b3
    JLE 0x0044149d                      ; 004414b5
        ;   XREF to: 0044149d (CONDITIONAL_JUMP)  ; LAB_0044149d
    CMP ESI,0x4f                        ; 004414b7
    JZ 0x004414d3                       ; 004414ba
        ;   XREF to: 004414d3 (CONDITIONAL_JUMP)  ; LAB_004414d3
    CMP ESI,0x49                        ; 004414bc
    JZ 0x004414e0                       ; 004414bf
        ;   XREF to: 004414e0 (CONDITIONAL_JUMP)  ; LAB_004414e0
    CMP ESI,0x6c                        ; 004414c1
    JZ 0x004414e0                       ; 004414c4
        ;   XREF to: 004414e0 (CONDITIONAL_JUMP)  ; LAB_004414e0
    MOV EAX,0xffffffff                  ; 004414c6
    POP ESI                             ; 004414cb
        ;   Label: LAB_004414cb
    POP EBX                             ; 004414cc
    RET                                 ; 004414cd
    LEA ECX,[EAX + 0x1]                 ; 004414ce
        ;   Label: LAB_004414ce
    JMP 0x004414b3                      ; 004414d1
        ;   XREF to: 004414b3 (UNCONDITIONAL_JUMP)  ; LAB_004414b3
    PUSH 0x30                           ; 004414d3
        ;   Label: LAB_004414d3
    CALL support_codec.cpp_FUN_00441490 ; 004414d5
        ;   XREF to: 00441490 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00441490()
    ADD ESP,0x4                         ; 004414da
    POP ESI                             ; 004414dd
    POP EBX                             ; 004414de
    RET                                 ; 004414df
    PUSH 0x31                           ; 004414e0
        ;   Label: LAB_004414e0
    CALL support_codec.cpp_FUN_00441490 ; 004414e2
        ;   XREF to: 00441490 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00441490()
    ADD ESP,0x4                         ; 004414e7
    POP ESI                             ; 004414ea
    POP EBX                             ; 004414eb
    RET                                 ; 004414ec

