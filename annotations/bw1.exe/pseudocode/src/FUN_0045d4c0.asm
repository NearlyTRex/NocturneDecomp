; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045d4c0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d4c0
        ;   Label: FUN_0045d4c0
    PUSH EDI                            ; 0045d4c1
    PUSH EBP                            ; 0045d4c2
    SUB ESP,0x48                        ; 0045d4c3
    MOV EBX,ESI                         ; 0045d4c6
    MOV ESI,dword ptr [ESP + 0x58]      ; 0045d4c8
    MOV EDX,dword ptr [ESI + 0x158]     ; 0045d4cc
    TEST EDX,EDX                        ; 0045d4d2
    JNZ 0x0045d524                      ; 0045d4d4
        ;   XREF to: 0045d524 (CONDITIONAL_JUMP)  ; LAB_0045d524
    MOV ECX,0xbf800000                  ; 0045d4d6
    MOV ESI,0xbdcccccd                  ; 0045d4db
    MOV EBP,0x3f800000                  ; 0045d4e0
    MOV EAX,0x40066666                  ; 0045d4e5
    LEA EDI,[ESP + 0x18]                ; 0045d4ea
    MOV dword ptr [ESP + 0x8],ECX       ; 0045d4ee
    MOV dword ptr [ESP],ECX             ; 0045d4f2
    MOV dword ptr [ESP + 0x4],ESI       ; 0045d4f5
    MOV dword ptr [ESP + 0xc],EBP       ; 0045d4f9
    MOV ECX,0x6                         ; 0045d4fd
    MOV ESI,ESP                         ; 0045d502
    MOV dword ptr [ESP + 0x10],EAX      ; 0045d504
    MOV dword ptr [ESP + 0x14],EBP      ; 0045d508
    MOVSD.REP ES:EDI,ESI                ; 0045d50c
        ;   Label: LAB_0045d50c
    MOV ECX,0x6                         ; 0045d50e
    LEA ESI,[ESP + 0x18]                ; 0045d513
    MOV EDI,EBX                         ; 0045d517
    MOVSD.REP ES:EDI,ESI                ; 0045d519
    MOV EAX,EBX                         ; 0045d51b
    ADD ESP,0x48                        ; 0045d51d
    POP EBP                             ; 0045d520
    POP EDI                             ; 0045d521
    POP EBX                             ; 0045d522
    RET                                 ; 0045d523
    PUSH EDX                            ; 0045d524
        ;   Label: LAB_0045d524
    MOV EAX,dword ptr [EDX + 0x154]     ; 0045d525
    LEA ESI,[ESP + 0x34]                ; 0045d52b
    LEA EDI,[ESP + 0x1c]                ; 0045d52f
    CALL dword ptr [EAX + 0x1c]         ; 0045d533
    MOV ECX,0x6                         ; 0045d536
    LEA ESI,[ESP + 0x34]                ; 0045d53b
    ADD ESP,0x4                         ; 0045d53f
    JMP 0x0045d50c                      ; 0045d542
        ;   XREF to: 0045d50c (UNCONDITIONAL_JUMP)  ; LAB_0045d50c

