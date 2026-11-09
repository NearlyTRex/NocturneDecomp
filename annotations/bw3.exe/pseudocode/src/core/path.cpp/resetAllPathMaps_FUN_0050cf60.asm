; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_resetAllPathMaps_FUN_0050cf60(void)
;
;
; XREF[4]:
;   core_set.cpp_FUN_00532b80 at 0053360f
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00 at 0053ee72
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40 at 0053ef4d
;   core_setcolid.cpp_FUN_0053eea0 at 0053ef12
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_005cb90c
;   TerminatedCString s_Global_pathmap_list_corr_005cb91d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ec1518
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_path.cpp_CPathMap_reset_FUN_0050cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cf60
        ;   Label: core_path.cpp_resetAllPathMaps_FUN_0050cf60
    PUSH ESI                            ; 0050cf61
    PUSH EDI                            ; 0050cf62
    MOV EDX,dword ptr [0x01ec1518]      ; 0050cf63 | DAT_01ec1518
    XOR ESI,ESI                         ; 0050cf69
    TEST EDX,EDX                        ; 0050cf6b
    JLE 0x0050cfb9                      ; 0050cf6d
        ;   XREF to: 0050cfb9 (CONDITIONAL_JUMP)  ; LAB_0050cfb9
    XOR EBX,EBX                         ; 0050cf6f
    CMP dword ptr [EBX + 0x1ec151c],0x0 ; 0050cf71
        ;   Label: LAB_0050cf71
    JNZ 0x0050cf9c                      ; 0050cf78
        ;   XREF to: 0050cf9c (CONDITIONAL_JUMP)  ; LAB_0050cf9c
    MOV EAX,0x5cb90c                    ; 0050cf7a | = "..\\core\\path.cpp"
    MOV EDX,0x6a2                       ; 0050cf7f
    PUSH 0x5cb91d                       ; 0050cf84 | = "Global pathmap list corruption"
    MOV [0x01d71de0],EAX                ; 0050cf89 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0050cf8e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050cf94
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050cf99
    MOV ECX,dword ptr [EBX + 0x1ec151c] ; 0050cf9c
        ;   Label: LAB_0050cf9c
    PUSH ECX                            ; 0050cfa2
    ADD EBX,0x4                         ; 0050cfa3
    INC ESI                             ; 0050cfa6
    CALL core_path.cpp_CPathMap_reset_FUN_0050cee0 ; 0050cfa7
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_0050cee0(CPathMap * this_ptr)
    MOV EDI,dword ptr [0x01ec1518]      ; 0050cfac | DAT_01ec1518
    ADD ESP,0x4                         ; 0050cfb2
    CMP ESI,EDI                         ; 0050cfb5
    JL 0x0050cf71                       ; 0050cfb7
        ;   XREF to: 0050cf71 (CONDITIONAL_JUMP)  ; LAB_0050cf71
    POP EDI                             ; 0050cfb9
        ;   Label: LAB_0050cfb9
    POP ESI                             ; 0050cfba
    POP EBX                             ; 0050cfbb
    RET                                 ; 0050cfbc

