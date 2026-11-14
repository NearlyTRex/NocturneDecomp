; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_00516e60(CPackedBitmap *this_ptr,_FILE *file_handle)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_00516de0 at 00516e03
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

    PUSH EBX                            ; 00516e60
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_00516e60
    PUSH ESI                            ; 00516e61
    PUSH EDI                            ; 00516e62
    PUSH EBP                            ; 00516e63
    SUB ESP,0x1c                        ; 00516e64
    MOV EBX,dword ptr [ESP + 0x30]      ; 00516e67
    MOV EBP,dword ptr [ESP + 0x34]      ; 00516e6b
    MOV ECX,0x4                         ; 00516e6f
    MOV ESI,0x61b3bc                    ; 00516e74
    MOV EDI,ESP                         ; 00516e79
    PUSH EDI                            ; 00516e7b
    MOV EAX,ECX                         ; 00516e7c
    SHR ECX,0x2                         ; 00516e7e
    MOVSD.REP ES:EDI,ESI                ; 00516e81
    MOV CL,AL                           ; 00516e83
    AND CL,0x3                          ; 00516e85
    MOVSB.REP ES:EDI,ESI                ; 00516e88
    POP EDI                             ; 00516e8a
    MOV EAX,dword ptr [EBX + 0x18]      ; 00516e8b
    MOV dword ptr [ESP + 0x4],EAX       ; 00516e8e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00516e92
    XOR EDX,EDX                         ; 00516e95
    MOV dword ptr [ESP + 0x8],EAX       ; 00516e97
    MOV dword ptr [ESP + 0xc],EDX       ; 00516e9b
    MOV dword ptr [ESP + 0x10],EDX      ; 00516e9f
    MOV EAX,dword ptr [EBX + 0x18]      ; 00516ea3
    DEC EAX                             ; 00516ea6
    MOV dword ptr [ESP + 0x14],EAX      ; 00516ea7
    PUSH EBP                            ; 00516eab
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00516eac
    PUSH 0x1                            ; 00516eaf
    DEC EAX                             ; 00516eb1
    PUSH 0x1c                           ; 00516eb2
    MOV dword ptr [ESP + 0x24],EAX      ; 00516eb4
    LEA EAX,[ESP + 0xc]                 ; 00516eb8
    PUSH EAX                            ; 00516ebc
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 00516ebd
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005b9690(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00516ec2
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00516ec5
    PUSH EBP                            ; 00516ec8
    INC EAX                             ; 00516ec9
    PUSH EAX                            ; 00516eca
    PUSH 0x4                            ; 00516ecb
    MOV ESI,dword ptr [EBX + 0x20]      ; 00516ecd
    PUSH ESI                            ; 00516ed0
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 00516ed1
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005b9690(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00516ed6
    PUSH EBP                            ; 00516ed9
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00516eda
    MOV EAX,dword ptr [EBX + 0x20]      ; 00516edd
    PUSH 0x1                            ; 00516ee0
    MOV EDX,dword ptr [EAX + EDI*0x4]   ; 00516ee2
    PUSH EDX                            ; 00516ee5
    MOV ECX,dword ptr [EBX + 0x14]      ; 00516ee6
    PUSH ECX                            ; 00516ee9
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 00516eea
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005b9690(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    MOV AH,byte ptr [EBP + 0xc]         ; 00516eef
    ADD ESP,0x10                        ; 00516ef2
    TEST AH,0x20                        ; 00516ef5
    JNZ 0x00516f02                      ; 00516ef8
        ;   XREF to: 00516f02 (CONDITIONAL_JUMP)  ; LAB_00516f02
    ADD ESP,0x1c                        ; 00516efa
    POP EBP                             ; 00516efd
    POP EDI                             ; 00516efe
    POP ESI                             ; 00516eff
    POP EBX                             ; 00516f00
    RET                                 ; 00516f01
    MOV EBX,0x5e1c83                    ; 00516f02
        ;   Label: LAB_00516f02
    MOV ESI,0x49c                       ; 00516f07
    PUSH 0x5e1c9b                       ; 00516f0c
    MOV dword ptr [0x01d046a0],EBX      ; 00516f11 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00516f17 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00516f1d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00516f22
    ADD ESP,0x1c                        ; 00516f25
    POP EBP                             ; 00516f28
    POP EDI                             ; 00516f29
    POP ESI                             ; 00516f2a
    POP EBX                             ; 00516f2b
    RET                                 ; 00516f2c

