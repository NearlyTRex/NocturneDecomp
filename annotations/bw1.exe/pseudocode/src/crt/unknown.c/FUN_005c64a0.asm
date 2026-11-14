; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c64a0(undefined4 *param_1)
;
;
; XREF[7]:
;   crt_stdio.c_fputc_FUN_005c2f00 at 005c2f7c
;   crt_stdio.c_fread_FUN_005c0b10 at 005c0b80
;   crt_stdio.c_fwrite_FUN_005c1a70 at 005c1ae5
;   crt_stdio.c_ungetc_FUN_005c0700 at 005c0796
;   crt_unknown.c_FUN_005c0630 at 005c0642
;   crt_unknown.c_FUN_005c4fe0 at 005c5039
;   crt_unknown.c_FUN_005ce150 at 005ce177
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_unknown.c_FUN_005c74d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c64a0
        ;   Label: crt_unknown.c_FUN_005c64a0
    PUSH ESI                            ; 005c64a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c64a2
    PUSH EBX                            ; 005c64a6
    CALL crt_unknown.c_FUN_005c74d0     ; 005c64a7
        ;   XREF to: 005c74d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c74d0()
    MOV EDX,dword ptr [EBX + 0x14]      ; 005c64ac
    ADD ESP,0x4                         ; 005c64af
    TEST EDX,EDX                        ; 005c64b2
    JNZ 0x005c64dc                      ; 005c64b4
        ;   XREF to: 005c64dc (CONDITIONAL_JUMP)  ; LAB_005c64dc
    MOV AH,byte ptr [EBX + 0xd]         ; 005c64b6
    TEST AH,0x2                         ; 005c64b9
    JZ 0x005c64c7                       ; 005c64bc
        ;   XREF to: 005c64c7 (CONDITIONAL_JUMP)  ; LAB_005c64c7
    MOV dword ptr [EBX + 0x14],0x86     ; 005c64be
    JMP 0x005c64dc                      ; 005c64c5
        ;   XREF to: 005c64dc (UNCONDITIONAL_JUMP)  ; LAB_005c64dc
    TEST AH,0x4                         ; 005c64c7
        ;   Label: LAB_005c64c7
    JZ 0x005c64d5                       ; 005c64ca
        ;   XREF to: 005c64d5 (CONDITIONAL_JUMP)  ; LAB_005c64d5
    MOV dword ptr [EBX + 0x14],0x1      ; 005c64cc
    JMP 0x005c64dc                      ; 005c64d3
        ;   XREF to: 005c64dc (UNCONDITIONAL_JUMP)  ; LAB_005c64dc
    MOV dword ptr [EBX + 0x14],0x1000   ; 005c64d5
        ;   Label: LAB_005c64d5
    MOV ECX,dword ptr [EBX + 0x14]      ; 005c64dc
        ;   Label: LAB_005c64dc
    PUSH ECX                            ; 005c64df
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005c64e0
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    MOV EDX,dword ptr [EBX + 0x8]       ; 005c64e5
    MOV dword ptr [EDX + 0x8],EAX       ; 005c64e8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c64eb
    MOV ESI,dword ptr [EAX + 0x8]       ; 005c64ee
    ADD ESP,0x4                         ; 005c64f1
    TEST ESI,ESI                        ; 005c64f4
    JNZ 0x005c651b                      ; 005c64f6
        ;   XREF to: 005c651b (CONDITIONAL_JUMP)  ; LAB_005c651b
    MOV CL,byte ptr [EBX + 0xd]         ; 005c64f8
    AND CL,0xf8                         ; 005c64fb
    MOV byte ptr [EBX + 0xd],CL         ; 005c64fe
    MOV CH,CL                           ; 005c6501
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c6503
    OR CH,0x4                           ; 005c6506
    LEA EDX,[EBX + 0x18]                ; 005c6509
    MOV byte ptr [EBX + 0xd],CH         ; 005c650c
    MOV dword ptr [EAX + 0x8],EDX       ; 005c650f
    MOV dword ptr [EBX + 0x14],0x1      ; 005c6512
    JMP 0x005c651f                      ; 005c6519
        ;   XREF to: 005c651f (UNCONDITIONAL_JUMP)  ; LAB_005c651f
    OR byte ptr [EBX + 0xc],0x8         ; 005c651b
        ;   Label: LAB_005c651b
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c651f
        ;   Label: LAB_005c651f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c6522
    MOV dword ptr [EBX + 0x4],0x0       ; 005c6525
    MOV dword ptr [EBX],EAX             ; 005c652c
    POP ESI                             ; 005c652e
    POP EBX                             ; 005c652f
    RET                                 ; 005c6530

