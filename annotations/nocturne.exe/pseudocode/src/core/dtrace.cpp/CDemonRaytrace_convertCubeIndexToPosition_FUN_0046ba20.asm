; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_0046ba20(int param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ba20
        ;   Label: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_0046ba20
    PUSH ESI                            ; 0046ba21
    PUSH EDI                            ; 0046ba22
    PUSH EBP                            ; 0046ba23
    SUB ESP,0x4                         ; 0046ba24
    MOV ECX,dword ptr [ESP + 0x18]      ; 0046ba27
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046ba2b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046ba2f
    MOV EDI,dword ptr [ECX + 0x44]      ; 0046ba33
    IMUL EDI,dword ptr [ECX + 0x48]     ; 0046ba36
    MOV EDX,EBX                         ; 0046ba3a
    MOV EAX,EBX                         ; 0046ba3c
    SAR EDX,0x1f                        ; 0046ba3e
    IDIV EDI                            ; 0046ba41
    MOV EDI,EAX                         ; 0046ba43
    MOV EAX,dword ptr [ECX + 0x44]      ; 0046ba45
    IMUL EAX,EDI                        ; 0046ba48
    MOV EBP,dword ptr [ECX + 0x48]      ; 0046ba4b
    IMUL EAX,EBP                        ; 0046ba4e
    SUB EBX,EAX                         ; 0046ba51
    MOV EDX,EBX                         ; 0046ba53
    MOV EAX,EBX                         ; 0046ba55
    SAR EDX,0x1f                        ; 0046ba57
    IDIV EBP                            ; 0046ba5a
    MOV EDX,EBP                         ; 0046ba5c
    IMUL EDX,EAX                        ; 0046ba5e
    MOV dword ptr [ESP],EDI             ; 0046ba61
    FILD dword ptr [ESP]                ; 0046ba64
    FMUL float ptr [ECX + 0x28]         ; 0046ba67
    FADD float ptr [ECX + 0x10]         ; 0046ba6a
    MOV dword ptr [ESP],EAX             ; 0046ba6d
    FSTP float ptr [ESI]                ; 0046ba70
    FILD dword ptr [ESP]                ; 0046ba72
    FMUL float ptr [ECX + 0x2c]         ; 0046ba75
    FLD float ptr [ECX + 0x14]          ; 0046ba78
    SUB EBX,EDX                         ; 0046ba7b
    FADDP                               ; 0046ba7d
    MOV dword ptr [ESP],EBX             ; 0046ba7f
    FSTP float ptr [ESI + 0x4]          ; 0046ba82
    FILD dword ptr [ESP]                ; 0046ba85
    FMUL float ptr [ECX + 0x30]         ; 0046ba88
    FADD float ptr [ECX + 0x18]         ; 0046ba8b
    MOV EAX,ESI                         ; 0046ba8e
    FSTP float ptr [ESI + 0x8]          ; 0046ba90
    ADD ESP,0x4                         ; 0046ba93
    POP EBP                             ; 0046ba96
    POP EDI                             ; 0046ba97
    POP ESI                             ; 0046ba98
    POP EBX                             ; 0046ba99
    RET                                 ; 0046ba9a

