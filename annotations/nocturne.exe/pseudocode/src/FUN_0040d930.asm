; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040d930(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   undefined4 DAT_00578011
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3fd0
;   undefined4 DAT_01fb860c
;   undefined4 DAT_01fb8610
;   undefined4 DAT_01fb8614
;
; Called Functions:
;   FUN_0050ec80
;   FUN_00511750
;   FUN_00511780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d930
        ;   Label: FUN_0040d930
    PUSH ESI                            ; 0040d931
    PUSH EBP                            ; 0040d932
    SUB ESP,0x18                        ; 0040d933
    MOV ESI,dword ptr [ESP + 0x28]      ; 0040d936
    MOV EAX,[0x01fb860c]                ; 0040d93a | DAT_01fb860c
    MOV dword ptr [ESP],EAX             ; 0040d93f
    MOV EAX,0x1fb860c                   ; 0040d942
    MOV EAX,dword ptr [EAX + 0x4]       ; 0040d947 | DAT_01fb8610
    MOV dword ptr [ESP + 0x4],EAX       ; 0040d94a
    MOV EAX,0x1fb860c                   ; 0040d94e
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040d953 | DAT_01fb8614
    LEA EBX,[ESI + 0x20]                ; 0040d956
    MOV dword ptr [ESP + 0x8],EAX       ; 0040d959
    FLD float ptr [EBX]                 ; 0040d95d
    FSUB float ptr [ESP]                ; 0040d95f
    FMUL ST0                            ; 0040d962
    FLD float ptr [EBX + 0x4]           ; 0040d964
    FSUB float ptr [ESP + 0x4]          ; 0040d967
    FMUL ST0                            ; 0040d96b
    FLD float ptr [EBX + 0x8]           ; 0040d96d
    FXCH                                ; 0040d970
    FADDP ST2,ST0                       ; 0040d972
    FSUB float ptr [ESP + 0x8]          ; 0040d974
    FMUL ST0                            ; 0040d978
    FADDP                               ; 0040d97a
    FCOMP float ptr [0x00578011]        ; 0040d97c | DAT_00578011
    FNSTSW AX                           ; 0040d982
    SAHF                                ; 0040d984
    JBE 0x0040d990                      ; 0040d985
        ;   XREF to: 0040d990 (CONDITIONAL_JUMP)  ; LAB_0040d990
    XOR EAX,EAX                         ; 0040d987
    ADD ESP,0x18                        ; 0040d989
    POP EBP                             ; 0040d98c
    POP ESI                             ; 0040d98d
    POP EBX                             ; 0040d98e
    RET                                 ; 0040d98f
    PUSH EDI                            ; 0040d990
        ;   Label: LAB_0040d990
    PUSH ESI                            ; 0040d991
    MOV EDX,dword ptr [0x005be368]      ; 0040d992 | DAT_005be368
    PUSH EDX                            ; 0040d998 | DAT_01e57284
    CALL FUN_00511780                   ; 0040d999
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined FUN_00511780()
    ADD ESP,0x8                         ; 0040d99e
    PUSH 0x0                            ; 0040d9a1
    PUSH EBX                            ; 0040d9a3
    MOV ECX,dword ptr [0x005be368]      ; 0040d9a4 | DAT_005be368
    PUSH ECX                            ; 0040d9aa | DAT_01e57284
    CALL FUN_0050ec80                   ; 0040d9ab
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ec80()
    ADD ESP,0xc                         ; 0040d9b0
    MOV EDI,dword ptr [0x005be368]      ; 0040d9b3 | DAT_005be368
    PUSH EDI                            ; 0040d9b9 | DAT_01e57284
    CALL FUN_00511750                   ; 0040d9ba
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined FUN_00511750()
    MOV EAX,[0x005be368]                ; 0040d9bf | DAT_005be368
    ADD ESP,0x4                         ; 0040d9c4
    MOV EBP,dword ptr [EAX + 0x14cd4c]  ; 0040d9c7 | DAT_01fa3fd0
    PUSH dword ptr [ESP + 0x30]         ; 0040d9cd
    PUSH EBP                            ; 0040d9d1
    PUSH EBX                            ; 0040d9d2
    MOV EDX,dword ptr [ESI + 0x14c]     ; 0040d9d3
    PUSH ESI                            ; 0040d9d9
    CALL dword ptr [EDX + 0x20]         ; 0040d9da
    ADD ESP,0x10                        ; 0040d9dd
    POP EDI                             ; 0040d9e0
    ADD ESP,0x18                        ; 0040d9e1
    POP EBP                             ; 0040d9e4
    POP ESI                             ; 0040d9e5
    POP EBX                             ; 0040d9e6
    RET                                 ; 0040d9e7

