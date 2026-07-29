; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_FUN_0042d180(void)
;
;
; Called Functions:
;   cockpit_ckptutil.c_applyActPalette_FUN_0042d370
;   cockpit_ckptutil.c_FUN_00431260
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042d180
        ;   Label: cockpit_ckptutil.c_FUN_0042d180
    PUSH EDI                            ; 0042d181
    PUSH EBP                            ; 0042d182
    MOV EBP,dword ptr [ESP + 0x10]      ; 0042d183
    MOV EDI,dword ptr [ESP + 0x20]      ; 0042d187
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042d18b
    IMUL ESI,dword ptr [ESP + 0x18]     ; 0042d18f
    TEST EDI,EDI                        ; 0042d194
    JZ 0x0042d1e1                       ; 0042d196
        ;   XREF to: 0042d1e1 (CONDITIONAL_JUMP)  ; LAB_0042d1e1
    PUSH EBX                            ; 0042d198
        ;   Label: LAB_0042d198
    PUSH ESI                            ; 0042d199
    PUSH EDI                            ; 0042d19a
    PUSH EBP                            ; 0042d19b
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 ; 0042d19c
        ;   XREF to: 0042d240 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_readBitmapFile_FUN_0042d240(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 0042d1a1
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042d1a4
    PUSH ECX                            ; 0042d1a8
    PUSH ESI                            ; 0042d1a9
    PUSH EAX                            ; 0042d1aa
    PUSH EBP                            ; 0042d1ab
    MOV EBX,EAX                         ; 0042d1ac
    MOV EDI,EAX                         ; 0042d1ae
    CALL cockpit_ckptutil.c_applyActPalette_FUN_0042d370 ; 0042d1b0
        ;   XREF to: 0042d370 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_applyActPalette_FUN_0042d370(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
    ADD ESP,0x10                        ; 0042d1b5
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042d1b8
    TEST ESI,ESI                        ; 0042d1bc
    JZ 0x0042d1da                       ; 0042d1be
        ;   XREF to: 0042d1da (CONDITIONAL_JUMP)  ; LAB_0042d1da
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042d1c0
    PUSH EAX                            ; 0042d1c4
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042d1c5
    PUSH EDX                            ; 0042d1c9
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042d1ca
    PUSH ECX                            ; 0042d1ce
    PUSH ESI                            ; 0042d1cf
    PUSH EBP                            ; 0042d1d0
    PUSH EBX                            ; 0042d1d1
    CALL cockpit_ckptutil.c_FUN_00431260 ; 0042d1d2
        ;   XREF to: 00431260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_FUN_00431260(void * bitmap_buffer, char * filename, SScanlineSpans * span_output, int width, ...)
    ADD ESP,0x18                        ; 0042d1d7
    MOV EAX,EDI                         ; 0042d1da
        ;   Label: LAB_0042d1da
    POP EBX                             ; 0042d1dc
    POP EBP                             ; 0042d1dd
    POP EDI                             ; 0042d1de
    POP ESI                             ; 0042d1df
    RET                                 ; 0042d1e0
    PUSH ESI                            ; 0042d1e1
        ;   Label: LAB_0042d1e1
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0042d1e2
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0042d1e7
    MOV EDI,EAX                         ; 0042d1ea
    TEST EAX,EAX                        ; 0042d1ec
    JNZ 0x0042d198                      ; 0042d1ee
        ;   XREF to: 0042d198 (CONDITIONAL_JUMP)  ; LAB_0042d198
    POP EBP                             ; 0042d1f0
    POP EDI                             ; 0042d1f1
    POP ESI                             ; 0042d1f2
    RET                                 ; 0042d1f3

