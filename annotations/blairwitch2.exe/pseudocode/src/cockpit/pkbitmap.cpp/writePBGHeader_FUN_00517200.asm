; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_00517200(int total_entries,_FILE *file_header)
;
; Parameters:
; int              Stack[0x4]:4   total_entries
; _FILE *          Stack[0x8]:4   file_header
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fwrite_FUN_005b9690
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00517200
        ;   Label: cockpit_pkbitmap.cpp_writePBGHeader_FUN_00517200
    PUSH EDI                            ; 00517201
    SUB ESP,0x8                         ; 00517202
    MOV ECX,0x4                         ; 00517205
    MOV ESI,0x61b3c0                    ; 0051720a
    MOV EDI,ESP                         ; 0051720f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00517211
    PUSH EDI                            ; 00517215
    MOV EAX,ECX                         ; 00517216
    SHR ECX,0x2                         ; 00517218
    MOVSD.REP ES:EDI,ESI                ; 0051721b
    MOV CL,AL                           ; 0051721d
    AND CL,0x3                          ; 0051721f
    MOVSB.REP ES:EDI,ESI                ; 00517222
    POP EDI                             ; 00517224
    PUSH EDX                            ; 00517225
    PUSH 0x1                            ; 00517226
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00517228
    PUSH 0x8                            ; 0051722c
    MOV dword ptr [ESP + 0x10],EDI      ; 0051722e
    LEA EDI,[ESP + 0xc]                 ; 00517232
    PUSH EDI                            ; 00517236
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 00517237
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005b9690()
    ADD ESP,0x10                        ; 0051723c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051723f
    TEST byte ptr [EDI + 0xc],0x20      ; 00517243
    JNZ 0x0051724f                      ; 00517247
        ;   XREF to: 0051724f (CONDITIONAL_JUMP)  ; LAB_0051724f
    ADD ESP,0x8                         ; 00517249
    POP EDI                             ; 0051724c
    POP ESI                             ; 0051724d
    RET                                 ; 0051724e
    PUSH EBX                            ; 0051724f
        ;   Label: LAB_0051724f
    MOV ECX,0x5e1d9a                    ; 00517250
    MOV EBX,0x556                       ; 00517255
    PUSH 0x5e1db2                       ; 0051725a
    MOV dword ptr [0x01d046a0],ECX      ; 0051725f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00517265 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051726b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00517270
    POP EBX                             ; 00517273
    ADD ESP,0x8                         ; 00517274
    POP EDI                             ; 00517277
    POP ESI                             ; 00517278
    RET                                 ; 00517279

