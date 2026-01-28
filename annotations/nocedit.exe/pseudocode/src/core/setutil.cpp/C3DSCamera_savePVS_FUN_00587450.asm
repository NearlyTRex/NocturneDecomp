; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 at 0057a7fe
;
; Referenced Globals:
;   TerminatedCString s_s_0_00649955
;   TerminatedCString s_d_00649958
;   TerminatedCString s_d_0064995c
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587450
        ;   Label: core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
    PUSH ESI                            ; 00587451
    PUSH EDI                            ; 00587452
    PUSH EBP                            ; 00587453
    MOV EDI,dword ptr [ESP + 0x14]      ; 00587454
    MOV EBP,dword ptr [ESP + 0x18]      ; 00587458
    CMP dword ptr [EDI + 0x140],0x0     ; 0058745c
    JNZ 0x005874b5                      ; 00587463
        ;   XREF to: 005874b5 (CONDITIONAL_JUMP)  ; LAB_005874b5
    MOV ECX,dword ptr [EDI + 0x194]     ; 00587465
    PUSH ECX                            ; 0058746b
    PUSH 0x649958                       ; 0058746c | = "%d\n"
    PUSH EBP                            ; 00587471
    XOR EBX,EBX                         ; 00587472
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587474
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV ESI,dword ptr [EDI + 0x194]     ; 00587479
    ADD ESP,0xc                         ; 0058747f
    TEST ESI,ESI                        ; 00587482
    JLE 0x005874b0                      ; 00587484
        ;   XREF to: 005874b0 (CONDITIONAL_JUMP)  ; LAB_005874b0
    XOR ESI,ESI                         ; 00587486
    MOV EAX,dword ptr [EDI + 0x198]     ; 00587488
        ;   Label: LAB_00587488
    MOV EDX,dword ptr [ESI + EAX*0x1]   ; 0058748e
    PUSH EDX                            ; 00587491
    PUSH 0x64995c                       ; 00587492 | = "\t%d\n"
    PUSH EBP                            ; 00587497
    ADD ESI,0x4                         ; 00587498
    INC EBX                             ; 0058749b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058749c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV ECX,dword ptr [EDI + 0x194]     ; 005874a1
    ADD ESP,0xc                         ; 005874a7
    CMP EBX,ECX                         ; 005874aa
    JL 0x00587488                       ; 005874ac
        ;   XREF to: 00587488 (CONDITIONAL_JUMP)  ; LAB_00587488
    MOV EAX,EAX                         ; 005874ae
    POP EBP                             ; 005874b0
        ;   Label: LAB_005874b0
    POP EDI                             ; 005874b1
    POP ESI                             ; 005874b2
    POP EBX                             ; 005874b3
    RET                                 ; 005874b4
    PUSH 0x649955                       ; 005874b5 | = "0\n"
        ;   Label: LAB_005874b5
    PUSH EBP                            ; 005874ba
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005874bb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 005874c0
    POP EBP                             ; 005874c3
    POP EDI                             ; 005874c4
    POP ESI                             ; 005874c5
    POP EBX                             ; 005874c6
    RET                                 ; 005874c7

