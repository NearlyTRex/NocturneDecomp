; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_save_FUN_004c9f20(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0 at 004fbfec
;
; Referenced Globals:
;   TerminatedCString s_Gore_005d9592
;   undefined4 DAT_005d95a0
;   undefined4 DAT_005d95a4
;   undefined4 DAT_01cbcaf8
;   undefined4 DAT_01cdde40
;
; Called Functions:
;   core_gore.cpp_CBloodPool_save_FUN_004c8e00
;   core_gore.cpp_CBloodSplat_save_FUN_004c8750
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9f20
        ;   Label: core_gore.cpp_CGore_save_FUN_004c9f20
    PUSH ESI                            ; 004c9f21
    PUSH EDI                            ; 004c9f22
    PUSH EBP                            ; 004c9f23
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c9f24
    PUSH 0x5d9592                       ; 004c9f28 | = "--- Gore ---\n"
    PUSH EDI                            ; 004c9f2d
    CALL crt_unknown.c_FUN_005b8010     ; 004c9f2e
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004c9f33
    MOV EDX,dword ptr [0x01cdde40]      ; 004c9f36 | DAT_01cdde40
    PUSH EDX                            ; 004c9f3c
    PUSH 0x5d95a0                       ; 004c9f3d | DAT_005d95a0
    PUSH EDI                            ; 004c9f42
    XOR ESI,ESI                         ; 004c9f43
    CALL crt_unknown.c_FUN_005b8010     ; 004c9f45
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ECX,dword ptr [0x01cdde40]      ; 004c9f4a | DAT_01cdde40
    ADD ESP,0xc                         ; 004c9f50
    TEST ECX,ECX                        ; 004c9f53
    JLE 0x004c9f80                      ; 004c9f55
        ;   XREF to: 004c9f80 (CONDITIONAL_JUMP)  ; LAB_004c9f80
    MOV EBX,0x1cdde44                   ; 004c9f57
    PUSH EDI                            ; 004c9f5c
        ;   Label: LAB_004c9f5c
    PUSH EBX                            ; 004c9f5d
    INC ESI                             ; 004c9f5e
    CALL core_gore.cpp_CBloodPool_save_FUN_004c8e00 ; 004c9f5f
        ;   XREF to: 004c8e00 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_save_FUN_004c8e00(CBloodPool * this_ptr, _FILE * file_handle)
    MOV EBP,dword ptr [0x01cdde40]      ; 004c9f64 | DAT_01cdde40
    ADD ESP,0x8                         ; 004c9f6a
    ADD EBX,0x28                        ; 004c9f6d
    CMP ESI,EBP                         ; 004c9f70
    JL 0x004c9f5c                       ; 004c9f72
        ;   XREF to: 004c9f5c (CONDITIONAL_JUMP)  ; LAB_004c9f5c
    LEA EAX,[EAX]                       ; 004c9f74
    LEA EDX,[EDX]                       ; 004c9f7a
    MOV EAX,[0x01cbcaf8]                ; 004c9f80 | DAT_01cbcaf8
        ;   Label: LAB_004c9f80
    PUSH EAX                            ; 004c9f85
    PUSH 0x5d95a4                       ; 004c9f86 | DAT_005d95a4
    PUSH EDI                            ; 004c9f8b
    XOR EBX,EBX                         ; 004c9f8c
    CALL crt_unknown.c_FUN_005b8010     ; 004c9f8e
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [0x01cbcaf8]      ; 004c9f93 | DAT_01cbcaf8
    ADD ESP,0xc                         ; 004c9f99
    TEST EDX,EDX                        ; 004c9f9c
    JLE 0x004c9fc0                      ; 004c9f9e
        ;   XREF to: 004c9fc0 (CONDITIONAL_JUMP)  ; LAB_004c9fc0
    MOV ESI,0x1cbcafc                   ; 004c9fa0
    PUSH EDI                            ; 004c9fa5
        ;   Label: LAB_004c9fa5
    PUSH ESI                            ; 004c9fa6
    INC EBX                             ; 004c9fa7
    CALL core_gore.cpp_CBloodSplat_save_FUN_004c8750 ; 004c9fa8
        ;   XREF to: 004c8750 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodSplat_save_FUN_004c8750(CBloodSplat * this_ptr, _FILE * file_handle)
    MOV ECX,dword ptr [0x01cbcaf8]      ; 004c9fad | DAT_01cbcaf8
    ADD ESP,0x8                         ; 004c9fb3
    ADD ESI,0x44                        ; 004c9fb6
    CMP EBX,ECX                         ; 004c9fb9
    JL 0x004c9fa5                       ; 004c9fbb
        ;   XREF to: 004c9fa5 (CONDITIONAL_JUMP)  ; LAB_004c9fa5
    LEA EAX,[EAX]                       ; 004c9fbd
    POP EBP                             ; 004c9fc0
        ;   Label: LAB_004c9fc0
    POP EDI                             ; 004c9fc1
    POP ESI                             ; 004c9fc2
    POP EBX                             ; 004c9fc3
    RET                                 ; 004c9fc4

