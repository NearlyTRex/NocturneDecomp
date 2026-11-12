; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_0059f5a0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004c157e at 004c163b
;
; Called Functions:
;   support_trstream.cpp_FUN_0059f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f5a0
        ;   Label: support_trstream.cpp_FUN_0059f5a0
    SUB ESP,0x4                         ; 0059f5a1
    LEA EAX,[ESP + 0x14]                ; 0059f5a4
    MOV dword ptr [ESP],EAX             ; 0059f5a8
    MOV EAX,ESP                         ; 0059f5ab
    PUSH EAX                            ; 0059f5ad
    MOV EDX,dword ptr [ESP + 0x14]      ; 0059f5ae
    PUSH EDX                            ; 0059f5b2
    MOV ECX,dword ptr [ESP + 0x14]      ; 0059f5b3
    PUSH ECX                            ; 0059f5b7
    XOR EBX,EBX                         ; 0059f5b8
    CALL support_trstream.cpp_FUN_0059f700 ; 0059f5ba
        ;   XREF to: 0059f700 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f700()
    ADD ESP,0xc                         ; 0059f5bf
    MOV dword ptr [ESP],EBX             ; 0059f5c2
    ADD ESP,0x4                         ; 0059f5c5
    POP EBX                             ; 0059f5c8
    RET                                 ; 0059f5c9

