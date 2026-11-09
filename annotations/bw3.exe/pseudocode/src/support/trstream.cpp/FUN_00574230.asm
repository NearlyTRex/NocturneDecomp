; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_trstream_cpp_FUN_00574230(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574230
        ;   Label: support_trstream.cpp_FUN_00574230
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574231
    MOV ECX,dword ptr [EAX + 0x8]       ; 00574235
    MOV EDX,dword ptr [EAX + 0xc]       ; 00574238
    CMP EDX,ECX                         ; 0057423b
    JGE 0x0057424f                      ; 0057423d
        ;   XREF to: 0057424f (CONDITIONAL_JUMP)  ; LAB_0057424f
    MOV EBX,dword ptr [EAX + 0x4]       ; 0057423f
    TEST EBX,EBX                        ; 00574242
    JNZ 0x00574258                      ; 00574244
        ;   XREF to: 00574258 (CONDITIONAL_JUMP)  ; LAB_00574258
    MOV EDX,0xfffffffe                  ; 00574246
    MOV EAX,EDX                         ; 0057424b
    POP EBX                             ; 0057424d
    RET                                 ; 0057424e
    MOV EDX,0xffffffff                  ; 0057424f
        ;   Label: LAB_0057424f
    MOV EAX,EDX                         ; 00574254
    POP EBX                             ; 00574256
    RET                                 ; 00574257
    PUSH EDI                            ; 00574258
        ;   Label: LAB_00574258
    PUSH ESI                            ; 00574259
    MOV ESI,EDX                         ; 0057425a
    ADD EDX,EBX                         ; 0057425c
    MOV DL,byte ptr [EDX]               ; 0057425e
    LEA EDI,[ESI + 0x1]                 ; 00574260
    AND EDX,0xff                        ; 00574263
    MOV dword ptr [EAX + 0xc],EDI       ; 00574269
    POP ESI                             ; 0057426c
    POP EDI                             ; 0057426d
    MOV EAX,EDX                         ; 0057426e
    POP EBX                             ; 00574270
    RET                                 ; 00574271

