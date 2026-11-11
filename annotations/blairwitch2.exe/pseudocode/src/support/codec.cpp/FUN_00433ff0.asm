; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_codec_cpp_FUN_00433ff0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 0044243f
;
; Called Functions:
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_0057d520
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0
;   support_trstream.cpp_CInStreamMemory_tell_FUN_0057d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433ff0
        ;   Label: support_codec.cpp_FUN_00433ff0
    PUSH ESI                            ; 00433ff1
    PUSH EDI                            ; 00433ff2
    PUSH EBP                            ; 00433ff3
    SUB ESP,0x14                        ; 00433ff4
    MOV ESI,dword ptr [ESP + 0x30]      ; 00433ff7
    MOV EDX,dword ptr [ESI]             ; 00433ffb
    PUSH EDX                            ; 00433ffd
    MOV ECX,dword ptr [ESP + 0x30]      ; 00433ffe
    PUSH ECX                            ; 00434002
    LEA EAX,[ESP + 0x8]                 ; 00434003
    PUSH EAX                            ; 00434007
    CALL support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_0057d520 ; 00434008
        ;   XREF to: 0057d520 (UNCONDITIONAL_CALL)  ; undefined4 * support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_0057d520(CInStreamMemory * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0043400d
    MOV EBX,dword ptr [ESP + 0x34]      ; 00434010
    PUSH EBX                            ; 00434014
    LEA EBX,[ESP + 0x4]                 ; 00434015
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00434019
    PUSH EBX                            ; 0043401d
    MOV EDI,dword ptr [ESP + 0x30]      ; 0043401e
    MOV EAX,dword ptr [EAX]             ; 00434022
    PUSH EDI                            ; 00434024
    CALL dword ptr [EAX + 0x8]          ; 00434025
    ADD ESP,0xc                         ; 00434028
    MOV EBX,EAX                         ; 0043402b
    MOV EAX,ESP                         ; 0043402d
    PUSH EAX                            ; 0043402f
    CALL support_trstream.cpp_CInStreamMemory_tell_FUN_0057d760 ; 00434030
        ;   XREF to: 0057d760 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamMemory_tell_FUN_0057d760(CInStreamMemory * this_ptr)
    MOV EBP,dword ptr [ESI]             ; 00434035
    SUB EBP,EAX                         ; 00434037
    ADD ESP,0x4                         ; 00434039
    MOV dword ptr [ESI],EBP             ; 0043403c
    CMP EBX,0x1                         ; 0043403e
    SETZ AL                             ; 00434041
    XOR EBX,EBX                         ; 00434044
    PUSH 0x0                            ; 00434046
    MOV BL,AL                           ; 00434048
    LEA EAX,[ESP + 0x4]                 ; 0043404a
    PUSH EAX                            ; 0043404e
    CALL support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0 ; 0043404f
        ;   XREF to: 0057d5a0 (UNCONDITIONAL_CALL)  ; CInStreamMemory * support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0(CInStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00434054
    MOV EAX,EBX                         ; 00434057
    ADD ESP,0x14                        ; 00434059
    POP EBP                             ; 0043405c
    POP EDI                             ; 0043405d
    POP ESI                             ; 0043405e
    POP EBX                             ; 0043405f
    RET                                 ; 00434060

