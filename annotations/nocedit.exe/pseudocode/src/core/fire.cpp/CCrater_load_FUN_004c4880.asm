; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CCrater_load_FUN_004c4880(CCrater * this_ptr, FILE * file_handle)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_load_FUN_004c9300 at 004c935f
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_00629e4f
;   TerminatedCString s_f_f_f_00629e5c
;   TerminatedCString s_f_f_f_00629e66
;   TerminatedCString s_f_f_f_00629e70
;   TerminatedCString s_f_f_f_00629e7a
;   TerminatedCString s_f_f_f_00629e84
;   TerminatedCString s_f_f_f_00629e8e
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4880
        ;   Label: core_fire.cpp_CCrater_load_FUN_004c4880
    PUSH ESI                            ; 004c4881
    PUSH EDI                            ; 004c4882
    PUSH EBP                            ; 004c4883
    SUB ESP,0x4                         ; 004c4884
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c4887
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c488b
    ADD EAX,0x18                        ; 004c488f
    PUSH EAX                            ; 004c4892
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c4893
    ADD EAX,0x8                         ; 004c4897
    PUSH EAX                            ; 004c489a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c489b
    ADD EAX,0x4                         ; 004c489f
    PUSH EAX                            ; 004c48a2
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c48a3
    PUSH EDX                            ; 004c48a7
    PUSH 0x629e4f                       ; 004c48a8 | = "%d,%d,%f,%f\n"
    PUSH EBP                            ; 004c48ad
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c48ae
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x18                        ; 004c48b3
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c48b6
    ADD EAX,0x14                        ; 004c48ba
    PUSH EAX                            ; 004c48bd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c48be
    ADD EAX,0x10                        ; 004c48c2
    PUSH EAX                            ; 004c48c5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c48c6
    ADD EAX,0xc                         ; 004c48ca
    PUSH EAX                            ; 004c48cd
    PUSH 0x629e5c                       ; 004c48ce | = "%f,%f,%f\n"
    PUSH EBP                            ; 004c48d3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c48d4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004c48d9
    XOR EBX,EBX                         ; 004c48dc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c48de
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c48e2
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c48e6
    ADD EAX,0x1c                        ; 004c48ea
    ADD EDI,0x20                        ; 004c48ed
    ADD ESI,0x24                        ; 004c48f0
    MOV dword ptr [ESP],EAX             ; 004c48f3
    IMUL EAX,EBX,0xc                    ; 004c48f6
        ;   Label: LAB_004c48f6
    PUSH ESI                            ; 004c48f9
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c48fa
    PUSH EDI                            ; 004c48fe
    ADD EAX,ECX                         ; 004c48ff
    PUSH EAX                            ; 004c4901
    PUSH 0x629e66                       ; 004c4902 | = "%f,%f,%f\n"
    ADD ESI,0xc                         ; 004c4907
    PUSH EBP                            ; 004c490a
    ADD EDI,0xc                         ; 004c490b
    INC EBX                             ; 004c490e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c490f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004c4914
    CMP EBX,0x3                         ; 004c4917
    JL 0x004c48f6                       ; 004c491a
        ;   XREF to: 004c48f6 (CONDITIONAL_JUMP)  ; LAB_004c48f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c491c
    ADD EAX,0x48                        ; 004c4920
    PUSH EAX                            ; 004c4923
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c4924
    ADD EAX,0x44                        ; 004c4928
    PUSH EAX                            ; 004c492b
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c492c
    ADD EAX,0x40                        ; 004c4930
    PUSH EAX                            ; 004c4933
    PUSH 0x629e70                       ; 004c4934 | = "%f,%f,%f\n"
    PUSH EBP                            ; 004c4939
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c493a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004c493f
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c4942
    ADD EAX,0x54                        ; 004c4946
    PUSH EAX                            ; 004c4949
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c494a
    ADD EAX,0x50                        ; 004c494e
    PUSH EAX                            ; 004c4951
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c4952
    ADD EAX,0x4c                        ; 004c4956
    PUSH EAX                            ; 004c4959
    PUSH 0x629e7a                       ; 004c495a | = "%f,%f,%f\n"
    PUSH EBP                            ; 004c495f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c4960
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004c4965
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c4968
    ADD EAX,0x60                        ; 004c496c
    PUSH EAX                            ; 004c496f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c4970
    ADD EAX,0x5c                        ; 004c4974
    PUSH EAX                            ; 004c4977
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c4978
    ADD EAX,0x58                        ; 004c497c
    PUSH EAX                            ; 004c497f
    PUSH 0x629e84                       ; 004c4980 | = "%f,%f,%f\n"
    PUSH EBP                            ; 004c4985
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c4986
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004c498b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c498e
    ADD EAX,0x6c                        ; 004c4992
    PUSH EAX                            ; 004c4995
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c4996
    ADD EAX,0x68                        ; 004c499a
    PUSH EAX                            ; 004c499d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c499e
    ADD EAX,0x64                        ; 004c49a2
    PUSH EAX                            ; 004c49a5
    PUSH 0x629e8e                       ; 004c49a6 | = "%f,%f,%f\n"
    PUSH EBP                            ; 004c49ab
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004c49ac
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004c49b1
    ADD ESP,0x4                         ; 004c49b4
    POP EBP                             ; 004c49b7
    POP EDI                             ; 004c49b8
    POP ESI                             ; 004c49b9
    POP EBX                             ; 004c49ba
    RET                                 ; 004c49bb

