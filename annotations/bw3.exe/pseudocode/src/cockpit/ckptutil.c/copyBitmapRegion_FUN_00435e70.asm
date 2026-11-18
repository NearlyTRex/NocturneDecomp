; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_copyBitmapRegion_FUN_00435e70(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset)
;
; Parameters:
; uchar *          Stack[0x4]:4   src_buffer
; int              Stack[0x8]:4   src_stride
; int              Stack[0xc]:4   unused
; uchar *          Stack[0x10]:4   dest_buffer
; int              Stack[0x14]:4   bytes_per_row
; int              Stack[0x18]:4   num_rows
; int              Stack[0x1c]:4   src_x_offset
; int              Stack[0x20]:4   src_y_offset
;
; Called Functions:
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435e70
        ;   Label: cockpit_ckptutil.c_copyBitmapRegion_FUN_00435e70
    PUSH ESI                            ; 00435e71
    PUSH EDI                            ; 00435e72
    PUSH EBP                            ; 00435e73
    SUB ESP,0x4                         ; 00435e74
    MOV EBX,dword ptr [ESP + 0x18]      ; 00435e77
    MOV EDI,dword ptr [ESP + 0x24]      ; 00435e7b
    MOV EBP,dword ptr [ESP + 0x28]      ; 00435e7f
    TEST EDI,EDI                        ; 00435e83
    JZ 0x00435e90                       ; 00435e85
        ;   XREF to: 00435e90 (CONDITIONAL_JUMP)  ; LAB_00435e90
    TEST EBX,EBX                        ; 00435e87
    JNZ 0x00435e98                      ; 00435e89
        ;   XREF to: 00435e98 (CONDITIONAL_JUMP)  ; LAB_00435e98
    LEA EAX,[EAX]                       ; 00435e8b
    MOV ECX,ECX                         ; 00435e8e
    ADD ESP,0x4                         ; 00435e90
        ;   Label: LAB_00435e90
    POP EBP                             ; 00435e93
    POP EDI                             ; 00435e94
    POP ESI                             ; 00435e95
    POP EBX                             ; 00435e96
    RET                                 ; 00435e97
    CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0 ; 00435e98
        ;   XREF to: 00434ea0 (UNCONDITIONAL_CALL)  ; OptimizedMemcpyFunc * cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0()
        ;   Label: LAB_00435e98
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00435e9d
    MOV dword ptr [ESP],EAX             ; 00435ea1
    MOV EAX,dword ptr [ESP + 0x34]      ; 00435ea4
    IMUL EAX,EDX                        ; 00435ea8
    ADD EAX,dword ptr [ESP + 0x30]      ; 00435eab
    ADD EBX,EAX                         ; 00435eaf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00435eb1
    XOR ESI,ESI                         ; 00435eb5
    TEST EAX,EAX                        ; 00435eb7
    JLE 0x00435e90                      ; 00435eb9
        ;   XREF to: 00435e90 (CONDITIONAL_JUMP)  ; LAB_00435e90
    PUSH EBP                            ; 00435ebb
        ;   Label: LAB_00435ebb
    PUSH EDI                            ; 00435ebc
    PUSH EBX                            ; 00435ebd
    INC ESI                             ; 00435ebe
    CALL dword ptr [ESP + 0xc]          ; 00435ebf
    ADD ESP,0xc                         ; 00435ec3
    ADD EDI,EBP                         ; 00435ec6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00435ec8
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00435ecc
    ADD EBX,EDX                         ; 00435ed0
    CMP ESI,ECX                         ; 00435ed2
    JL 0x00435ebb                       ; 00435ed4
        ;   XREF to: 00435ebb (CONDITIONAL_JUMP)  ; LAB_00435ebb
    ADD ESP,0x4                         ; 00435ed6
    POP EBP                             ; 00435ed9
    POP EDI                             ; 00435eda
    POP ESI                             ; 00435edb
    POP EBX                             ; 00435edc
    RET                                 ; 00435edd

