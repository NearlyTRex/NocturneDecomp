; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c68e0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c405d
;   undefined4 DAT_005e0a40
;   undefined4 DAT_005e0a44
;
; Called Functions:
;   FUN_0040ce40
;   FUN_0040cea0
;   FUN_00488fd0
;   FUN_0054eae0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c68e0
        ;   Label: FUN_004c68e0
    SUB ESP,0x4                         ; 004c68e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c68e4
    PUSH EDX                            ; 004c68e8
    CALL FUN_00488fd0                   ; 004c68e9
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488fd0()
    ADD ESP,0x4                         ; 004c68ee
    PUSH 0x5c4054                       ; 004c68f1
    MOV EBX,EAX                         ; 004c68f6
    ADD EAX,0x158                       ; 004c68f8
    PUSH EAX                            ; 004c68fd
    MOV dword ptr [EAX + -0x4],0x5e0a54 ; 004c68fe
    CALL FUN_0054eae0                   ; 004c6905
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    ADD ESP,0x8                         ; 004c690a
    PUSH 0x420c0000                     ; 004c690d
    PUSH 0x41a00000                     ; 004c6912
    CALL FUN_0040ce40                   ; 004c6917
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 004c691c
    FLD float ptr [ESP + 0x8]           ; 004c6920
    ADD ESP,0x8                         ; 004c6924
    FMUL double ptr [0x005c405d]        ; 004c6927 | DAT_005c405d
    PUSH 0x41200000                     ; 004c692d
    PUSH 0x40800000                     ; 004c6932
    CALL FUN_005a3120                   ; 004c6937
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [EBX + 0xd058]      ; 004c693c
    CALL FUN_0040ce40                   ; 004c6942
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [EBX + 0xd060],0xa0000 ; 004c6947
    MOV dword ptr [ESP + 0x8],EAX       ; 004c6951
    MOV dword ptr [EBX + 0xd064],0xffffffff ; 004c6955
    FLD float ptr [ESP + 0x8]           ; 004c695f
    FMUL double ptr [0x005c405d]        ; 004c6963 | DAT_005c405d
    MOV dword ptr [EBX + 0xd068],0x0    ; 004c6969
    ADD ESP,0x8                         ; 004c6973
    MOV dword ptr [EBX + 0xd074],0x2    ; 004c6976
    PUSH 0x3                            ; 004c6980
    CALL FUN_005a3120                   ; 004c6982
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH 0x1                            ; 004c6987
    FISTP dword ptr [EBX + 0xd05c]      ; 004c6989
    CALL FUN_0040cea0                   ; 004c698f
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    MOV dword ptr [EBX + 0x326c],0x3f400000 ; 004c6994
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 004c699e
    MOV dword ptr [EBX + 0xd0b0],0x0    ; 004c69a8
    MOV dword ptr [EBX + 0xd0b4],0x0    ; 004c69b2
    MOV dword ptr [EBX + 0xd0b8],0x0    ; 004c69bc
    MOV dword ptr [EBX + 0xd0bc],0x0    ; 004c69c6
    MOV dword ptr [EBX + 0xd0c0],0x0    ; 004c69d0
    FLD float ptr [0x005e0a40]          ; 004c69da | DAT_005e0a40
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 004c69e0
    FLD float ptr [0x005e0a44]          ; 004c69ea | DAT_005e0a44
    MOV dword ptr [EBX + 0xd070],EAX    ; 004c69f0
    ADD ESP,0x8                         ; 004c69f6
    FXCH                                ; 004c69f9
    FSTP float ptr [EBX + 0x3274]       ; 004c69fb
    FSTP float ptr [EBX + 0x3278]       ; 004c6a01
    MOV EAX,EBX                         ; 004c6a07
    ADD ESP,0x4                         ; 004c6a09
    POP EBX                             ; 004c6a0c
    RET                                 ; 004c6a0d

