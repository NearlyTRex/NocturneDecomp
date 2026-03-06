; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_00586a90(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ac42
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_0064961f
;   TerminatedCString s_core_setutil_cpp_00649633
;   TerminatedCString s_C3DSLight_create_Out_of__00649647
;   CFilterCache* g_CFilterCachePtr = 020a4c08
;   CFilterCache g_CFilterCacheInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586a90
        ;   Label: core_setutil.cpp_C3DSLight_create_FUN_00586a90
    PUSH ESI                            ; 00586a91
    PUSH EDI                            ; 00586a92
    PUSH EBP                            ; 00586a93
    SUB ESP,0x4                         ; 00586a94
    MOV EBP,dword ptr [ESP + 0x18]      ; 00586a97
    PUSH 0x2f8                          ; 00586a9b
    PUSH 0x64961f                       ; 00586aa0 | = "..\\core\\setutil.cpp"
    PUSH 0x2fac                         ; 00586aa5
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00586aaa
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00586aaf
    TEST EAX,EAX                        ; 00586ab2
    JNZ 0x00586bbe                      ; 00586ab4
        ;   XREF to: 00586bbe (CONDITIONAL_JUMP)  ; LAB_00586bbe
    MOV dword ptr [ESP],EAX             ; 00586aba
        ;   Label: LAB_00586aba
    TEST EAX,EAX                        ; 00586abd
    JNZ 0x00586ae4                      ; 00586abf
        ;   XREF to: 00586ae4 (CONDITIONAL_JUMP)  ; LAB_00586ae4
    MOV EBX,0x649633                    ; 00586ac1 | = "..\\core\\setutil.cpp"
    MOV ESI,0x2f9                       ; 00586ac6
    PUSH 0x649647                       ; 00586acb | = "C3DSLight::create - Out of memory!"
    MOV dword ptr [0x02f0ca48],EBX      ; 00586ad0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00586ad6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00586adc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00586ae1
    MOV EDI,dword ptr [ESP]             ; 00586ae4
        ;   Label: LAB_00586ae4
    PUSH EDI                            ; 00586ae7
    CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0 ; 00586ae8
        ;   XREF to: 004727c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 00586aed
    ADD ESP,0x4                         ; 00586af3
    TEST EAX,EAX                        ; 00586af6
    JLE 0x00586bda                      ; 00586af8
        ;   XREF to: 00586bda (CONDITIONAL_JUMP)  ; LAB_00586bda
    MOV EAX,dword ptr [EBP + 0x11f0]    ; 00586afe
    MOV dword ptr [EDI + 0x1cb8],EAX    ; 00586b04
    MOV EBX,dword ptr [ESP]             ; 00586b0a
        ;   Label: LAB_00586b0a
    LEA EAX,[EBP + 0x104]               ; 00586b0d
    ADD EBX,0x4                         ; 00586b13
    CMP EBX,EAX                         ; 00586b16
    JZ 0x00586b2a                       ; 00586b18
        ;   XREF to: 00586b2a (CONDITIONAL_JUMP)  ; LAB_00586b2a
    MOV EDX,dword ptr [EAX]             ; 00586b1a
    MOV dword ptr [EBX],EDX             ; 00586b1c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00586b1e
    MOV dword ptr [EBX + 0x4],EDX       ; 00586b21
    MOV EDX,dword ptr [EAX + 0x8]       ; 00586b24
    MOV dword ptr [EBX + 0x8],EDX       ; 00586b27
    LEA EAX,[EBP + 0x110]               ; 00586b2a
        ;   Label: LAB_00586b2a
    PUSH EAX                            ; 00586b30
    MOV EAX,dword ptr [ESP + 0x4]       ; 00586b31
    ADD EAX,0x10                        ; 00586b35
    PUSH EAX                            ; 00586b38
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00586b39
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00586b3e
    MOV EAX,dword ptr [ESP]             ; 00586b41
    MOV EDX,dword ptr [EBP + 0x11c]     ; 00586b44
    MOV dword ptr [EAX + 0x38],EDX      ; 00586b4a
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 00586b4d
    XOR ESI,ESI                         ; 00586b53
    TEST EDX,EDX                        ; 00586b55
    JLE 0x00586b90                      ; 00586b57
        ;   XREF to: 00586b90 (CONDITIONAL_JUMP)  ; LAB_00586b90
    LEA EDI,[EBP + 0x11f4]              ; 00586b59
    MOV EBX,EBP                         ; 00586b5f
    MOV ECX,dword ptr [EBP + 0x11f0]    ; 00586b61
        ;   Label: LAB_00586b61
    PUSH ECX                            ; 00586b67
    PUSH EDI                            ; 00586b68
    MOV EAX,[0x0066efcc]                ; 00586b69 | g_CFilterCacheInstance | g_CFilterCachePtr
    PUSH EAX                            ; 00586b6e | g_CFilterCacheInstance
    ADD EBX,0x4                         ; 00586b6f
    INC ESI                             ; 00586b72
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 ; 00586b73
        ;   XREF to: 00470060 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060(CFilterCache * this_ptr, char * filter_name, int blend_filter)
    MOV dword ptr [EBX + 0x180c],EAX    ; 00586b78
    ADD EDI,0x28                        ; 00586b7e
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 00586b81
    ADD ESP,0xc                         ; 00586b87
    CMP ESI,EDX                         ; 00586b8a
    JL 0x00586b61                       ; 00586b8c
        ;   XREF to: 00586b61 (CONDITIONAL_JUMP)  ; LAB_00586b61
    MOV EAX,EAX                         ; 00586b8e
    MOV EDI,dword ptr [ESP]             ; 00586b90
        ;   Label: LAB_00586b90
    LEA ESI,[EBP + 0x4]                 ; 00586b93
    ADD EDI,0x40                        ; 00586b96
    PUSH EDI                            ; 00586b99
    MOV AL,byte ptr [ESI]               ; 00586b9a
        ;   Label: LAB_00586b9a
    MOV byte ptr [EDI],AL               ; 00586b9c
    CMP AL,0x0                          ; 00586b9e
    JZ 0x00586bb2                       ; 00586ba0
        ;   XREF to: 00586bb2 (CONDITIONAL_JUMP)  ; LAB_00586bb2
    MOV AL,byte ptr [ESI + 0x1]         ; 00586ba2
    ADD ESI,0x2                         ; 00586ba5
    MOV byte ptr [EDI + 0x1],AL         ; 00586ba8
    ADD EDI,0x2                         ; 00586bab
    CMP AL,0x0                          ; 00586bae
    JNZ 0x00586b9a                      ; 00586bb0
        ;   XREF to: 00586b9a (CONDITIONAL_JUMP)  ; LAB_00586b9a
    POP EDI                             ; 00586bb2
        ;   Label: LAB_00586bb2
    MOV EAX,dword ptr [ESP]             ; 00586bb3
    ADD ESP,0x4                         ; 00586bb6
    POP EBP                             ; 00586bb9
    POP EDI                             ; 00586bba
    POP ESI                             ; 00586bbb
    POP EBX                             ; 00586bbc
    RET                                 ; 00586bbd
    MOV EDX,dword ptr [EBP + 0x180c]    ; 00586bbe
        ;   Label: LAB_00586bbe
    PUSH EDX                            ; 00586bc4
    MOV ECX,dword ptr [EBP + 0x1808]    ; 00586bc5
    PUSH ECX                            ; 00586bcb
    PUSH EAX                            ; 00586bcc
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_004726a0 ; 00586bcd
        ;   XREF to: 004726a0 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 00586bd2
    JMP 0x00586aba                      ; 00586bd5
        ;   XREF to: 00586aba (UNCONDITIONAL_JUMP)  ; LAB_00586aba
    MOV dword ptr [EDI + 0x1cb8],0x1    ; 00586bda
        ;   Label: LAB_00586bda
    JMP 0x00586b0a                      ; 00586be4
        ;   XREF to: 00586b0a (UNCONDITIONAL_JUMP)  ; LAB_00586b0a

