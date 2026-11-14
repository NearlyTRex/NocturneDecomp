; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0050fe90(CPackedBitmap *this_ptr,_FILE *file_handle)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_0050fe10 at 0050fe33
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

    PUSH EBX                            ; 0050fe90
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0050fe90
    PUSH ESI                            ; 0050fe91
    PUSH EDI                            ; 0050fe92
    PUSH EBP                            ; 0050fe93
    SUB ESP,0x1c                        ; 0050fe94
    MOV EBX,dword ptr [ESP + 0x30]      ; 0050fe97
    MOV EBP,dword ptr [ESP + 0x34]      ; 0050fe9b
    MOV ECX,0x4                         ; 0050fe9f
    MOV ESI,0x6036f8                    ; 0050fea4
    MOV EDI,ESP                         ; 0050fea9
    PUSH EDI                            ; 0050feab
    MOV EAX,ECX                         ; 0050feac
    SHR ECX,0x2                         ; 0050feae
    MOVSD.REP ES:EDI,ESI                ; 0050feb1
    MOV CL,AL                           ; 0050feb3
    AND CL,0x3                          ; 0050feb5
    MOVSB.REP ES:EDI,ESI                ; 0050feb8
    POP EDI                             ; 0050feba
    MOV EAX,dword ptr [EBX + 0x18]      ; 0050febb
    MOV dword ptr [ESP + 0x4],EAX       ; 0050febe
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0050fec2
    XOR EDX,EDX                         ; 0050fec5
    MOV dword ptr [ESP + 0x8],EAX       ; 0050fec7
    MOV dword ptr [ESP + 0xc],EDX       ; 0050fecb
    MOV dword ptr [ESP + 0x10],EDX      ; 0050fecf
    MOV EAX,dword ptr [EBX + 0x18]      ; 0050fed3
    DEC EAX                             ; 0050fed6
    MOV dword ptr [ESP + 0x14],EAX      ; 0050fed7
    PUSH EBP                            ; 0050fedb
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0050fedc
    PUSH 0x1                            ; 0050fedf
    DEC EAX                             ; 0050fee1
    PUSH 0x1c                           ; 0050fee2
    MOV dword ptr [ESP + 0x24],EAX      ; 0050fee4
    LEA EAX,[ESP + 0xc]                 ; 0050fee8
    PUSH EAX                            ; 0050feec
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 0050feed
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005a48e0(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0050fef2
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0050fef5
    PUSH EBP                            ; 0050fef8
    INC EAX                             ; 0050fef9
    PUSH EAX                            ; 0050fefa
    PUSH 0x4                            ; 0050fefb
    MOV ESI,dword ptr [EBX + 0x20]      ; 0050fefd
    PUSH ESI                            ; 0050ff00
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 0050ff01
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005a48e0(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0050ff06
    PUSH EBP                            ; 0050ff09
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0050ff0a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0050ff0d
    PUSH 0x1                            ; 0050ff10
    MOV EDX,dword ptr [EAX + EDI*0x4]   ; 0050ff12
    PUSH EDX                            ; 0050ff15
    MOV ECX,dword ptr [EBX + 0x14]      ; 0050ff16
    PUSH ECX                            ; 0050ff19
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 0050ff1a
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005a48e0(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    MOV AH,byte ptr [EBP + 0xc]         ; 0050ff1f
    ADD ESP,0x10                        ; 0050ff22
    TEST AH,0x20                        ; 0050ff25
    JNZ 0x0050ff32                      ; 0050ff28
        ;   XREF to: 0050ff32 (CONDITIONAL_JUMP)  ; LAB_0050ff32
    ADD ESP,0x1c                        ; 0050ff2a
    POP EBP                             ; 0050ff2d
    POP EDI                             ; 0050ff2e
    POP ESI                             ; 0050ff2f
    POP EBX                             ; 0050ff30
    RET                                 ; 0050ff31
    MOV EBX,0x5cbd46                    ; 0050ff32
        ;   Label: LAB_0050ff32
    MOV ESI,0x49e                       ; 0050ff37
    PUSH 0x5cbd5e                       ; 0050ff3c
    MOV dword ptr [0x01d71de0],EBX      ; 0050ff41 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050ff47 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050ff4d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050ff52
    ADD ESP,0x1c                        ; 0050ff55
    POP EBP                             ; 0050ff58
    POP EDI                             ; 0050ff59
    POP ESI                             ; 0050ff5a
    POP EBX                             ; 0050ff5b
    RET                                 ; 0050ff5c

