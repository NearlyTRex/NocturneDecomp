; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_atoi_FUN_005a5f50(char *string_ptr)
;
; Parameters:
; char *           Stack[0x4]:4   string_ptr
;
; XREF[4]:
;   core_texlist.cpp_CTextureList_load_FUN_005690c0 at 00569214
;   engine_ini.cpp_getProfileInteger_FUN_004d8950 at 004d89b4
;   wincore_winvideo.cpp_openMovie_FUN_00582bb0 at 00582c31
;   wincore_winvideo.cpp_playMovie_FUN_00582eb0 at 00582f90
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5f50
        ;   Label: crt_stdlib.c_atoi_FUN_005a5f50
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a5f51
    MOV DL,byte ptr [EAX]               ; 005a5f55
        ;   Label: LAB_005a5f55
    INC DL                              ; 005a5f57
    AND EDX,0xff                        ; 005a5f59
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 005a5f5f | DAT_006074b8
    JZ 0x005a5f6b                       ; 005a5f66
        ;   XREF to: 005a5f6b (CONDITIONAL_JUMP)  ; LAB_005a5f6b
    INC EAX                             ; 005a5f68
    JMP 0x005a5f55                      ; 005a5f69
        ;   XREF to: 005a5f55 (UNCONDITIONAL_JUMP)  ; LAB_005a5f55
    MOV CL,byte ptr [EAX]               ; 005a5f6b
        ;   Label: LAB_005a5f6b
    CMP CL,0x2b                         ; 005a5f6d
    JZ 0x005a5f77                       ; 005a5f70
        ;   XREF to: 005a5f77 (CONDITIONAL_JUMP)  ; LAB_005a5f77
    CMP CL,0x2d                         ; 005a5f72
    JNZ 0x005a5f78                      ; 005a5f75
        ;   XREF to: 005a5f78 (CONDITIONAL_JUMP)  ; LAB_005a5f78
    INC EAX                             ; 005a5f77
        ;   Label: LAB_005a5f77
    XOR EDX,EDX                         ; 005a5f78
        ;   Label: LAB_005a5f78
    MOV BL,byte ptr [EAX]               ; 005a5f7a
        ;   Label: LAB_005a5f7a
    INC BL                              ; 005a5f7c
    AND EBX,0xff                        ; 005a5f7e
    TEST byte ptr [EBX + 0x6074b8],0x20 ; 005a5f84 | DAT_006074b8
    JZ 0x005a5f9c                       ; 005a5f8b
        ;   XREF to: 005a5f9c (CONDITIONAL_JUMP)  ; LAB_005a5f9c
    IMUL EDX,EDX,0xa                    ; 005a5f8d
    XOR EBX,EBX                         ; 005a5f90
    MOV BL,byte ptr [EAX]               ; 005a5f92
    ADD EDX,EBX                         ; 005a5f94
    INC EAX                             ; 005a5f96
    SUB EDX,0x30                        ; 005a5f97
    JMP 0x005a5f7a                      ; 005a5f9a
        ;   XREF to: 005a5f7a (UNCONDITIONAL_JUMP)  ; LAB_005a5f7a
    CMP CL,0x2d                         ; 005a5f9c
        ;   Label: LAB_005a5f9c
    JNZ 0x005a5fa3                      ; 005a5f9f
        ;   XREF to: 005a5fa3 (CONDITIONAL_JUMP)  ; LAB_005a5fa3
    NEG EDX                             ; 005a5fa1
    MOV EAX,EDX                         ; 005a5fa3
        ;   Label: LAB_005a5fa3
    POP EBX                             ; 005a5fa5
    RET                                 ; 005a5fa6

