; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(CDemonSet *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 0050757c
;
; Referenced Globals:
;   TerminatedCString s_d_00590c5f
;   TerminatedCString s_d_00590c63
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513ce0
        ;   Label: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0
    PUSH ESI                            ; 00513ce1
    PUSH EDI                            ; 00513ce2
    PUSH EBP                            ; 00513ce3
    SUB ESP,0x108                       ; 00513ce4
    MOV ESI,dword ptr [ESP + 0x120]     ; 00513cea
    PUSH ESI                            ; 00513cf1
    PUSH 0xff                           ; 00513cf2
    LEA EAX,[ESP + 0x8]                 ; 00513cf7
    PUSH EAX                            ; 00513cfb
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00513cfc
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00513d01
    LEA EAX,[ESP + 0x100]               ; 00513d04
    PUSH EAX                            ; 00513d0b
    PUSH 0x590c5f                       ; 00513d0c | = "%d\n"
    PUSH ESI                            ; 00513d11
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00513d12
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00513d17
    MOV EDX,dword ptr [ESP + 0x100]     ; 00513d1a
    XOR EDI,EDI                         ; 00513d21
    TEST EDX,EDX                        ; 00513d23
    JLE 0x00513d73                      ; 00513d25
        ;   XREF to: 00513d73 (CONDITIONAL_JUMP)  ; LAB_00513d73
    LEA EAX,[ESP + 0x104]               ; 00513d27
        ;   Label: LAB_00513d27
    PUSH EAX                            ; 00513d2e
    PUSH 0x590c63                       ; 00513d2f | = "\"%*[^\"]\", %d\n"
    PUSH ESI                            ; 00513d34
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00513d35
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00513d3a
    MOV EBP,dword ptr [ESP + 0x104]     ; 00513d3d
    XOR EBX,EBX                         ; 00513d44
    TEST EBP,EBP                        ; 00513d46
    JLE 0x00513d67                      ; 00513d48
        ;   XREF to: 00513d67 (CONDITIONAL_JUMP)  ; LAB_00513d67
    PUSH ESI                            ; 00513d4a
        ;   Label: LAB_00513d4a
    PUSH 0xff                           ; 00513d4b
    LEA EAX,[ESP + 0x8]                 ; 00513d50
    PUSH EAX                            ; 00513d54
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00513d55
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00513d5a
    INC EBX                             ; 00513d5d
    CMP EBX,dword ptr [ESP + 0x104]     ; 00513d5e
    JL 0x00513d4a                       ; 00513d65
        ;   XREF to: 00513d4a (CONDITIONAL_JUMP)  ; LAB_00513d4a
    MOV ECX,dword ptr [ESP + 0x100]     ; 00513d67
        ;   Label: LAB_00513d67
    INC EDI                             ; 00513d6e
    CMP EDI,ECX                         ; 00513d6f
    JL 0x00513d27                       ; 00513d71
        ;   XREF to: 00513d27 (CONDITIONAL_JUMP)  ; LAB_00513d27
    ADD ESP,0x108                       ; 00513d73
        ;   Label: LAB_00513d73
    POP EBP                             ; 00513d79
    POP EDI                             ; 00513d7a
    POP ESI                             ; 00513d7b
    POP EBX                             ; 00513d7c
    RET                                 ; 00513d7d

