; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl core_setutil_cpp_C3DSLight_create_FUN_00542940(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 00534652
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005d0f76
;   TerminatedCString s_C3DSLight_create_Out_of_005d0f8a
;   CFilterCache* g_CFilterCachePtr = 01548f90
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dfilter.cpp_FUN_00459710
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dlight.cpp_CDemonLight_ctor_FUN_0045c180
;   core_dlight.cpp_CDemonLight_init_FUN_0045c2a0
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542940
        ;   Label: core_setutil.cpp_C3DSLight_create_FUN_00542940
    PUSH ESI                            ; 00542941
    PUSH EDI                            ; 00542942
    PUSH EBP                            ; 00542943
    SUB ESP,0x4                         ; 00542944
    MOV EBP,dword ptr [ESP + 0x18]      ; 00542947
    PUSH 0x2fac                         ; 0054294b
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00542950
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00542955
    TEST EAX,EAX                        ; 00542958
    JNZ 0x00542a6e                      ; 0054295a
        ;   XREF to: 00542a6e (CONDITIONAL_JUMP)  ; LAB_00542a6e
    MOV dword ptr [ESP],EAX             ; 00542960
        ;   Label: LAB_00542960
    TEST EAX,EAX                        ; 00542963
    JNZ 0x0054298a                      ; 00542965
        ;   XREF to: 0054298a (CONDITIONAL_JUMP)  ; LAB_0054298a
    MOV EBX,0x5d0f76                    ; 00542967 | = "..\\core\\setutil.cpp"
    MOV ESI,0x2f9                       ; 0054296c
    PUSH 0x5d0f8a                       ; 00542971 | = "C3DSLight::create - Out of memory!"
    MOV dword ptr [0x01d71de0],EBX      ; 00542976 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054297c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00542982
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00542987
    MOV EDI,dword ptr [ESP]             ; 0054298a
        ;   Label: LAB_0054298a
    PUSH EDI                            ; 0054298d
    CALL core_dlight.cpp_CDemonLight_init_FUN_0045c2a0 ; 0054298e
        ;   XREF to: 0045c2a0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_0045c2a0(CDemonLight * this_ptr)
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 00542993
    ADD ESP,0x4                         ; 00542999
    TEST EAX,EAX                        ; 0054299c
    JLE 0x00542a8a                      ; 0054299e
        ;   XREF to: 00542a8a (CONDITIONAL_JUMP)  ; LAB_00542a8a
    MOV EAX,dword ptr [EBP + 0x11f0]    ; 005429a4
    MOV dword ptr [EDI + 0x1cb8],EAX    ; 005429aa
    MOV EBX,dword ptr [ESP]             ; 005429b0
        ;   Label: LAB_005429b0
    LEA EAX,[EBP + 0x104]               ; 005429b3
    ADD EBX,0x4                         ; 005429b9
    CMP EBX,EAX                         ; 005429bc
    JZ 0x005429d0                       ; 005429be
        ;   XREF to: 005429d0 (CONDITIONAL_JUMP)  ; LAB_005429d0
    MOV EDX,dword ptr [EAX]             ; 005429c0
    MOV dword ptr [EBX],EDX             ; 005429c2
    MOV EDX,dword ptr [EAX + 0x4]       ; 005429c4
    MOV dword ptr [EBX + 0x4],EDX       ; 005429c7
    MOV EDX,dword ptr [EAX + 0x8]       ; 005429ca
    MOV dword ptr [EBX + 0x8],EDX       ; 005429cd
    LEA EAX,[EBP + 0x110]               ; 005429d0
        ;   Label: LAB_005429d0
    PUSH EAX                            ; 005429d6
    MOV EAX,dword ptr [ESP + 0x4]       ; 005429d7
    ADD EAX,0x10                        ; 005429db
    PUSH EAX                            ; 005429de
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 005429df
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005429e4
    MOV EAX,dword ptr [ESP]             ; 005429e7
    MOV EDX,dword ptr [EBP + 0x11c]     ; 005429ea
    MOV dword ptr [EAX + 0x38],EDX      ; 005429f0
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 005429f3
    XOR ESI,ESI                         ; 005429f9
    TEST EDX,EDX                        ; 005429fb
    JLE 0x00542a40                      ; 005429fd
        ;   XREF to: 00542a40 (CONDITIONAL_JUMP)  ; LAB_00542a40
    LEA EDI,[EBP + 0x11f4]              ; 005429ff
    MOV EBX,EBP                         ; 00542a05
    MOV ECX,dword ptr [EBP + 0x11f0]    ; 00542a07
        ;   Label: LAB_00542a07
    PUSH ECX                            ; 00542a0d
    PUSH EDI                            ; 00542a0e
    MOV EAX,[0x005f190c]                ; 00542a0f | g_CFilterCachePtr
    PUSH EAX                            ; 00542a14
    ADD EBX,0x4                         ; 00542a15
    INC ESI                             ; 00542a18
    CALL core_dfilter.cpp_FUN_00459710  ; 00542a19
        ;   XREF to: 00459710 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_FUN_00459710()
    MOV dword ptr [EBX + 0x180c],EAX    ; 00542a1e
    ADD EDI,0x28                        ; 00542a24
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 00542a27
    ADD ESP,0xc                         ; 00542a2d
    CMP ESI,EDX                         ; 00542a30
    JL 0x00542a07                       ; 00542a32
        ;   XREF to: 00542a07 (CONDITIONAL_JUMP)  ; LAB_00542a07
    LEA EAX,[EAX]                       ; 00542a34
    LEA EDX,[EDX]                       ; 00542a3a
    MOV EDI,dword ptr [ESP]             ; 00542a40
        ;   Label: LAB_00542a40
    LEA ESI,[EBP + 0x4]                 ; 00542a43
    ADD EDI,0x40                        ; 00542a46
    PUSH EDI                            ; 00542a49
    MOV AL,byte ptr [ESI]               ; 00542a4a
        ;   Label: LAB_00542a4a
    MOV byte ptr [EDI],AL               ; 00542a4c
    CMP AL,0x0                          ; 00542a4e
    JZ 0x00542a62                       ; 00542a50
        ;   XREF to: 00542a62 (CONDITIONAL_JUMP)  ; LAB_00542a62
    MOV AL,byte ptr [ESI + 0x1]         ; 00542a52
    ADD ESI,0x2                         ; 00542a55
    MOV byte ptr [EDI + 0x1],AL         ; 00542a58
    ADD EDI,0x2                         ; 00542a5b
    CMP AL,0x0                          ; 00542a5e
    JNZ 0x00542a4a                      ; 00542a60
        ;   XREF to: 00542a4a (CONDITIONAL_JUMP)  ; LAB_00542a4a
    POP EDI                             ; 00542a62
        ;   Label: LAB_00542a62
    MOV EAX,dword ptr [ESP]             ; 00542a63
    ADD ESP,0x4                         ; 00542a66
    POP EBP                             ; 00542a69
    POP EDI                             ; 00542a6a
    POP ESI                             ; 00542a6b
    POP EBX                             ; 00542a6c
    RET                                 ; 00542a6d
    MOV EDX,dword ptr [EBP + 0x180c]    ; 00542a6e
        ;   Label: LAB_00542a6e
    PUSH EDX                            ; 00542a74
    MOV ECX,dword ptr [EBP + 0x1808]    ; 00542a75
    PUSH ECX                            ; 00542a7b
    PUSH EAX                            ; 00542a7c
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_0045c180 ; 00542a7d
        ;   XREF to: 0045c180 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_0045c180(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 00542a82
    JMP 0x00542960                      ; 00542a85
        ;   XREF to: 00542960 (UNCONDITIONAL_JUMP)  ; LAB_00542960
    MOV dword ptr [EDI + 0x1cb8],0x1    ; 00542a8a
        ;   Label: LAB_00542a8a
    JMP 0x005429b0                      ; 00542a94
        ;   XREF to: 005429b0 (UNCONDITIONAL_JUMP)  ; LAB_005429b0

