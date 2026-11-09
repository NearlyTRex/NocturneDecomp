; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dest_cpp_FUN_00459410(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459410
        ;   Label: core_dest.cpp_FUN_00459410
    PUSH EDI                            ; 00459411
    PUSH EBP                            ; 00459412
    SUB ESP,0x48                        ; 00459413
    MOV EBX,ESI                         ; 00459416
    MOV ESI,dword ptr [ESP + 0x58]      ; 00459418
    MOV EDX,dword ptr [ESI + 0x158]     ; 0045941c
    TEST EDX,EDX                        ; 00459422
    JNZ 0x00459474                      ; 00459424
        ;   XREF to: 00459474 (CONDITIONAL_JUMP)  ; LAB_00459474
    MOV ECX,0xbf800000                  ; 00459426
    MOV ESI,0xbdcccccd                  ; 0045942b
    MOV EBP,0x3f800000                  ; 00459430
    MOV EAX,0x40066666                  ; 00459435
    LEA EDI,[ESP + 0x18]                ; 0045943a
    MOV dword ptr [ESP + 0x8],ECX       ; 0045943e
    MOV dword ptr [ESP],ECX             ; 00459442
    MOV dword ptr [ESP + 0x4],ESI       ; 00459445
    MOV dword ptr [ESP + 0xc],EBP       ; 00459449
    MOV ECX,0x6                         ; 0045944d
    MOV ESI,ESP                         ; 00459452
    MOV dword ptr [ESP + 0x10],EAX      ; 00459454
    MOV dword ptr [ESP + 0x14],EBP      ; 00459458
    MOVSD.REP ES:EDI,ESI                ; 0045945c
        ;   Label: LAB_0045945c
    MOV ECX,0x6                         ; 0045945e
    LEA ESI,[ESP + 0x18]                ; 00459463
    MOV EDI,EBX                         ; 00459467
    MOVSD.REP ES:EDI,ESI                ; 00459469
    MOV EAX,EBX                         ; 0045946b
    ADD ESP,0x48                        ; 0045946d
    POP EBP                             ; 00459470
    POP EDI                             ; 00459471
    POP EBX                             ; 00459472
    RET                                 ; 00459473
    PUSH EDX                            ; 00459474
        ;   Label: LAB_00459474
    MOV EAX,dword ptr [EDX + 0x154]     ; 00459475
    LEA ESI,[ESP + 0x34]                ; 0045947b
    LEA EDI,[ESP + 0x1c]                ; 0045947f
    CALL dword ptr [EAX + 0x1c]         ; 00459483
    MOV ECX,0x6                         ; 00459486
    LEA ESI,[ESP + 0x34]                ; 0045948b
    ADD ESP,0x4                         ; 0045948f
    JMP 0x0045945c                      ; 00459492
        ;   XREF to: 0045945c (UNCONDITIONAL_JUMP)  ; LAB_0045945c

