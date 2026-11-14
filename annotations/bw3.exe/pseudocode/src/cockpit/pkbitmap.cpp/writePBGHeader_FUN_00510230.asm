; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_00510230(int total_entries,_FILE *file_header)
;
; Parameters:
; int              Stack[0x4]:4   total_entries
; _FILE *          Stack[0x8]:4   file_header
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fwrite_FUN_005a48e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00510230
        ;   Label: cockpit_pkbitmap.cpp_writePBGHeader_FUN_00510230
    PUSH EDI                            ; 00510231
    SUB ESP,0x8                         ; 00510232
    MOV ECX,0x4                         ; 00510235
    MOV ESI,0x6036fc                    ; 0051023a
    MOV EDI,ESP                         ; 0051023f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00510241
    PUSH EDI                            ; 00510245
    MOV EAX,ECX                         ; 00510246
    SHR ECX,0x2                         ; 00510248
    MOVSD.REP ES:EDI,ESI                ; 0051024b
    MOV CL,AL                           ; 0051024d
    AND CL,0x3                          ; 0051024f
    MOVSB.REP ES:EDI,ESI                ; 00510252
    POP EDI                             ; 00510254
    PUSH EDX                            ; 00510255
    PUSH 0x1                            ; 00510256
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00510258
    PUSH 0x8                            ; 0051025c
    MOV dword ptr [ESP + 0x10],EDI      ; 0051025e
    LEA EDI,[ESP + 0xc]                 ; 00510262
    PUSH EDI                            ; 00510266
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 00510267
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005a48e0(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0051026c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051026f
    TEST byte ptr [EDI + 0xc],0x20      ; 00510273
    JNZ 0x0051027f                      ; 00510277
        ;   XREF to: 0051027f (CONDITIONAL_JUMP)  ; LAB_0051027f
    ADD ESP,0x8                         ; 00510279
    POP EDI                             ; 0051027c
    POP ESI                             ; 0051027d
    RET                                 ; 0051027e
    PUSH EBX                            ; 0051027f
        ;   Label: LAB_0051027f
    MOV ECX,0x5cbe5d                    ; 00510280
    MOV EBX,0x558                       ; 00510285
    PUSH 0x5cbe75                       ; 0051028a
    MOV dword ptr [0x01d71de0],ECX      ; 0051028f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00510295 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0051029b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005102a0
    POP EBX                             ; 005102a3
    ADD ESP,0x8                         ; 005102a4
    POP EDI                             ; 005102a7
    POP ESI                             ; 005102a8
    RET                                 ; 005102a9

