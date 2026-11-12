; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_00538550(int total_entries,_FILE *file_header)
;
; Parameters:
; int              Stack[0x4]:4   total_entries
; _FILE *          Stack[0x8]:4   file_header
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fwrite_FUN_005c1a70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00538550
        ;   Label: cockpit_pkbitmap.cpp_writePBGHeader_FUN_00538550
    PUSH EDI                            ; 00538551
    SUB ESP,0x8                         ; 00538552
    MOV ECX,0x4                         ; 00538555
    MOV ESI,0x622820                    ; 0053855a
    MOV EDI,ESP                         ; 0053855f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00538561
    PUSH EDI                            ; 00538565
    MOV EAX,ECX                         ; 00538566
    SHR ECX,0x2                         ; 00538568
    MOVSD.REP ES:EDI,ESI                ; 0053856b
    MOV CL,AL                           ; 0053856d
    AND CL,0x3                          ; 0053856f
    MOVSB.REP ES:EDI,ESI                ; 00538572
    POP EDI                             ; 00538574
    PUSH EDX                            ; 00538575
    PUSH 0x1                            ; 00538576
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00538578
    PUSH 0x8                            ; 0053857c
    MOV dword ptr [ESP + 0x10],EDI      ; 0053857e
    LEA EDI,[ESP + 0xc]                 ; 00538582
    PUSH EDI                            ; 00538586
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 00538587
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005c1a70(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0053858c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0053858f
    TEST byte ptr [EDI + 0xc],0x20      ; 00538593
    JNZ 0x0053859f                      ; 00538597
        ;   XREF to: 0053859f (CONDITIONAL_JUMP)  ; LAB_0053859f
    ADD ESP,0x8                         ; 00538599
    POP EDI                             ; 0053859c
    POP ESI                             ; 0053859d
    RET                                 ; 0053859e
    PUSH EBX                            ; 0053859f
        ;   Label: LAB_0053859f
    MOV ECX,0x5ecff5                    ; 005385a0
    MOV EBX,0x558                       ; 005385a5
    PUSH 0x5ed00d                       ; 005385aa
    MOV dword ptr [0x01d1d400],ECX      ; 005385af | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005385b5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005385bb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005385c0
    POP EBX                             ; 005385c3
    ADD ESP,0x8                         ; 005385c4
    POP EDI                             ; 005385c7
    POP ESI                             ; 005385c8
    RET                                 ; 005385c9

