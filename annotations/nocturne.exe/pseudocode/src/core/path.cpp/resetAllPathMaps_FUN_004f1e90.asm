; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_resetAllPathMaps_FUN_004f1e90(void)
;
;
; XREF[4]:
;   FUN_00511a10 at 00511a72
;   FUN_00511aa0 at 00511b02
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 0050782c
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30 at 00511b3d
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0058ce3f
;   TerminatedCString s_Global_pathmap_list_corr_0058ce50
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01e312f8
;
; Called Functions:
;   core_path.cpp_CPathMap_reset_FUN_004f1e10
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1e90
        ;   Label: core_path.cpp_resetAllPathMaps_FUN_004f1e90
    PUSH ESI                            ; 004f1e91
    PUSH EDI                            ; 004f1e92
    MOV EDX,dword ptr [0x01e312f8]      ; 004f1e93 | DAT_01e312f8
    XOR ESI,ESI                         ; 004f1e99
    TEST EDX,EDX                        ; 004f1e9b
    JLE 0x004f1ee9                      ; 004f1e9d
        ;   XREF to: 004f1ee9 (CONDITIONAL_JUMP)  ; LAB_004f1ee9
    XOR EBX,EBX                         ; 004f1e9f
    CMP dword ptr [EBX + 0x1e312fc],0x0 ; 004f1ea1
        ;   Label: LAB_004f1ea1
    JNZ 0x004f1ecc                      ; 004f1ea8
        ;   XREF to: 004f1ecc (CONDITIONAL_JUMP)  ; LAB_004f1ecc
    MOV EAX,0x58ce3f                    ; 004f1eaa | = "..\\core\\path.cpp"
    MOV EDX,0x6a1                       ; 004f1eaf
    PUSH 0x58ce50                       ; 004f1eb4 | = "Global pathmap list corruption"
    MOV [0x01cc4800],EAX                ; 004f1eb9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004f1ebe | DAT_01cc4804
    CALL FUN_004c8440                   ; 004f1ec4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004f1ec9
    MOV ECX,dword ptr [EBX + 0x1e312fc] ; 004f1ecc
        ;   Label: LAB_004f1ecc
    PUSH ECX                            ; 004f1ed2
    ADD EBX,0x4                         ; 004f1ed3
    INC ESI                             ; 004f1ed6
    CALL core_path.cpp_CPathMap_reset_FUN_004f1e10 ; 004f1ed7
        ;   XREF to: 004f1e10 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_reset_FUN_004f1e10()
    MOV EDI,dword ptr [0x01e312f8]      ; 004f1edc | DAT_01e312f8
    ADD ESP,0x4                         ; 004f1ee2
    CMP ESI,EDI                         ; 004f1ee5
    JL 0x004f1ea1                       ; 004f1ee7
        ;   XREF to: 004f1ea1 (CONDITIONAL_JUMP)  ; LAB_004f1ea1
    POP EDI                             ; 004f1ee9
        ;   Label: LAB_004f1ee9
    POP ESI                             ; 004f1eea
    POP EBX                             ; 004f1eeb
    RET                                 ; 004f1eec

