; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_codec_cpp_FUN_00440970(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044fc3f
;
; Called Functions:
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0
;   support_trstream.cpp_FUN_00574150
;   support_trstream.cpp_FUN_005743a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440970
        ;   Label: support_codec.cpp_FUN_00440970
    PUSH ESI                            ; 00440971
    PUSH EDI                            ; 00440972
    PUSH EBP                            ; 00440973
    SUB ESP,0x14                        ; 00440974
    MOV ESI,dword ptr [ESP + 0x30]      ; 00440977
    MOV EDX,dword ptr [ESI]             ; 0044097b
    PUSH EDX                            ; 0044097d
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044097e
    PUSH ECX                            ; 00440982
    LEA EAX,[ESP + 0x8]                 ; 00440983
    PUSH EAX                            ; 00440987
    CALL support_trstream.cpp_FUN_00574150 ; 00440988
        ;   XREF to: 00574150 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574150()
    ADD ESP,0xc                         ; 0044098d
    MOV EBX,dword ptr [ESP + 0x34]      ; 00440990
    PUSH EBX                            ; 00440994
    LEA EBX,[ESP + 0x4]                 ; 00440995
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00440999
    PUSH EBX                            ; 0044099d
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044099e
    MOV EAX,dword ptr [EAX]             ; 004409a2
    PUSH EDI                            ; 004409a4
    CALL dword ptr [EAX + 0x8]          ; 004409a5
    ADD ESP,0xc                         ; 004409a8
    MOV EBX,EAX                         ; 004409ab
    MOV EAX,ESP                         ; 004409ad
    PUSH EAX                            ; 004409af
    CALL support_trstream.cpp_FUN_005743a0 ; 004409b0
        ;   XREF to: 005743a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005743a0()
    MOV EBP,dword ptr [ESI]             ; 004409b5
    SUB EBP,EAX                         ; 004409b7
    ADD ESP,0x4                         ; 004409b9
    MOV dword ptr [ESI],EBP             ; 004409bc
    CMP EBX,0x1                         ; 004409be
    SETZ AL                             ; 004409c1
    XOR EBX,EBX                         ; 004409c4
    PUSH 0x0                            ; 004409c6
    MOV BL,AL                           ; 004409c8
    LEA EAX,[ESP + 0x4]                 ; 004409ca
    PUSH EAX                            ; 004409ce
    CALL support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0 ; 004409cf
        ;   XREF to: 005741d0 (UNCONDITIONAL_CALL)  ; CInStreamMemory * support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0(CInStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004409d4
    MOV EAX,EBX                         ; 004409d7
    ADD ESP,0x14                        ; 004409d9
    POP EBP                             ; 004409dc
    POP EDI                             ; 004409dd
    POP ESI                             ; 004409de
    POP EBX                             ; 004409df
    RET                                 ; 004409e0

