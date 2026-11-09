; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_0057d830(int *param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d830
        ;   Label: support_trstream.cpp_FUN_0057d830
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d831
    PUSH EBX                            ; 0057d835
    MOV EAX,dword ptr [EBX]             ; 0057d836
    CALL dword ptr [EAX + 0x24]         ; 0057d838
    MOV dword ptr [EBX + 0xc],0x0       ; 0057d83b
    ADD ESP,0x4                         ; 0057d842
    MOV dword ptr [EBX + 0x10],0x1      ; 0057d845
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057d84c
    MOV dword ptr [EBX + 0x4],EAX       ; 0057d850
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057d853
    MOV dword ptr [EBX + 0x8],EAX       ; 0057d857
    POP EBX                             ; 0057d85a
    RET                                 ; 0057d85b

