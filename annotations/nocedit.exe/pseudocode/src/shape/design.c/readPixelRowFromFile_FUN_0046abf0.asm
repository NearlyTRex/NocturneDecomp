; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_readPixelRowFromFile_FUN_0046abf0(FILE * file_handle, byte * rgb_buffer, byte * alpha_buffer, int pixel_count, int file_flags)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
; byte *           Stack[0x8]:4   rgb_buffer
; byte *           Stack[0xc]:4   alpha_buffer
; int              Stack[0x10]:4   pixel_count
; int              Stack[0x14]:4   file_flags
;
; XREF[1]:
;   shape_design.c_loadTextureData_FUN_0046b060 at 0046b1e7
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046abf0
        ;   Label: shape_design.c_readPixelRowFromFile_FUN_0046abf0
    PUSH ESI                            ; 0046abf1
    PUSH EDI                            ; 0046abf2
    PUSH EBP                            ; 0046abf3
    MOV EBP,ESP                         ; 0046abf4
    SUB ESP,0x0                         ; 0046abf6
    CMP dword ptr [EBP + 0x20],0x0      ; 0046abfc
        ;   Label: LAB_0046abfc
    JLE 0x0046ac66                      ; 0046ac00 | LAB_0046ac66
        ;   XREF to: 0046ac66 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046ac02
    PUSH EAX                            ; 0046ac05
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0046ac06 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046ac0b
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046ac0e
    INC dword ptr [EBP + 0x18]          ; 0046ac11
    MOV byte ptr [EDX],AL               ; 0046ac14
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046ac16
    PUSH EAX                            ; 0046ac19
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0046ac1a | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046ac1f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046ac22
    INC dword ptr [EBP + 0x18]          ; 0046ac25
    MOV byte ptr [EDX],AL               ; 0046ac28
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046ac2a
    PUSH EAX                            ; 0046ac2d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0046ac2e | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046ac33
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046ac36
    INC dword ptr [EBP + 0x18]          ; 0046ac39
    MOV byte ptr [EDX],AL               ; 0046ac3c
    CMP dword ptr [EBP + 0x24],0x20     ; 0046ac3e
    JNZ 0x0046ac57                      ; 0046ac42 | LAB_0046ac57
        ;   XREF to: 0046ac57 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046ac44
    PUSH EAX                            ; 0046ac47
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0046ac48 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046ac4d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046ac50
    MOV byte ptr [EDX],AL               ; 0046ac53
    JMP 0x0046ac5d                      ; 0046ac55 | LAB_0046ac5d
        ;   XREF to: 0046ac5d (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046ac57
        ;   Label: LAB_0046ac57
    MOV byte ptr [EAX],0xff             ; 0046ac5a
    INC dword ptr [EBP + 0x1c]          ; 0046ac5d
        ;   Label: LAB_0046ac5d
    ADD dword ptr [EBP + 0x20],-0x1     ; 0046ac60
    JMP 0x0046abfc                      ; 0046ac64 | LAB_0046abfc
        ;   XREF to: 0046abfc (UNCONDITIONAL_JUMP)
    POP EBP                             ; 0046ac66
        ;   Label: LAB_0046ac66
    POP EDI                             ; 0046ac67
    POP ESI                             ; 0046ac68
    POP EBX                             ; 0046ac69
    RET                                 ; 0046ac6a

