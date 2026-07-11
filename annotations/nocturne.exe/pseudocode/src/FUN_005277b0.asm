; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005277b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_0052ddf0 at 0052de25
;   FUN_0052e850 at 0052e94b
;
; Referenced Globals:
;   undefined4 DAT_02dc78f8
;   undefined4 DAT_02dc78fc
;   undefined4 DAT_02dc7900
;   undefined4 DAT_02dc7904
;   undefined4 DAT_02dc7908
;   undefined4 DAT_02dc790c
;   undefined4 DAT_02dc8318
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005277b0
        ;   Label: FUN_005277b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005277b1
    MOV [0x02dc78f8],EAX                ; 005277b5 | DAT_02dc78f8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005277ba
    MOV [0x02dc78fc],EAX                ; 005277be | DAT_02dc78fc
    MOV EAX,dword ptr [ESP + 0x10]      ; 005277c3
    MOV [0x02dc7900],EAX                ; 005277c7 | DAT_02dc7900
    MOV EAX,dword ptr [ESP + 0x14]      ; 005277cc
    MOV [0x02dc7904],EAX                ; 005277d0 | DAT_02dc7904
    MOV EAX,dword ptr [ESP + 0x18]      ; 005277d5
    MOV [0x02dc7908],EAX                ; 005277d9 | DAT_02dc7908
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005277de
    MOV EDX,dword ptr [0x02dc8318]      ; 005277e2 | DAT_02dc8318
    MOV [0x02dc790c],EAX                ; 005277e8 | DAT_02dc790c
    TEST EDX,EDX                        ; 005277ed
    JNZ 0x005277f3                      ; 005277ef
        ;   XREF to: 005277f3 (CONDITIONAL_JUMP)  ; LAB_005277f3
    POP EBP                             ; 005277f1
    RET                                 ; 005277f2
    PUSH EDI                            ; 005277f3
        ;   Label: LAB_005277f3
    PUSH ESI                            ; 005277f4
    PUSH EBX                            ; 005277f5
    MOV ECX,dword ptr [ESP + 0x28]      ; 005277f6
    PUSH ECX                            ; 005277fa
    MOV EBX,dword ptr [ESP + 0x28]      ; 005277fb
    PUSH EBX                            ; 005277ff
    MOV ESI,dword ptr [ESP + 0x28]      ; 00527800
    PUSH ESI                            ; 00527804
    MOV EDI,dword ptr [ESP + 0x28]      ; 00527805
    PUSH EDI                            ; 00527809
    MOV EBP,dword ptr [ESP + 0x28]      ; 0052780a
    PUSH EBP                            ; 0052780e
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052780f
    PUSH ECX                            ; 00527813
    MOV EAX,EDX                         ; 00527814
    MOV EDX,dword ptr [EDX]             ; 00527816
    PUSH EAX                            ; 00527818
    CALL dword ptr [EDX + 0x20]         ; 00527819
    ADD ESP,0x1c                        ; 0052781c
    POP EBX                             ; 0052781f
    POP ESI                             ; 00527820
    POP EDI                             ; 00527821
    POP EBP                             ; 00527822
    RET                                 ; 00527823

