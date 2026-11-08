; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004de8b0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c66a9
;   undefined4 DAT_005c66ad
;   undefined4 DAT_005c66b5
;   undefined4 DAT_00603b28
;
; Called Functions:
;   FUN_0045aae0
;   FUN_0045ab30
;   FUN_005372f0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de8b0
        ;   Label: FUN_004de8b0
    PUSH ESI                            ; 004de8b1
    SUB ESP,0x4                         ; 004de8b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004de8b5
    FLD float ptr [ESP + 0x14]          ; 004de8b9
    LEA EAX,[ESI + 0x20]                ; 004de8bd
    FMUL float ptr [0x005c66a9]         ; 004de8c0 | DAT_005c66a9
    PUSH EAX                            ; 004de8c6
    LEA EBX,[ESI + 0x2dc]               ; 004de8c7
    FADD float ptr [ESI + 0x2d8]        ; 004de8cd
    PUSH EBX                            ; 004de8d3
    FSTP float ptr [ESI + 0x2d8]        ; 004de8d4
    CALL FUN_0045aae0                   ; 004de8da
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045aae0()
    FLD float ptr [ESI + 0x2d8]         ; 004de8df
    FSIN                                ; 004de8e5
    FMUL double ptr [0x005c66ad]        ; 004de8e7 | DAT_005c66ad
    FADD double ptr [0x005c66b5]        ; 004de8ed | DAT_005c66b5
    ADD ESP,0x8                         ; 004de8f3
    CALL FUN_005a3120                   ; 004de8f6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004de8fb
    MOV EAX,dword ptr [ESP]             ; 004de8fe
    MOV EDX,EAX                         ; 004de901
    SAR EDX,0x1f                        ; 004de903
    MOV dword ptr [EBX + 0x3c],EAX      ; 004de906
    SHL EDX,0x8                         ; 004de909
    SBB EAX,EDX                         ; 004de90c
    SAR EAX,0x8                         ; 004de90e
    MOV EDX,EAX                         ; 004de911
    SAR EDX,0x1f                        ; 004de913
    SHL EDX,0x2                         ; 004de916
    SBB EAX,EDX                         ; 004de919
    SAR EAX,0x2                         ; 004de91b
    PUSH 0x3f800000                     ; 004de91e
    PUSH EBX                            ; 004de923
    MOV byte ptr [EBX + 0x1c],AL        ; 004de924
    CALL FUN_0045ab30                   ; 004de927
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ab30()
    ADD ESP,0x8                         ; 004de92c
    PUSH EBX                            ; 004de92f
    MOV EDX,dword ptr [0x00603b28]      ; 004de930 | DAT_00603b28
    PUSH EDX                            ; 004de936
    MOV dword ptr [EBX + 0x20],0x0      ; 004de937
    CALL FUN_005372f0                   ; 004de93e
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005372f0()
    ADD ESP,0x8                         ; 004de943
    ADD ESP,0x4                         ; 004de946
    POP ESI                             ; 004de949
    POP EBX                             ; 004de94a
    RET                                 ; 004de94b

