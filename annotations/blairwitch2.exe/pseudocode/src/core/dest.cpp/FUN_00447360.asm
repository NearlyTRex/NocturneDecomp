; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dest_cpp_FUN_00447360(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447360
        ;   Label: core_dest.cpp_FUN_00447360
    PUSH EDI                            ; 00447361
    PUSH EBP                            ; 00447362
    SUB ESP,0x48                        ; 00447363
    MOV EBX,ESI                         ; 00447366
    MOV ESI,dword ptr [ESP + 0x58]      ; 00447368
    MOV EDX,dword ptr [ESI + 0x2b4]     ; 0044736c
    TEST EDX,EDX                        ; 00447372
    JNZ 0x004473c4                      ; 00447374
        ;   XREF to: 004473c4 (CONDITIONAL_JUMP)  ; LAB_004473c4
    MOV ECX,0xbf800000                  ; 00447376
    MOV ESI,0xbdcccccd                  ; 0044737b
    MOV EBP,0x3f800000                  ; 00447380
    MOV EAX,0x40066666                  ; 00447385
    LEA EDI,[ESP + 0x18]                ; 0044738a
    MOV dword ptr [ESP + 0x8],ECX       ; 0044738e
    MOV dword ptr [ESP],ECX             ; 00447392
    MOV dword ptr [ESP + 0x4],ESI       ; 00447395
    MOV dword ptr [ESP + 0xc],EBP       ; 00447399
    MOV ECX,0x6                         ; 0044739d
    MOV ESI,ESP                         ; 004473a2
    MOV dword ptr [ESP + 0x10],EAX      ; 004473a4
    MOV dword ptr [ESP + 0x14],EBP      ; 004473a8
    MOVSD.REP ES:EDI,ESI                ; 004473ac
        ;   Label: LAB_004473ac
    MOV ECX,0x6                         ; 004473ae
    LEA ESI,[ESP + 0x18]                ; 004473b3
    MOV EDI,EBX                         ; 004473b7
    MOVSD.REP ES:EDI,ESI                ; 004473b9
    MOV EAX,EBX                         ; 004473bb
    ADD ESP,0x48                        ; 004473bd
    POP EBP                             ; 004473c0
    POP EDI                             ; 004473c1
    POP EBX                             ; 004473c2
    RET                                 ; 004473c3
    PUSH EDX                            ; 004473c4
        ;   Label: LAB_004473c4
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 004473c5
    LEA ESI,[ESP + 0x34]                ; 004473cb
    LEA EDI,[ESP + 0x1c]                ; 004473cf
    CALL dword ptr [EAX + 0x24]         ; 004473d3
    MOV ECX,0x6                         ; 004473d6
    LEA ESI,[ESP + 0x34]                ; 004473db
    ADD ESP,0x4                         ; 004473df
    JMP 0x004473ac                      ; 004473e2
        ;   XREF to: 004473ac (UNCONDITIONAL_JUMP)  ; LAB_004473ac

