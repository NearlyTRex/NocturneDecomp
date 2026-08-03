; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0(CPackedBitmap *this_ptr,_FILE *file_handle)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_004f4b30 at 004f4b53
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d228
;   TerminatedCString s_Error_writing_PBM_0058d240
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fwrite_FUN_00563a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4bb0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0
    PUSH ESI                            ; 004f4bb1
    PUSH EDI                            ; 004f4bb2
    PUSH EBP                            ; 004f4bb3
    SUB ESP,0x1c                        ; 004f4bb4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004f4bb7
    MOV EBP,dword ptr [ESP + 0x34]      ; 004f4bbb
    MOV ECX,0x4                         ; 004f4bbf
    MOV ESI,0x5be17c                    ; 004f4bc4
    MOV EDI,ESP                         ; 004f4bc9
    PUSH EDI                            ; 004f4bcb
    MOV EAX,ECX                         ; 004f4bcc
    SHR ECX,0x2                         ; 004f4bce
    MOVSD.REP ES:EDI,ESI                ; 004f4bd1
    MOV CL,AL                           ; 004f4bd3
    AND CL,0x3                          ; 004f4bd5
    MOVSB.REP ES:EDI,ESI                ; 004f4bd8
    POP EDI                             ; 004f4bda
    MOV EAX,dword ptr [EBX + 0x18]      ; 004f4bdb
    MOV dword ptr [ESP + 0x4],EAX       ; 004f4bde
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f4be2
    XOR EDX,EDX                         ; 004f4be5
    MOV dword ptr [ESP + 0x8],EAX       ; 004f4be7
    MOV dword ptr [ESP + 0xc],EDX       ; 004f4beb
    MOV dword ptr [ESP + 0x10],EDX      ; 004f4bef
    MOV EAX,dword ptr [EBX + 0x18]      ; 004f4bf3
    DEC EAX                             ; 004f4bf6
    MOV dword ptr [ESP + 0x14],EAX      ; 004f4bf7
    PUSH EBP                            ; 004f4bfb
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f4bfc
    PUSH 0x1                            ; 004f4bff
    DEC EAX                             ; 004f4c01
    PUSH 0x1c                           ; 004f4c02
    MOV dword ptr [ESP + 0x24],EAX      ; 004f4c04
    LEA EAX,[ESP + 0xc]                 ; 004f4c08
    PUSH EAX                            ; 004f4c0c
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 004f4c0d
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f4c12
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f4c15
    PUSH EBP                            ; 004f4c18
    INC EAX                             ; 004f4c19
    PUSH EAX                            ; 004f4c1a
    PUSH 0x4                            ; 004f4c1b
    MOV ESI,dword ptr [EBX + 0x20]      ; 004f4c1d
    PUSH ESI                            ; 004f4c20
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 004f4c21
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f4c26
    PUSH EBP                            ; 004f4c29
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004f4c2a
    MOV EAX,dword ptr [EBX + 0x20]      ; 004f4c2d
    PUSH 0x1                            ; 004f4c30
    MOV EDX,dword ptr [EAX + EDI*0x4]   ; 004f4c32
    PUSH EDX                            ; 004f4c35
    MOV ECX,dword ptr [EBX + 0x14]      ; 004f4c36
    PUSH ECX                            ; 004f4c39
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 004f4c3a
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    MOV AH,byte ptr [EBP + 0xc]         ; 004f4c3f
    ADD ESP,0x10                        ; 004f4c42
    TEST AH,0x20                        ; 004f4c45
    JNZ 0x004f4c52                      ; 004f4c48
        ;   XREF to: 004f4c52 (CONDITIONAL_JUMP)  ; LAB_004f4c52
    ADD ESP,0x1c                        ; 004f4c4a
    POP EBP                             ; 004f4c4d
    POP EDI                             ; 004f4c4e
    POP ESI                             ; 004f4c4f
    POP EBX                             ; 004f4c50
    RET                                 ; 004f4c51
    MOV EBX,0x58d228                    ; 004f4c52 | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f4c52
    MOV ESI,0x49d                       ; 004f4c57
    PUSH 0x58d240                       ; 004f4c5c | = "Error writing PBM"
    MOV dword ptr [0x01cc4800],EBX      ; 004f4c61 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f4c67 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f4c6d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4c72
    ADD ESP,0x1c                        ; 004f4c75
    POP EBP                             ; 004f4c78
    POP EDI                             ; 004f4c79
    POP ESI                             ; 004f4c7a
    POP EBX                             ; 004f4c7b
    RET                                 ; 004f4c7c

