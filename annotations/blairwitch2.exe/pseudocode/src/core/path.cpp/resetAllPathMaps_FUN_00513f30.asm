; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_resetAllPathMaps_FUN_00513f30(void)
;
;
; XREF[4]:
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052cb6f
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00538160 at 0053816d
;   core_setcolid.cpp_FUN_00538020 at 00538092
;   core_setcolid.cpp_FUN_005380c0 at 00538132
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_005e1849
;   TerminatedCString s_Global_pathmap_list_corr_005e185a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e4fed8
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_path.cpp_CPathMap_reset_FUN_00513eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513f30
        ;   Label: core_path.cpp_resetAllPathMaps_FUN_00513f30
    PUSH ESI                            ; 00513f31
    PUSH EDI                            ; 00513f32
    MOV EDX,dword ptr [0x01e4fed8]      ; 00513f33 | DAT_01e4fed8
    XOR ESI,ESI                         ; 00513f39
    TEST EDX,EDX                        ; 00513f3b
    JLE 0x00513f89                      ; 00513f3d
        ;   XREF to: 00513f89 (CONDITIONAL_JUMP)  ; LAB_00513f89
    XOR EBX,EBX                         ; 00513f3f
    CMP dword ptr [EBX + 0x1e4fedc],0x0 ; 00513f41
        ;   Label: LAB_00513f41
    JNZ 0x00513f6c                      ; 00513f48
        ;   XREF to: 00513f6c (CONDITIONAL_JUMP)  ; LAB_00513f6c
    MOV EAX,0x5e1849                    ; 00513f4a | = "..\\core\\path.cpp"
    MOV EDX,0x6a1                       ; 00513f4f
    PUSH 0x5e185a                       ; 00513f54 | = "Global pathmap list corruption"
    MOV [0x01d046a0],EAX                ; 00513f59 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00513f5e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00513f64
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00513f69
    MOV ECX,dword ptr [EBX + 0x1e4fedc] ; 00513f6c
        ;   Label: LAB_00513f6c
    PUSH ECX                            ; 00513f72
    ADD EBX,0x4                         ; 00513f73
    INC ESI                             ; 00513f76
    CALL core_path.cpp_CPathMap_reset_FUN_00513eb0 ; 00513f77
        ;   XREF to: 00513eb0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00513eb0(CPathMap * this_ptr)
    MOV EDI,dword ptr [0x01e4fed8]      ; 00513f7c | DAT_01e4fed8
    ADD ESP,0x4                         ; 00513f82
    CMP ESI,EDI                         ; 00513f85
    JL 0x00513f41                       ; 00513f87
        ;   XREF to: 00513f41 (CONDITIONAL_JUMP)  ; LAB_00513f41
    POP EDI                             ; 00513f89
        ;   Label: LAB_00513f89
    POP ESI                             ; 00513f8a
    POP EBX                             ; 00513f8b
    RET                                 ; 00513f8c

