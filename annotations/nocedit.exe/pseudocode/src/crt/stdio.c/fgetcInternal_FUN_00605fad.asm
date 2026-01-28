; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack FILE * __watcallStack crt_stdio_c_fgetcInternal_FUN_00605fad(FILE *stream,byte *output_byte)
;
; Parameters:
; FILE *           Stack[0x4]:4   stream
; byte *           Stack[0x8]:4   output_byte
;
; XREF[1]:
;   crt_stdio.c_fgetc_outptr_FUN_005ff245 at 005ff2c8
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605fad
        ;   Label: crt_stdio.c_fgetcInternal_FUN_00605fad
    PUSH ESI                            ; 00605fae
    MOV EBX,dword ptr [ESP + 0xc]       ; 00605faf
    MOV EAX,dword ptr [EBX]             ; 00605fb3
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605fb5
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00605fb8
    MOV EDX,dword ptr [EAX + 0x14]      ; 00605fbc
    MOV ECX,dword ptr [EAX + 0x10]      ; 00605fbf
    MOV ESI,EAX                         ; 00605fc2
    CMP EDX,ECX                         ; 00605fc4
    JNC 0x00605ff1                      ; 00605fc6
        ;   XREF to: 00605ff1 (CONDITIONAL_JUMP)  ; LAB_00605ff1
    MOV EAX,dword ptr [ESI + 0x14]      ; 00605fc8
        ;   Label: LAB_00605fc8
    LEA EDX,[EAX + 0x1]                 ; 00605fcb
    MOV dword ptr [ESI + 0x14],EDX      ; 00605fce
    MOV AL,byte ptr [EAX]               ; 00605fd1
    AND EAX,0xff                        ; 00605fd3
    MOV EDX,EAX                         ; 00605fd8
        ;   Label: LAB_00605fd8
    CMP EAX,-0x1                        ; 00605fda
    JZ 0x00606002                       ; 00605fdd
        ;   XREF to: 00606002 (CONDITIONAL_JUMP)  ; LAB_00606002
    MOV EAX,dword ptr [ESP + 0x10]      ; 00605fdf
    MOV byte ptr [EAX],DL               ; 00605fe3
    MOV dword ptr [EBX + 0x4],0x1       ; 00605fe5
    MOV EAX,EBX                         ; 00605fec
    POP ESI                             ; 00605fee
    POP EBX                             ; 00605fef
    RET                                 ; 00605ff0
    PUSH EAX                            ; 00605ff1
        ;   Label: LAB_00605ff1
    MOV EDX,dword ptr [EAX + 0x28]      ; 00605ff2
    CALL dword ptr [EDX + 0x10]         ; 00605ff5
    ADD ESP,0x4                         ; 00605ff8
    CMP EAX,-0x1                        ; 00605ffb
    JNZ 0x00605fc8                      ; 00605ffe
        ;   XREF to: 00605fc8 (CONDITIONAL_JUMP)  ; LAB_00605fc8
    JMP 0x00605fd8                      ; 00606000
        ;   XREF to: 00605fd8 (UNCONDITIONAL_JUMP)  ; LAB_00605fd8
    MOV EAX,dword ptr [EBX]             ; 00606002
        ;   Label: LAB_00606002
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606004
    PUSH 0x6                            ; 00606007
    ADD EAX,EBX                         ; 00606009
    PUSH EAX                            ; 0060600b
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 0060600c
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 00606011
    MOV dword ptr [EBX + 0x4],0x0       ; 00606014
    MOV EAX,EBX                         ; 0060601b
    POP ESI                             ; 0060601d
    POP EBX                             ; 0060601e
    RET                                 ; 0060601f

