; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_0057de20(int *param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057de20
        ;   Label: support_trstream.cpp_FUN_0057de20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057de21
    PUSH EBX                            ; 0057de25
    MOV EAX,dword ptr [EBX]             ; 0057de26
    CALL dword ptr [EAX + 0x18]         ; 0057de28
    ADD ESP,0x4                         ; 0057de2b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057de2e
    MOV dword ptr [EBX + 0x4],EAX       ; 0057de32
    PUSH EBX                            ; 0057de35
    MOV EAX,dword ptr [EBX]             ; 0057de36
    CALL dword ptr [EAX + 0x14]         ; 0057de38
    ADD ESP,0x4                         ; 0057de3b
    POP EBX                             ; 0057de3e
    RET                                 ; 0057de3f

