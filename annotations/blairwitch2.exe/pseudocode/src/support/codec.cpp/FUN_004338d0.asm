; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_004338d0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_00434c00 at 00434c0e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004338d0
        ;   Label: support_codec.cpp_FUN_004338d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004338d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004338d5
    MOV ECX,dword ptr [EDX]             ; 004338d9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004338db
    MOV dword ptr [EBX],ECX             ; 004338de
    MOV dword ptr [EDX + 0x4],0x0       ; 004338e0
    MOV dword ptr [EDX],0x0             ; 004338e7
    POP EBX                             ; 004338ed
    RET                                 ; 004338ee

