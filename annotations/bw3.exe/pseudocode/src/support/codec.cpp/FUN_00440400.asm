; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00440400(int *param_1,int *param_2)
;
;
; XREF[3]:
;   support_codec.cpp_FUN_00440260 at 00440275
;   support_codec.cpp_FUN_00440440 at 0044044c
;   support_codec.cpp_FUN_00440ef0 at 00440f04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440400
        ;   Label: support_codec.cpp_FUN_00440400
    PUSH ESI                            ; 00440401
    PUSH EDI                            ; 00440402
    MOV EBX,dword ptr [ESP + 0x10]      ; 00440403
    MOV EDX,dword ptr [EBX]             ; 00440407
    MOV ESI,dword ptr [ESP + 0x14]      ; 00440409
    CMP EDX,0x8                         ; 0044040d
    JL 0x0044043a                       ; 00440410
        ;   XREF to: 0044043a (CONDITIONAL_JUMP)  ; LAB_0044043a
    XOR EDX,EDX                         ; 00440412
        ;   Label: LAB_00440412
    MOV DL,byte ptr [EBX + 0x4]         ; 00440414
    PUSH EDX                            ; 00440417
    MOV EAX,dword ptr [ESI]             ; 00440418
    PUSH ESI                            ; 0044041a
    CALL dword ptr [EAX + 0x4]          ; 0044041b
    ADD ESP,0x8                         ; 0044041e
    TEST EAX,EAX                        ; 00440421
    JL 0x0044043c                       ; 00440423
        ;   XREF to: 0044043c (CONDITIONAL_JUMP)  ; LAB_0044043c
    MOV ECX,dword ptr [EBX + 0x4]       ; 00440425
    MOV EDI,dword ptr [EBX]             ; 00440428
    SHR ECX,0x8                         ; 0044042a
    SUB EDI,0x8                         ; 0044042d
    MOV dword ptr [EBX + 0x4],ECX       ; 00440430
    MOV dword ptr [EBX],EDI             ; 00440433
    CMP EDI,0x8                         ; 00440435
    JGE 0x00440412                      ; 00440438
        ;   XREF to: 00440412 (CONDITIONAL_JUMP)  ; LAB_00440412
    XOR EAX,EAX                         ; 0044043a
        ;   Label: LAB_0044043a
    POP EDI                             ; 0044043c
        ;   Label: LAB_0044043c
    POP ESI                             ; 0044043d
    POP EBX                             ; 0044043e
    RET                                 ; 0044043f

