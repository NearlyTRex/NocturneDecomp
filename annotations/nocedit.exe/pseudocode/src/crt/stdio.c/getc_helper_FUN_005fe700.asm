; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_getc_helper_FUN_005fe700(scanf_state_t * state)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
;
; XREF[1]:
;   crt_stdio.c_vfscanf_FUN_005fe738 at 005fe78e
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe700
        ;   Label: crt_stdio.c_getc_helper_FUN_005fe700
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fe701
    MOV EDX,dword ptr [EBX + 0x8]       ; 005fe705
    PUSH EDX                            ; 005fe708
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005fe709 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005fe70e
    MOV EDX,EAX                         ; 005fe711
    CMP EAX,-0x1                        ; 005fe713
    JNZ 0x005fe71c                      ; 005fe716 | LAB_005fe71c
        ;   XREF to: 005fe71c (CONDITIONAL_JUMP)
    OR byte ptr [EBX + 0x10],0x2        ; 005fe718

