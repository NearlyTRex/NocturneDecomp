; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl core_setutil_cpp_C3DSLight_create_FUN_0053b6b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980 at 0052dbb2
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005e62fd
;   TerminatedCString s_C3DSLight_create_Out_of_005e6311
;   CFilterCache* g_CFilterCachePtr = 015111a8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dfilter.cpp_FUN_00447660
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dlight.cpp_CDemonLight_ctor_FUN_00449c70
;   core_dlight.cpp_CDemonLight_init_FUN_00449d90
;   core_main.c_FUN_004e4500
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b6b0
        ;   Label: core_setutil.cpp_C3DSLight_create_FUN_0053b6b0
    PUSH ESI                            ; 0053b6b1
    PUSH EDI                            ; 0053b6b2
    PUSH EBP                            ; 0053b6b3
    SUB ESP,0x4                         ; 0053b6b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053b6b7
    PUSH 0x2fb0                         ; 0053b6bb
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0053b6c0
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0053b6c5
    TEST EAX,EAX                        ; 0053b6c8
    JNZ 0x0053b7de                      ; 0053b6ca
        ;   XREF to: 0053b7de (CONDITIONAL_JUMP)  ; LAB_0053b7de
    MOV dword ptr [ESP],EAX             ; 0053b6d0
        ;   Label: LAB_0053b6d0
    TEST EAX,EAX                        ; 0053b6d3
    JNZ 0x0053b6fa                      ; 0053b6d5
        ;   XREF to: 0053b6fa (CONDITIONAL_JUMP)  ; LAB_0053b6fa
    MOV EBX,0x5e62fd                    ; 0053b6d7 | = "..\\core\\setutil.cpp"
    MOV ESI,0x2f9                       ; 0053b6dc
    PUSH 0x5e6311                       ; 0053b6e1 | = "C3DSLight::create - Out of memory!"
    MOV dword ptr [0x01d046a0],EBX      ; 0053b6e6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0053b6ec | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053b6f2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0053b6f7
    MOV EDI,dword ptr [ESP]             ; 0053b6fa
        ;   Label: LAB_0053b6fa
    PUSH EDI                            ; 0053b6fd
    CALL core_dlight.cpp_CDemonLight_init_FUN_00449d90 ; 0053b6fe
        ;   XREF to: 00449d90 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_00449d90(CDemonLight * this_ptr)
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 0053b703
    ADD ESP,0x4                         ; 0053b709
    TEST EAX,EAX                        ; 0053b70c
    JLE 0x0053b7fa                      ; 0053b70e
        ;   XREF to: 0053b7fa (CONDITIONAL_JUMP)  ; LAB_0053b7fa
    MOV EAX,dword ptr [EBP + 0x11f0]    ; 0053b714
    MOV dword ptr [EDI + 0x1cb8],EAX    ; 0053b71a
    MOV EBX,dword ptr [ESP]             ; 0053b720
        ;   Label: LAB_0053b720
    LEA EAX,[EBP + 0x104]               ; 0053b723
    ADD EBX,0x4                         ; 0053b729
    CMP EBX,EAX                         ; 0053b72c
    JZ 0x0053b740                       ; 0053b72e
        ;   XREF to: 0053b740 (CONDITIONAL_JUMP)  ; LAB_0053b740
    MOV EDX,dword ptr [EAX]             ; 0053b730
    MOV dword ptr [EBX],EDX             ; 0053b732
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053b734
    MOV dword ptr [EBX + 0x4],EDX       ; 0053b737
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053b73a
    MOV dword ptr [EBX + 0x8],EDX       ; 0053b73d
    LEA EAX,[EBP + 0x110]               ; 0053b740
        ;   Label: LAB_0053b740
    PUSH EAX                            ; 0053b746
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b747
    ADD EAX,0x10                        ; 0053b74b
    PUSH EAX                            ; 0053b74e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0053b74f
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053b754
    MOV EAX,dword ptr [ESP]             ; 0053b757
    MOV EDX,dword ptr [EBP + 0x11c]     ; 0053b75a
    MOV dword ptr [EAX + 0x38],EDX      ; 0053b760
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 0053b763
    XOR ESI,ESI                         ; 0053b769
    TEST EDX,EDX                        ; 0053b76b
    JLE 0x0053b7b0                      ; 0053b76d
        ;   XREF to: 0053b7b0 (CONDITIONAL_JUMP)  ; LAB_0053b7b0
    LEA EDI,[EBP + 0x11f4]              ; 0053b76f
    MOV EBX,EBP                         ; 0053b775
    MOV ECX,dword ptr [EBP + 0x11f0]    ; 0053b777
        ;   Label: LAB_0053b777
    PUSH ECX                            ; 0053b77d
    PUSH EDI                            ; 0053b77e
    MOV EAX,[0x0060a0b4]                ; 0053b77f | g_CFilterCachePtr
    PUSH EAX                            ; 0053b784
    ADD EBX,0x4                         ; 0053b785
    INC ESI                             ; 0053b788
    CALL core_dfilter.cpp_FUN_00447660  ; 0053b789
        ;   XREF to: 00447660 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_FUN_00447660()
    MOV dword ptr [EBX + 0x180c],EAX    ; 0053b78e
    ADD EDI,0x28                        ; 0053b794
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 0053b797
    ADD ESP,0xc                         ; 0053b79d
    CMP ESI,EDX                         ; 0053b7a0
    JL 0x0053b777                       ; 0053b7a2
        ;   XREF to: 0053b777 (CONDITIONAL_JUMP)  ; LAB_0053b777
    LEA EAX,[EAX]                       ; 0053b7a4
    LEA EDX,[EDX]                       ; 0053b7aa
    MOV EDI,dword ptr [ESP]             ; 0053b7b0
        ;   Label: LAB_0053b7b0
    LEA ESI,[EBP + 0x4]                 ; 0053b7b3
    ADD EDI,0x40                        ; 0053b7b6
    PUSH EDI                            ; 0053b7b9
    MOV AL,byte ptr [ESI]               ; 0053b7ba
        ;   Label: LAB_0053b7ba
    MOV byte ptr [EDI],AL               ; 0053b7bc
    CMP AL,0x0                          ; 0053b7be
    JZ 0x0053b7d2                       ; 0053b7c0
        ;   XREF to: 0053b7d2 (CONDITIONAL_JUMP)  ; LAB_0053b7d2
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b7c2
    ADD ESI,0x2                         ; 0053b7c5
    MOV byte ptr [EDI + 0x1],AL         ; 0053b7c8
    ADD EDI,0x2                         ; 0053b7cb
    CMP AL,0x0                          ; 0053b7ce
    JNZ 0x0053b7ba                      ; 0053b7d0
        ;   XREF to: 0053b7ba (CONDITIONAL_JUMP)  ; LAB_0053b7ba
    POP EDI                             ; 0053b7d2
        ;   Label: LAB_0053b7d2
    MOV EAX,dword ptr [ESP]             ; 0053b7d3
    ADD ESP,0x4                         ; 0053b7d6
    POP EBP                             ; 0053b7d9
    POP EDI                             ; 0053b7da
    POP ESI                             ; 0053b7db
    POP EBX                             ; 0053b7dc
    RET                                 ; 0053b7dd
    MOV EDX,dword ptr [EBP + 0x180c]    ; 0053b7de
        ;   Label: LAB_0053b7de
    PUSH EDX                            ; 0053b7e4
    MOV ECX,dword ptr [EBP + 0x1808]    ; 0053b7e5
    PUSH ECX                            ; 0053b7eb
    PUSH EAX                            ; 0053b7ec
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_00449c70 ; 0053b7ed
        ;   XREF to: 00449c70 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_00449c70(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 0053b7f2
    JMP 0x0053b6d0                      ; 0053b7f5
        ;   XREF to: 0053b6d0 (UNCONDITIONAL_JUMP)  ; LAB_0053b6d0
    MOV dword ptr [EDI + 0x1cb8],0x1    ; 0053b7fa
        ;   Label: LAB_0053b7fa
    JMP 0x0053b720                      ; 0053b804
        ;   XREF to: 0053b720 (UNCONDITIONAL_JUMP)  ; LAB_0053b720

