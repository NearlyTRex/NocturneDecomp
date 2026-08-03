; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_004f4f10(void)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d33f
;   TerminatedCString s_Error_writing_PBG_header_0058d357
;   undefined4 DAT_005be180
;   undefined1 DAT_005be184
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fwrite_FUN_00563a50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f4f10
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f4f10
    PUSH EDI                            ; 004f4f11
    SUB ESP,0x8                         ; 004f4f12
    MOV ECX,0x4                         ; 004f4f15
    MOV ESI,0x5be180                    ; 004f4f1a | DAT_005be180
    MOV EDI,ESP                         ; 004f4f1f
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f4f21
    PUSH EDI                            ; 004f4f25
    MOV EAX,ECX                         ; 004f4f26
    SHR ECX,0x2                         ; 004f4f28
    MOVSD.REP ES:EDI,ESI                ; 004f4f2b | DAT_005be180
    MOV CL,AL                           ; 004f4f2d
    AND CL,0x3                          ; 004f4f2f
    MOVSB.REP ES:EDI,ESI                ; 004f4f32 | DAT_005be184
    POP EDI                             ; 004f4f34
    PUSH EDX                            ; 004f4f35
    PUSH 0x1                            ; 004f4f36
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f4f38
    PUSH 0x8                            ; 004f4f3c
    MOV dword ptr [ESP + 0x10],EDI      ; 004f4f3e
    LEA EDI,[ESP + 0xc]                 ; 004f4f42
    PUSH EDI                            ; 004f4f46
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 004f4f47
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f4f4c
    MOV EDI,dword ptr [ESP + 0x18]      ; 004f4f4f
    TEST byte ptr [EDI + 0xc],0x20      ; 004f4f53
    JNZ 0x004f4f5f                      ; 004f4f57
        ;   XREF to: 004f4f5f (CONDITIONAL_JUMP)  ; LAB_004f4f5f
    ADD ESP,0x8                         ; 004f4f59
    POP EDI                             ; 004f4f5c
    POP ESI                             ; 004f4f5d
    RET                                 ; 004f4f5e
    PUSH EBX                            ; 004f4f5f
        ;   Label: LAB_004f4f5f
    MOV ECX,0x58d33f                    ; 004f4f60 | = "..\\cockpit\\pkbitmap.cpp"
    MOV EBX,0x53b                       ; 004f4f65
    PUSH 0x58d357                       ; 004f4f6a | = "Error writing PBG header"
    MOV dword ptr [0x01cc4800],ECX      ; 004f4f6f | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004f4f75 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f4f7b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4f80
    POP EBX                             ; 004f4f83
    ADD ESP,0x8                         ; 004f4f84
    POP EDI                             ; 004f4f87
    POP ESI                             ; 004f4f88
    RET                                 ; 004f4f89

