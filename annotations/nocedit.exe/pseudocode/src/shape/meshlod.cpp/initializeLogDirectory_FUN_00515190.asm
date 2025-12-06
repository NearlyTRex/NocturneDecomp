; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_initializeLogDirectory_FUN_00515190(void)
;
;
; Referenced Globals:
;   TerminatedCString s_meshlod_00637339
;   TerminatedCString s_meshlod_simplify_log_0067d4a0
;
; Called Functions:
;   crt_file.c_create_directory_FUN_00600e10
;   crt_io.c_deleteFile_FUN_005ff9d0
;
; *****************************************************************************

section .text

    PUSH 0x637339                       ; 00515190 | = "meshlod" | s_meshlod_00637339 = meshlod
        ;   Label: shape_meshlod.cpp_initializeLogDirectory_FUN_00515190
    CALL crt_file.c_create_directory_FUN_00600e10 ; 00515195 | int crt_file.c_create_directory_FUN_00600e10(char * path)
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051519a
    PUSH 0x67d4a0                       ; 0051519d | = "meshlod\\simplify.log" | s_meshlod_simplify_log_0067d4a0 = meshlod\simplify.log
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 005151a2 | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005151a7
    LEA EAX,[EAX]                       ; 005151aa
    RET                                 ; 005151b0

