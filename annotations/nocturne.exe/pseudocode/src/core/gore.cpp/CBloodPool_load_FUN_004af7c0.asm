; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_load_FUN_004af7c0(CBloodPool *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_gore.cpp_CGore_load_FUN_004b0820 at 004b086b
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0058513c
;   TerminatedCString s_d_d_00585146
;   TerminatedCString s_d_f_d_d_d_0058514d
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af7c0
        ;   Label: core_gore.cpp_CBloodPool_load_FUN_004af7c0
    PUSH ESI                            ; 004af7c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004af7c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004af7c6
    LEA EAX,[EBX + 0xc]                 ; 004af7ca
    PUSH EAX                            ; 004af7cd
    LEA EAX,[EBX + 0x8]                 ; 004af7ce
    PUSH EAX                            ; 004af7d1
    LEA EAX,[EBX + 0x4]                 ; 004af7d2
    PUSH EAX                            ; 004af7d5
    PUSH 0x58513c                       ; 004af7d6 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004af7db
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004af7dc
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004af7e1
    LEA EAX,[EBX + 0x10]                ; 004af7e4
    PUSH EAX                            ; 004af7e7
    PUSH EBX                            ; 004af7e8
    PUSH 0x585146                       ; 004af7e9 | = "%d,%d\n"
    PUSH ESI                            ; 004af7ee
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004af7ef
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004af7f4
    LEA EAX,[EBX + 0x24]                ; 004af7f7
    PUSH EAX                            ; 004af7fa
    LEA EAX,[EBX + 0x20]                ; 004af7fb
    PUSH EAX                            ; 004af7fe
    LEA EAX,[EBX + 0x1c]                ; 004af7ff
    PUSH EAX                            ; 004af802
    LEA EAX,[EBX + 0x18]                ; 004af803
    PUSH EAX                            ; 004af806
    ADD EBX,0x14                        ; 004af807
    PUSH EBX                            ; 004af80a
    PUSH 0x58514d                       ; 004af80b | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004af810
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004af811
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 004af816
    POP ESI                             ; 004af819
    POP EBX                             ; 004af81a
    RET                                 ; 004af81b

