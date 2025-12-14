; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet * this_ptr, char * filename)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 at 00575b72
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 at 005770c0
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 at 0057a8ad
;
; Referenced Globals:
;   TerminatedCString s_wb_00646526
;   TerminatedCString s_data_00646529
;   TerminatedCString s_core_setdir_cpp_0064652e
;   TerminatedCString s_Can_t_create_s_00646541
;   TerminatedCString s_core_setdir_cpp_00646551
;   TerminatedCString s_Error_writing_s_00646564
;   TerminatedCString s_core_setdir_cpp_00646575
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CZThumb[1500] g_CZThumbPool
;   undefined4 DAT_03347130
;   undefined4 DAT_033471f8
;   undefined4 DAT_033472e8
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setdir.cpp_CZThumb_write_FUN_00574b20
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575e40
        ;   Label: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
    PUSH ESI                            ; 00575e41
    PUSH EDI                            ; 00575e42
    PUSH EBP                            ; 00575e43
    SUB ESP,0xc                         ; 00575e44
    PUSH 0x646526                       ; 00575e47 | = "wb"
    MOV EDX,dword ptr [ESP + 0x28]      ; 00575e4c
    PUSH EDX                            ; 00575e50
    PUSH 0x646529                       ; 00575e51 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00575e56
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00575e5b
    MOV EBP,EAX                         ; 00575e5e
    TEST EAX,EAX                        ; 00575e60
    JZ 0x00575f05                       ; 00575e62
        ;   XREF to: 00575f05 (CONDITIONAL_JUMP)  ; LAB_00575f05
    MOV EAX,dword ptr [ESP + 0x20]      ; 00575e68
        ;   Label: LAB_00575e68
    XOR EDI,EDI                         ; 00575e6c
    MOV EDX,dword ptr [EAX]             ; 00575e6e
    MOV dword ptr [ESP + 0x8],EDI       ; 00575e70
    TEST EDX,EDX                        ; 00575e74
    JLE 0x00575ee4                      ; 00575e76
        ;   XREF to: 00575ee4 (CONDITIONAL_JUMP)  ; LAB_00575ee4
    MOV EBX,0x3347108                   ; 00575e78 | g_CZThumbPool
    MOV dword ptr [ESP + 0x4],EAX       ; 00575e7d
    MOV dword ptr [ESP],EBX             ; 00575e81 | g_CZThumbPool
    MOV EAX,dword ptr [ESP + 0x4]       ; 00575e84
        ;   Label: LAB_00575e84
    MOV ESI,dword ptr [EAX + 0x144]     ; 00575e88
    MOV EDI,0x1                         ; 00575e8e
    TEST ESI,ESI                        ; 00575e93
    JZ 0x00575e9c                       ; 00575e95
        ;   XREF to: 00575e9c (CONDITIONAL_JUMP)  ; LAB_00575e9c
    MOV EDI,0x6                         ; 00575e97
    XOR ESI,ESI                         ; 00575e9c
        ;   Label: LAB_00575e9c
    TEST EDI,EDI                        ; 00575e9e
    JLE 0x00575eb7                      ; 00575ea0
        ;   XREF to: 00575eb7 (CONDITIONAL_JUMP)  ; LAB_00575eb7
    MOV EBX,dword ptr [ESP]             ; 00575ea2 | g_CZThumbPool | DAT_033471f8
    PUSH EBP                            ; 00575ea5
        ;   Label: LAB_00575ea5
    PUSH EBX                            ; 00575ea6 | g_CZThumbPool | DAT_03347130 | DAT_033471f8
    INC ESI                             ; 00575ea7
    CALL core_setdir.cpp_CZThumb_write_FUN_00574b20 ; 00575ea8
        ;   XREF to: 00574b20 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_write_FUN_00574b20(CZThumb * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 00575ead
    ADD EBX,0x28                        ; 00575eb0 | DAT_03347130
    CMP ESI,EDI                         ; 00575eb3
    JL 0x00575ea5                       ; 00575eb5
        ;   XREF to: 00575ea5 (CONDITIONAL_JUMP)  ; LAB_00575ea5
    MOV ECX,dword ptr [ESP + 0x4]       ; 00575eb7
        ;   Label: LAB_00575eb7
    MOV EBX,dword ptr [ESP]             ; 00575ebb
    MOV ESI,dword ptr [ESP + 0x8]       ; 00575ebe
    ADD EBX,0xf0                        ; 00575ec2
    ADD ECX,0x1a4                       ; 00575ec8
    MOV dword ptr [ESP],EBX             ; 00575ece | DAT_033471f8 | DAT_033472e8
    MOV EBX,dword ptr [ESP + 0x20]      ; 00575ed1
    INC ESI                             ; 00575ed5
    MOV dword ptr [ESP + 0x4],ECX       ; 00575ed6
    MOV EDI,dword ptr [EBX]             ; 00575eda
    MOV dword ptr [ESP + 0x8],ESI       ; 00575edc
    CMP ESI,EDI                         ; 00575ee0
    JL 0x00575e84                       ; 00575ee2
        ;   XREF to: 00575e84 (CONDITIONAL_JUMP)  ; LAB_00575e84
    TEST byte ptr [EBP + 0xc],0x20      ; 00575ee4
        ;   Label: LAB_00575ee4
    JNZ 0x00575f32                      ; 00575ee8
        ;   XREF to: 00575f32 (CONDITIONAL_JUMP)  ; LAB_00575f32
    PUSH 0x3cb                          ; 00575eea
        ;   Label: LAB_00575eea
    PUSH 0x646575                       ; 00575eef | = "..\\core\\setdir.cpp"
    PUSH EBP                            ; 00575ef4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00575ef5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00575efa
    ADD ESP,0xc                         ; 00575efd
    POP EBP                             ; 00575f00
    POP EDI                             ; 00575f01
    POP ESI                             ; 00575f02
    POP EBX                             ; 00575f03
    RET                                 ; 00575f04
    MOV ESI,dword ptr [ESP + 0x24]      ; 00575f05
        ;   Label: LAB_00575f05
    PUSH ESI                            ; 00575f09
    MOV ECX,0x64652e                    ; 00575f0a | = "..\\core\\setdir.cpp"
    MOV EBX,0x3bf                       ; 00575f0f
    PUSH 0x646541                       ; 00575f14 | = "Can't create %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 00575f19 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00575f1f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00575f25
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00575f2a
    JMP 0x00575e68                      ; 00575f2d
        ;   XREF to: 00575e68 (UNCONDITIONAL_JUMP)  ; LAB_00575e68
    MOV ECX,dword ptr [ESP + 0x24]      ; 00575f32
        ;   Label: LAB_00575f32
    PUSH ECX                            ; 00575f36
    MOV EAX,0x646551                    ; 00575f37 | = "..\\core\\setdir.cpp"
    MOV EDX,0x3ca                       ; 00575f3c
    PUSH 0x646564                       ; 00575f41 | = "Error writing %s"
    MOV [0x02f0ca48],EAX                ; 00575f46 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00575f4b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00575f51
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00575f56
    JMP 0x00575eea                      ; 00575f59
        ;   XREF to: 00575eea (UNCONDITIONAL_JUMP)  ; LAB_00575eea

