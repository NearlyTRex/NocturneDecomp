; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_dcamera.cpp_FUN_00446810 at 00446da4
;   core_game.cpp_FUN_004a3b90 at 004a3f5a
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0
;   support_codec.cpp_flushBitBuffer_FUN_00438d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004399a0
        ;   Label: support_codec.cpp_CLZWCompress_finalize_FUN_004399a0
    PUSH EDI                            ; 004399a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004399a2
    MOV EDX,dword ptr [EBX + 0x30]      ; 004399a6
    TEST EDX,EDX                        ; 004399a9
    JGE 0x004399c6                      ; 004399ab
        ;   XREF to: 004399c6 (CONDITIONAL_JUMP)  ; LAB_004399c6
    MOV EDI,dword ptr [ESP + 0x10]      ; 004399ad
        ;   Label: LAB_004399ad
    PUSH EDI                            ; 004399b1
    ADD EBX,0x18                        ; 004399b2
    PUSH EBX                            ; 004399b5
    CALL support_codec.cpp_flushBitBuffer_FUN_00438d60 ; 004399b6
        ;   XREF to: 00438d60 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_flushBitBuffer_FUN_00438d60()
    MOV EAX,0x1                         ; 004399bb
    ADD ESP,0x8                         ; 004399c0
    POP EDI                             ; 004399c3
    POP EBX                             ; 004399c4
    RET                                 ; 004399c5
    MOV ECX,dword ptr [ESP + 0x10]      ; 004399c6
        ;   Label: LAB_004399c6
    PUSH ECX                            ; 004399ca
    LEA EAX,[EBX + 0x18]                ; 004399cb
    PUSH EAX                            ; 004399ce
    PUSH EDX                            ; 004399cf
    LEA EAX,[EBX + 0x4]                 ; 004399d0
    PUSH EAX                            ; 004399d3
    CALL support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0 ; 004399d4
        ;   XREF to: 004396d0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0()
    ADD ESP,0x10                        ; 004399d9
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004399dc
    JMP 0x004399ad                      ; 004399e3
        ;   XREF to: 004399ad (UNCONDITIONAL_JUMP)  ; LAB_004399ad

