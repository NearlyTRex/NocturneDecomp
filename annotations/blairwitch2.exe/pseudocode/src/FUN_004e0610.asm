; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0610(int param_1)
;
;
; Called Functions:
;   FUN_0040cf60
;   FUN_00487eb0
;   FUN_00547480
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0610
        ;   Label: FUN_004e0610
    PUSH ESI                            ; 004e0611
    SUB ESP,0x4                         ; 004e0612
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e0615
    LEA EBX,[ESI + 0x2b4]               ; 004e0619
    PUSH EBX                            ; 004e061f
    CALL FUN_00547480                   ; 004e0620
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 004e0625
    PUSH EBX                            ; 004e0628
    CALL FUN_00547890                   ; 004e0629
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004e062e
    PUSH ESI                            ; 004e0631
    MOV dword ptr [ESI + 0x10af8],0x0   ; 004e0632
    CALL FUN_00487eb0                   ; 004e063c
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 004e0641
    PUSH 0x41f00000                     ; 004e0644
    PUSH 0x0                            ; 004e0649
    CALL FUN_0040cf60                   ; 004e064b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 004e0650
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e0654
    MOV dword ptr [ESI + 0x10a74],EAX   ; 004e0658
    ADD ESP,0x8                         ; 004e065e
    ADD ESP,0x4                         ; 004e0661
    POP ESI                             ; 004e0664
    POP EBX                             ; 004e0665
    RET                                 ; 004e0666

