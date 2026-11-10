; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_005381b0(CPackedBitmap *this_ptr,_FILE *file_handle)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_00538130 at 00538153
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

    PUSH EBX                            ; 005381b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_005381b0
    PUSH ESI                            ; 005381b1
    PUSH EDI                            ; 005381b2
    PUSH EBP                            ; 005381b3
    SUB ESP,0x1c                        ; 005381b4
    MOV EBX,dword ptr [ESP + 0x30]      ; 005381b7
    MOV EBP,dword ptr [ESP + 0x34]      ; 005381bb
    MOV ECX,0x4                         ; 005381bf
    MOV ESI,0x62281c                    ; 005381c4
    MOV EDI,ESP                         ; 005381c9
    PUSH EDI                            ; 005381cb
    MOV EAX,ECX                         ; 005381cc
    SHR ECX,0x2                         ; 005381ce
    MOVSD.REP ES:EDI,ESI                ; 005381d1
    MOV CL,AL                           ; 005381d3
    AND CL,0x3                          ; 005381d5
    MOVSB.REP ES:EDI,ESI                ; 005381d8
    POP EDI                             ; 005381da
    MOV EAX,dword ptr [EBX + 0x18]      ; 005381db
    MOV dword ptr [ESP + 0x4],EAX       ; 005381de
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005381e2
    XOR EDX,EDX                         ; 005381e5
    MOV dword ptr [ESP + 0x8],EAX       ; 005381e7
    MOV dword ptr [ESP + 0xc],EDX       ; 005381eb
    MOV dword ptr [ESP + 0x10],EDX      ; 005381ef
    MOV EAX,dword ptr [EBX + 0x18]      ; 005381f3
    DEC EAX                             ; 005381f6
    MOV dword ptr [ESP + 0x14],EAX      ; 005381f7
    PUSH EBP                            ; 005381fb
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005381fc
    PUSH 0x1                            ; 005381ff
    DEC EAX                             ; 00538201
    PUSH 0x1c                           ; 00538202
    MOV dword ptr [ESP + 0x24],EAX      ; 00538204
    LEA EAX,[ESP + 0xc]                 ; 00538208
    PUSH EAX                            ; 0053820c
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 0053820d
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005c1a70()
    ADD ESP,0x10                        ; 00538212
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00538215
    PUSH EBP                            ; 00538218
    INC EAX                             ; 00538219
    PUSH EAX                            ; 0053821a
    PUSH 0x4                            ; 0053821b
    MOV ESI,dword ptr [EBX + 0x20]      ; 0053821d
    PUSH ESI                            ; 00538220
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 00538221
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005c1a70()
    ADD ESP,0x10                        ; 00538226
    PUSH EBP                            ; 00538229
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0053822a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0053822d
    PUSH 0x1                            ; 00538230
    MOV EDX,dword ptr [EAX + EDI*0x4]   ; 00538232
    PUSH EDX                            ; 00538235
    MOV ECX,dword ptr [EBX + 0x14]      ; 00538236
    PUSH ECX                            ; 00538239
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 0053823a
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005c1a70()
    MOV AH,byte ptr [EBP + 0xc]         ; 0053823f
    ADD ESP,0x10                        ; 00538242
    TEST AH,0x20                        ; 00538245
    JNZ 0x00538252                      ; 00538248
        ;   XREF to: 00538252 (CONDITIONAL_JUMP)  ; LAB_00538252
    ADD ESP,0x1c                        ; 0053824a
    POP EBP                             ; 0053824d
    POP EDI                             ; 0053824e
    POP ESI                             ; 0053824f
    POP EBX                             ; 00538250
    RET                                 ; 00538251
    MOV EBX,0x5ecede                    ; 00538252
        ;   Label: LAB_00538252
    MOV ESI,0x49e                       ; 00538257
    PUSH 0x5ecef6                       ; 0053825c
    MOV dword ptr [0x01d1d400],EBX      ; 00538261 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00538267 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053826d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00538272
    ADD ESP,0x1c                        ; 00538275
    POP EBP                             ; 00538278
    POP EDI                             ; 00538279
    POP ESI                             ; 0053827a
    POP EBX                             ; 0053827b
    RET                                 ; 0053827c

