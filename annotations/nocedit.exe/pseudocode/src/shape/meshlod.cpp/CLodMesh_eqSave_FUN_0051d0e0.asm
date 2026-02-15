; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_eqSave_FUN_0051d0e0(CLodMesh *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516ded
;
; Referenced Globals:
;   TerminatedCString s_d_006380b5
;   TerminatedCString s_d_d_lg_g_006380b9
;   double DOUBLE_006380cd = 0.990000000000000
;   double g_InfiniteCollapseCost = 1.00000000000000E+35
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d0e0
        ;   Label: shape_meshlod.cpp_CLodMesh_eqSave_FUN_0051d0e0
    PUSH ESI                            ; 0051d0e1
    PUSH EDI                            ; 0051d0e2
    PUSH EBP                            ; 0051d0e3
    MOV EBP,ESP                         ; 0051d0e4
    SUB ESP,0x8                         ; 0051d0e6
    AND ESP,0xfffffff8                  ; 0051d0e9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051d0ec
    MOV EDX,dword ptr [EBP + 0x18]      ; 0051d0ef
    TEST EDX,EDX                        ; 0051d0f2
    JNZ 0x0051d0fd                      ; 0051d0f4
        ;   XREF to: 0051d0fd (CONDITIONAL_JUMP)  ; LAB_0051d0fd
    MOV ESP,EBP                         ; 0051d0f6
        ;   Label: LAB_0051d0f6
    POP EBP                             ; 0051d0f8
    POP EDI                             ; 0051d0f9
    POP ESI                             ; 0051d0fa
    POP EBX                             ; 0051d0fb
    RET                                 ; 0051d0fc
    MOV ECX,dword ptr [EDI + 0x44]      ; 0051d0fd
        ;   Label: LAB_0051d0fd
    PUSH ECX                            ; 0051d100
    PUSH 0x6380b5                       ; 0051d101 | = "%d\n"
    PUSH EDX                            ; 0051d106
    XOR EBX,EBX                         ; 0051d107
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051d109
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ESI,dword ptr [EDI + 0x44]      ; 0051d10e
    ADD ESP,0xc                         ; 0051d111
    TEST ESI,ESI                        ; 0051d114
    JLE 0x0051d0f6                      ; 0051d116
        ;   XREF to: 0051d0f6 (CONDITIONAL_JUMP)  ; LAB_0051d0f6
    FLD double ptr [0x00661388]         ; 0051d118 | g_InfiniteCollapseCost
    FMUL double ptr [0x006380cd]        ; 0051d11e | DOUBLE_006380cd
    XOR ESI,ESI                         ; 0051d124
    FSTP double ptr [ESP]               ; 0051d126
    MOV EDX,dword ptr [EDI + 0x48]      ; 0051d129
        ;   Label: LAB_0051d129
    ADD EDX,ESI                         ; 0051d12c
    FLD double ptr [EDX + 0x8]          ; 0051d12e
    FCOMP double ptr [ESP]              ; 0051d131
    FNSTSW AX                           ; 0051d134
    SAHF                                ; 0051d136
    JC 0x0051d140                       ; 0051d137
        ;   XREF to: 0051d140 (CONDITIONAL_JUMP)  ; LAB_0051d140
    MOV dword ptr [EDX + 0x10],0x0      ; 0051d139
    SUB ESP,0x8                         ; 0051d140
        ;   Label: LAB_0051d140
    FLD float ptr [EDX + 0x10]          ; 0051d143
    FSTP double ptr [ESP]               ; 0051d146
    MOV EAX,dword ptr [EDX + 0xc]       ; 0051d149
    PUSH EAX                            ; 0051d14c
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051d14d
    PUSH ECX                            ; 0051d150
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051d151
    PUSH EAX                            ; 0051d154
    MOV ECX,dword ptr [EDX]             ; 0051d155
    PUSH ECX                            ; 0051d157
    PUSH 0x6380b9                       ; 0051d158 | = "%d,%d,%lg,%g\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051d15d
    PUSH EAX                            ; 0051d160
    ADD ESI,0xf0                        ; 0051d161
    INC EBX                             ; 0051d167
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0051d168
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [EDI + 0x44]      ; 0051d16d
    ADD ESP,0x20                        ; 0051d170
    CMP EBX,EDX                         ; 0051d173
    JGE 0x0051d0f6                      ; 0051d175
        ;   XREF to: 0051d0f6 (CONDITIONAL_JUMP)  ; LAB_0051d0f6
    JMP 0x0051d129                      ; 0051d17b
        ;   XREF to: 0051d129 (UNCONDITIONAL_JUMP)  ; LAB_0051d129

