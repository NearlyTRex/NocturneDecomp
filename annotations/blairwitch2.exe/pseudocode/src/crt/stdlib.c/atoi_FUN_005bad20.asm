; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdlib_c_atoi_FUN_005bad20(char *string_ptr)
;
; Parameters:
; char *           Stack[0x4]:4   string_ptr
;
; XREF[5]:
;   core_patrpoin.cpp_FUN_0059c9c0 at 0059ca44
;   core_texlist.cpp_CTextureList_load_FUN_005734b0 at 00573604
;   engine_ini.cpp_FUN_004d8840 at 004d88a4
;   wincore_winvideo.cpp_FUN_00591190 at 00591270
;   wincore_winvideo.cpp_openMovie_FUN_00590e90 at 00590f11
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bad20
        ;   Label: crt_stdlib.c_atoi_FUN_005bad20
    MOV EAX,dword ptr [ESP + 0x8]       ; 005bad21
    MOV DL,byte ptr [EAX]               ; 005bad25
        ;   Label: LAB_005bad25
    INC DL                              ; 005bad27
    AND EDX,0xff                        ; 005bad29
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 005bad2f | DAT_0061ed94
    JZ 0x005bad3b                       ; 005bad36
        ;   XREF to: 005bad3b (CONDITIONAL_JUMP)  ; LAB_005bad3b
    INC EAX                             ; 005bad38
    JMP 0x005bad25                      ; 005bad39
        ;   XREF to: 005bad25 (UNCONDITIONAL_JUMP)  ; LAB_005bad25
    MOV CL,byte ptr [EAX]               ; 005bad3b
        ;   Label: LAB_005bad3b
    CMP CL,0x2b                         ; 005bad3d
    JZ 0x005bad47                       ; 005bad40
        ;   XREF to: 005bad47 (CONDITIONAL_JUMP)  ; LAB_005bad47
    CMP CL,0x2d                         ; 005bad42
    JNZ 0x005bad48                      ; 005bad45
        ;   XREF to: 005bad48 (CONDITIONAL_JUMP)  ; LAB_005bad48
    INC EAX                             ; 005bad47
        ;   Label: LAB_005bad47
    XOR EDX,EDX                         ; 005bad48
        ;   Label: LAB_005bad48
    MOV BL,byte ptr [EAX]               ; 005bad4a
        ;   Label: LAB_005bad4a
    INC BL                              ; 005bad4c
    AND EBX,0xff                        ; 005bad4e
    TEST byte ptr [EBX + 0x61ed94],0x20 ; 005bad54 | DAT_0061ed94
    JZ 0x005bad6c                       ; 005bad5b
        ;   XREF to: 005bad6c (CONDITIONAL_JUMP)  ; LAB_005bad6c
    IMUL EDX,EDX,0xa                    ; 005bad5d
    XOR EBX,EBX                         ; 005bad60
    MOV BL,byte ptr [EAX]               ; 005bad62
    ADD EDX,EBX                         ; 005bad64
    INC EAX                             ; 005bad66
    SUB EDX,0x30                        ; 005bad67
    JMP 0x005bad4a                      ; 005bad6a
        ;   XREF to: 005bad4a (UNCONDITIONAL_JUMP)  ; LAB_005bad4a
    CMP CL,0x2d                         ; 005bad6c
        ;   Label: LAB_005bad6c
    JNZ 0x005bad73                      ; 005bad6f
        ;   XREF to: 005bad73 (CONDITIONAL_JUMP)  ; LAB_005bad73
    NEG EDX                             ; 005bad71
    MOV EAX,EDX                         ; 005bad73
        ;   Label: LAB_005bad73
    POP EBX                             ; 005bad75
    RET                                 ; 005bad76

