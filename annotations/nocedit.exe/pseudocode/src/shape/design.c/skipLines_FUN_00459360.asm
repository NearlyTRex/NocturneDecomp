; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_skipLines_FUN_00459360(FILE * file, int line_count)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
; int              Stack[0x8]:4   line_count
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_loadS3DModelFile_FUN_004593a0 at 004596c2
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459360
        ;   Label: shape_design.c_skipLines_FUN_00459360
    PUSH ESI                            ; 00459361
    PUSH EDI                            ; 00459362
    PUSH EBP                            ; 00459363
    MOV EBP,ESP                         ; 00459364
    SUB ESP,0x4                         ; 00459366
    CMP dword ptr [EBP + 0x18],0x0      ; 0045936c
        ;   Label: LAB_0045936c
    JLE 0x00459399                      ; 00459370 | LAB_00459399
        ;   XREF to: 00459399 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00459372
        ;   Label: LAB_00459372
    PUSH EAX                            ; 00459375
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00459376 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045937b
    MOV dword ptr [EBP + -0x4],EAX      ; 0045937e
    CMP dword ptr [EBP + -0x4],0x0      ; 00459381
    JGE 0x00459389                      ; 00459385 | LAB_00459389
        ;   XREF to: 00459389 (CONDITIONAL_JUMP)
    JMP 0x00459399                      ; 00459387 | LAB_00459399
        ;   XREF to: 00459399 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],0xa      ; 00459389
        ;   Label: LAB_00459389
    JNZ 0x00459391                      ; 0045938d | LAB_00459391
        ;   XREF to: 00459391 (CONDITIONAL_JUMP)
    JMP 0x00459393                      ; 0045938f | LAB_00459393
        ;   XREF to: 00459393 (UNCONDITIONAL_JUMP)
    JMP 0x00459372                      ; 00459391 | LAB_00459372
        ;   Label: LAB_00459391
        ;   XREF to: 00459372 (UNCONDITIONAL_JUMP)
    ADD dword ptr [EBP + 0x18],-0x1     ; 00459393
        ;   Label: LAB_00459393
    JMP 0x0045936c                      ; 00459397 | LAB_0045936c
        ;   XREF to: 0045936c (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00459399
        ;   Label: LAB_00459399
    POP EBP                             ; 0045939b
    POP EDI                             ; 0045939c
    POP ESI                             ; 0045939d
    POP EBX                             ; 0045939e
    RET                                 ; 0045939f

