; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_trstream_cpp_FUN_0057e150(int *param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e150
        ;   Label: support_trstream.cpp_FUN_0057e150
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057e151
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057e155
    MOV EDX,dword ptr [EAX + 0x10]      ; 0057e159
    MOV EBX,dword ptr [EAX + 0x4]       ; 0057e15c
    MOV dword ptr [ECX],EDX             ; 0057e15f
    PUSH EAX                            ; 0057e161
    MOV EDX,dword ptr [EAX]             ; 0057e162
    MOV dword ptr [EAX + 0x4],0x0       ; 0057e164
    CALL dword ptr [EDX + 0x14]         ; 0057e16b
    ADD ESP,0x4                         ; 0057e16e
    MOV EAX,EBX                         ; 0057e171
    POP EBX                             ; 0057e173
    RET                                 ; 0057e174

