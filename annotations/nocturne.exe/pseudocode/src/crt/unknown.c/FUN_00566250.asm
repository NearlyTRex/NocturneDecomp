; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00566250(int param_1,int *param_2)
;
;
; XREF[1]:
;   crt_file.c_makepath_FUN_0056626c at 00566303
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00566250
        ;   Label: crt_unknown.c_FUN_00566250
    MOV EDX,dword ptr [ESP + 0x8]       ; 00566254
    CMP EAX,0x5c                        ; 00566258
    JZ 0x00566262                       ; 0056625b
        ;   XREF to: 00566262 (CONDITIONAL_JUMP)  ; LAB_00566262
    CMP EAX,0x2f                        ; 0056625d
    JNZ 0x0056626b                      ; 00566260
        ;   XREF to: 0056626b (CONDITIONAL_JUMP)  ; LAB_0056626b
    CMP dword ptr [EDX],0x0             ; 00566262
        ;   Label: LAB_00566262
    JNZ 0x00566269                      ; 00566265
        ;   XREF to: 00566269 (CONDITIONAL_JUMP)  ; LAB_00566269
    MOV dword ptr [EDX],EAX             ; 00566267
    MOV EAX,dword ptr [EDX]             ; 00566269
        ;   Label: LAB_00566269
    RET                                 ; 0056626b
        ;   Label: LAB_0056626b

